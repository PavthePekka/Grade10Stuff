#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
/*My first C program!!!*/
void Basics(){
    const char BIRTHDAY[] = "23/12/2005";
    char name[] = "Pavan";
    int age = 17;
    double weight = 73.5;
    char yourname[20];
    int yourage;
    int FavNumbers[5] = {62,420,8,79,9};
    printf("My name is %s and I am %d years old\nMy weight is %g kgs\nI was born on %s\n",name,age,weight,BIRTHDAY);
    printf("What is your name:");
    scanf("%s",yourname);
    printf("What is your age:");
    scanf("%d",&yourage);
    printf("Hi %s you are %d years old\n", yourname,yourage);
    printf("My fav number is %d", FavNumbers[0]); 
}



int Max(int num1,int num2, int num3){
    if(num1 > num2 && num1> num3){
            return num1;
    }
    else if(num2 > num1 && num1> num3){
            return num2;
    }
    else{
        return num3;
    }
}

int Discount(int age){
    if(age >=60 || age <= 10){
            return 20;
    }
    else{
        return 0;
    }
}

void GradeCheck(char grade){
    /*REMEMBER char is '' , string is ""*/
     switch(grade){
        case 'A': printf("Nice\n");
        break;
        case 'B': printf("Good\n");
        break;
        case 'C': printf("Meh\n");
        break;
        case 'D': printf("Decent\n");
        break;
        case 'E': printf("Rlly bad\n");
        break;
        case 'F': printf("Failed\n");
        break;
        default : printf("foo\n");
   
    }
}


int length(int* array){
}

int main(){
    /*Basics();*/

    printf("%d\n", Max(1,2,3));

    /*int age;
    printf('How old is client: ');
    scanf("%d",&age);
    printf("Client gets a %d%% discount",Discount(age));*/

   GradeCheck('C');
/*Struct*/
   struct Person
{
    char name[50];
    int age;
    double weight;
};

struct Person Pavan;
strcpy(Pavan.name,"Pavan");
Pavan.weight = 75.2;
Pavan.age = 17;

char string[20];
strcpy(string,"I am string");
printf("%s\n",Pavan.name);
printf("%s\n",string);
/*Struct*/  

/*While loop*/
/*
int guess;
int flag = 0;
srand(time(0));
int randint = rand() % 10;
while(flag == 0){
    printf("Guess a number: ");
    scanf("%d",&guess);
    if(guess == randint ){
        printf("Well done!\n");
        flag = 1;
    }
    else{
        printf("Wrong!\n");
    }
   
    
}
/*
/*While loop*/

/*For loop*/
int arrnums[] = {4,3,5,1,6,9,7,8,2};
 
int i,j,temp;
for(i = 0; i < sizeof(arrnums)/sizeof(arrnums[0] - 1);i++){
    for(j = i + 1; j < sizeof(arrnums)/sizeof(arrnums[0]) ;j++){
       if(arrnums[i] > arrnums[j]){
        temp =arrnums[i];
        arrnums[i] = arrnums[j];
        arrnums[j] = temp;
       } 
    }
}

int z;
printf("[");
for(z = 0;z < sizeof(arrnums)/sizeof(arrnums[0]);z++ ){
    if(z != sizeof(arrnums)/sizeof(arrnums[0]) - 1){
        printf("%d,",arrnums[z]);
    }
    else{
        printf("%d",arrnums[z]);
    }
}
printf("]\n");
/*For loop*/

int age = 23;
int * pAge = &age;
printf("%p\n",pAge);
printf("%d\n",*pAge);  

int nums[] = {6,3,7,2,9,4};
int* pnums = &nums;
printf("%d\n",*pnums);
printf("%d\n",length(nums));
printf("%p",&nums[0]);
return 0; 

}







