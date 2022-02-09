#ifndef DONNEES_H
#define DONNEES_H

#include "sommet.h"
#include "distance.h"

#include <vector>
#include <assert.h>

class Donnees
{
    private :
        std::vector<Sommet>* lesDonnees;
        std::vector<Sommet>* lesGraines;
        unsigned int nb_donnees;
        bool deuxD;
        type_dist type;

    public :
        Donnees();
        ~Donnees();
        std::vector<Sommet>* getDonnees ( void ) const;
        std::vector<Sommet>* getGraines ( void ) const;
        void setNbDonnees ( unsigned int n );
        void setDimension ( bool dD );
        void setTypeDistance ( type_dist t );

        void genere_random     ( void );
        void genere_eparpilles ( void );
        void genere_carre      ( void );
        void genere_rectangle  ( void );
        void genere_disque     ( void );
        void genere_ellipse    ( void );
};

#endif // DONNEES_H
