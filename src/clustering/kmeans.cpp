#include "kmeans.h"

Kmeans::Kmeans ( Donnees* d, unsigned int n, type_dist t )
{
    assert ( nb_classes > 0 );
    this->lesDonnees = d->getDonnees();
    this->nb_classes = n;
    this->distance = Distance ( t );

    this->graines = std::vector<Sommet>();
    this->centroids = std::vector<Sommet>();
    this->nb_sommets_par_classe = std::vector<int>();
}

void Kmeans::execute ( void )
{

}

void Kmeans::initialise ( void )
{

}

void Kmeans::attribueClasse ( void )
{

}

bool Kmeans::calculNouvelleGraines ( void )
{

}
