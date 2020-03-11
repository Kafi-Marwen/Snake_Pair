#include "Point.h"
#include "Board.h"
#include <iostream>


using namespace std;

Point::Point()
{
    m_x = m_y = 14;
}
Point::Point(int x, int y)
{
    this->m_x = x;
    this->m_y = y;
}

void Point::setPoint(int x, int y)
{
    this->m_x = x;
    this->m_y = y;
}

void Point::moveDown()    //Sert a se déplacer vers le bas.
{
    m_y++;
}

void Point::moveUp()   //Sert a se déplacer vers le haut.
{
    m_y--;
}

void Point::moveRight()  //Sert a se déplacer vers la droite.
{
    m_x++;
}
void Point::moveLeft()   //Sert a se déplacer vers la gauche
{
    m_x--;
}

int Point::getX() const
{
    return m_x;
}


void Point::setX(int val)
{
    m_x = val;
}

int Point::getY() const
{
    return m_y;
}

void Point::setY(int val)
{
    m_y = val;
}


void Point::drawPoint()
{
    Board *b;
    b = Board::getInstance();
    b->dessinerPoint(*this);
}

void Point::erasePoint()
{
    Board *b;
    b = Board::getInstance();
    b->effacerPoint(*this);
}

void Point::debug()
{
    cout << "(" << this->m_x << "," << this->m_y << ")";
}
Point::~Point()
{
    //dtor
}
