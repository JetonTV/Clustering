#include "kmedians.h"

Kmedians::Kmedians ( Donnees* d, unsigned int n, type_dist t )
{
    assert ( nb_classes > 0 );
    this->lesDonnees = d->getDonnees();
    this->nb_classes = n;
    this->distance = Distance ( t );

    this->graines = std::vector<Sommet>();
    this->centroids = std::vector<Sommet>();
    this->nb_sommets_par_classe = std::vector<int>();
}

void Kmedians::execute ( void )
{

}

void Kmedians::initialise ( void ){
    this->graines.clear();
    this->centroids.clear();
    this->nb_sommets_par_classe.clear();
    Sommet c = Sommet::random3D();
    Sommet origine = Sommet(0,0,0);
    this->graines.push_back(c);
    this->centroids.push_back(origine);
    this->nb_sommets_par_classe.push_back(0);
}

void Kmedians::attribueClasse ( void )
{

}

bool Kmedians::calculNouvelleGraines ( void )
{

}
