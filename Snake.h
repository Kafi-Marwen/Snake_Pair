#include "Point.h"


class Snake{

public:

	Snake();

	
	void afficher();
	void deplacerPoint();
	void ajouterPoint(Point p);
	
private: 
	Point serpent[20];
	int m_index;
};


	
