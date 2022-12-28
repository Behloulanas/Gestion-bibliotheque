#include <iostream>  
#include<string>   
#include<conio.h>  
#include<windows.h>  
#include"extend.h"
#include"extend2.h"  
int main(int argc, char** argv) 
{ 
	system("cls");   
	Preloader();
	FrenchList: 
	//system("color 4F");
	int j=36;
	int i=38;
	int choix = 0,n;
	Livre l[20];
	gotoxy(j,4); 	std::cout<<"�������������������������������������������������������������������������";
	gotoxy(j,5); 	std::cout<<"�                                                                       �";
	gotoxy(j,6);	std::cout<<"�  ���������������          ������������������������������������        �";
	gotoxy(j,7); 	std::cout<<"�  �             �          �                 �                �        �";
	gotoxy(j,8); 	std::cout<<"�  �             �          �                 �                �        �";
	gotoxy(j,9); 	std::cout<<"�  �             �          �                 �                �        �";
	gotoxy(j,10);	std::cout<<"�  ���������������          �                 �                �        �";
	gotoxy(j,11);	std::cout<<"�                           �                 �                �        �";
	gotoxy(j,12);	std::cout<<"�                           ������������������������������������        �";
	gotoxy(j,13);	std::cout<<"�                           �                 �                �        �";
	gotoxy(j,14);	std::cout<<"�  ���������������          �                 �                �        �";
	gotoxy(j,15);	std::cout<<"�  �             �          �                 �                �        �";
	gotoxy(j,16);	std::cout<<"�  �             �          �                 �                �        �";
	gotoxy(j,17);	std::cout<<"�  �             �          �                 �                �        �";
	gotoxy(j,18);	std::cout<<"�  ���������������          ������������������������������������        �";
	gotoxy(j,19);	std::cout<<"�                                                                       �";
	gotoxy(j,20);	std::cout<<"�������������������������������������������������������������������������";
	gotoxy(42,8);std::cout<<"1-Reserve";
	gotoxy(42,16);	std::cout<<"2-Display";
	gotoxy(68,8);	std::cout<<"3-Account";
	gotoxy(68,10);	std::cout<<"4-Languages";
	gotoxy(85,8);	std::cout<<"5-Search";
	gotoxy(85,10);	std::cout<<"6-Modify";
	gotoxy(69,15);	std::cout<<"7-Delete"; 
	gotoxy(86,15);	std::cout<<"8-Leave";
	gotoxy(12,4);std::cout<<"MENU"; 
	gotoxy(11,5);std::cout<<"�������";
	gotoxy(6,8);std::cout<<"1-Reserve a book ";
	gotoxy(6,10);	std::cout<<"2-Display my List";
	gotoxy(6,12);	std::cout<<"3-My Library Account";
	gotoxy(6,14);	std::cout<<"4-Change language";
	gotoxy(6,16);	std::cout<<"5-Search for book";
	gotoxy(6,18);	std::cout<<"6-Modify a book "; 
	gotoxy(6,20);	std::cout<<"7-Delete a book ";
	gotoxy(6,22);	std::cout<<"8-Leave Console";
	gotoxy(40,24);std::cout<<"�����______LIBRARY-GESTION ______ ����";
	gotoxy(30,25);	std::cout<<"������������������������������������������������������";
	do
	{
	here:
	gotoxy(40,27); std::cout<<"choice: ";std::cin>>choix;
	switch(choix){
		case 1: 
		{
				system("cls"); 
				gotoxy(25,7);std::cout<<"�������������������������������������������������������������";
				gotoxy(25,8);std::cout<<"�";
				gotoxy(29,8);std::cout<<" How many books you want to reserve  :                       ";
				gotoxy(25,9);std::cout<<"�";
				gotoxy(25,9);std::cout<<"�������������������������������������������������������������";
				gotoxy(86,8);std::cout<<"�";
				gotoxy(86,9);std::cout<<"�";
				gotoxy(86,7);std::cout<<"�";   
				gotoxy(75,8);std::cin>>n;
			for(int i=0;i<n;i++){ 
				l[i].saisie_livre();
			}	Preloader2();goto FrenchList;
		}break;		
		case 2:
			{
				for(int i=0;i<n;i++){
				l[i].afficher_Livres();
				}	Preloader2();goto FrenchList; 
			}break;
		case 3:
			{
				for(int i=0;i<n;i++){
					l[i].account();
					}Preloader2();goto FrenchList;		  
			}break;
		case 4:
			{
					system("cls");menuFancais();goto here;
					   
			}break;
		case 5:
			{
				int id;
				system("cls"); 
				gotoxy(25,7);std::cout<<"�������������������������������������������������������������";
				gotoxy(25,8);std::cout<<"�";
				gotoxy(29,8);std::cout<<" Enter The ID of the book :                                  ";
				gotoxy(25,9);std::cout<<"�";
				gotoxy(25,9);std::cout<<"�������������������������������������������������������������";
				gotoxy(86,8);std::cout<<"�";
				gotoxy(86,9);std::cout<<"�";
				gotoxy(86,7);std::cout<<"�"; 
				gotoxy(58,8);std::cin>>id; 
				for(int i=0;i<n;i++){ 
				while(id==l[i].getId_livre()){
					l[i].rechercher_livre();
					break;
				}  
				if(id!=l[i].getId_livre()){
				system("cls");
				gotoxy(25,7);std::cout<<"������������������������������";
				gotoxy(25,8);std::cout<<"�";
				gotoxy(29,8);std::cout<<" Incorrect ID                 ";
				gotoxy(25,9);std::cout<<"�";
				gotoxy(25,9);std::cout<<"������������������������������";
				gotoxy(55,8);std::cout<<"�";
				gotoxy(55,9);std::cout<<"�";
				gotoxy(55,7);std::cout<<"�"; 
				getch(); 
				system("cls");
				break;
				}
				system("cls");
				}Preloader2();goto FrenchList;
			}break;
		case 6:
			{
				int id; 
				char a[20];
				int i,d;
				float p;
				system("cls"); 
				gotoxy(25,7);std::cout<<"�������������������������������������������������������������";
				gotoxy(25,8);std::cout<<"�";
				gotoxy(29,8);std::cout<<" Enter The ID of the book you want to change :               ";
				gotoxy(25,9);std::cout<<"�";
				gotoxy(25,9);std::cout<<"�������������������������������������������������������������";
				gotoxy(86,8);std::cout<<"�";
				gotoxy(86,9);std::cout<<"�";
				gotoxy(86,7);std::cout<<"�"; 
				gotoxy(78,8);std::cin>>id; 
				 for(int i=0;i<n;i++){
				 	while(id==l[i].getId_livre()){
				 		l[i].modifier_livre(a,i,d,p); 
					 	getch();
					 	system("cls");
					 	break;
					 }
					 
				 }Preloader2();goto FrenchList;	
			}break; 
		case 7:
			{
				int id;
				system("cls"); 
				gotoxy(25,7);std::cout<<"�������������������������������������������������������������";
				gotoxy(25,8);std::cout<<"�";
				gotoxy(29,8);std::cout<<" Enter The ID of the book you want to delete :              ";
				gotoxy(25,9);std::cout<<"�";
				gotoxy(25,9);std::cout<<"�������������������������������������������������������������";
				gotoxy(86,8);std::cout<<"�";
				gotoxy(86,9);std::cout<<"�";
				gotoxy(86,7);std::cout<<"�"; 
				gotoxy(78,8);std::cin>>id; 
				for(int i=0;i<n;i++){ 
				while(id==l[i].getId_livre()){
					//Deleting the book
					break;
				}
			}
			}break;
		case 8:
			{
				system("cls");exit(0);
			}break;
		}
	}while(choix<1||choix>8);
	return 0;
}


  
