/*
 Projet: snake
 Auteur: Houdi Rafion - Marwen Kafi
*/
#include <iostream>
#include "Point.h"
#include "Board.h"
#include "Snake.h"
#include <unistd.h>
using namespace std;

int main()
{

	





    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();
    char input;

    Point p(10,4);         //DECLARATION DES POINTS QUI SERONT AJOUTER DANS LE TABLEAU
    Point p1(11,4);
    Point p2(12,4);
    p.drawPoint();  // SERT A AFFICHER LES POINTS
    
    Snake serpent;
    serpent.ajouterPoint(p);        //SERT A AJOUTER LES POINTS DANS LE TABLEAU
    serpent.ajouterPoint(p1);
    serpent.ajouterPoint(p2);
    
    serpent.afficher();       //afficher le tableau serpent
    serpent.deplacerPoint();  //deplacer les points dans le tableau
    usleep(500000);            //attente avant l'ajout d'un nouveau point dans le tableau
    serpent.afficher();

                     //Permet d'effectuer les mouvements haut , bas ,gauche ,droite
  do{

	input= getchar();
	p.erasePoint();              //permet d'effacer le point
	switch(input)

	{
	 	case 'z':
			p.moveUp();
			break;
	
		case 'q':
			p.moveLeft();
			break;

		case 's':
			p.moveDown();
			break;

		case 'd':
			p.moveRight();
			break;
	}
	
	p.drawPoint();   //SERT A AFFICHER LES POINTS

}while(input != 'x');
















    //cout << "press any key to quit" << endl;
    getchar();
    fenetre->kill();
    return 0;
}
