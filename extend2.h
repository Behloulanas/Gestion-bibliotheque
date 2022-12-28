#include <iostream>
#include<string>
#include<conio.h>
#include<windows.h>
#include <fstream>
using std::string;
void gotoxy(short x, short y)
{	
	COORD pos = {x, y};
   	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}	
void textcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon,color);
}

void menuFancais()
{
	int j=36;
	gotoxy(j,4); 	std::cout<<"þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
	gotoxy(j,5); 	std::cout<<"Û                                                                       Û";
	gotoxy(j,6);	std::cout<<"Û  ÎÍÍÍÍÍÍÍÍÍÍÍÍÍÎ          ÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎ        Û";
	gotoxy(j,7); 	std::cout<<"Û  Î             Î          Î                 º                Î        Û";
	gotoxy(j,8); 	std::cout<<"Û  Î             Î          Î                 º                Î        Û";
	gotoxy(j,9); 	std::cout<<"Û  Î             Î          Î                 º                Î        Û";
	gotoxy(j,10);	std::cout<<"Û  ÎÍÍÍÍÍÍÍÍÍÍÍÍÍÎ          Î                 º                Î        Û";
	gotoxy(j,11);	std::cout<<"Û                           Î                 º                Î        Û";
	gotoxy(j,12);	std::cout<<"Û                           ÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎ        Û";
	gotoxy(j,13);	std::cout<<"Û                           Î                 º                Î        Û";
	gotoxy(j,14);	std::cout<<"Û  ÎÍÍÍÍÍÍÍÍÍÍÍÍÍÎ          Î                 º                Î        Û";
	gotoxy(j,15);	std::cout<<"Û  Î             Î          Î                 º                Î        Û";
	gotoxy(j,16);	std::cout<<"Û  Î             Î          Î                 º                Î        Û";
	gotoxy(j,17);	std::cout<<"Û  Î             Î          Î                 º                Î        Û";
	gotoxy(j,18);	std::cout<<"Û  ÎÍÍÍÍÍÍÍÍÍÍÍÍÍÎ          ÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎ        Û";
	gotoxy(j,19);	std::cout<<"Û                                                                       Û";
	gotoxy(j,20);	std::cout<<"þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
	gotoxy(42,8);std::cout<<"1-Reserver";
	gotoxy(42,16);	std::cout<<"2-Afficher";
	gotoxy(68,8);	std::cout<<"3-Mon Compte";
	gotoxy(68,10);	std::cout<<"4-Langue";
	gotoxy(85,8);	std::cout<<"5-Rechercher";
	gotoxy(85,10);	std::cout<<"6-Modifier";
	gotoxy(69,15);	std::cout<<"7-Supprimer"; 
	gotoxy(86,15);	std::cout<<"8-Quitter";
	gotoxy(12,4);std::cout<<"MENU";
	gotoxy(11,5);std::cout<<"ÄÄÄÄÄÄÄ";
	gotoxy(6,8);std::cout<<"1-Reserver un Livre ";
	gotoxy(6,10);	std::cout<<"2-Afficher ma Liste";
	gotoxy(6,12);	std::cout<<"3-Mon Compte Bibliotheque";
	gotoxy(6,14);	std::cout<<"4-Changer La langue";
	gotoxy(6,16);	std::cout<<"5-Rechercher un Livre";
	gotoxy(6,18);	std::cout<<"6-Modifier un livres ";
	gotoxy(6,20);	std::cout<<"7-Supprimer un Livre ";
	gotoxy(6,22);	std::cout<<"8-Quitter";
	gotoxy(30,24);std::cout<<"èèèèè______GESTION DE BIBLIOTHEQUES ______ èèèè";
	gotoxy(30,25);	std::cout<<"ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
}
void Preloader()
{
	system("color 06");
	int r,q;
    gotoxy(52,10);std::cout<<"L O A D I N G...";
    gotoxy(34,12);
    for(r=1; r<=49; r++)
    {
        for(q=0; q<=20000; q++); 
        	printf("%c",178);Beep(500, 150);
	}
    std::cout<<"";gotoxy(45,15);
	std::cout<<"Press any key to Continue..";
	gotoxy(42,20);std::cout<<"(Realise Par Abdessamad Ahmali )";
    gotoxy(74,15);getch();system("cls");	
}
void Preloader2()
{
	//system("color 06");
	int r,q;
    gotoxy(52,10);std::cout<<"L O A D I N G...";
    gotoxy(34,12);
    for(r=1; r<=49; r++)
    {
        for(q=0; q<=1000000; q++); 
        	printf("%c",178);
	}
	system("cls");
	//gotoxy(42,20);std::cout<<"(Realise Par Abdessamad Ahmali )";
}

