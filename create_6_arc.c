#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "structure.h"
#include "fonction.h"

// La fonction de créer une variable Bowman avec les valeurs suivantes
struct character CreateBowman   (char *Pseudo)
{
    struct character Bowman;

        strcpy  (Bowman.Names.Name, Pseudo);
        strcpy  (Bowman.Names.Classe, "Archer");
        Bowman.Stats.LP     = 70;
        Bowman.Stats.LPmax  = 70;
        Bowman.Stats.AP     = 1;
        Bowman.Stats.Shield = 10;
        Bowman.Stats.Attack = 30;
        Bowman.Stats.Speed  = 30;
        Bowman.Stats.Heal   = 0;
        Bowman.SelectAction   = ActionPlayer;
        Bowman.Actions[0]     = ActionArc("tirer a l arc \n");
        Bowman.Actions[1]     = ActionShieldBowman("Pile ou face \n");

    return Bowman;
}

struct action ActionArc(char* NameAttack)
{
    struct action Attack;

        strcpy(Attack.Name, NameAttack);
        Attack.Description = DescriptionArc;
        Attack.Execution = ExecutableAttackPlayer;

    return Attack;

}

void DescriptionArc()
{
    printf("Tir une fleche \n");
}

struct action ActionShieldBowman(char *NameAttack)
{
    struct action Attack;

    strcpy(Attack.Name, NameAttack);
    Attack.Description = DescriptionShieldBowman;
    Attack.Execution = ExecutablePileFace;

    return Attack;
}
void DescriptionShieldBowman()
{
    printf("Se protege derriere sont bouclier \n");
}