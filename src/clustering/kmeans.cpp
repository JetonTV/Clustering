#include "kmeans.h"

Kmeans::Kmeans ( Donnees* d, unsigned int n, type_dist t ){
    assert ( nb_classes > 0 );
    this->lesDonnees = d->getDonnees();
    this->nb_classes = n;
    this->distance = Distance ( t );

    this->graines = std::vector<Sommet>();
    this->centroids = std::vector<Sommet>();
    this->nb_sommets_par_classe = std::vector<int>();
}

void Kmeans::execute ( void ){
    Kmeans::initialise();

}

void Kmeans::initialise ( void ){
    this->graines.clear();
    this->centroids.clear();
    this->nb_sommets_par_classe.clear();
    Sommet c = Sommet::random3D();
    Sommet origine = Sommet(0,0,0);
    this->graines.push_back(c);
    this->centroids.push_back(origine);
    this->nb_sommets_par_classe.push_back(0);
}

void Kmeans::attribueClasse ( void ){
    Kmeans::initialise();



}

bool Kmeans::calculNouvelleGraines ( void ){
    for (int i=0; i<(int)this->centroids.size(); i++){
        int classe = this->nb_sommets_par_classe.at(this->centroids.at(i).getClasse());
        if(classe!=0){
            double x = this->centroids.at(i).getX()/(double)classe;
            double y = this->centroids.at(i).getY()/(double)classe;
            double z = this->centroids.at(i).getZ()/(double)classe;
            this->centroids.at(i) = Sommet (x,y,z);
        }
        if(distance.calcul(this->graines.at(i), this->centroids.at(i)) > distance.calcul(this->graines.at(i+1), this->centroids.at(i+1))){
            this->centroids.at(i) = this->graines.at(i);
        }
        this->nb_sommets_par_classe.at(i) = 0;
        this->centroids.at(i) = Sommet();
    }
}
