#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "structure.h"
#include "fonction.h"

// La fonction de créer une variable Thief avec les valeurs suivantes
struct character CreateThief    (char *Pseudo)
{
    struct character Thief;

        strcpy  (Thief.Names.Name, Pseudo);
        strcpy  (Thief.Names.Classe, "Voleur");
        Thief.Stats.LP      = 80;
        Thief.Stats.LPmax   = 80;
        Thief.Stats.AP      = 1;
        Thief.Stats.Shield  = 15;
        Thief.Stats.Attack  = 25;
        Thief.Stats.Speed   = 20;
        Thief.Stats.Heal    = 0;
        Thief.SelectAction   = ActionPlayer;
        Thief.Actions[0]     = ActionDagger("Coup de dague \n");
        Thief.Actions[1]     = ActionShieldThief("Pile ou Face \n");

    return Thief;
}

struct action ActionDagger(char* NameAttack)
{
    struct action Attack;

        strcpy(Attack.Name, NameAttack);
        Attack.Description = DescriptionDagger;
        Attack.Execution = ExecutableAttackPlayer;

    return Attack;

}

void DescriptionDagger()
{
    printf("Donne un coup de dague \n");
}

struct action ActionShieldThief(char *NameAttack)
{
    struct action Attack;

    strcpy(Attack.Name, NameAttack);
    Attack.Description = DescriptionShieldThief;
    Attack.Execution = ExecutablePileFace;

    return Attack;
}
void DescriptionShieldThief()
{
    printf("essaie de poignarder lennemi le plus proche \n");
}