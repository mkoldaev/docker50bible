#include <map>
#include <string>
class Bible32
{
	struct hr1	{ int val; const char *msg; };
	struct hr2	{ int val; const char *msg; };
	struct hr3	{ int val; const char *msg; };
	struct hr4	{ int val; const char *msg; };
public:
static void view1() {
struct hr1 poems[] = {
	{1, "1 Riječ Jahvina dođe Joni, sinu Amitajevu: "},
	{2, "2 Ustani, reče  mu, idi u Ninivu, grad veliki, i propovijedaj u njemu, jer se  zloća njihova popela do mene."},
	{3, "3 A Jona ustade da pobjegne u Taršiš, daleko od Jahve. Siđe  u Jafu i nađe lađu što je plovila u Taršiš. Plati vozarinu i  ukrca se da otplovi s njima u Taršiš, daleko od Jahve. "},
	{4, "4 Ali  Jahve podiže na moru silan vjetar i nastade nevrijeme veliko  na moru te mišljahu da će se lađa razbiti. "},
	{5, "5 Uplašiše se mornari;  svaki zazva svoga boga, i da bi je olakšali, stadoše iz lađe  bacati tovar što bijaše u njoj. Jona pak bijaše sišao na dno  lađe, legao i zaspao tvrdim snom. "},
	{6, "6 Zapovjednik lađe pristupi  mu i reče: Što spavaš kao zaklan? Ustaj i prizivlji Boga svojega!  Možda će nas se sjetiti Bog taj da ne poginemo. "},
	{7, "7 Potom rekoše  jedni drugima: Hajde da bacimo ždrijeb da vidimo od koga nam  dođe ovo zlo. Baciše ždrijeb i pade ždrijeb na Jonu. "},
	{8, "8 Oni mu onda rekoše:  Kaži nam: zbog koga nas ovo zlo snađe, kojim se poslom baviš, odakle dolaziš, iz koje si zemlje i od kojega naroda? "},
	{9, "9 On  im odgovori: Ja sam Hebrej, i štujem Jahvu, Boga nebeskoga,  koji stvori more i zemlju."},
	{10, "10 Ljudi se uplašiše veoma i rekoše mu: Što si to učinio!  Jer bijahu doznali da on bježi od Jahve - sam im je to pripovjedio. "},
	{11, "11 Oni ga zapitaše: Što da učinimo s tobom da nam se more smiri?  Jer se more sve bješnje dizalo."},
	{12, "12 On im odgovori: Uzmite me i bacite u more, pa će vam  se more smiriti, jer znam da se zbog mene diglo na vas ovo veliko  nevrijeme. "},
	{13, "13 Ljudi uzeše veslati ne bi li se primakli kopnu, jer se  more sve bješnje dizalo protiv njih. "},
	{14, "14 Tad zazvaše Jahvu i  rekoše: Ah, Jahve, ne daj da poginemo zbog života ovoga čovjeka  i ne svali na nas krv nevinu, jer ti si Jahve: činiš kako ti  je milo. "},
	{15, "15 I uzevši Jonu, baciše ga u more - i more presta  bjesnjeti. "},
	{16, "16 Tada velik strah Jahvin obuze ljude te prinesoše žrtvu  Jahvi i učiniše zavjete."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct hr2 poems[] = {
	{1, "1 Jahve zapovjedi velikoj ribi da proguta Jonu. Tri dana i tri  noći ostade Jona u ribljoj utrobi. "},
	{2, "2 Iz utrobe riblje stade  Jona moliti Jahvu, Boga svojega. "},
	{3, "3 On reče: Iz nevolje svoje zavapih Jahvi, i on me usliša; iz utrobe Podzemlja zazvah, i ti si mi čuo glas."},
	{4, "4 Ti me baci moru u dubine, i voda me opteče. Sve poplave tvoje i valovi oboriše se na me."},
	{5, "5 Pomislih: odbačen sam ispred očiju tvojih. Al' ipak oči upirem svetom Hramu tvojem."},
	{6, "6 Vode me do grla okružiše, bezdan me opkoli. Trave mi glavu omotaše,"},
	{7, "7 siđoh do korijena planina. Nada mnom se zatvoriše zauvijek zasuni zemljini. Al' ti iz jame izvadi život moj, o Jahve, Bože moj."},
	{8, "8 Samo što ne izdahnuh kad se spomenuh Jahve, i molitva se moja k tebi vinula, prema svetom Hramu tvojemu."},
	{9, "9 Oni koji štuju isprazna ništavila milost svoju ostavljaju."},
	{10, "10 A ja ću ti s pjesmom zahvalnicom žrtvu prinijeti. Što se zavjetovah, ispunit ću. Spasenje je od Gospoda."},
	{11, "11 Tada Jahve zapovjedi ribi i ona izbljuva Jonu na obalu."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct hr3 poems[] = {
	{1, "1 Riječ Jahvina dođe Joni drugi put: "},
	{2, "2 Ustani, reče mu, idi  u Ninivu, grad veliki, propovijedaj u njemu što ću ti reći. "},
	{3, "3 Jona ustade i ode u Ninivu, kako mu Jahve zapovjedi. Niniva  bijaše grad velik do Boga - tri dana hoda. "},
	{4, "4 Jona prođe gradom  dan hoda, propovijedajući: Još četrdeset dana i Niniva će biti  razorena. "},
	{5, "5 Ninivljani povjerovaše Bogu; oglasiše post i obukoše  se u kostrijet, svi od najvećega do najmanjega."},
	{6, "6 Glas doprije do kralja ninivskoga: on ustade s prijestolja, skide plašt sa sebe, odjenu se u kostrijet i sjede u pepeo. "},
	{7, "7 Tada se po odredbi kralja i njegovih velikaša oglasi i objavi  u Ninivi: Ljudi i stoka, goveda i ovce da ne okuse ništa, ni  da pasu, ni da vodu piju. "},
	{8, "8 Nego i ljudi i stoka da se pokriju  kostrijeću, da glasno Boga zazivlju i da se obrati svatko sa  svojega zlog puta i nepravde koju je činio. "},
	{9, "9 Tko zna, možda  će se povratiti Bog, smilovati se i odustati od ljutoga svog  gnjeva da ne izginemo?"},
	{10, "10 Bog vidje što su činili: da se obratiše od svojega zlog  puta. I sažali se Bog zbog nesreće kojom im bijaše zaprijetio  i ne učini."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct hr4 poems[] = {
	{1, "1 Joni bi veoma krivo i rasrdi se. "},
	{2, "2 I ovako se pomoli Jahvi:  Ah, Jahve, nisam li ja to slutio dok još u svojoj zemlji bijah?  Zato sam htio prije pobjeći u Taršiš; jer znao sam da si ti Bog  milostiv i milosrdan, spor na gnjev i bogat milosrđem i da se  nad nesrećom brzo sažališ. "},
	{3, "3 Sada, Jahve, uzmi moj život, jer  mi je bolje umrijeti nego živjeti. "},
	{4, "4 Jahve odgovori: Srdiš  li se ti s pravom?"},
	{5, "5 Jona iziđe iz grada i sjede s istoka gradu; načini ondje  kolibu i sjede pod njom u hlad da vidi što će biti od grada. "},
	{6, "6 A Jahve Bog učini da izraste bršljan nad Jonom i pruži sjenu  njegovoj glavi te da ga izliječi od zlovolje. Jona se bršljanu  veoma obradova. "},
	{7, "7 Ali sutradan, u osvit zore, Bog zapovjedi  crvu da podgrize bršljan, i on usahnu. "},
	{8, "8 Kad je ogranulo sunce, posla Bog vruć istočni vjetar; sunce je palilo glavu Joninu  te je sasvim klonuo. Poželje umrijeti i reče: Bolje mi je umrijeti  nego živjeti."},
	{9, "9 Bog upita Jonu: Srdiš li se s pravom zbog bršljana?  On odgovori: Da, s pravom sam ljut nasmrt. "},
	{10, "10 Jahve mu reče:  Tebi je žao bršljana oko kojega se nisi trudio, nego je u jednu  noć nikao i u jednu noć usahnuo. "},
	{11, "11 A meni da ne bude žao Ninive, grada velikoga, u kojem ima više od sto i dvadeset tisuća ljudi  koji ne znaju razlikovati desno i lijevo, a uz to i mnogo životinja!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};