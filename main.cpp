#include "Grille.cpp"
#include "Tictactoe.cpp"
#include <iostream>
#include <string>


int main(){

    bool partiegagnee = false;
    Tictactoe * jeu = new Tictactoe();
     
    int numeroCase;



    while(!partiegagnee && !(jeu->testeJeuNul())){
        
        jeu->afficheGrille();
        std::cin >> numeroCase;
        int x;
        int y;
        x = numeroCase/3;
        y= numeroCase%3;
        jeu->ajouteSymbole(x,y);
        partiegagnee = jeu->testeVictoireDiagonale() || jeu->testeVictoireHorizontale() || jeu->testeVictoireVerticale();
        jeu->finTour();
        
    }

    
    
    return 0;
}