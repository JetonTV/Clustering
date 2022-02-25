#include "distance.h"

const double Distance::INFINIE = std::numeric_limits<double>::max();
const double Distance::EPSILON = 0.00001;

Distance::Distance ()
{
    this->type = EUCLIDIENNE;
}

Distance::Distance ( type_dist t )
{
    this->type = t;
}

double Distance::calcul ( const Sommet& A, const Sommet& B ) const
{
    switch ( this->type )
    {
        case MANHATTAN   : return this->calculManhattan( A, B ); break;
        case EUCLIDIENNE : return this->calculEuclidienne( A, B ); break;
        case CHEBYSHEV   : return this->calculChebyshev( A, B ); break;
        case COSINUS     : return this->calculCosinus( A, B ); break;
        default          : return Distance::INFINIE;
    }
}

double Distance::calculManhattan (const Sommet& A, const Sommet& B) const{
    double man = abs(B.getX() - A.getX()) + abs(B.getY() - A.getY());
    return man;
}

double Distance::calculEuclidienne (const Sommet& A, const Sommet& B) const{
    double euc = sqrt(((A.getX()-B.getX())*(A.getX()-B.getX()))+((A.getY()-B.getY())*(A.getY()-B.getY())));
    return euc;
}

double Distance::calculChebyshev (const Sommet& A, const Sommet& B) const{
    double cheb = std::fmax((B.getY()- A.getY()), (B.getX()- A.getX()));
    return cheb;
}

double Distance::calculCosinus (const Sommet& A, const Sommet& B) const{
    double scalaire = (A.getX() * B.getX()) + (A.getY() * B.getY());
    double norme = sqrt(((A.getX()*A.getX())) + (A.getY()*A.getY())) * sqrt(((B.getX()*B.getX())) + (B.getY()*B.getY()));
    double d = scalaire / norme;
    double cos = 1 - d;
    return cos;
}
