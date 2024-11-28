#include<stdio.h>
#include<conio.h>
int main(){
int password=12345;
char username='a';

printf("Enter your username: \n");
scanf("%c",&username);

printf("Enter your password: \n");
scanf("%d",&password);

if(username=='a' && password==12345){
	printf("You have login sucsessfully!",username,password);
}
else{
	printf("invalaid input");
}
}
