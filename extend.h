#include <iostream>
#include <fstream>
using std::string;
class Visiteur;
class Livre;
void textcolor(unsigned short color);
void gotoxy(short x, short y);
void menuE(int choix,Livre l1);
void menuFancais(int choix,Livre l1);
void Preloader();
void Preloader2();
class Visiteur{
	private:
		char nom[20];
		char prenom[20];
		char id[20];
		int age;
	public:
		Visiteur();
		~Visiteur();
};

class Livre{
	private:
		char auteur[20];
		int id_livre;
		float prix;
		int dure;
	public:
		void saisie_livre();
		void afficher_Livres();
		void rechercher_livre();
		void modifier_livre(char a[20],int i,float p,int d);
		void account();
		char* getAuteur();
		int getId_livre();
		float getPrix();
		int getDuree();
		void setAuteur(char a[20]);
		void setId_livre(int i);
		void setPrix(float p);
		void setDure(int d);
		Livre();
		~Livre();
};

