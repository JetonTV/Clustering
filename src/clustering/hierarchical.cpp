#include "hierarchical.h"

Hierarchical::Hierarchical ( Donnees* d, unsigned int n, type_dist t )
{
    assert ( nb_classes > 0 );
    this->lesDonnees = d->getDonnees();
    this->nb_classes = n;
    this->distance = Distance ( t );

    this->graines = std::vector<Sommet>();
    this->centroids = std::vector<Sommet>();
    this->nb_sommets_par_classe = std::vector<int>();
}

void Hierarchical::execute ( void )
{

}

void Hierarchical::initialise ( void )
{

}

void Hierarchical::attribueClasse ( void )
{

}

bool Hierarchical::calculNouvelleGraines ( void )
{

}
