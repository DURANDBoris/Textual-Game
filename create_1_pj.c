#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "structure.h"
#include "fonction.h"

// La fonction CreatePlayer permet la conception du personnage du joueur
struct character    CreatePlayer()
{
    struct character    Player;     // créer la structure character
    char                Pseudo[20]; // Créer une chaune de charactère Pseudo

    SelectPseudo(Pseudo);            // Execute la fonction SelectPseudo
    Player = SelectClasse(Pseudo);   // Player prend comme valeur la fonction SelectClasse

    return Player; // Retourne la variable Player
}

// Fonction permettant de donné le nom du joueur
void                SelectPseudo(char *Pseudo) 
{
    printf("J\'ai froid.\nJ\'ai l\'impression qu une presse m ecrase contre le sol.\nMon corps est inconfortable, douloureux.\n");
    printf("Des images se reveillent, tenues comme des cendres, mais suffocantes. \nJe revoie des poutres calcinees, j\'entends des cris, ");
    getchar();
    system("cls");
    printf("je me rappelle les visages figes comme des statues de cire des miens, de mes parents, de ma soeur. \n");
    printf("Une odeur de sang.\nJ\'ouvre les yeux avec un hoquet, mon coeur a manque un battement. \nLes murs, lisses, s\'elevent haut, a une dizaine de metres.\n");
    getchar(); 
    system("cls");
    printf("Une minuscule ouverture apparait au sommet ou passe la lumiere tremblante des bougies ou d une cheminee.\nElle doit donner sur un interieur... ou ? Je n ose y penser.\n");
    printf("Je me redresse. \nUne porte en bois massif se dresse devant moi. \nUn banc, une simple planche de bois, seul confort de la piece, longe le mur derriere moi.");
    getchar();
    system("cls");
    printf("Je suis dans une cellule.\n");
    printf("Comment je m\'appelle ? "); // Affiche le texte
    scanf("%s", Pseudo); // Enregistre dans Pseudo le texte saisie
    system("cls");
    printf("Ah oui, je m\'en souvien, je m appel %s. \n", Pseudo);
    printf("Les heures passent. Je ne sais pas ce que je fais ici. J\'entends parfois des bruits lointains, des portes qui grincent.\n");
    printf("Ils vont venir me chercher. Mais pour me faire quoi ? Pourquoi m\'avoir epargne, moi ? \nL\'envie de savoir me brule, et pourtant je sais que lorsque j\'aurai compris ce qu\'on veut me faire, mes heures seront bien pires.\n");
    printf("Un instant, une eternite plus tard, je ne sais pas, des pas se mettent a retentir tout autour. J\'entends des portes qui s\'ouvrent, des voix precipitees dans une langue que je ne connais pas. Il y a des cris aussi, des hommes, comme moi sans doute, qui demandent ce qu\'ils font ici, d\'autres qui hurlent, qui traitent d\'assassins. Parfois, j\'entends des corps heurter le sol ou les murs avec des cris, qu\'on traine, qu\'on pousse.\n");
    getchar();
    getchar();
    system("cls");
}

// Fonction permettant de choisir la classe du joueur
struct character    SelectClasse(char *Pseudo)
{
    int Choix;