void Livre::saisie_livre()
{
				system("cls");
				gotoxy(45,5);std::cout<<"Fill In with Informations  ";
				gotoxy(30,7); std::cout<<"ÚÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÂÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¿";
				gotoxy(30,8); std::cout<<"³      Author       ³                            ³";
				gotoxy(30,9); std::cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
				gotoxy(30,10);std::cout<<"³        ID         ³                            ³";
				gotoxy(30,11);std::cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
				gotoxy(30,12);std::cout<<"³      How Long     ³                            ³";
				gotoxy(30,13);std::cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
				gotoxy(30,14);std::cout<<"³      Price        ³                            ³";
				gotoxy(30,15);std::cout<<"ÀÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÁÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÙ";
				gotoxy(60,8);std::cin>>auteur;
				gotoxy(60,10);std::cin>>id_livre;
				gotoxy(60,12);std::cin>>this->dure;
				gotoxy(60,14);std::cin>>this->prix;
				gotoxy(40,18);std::cout<<"Press any key to move to next book";
				getch();
				system("cls");
}
void Livre::afficher_Livres()
{
				system("cls");
				gotoxy(30,7); std::cout<<"ÚÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÂÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¿";
				gotoxy(30,8); std::cout<<"³      Auteur       ³                            ³";
				gotoxy(30,9); std::cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
				gotoxy(30,10);std::cout<<"³        ID         ³                            ³";
				gotoxy(30,11);std::cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
				gotoxy(30,12);std::cout<<"³      Duree        ³                            ³";
				gotoxy(30,13);std::cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
				gotoxy(30,14);std::cout<<"³      Prix         ³                            ³";
				gotoxy(30,15);std::cout<<"ÀÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÁÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÙ";
				gotoxy(60,8);std::cout<<auteur;
				gotoxy(60,10);std::cout<<id_livre;
				gotoxy(60,12);std::cout<<this->dure;
				gotoxy(60,14);std::cout<<this->prix;
				gotoxy(40,18);std::cout<<"Press Enter to see next books";
				getch();
				system("cls");
}
void Livre::rechercher_livre()
{
				system("cls");
				gotoxy(30,7); std::cout<<"ÚÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÂÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¿";
				gotoxy(30,8); std::cout<<"³      Auteur       ³                            ³";
				gotoxy(30,9); std::cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
				gotoxy(30,10);std::cout<<"³        ID         ³                            ³";
				gotoxy(30,11);std::cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
				gotoxy(30,12);std::cout<<"³      Duree        ³                            ³";
				gotoxy(30,13);std::cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
				gotoxy(30,14);std::cout<<"³      Prix         ³                            ³";
				gotoxy(30,15);std::cout<<"ÀÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÁÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÙ";
				gotoxy(60,8);std::cout<<this->auteur;
				gotoxy(60,10);std::cout<<this->id_livre;
				gotoxy(60,12);std::cout<<this->dure;
				gotoxy(60,14);std::cout<<this->prix;
				gotoxy(40,17);system("PAUSE");
				system("cls");
}
void Livre::modifier_livre(char a[20],int i,float p,int d){
				system("cls");
				gotoxy(45,5);std::cout<<"Fill In with New  Informations  ";
				gotoxy(30,7); std::cout<<"ÚÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÂÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¿";
				gotoxy(30,8); std::cout<<"³      Auteur       ³                            ³";
				gotoxy(30,9); std::cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
				gotoxy(30,10);std::cout<<"³        ID         ³                            ³";
				gotoxy(30,11);std::cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
				gotoxy(30,12);std::cout<<"³      Duree        ³                            ³";
				gotoxy(30,13);std::cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
				gotoxy(30,14);std::cout<<"³      Prix         ³                            ³";
				gotoxy(30,15);std::cout<<"ÀÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÁÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÙ";
				gotoxy(60,8);std::cin>>a;
				gotoxy(60,10);std::cin>>i;
				gotoxy(60,12);std::cin>>p;
				gotoxy(60,14);std::cin>>d;
				Livre::setAuteur(a);
				Livre::setId_livre(i);
				Livre::setDure(d);
				Livre::setPrix(p);
				gotoxy(40,18);std::cout<<"Informations updeted Successfully";
}
char* Livre::getAuteur(){
	return this->auteur;
}
int Livre::getId_livre(){
	return this->id_livre;
}
float Livre::getPrix(){
	return this->prix;
}
int Livre::getDuree(){
	return this->dure;
}
void Livre::setAuteur(char a[20]){
	strcpy(this->auteur,a);
}
void Livre::setId_livre(int i){
	this->id_livre=i;
}
void Livre::setPrix(float p){
	this->prix=p;
}
void Livre::setDure(int d){
	this->dure=d;
}
void Livre::account(){
	system("cls");
	gotoxy(20,4);std::cout<<" Book of :"<<this->auteur;
	getch();
	system("cls");
}
Livre::Livre(){}
Livre::~Livre(){std::cout<<""<<std::endl;}
Visiteur::Visiteur(){}
Visiteur::~Visiteur(){std::cout<<""<<std::endl;}

