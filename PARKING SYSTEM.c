#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int Menu();
int u=0;
void Bus();
void Cycle();
void Riksha();
void Delete();
void ShowDetail();
int nor=0,nob=0,noc=0,amount=0,count=0;
void main(){
	while(1){
		switch(Menu()){
			case 1 :
				Bus();
				break;
			case 2 :
				Cycle();
				break;
			case 3 :
				Riksha();
				break;
			case 4 :
				ShowDetail();
				break;
			case 5 :
				Delete();
				break;
			case 6 :
				exit(0);
			
			default : printf("Invalid Choice");	
		}
	}
}
int Menu(){
	int ch;
	if(u==0){
	printf("\n\n1 Enter Bus:");
	printf("\n2 Enter Cycle:");
	printf("\n3 Enter Riksha:");
	printf("\n4 Show Status:");
	printf("\n5 Delete Data:");
	printf("\n6 Exit:");
	printf("\n\nEnter Your Choice\n");
	scanf("%d",&ch);
	u++;
	return(ch);
}
else
{
	printf("\n\nEnter Your Choice\n");
	scanf("%d",&ch);
	return(ch);	
}
}
void Delete(){
	nor=0;
	nob=0;
	noc=0;
	amount=0;
	count=0;
}
void ShowDetail(){
	printf("\nNumber Of Bus=%d",nob);
	printf("\nNumber Of Cycle=%d",noc);
	printf("\nNumber Of Riksha=%d",nor);
	printf("\nTotal Number Of Vehicle=%d",count);
	printf("\nTotal Gain Amount=%d",amount);
}
void Riksha(){
	printf("Entry Is Sucessful");
	nor++;
	amount=amount+50;
	count++;
}
void Cycle(){
	printf("Entry Is Sucessful");
	noc++;
	amount=amount+20;
	count++;
}
void Bus(){
	printf("Entry Is Sucessful");
	nob++;
	amount=amount+100;
	count++;
}