    printf("Enfin, c\'est mon tour. Ma porte s\'ouvre. Une guerriere drow, evidemment.\n");
    printf("Je suis dans les cites souterraines.\n");
    printf("Elle me fait le geste de sortir. J\'obeis et passe devant elle pour arriver dans un couloir ou s\'aligne de nombreuses cellules comme la mienne. D\'autres drows sont la et font avancer des prisonniers, que je ne connais pas.\n");
    printf("On nous conduit de couloirs en couloirs jusqu\'a deux grandes cages ou attendent deja d\'autres personnes. Ils nous font entrer dans l\'une d\'elle et ferment derriere nous. Des gardes nous surveillent.\n");
    printf("Dans l\'autre, les hommes et les femmes qui y sont ne nous ressemblent pas. Ils sont muscles, couverts de cicatrices et portent tous des vetements guerriers. Dans la mienne, la plupart semble etre des paysans ou artisans. Je suis peut-etre le seul a pouvoir me defendre.\n");
    printf("Un brouhaha commence a parvenir jusqu\'a nous, d\'abord calme, puis de plus en plus excite.\n");
    printf("La tension monte de notre cote.\nOn entend des applaudissements, des chants, des cris.\n ");
    printf("On se recule vers le fond, on se rapproche les uns des autres, instinctivement.\n");
    printf("Des drows viennent ouvrir la cage et selectionnent six d\'entre nous. On les regarde partir vers une immense porte de bois a double battant. Les drows les poussent derriere et les referment sur eux. Et ils se postent la, ils attendent.\n");
    printf("On entend les hurlements d\'une foule delirante, des applaudissements, et des cris de terreur.\n");
    printf("Quelques minutes plus tard, ils reviennent vers nous et recommencent. Ils en prennent quatre cette fois. Nous commencons a nous agiter, a nous pousser vers le fond. Certains pleurent en silence. \n");
    printf("Je prefere rester devant, une facon de me porter volontaire et d\'en finir au plus vite.\n");
    printf("Mais lorsque les drows reviennent, ils me poussent sur le cote et prennent tous les autres. \n");
    printf("Il ne reste plus que moi. \nUn cri de rage se bloque au fond de ma gorge. \nJ\'attends longtemps encore.");
    printf("Puis, enfin, c\'est moi. Ils m\'attrapent par les bras et me poussent sur le meme chemin que les autres, qui ne sont pas revenus. Ils ouvrent les battants, et me jettent a l\'interieur.\n");
    printf("Je suis dans un sas. Une autre immense porte de bois se dresse devant moi.\n");
    printf("Sur les cotes, sur des trappes, sont disposees des armes.\n");
    printf("Laquelle de ces armes prendre ?\n");

    do {

        printf("1. Epee longue\t\t2. Arc \n");
        printf("3. Epee courte\t\t4. Baton \n");
        scanf("%d", &Choix);

    } while     (0 < Choix && Choix > 4);//pemet de vérifié si la réponse correspond au attente

    switch      (Choix)                     // Execute la fonction au fonction du choix
    {
        case 1: return  CreateWarrior   (Pseudo);   break;  // Retourne la fonction 
        case 2: return  CreateBowman    (Pseudo);   break;  // Retourne la fonction
        case 3: return  CreateThief     (Pseudo);   break;  // Retourne la fonction
        case 4: return  CreateWizard    (Pseudo);   break;  // Retourne la fonction
        
        default:

            printf("Vous avez jouer, vous avez été rejetter au choix de la classe !!!!");
            exit(404); // Ejecte du programme

        break;
    }

    printf("Je souleve l\'arme et aussitot les trappes s\'ouvrent et font disparaitre les autres moyens que je pouvais employer pour me defendre.\n");
}

// Fonction permettant de choisir l'action du joueur
void ActionPlayer(struct game* MyGame)
{
    int Choix ;

    do{

        printf("Choix de l action : \n");
        printf("1. %s2. %s \n", MyGame->Player.Actions[0].Name, MyGame->Player.Actions[1].Name);

        scanf("%d", &Choix);

    } while (0 < Choix && Choix > 2);

    if (Choix == 1)
    {
        MyGame->Player.Actions[0].Description(MyGame);
        MyGame->Player.Actions[0].Execution(MyGame);
    }
    else if (Choix == 2)
    {
        MyGame->Player.Actions[1].Description(MyGame);
        MyGame->Player.Actions[1].Execution(MyGame);
    }
    else
    {
        printf("erruer dans action.c");
    }
}
void ExecutableAttackPlayer(struct game* MyGame)
{
    int Random = (rand() % 20) + 1;
    int Dommage = (MyGame->Player.Stats.Attack + Random) - MyGame->CurrentRoom.Opponent.Stats.Shield;

    if (Dommage > 0)
        {
            MyGame->CurrentRoom.Opponent.Stats.LP -= Dommage;
            printf("Vous infligez %d PV.\n", Dommage);
        }
    else if (Dommage <= 0){printf("ne fait aucun degats \n");}
    else{printf("erreur action.c \n");}
}

void ExecutablePileFace(struct game* MyGame)
{
    int Random = (rand() % 100) + 1;

    if (Random > 50)
    {
        int Dommage = 15;
        MyGame->CurrentRoom.Opponent.Stats.LP -= Dommage;
        printf("Vous infligez %d PV.\n", Dommage);
    }
    else if (Random <= 50)
    {
        printf("Bien tenter mais c est rater \n");
    }
    
    
}