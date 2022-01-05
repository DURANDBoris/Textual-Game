#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "structure.h"
#include "fonction.h"

// La fonction de créer une variable MonsterOne avec les valeurs suivantes
struct character CreateMonsterOne   (char* Pseudo)
{
    struct character MonsterOne;

        strcpy  (MonsterOne.Names.Name, Pseudo);
        strcpy  (MonsterOne.Names.Classe, "La meute de lion");
        MonsterOne.Stats.LP         = 60;
        MonsterOne.Stats.LPmax      = 60;
        MonsterOne.Stats.AP         = 1;
        MonsterOne.Stats.Shield     = 22;
        MonsterOne.Stats.Attack     = 6;
        MonsterOne.Stats.Speed      = 0;
        MonsterOne.Stats.Heal       = 0;
        MonsterOne.SelectAction     = ActionMonsterOne;

    return MonsterOne;
}
// La fonction de créer une variable MonsterTwo avec les valeurs suivantes
struct character CreateMonsterTwo   (char *Pseudo)
{
    struct character MonsterTwo;

        strcpy  (MonsterTwo.Names.Name, Pseudo);
        strcpy  (MonsterTwo.Names.Classe, "L hoplite");
        MonsterTwo.Stats.LP         = 70;
        MonsterTwo.Stats.LPmax      = 70;
        MonsterTwo.Stats.AP         = 1;
        MonsterTwo.Stats.Shield     = 24;
        MonsterTwo.Stats.Attack     = 7;
        MonsterTwo.Stats.Speed      = 0;
        MonsterTwo.Stats.Heal       = 0;
        MonsterTwo.SelectAction     = ActionMonsterTwo;

    return MonsterTwo;
}
// La fonction de créer une variable MonsterThree avec les valeurs suivantes
struct character CreateMonsterThree (char *Pseudo)
{
    struct character MonsterThree;

        strcpy(MonsterThree.Names.Name, Pseudo);
        strcpy(MonsterThree.Names.Classe, "La Wyverne");
        MonsterThree.Stats.LP       = 80;
        MonsterThree.Stats.LPmax    = 80;
        MonsterThree.Stats.AP       = 1;
        MonsterThree.Stats.Shield   = 26;
        MonsterThree.Stats.Attack   = 8;
        MonsterThree.Stats.Speed    = 0;
        MonsterThree.Stats.Heal     = 0;
        MonsterThree.SelectAction   = ActionMonsterThree;
        
    return MonsterThree;
}
// La fonction de créer une variable MonsterFour avec les valeurs suivantes
struct character CreateMonsterFour  (char *Pseudo)
{
    struct character MonsterFour;

        strcpy(MonsterFour.Names.Name, Pseudo);
        strcpy(MonsterFour.Names.Classe, "Le Mage Drow");
        MonsterFour.Stats.LP        = 90;
        MonsterFour.Stats.LPmax     = 90;
        MonsterFour.Stats.AP        = 1;
        MonsterFour.Stats.Shield    = 28;
        MonsterFour.Stats.Attack    = 9;
        MonsterFour.Stats.Speed     = 0;
        MonsterFour.Stats.Heal      = 0;
        MonsterFour.SelectAction    = ActionMonsterFour;
        
    return MonsterFour;
}
// La fonction de créer une variable MonsterFive avec les valeurs suivantes
struct character CreateMonsterFive  (char *Pseudo)
{
    struct character MonsterFive;

        strcpy(MonsterFive.Names.Name, Pseudo);
        strcpy(MonsterFive.Names.Classe, "Le Leviathan");
        MonsterFive.Stats.LP         = 100;
        MonsterFive.Stats.LPmax      = 100;
        MonsterFive.Stats.AP         = 2;
        MonsterFive.Stats.Shield     = 30;
        MonsterFive.Stats.Attack     = 10;
        MonsterFive.Stats.Speed      = 0;
        MonsterFive.Stats.Heal       = 0;
        MonsterFive.SelectAction     = ActionMonsterFive;
        
    return MonsterFive;
}

