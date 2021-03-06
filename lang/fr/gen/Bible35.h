#include <map>
#include <string>
class Bible35
{
	struct fr1	{ int val; const char *msg; };
	struct fr2	{ int val; const char *msg; };
	struct fr3	{ int val; const char *msg; };
public:
static void view1() {
struct fr1 poems[] = {
	{1, "1 Oracle révélé à Habakuk, le prophète. "},
	{2, "2 Jusqu'à quand, ô Éternel?... J'ai crié, Et tu n'écoutes pas! J'ai crié vers toi à la violence, Et tu ne secours pas! "},
	{3, "3 Pourquoi me fais-tu voir l'iniquité, Et contemples-tu l'injustice? Pourquoi l'oppression et la violence sont-elles devant moi? Il y a des querelles, et la discorde s'élève. "},
	{4, "4 Aussi la loi n'a point de vie, La justice n'a point de force; Car le méchant triomphe du juste, Et l'on rend des jugements iniques. "},
	{5, "5 Jetez les yeux parmi les nations, regardez, Et soyez saisis d'étonnement, d'épouvante! Car je vais faire en vos jours une oeuvre, Que vous ne croiriez pas si on la racontait. "},
	{6, "6 Voici, je vais susciter les Chaldéens, Peuple furibond et impétueux, Qui traverse de vastes étendues de pays, Pour s'emparer de demeures qui ne sont pas à lui. "},
	{7, "7 Il est terrible et formidable; De lui seul viennent son droit et sa grandeur. "},
	{8, "8 Ses chevaux sont plus rapides que les léopards, Plus agiles que les loups du soir, Et ses cavaliers s'avancent avec orgueil; Ses cavaliers arrivent de loin, Ils volent comme l'aigle qui fond sur sa proie. "},
	{9, "9 Tout ce peuple vient pour se livrer au pillage; Ses regards avides se portent en avant, Et il assemble des prisonniers comme du sable. "},
	{10, "10 Il se moque des rois, Et les princes font l'objet de ses railleries; Il se rit de toutes les forteresses, Il amoncelle de la terre, et il les prend. "},
	{11, "11 Alors son ardeur redouble, Il poursuit sa marche, et il se rend coupable. Sa force à lui, voilà son dieu! "},
	{12, "12 N'es-tu pas de toute éternité, Éternel, mon Dieu, mon Saint? Nous ne mourrons pas! O Éternel, tu as établi ce peuple pour exercer tes jugements; O mon rocher, tu l'as suscité pour infliger tes châtiments. "},
	{13, "13 Tes yeux sont trop purs pour voir le mal, Et tu ne peux pas regarder l'iniquité. Pourquoi regarderais-tu les perfides, et te tairais-tu, Quand le méchant dévore celui qui est plus juste que lui? "},
	{14, "14 Traiterais-tu l'homme comme les poissons de la mer, Comme le reptile qui n'a point de maître? "},
	{15, "15 Il les fait tous monter avec l'hameçon, Il les attire dans son filet, Il les assemble dans ses rets: Aussi est-il dans la joie et dans l'allégresse. "},
	{16, "16 C'est pourquoi il sacrifie à son filet, Il offre de l'encens à ses rets; Car par eux sa portion est grasse, Et sa nourriture succulente. "},
	{17, "17 Videra-t-il pour cela son filet, Et toujours égorgera-t-il sans pitié les nations? "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct fr2 poems[] = {
	{1, "1 J'étais à mon poste, Et je me tenais sur la tour; Je veillais, pour voir ce que l'Éternel me dirait, Et ce que je répliquerais après ma plainte. "},
	{2, "2 L'Éternel m'adressa la parole, et il dit: Écris la prophétie: Grave-la sur des tables, Afin qu'on la lise couramment. "},
	{3, "3 Car c'est une prophétie dont le temps est déjà fixé, Elle marche vers son terme, et elle ne mentira pas; Si elle tarde, attends-la, Car elle s'accomplira, elle s'accomplira certainement. "},
	{4, "4 Voici, son âme s'est enflée, elle n'est pas droite en lui; Mais le juste vivra par sa foi. "},
	{5, "5 Pareil à celui qui est ivre et arrogant, L'orgueilleux ne demeure pas tranquille; Il élargit sa bouche comme le séjour des morts, Il est insatiable comme la mort; Il attire à lui toutes les nations, Il assemble auprès de lui tous les peuples. "},
	{6, "6 Ne sera-t-il pas pour tous un sujet de sarcasme, De railleries et d'énigmes? On dira: Malheur à celui qui accumule ce qui n'est pas à lui! Jusques à quand?... Malheur à celui qui augmente le fardeau de ses dettes! "},
	{7, "7 Tes créanciers ne se lèveront-ils pas soudain? Tes oppresseurs ne se réveilleront-ils pas? Et tu deviendras leur proie. "},
	{8, "8 Parce que tu as pillé beaucoup de nations, Tout le reste des peuples te pillera; Car tu as répandu le sang des hommes, Tu as commis des violences dans le pays, Contre la ville et tous ses habitants. "},
	{9, "9 Malheur à celui qui amasse pour sa maison des gains iniques, Afin de placer son nid dans un lieu élevé, Pour se garantir de la main du malheur! "},
	{10, "10 C'est l'opprobre de ta maison que tu as résolu, En détruisant des peuples nombreux, Et c'est contre toi-même que tu as péché. "},
	{11, "11 Car la pierre crie du milieu de la muraille, Et le bois qui lie la charpente lui répond. "},
	{12, "12 Malheur à celui qui bâtit une ville avec le sang, Qui fonde une ville avec l'iniquité! "},
	{13, "13 Voici, quand l'Éternel des armées l'a résolu, Les peuples travaillent pour le feu, Les nations se fatiguent en vain. "},
	{14, "14 Car la terre sera remplie de la connaissance de la gloire de l'Éternel, Comme le fond de la mer par les eaux qui le couvrent. "},
	{15, "15 Malheur à celui qui fait boire son prochain, A toi qui verses ton outre et qui l'enivres, Afin de voir sa nudité! "},
	{16, "16 Tu seras rassasié de honte plus que de gloire; Bois aussi toi-même, et découvre-toi! La coupe de la droite de l'Éternel se tournera vers toi, Et l'ignominie souillera ta gloire. "},
	{17, "17 Car les violences contre le Liban retomberont sur toi, Et les ravages des bêtes t'effraieront, Parce que tu as répandu le sang des hommes, Et commis des violences dans le pays, Contre la ville et tous ses habitants. "},
	{18, "18 A quoi sert une image taillée, pour qu'un ouvrier la taille? A quoi sert une image en fonte et qui enseigne le mensonge, Pour que l'ouvrier qui l'a faite place en elle sa confiance, Tandis qu'il fabrique des idoles muettes? "},
	{19, "19 Malheur à celui qui dit au bois: Lève-toi! A une pierre muette: Réveille-toi! Donnera-t-elle instruction? Voici, elle est garnie d'or et d'argent, Mais il n'y a point en elle un esprit qui l'anime. "},
	{20, "20 L'Éternel est dans son saint temple. Que toute la terre fasse silence devant lui! "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct fr3 poems[] = {
	{1, "1 Prière d'Habakuk, le prophète. (Sur le mode des complaintes.) "},
	{2, "2 Éternel, j'ai entendu ce que tu as annoncé, je suis saisi de crainte. Accomplis ton oeuvre dans le cours des années, ô Éternel! Dans le cours des années manifeste-la! Mais dans ta colère souviens-toi de tes compassions! "},
	{3, "3 Dieu vient de Théman, Le Saint vient de la montagne de Paran... Pause. Sa majesté couvre les cieux, Et sa gloire remplit la terre. "},
	{4, "4 C'est comme l'éclat de la lumière; Des rayons partent de sa main; Là réside sa force. "},
	{5, "5 Devant lui marche la peste, Et la peste est sur ses traces. "},
	{6, "6 Il s'arrête, et de l'oeil il mesure la terre; Il regarde, et il fait trembler les nations; Les montagnes éternelles se brisent, Les collines antiques s'abaissent; Les sentiers d'autrefois s'ouvrent devant lui. "},
	{7, "7 Je vois dans la détresse les tentes de l'Éthiopie, Et les tentes du pays de Madian sont dans l'épouvante. "},
	{8, "8 L'Éternel est-il irrité contre les fleuves? Est-ce contre les fleuves que s'enflamme ta colère, Contre la mer que se répand ta fureur, Pour que tu sois monté sur tes chevaux, Sur ton char de victoire? "},
	{9, "9 Ton arc est mis à nu; Les malédictions sont les traits de ta parole... Pause. Tu fends la terre pour donner cours aux fleuves. "},
	{10, "10 A ton aspect, les montagnes tremblent; Des torrents d'eau se précipitent; L'abîme fait entendre sa voix, Il lève ses mains en haut. "},
	{11, "11 Le soleil et la lune s'arrêtent dans leur demeure, A la lumière de tes flèches qui partent, A la clarté de ta lance qui brille. "},
	{12, "12 Tu parcours la terre dans ta fureur, Tu écrases les nations dans ta colère. "},
	{13, "13 Tu sors pour délivrer ton peuple, Pour délivrer ton oint; Tu brises le faîte de la maison du méchant, Tu la détruis de fond en comble. Pause. "},
	{14, "14 Tu perces de tes traits la tête de ses chefs, Qui se précipitent comme la tempête pour me disperser, Poussant des cris de joie, Comme s'ils dévoraient déjà le malheureux dans leur repaire. "},
	{15, "15 Avec tes chevaux tu foules la mer, La boue des grandes eaux. "},
	{16, "16 J'ai entendu... Et mes entrailles sont émues. A cette voix, mes lèvres frémissent, Mes os se consument, Et mes genoux chancellent: En silence je dois attendre le jour de la détresse, Le jour où l'oppresseur marchera contre le peuple. "},
	{17, "17 Car le figuier ne fleurira pas, La vigne ne produira rien, Le fruit de l'olivier manquera, Les champs ne donneront pas de nourriture; Les brebis disparaîtront du pâturage, Et il n'y aura plus de boeufs dans les étables. "},
	{18, "18 Toutefois, je veux me réjouir en l'Éternel, Je veux me réjouir dans le Dieu de mon salut. "},
	{19, "19 L'Éternel, le Seigneur, est ma force; Il rend mes pieds semblables à ceux des biches, Et il me fait marcher sur mes lieux élevés. Au chef des chantres. Avec instruments à cordes. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};