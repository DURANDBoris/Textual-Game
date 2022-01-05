#ifndef _ACTION_
#define _ACTION_

//  Fonctions   dans    create_1_pj.c

struct character    CreatePlayer                ();
struct character    SelectClasse                (char *Pseudo);
void                SelectPseudo                (char *Pseudo);
void                ActionPlayer                (struct game* MyGame);
void                ExecutableAttackPlayer      (struct game *MyGame);
void                ExecutablePileFace          (struct game* MyGame);

// Fonctions    dans    create_2_pnj.c

struct character    CreateMonsterOne            (char *Pseudo);
struct character    CreateMonsterTwo            (char *Pseudo);
struct character    CreateMonsterThree          (char *Pseudo);
struct character    CreateMonsterFour           (char *Pseudo);
struct character    CreateMonsterFive           (char *Pseudo);
void                ActionMonsterOne            (struct game* MyGame);
void                ActionMonsterTwo            (struct game* MyGame);
void                ActionMonsterThree          (struct game* MyGame);
void                ActionMonsterFour           (struct game* MyGame);
void                ActionMonsterFive           (struct game* MyGame);

// Fonctions    dans    create_3_heavysword.c 

struct character    CreateWarrior               (char *Pseudo);
struct action       ActionSword                 (char *NameAttack);
struct action       ActionShieldWarrior         (char *NameAttack);
void                DescriptionSword            ();
void                DescriptionShieldWarrior    ();

// Fonctions    dans    create_4_smallsword.c 

struct character    CreateThief                 (char *Pseudo);
struct action       ActionDagger                (char *NameAttack);
struct action       ActionShieldThief           (char *NameAttack);
void                DescriptionDagger           ();
void                DescriptionShieldThief      ();

// Fonctions    dans    create_5_baton.c 

struct character    CreateWizard                (char *Pseudo);
struct action       ActionBaton                 (char *NameAttack);
struct action       ActionHeal                  (char* NameAttack);
void                ExecutableHealPlayer        (struct game* MyGame);
void                DescriptionBaton            ();
void                DescriptionHeal             ();

// Fonctions    dans    create_6_arc.c 

struct character    CreateBowman                (char *Pseudo);
struct action       ActionArc                   (char *NameAttack);
struct action       ActionShieldBowman          (char *NameAttack);
void                DescriptionShieldBowman     ();
void                DescriptionArc              ();

// Fonctions    dans    create_7_room.c

struct room         SelectRoom                  (int Level);
struct room         CreateRoomOne               (char *Name, int Level);
struct room         CreateRoomTwo               (char *Name, int Level);
struct room         CreateRoomThree             (char *Name, int Level);
struct room         CreateRoomFour              (char *Name, int Level);
struct room         CreateRoomFive              (char *Name, int Level);

// Fonctions    dans    create_8_dercription_room_in.c

void                DescriptionRoomOneIn        ();
void                DescriptionRoomTwoIn        ();
void                DescriptionRoomThreeIn      ();
void                DescriptionRoomFourIn       ();
void                DescriptionRoomFiveIn       ();

// Fonctions    dans    crate_9_dercription_room_out.c

void                DescriptionRoomOneOut       ();
void                DescriptionRoomTwoOut       ();
void                DescriptionRoomThreeOut     ();
void                DescriptionRoomFourOut      ();
void                DescriptionRoomFiveOut      ();


#endif