#include "Point.h"


class Snake{

public:

	Snake();

	void ajouterPoint(Point p);
	void afficher();

private: 
	Point serpent[20];
	int m_index;
};
	
