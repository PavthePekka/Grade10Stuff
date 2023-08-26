import mysql.connector
from datetime import datetime
mydb = mysql.connector.connect(host='localhost',user='root',password='pavan2005',database='testdb')
sqlCreateTable = "CREATE TABLE test (fullname varchar(50) NOT NULL, created datetime NOT NULL, gender ENUM('M','F','O') NOT NULL, ID integer PRIMARY KEY AUTO_INCREMENT NOT NULL)"

'''string is varchar(len), ENUM is like a MessagelDlg, you can mek a field a pk by putting PRIMARY KEY next to it AUTO_INCREMENT 
allows for autonumbers and not null , well is null check
'''


mycursor = mydb.cursor()
mycursor.execute() 