//Fonction des action meute de lion
void ActionMonsterOne(struct game* MyGame)
{
    int Random = (rand()%100) +1 ;

    if (Random < 66)
    {
        int Random = (rand() % 20) + 1;
        int Dommage = (MyGame->CurrentRoom.Opponent.Stats.Attack + Random) - MyGame->Player.Stats.Shield;

        if (Dommage > 0)
            {
                MyGame->Player.Stats.LP -= Dommage;
                printf("Le lion ouvre la gueule et mord.  \nVous subissez %d PV.\n", Dommage);
            }
        else if (Dommage <= 0){printf("la meute de lion vous tourne autour \n");}
        else{printf("erreur action.c \n");}
    }
    else
    {
        printf("Un des lion rugit \n");
    }
}
//Fonction des action hoplite
void ActionMonsterTwo(struct game* MyGame)
{
    int Random = (rand()%100) +1 ;

    if (Random < 66)
    {
        int Random = (rand() % 20) + 1;
        int Dommage = (MyGame->CurrentRoom.Opponent.Stats.Attack + Random) - MyGame->Player.Stats.Shield;

        if (Dommage > 0)
            {
                MyGame->Player.Stats.LP -= Dommage;
                printf("Le guerrier leve son epee et l abat. \nVous subissez %d PV.\n", Dommage);
            }
        else if (Dommage <= 0){printf("l hoplite vous manque de justesse. \n");}
        else{printf("erreur action.c \n");}
    }
    else
    {
        printf("Lehomme leve un poing vers le public qui se met a l applaudir et a l acclamer plus fort.  \n");
    }
}
//Fonction des action wyverne
void ActionMonsterThree(struct game* MyGame)
{
    int Random = (rand()%100) +1 ;

    if (Random < 66)
    {
        int Random = (rand() % 20) + 1;
        int Dommage = (MyGame->CurrentRoom.Opponent.Stats.Attack + Random) - MyGame->Player.Stats.Shield;

        if (Dommage > 0)
            {
                MyGame->Player.Stats.LP -= Dommage;
                printf("La wyverne leve son aile et vient me trancher la peau avec sa griffe. \nVous subissez %d PV.\n", Dommage);
            }
        else if (Dommage <= 0){printf("les griffes de la wyverne vous manque de justesse. \n");}
        else{printf("erreur action.c \n");}
    }
    else
    {
        printf("La wyverne pousse un hurlement.  \n");
    }
}
//Fonction des action mage drow
void ActionMonsterFour(struct game* MyGame)
{
    int Random = (rand()%100) +1 ;

    if (Random < 66)
    {
        int Random = (rand() % 20) + 1;
        int Dommage = (MyGame->CurrentRoom.Opponent.Stats.Attack + Random) - MyGame->Player.Stats.Shield;

        if (Dommage > 0)
            {
                MyGame->Player.Stats.LP -= Dommage;
                printf("Le mage leve son baton parcourut d electricite et envoie un eclair. \nVous subissez %d PV.\n", Dommage);
            }
        else if (Dommage <= 0){printf("le mage vous lance une boule de feu mais celle ci disparait avant de vous toucher. \n");}
        else{printf("erreur action.c \n");}
    }
    else
    {
        printf("Le drow appelle à l aide. \n");
    }
}
//Fonction des action Léviathan
void ActionMonsterFive(struct game* MyGame)
{
    int Random = (rand()%100) +1 ;

    if (Random < 66)
    {
        int Random = (rand() % 20) + 1;
        int Dommage = (MyGame->CurrentRoom.Opponent.Stats.Attack + Random) - MyGame->Player.Stats.Shield;

        if (Dommage > 0)
            {
                MyGame->Player.Stats.LP -= Dommage;
                printf("Le Leviathan ouvre vivement sa gueule et mord. \nVous subissez %d PV.\n", Dommage);
            }
        else if (Dommage <= 0){printf("le leviathan essai de vous devorer.\n");}
        else{printf("erreur action.c \n");}
    }
    else
    {
        printf("Le Leviathan pousse un rugissement qui resonne dans toute la caverne.  \n");
    }
}
