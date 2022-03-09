#ifndef GRILLE_CPP
#define GRILLE_CPP

#include "Grille.h"
#include <iostream>
using namespace std;


    Grille::Grille() : _nombreColonnes(3), _nombreLignes(3) { 
        _tableau = vector<char> (9,' ');
        // à compléter
    }
    
    Grille::Grille(int nbColonnes, int nbLignes) : _nombreLignes(nbLignes), _nombreColonnes(nbColonnes) {
        _tableau = vector<char> (nbColonnes*nbLignes,' ');
        // à compléter
    }

    // renvoie le contenu de la case de coordonnées x,y dans [0;2]
    char Grille::getContent(int x, int y){ 
        
        return _tableau[(3*x)+y];
        
    }    

        // ajoute un contenu dans une case de coordonnées x,y dans [0;2]
        // le contenu est un entier non nul
    void Grille::setContent(int x, int y, char nouveauContenu){
        _tableau[(3*x)+y]=nouveauContenu;
        
    }
        
    void Grille::affiche(){
        int i;
        for (i=0;i<3;i++){
            int j;
            for (j=0;j<3;j++){
                cout << getContent(i,j)<<" ";
            
            }
            cout << endl;

        }
        
    }

    void Grille::resetContent(){
        int i;
        for (i=0;i<3;i++){
            int j;
            for (j=0;j<3;j++){
                setContent(i,j,0);

            }
        }
        
    }


#endif