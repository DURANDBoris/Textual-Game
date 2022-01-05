#include <stdlib.h>
#include <stdio.h>

#include "structure.h"
#include "fonction.h"


void main(void) // Fonction principale
{
    struct game MyGame; // Créer la variable Mygame de type game

    // La variable MyGame.Player récupère les informations de la fonction CreatePlayer
    MyGame.Player       =    CreatePlayer();
    // La variable MyGame.Currentroom récupère les informations la fonction SelectRoom d'entier 1
    MyGame.CurrentRoom  =    SelectRoom(1);

    // tant que MyGame.CurrentRoom.Level <= 5 continué la boucle
    while (MyGame.CurrentRoom.Level <= 5) 
    {

        // Description de la salle
        MyGame.CurrentRoom.DescriptionRoomIn(&MyGame);
        
        while (MyGame.Player.Stats.LP >= 0 && MyGame.CurrentRoom.Opponent.Stats.LP >= 0)
        {
            MyGame.Player.SelectAction(&MyGame);
            MyGame.CurrentRoom.Opponent.SelectAction(&MyGame);

            printf("%d \n", MyGame.Player.Stats.LP);
            printf("%d \n", MyGame.CurrentRoom.Opponent.Stats.LP);

            if (MyGame.CurrentRoom.Opponent.Stats.LP <= 0)
            {
                MyGame.CurrentRoom.DescriptionRoomOut(&MyGame);
            }
            else if (MyGame.Player.Stats.LP <= 0)
            {
                printf("Vous succombez a vos blessure.\nVous avez perdu. TT");
                getchar();
                getchar();
                exit(404);
            }
            else
            {
                printf("Appuyez sur entrer pour continuer.");
                getchar();
            }

            getchar();
            system("cls");

        }
        MyGame.Player.Stats.LP += MyGame.CurrentRoom.Soins;
         // La variable MyGame.Currentroom récupère les informations
         // la fonction SelectRoom d'entier MyGame.CurrentRoom.Level + 1 
        MyGame.CurrentRoom = SelectRoom(MyGame.CurrentRoom.Level + 1); 
        
        
    }

    //Permet d'attendre la touche entré pour metre fin au programme.
    printf("Appuyer sur entrer pour terminer.");
    getchar();
}

