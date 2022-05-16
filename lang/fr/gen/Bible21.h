#include <map>
#include <string>
class Bible21
{
	struct fr1	{ int val; const char *msg; };
	struct fr2	{ int val; const char *msg; };
	struct fr3	{ int val; const char *msg; };
	struct fr4	{ int val; const char *msg; };
	struct fr5	{ int val; const char *msg; };
	struct fr6	{ int val; const char *msg; };
	struct fr7	{ int val; const char *msg; };
	struct fr8	{ int val; const char *msg; };
	struct fr9	{ int val; const char *msg; };
	struct fr10	{ int val; const char *msg; };
	struct fr11	{ int val; const char *msg; };
	struct fr12	{ int val; const char *msg; };
public:
static void view1() {
struct fr1 poems[] = {
	{1, "1 Paroles de l'Ecclésiaste, fils de David, roi de Jérusalem. "},
	{2, "2 Vanité des vanités, dit l'Ecclésiaste, vanité des vanités, tout est vanité. "},
	{3, "3 Quel avantage revient-il à l'homme de toute la peine qu'il se donne sous le soleil? "},
	{4, "4 Une génération s'en va, une autre vient, et la terre subsiste toujours. "},
	{5, "5 Le soleil se lève, le soleil se couche; il soupire après le lieu d'où il se lève de nouveau. "},
	{6, "6 Le vent se dirige vers le midi, tourne vers le nord; puis il tourne encore, et reprend les mêmes circuits. "},
	{7, "7 Tous les fleuves vont à la mer, et la mer n'est point remplie; ils continuent à aller vers le lieu où ils se dirigent. "},
	{8, "8 Toutes choses sont en travail au delà de ce qu'on peut dire; l'oeil ne se rassasie pas de voir, et l'oreille ne se lasse pas d'entendre. "},
	{9, "9 Ce qui a été, c'est ce qui sera, et ce qui s'est fait, c'est ce qui se fera, il n'y a rien de nouveau sous le soleil. "},
	{10, "10 S'il est une chose dont on dise: Vois ceci, c'est nouveau! cette chose existait déjà dans les siècles qui nous ont précédés. "},
	{11, "11 On ne se souvient pas de ce qui est ancien; et ce qui arrivera dans la suite ne laissera pas de souvenir chez ceux qui vivront plus tard. "},
	{12, "12 Moi, l'Ecclésiaste, j'ai été roi d'Israël à Jérusalem. "},
	{13, "13 J'ai appliqué mon coeur à rechercher et à sonder par la sagesse tout ce qui se fait sous les cieux: c'est là une occupation pénible, à laquelle Dieu soumet les fils de l'homme. "},
	{14, "14 J'ai vu tout ce qui se fait sous le soleil; et voici, tout est vanité et poursuite du vent. "},
	{15, "15 Ce qui est courbé ne peut se redresser, et ce qui manque ne peut être compté. "},
	{16, "16 J'ai dit en mon coeur: Voici, j'ai grandi et surpassé en sagesse tous ceux qui ont dominé avant moi sur Jérusalem, et mon coeur a vu beaucoup de sagesse et de science. "},
	{17, "17 J'ai appliqué mon coeur à connaître la sagesse, et à connaître la sottise et la folie; j'ai compris que cela aussi c'est la poursuite du vent. "},
	{18, "18 Car avec beaucoup de sagesse on a beaucoup de chagrin, et celui qui augmente sa science augmente sa douleur. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct fr2 poems[] = {
	{1, "1 J'ai dit en mon coeur: Allons! je t'éprouverai par la joie, et tu goûteras le bonheur. Et voici, c'est encore là une vanité. "},
	{2, "2 J'ai dit du rire: Insensé! et de la joie: A quoi sert-elle? "},
	{3, "3 Je résolus en mon coeur de livrer ma chair au vin, tandis que mon coeur me conduirait avec sagesse, et de m'attacher à la folie jusqu'à ce que je visse ce qu'il est bon pour les fils de l'homme de faire sous les cieux pendant le nombre des jours de leur vie. "},
	{4, "4 J'exécutai de grands ouvrages: je me bâtis des maisons; je me plantai des vignes; "},
	{5, "5 je me fis des jardins et des vergers, et j'y plantai des arbres à fruit de toute espèce; "},
	{6, "6 je me créai des étangs, pour arroser la forêt où croissaient les arbres. "},
	{7, "7 J'achetai des serviteurs et des servantes, et j'eus leurs enfants nés dans la maison; je possédai des troupeaux de boeufs et de brebis, plus que tous ceux qui étaient avant moi dans Jérusalem. "},
	{8, "8 Je m'amassai de l'argent et de l'or, et les richesses des rois et des provinces. Je me procurai des chanteurs et des chanteuses, et les délices des fils de l'homme, des femmes en grand nombre. "},
	{9, "9 Je devins grand, plus grand que tous ceux qui étaient avant moi dans Jérusalem. Et même ma sagesse demeura avec moi. "},
	{10, "10 Tout ce que mes yeux avaient désiré, je ne les en ai point privés; je n'ai refusé à mon coeur aucune joie; car mon coeur prenait plaisir à tout mon travail, et c'est la part qui m'en est revenue. "},
	{11, "11 Puis, j'ai considéré tous les ouvrages que mes mains avaient faits, et la peine que j'avais prise à les exécuter; et voici, tout est vanité et poursuite du vent, et il n'y a aucun avantage à tirer de ce qu'on fait sous le soleil. "},
	{12, "12 Alors j'ai tourné mes regards vers la sagesse, et vers la sottise et la folie. -Car que fera l'homme qui succédera au roi? Ce qu'on a déjà fait. "},
	{13, "13 Et j'ai vu que la sagesse a de l'avantage sur la folie, comme la lumière a de l'avantage sur les ténèbres; "},
	{14, "14 le sage a ses yeux à la tête, et l'insensé marche dans les ténèbres. Mais j'ai reconnu aussi qu'ils ont l'un et l'autre un même sort. "},
	{15, "15 Et j'ai dit en mon coeur: J'aurai le même sort que l'insensé; pourquoi donc ai-je été plus sage? Et j'ai dit en mon coeur que c'est encore là une vanité. "},
	{16, "16 Car la mémoire du sage n'est pas plus éternelle que celle de l'insensé, puisque déjà les jours qui suivent, tout est oublié. Eh quoi! le sage meurt aussi bien que l'insensé! "},
	{17, "17 Et j'ai haï la vie, car ce qui se fait sous le soleil m'a déplu, car tout est vanité et poursuite du vent. "},
	{18, "18 J'ai haï tout le travail que j'ai fait sous le soleil, et dont je dois laisser la jouissance à l'homme qui me succédera. "},
	{19, "19 Et qui sait s'il sera sage ou insensé? Cependant il sera maître de tout mon travail, de tout le fruit de ma sagesse sous le soleil. C'est encore là une vanité. "},
	{20, "20 Et j'en suis venu à livrer mon coeur au désespoir, à cause de tout le travail que j'ai fait sous le soleil. "},
	{21, "21 Car tel homme a travaillé avec sagesse et science et avec succès, et il laisse le produit de son travail à un homme qui ne s'en est point occupé. C'est encore là une vanité et un grand mal. "},
	{22, "22 Que revient-il, en effet, à l'homme de tout son travail et de la préoccupation de son coeur, objet de ses fatigues sous le soleil? "},
	{23, "23 Tous ses jours ne sont que douleur, et son partage n'est que chagrin; même la nuit son coeur ne repose pas. C'est encore là une vanité. "},
	{24, "24 Il n'y a de bonheur pour l'homme qu'à manger et à boire, et à faire jouir son âme du bien-être, au milieu de son travail; mais j'ai vu que cela aussi vient de la main de Dieu. "},
	{25, "25 Qui, en effet, peut manger et jouir, si ce n'est moi? "},
	{26, "26 Car il donne à l'homme qui lui est agréable la sagesse, la science et la joie; mais il donne au pécheur le soin de recueillir et d'amasser, afin de donner à celui qui est agréable à Dieu. C'est encore là une vanité et la poursuite du vent. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct fr3 poems[] = {
	{1, "1 Il y a un temps pour tout, un temps pour toute chose sous les cieux: "},
	{2, "2 un temps pour naître, et un temps pour mourir; un temps pour planter, et un temps pour arracher ce qui a été planté; "},
	{3, "3 un temps pour tuer, et un temps pour guérir; un temps pour abattre, et un temps pour bâtir; "},
	{4, "4 un temps pour pleurer, et un temps pour rire; un temps pour se lamenter, et un temps pour danser; "},
	{5, "5 un temps pour lancer des pierres, et un temps pour ramasser des pierres; un temps pour embrasser, et un temps pour s'éloigner des embrassements; "},
	{6, "6 un temps pour chercher, et un temps pour perdre; un temps pour garder, et un temps pour jeter; "},
	{7, "7 un temps pour déchirer, et un temps pour coudre; un temps pour se taire, et un temps pour parler; "},
	{8, "8 un temps pour aimer, et un temps pour haïr; un temps pour la guerre, et un temps pour la paix. "},
	{9, "9 Quel avantage celui qui travaille retire-t-il de sa peine? "},
	{10, "10 J'ai vu à quelle occupation Dieu soumet les fils de l'homme. "},
	{11, "11 Il fait toute chose bonne en son temps; même il a mis dans leur coeur la pensée de l'éternité, bien que l'homme ne puisse pas saisir l'oeuvre que Dieu fait, du commencement jusqu'à la fin. "},
	{12, "12 J'ai reconnu qu'il n'y a de bonheur pour eux qu'à se réjouir et à se donner du bien-être pendant leur vie; "},
	{13, "13 mais que, si un homme mange et boit et jouit du bien-être au milieu de tout son travail, c'est là un don de Dieu. "},
	{14, "14 J'ai reconnu que tout ce que Dieu fait durera toujours, qu'il n'y a rien à y ajouter et rien à en retrancher, et que Dieu agit ainsi afin qu'on le craigne. "},
	{15, "15 Ce qui est a déjà été, et ce qui sera a déjà été, et Dieu ramène ce qui est passé. "},
	{16, "16 J'ai encore vu sous le soleil qu'au lieu établi pour juger il y a de la méchanceté, et qu'au lieu établi pour la justice il y a de la méchanceté. "},
	{17, "17 J'ai dit en mon coeur: Dieu jugera le juste et le méchant; car il y a là un temps pour toute chose et pour toute oeuvre. "},
	{18, "18 J'ai dit en mon coeur, au sujet des fils de l'homme, que Dieu les éprouverait, et qu'eux-mêmes verraient qu'ils ne sont que des bêtes. "},
	{19, "19 Car le sort des fils de l'homme et celui de la bête sont pour eux un même sort; comme meurt l'un, ainsi meurt l'autre, ils ont tous un même souffle, et la supériorité de l'homme sur la bête est nulle; car tout est vanité. "},
	{20, "20 Tout va dans un même lieu; tout a été fait de la poussière, et tout retourne à la poussière. "},
	{21, "21 Qui sait si le souffle des fils de l'homme monte en haut, et si le souffle de la bête descend en bas dans la terre? "},
	{22, "22 Et j'ai vu qu'il n'y a rien de mieux pour l'homme que de se réjouir de ses oeuvres: c'est là sa part. Car qui le fera jouir de ce qui sera après lui? "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct fr4 poems[] = {
	{1, "1 J'ai considéré ensuite toutes les oppressions qui se commettent sous le soleil; et voici, les opprimés sont dans les larmes, et personne qui les console! ils sont en butte à la violence de leurs oppresseurs, et personne qui les console! "},
	{2, "2 Et j'ai trouvé les morts qui sont déjà morts plus heureux que les vivants qui sont encore vivants, "},
	{3, "3 et plus heureux que les uns et les autres celui qui n'a point encore existé et qui n'a pas vu les mauvaises actions qui se commettent sous le soleil. "},
	{4, "4 J'ai vu que tout travail et toute habileté dans le travail n'est que jalousie de l'homme à l'égard de son prochain. C'est encore là une vanité et la poursuite du vent. "},
	{5, "5 L'insensé se croise les mains, et mange sa propre chair. "},
	{6, "6 Mieux vaut une main pleine avec repos, que les deux mains pleines avec travail et poursuite du vent. "},
	{7, "7 J'ai considéré une autre vanité sous le soleil. "},
	{8, "8 Tel homme est seul et sans personne qui lui tienne de près, il n'a ni fils ni frère, et pourtant son travail n'a point de fin et ses yeux ne sont jamais rassasiés de richesses. Pour qui donc est-ce que je travaille, et que je prive mon âme de jouissances? C'est encore là une vanité et une chose mauvaise. "},
	{9, "9 Deux valent mieux qu'un, parce qu'ils retirent un bon salaire de leur travail. "},
	{10, "10 Car, s'ils tombent, l'un relève son compagnon; mais malheur à celui qui est seul et qui tombe, sans avoir un second pour le relever! "},
	{11, "11 De même, si deux couchent ensemble, ils auront chaud; mais celui qui est seul, comment aura-t-il chaud? "},
	{12, "12 Et si quelqu'un est plus fort qu'un seul, les deux peuvent lui résister; et la corde à trois fils ne se rompt pas facilement. "},
	{13, "13 Mieux vaut un enfant pauvre et sage qu'un roi vieux et insensé qui ne sait plus écouter les avis; "},
	{14, "14 car il peut sortir de prison pour régner, et même être né pauvre dans son royaume. "},
	{15, "15 J'ai vu tous les vivants qui marchent sous le soleil entourer l'enfant qui devait succéder au roi et régner à sa place. "},
	{16, "16 Il n'y avait point de fin à tout ce peuple, à tous ceux à la tête desquels il était. Et toutefois, ceux qui viendront après ne se réjouiront pas à son sujet. Car c'est encore là une vanité et la poursuite du vent. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct fr5 poems[] = {
	{1, "1 (4:17) Prends garde à ton pied, lorsque tu entres dans la maison de Dieu; approche-toi pour écouter, plutôt que pour offrir le sacrifice des insensés, car ils ne savent pas qu'ils font mal. "},
	{2, "2 (5:1) Ne te presse pas d'ouvrir la bouche, et que ton coeur ne se hâte pas d'exprimer une parole devant Dieu; car Dieu est au ciel, et toi sur la terre: que tes paroles soient donc peu nombreuses. "},
	{3, "3 (5:2) Car, si les songes naissent de la multitude des occupations, la voix de l'insensé se fait entendre dans la multitude des paroles. "},
	{4, "4 (5:3) Lorsque tu as fait un voeu à Dieu, ne tarde pas à l'accomplir, car il n'aime pas les insensés: accomplis le voeu que tu as fait. "},
	{5, "5 (5:4) Mieux vaut pour toi ne point faire de voeu, que d'en faire un et de ne pas l'accomplir. "},
	{6, "6 (5:5) Ne permets pas à ta bouche de faire pécher ta chair, et ne dis pas en présence de l'envoyé que c'est une inadvertance. Pourquoi Dieu s'irriterait-il de tes paroles, et détruirait-il l'ouvrage de tes mains? "},
	{7, "7 (5:6) Car, s'il y a des vanités dans la multitude des songes, il y en a aussi dans beaucoup de paroles; c'est pourquoi, crains Dieu. "},
	{8, "8 (5:7) Si tu vois dans une province le pauvre opprimé et la violation du droit et de la justice, ne t'en étonne point; car un homme élevé est placé sous la surveillance d'un autre plus élevé, et au-dessus d'eux il en est de plus élevés encore. "},
	{9, "9 (5:8) Un avantage pour le pays à tous égards, c'est un roi honoré du pays. "},
	{10, "10 (5:9) Celui qui aime l'argent n'est pas rassasié par l'argent, et celui qui aime les richesses n'en profite pas. C'est encore là une vanité. "},
	{11, "11 (5:10) Quand le bien abonde, ceux qui le mangent abondent; et quel avantage en revient-il à son possesseur, sinon qu'il le voit de ses yeux? "},
	{12, "12 (5:11) Le sommeil du travailleur est doux, qu'il ait peu ou beaucoup à manger; mais le rassasiement du riche ne le laisse pas dormir. "},
	{13, "13 (5:12) Il est un mal grave que j'ai vu sous le soleil: des richesses conservées, pour son malheur, par celui qui les possède. "},
	{14, "14 (5:13) Ces richesses se perdent par quelque événement fâcheux; il a engendré un fils, et il ne reste rien entre ses mains. "},
	{15, "15 (5:14) Comme il est sorti du ventre de sa mère, il s'en retourne nu ainsi qu'il était venu, et pour son travail n'emporte rien qu'il puisse prendre dans sa main. "},
	{16, "16 (5:15) C'est encore là un mal grave. Il s'en va comme il était venu; et quel avantage lui revient-il d'avoir travaillé pour du vent? "},
	{17, "17 (5:16) De plus, toute sa vie il mange dans les ténèbres, et il a beaucoup de chagrin, de maux et d'irritation. "},
	{18, "18 (5:17) Voici ce que j'ai vu: c'est pour l'homme une chose bonne et belle de manger et de boire, et de jouir du bien-être au milieu de tout le travail qu'il fait sous le soleil, pendant le nombre des jours de vie que Dieu lui a donnés; car c'est là sa part. "},
	{19, "19 (5:18) Mais, si Dieu a donné à un homme des richesses et des biens, s'il l'a rendu maître d'en manger, d'en prendre sa part, et de se réjouir au milieu de son travail, c'est là un don de Dieu. "},
	{20, "20 (5:19) Car il ne se souviendra pas beaucoup des jours de sa vie, parce que Dieu répand la joie dans son coeur. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct fr6 poems[] = {
	{1, "1 Il est un mal que j'ai vu sous le soleil, et qui est fréquent parmi les hommes. "},
	{2, "2 Il y a tel homme à qui Dieu a donné des richesses, des biens, et de la gloire, et qui ne manque pour son âme de rien de ce qu'il désire, mais que Dieu ne laisse pas maître d'en jouir, car c'est un étranger qui en jouira. C'est là une vanité et un mal grave. "},
	{3, "3 Quand un homme aurait cent fils, vivrait un grand nombre d'années, et que les jours de ses années se multiplieraient, si son âme ne s'est point rassasiée de bonheur, et si de plus il n'a point de sépulture, je dis qu'un avorton est plus heureux que lui. "},
	{4, "4 Car il est venu en vain, il s'en va dans les ténèbres, et son nom reste couvert de ténèbres; "},
	{5, "5 il n'a point vu, il n'a point connu le soleil; il a plus de repos que cet homme. "},
	{6, "6 Et quand celui-ci vivrait deux fois mille ans, sans jouir du bonheur, tout ne va-t-il pas dans un même lieu? "},
	{7, "7 Tout le travail de l'homme est pour sa bouche, et cependant ses désirs ne sont jamais satisfaits. "},
	{8, "8 Car quel avantage le sage a-t-il sur l'insensé? quel avantage a le malheureux qui sait se conduire en présence des vivants? "},
	{9, "9 Ce que les yeux voient est préférable à l'agitation des désirs: c'est encore là une vanité et la poursuite du vent. "},
	{10, "10 Ce qui existe a déjà été appelé par son nom; et l'on sait que celui qui est homme ne peut contester avec un plus fort que lui. "},
	{11, "11 S'il y a beaucoup de choses, il y a beaucoup de vanités: quel avantage en revient-il à l'homme? "},
	{12, "12 Car qui sait ce qui est bon pour l'homme dans la vie, pendant le nombre des jours de sa vie de vanité, qu'il passe comme une ombre? Et qui peut dire à l'homme ce qui sera après lui sous le soleil? "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct fr7 poems[] = {
	{1, "1 Une bonne réputation vaut mieux que le bon parfum, et le jour de la mort que le jour de la naissance. "},
	{2, "2 Mieux vaut aller dans une maison de deuil que d'aller dans une maison de festin; car c'est là la fin de tout homme, et celui qui vit prend la chose à coeur. "},
	{3, "3 Mieux vaut le chagrin que le rire; car avec un visage triste le coeur peut être content. "},
	{4, "4 Le coeur des sages est dans la maison de deuil, et le coeur des insensés dans la maison de joie. "},
	{5, "5 Mieux vaut entendre la réprimande du sage que d'entendre le chant des insensés. "},
	{6, "6 Car comme le bruit des épines sous la chaudière, ainsi est le rire des insensés. C'est encore là une vanité. "},
	{7, "7 L'oppression rend insensé le sage, et les présents corrompent le coeur. "},
	{8, "8 Mieux vaut la fin d'une chose que son commencement; mieux vaut un esprit patient qu'un esprit hautain. "},
	{9, "9 Ne te hâte pas en ton esprit de t'irriter, car l'irritation repose dans le sein des insensés. "},
	{10, "10 Ne dis pas: D'où vient que les jours passés étaient meilleurs que ceux ci? Car ce n'est point par sagesse que tu demandes cela. "},
	{11, "11 La sagesse vaut autant qu'un héritage, et même plus pour ceux qui voient le soleil. "},
	{12, "12 Car à l'ombre de la sagesse on est abrité comme à l'ombre de l'argent; mais un avantage de la science, c'est que la sagesse fait vivre ceux qui la possèdent. "},
	{13, "13 Regarde l'oeuvre de Dieu: qui pourra redresser ce qu'il a courbé? "},
	{14, "14 Au jour du bonheur, sois heureux, et au jour du malheur, réfléchis: Dieu a fait l'un comme l'autre, afin que l'homme ne découvre en rien ce qui sera après lui. "},
	{15, "15 J'ai vu tout cela pendant les jours de ma vanité. Il y a tel juste qui périt dans sa justice, et il y a tel méchant qui prolonge son existence dans sa méchanceté. "},
	{16, "16 Ne sois pas juste à l'excès, et ne te montre pas trop sage: pourquoi te détruirais-tu? "},
	{17, "17 Ne sois pas méchant à l'excès, et ne sois pas insensé: pourquoi mourrais-tu avant ton temps? "},
	{18, "18 Il est bon que tu retiennes ceci, et que tu ne négliges point cela; car celui qui craint Dieu échappe à toutes ces choses. "},
	{19, "19 La sagesse rend le sage plus fort que dix chefs qui sont dans une ville. "},
	{20, "20 Non, il n'y a sur la terre point d'homme juste qui fasse le bien et qui ne pèche jamais. "},
	{21, "21 Ne fais donc pas attention à toutes les paroles qu'on dit, de peur que tu n'entendes ton serviteur te maudire; "},
	{22, "22 car ton coeur a senti bien des fois que tu as toi-même maudit les autres. "},
	{23, "23 J'ai éprouvé tout cela par la sagesse. J'ai dit: Je serai sage. Et la sagesse est restée loin de moi. "},
	{24, "24 Ce qui est loin, ce qui est profond, profond, qui peut l'atteindre? "},
	{25, "25 Je me suis appliqué dans mon coeur à connaître, à sonder, et à chercher la sagesse et la raison des choses, et à connaître la folie de la méchanceté et la stupidité de la sottise. "},
	{26, "26 Et j'ai trouvé plus amère que la mort la femme dont le coeur est un piège et un filet, et dont les mains sont des liens; celui qui est agréable à Dieu lui échappe, mais le pécheur est pris par elle. "},
	{27, "27 Voici ce que j'ai trouvé, dit l'Ecclésiaste, en examinant les choses une à une pour en saisir la raison; "},
	{28, "28 voici ce que mon âme cherche encore, et que je n'ai point trouvé. J'ai trouvé un homme entre mille; mais je n'ai pas trouvé une femme entre elles toutes. "},
	{29, "29 Seulement, voici ce que j'ai trouvé, c'est que Dieu a fait les hommes droits; mais ils ont cherché beaucoup de détours. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct fr8 poems[] = {
	{1, "1 Qui est comme le sage, et qui connaît l'explication des choses? La sagesse d'un homme fait briller son visage, et la sévérité de sa face est changée. "},
	{2, "2 Je te dis: Observe les ordres du roi, et cela à cause du serment fait à Dieu. "},
	{3, "3 Ne te hâte pas de t'éloigner de lui, et ne persiste pas dans une chose mauvaise: car il peut faire tout ce qui lui plaît, "},
	{4, "4 parce que la parole du roi est puissante; et qui lui dira: Que fais-tu? "},
	{5, "5 Celui qui observe le commandement ne connaît point de chose mauvaise, et le coeur du sage connaît le temps et le jugement. "},
	{6, "6 Car il y a pour toute chose un temps et un jugement, quand le malheur accable l'homme. "},
	{7, "7 Mais il ne sait point ce qui arrivera, et qui lui dira comment cela arrivera? "},
	{8, "8 L'homme n'est pas maître de son souffle pour pouvoir le retenir, et il n'a aucune puissance sur le jour de la mort; il n'y a point de délivrance dans ce combat, et la méchanceté ne saurait sauver les méchants. "},
	{9, "9 J'ai vu tout cela, et j'ai appliqué mon coeur à tout ce qui se fait sous le soleil. Il y a un temps où l'homme domine sur l'homme pour le rendre malheureux. "},
	{10, "10 Alors j'ai vu des méchants recevoir la sépulture et entrer dans leur repos, et ceux qui avaient agi avec droiture s'en aller loin du lieu saint et être oubliés dans la ville. C'est encore là une vanité. "},
	{11, "11 Parce qu'une sentence contre les mauvaises actions ne s'exécute pas promptement, le coeur des fils de l'homme se remplit en eux du désir de faire le mal. "},
	{12, "12 Cependant, quoique le pécheur fasse cent fois le mal et qu'il y persévère longtemps, je sais aussi que le bonheur est pour ceux qui craignent Dieu, parce qu'ils ont de la crainte devant lui. "},
	{13, "13 Mais le bonheur n'est pas pour le méchant, et il ne prolongera point ses jours, pas plus que l'ombre, parce qu'il n'a pas de la crainte devant Dieu. "},
	{14, "14 Il est une vanité qui a lieu sur la terre: c'est qu'il y a des justes auxquels il arrive selon l'oeuvre des méchants, et des méchants auxquels il arrive selon l'oeuvre des justes. Je dis que c'est encore là une vanité. "},
	{15, "15 J'ai donc loué la joie, parce qu'il n'y a de bonheur pour l'homme sous le soleil qu'à manger et à boire et à se réjouir; c'est là ce qui doit l'accompagner au milieu de son travail, pendant les jours de vie que Dieu lui donne sous le soleil. "},
	{16, "16 Lorsque j'ai appliqué mon coeur à connaître la sagesse et à considérer les choses qui se passent sur la terre, -car les yeux de l'homme ne goûtent le sommeil ni jour ni nuit, "},
	{17, "17 j'ai vu toute l'oeuvre de Dieu, j'ai vu que l'homme ne peut pas trouver ce qui se fait sous le soleil; il a beau se fatiguer à chercher, il ne trouve pas; et même si le sage veut connaître, il ne peut pas trouver. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view9() {
struct fr9 poems[] = {
	{1, "1 Oui, j'ai appliqué mon coeur à tout cela, j'ai fait de tout cela l'objet de mon examen, et j'ai vu que les justes et les sages, et leurs travaux, sont dans la main de Dieu, et l'amour aussi bien que la haine; les hommes ne savent rien: tout est devant eux. "},
	{2, "2 Tout arrive également à tous; même sort pour le juste et pour le méchant, pour celui qui est bon et pur et pour celui qui est impur, pour celui qui sacrifie et pour celui qui ne sacrifie pas; il en est du bon comme du pécheur, de celui qui jure comme de celui qui craint de jurer. "},
	{3, "3 Ceci est un mal parmi tout ce qui se fait sous le soleil, c'est qu'il y a pour tous un même sort; aussi le coeur des fils de l'homme est-il plein de méchanceté, et la folie est dans leur coeur pendant leur vie; après quoi, ils vont chez les morts. Car, qui est excepté? "},
	{4, "4 Pour tous ceux qui vivent il y a de l'espérance; et même un chien vivant vaut mieux qu'un lion mort. "},
	{5, "5 Les vivants, en effet, savent qu'ils mourront; mais les morts ne savent rien, et il n'y a pour eux plus de salaire, puisque leur mémoire est oubliée. "},
	{6, "6 Et leur amour, et leur haine, et leur envie, ont déjà péri; et ils n'auront plus jamais aucune part à tout ce qui se fait sous le soleil. "},
	{7, "7 Va, mange avec joie ton pain, et bois gaiement ton vin; car dès longtemps Dieu prend plaisir à ce que tu fais. "},
	{8, "8 Qu'en tout temps tes vêtements soient blancs, et que l'huile ne manque point sur ta tête. "},
	{9, "9 Jouis de la vie avec la femme que tu aimes, pendant tous les jours de ta vie de vanité, que Dieu t'a donnés sous le soleil, pendant tous les jours de ta vanité; car c'est ta part dans la vie, au milieu de ton travail que tu fais sous le soleil. "},
	{10, "10 Tout ce que ta main trouve à faire avec ta force, fais-le; car il n'y a ni oeuvre, ni pensée, ni science, ni sagesse, dans le séjour des morts, où tu vas. "},
	{11, "11 J'ai encore vu sous le soleil que la course n'est point aux agiles ni la guerre aux vaillants, ni le pain aux sages, ni la richesse aux intelligents, ni la faveur aux savants; car tout dépend pour eux du temps et des circonstances. "},
	{12, "12 L'homme ne connaît pas non plus son heure, pareil aux poissons qui sont pris au filet fatal, et aux oiseaux qui sont pris au piège; comme eux, les fils de l'homme sont enlacés au temps du malheur, lorsqu'il tombe sur eux tout à coup. "},
	{13, "13 J'ai aussi vu sous le soleil ce trait d'une sagesse qui m'a paru grande. "},
	{14, "14 Il y avait une petite ville, avec peu d'hommes dans son sein; un roi puissant marcha sur elle, l'investit, et éleva contre elle de grands forts. "},
	{15, "15 Il s'y trouvait un homme pauvre et sage, qui sauva la ville par sa sagesse. Et personne ne s'est souvenu de cet homme pauvre. "},
	{16, "16 Et j'ai dit: La sagesse vaut mieux que la force. Cependant la sagesse du pauvre est méprisée, et ses paroles ne sont pas écoutées. "},
	{17, "17 Les paroles des sages tranquillement écoutées valent mieux que les cris de celui qui domine parmi les insensés. "},
	{18, "18 La sagesse vaut mieux que les instruments de guerre; mais un seul pécheur détruit beaucoup de bien. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view10() {
struct fr10 poems[] = {
	{1, "1 Les mouches mortes infectent et font fermenter l'huile du parfumeur; un peu de folie l'emporte sur la sagesse et sur la gloire. "},
	{2, "2 Le coeur du sage est à sa droite, et le coeur de l'insensé à sa gauche. "},
	{3, "3 Quand l'insensé marche dans un chemin, le sens lui manque, et il dit de chacun: Voilà un fou! "},
	{4, "4 Si l'esprit de celui qui domine s'élève contre toi, ne quitte point ta place; car le calme prévient de grands péchés. "},
	{5, "5 Il est un mal que j'ai vu sous le soleil, comme une erreur provenant de celui qui gouverne: "},
	{6, "6 la folie occupe des postes très élevés, et des riches sont assis dans l'abaissement. "},
	{7, "7 J'ai vu des esclaves sur des chevaux, et des princes marchant sur terre comme des esclaves. "},
	{8, "8 Celui qui creuse une fosse y tombera, et celui qui renverse une muraille sera mordu par un serpent. "},
	{9, "9 Celui qui remue des pierres en sera blessé, et celui qui fend du bois en éprouvera du danger. "},
	{10, "10 S'il a émoussé le fer, et s'il n'en a pas aiguisé le tranchant, il devra redoubler de force; mais la sagesse a l'avantage du succès. "},
	{11, "11 Si le serpent mord faute d'enchantement, il n'y a point d'avantage pour l'enchanteur. "},
	{12, "12 Les paroles de la bouche du sage sont pleines de grâce; mais les lèvres de l'insensé causent sa perte. "},
	{13, "13 Le commencement des paroles de sa bouche est folie, et la fin de son discours est une méchante folie. "},
	{14, "14 L'insensé multiplie les paroles. L'homme ne sait point ce qui arrivera, et qui lui dira ce qui sera après lui? "},
	{15, "15 Le travail de l'insensé le fatigue, parce qu'il ne sait pas aller à la ville. "},
	{16, "16 Malheur à toi, pays dont le roi est un enfant, et dont les princes mangent dès le matin! "},
	{17, "17 Heureux toi, pays dont le roi est de race illustre, et dont les princes mangent au temps convenable, pour soutenir leurs forces, et non pour se livrer à la boisson! "},
	{18, "18 Quand les mains sont paresseuses, la charpente s'affaisse; et quand les mains sont lâches, la maison a des gouttières. "},
	{19, "19 On fait des repas pour se divertir, le vin rend la vie joyeuse, et l'argent répond à tout. "},
	{20, "20 Ne maudis pas le roi, même dans ta pensée, et ne maudis pas le riche dans la chambre où tu couches; car l'oiseau du ciel emporterait ta voix, l'animal ailé publierait tes paroles. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view11() {
struct fr11 poems[] = {
	{1, "1 Jette ton pain sur la face des eaux, car avec le temps tu le retrouveras; "},
	{2, "2 donnes-en une part à sept et même à huit, car tu ne sais pas quel malheur peut arriver sur la terre. "},
	{3, "3 Quand les nuages sont pleins de pluie, ils la répandent sur la terre; et si un arbre tombe, au midi ou au nord, il reste à la place où il est tombé. "},
	{4, "4 Celui qui observe le vent ne sèmera point, et celui qui regarde les nuages ne moissonnera point. "},
	{5, "5 Comme tu ne sais pas quel est le chemin du vent, ni comment se forment les os dans le ventre de la femme enceinte, tu ne connais pas non plus l'oeuvre de Dieu qui fait tout. "},
	{6, "6 Dès le matin sème ta semence, et le soir ne laisse pas reposer ta main; car tu ne sais point ce qui réussira, ceci ou cela, ou si l'un et l'autre sont également bons. "},
	{7, "7 La lumière est douce, et il est agréable aux yeux de voir le soleil. "},
	{8, "8 Si donc un homme vit beaucoup d'années, qu'il se réjouisse pendant toutes ces années, et qu'il pense aux jours de ténèbres qui seront nombreux; tout ce qui arrivera est vanité. "},
	{9, "9 (12:1) Jeune homme, réjouis-toi dans ta jeunesse, livre ton coeur à la joie pendant les jours de ta jeunesse, marche dans les voies de ton coeur et selon les regards de tes yeux; mais sache que pour tout cela Dieu t'appellera en jugement. "},
	{10, "10 (12:2) Bannis de ton coeur le chagrin, et éloigne le mal de ton corps; car la jeunesse et l'aurore sont vanité. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view12() {
struct fr12 poems[] = {
	{1, "1 (12:3) Mais souviens-toi de ton créateur pendant les jours de ta jeunesse, avant que les jours mauvais arrivent et que les années s'approchent où tu diras: Je n'y prends point de plaisir; "},
	{2, "2 (12:4) avant que s'obscurcissent le soleil et la lumière, la lune et les étoiles, et que les nuages reviennent après la pluie, "},
	{3, "3 (12:5) temps où les gardiens de la maison tremblent, où les hommes forts se courbent, où celles qui moulent s'arrêtent parce qu'elles sont diminuées, où ceux qui regardent par les fenêtres sont obscurcis, "},
	{4, "4 (12:6) où les deux battants de la porte se ferment sur la rue quand s'abaisse le bruit de la meule, où l'on se lève au chant de l'oiseau, où s'affaiblissent toutes les filles du chant, "},
	{5, "5 (12:7) où l'on redoute ce qui est élevé, où l'on a des terreurs en chemin, où l'amandier fleurit, où la sauterelle devient pesante, et où la câpre n'a plus d'effet, car l'homme s'en va vers sa demeure éternelle, et les pleureurs parcourent les rues; "},
	{6, "6 (12:8) avant que le cordon d'argent se détache, que le vase d'or se brise, que le seau se rompe sur la source, et que la roue se casse sur la citerne; "},
	{7, "7 (12:9) avant que la poussière retourne à la terre, comme elle y était, et que l'esprit retourne à Dieu qui l'a donné. "},
	{8, "8 (12:10) Vanité des vanités, dit l'Ecclésiaste, tout est vanité. "},
	{9, "9 (12:11) Outre que l'Ecclésiaste fut un sage, il a encore enseigné la science au peuple, et il a examiné, sondé, mis en ordre un grand nombre de sentences. "},
	{10, "10 (12:12) L'Ecclésiaste s'est efforcé de trouver des paroles agréables; et ce qui a été écrit avec droiture, ce sont des paroles de vérité. "},
	{11, "11 (12:13) Les paroles des sages sont comme des aiguillons; et, rassemblées en un recueil, elles sont comme des clous plantés, données par un seul maître. "},
	{12, "12 (12:14) Du reste, mon fils, tire instruction de ces choses; on ne finirait pas, si l'on voulait faire un grand nombre de livres, et beaucoup d'étude est une fatigue pour le corps. "},
	{13, "13 (12:15) Écoutons la fin du discours: Crains Dieu et observe ses commandements. C'est là ce que doit faire tout homme. "},
	{14, "14 (12:16) Car Dieu amènera toute oeuvre en jugement, au sujet de tout ce qui est caché, soit bien, soit mal. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};