#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "structure.h"
#include "fonction.h"

// La fonction de créer une variable Wizard avec les valeurs suivantes
struct character CreateWizard   (char *Pseudo)
{
    struct character Wizard;

        strcpy  (Wizard.Names.Name, Pseudo);
        strcpy  (Wizard.Names.Classe, "Baton");
        Wizard.Stats.LP     = 70;
        Wizard.Stats.LPmax  = 100;
        Wizard.Stats.AP     = 1;
        Wizard.Stats.Shield = 5;
        Wizard.Stats.Attack = 15;
        Wizard.Stats.Speed  = 0;
        Wizard.Stats.Heal   = 30;
        Wizard.SelectAction   = ActionPlayer;
        Wizard.Actions[0]     = ActionBaton("Boule de feu \n");
        Wizard.Actions[1]     = ActionHeal("Soins \n");


    return Wizard;
}
struct action ActionBaton(char* NameAttack)
{
    struct action Attack;

        strcpy(Attack.Name, NameAttack);
        Attack.Description = DescriptionBaton;
        Attack.Execution = ExecutableAttackPlayer;

    return Attack;

}
struct action ActionHeal(char* NameAttack)
{
    struct action Heal;

        strcpy(Heal.Name, NameAttack);
        Heal.Description = DescriptionHeal;
        Heal.Execution = ExecutableHealPlayer;

    return Heal;

}
void ExecutableHealPlayer(struct game* MyGame)
{
    MyGame->Player.Stats.LP += MyGame->Player.Stats.Heal;
    if (MyGame->Player.Stats.LP > MyGame->Player.Stats.LPmax)
    {
        MyGame->Player.Stats.LP = MyGame->Player.Stats.LPmax;
        printf("Vous vous sentez mieux \n");
    }
    else if (MyGame->Player.Stats.LP <= MyGame->Player.Stats.LPmax)
    {
        printf("Vous vous sentez mieux \n");
    }
    else
    {
        printf("erreur heal");
    }
}
void DescriptionBaton()
{
    printf("Lance une boule de feu \n");
}
void DescriptionHeal()
{
    printf("Le baton brille \n");
}

