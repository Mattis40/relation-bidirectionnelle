/**
 * @file Individu.h
 * @author Philippe Lopistéguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @version 0.1
 * @date 2023-10-10
 * 
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */


/**
 * @brief Cette classe définit un Individu par un nom, un prénom et éventuellement une Voiture qu'il conduit
 * 
 * @details Au delà de représenté un Individu par son nom et son prénom, la classe Individu permet également
 * de renseigner la Voiture qu'il conduit.
 * 
 * La Voiture associé à l'Individu est representé par un pointeur vers un object Voiture qui peut être a null
 * si l'Individu ne possède pas de Voiture.
 * 
 * @warning Un Individu peut être associé à au plus une Voiture
 * 
 */

class Individu
{
    // ATTRIBUTS
  public:

    /**
     * @brief  Le nom de l'individu
     * 
     */
    string nom;   

    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;      

    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture; 

    // MÉTHODES
  public:
    /**
     * @brief Construit un objet Individu à partir de son nom (1er paramètre) et son prénom (2ème paramètre)
     * 
     */
    Individu(string = "", string = "");

    /**
     * @brief Détruit un objet Individu
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Affiche l'identité de l'individu
     * 
     * @return string Chaine sous la forme nom prénom
     * 
     * @bug un espace en trop entre nom et prénom
     */
    string toString();
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);

    /**
     * @brief Définit la Voiture conduite par l'Individu
     * 
     * @param [in] voiture pointeur vers l'objet Voiture conduite par l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H