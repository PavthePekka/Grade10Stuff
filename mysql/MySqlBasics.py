import mysql.connector

mydb = mysql.connector.connect(host='localhost',user='root',password='pavan2005',database='testdb')

mycursor = mydb.cursor()
sqlINSERT = "INSERT INTO students (fullname,age) VALUES (%s,%s)" #%s is placeholder,INSERT INTO always first, then FIELDS, then VALUEs
sqlUpdate = "UPDATE students SET age = %s WHERE fullname = %s" #%s is placeholder,UPDATE always first, then set, then wildcard
sqlSelect = "SELECT * from students WHERE fullname = %s "
sqlLimitOffset = "SELECT * from students LIMIT 5 OFFSET 2 " #LIMIT means itll only select first 5, OFFSET means it starts 2 down from top
sqlOrder = "SELECT * FROM students ORDER BY fullname DESC" #ORDER By *field , default is ascending, use DESC after field to change
sqlDelete = f"DELETE FROM students WHERE fullname like 'J%' " #Same structure as delete , without *
sqlDrop = "DROP TABLE IF EXISTS students" #Deletes Table, checks is fit exists first

mycursor.execute(sqlDrop) # LIKE find things hy using % wildcard.In this case J% means
# starting with J, if it was %J it would be ending with J and  %J% means J is in the middle, but only if in "" or '' within string


myresult = mycursor.fetchall()

for row in myresult:
    print(row)

mydb.commit() #must commit/post change