/*
 Projet: snake
 Auteur: (partner)Houdi Rafion - Marwen Kafi
*/
#include <iostream>
#include "Point.h"
#include "Board.h"


using namespace std;

int main()
{

    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();
    char input;

    Point p(10,4);
    p.drawPoint();
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
