#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "structure.h"
#include "fonction.h"

// La fonction de créer une variable Warrior avec les valeurs suivantes
struct character CreateWarrior  (char *Pseudo)  
{
    struct character Warrior;

        strcpy  (Warrior.Names.Name, Pseudo);
        strcpy  (Warrior.Names.Classe, "Epee lourde");
        Warrior.Stats.LP        = 100;
        Warrior.Stats.LPmax     = 100;
        Warrior.Stats.AP        = 1;
        Warrior.Stats.Shield    = 20;
        Warrior.Stats.Attack    = 20;
        Warrior.Stats.Speed     = 20;
        Warrior.Stats.Heal      = 0;
        Warrior.SelectAction    = ActionPlayer;
        Warrior.Actions[0]      = ActionSword("Coup d epee \n");
        Warrior.Actions[1]      = ActionShieldWarrior("Pile ou face \n");

            return Warrior;
}

struct action ActionSword(char* NameAttack)
{
    struct action Attack;

        strcpy(Attack.Name, NameAttack);
        Attack.Description = DescriptionSword;
        Attack.Execution = ExecutableAttackPlayer;

    return Attack;

}

void DescriptionSword()
{
    printf("Donne un coup d epee \n");
}

struct action ActionShieldWarrior(char *NameAttack)
{
    struct action Attack;

    strcpy(Attack.Name, NameAttack);
    Attack.Description = DescriptionShieldWarrior;
    Attack.Execution = ExecutablePileFace;

    return Attack;
}
void DescriptionShieldWarrior()
{
    printf("Tente une estoc bien placer \n");
}