#include "donnees.h"

Donnees::Donnees()
{
    this->lesDonnees = new std::vector<Sommet>();
    this->lesGraines = new std::vector<Sommet>();
    this->deuxD = true;
    this->nb_donnees = 1;
    this->type = EUCLIDIENNE;
}

Donnees::~Donnees(){
    delete[] this->lesDonnees;
}

std::vector<Sommet>* Donnees::getDonnees ( void ) const{
    return this->lesDonnees;
}

std::vector<Sommet>* Donnees::getGraines ( void ) const{
    return this->lesGraines;
}

void Donnees::setNbDonnees ( unsigned int n ){
    this->nb_donnees = n;
}

void Donnees::setDimension ( bool dD ){
    this->deuxD = dD;
}

void Donnees::setTypeDistance ( type_dist t ){
    this->type = t;
}

void Donnees::genere_random( void ){
    this->lesDonnees->clear();
    for (int i = 0; i < nb_donnees ; i++){
        this->lesDonnees->push_back(Sommet::random2D());
    }
}

void Donnees::genere_eparpilles( void ){
    this->lesDonnees->clear();
}

void Donnees::genere_carre( void ){
    this->lesDonnees->clear();
    Sommet c = Sommet::random2D();
    double taille = rand() % 195-5;
    int i = 0;
    for(i=0; i < this->nb_donnees ; i++){
        Sommet c2 = Sommet::random2D();
        if (c.getX() <= c2.getX() && c2.getX() <= c.getX() && c.getY() <= c2.getY() && c2.getY() <= c.getY()){
            this->lesDonnees->push_back(c2);
            i++;
        }
    }
}

void Donnees::genere_rectangle( void ){
    this->lesDonnees->clear();
    this->type;
    Sommet r = Sommet::random2D();
    int i = 0;
    for(i=0; i < this->nb_donnees ; i++){
    while (i < this->nb_donnees){
    //for(i=0; i < this->nb_donnees;i++){
        Sommet r2 = Sommet::random2D();
        if (r.getX() <= r2.getX() && r2.getX() <= r.getX() && r.getY() <= r2.getY() && r2.getY() <= r.getY()){
            this->lesDonnees->push_back(r2);
            i++;
        }
    }
    }
}

void Donnees::genere_disque (void ){
    this->lesDonnees->clear();

}

void Donnees::genere_ellipse ( void ){
        this->lesDonnees->clear();
}
