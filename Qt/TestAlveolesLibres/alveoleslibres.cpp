#include "alveoleslibres.h"


AlveolesLibres::AlveolesLibres()
{

}
/**
 * @brief AlveolesLibres::AlveolesLibres
 * @param _nbRangees
 * @param _nbColonnes
 * @details Constructeur de la classe AlveolesLibres. Il initialise la pile avec le nombre de rangées multiplié par le nombre de colonnes.
 */
AlveolesLibres::AlveolesLibres(const int _nbRangees, const int _nbColonnes) : nbRangees(_nbRangees), nbColonnes(_nbColonnes)
{
    for(int i = 1; i <= _nbRangees*_nbColonnes ; i++)
    {
      push_back(i);
    }

    //resize();
}

/**
 * @brief AlveolesLibres::Reserver
 * @param _rangee
 * @param _colonne
 * @details Méthodes de la classe AlveolesLibre. Elle recupère la valeur au dessus de la pile puis supprime cette dernière de la pile.
 * @return
 */
bool AlveolesLibres::Reserver(int &_rangee, int &_colonne)
{
    bool valeurARetourne;
    back();
    pop_back();
    return valeurARetourne;
}

/**
 * @brief AlveolesLibres::Liberer
 * @param _rangee
 * @param _colonne
 * @return
 * @details Méthode de la classe AlveolesLibre. Elle ajoute au sommet de la pile l'alvéole qui viens d'être libérer.
 */
bool AlveolesLibres::Liberer(const int _rangee, const int _colonne)
{
    //push_back();
}
