/*
 Projet: snake
 Auteur: Houdi Rafion - Marwen Kafi
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

    Point p(10,4);
    p.drawPoint();

    Point p2(10,5);
    p2.drawPoint();
    
    
   
    p.moveDown();
    p.drawPoint();

    p2.moveUp();
    p2.drawPoint();
    //cout << "press any key to quit" << endl;
    getchar();
    fenetre->kill();
    return 0;
}
