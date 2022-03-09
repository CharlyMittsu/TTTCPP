#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP

#include "Grille.h"
#include "Tictactoe.h"
#include <iostream>


    Tictactoe::Tictactoe() : _symboleCourant('X'),_numeroTour(0) {}

    void Tictactoe::afficheGrille(){
        _grilleDeJeu.affiche();
    }

    void Tictactoe::ajouteSymbole(int x, int y){
        _grilleDeJeu.setContent(x,y,_symboleCourant);
    }

    bool Tictactoe::testeVictoireVerticale(){
        int combo= 0;
        int i;
        for (i=0;i<3;i++){
            if(combo<3){
                combo=0;
                int j;
                for (j=0;j<3;j++){
                    if(combo<3){
                        int c =j*3+i;
                    }
                }
            }
        }
    }

    bool Tictactoe::testeVictoireHorizontale(){
        // à compléter 
    }

    bool Tictactoe::testeVictoireDiagonale(){
        // à compléter
    }

    bool Tictactoe::testeJeuNul(){
        // à compléter
    }

    void Tictactoe::finTour(){
        // à compléter
   }

#endif