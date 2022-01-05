#include <stdlib.h>
#include <stdio.h>

#include "structure.h"
#include "fonction.h"


void DescriptionRoomOneOut     (struct game* MyGame)
{
    system("cls");
    printf("Je recupere une griffe de lion \n");
    printf("Une porte sur le cote s\'ouvre. J\'attends anxieusement qu\'un autre ennemi paraisse, mais c\'est un drow qui vient et me fait signe de sortir. Je le rejoins, il recupere mon arme et il me conduit dans ma cellule. \n");
    printf("Un plateau avec de la nourriture m\'y attend, ainsi qu\'une bassine d\'eau propre.\n");
    printf("Je meurs de faim, je mange d\'abord, je bois, puis je m\'occupe des quelques blessures ensuite en les lavant soigneusement avec l\'eau.\n");
    printf("La longue attente recommence.\n");
    printf("Combien de temps pourrais-je tenir ainsi ? Y a-t-il une chance de sortir au bout d\'un certain nombre de victoires ? Ou seule la mort attend ? \n");
    getchar();
    getchar();
    system("cls");
}
void DescriptionRoomTwoOut     (struct game *MyGame)
{
    system("cls");
    printf("je recupere un morceaux de tissu\n");
    printf("Un haut-le-coeur me vient.\n");
    printf("Je regarde ce cadavre, cet homme que j\'aurais peut-etre apprecie connaitre si je l\'avais rencontre ailleurs. Massacre inutile...\n");
    printf("Je sors sans jeter un regard vers les tribunes. Ils me degoutent. Je me degoute. Dois-je continuer a me plier a leur jeu ? Ai-je vraiment le moindre espoir, la moindre chose a gagner a tuer les miens ?\n");
    printf("On me remet dans ma cellule. Comme la derniere fois, on m\'a laisse de la nourriture et une bassine d\'eau limpide.\n");
    printf("J\'utilise les morceaux de tissu pour faire des bandages\n");
    printf("Je commence a reperer le rythme de vie des drows. Ces... spectacles... que nous donnons a chaque fois doivent avoir lieu apres les journees de travail. Lorsqu\'ils sont termines, pendant deux ou trois heures, tres approximativement, l\'activite semble la meme que toute la journee, puis elle deminue, indiquant certainement qu\'une majorite de gardes est rentree pour la nuit. \n");
    getchar();
    getchar();
    system("cls");
}
void DescriptionRoomThreeOut   (struct game *MyGame)
{
    system("cls");
    printf("Je recupere un dard de wyverne \n");
    printf("Je l\'ai vaincu. Je l\'ai vaincu.  \n");
    printf("Je regagne ma cellule comme un etre mecanique sans emotion. C\'est pourtant en tremblant que je nettoie mes blessures, en tremblant que je regarde mon reflet dans l\'eau brunie.\n");
    printf("Il faut que je parte le plus vite possible. Qui sait quelle creature je pourrais affronter encore ? Plus le temps passe, plus je faibli, plus mes blessures me diminue. Je dois sortir de la.\n");
    printf("Le moment est venu. On n\'entend plus que les pas d\'une ronde reduite. J\'attends que le garde passe dans mon couloir et s\'eloigne, puis, muni de la griffe de lion et du dard, je me mets a la porte pour crocheter ma cellule.\n");
    printf("J\'utilise la griffe comme entraineur, pour bloquer la serrure, et le dard comme crochet, en prenant garde a ne pas me piquer en le manipulant, au cas ou il reste du poison.\n");
    printf("Je dois m\'arreter une fois, pendant le retour du garde, avant de reprendre mon essai. Je crois que ca va marcher, que ca va s\'ouvrir. Mais ce ne sera pas le plus difficile.\n");
    printf("Enfin, j\'entends le loquet rentrer. Je me fige.\n");
    printf("J\'attends que le garde repasse. Je tente de controler ma respiration, mon espoir. Je me concentre sur mes bras et mes doigts pour que le loquet ne relache pas et que le porte ne s\'entrouvre pas.\n");
    printf("Enfin, les pas resonnent dans le couloir, le traversent, tournent au bout, disparaissent en ne laissant plus que l\'echo. Je pousse doucement le battant. Je retiens difficilement un mouvement de joie lorsque j\'apercois ce couloir que je redoute tant a certaines heures.\n");
    printf("Je me glisse a l\'exterieur. Je longe le mur, je suis le chemin emprunte tant de fois en ecoutant attentivement. Je retrouve cette salle que j\'avais apercue.\n");
    printf("La porte est fermee.\n");
    getchar();
    getchar();
    system("cls");
}
void DescriptionRoomFourOut    (struct game *MyGame)
{
    system("cls");
    printf("Je recupere une carte de la cite souterraine\n");
    printf("Les cris et les bruits du combat vont certainement ramener les autres. Je me precipite dehors et cours a l\'oppose des bruits. \n");
    printf("Je traverse couloir sur couloir, je ne sais pas ou je vais, j\'espere seulement trouver la sortie avant qu\'eux me trouve.\n");
    printf("Enfin, j\'arrive devant une porte a double battant qui ressemble a une porte donnant sur un exterieur. Je ne reflechis pas, je l\'ouvre et... la rue !\n");
    printf("Je me precipite dehors, cours entre les maisons, longe les murs. Il y a quelques badauds tardifs, mais si certains m\'ont regarde avec etonnement, ils n\'ont pas l\'air de se preoccuper d\'un champion en cavale.\n");
    printf("Je m\'arrete lorsque je pense avoir assez seme mes poursuivant. Je me glisse dans une ruelle pour reprendre mon souffle, mes esprits et me reconcentrer.\n");
    printf("J\'ouvre la carte et examine les sorties. Laquelle prendre ? Laquelle serait la moins garde ?\n");
    printf("Je me sens soudain impuissant. J\'ai quitte une prison plus petite pour me retrouver dans une prison plus grande. Mais qui a eu la bonne idee de bannir les drows de la surface de la Terre ?\n");
    printf("Mon regard se porte sur la riviere souterraine. On dirait qu\'elle sort en cascade vers un niveau plus bas, que la cite est situee a l\'interieur d\'une falaise. La carte indique des zones vertes, comme des prairies ou des forets la ou elle debouche. Ainsi, soit elle conduit a l\'exterieur, soit elle s\'enfonce plus profondement dans les souterrains.\n");
    printf("L\'une ou l\'autre des solutions permettrait sans doute de me mettre en securite. Bien sur, je prefererais la premiere. Si je me perds plus profondement sous terre, qui sait quand je pourrais ressortir ?\n");
    printf("J\'entreprends de sortir de ma cachette et de marcher tranquillement, pour ne pas trop attirer l\'attention. Je cherche les zones d\'ombre, pour dissimuler mon apparence d\'humain.\n");
    printf("J\'arrive aux quais cinq minutes plus tard. Le courant y est tres fort. Je les longe un instant pour voir ou mene la riviere. Mais j\'entends des voix agitees non loin, des pas precipites.\n");
    printf("Ils ont du appeler du renfort pour me retrouver.\n");
    getchar();
    getchar();
    system("cls");
}
void DescriptionRoomFiveOut    (struct game *MyGame)
{
    system("cls");
    printf("Je me jette dans le lac et nage aussi vite que je le peux. Mon salut immediat est sur la berge. Je n\'en suis pas loin. \n");
    printf("Dans ma peur, je ne me rends pas compte que je retiens mon souffle. Je ne le constate que lorsque je sens sous ma main le sol qui remonte progressivement au-dessus de l\'eau.  \n");
    printf("Je cesse de nager, pose mes pieds sur le sol, et marche hors du lac, en respirant a nouveau.  \n");
    printf("Sur la berge, je me precipite le plus loin possible, contre les murs de l\'immense grotte, ou je me laisse tomber, la tete entre les mains.  \n");
    printf("Je reste un instant ainsi, dans ce moment suspendu ou rien ne peut m\'atteindre, comme un enfant qui s\'enferme dans sa chambre pour echapper a une peur.  \n");
    printf("Je respire a nouveau. Je respire encore.  \n");
    printf("Et c\'est seulement maintenant que je percois un souffle de l\'air. Je le sens contre ma peau. \n");
    printf("Je me releve doucement. Je me dirige vers la cascade au bout du lac.  \n");
    printf("Une cavite etroite permet de voir au-dela. \n");
    printf("C\'est une foret. C\'est l\'exterieur ! \n");
    printf("Je m\'accroche a la roche pour escalader et passer au-dessus de la riviere, pour me retrouver de l\'autre cote, au flan de la falaise, dans le vent. \n");
    printf("J\'entreprends de descendre, prudemment, en m\'agrippant fermement a la roche. Je ne peux pas faire une chute mortelle maintenant, apres avoir survecu a tout ca ! \n");
    printf("La descente est tres lente, tres longue. Elle tire sur mes membres dechires par de multiples blessures, elle tire sur mes bras fatigues, sur mes membres lourds epuises par les contractions dues a la peur. \n");
    printf("Pourtant, j\'y arrive, je parviens a poser le pied sur le sol.  \n");
    printf("Je n\'ai plus qu\'a suivre la riviere pour trouver une ville ou un village ami.  \n");
}