#include "sommet.h"

Sommet::Sommet ( ){
    this->x = 0;
    this->y = 0;
    this->z = 0;
    this->classe = -1;
}

Sommet::Sommet ( int x, int y, int z ){
    this->x = x;
    this->y = y;
    this->z = z;
    this->classe = -1;
}

int Sommet::getX ( void ) const{
    return this->x;
}

int Sommet::getY ( void ) const{
    return this->y;
}

int Sommet::getZ ( void ) const{
    return this->z;
}

int Sommet::getClasse ( void ) const{
    return this->classe;
}

void Sommet::setClasse ( int n ){
    this->classe = n;
}

void Sommet::setTranslation (int tx, int ty, int tz){
    this->x = x + tx;
    this->y = y + ty;
    this->z = z + tz;
}

void Sommet::setScale (double sx, double sy, double sz){
    this->x = x * sx;
    this->y = y * sy;
    this->z = z * sz;
}

void Sommet::setRotation (double theta){
    this->x = this->getX() * cos(theta) + this->getY() * sin(theta);
    this->y = this->getX() * cos(theta) + this->getY() * sin(theta);
}

void Sommet::ajoute (const Sommet& autre){
    this->x = this->getX() + autre.getX();
    this->y = this->getY() + autre.getY();
}

Sommet Sommet::random2D ( void ){
    const int min = 5;
    const int max = 495;
    int a = min + (rand() % (max-min));
    int b = min + (rand() % (max-min));
    return Sommet(a,b,0);
}

Sommet Sommet::random3D ( void ){
    const int min = 5;
    const int max = 495;
    int a = min + (rand() % (max-min));
    int b = min + (rand() % (max-min));
    int c = min + (rand() % (max-min));
    return Sommet(a,b,c);
}
