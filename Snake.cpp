#include "Point.h"
#include <iostream>
#include "Snake.h"

using namespace std;

 Snake::Snake()
{      

    this->m_index=0;
    
}
                                    
void Snake::ajouterPoint(Point p)     // DEFINITION DE LA METHODE ajouterPoint
    {
     
	    this->serpent[m_index]=p;
	    
	    if(m_index<=19)
	    
	    {
	        m_index++;
	        
	    }
	    
	                                                
	   
	    
    }
    
void Snake::afficher()                 //DEFINITION DE LA METHODE afficher
	{
	    for (int i=0; i < m_index; i++)
	    
	    {   
	         serpent[m_index-1].erasePoint();
	         serpent[i].drawPoint();
	    }
	    
	          
	}
	
void Snake::deplacerPoint()            //DEFINITION DE LA METHODE deplacerPoint

{
    for (int i =0; i <= m_index; i++)
    {
        serpent[i].moveRight();
    }

}


