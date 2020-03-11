#include "Point.h"


class Snake{

public:

	Snake();

	Snake(int x, int y);
	void afficher();
	void deplacerPoint();
	void ajouterPoint(Point p);
    
    void moveUp();
 
    void moveDown();

    void moveLeft();
   
    void moveRight();
	
private: 
	Point serpent[20];
	int m_index;
	char m_direction;
};


	
