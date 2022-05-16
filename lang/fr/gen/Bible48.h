#include <map>
#include <string>
class Bible48
{
	struct fr1	{ int val; const char *msg; };
	struct fr2	{ int val; const char *msg; };
	struct fr3	{ int val; const char *msg; };
	struct fr4	{ int val; const char *msg; };
	struct fr5	{ int val; const char *msg; };
	struct fr6	{ int val; const char *msg; };
public:
static void view1() {
struct fr1 poems[] = {
	{1, "1 Paul, apôtre, non de la part des hommes, ni par un homme, mais par Jésus-Christ et Dieu le Père, qui l'a ressuscité des morts, "},
	{2, "2 et tous les frères qui sont avec moi, aux Églises de la Galatie: "},
	{3, "3 que la grâce et la paix vous soient données de la part de Dieu le Père et de notre Seigneur Jésus-Christ, "},
	{4, "4 qui s'est donné lui-même pour nos péchés, afin de nous arracher du présent siècle mauvais, selon la volonté de notre Dieu et Père, "},
	{5, "5 à qui soit la gloire aux siècles des siècles! Amen! "},
	{6, "6 Je m'étonne que vous vous détourniez si promptement de celui qui vous a appelés par la grâce de Christ, pour passer à un autre Évangile. "},
	{7, "7 Non pas qu'il y ait un autre Évangile, mais il y a des gens qui vous troublent, et qui veulent renverser l'Évangile de Christ. "},
	{8, "8 Mais, quand nous-mêmes, quand un ange du ciel annoncerait un autre Évangile que celui que nous vous avons prêché, qu'il soit anathème! "},
	{9, "9 Nous l'avons dit précédemment, et je le répète à cette heure: si quelqu'un vous annonce un autre Évangile que celui que vous avez reçu, qu'il soit anathème! "},
	{10, "10 Et maintenant, est-ce la faveur des hommes que je désire, ou celle de Dieu? Est-ce que je cherche à plaire aux hommes? Si je plaisais encore aux hommes, je ne serais pas serviteur de Christ. "},
	{11, "11 Je vous déclare, frères, que l'Évangile qui a été annoncé par moi n'est pas de l'homme; "},
	{12, "12 car je ne l'ai ni reçu ni appris d'un homme, mais par une révélation de Jésus-Christ. "},
	{13, "13 Vous avez su, en effet, quelle était autrefois ma conduite dans le judaïsme, comment je persécutais à outrance et ravageais l'Église de Dieu, "},
	{14, "14 et comment j'étais plus avancé dans le judaïsme que beaucoup de ceux de mon âge et de ma nation, étant animé d'un zèle excessif pour les traditions de mes pères. "},
	{15, "15 Mais, lorsqu'il plut à celui qui m'avait mis à part dès le sein de ma mère, et qui m'a appelé par sa grâce, "},
	{16, "16 de révéler en moi son Fils, afin que je l'annonçasse parmi les païens, aussitôt, je ne consultai ni la chair ni le sang, "},
	{17, "17 et je ne montai point à Jérusalem vers ceux qui furent apôtres avant moi, mais je partis pour l'Arabie. Puis je revins encore à Damas. "},
	{18, "18 Trois ans plus tard, je montai à Jérusalem pour faire la connaissance de Céphas, et je demeurai quinze jours chez lui. "},
	{19, "19 Mais je ne vis aucun autre des apôtres, si ce n'est Jacques, le frère du Seigneur. "},
	{20, "20 Dans ce que je vous écris, voici, devant Dieu, je ne mens point. "},
	{21, "21 J'allai ensuite dans les contrées de la Syrie et de la Cilicie. "},
	{22, "22 Or, j'étais inconnu de visage aux Églises de Judée qui sont en Christ; "},
	{23, "23 seulement, elles avaient entendu dire: Celui qui autrefois nous persécutait annonce maintenant la foi qu'il s'efforçait alors de détruire. "},
	{24, "24 Et elles glorifiaient Dieu à mon sujet. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct fr2 poems[] = {
	{1, "1 Quatorze ans après, je montai de nouveau à Jérusalem avec Barnabas, ayant aussi pris Tite avec moi; "},
	{2, "2 et ce fut d'après une révélation que j'y montai. Je leur exposai l'Évangile que je prêche parmi les païens, je l'exposai en particulier à ceux qui sont les plus considérés, afin de ne pas courir ou avoir couru en vain. "},
	{3, "3 Mais Tite, qui était avec moi, et qui était Grec, ne fut pas même contraint de se faire circoncire. "},
	{4, "4 Et cela, à cause des faux frères qui s'étaient furtivement introduits et glissés parmi nous, pour épier la liberté que nous avons en Jésus-Christ, avec l'intention de nous asservir. "},
	{5, "5 Nous ne leur cédâmes pas un instant et nous résistâmes à leurs exigences, afin que la vérité de l'Évangile fût maintenue parmi vous. "},
	{6, "6 Ceux qui sont les plus considérés-quels qu'ils aient été jadis, cela ne m'importe pas: Dieu ne fait point acception de personnes, -ceux qui sont les plus considérés ne m'imposèrent rien. "},
	{7, "7 Au contraire, voyant que l'Évangile m'avait été confié pour les incirconcis, comme à Pierre pour les circoncis, - "},
	{8, "8 car celui qui a fait de Pierre l'apôtre des circoncis a aussi fait de moi l'apôtre des païens, - "},
	{9, "9 et ayant reconnu la grâce qui m'avait été accordée, Jacques, Céphas et Jean, qui sont regardés comme des colonnes, me donnèrent, à moi et à Barnabas, la main d'association, afin que nous allassions, nous vers les païens, et eux vers les circoncis. "},
	{10, "10 Ils nous recommandèrent seulement de nous souvenir des pauvres, ce que j'ai bien eu soin de faire. "},
	{11, "11 Mais lorsque Céphas vint à Antioche, je lui résistai en face, parce qu'il était répréhensible. "},
	{12, "12 En effet, avant l'arrivée de quelques personnes envoyées par Jacques, il mangeait avec les païens; et, quand elles furent venues, il s'esquiva et se tint à l'écart, par crainte des circoncis. "},
	{13, "13 Avec lui les autres Juifs usèrent aussi de dissimulation, en sorte que Barnabas même fut entraîné par leur hypocrisie. "},
	{14, "14 Voyant qu'ils ne marchaient pas droit selon la vérité de l'Évangile, je dis à Céphas, en présence de tous: Si toi qui es Juif, tu vis à la manière des païens et non à la manière des Juifs, pourquoi forces-tu les païens à judaïser? "},
	{15, "15 Nous, nous sommes Juifs de naissance, et non pécheurs d'entre les païens. "},
	{16, "16 Néanmoins, sachant que ce n'est pas par les oeuvres de la loi que l'homme est justifié, mais par la foi en Jésus-Christ, nous aussi nous avons cru en Jésus-Christ, afin d'être justifiés par la foi en Christ et non par les oeuvres de la loi, parce que nulle chair ne sera justifiée par les oeuvres de la loi. "},
	{17, "17 Mais, tandis que nous cherchons à être justifiés par Christ, si nous étions aussi nous-mêmes trouvés pécheurs, Christ serait-il un ministre du péché? Loin de là! "},
	{18, "18 Car, si je rebâtis les choses que j'ai détruites, je me constitue moi-même un transgresseur, "},
	{19, "19 car c'est par la loi que je suis mort à la loi, afin de vivre pour Dieu. "},
	{20, "20 J'ai été crucifié avec Christ; et si je vis, ce n'est plus moi qui vis, c'est Christ qui vit en moi; si je vis maintenant dans la chair, je vis dans la foi au Fils de Dieu, qui m'a aimé et qui s'est livré lui-même pour moi. "},
	{21, "21 Je ne rejette pas la grâce de Dieu; car si la justice s'obtient par la loi, Christ est donc mort en vain. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct fr3 poems[] = {
	{1, "1 O Galates, dépourvus de sens! qui vous a fascinés, vous, aux yeux de qui Jésus-Christ a été peint comme crucifié? "},
	{2, "2 Voici seulement ce que je veux apprendre de vous: Est-ce par les oeuvres de la loi que vous avez reçu l'Esprit, ou par la prédication de la foi? "},
	{3, "3 Etes-vous tellement dépourvus de sens? Après avoir commencé par l'Esprit, voulez-vous maintenant finir par la chair? "},
	{4, "4 Avez-vous tant souffert en vain? si toutefois c'est en vain. "},
	{5, "5 Celui qui vous accorde l'Esprit, et qui opère des miracles parmi vous, le fait-il donc par les oeuvres de la loi, ou par la prédication de la foi? "},
	{6, "6 Comme Abraham crut à Dieu, et que cela lui fut imputé à justice, "},
	{7, "7 reconnaissez donc que ce sont ceux qui ont la foi qui sont fils d'Abraham. "},
	{8, "8 Aussi l'Écriture, prévoyant que Dieu justifierait les païens par la foi, a d'avance annoncé cette bonne nouvelle à Abraham: Toutes les nations seront bénies en toi! "},
	{9, "9 de sorte que ceux qui croient sont bénis avec Abraham le croyant. "},
	{10, "10 Car tous ceux qui s'attachent aux oeuvres de la loi sont sous la malédiction; car il est écrit: Maudit est quiconque n'observe pas tout ce qui est écrit dans le livre de la loi, et ne le met pas en pratique. "},
	{11, "11 Et que nul ne soit justifié devant Dieu par la loi, cela est évident, puisqu'il est dit: Le juste vivra par la foi. "},
	{12, "12 Or, la loi ne procède pas de la foi; mais elle dit: Celui qui mettra ces choses en pratique vivra par elles. "},
	{13, "13 Christ nous a rachetés de la malédiction de la loi, étant devenu malédiction pour nous-car il est écrit: Maudit est quiconque est pendu au bois, - "},
	{14, "14 afin que la bénédiction d'Abraham eût pour les païens son accomplissement en Jésus-Christ, et que nous reçussions par la foi l'Esprit qui avait été promis. "},
	{15, "15 Frères (je parle à la manière des hommes), une disposition en bonne forme, bien que faite par un homme, n'est annulée par personne, et personne n'y ajoute. "},
	{16, "16 Or les promesses ont été faites à Abraham et à sa postérité. Il n'est pas dit: et aux postérités, comme s'il s'agissait de plusieurs, mais en tant qu'il s'agit d'une seule: et à ta postérité, c'est-à-dire, à Christ. "},
	{17, "17 Voici ce que j'entends: une disposition, que Dieu a confirmée antérieurement, ne peut pas être annulée, et ainsi la promesse rendue vaine, par la loi survenue quatre cent trente ans plus tard. "},
	{18, "18 Car si l'héritage venait de la loi, il ne viendrait plus de la promesse; or, c'est par la promesse que Dieu a fait à Abraham ce don de sa grâce. "},
	{19, "19 Pourquoi donc la loi? Elle a été donnée ensuite à cause des transgressions, jusqu'à ce que vînt la postérité à qui la promesse avait été faite; elle a été promulguée par des anges, au moyen d'un médiateur. "},
	{20, "20 Or, le médiateur n'est pas médiateur d'un seul, tandis que Dieu est un seul. "},
	{21, "21 La loi est-elle donc contre les promesses de Dieu? Loin de là! S'il eût été donné une loi qui pût procurer la vie, la justice viendrait réellement de la loi. "},
	{22, "22 Mais l'Écriture a tout renfermé sous le péché, afin que ce qui avait été promis fût donné par la foi en Jésus-Christ à ceux qui croient. "},
	{23, "23 Avant que la foi vînt, nous étions enfermés sous la garde de la loi, en vue de la foi qui devait être révélée. "},
	{24, "24 Ainsi la loi a été comme un pédagogue pour nous conduire à Christ, afin que nous fussions justifiés par la foi. "},
	{25, "25 La foi étant venue, nous ne sommes plus sous ce pédagogue. "},
	{26, "26 Car vous êtes tous fils de Dieu par la foi en Jésus-Christ; "},
	{27, "27 vous tous, qui avez été baptisés en Christ, vous avez revêtu Christ. "},
	{28, "28 Il n'y a plus ni Juif ni Grec, il n'y a plus ni esclave ni libre, il n'y a plus ni homme ni femme; car tous vous êtes un en Jésus-Christ. "},
	{29, "29 Et si vous êtes à Christ, vous êtes donc la postérité d'Abraham, héritiers selon la promesse. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct fr4 poems[] = {
	{1, "1 Or, aussi longtemps que l'héritier est enfant, je dis qu'il ne diffère en rien d'un esclave, quoiqu'il soit le maître de tout; "},
	{2, "2 mais il est sous des tuteurs et des administrateurs jusqu'au temps marqué par le père. "},
	{3, "3 Nous aussi, de la même manière, lorsque nous étions enfants, nous étions sous l'esclavage des rudiments du monde; "},
	{4, "4 mais, lorsque les temps ont été accomplis, Dieu a envoyé son Fils, né d'une femme, né sous la loi, "},
	{5, "5 afin qu'il rachetât ceux qui étaient sous la loi, afin que nous reçussions l'adoption. "},
	{6, "6 Et parce que vous êtes fils, Dieu a envoyé dans nos coeurs l'Esprit de son Fils, lequel crie: Abba! Père! "},
	{7, "7 Ainsi tu n'es plus esclave, mais fils; et si tu es fils, tu es aussi héritier par la grâce de Dieu. "},
	{8, "8 Autrefois, ne connaissant pas Dieu, vous serviez des dieux qui ne le sont pas de leur nature; "},
	{9, "9 mais à présent que vous avez connu Dieu, ou plutôt que vous avez été connus de Dieu, comment retournez-vous à ces faibles et pauvres rudiments, auxquels de nouveau vous voulez vous asservir encore? "},
	{10, "10 Vous observez les jours, les mois, les temps et les années! "},
	{11, "11 Je crains d'avoir inutilement travaillé pour vous. "},
	{12, "12 Soyez comme moi, car moi aussi je suis comme vous. Frères, je vous en supplie. (4:13) Vous ne m'avez fait aucun tort. "},
	{13, "13 Vous savez que ce fut à cause d'une infirmité de la chair que je vous ai pour la première fois annoncé l'Évangile. "},
	{14, "14 Et mis à l'épreuve par ma chair, vous n'avez témoigné ni mépris ni dégoût; vous m'avez, au contraire, reçu comme un ange de Dieu, comme Jésus-Christ. "},
	{15, "15 Où donc est l'expression de votre bonheur? Car je vous atteste que, si cela eût été possible, vous vous seriez arraché les yeux pour me les donner. "},
	{16, "16 Suis-je devenu votre ennemi en vous disant la vérité? "},
	{17, "17 Le zèle qu'ils ont pour vous n'est pas pur, mais ils veulent vous détacher de nous, afin que vous soyez zélés pour eux. "},
	{18, "18 Il est beau d'avoir du zèle pour ce qui est bien et en tout temps, et non pas seulement quand je suis présent parmi vous. "},
	{19, "19 Mes enfants, pour qui j'éprouve de nouveau les douleurs de l'enfantement, jusqu'à ce que Christ soit formé en vous, "},
	{20, "20 je voudrais être maintenant auprès de vous, et changer de langage, car je suis dans l'inquiétude à votre sujet. "},
	{21, "21 Dites-moi, vous qui voulez être sous la loi, n'entendez-vous point la loi? "},
	{22, "22 Car il est écrit qu'Abraham eut deux fils, un de la femme esclave, et un de la femme libre. "},
	{23, "23 Mais celui de l'esclave naquit selon la chair, et celui de la femme libre naquit en vertu de la promesse. "},
	{24, "24 Ces choses sont allégoriques; car ces femmes sont deux alliances. L'une du mont Sinaï, enfantant pour la servitude, c'est Agar, - "},
	{25, "25 car Agar, c'est le mont Sinaï en Arabie, -et elle correspond à la Jérusalem actuelle, qui est dans la servitude avec ses enfants. "},
	{26, "26 Mais la Jérusalem d'en haut est libre, c'est notre mère; "},
	{27, "27 car il est écrit: Réjouis-toi, stérile, toi qui n'enfantes point! Éclate et pousse des cris, toi qui n'as pas éprouvé les douleurs de l'enfantement! Car les enfants de la délaissée seront plus nombreux Que les enfants de celle qui était mariée. "},
	{28, "28 Pour vous, frères, comme Isaac, vous êtes enfants de la promesse; "},
	{29, "29 et de même qu'alors celui qui était né selon la chair persécutait celui qui était né selon l'Esprit, ainsi en est-il encore maintenant. "},
	{30, "30 Mais que dit l'Écriture? Chasse l'esclave et son fils, car le fils de l'esclave n'héritera pas avec le fils de la femme libre. "},
	{31, "31 C'est pourquoi, frères, nous ne sommes pas enfants de l'esclave, mais de la femme libre. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct fr5 poems[] = {
	{1, "1 C'est pour la liberté que Christ nous a affranchis. Demeurez donc fermes, et ne vous laissez pas mettre de nouveau sous le joug de la servitude. "},
	{2, "2 Voici, moi Paul, je vous dis que, si vous vous faites circoncire, Christ ne vous servira de rien. "},
	{3, "3 Et je proteste encore une fois à tout homme qui se fait circoncire, qu'il est tenu de pratiquer la loi tout entière. "},
	{4, "4 Vous êtes séparés de Christ, vous tous qui cherchez la justification dans la loi; vous êtes déchus de la grâce. "},
	{5, "5 Pour nous, c'est de la foi que nous attendons, par l'Esprit, l'espérance de la justice. "},
	{6, "6 Car, en Jésus-Christ, ni la circoncision ni l'incirconcision n'a de valeur, mais la foi qui est agissante par la charité. "},
	{7, "7 Vous couriez bien: qui vous a arrêtés, pour vous empêcher d'obéir à la vérité? "},
	{8, "8 Cette influence ne vient pas de celui qui vous appelle. "},
	{9, "9 Un peu de levain fait lever toute la pâte. "},
	{10, "10 J'ai cette confiance en vous, dans le Seigneur, que vous ne penserez pas autrement. Mais celui qui vous trouble, quel qu'il soit, en portera la peine. "},
	{11, "11 Pour moi, frères, si je prêche encore la circoncision, pourquoi suis-je encore persécuté? Le scandale de la croix a donc disparu! "},
	{12, "12 Puissent-ils être retranchés, ceux qui mettent le trouble parmi vous! "},
	{13, "13 Frères, vous avez été appelés à la liberté, seulement ne faites pas de cette liberté un prétexte de vivre selon la chair; mais rendez-vous, par la charité, serviteurs les uns des autres. "},
	{14, "14 Car toute la loi est accomplie dans une seule parole, dans celle-ci: Tu aimeras ton prochain comme toi-même. "},
	{15, "15 Mais si vous vous mordez et vous dévorez les uns les autres, prenez garde que vous ne soyez détruits les uns par les autres. "},
	{16, "16 Je dis donc: Marchez selon l'Esprit, et vous n'accomplirez pas les désirs de la chair. "},
	{17, "17 Car la chair a des désirs contraires à ceux de l'Esprit, et l'Esprit en a de contraires à ceux de la chair; ils sont opposés entre eux, afin que vous ne fassiez point ce que vous voudriez. "},
	{18, "18 Si vous êtes conduits par l'Esprit, vous n'êtes point sous la loi. "},
	{19, "19 Or, les oeuvres de la chair sont manifestes, ce sont l'impudicité, l'impureté, la dissolution, "},
	{20, "20 l'idolâtrie, la magie, les inimitiés, les querelles, les jalousies, les animosités, les disputes, les divisions, les sectes, "},
	{21, "21 l'envie, l'ivrognerie, les excès de table, et les choses semblables. Je vous dis d'avance, comme je l'ai déjà dit, que ceux qui commettent de telles choses n'hériteront point le royaume de Dieu. "},
	{22, "22 Mais le fruit de l'Esprit, c'est l'amour, la joie, la paix, la patience, la bonté, la bénignité, la fidélité, "},
	{23, "23 (5:22) la douceur, la tempérance; (5:23) la loi n'est pas contre ces choses. "},
	{24, "24 Ceux qui sont à Jésus-Christ ont crucifié la chair avec ses passions et ses désirs. "},
	{25, "25 Si nous vivons par l'Esprit, marchons aussi selon l'Esprit. "},
	{26, "26 Ne cherchons pas une vaine gloire, en nous provoquant les uns les autres, en nous portant envie les uns aux autres. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct fr6 poems[] = {
	{1, "1 Frères, si un homme vient à être surpris en quelque faute, vous qui êtes spirituels, redressez-le avec un esprit de douceur. Prends garde à toi-même, de peur que tu ne sois aussi tenté. "},
	{2, "2 Portez les fardeaux les uns des autres, et vous accomplirez ainsi la loi de Christ. "},
	{3, "3 Si quelqu'un pense être quelque chose, quoiqu'il ne soit rien, il s'abuse lui-même. "},
	{4, "4 Que chacun examine ses propres oeuvres, et alors il aura sujet de se glorifier pour lui seul, et non par rapport à autrui; "},
	{5, "5 car chacun portera son propre fardeau. "},
	{6, "6 Que celui à qui l'on enseigne la parole fasse part de tous ses biens à celui qui l'enseigne. "},
	{7, "7 Ne vous y trompez pas: on ne se moque pas de Dieu. Ce qu'un homme aura semé, il le moissonnera aussi. "},
	{8, "8 Celui qui sème pour sa chair moissonnera de la chair la corruption; mais celui qui sème pour l'Esprit moissonnera de l'Esprit la vie éternelle. "},
	{9, "9 Ne nous lassons pas de faire le bien; car nous moissonnerons au temps convenable, si nous ne nous relâchons pas. "},
	{10, "10 Ainsi donc, pendant que nous en avons l'occasion, pratiquons le bien envers tous, et surtout envers les frères en la foi. "},
	{11, "11 Voyez avec quelles grandes lettres je vous ai écrit de ma propre main. "},
	{12, "12 Tous ceux qui veulent se rendre agréables selon la chair vous contraignent à vous faire circoncire, uniquement afin de n'être pas persécutés pour la croix de Christ. "},
	{13, "13 Car les circoncis eux-mêmes n'observent point la loi; mais ils veulent que vous soyez circoncis, pour se glorifier dans votre chair. "},
	{14, "14 Pour ce qui me concerne, loin de moi la pensée de me glorifier d'autre chose que de la croix de notre Seigneur Jésus-Christ, par qui le monde est crucifié pour moi, comme je le suis pour le monde! "},
	{15, "15 Car ce n'est rien que d'être circoncis ou incirconcis; ce qui est quelque chose, c'est d'être une nouvelle créature. "},
	{16, "16 Paix et miséricorde sur tous ceux qui suivront cette règle, et sur l'Israël de Dieu! "},
	{17, "17 Que personne désormais ne me fasse de la peine, car je porte sur mon corps les marques de Jésus. "},
	{18, "18 Frères, que la grâce de notre Seigneur Jésus-Christ soit avec votre esprit! Amen! "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};