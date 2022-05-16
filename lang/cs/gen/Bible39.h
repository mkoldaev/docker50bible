#include <map>
#include <string>
class Bible39
{
	struct cs1	{ int val; const char *msg; };
	struct cs2	{ int val; const char *msg; };
	struct cs3	{ int val; const char *msg; };
	struct cs4	{ int val; const char *msg; };
public:
static void view1() {
struct cs1 poems[] = {
	{1, "1 Břímě slova Hospodinova proti Izraelovi skrze Malachiáše."},
	{2, "2 Miluji vás, praví Hospodin, vy pak říkáte: V čem nás miluješ? Zdaliž Ezau nebyl bratr Jákobův? praví Hospodin. A však jsem miloval Jákoba."},
	{3, "3 Ezau pak měl jsem v nenávisti; protož zanechal jsem hor jeho pustých, a dědictví jeho drakům pouště."},
	{4, "4 Řekne-li Idumejská země: Ochuzeniť jsme, ale navrátíme se zase, a vystavíme místa pustá, takto praví Hospodin zástupů: Oni nechť stavějí, a já budu bořiti. I budou je nazývati pomezím bezbožnosti a lidem, na nějž hněviv bude Hospodin až na věky."},
	{5, "5 Což oči vaše uzří, a vy díte: Veleben buď Hospodin po pomezích Izraelských."},
	{6, "6 Syn ctí otce, a služebník pána svého. Protož jestližeť jsem já otec, kdež jest čest má? A jestliže jsem pán, kde jest bázeň má? Vám to mluví Hospodin zástupů, ó kněží, kteříž sobě zlehčujete jméno mé. A však říkáte: V čem zlehčujeme jméno tvé?"},
	{7, "7 Kteříž přinášejíce na oltář můj obět poškvrněnou, říkáte: Čímž jsme tě poškvrnili? Tím, když říkáte: Stůl Hospodinův v pohrdání jest."},
	{8, "8 Nebo když přivodíte slepé k obětování, což to není nic zlého? A když přivodíte chromé aneb nemocné, což to není nic zlého? Daruj je medle knížeti svému, zalíbíš-li mu se tím, a přijme-li tvář tvou, praví Hospodin zástupů."},
	{9, "9 A protož nyní kořtež se tváři Boha silného, aby nám milost učinil. Ale když to z rukou vašich jest, přijme-liž kterého z vás oblíčej? praví Hospodin zástupů."},
	{10, "10 Anobrž kdo jest mezi vámi, aby zavřel dvéře, aneb zapálil na oltáři mém darmo? Nemámť v vás žádné líbosti, praví Hospodin zástupů, a oběti nepřijmu z ruky vaší."},
	{11, "11 Nebo od východu slunce až na západ jeho veliké bude jméno mé mezi národy, a na všelikém místě kadění přinášíno bude jménu mému, a obět čistá. Veliké zajisté jméno mé bude mezi národy, praví Hospodin zástupů,"},
	{12, "12 Ačkoli vy ho poškvrňujete, když říkáte: Stůl Hospodinův v pohrdání jest, a což kladeno bývá na něj, že jest chaterný pokrm."},
	{13, "13 Říkáte také: Ach, větší práce, ješto byste to zdmýchnouti mohli, praví Hospodin zástupů. Nebo přinášíte to, což jest vydřeno, a chromé i nemocné, přinášejíce dar. To-liž mám přijímati z ruky vaší? praví Hospodin."},
	{14, "14 Anobrž zlořečený jest fortelný, kterýž maje v svém stádě samce, činí slib, a obětuje Pánu to, což jest churavého. Nebo král veliký já jsem, praví Hospodin zástupů, a jméno mé jest hrozné mezi národy."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct cs2 poems[] = {
	{1, "1 A tak nyní k vám přikázání to, ó kněží."},
	{2, "2 Neuposlechnete-li a nesložíte-li v srdci, abyste dali slávu jménu mému, praví Hospodin zástupů, zajisté že pošli na vás zlořečenství, a zlořečiti budu požehnáním vašim. Anobrž již jsem zlořečil každému z nich, nebo jste nikoli nesložili toho v srdci."},
	{3, "3 Aj, já pokazím vám to, což nasejete, a vkydnu lejno na tváře vaše, lejno obětí vašich, tak že vás zachvátí k sobě."},
	{4, "4 Nebo víte, že jsem poslal k vám přikázaní to, aby byla stálá smlouva s Léví, praví Hospodin zástupů."},
	{5, "5 Smlouva má byla s ním života a pokoje, a dal jsem jemu to pro bázeň; nebo se bál mne, a pro jméno mé potřín byl."},
	{6, "6 Zákon pravdy byl v ústech jeho, a nepravost nebyla nalezena ve rtech jeho, v pokoji a upřímosti chodil se mnou, a mnohé odvrátil od nepravosti."},
	{7, "7 Nebo rtové kněze mají ostříhati umění, a na zákon doptávati se z úst jeho; posel zajisté Hospodina zástupů jest."},
	{8, "8 Vy pak sešli jste s cesty, byli jste příčinou mnohým, aby činili proti zákonu; zrušili jste smlouvu Levítskou, praví Hospodin zástupů."},
	{9, "9 Pročež i já také vydal jsem vás v potupu a v nevážnost všemu lidu, jakož vy v ničemž neostříháte cest mých, a přijímáte osoby v zákoně."},
	{10, "10 Zdaliž není jeden otec všech nás? Zdaliž Bůh jeden nestvořil nás? Proč nevěrně činiti máme jeden druhému a zlehčovati smlouvu otců našich?"},
	{11, "11 Nevěrně činí Juda, a ohavnost se děje v Izraeli a v Jeruzalémě; nebo poškvrňuje Juda svatosti Hospodinovy, kterouž by milovati měl, pojímaje za manželku dceru boha jiného."},
	{12, "12 Vypléní Hospodin muže, kterýž to činí, z stánků Jákobových, bdícího i odpovídajícího, i obětujícího dar Hospodinu zástupů."},
	{13, "13 Již to podruhé činíte, že přikrýváte slzami oltář Hospodinův, pláčem a křikem, pročež nikoli nepatří již více k daru, aniž přijímá oběti vzácné z ruky vaší."},
	{14, "14 A však říkáte? Pro kterou příčinu? Proto že Hospodin jest svědkem mezi tebou a manželkou mladosti tvé, kteréž ty nevěrně činíš, ješto ona jest tovaryška tvá, a manželka smlouvy tvé."},
	{15, "15 Zdaliž neučinil jedno, ačkoli ještě více ducha měl? Proč pak jedno? Aby hledali semene Božího. Protož ostříhejte ducha svého, a manželce mladosti své nečiňte nevěrně."},
	{16, "16 Proto že v nenávisti má propouštění, praví Hospodin Bůh Izraelský, proto že takový přikrývá ukrutnost pláštěm jeho, praví Hospodin zástupů, protož ostříhejte ducha svého, abyste nečinili nevěrně."},
	{17, "17 Těžcí jste Hospodinu slovy svými, a však říkáte: V čem jsme těžcí? Když říkáte: Každý, kdož činí zlé, líbí se Hospodinu, a v těch on líbost má, aneb: Kde jest Bůh soudu?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct cs3 poems[] = {
	{1, "1 Aj, já posílám anděla svého, kterýž připraví cestu před tváří mou. V tom hned přijde do chrámu svého Panovník, kteréhož vy hledáte, a anděl smlouvy, v němž vy líbost máte. Aj, přijdeť, praví Hospodin zástupů."},
	{2, "2 Ale kdo bude moci snésti den příchodu jeho? A kdo ostojí, když se on ukáže? Nebo on jest jako oheň rozpouštějící a jako mýdlo běličů."},
	{3, "3 I sedna, přeháněti bude a přečišťovati stříbro, a přečistí syny Léví, a vyčistí je jako zlato a jako stříbro. I budou Hospodinovi, obětujíce oběti v spravedlnosti."},
	{4, "4 I zachutná sobě Hospodin obět Judovu a Jeruzalémských, jako za dnů prvních, a jako za let starodávních."},
	{5, "5 K vám pak přikročím s pomstou, a budu rychlým svědkem proti kouzedlníkům, a proti cizoložníkům, a proti křivopřísežníkům, i proti těm, kteříž s útiskem zadržují mzdu nájemníka, vdově a sirotku, a příchozímu křivdu činíce, nebojí se mne, praví Hospodin zástupů."},
	{6, "6 Nebo já Hospodin neměním se, protož vy, synové Jákobovi, nevzali jste skončení."},
	{7, "7 Hned ode dnů otců vašich odešli jste od ustanovení mých, a neostříhali jste jich. Navraťtež se ke mně, a navrátím se k vám, praví Hospodin zástupů. Ale říkáte: V čem bychom se navrátiti měli?"},
	{8, "8 Loupiti-liž má člověk Boha, že vy loupíte mne? A však říkáte: V čem tě loupíme? V desátcích a obětech."},
	{9, "9 Naprosto zlořečení jste, proto že mne loupíte, vy pokolení všecko."},
	{10, "10 Sneste všecky desátky do obilnice, aby byla potrava v domě mém, a zkuste mne nyní v tom, praví Hospodin zástupů, nezotvírám-liť vám průduchů nebeských, a nevyleji-li na vás požehnání, tak že neodoláte."},
	{11, "11 A přimluvím pro vás tomu, což zžírá, a nebude vám kaziti úrod zemských, aniž vám pochybí vinný kmen na poli, praví Hospodin zástupů."},
	{12, "12 I budou vás blažiti všickni národové; nebo vy budete zemí rozkošnou, praví Hospodin zástupů."},
	{13, "13 Rozmohlať se proti mně slova vaše, praví Hospodin, a však říkáte: Což jsme mluvili proti tobě?"},
	{14, "14 Říkáte: Daremná jest věc sloužiti Bohu, a jaký zisk, budeme-li ostříhati nařízení jeho, a budeme-li choditi zasmušile, bojíce se Hospodina zástupů?"},
	{15, "15 Nýbrž nyní blahoslavíme pyšné. Ti, kteříž páší bezbožnost, vzdělávají se, a pokoušející Boha vysvobozeni bývají."},
	{16, "16 Tehdy ti, kteříž se bojí Hospodina, tytýž mluvili jeden k druhému. I pozoroval Hospodin a slyšel, a psána jest kniha pamětná před ním pro ty, kteříž se bojí Hospodina, a myslí na jméno jeho."},
	{17, "17 Tiť budou, praví Hospodin zástupů, v den, kterýž já učiním, mým klínotem, a slituji se nad nimi, jako se slitovává otec nad synem svým, kterýž mu slouží."},
	{18, "18 Tehdy obrátíte se, a uzříte rozdíl mezi spravedlivým a bezbožným, mezi tím, kdo slouží Bohu, a tím, kdo jemu neslouží."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct cs4 poems[] = {
	{1, "1 Nebo aj, den ten přichází hořící jako pec, v němž budou všickni pyšní, a všickni pášící bezbožnost jako strniště. I zažhne je ten den, kterýž přijíti má, praví Hospodin zástupů, tak že neostaví jim ani kořene ani ratolesti."},
	{2, "2 Vám pak, kteříž se bojíte jména mého, vzejde slunce spravedlnosti, a zdraví bude na paprslcích jeho. Tedy vycházeti budete,a porostete jako telata vykrmená."},
	{3, "3 A pošlapáte bezbožné, tak že budou jako popel pod nohami vašimi v den, kterýž já učiním, praví Hospodin zástupů."},
	{4, "4 Pamatujtež na zákon Mojžíše služebníka mého, jemuž jsem přikázal na Orébě přednesti všemu Izraeli ustanovení a soudy."},
	{5, "5 Aj, já pošli vám Eliáše proroka, prvé nežli přijde den Hospodinův veliký a hrozný,"},
	{6, "6 Aby obrátil srdce otců k synům, a srdce synů k otcům jejich, abych přijda, neranil země prokletím."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};