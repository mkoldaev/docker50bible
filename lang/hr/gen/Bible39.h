#include <map>
#include <string>
class Bible39
{
	struct hr1	{ int val; const char *msg; };
	struct hr2	{ int val; const char *msg; };
	struct hr3	{ int val; const char *msg; };
public:
static void view1() {
struct hr1 poems[] = {
	{1, "1 Proroštvo. Riječ Gospodnja Izraelu po Malahiji."},
	{2, "2 Ljubio sam vas - govori Jahve, a vi pitate: Po čemu si nas ljubio? Ne bijaše li Ezav brat Jakovljev? - riječ je Jahvina -"},
	{3, "3 ali Jakova sam zavolio, a Ezav mi omrznu: gradove mu u pustoš pretvorih, a baštinu njegovu dadoh pustinjskim šakalima."},
	{4, "4 Jer, rekne li Edom: Bili smo smrvljeni, ali ćemo opet podići ruševine! ovako kaže Jahve nad Vojskama: Neka grade oni, a ja ću razgraditi! Zvat će ih zemljom bezbožničkom i narodom na koji se Jahve srdi dovijeka! "},
	{5, "5 Vaše će oči vidjeti, i reći ćete: Velik je Jahve preko granica zemlje izraelske."},
	{6, "6 Sin časti oca, a sluga gospodara. Ali, ako sam ja otac, gdje je čast moja? Ako sam gospodar, gdje je strah od mene? To govori Jahve nad Vojskama vama, svećenici, koji moje ime prezirete, a pitate: Čime smo prezreli ime tvoje?"},
	{7, "7 Oskvrnjen kruh na mome prinosite žrtveniku  i još pitate: Čime te oskvrnismo? Time što kažete Stol je Jahvin stvar nevažna!"},
	{8, "8 A kada za žrtvu slijepu stoku prinosite,  zar to nije zlo? I kad prinosite hromo i bolesno, zar to nije zlo? Donesi takvo što svome namjesniku, hoće li biti zadovoljan i dobro te primiti? - govori Jahve nad Vojskama."},
	{9, "9 Sada umilostivite lice Božje da nam se smiluje. To donose ruke vaše, hoće li vas dobro primiti? - govori Jahve nad Vojskama."},
	{10, "10 O kada bi tko od vas zatvorio vrata da mi zaludu ne palite ognja na žrtveniku!  Niste mi mili - govori Jahve nad Vojskama - i ne primam žrtve iz ruke vaše."},
	{11, "11 Jer od istoka do zapada veliko je ime moje među narodima, i na svakom mjestu prinosi se kad i žrtva čista Imenu mojemu, jer veliko je Ime moje među narodima - govori Jahve nad Vojskama."},
	{12, "12 Ali vi ga skvrnite kada govorite: Stol je Gospodnji okaljan  i hrana na njemu ni za što nije!"},
	{13, "13 Kažete još: Gle, šteta truda! i prezirete ga - govori Jahve nad Vojskama. Kada dovodite stoku otetu, hromu i bolesnu, te je prinosite kao dar žrtveni, zar da to iz vaše ruke milostivo primim? - govori Jahve nad Vojskama."},
	{14, "14 Proklet bio varalica koji u stadu ima ovna što mi ga je zavjetovao, a žrtvuje mi ovcu jalovicu. Jer ja sam velik kralj - govori Jahve nad Vojskama - i strašno je Ime moje među narodima."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct hr2 poems[] = {
	{1, "1 A sad vas opominjem, svećenici! "},
	{2, "2 Ako ne budete poslušali, ako ne budete k srcu uzeli da proslavite Ime moje - govori Jahve nad Vojskama - kletvu ću na vas svaliti i proklet ću vaš blagoslov. I već ga prokleh jer to niste k srcu uzeli."},
	{3, "3 I slomit ću vam ruku, bacit ću vam u lice izmetine, izmetine vaših svetkovina, i s njima ću vas splaviti."},
	{4, "4 Po tom ćete znati: to je bila moja opomena da ostane Savez moj s Levijem - govori Jahve nad Vojskama."},
	{5, "5 A moj Savez s njim, to bijaše život i mir - ja sam mu ih dao: bijaše to strah - i on me se bojao, Imena se moga plašio."},
	{6, "6 Zakon istine bijaše u njegovim ustima  i pakost mu ne kaljaše usana; u miru i pravičnosti hodio je sa mnom i mnoge je od grijeha odvratio."},
	{7, "7 Da, usne svećenikove treba da čuvaju znanje, a iz njegovih usta treba tražiti Zakon:  ta on je glasnik Jahve nad Vojskama. "},
	{8, "8 Ali vi ste s puta zašli, učinili ste da se mnogi o Zakon spotiču,  raskinuli ste Savez Levijev - govori Jahve nad Vojskama."},
	{9, "9 Zato učinih da vas preziru i ponizuju svi narodi jer se putova mojih vi držali niste, nego ste bili pristrani primjenjujuć Zakon. "},
	{10, "10 Nemamo li svi jednog Oca? Nije li nas jedan Bog stvorio? Zašto smo onda jedan drugome nevjerni  te skvrnimo Savez svojih otaca?"},
	{11, "11 Iznevjerio se Juda: učinili su sramotu u Izraelu i Jeruzalemu, jer Juda je oskvrnuo Svetinju, Jahvi dragu, i ženi se kćerju tuđega božanstva."},
	{12, "12 Svakog tko tako učini, ma tko bio on, nek iskorijeni Jahve iz šatora Jakovljevih  i izmeđ onih koji prinose žrtvu Jahvi nad Vojskama!"},
	{13, "13 I ovo još vi činite: zalijevate suzama Jahvin žrtvenik tužeći i ridajući, jer on više neće da se žr  tvi prikloni, iz ruke mu vaše ona nije ugodna."},
	{14, "14 I vi pitate: Zašto? Zato što je Jahve bio svjedok između tebe i žene mladosti tvoje kojoj si nevjeran premda ti drugarica bijaše i žena tvoga saveza."},
	{15, "15 Nije li On načinio jedno jedino biće dahom životnim obdareno? A što to jedino biće traži? Božanski naraštaj! Poštuj dakle život svoj i ne budi nevjeran ženi svoje mladosti. "},
	{16, "16 Jer ja mrzim otpuštanje žena - govori Jahve, Bog Izraelov - i onog koji nevjerom haljine svoje kalja - govori Jahve nad Vojskama! Poštujte dakle život svoj, ne budite nevjerni!"},
	{17, "17 Dosađujete Jahvi svojim riječima, a pitate: U čemu mu dosađujemo? Time što govorite: Svi koji zlo čine dobro su viđeni u očima Jahvinim i takvi su mu mili! ili: Gdje je Bog pravde? "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct hr3 poems[] = {
	{1, "1 Evo šaljem glasnika da put preda mnom pripravi. I doći će iznenada u Hram svoj Gospod koga vi tražite i anđeo Saveza koga žudite. Evo ga, dolazi već - govori Jahve nad Vojskama."},
	{2, "2 Ali tko će podnijeti dan njegova dolaska  i tko će opstati kad se on pojavi? Jer on je kao oganj ljevačev i kao lužina bjeliočeva."},
	{3, "3 I zasjest će kao onaj što topi srebro i pročišćava. Očistit će sinove Levijeve i pročistit će ih kao zlato i srebro, da prinose Jahvi žrtvu u pravednosti."},
	{4, "4 Tad će biti draga Jahvi žrtva Judina i jeruzalemska kao u drevne dane i kao prvih godina."},
	{5, "5 Doći ću k vama na sud i bit ću spreman svjedok protiv vračeva i preljubnika, protiv onih koji se lažno kunu, protiv onih koji zakidaju plaću radniku, udovici i siroti, protiv onih koji gaze pravo stranaca i mene se ne boje - govori Jahve nad Vojskama."},
	{6, "6 Jer ja, Jahve, ne mijenjam se, a vi se, sinovi Jakovljevi, mijenjate bez prestanka!"},
	{7, "7 Od vremena svojih otaca odstupate od mojih uredaba i ne čuvate ih. Vratite se meni, a ja ću se vratiti vama - govori Jahve nad Vojskama. Pitate: Kako da se vratimo?"},
	{8, "8 Smije li čovjek prikraćivati Boga? A vi mene prikraćujete. I pitate: U čemu te prikratismo? U desetini i u prinosu."},
	{9, "9 Udareni ste prokletstvom jer me prikraćujete vi, sav narod!"},
	{10, "10 Donesite čitavu desetinu u riznicu da u mojoj kući bude hrane. Tada me iskušajte - govori Jahve nad Vojskama - neću li vam otvoriti ustave nebeske i neću li izliti na vas punom mjerom blagoslov,"},
	{11, "11 neću li zbog vas zaprijetit skakavcu da vam više ne kvari usjeva i da vam ne bude nerodna loza u polju - govori Jahve nad Vojskama."},
	{12, "12 Svi će vas narodi tad držati sretnima,  jer ćete biti zemlja blaženstva - govori Jahve nad Vojskama."},
	{13, "13 Teške su besjede vaše protiv mene - govori Jahve."},
	{14, "14 Vi ipak pitate: Što smo između sebe govorili protiv tebe? Govorili ste: Zaludu je Bogu služiti i kakva je korist što njegove čuvamo propise i žalosni hodimo pred Jahvom nad Vojskama."},
	{15, "15 Odsad ćemo sretnim zvati oholice: napreduju oni koji zlo čine, i premda Boga iskušavaju, izvuku se!"},
	{16, "16 Ali kad se razgovaraju oni koji se Boga boje, Jahve pazi, sluša ih, i to se pred njim piše u knjigu spomenicu  u korist onih koji se boje Jahve i štuju Ime njegovo."},
	{17, "17 Moji će biti, moja stečevina - govori Jahve nad Vojskama. U Dan koji spremam bit ću im milostiv kao što je milostiv otac sinu koji mu služi."},
	{18, "18 I tada ćete opet razlikovati pravednika od grešnika, onoga koji služi Bogu od onoga koji mu ne služi."},
	{19, "19 Jer evo dan dolazi poput peći užaren; oholi i zlikovci bit će kao strnjika: dan koji se bliži spalit će ih - govori Jahve nad Vojskama - da im neće ostati ni korijena ni grančice. "},
	{20, "20 A vama koji se Imena moga bojite sunce pravde će ogranuti sa zdravljem u zrakama, i vi ćete izlaziti poskakujući kao telad na pašu."},
	{21, "21 I gazit ćete bezbožnike kao prah pod nogama u dan koji spremam - govori Jahve nad Vojskama."},
	{22, "22 Spomenite se Zakona Mojsija, sluge moga, kome sam na  Horebu propisao zakone i uredbe za sav Izrael."},
	{23, "23 Evo, poslat ću vam proroka Iliju prije nego dođe Dan Jahvin, dan velik i strašan."},
	{24, "24 On će obratiti srce otaca k sinovima, a srce sinova k ocima, da ne dođem i ne udarim prokletstvom zemlju."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};