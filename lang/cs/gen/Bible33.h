#include <map>
#include <string>
class Bible33
{
	struct cs1	{ int val; const char *msg; };
	struct cs2	{ int val; const char *msg; };
	struct cs3	{ int val; const char *msg; };
	struct cs4	{ int val; const char *msg; };
	struct cs5	{ int val; const char *msg; };
	struct cs6	{ int val; const char *msg; };
	struct cs7	{ int val; const char *msg; };
public:
static void view1() {
struct cs1 poems[] = {
	{1, "1 Slovo Hospodinovo, kteréž se stalo k Micheášovi Moraštickému za dnů Jotama, Achasa a Ezechiáše králů Judských, kteréž u vidění slyšel o Samaří a Jeruzalému."},
	{2, "2 Slyšte všickni lidé napořád, pozoruj země, i což na ní jest, a nechť jest Panovník Hospodin proti vám svědkem, Panovník z chrámu svatosti své."},
	{3, "3 Nebo aj, Hospodin vyjde z místa svého, a sstoupě, šlapati bude po vysokostech země."},
	{4, "4 I budou se rozplývati hory pod ním, a údolé se roztrhovati, tak jako vosk od ohně, a jako vody mající spád dolů,"},
	{5, "5 A to všecko pro Jákobovo zpronevěření, a pro hříchy domu Izraelského. Kdo jest příčina zpronevěření Jákobova? Zdali ne Samaří? A kdo výsostí Judských: Zdali ne Jeruzalém?"},
	{6, "6 Protož obrátím Samaří v hromadu rumu, k štípení vinic, a svalím do údolí kamení její, i základy její odkryji."},
	{7, "7 A všecky rytiny její ztlučeny budou, i všickni darové její ohněm spáleni, a všecky modly její obrátím v pustinu. Nebo ze mzdy nevěstčí toho nashromáždila, protož se zase ke mzdě nevěstčí to navrátí."},
	{8, "8 Nad čímž kvíliti a naříkati budu, chodě svlečený a nahý, vydám se v naříkání jako drakové, a v kvílení jako mladé sovy,"},
	{9, "9 Proto že zneduživěla od ran svých, a že přišlo to až k Judovi, dosáhlo až k bráně lidu mého, až do Jeruzaléma."},
	{10, "10 Neoznamujtež v Gát, aniž hned plačte; v domě Ofra v prachu se válej."},
	{11, "11 Ty, kteráž bydlíš v Safir, zajdi, obnaženou majíc hanbu. Nevyjdeť ta, kteráž bydlí v Zaanan pro kvílení v Betezel, od vás maje živnost svou."},
	{12, "12 Bude, pravím, bolestiti pro dobré věci obyvatelkyně Marót, proto že sstoupí zlé od Hospodina až do brány Jeruzalémské."},
	{13, "13 Zapřáhni do vozu rychlé koně, obyvatelkyně Lachis, kteráž jsi původ hřícha dceři Sionské; nebo v tobě nalezena jsou přestoupení Izraelova."},
	{14, "14 Protož pošleš dary své s Morešet v Gát; domové Achzib zklamají krále Izraelské."},
	{15, "15 Ó obyvatelkyně Maresa, i toběť tudíž přivedu dědice; až do Adulam přijde, k slávě Izraelské."},
	{16, "16 Učiniž sobě lysinu, a ohol se pro syny rozkoší svých; rozšiř lysinu svou jako orlice, nebo stěhují se od tebe."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct cs2 poems[] = {
	{1, "1 Běda těm, kteříž vymýšlejí nepravost a ukládají zlé na ložcích svých, a na úsvitě ráno vykonávají je, když jest v moci rukou jejich."},
	{2, "2 Požádají polí, i vydírají, takž i domů, a odjímají; a tak provozují moc nad mužem i domem jeho, nad jedním každým i dědictvím jeho."},
	{3, "3 Protož takto praví Hospodin: Aj, já myslím proti čeledi té věc zlou, odkudž nevyňmete hrdel vašich, aniž budete choditi vysokomyslně; nebo čas zlý bude."},
	{4, "4 V ten den užívati budou o vás přísloví, a naříkati budou naříkáním žalostným, řkouce: Do cela zpuštěni jsme, podíl lidu mého proměnil. Jaktě mi jej odjal, a vzav pole naše, rozdělil!"},
	{5, "5 Protož nebudeš míti, kdožť by vztáhl provazec na los v shromáždění Hospodinovu."},
	{6, "6 Neprorokujte. Budou prorokovati, ale nebudou těmto prorokovati, a neponesou pohanění."},
	{7, "7 Ó kteráž sloveš domem Jákobovým, zdali do těsna vehnán býti má duch Hospodinův? To-liž by skutkové jeho byli? Zdaliž slova má nejsou dobrá tomu, kdož upřímě chodí?"},
	{8, "8 Včera byl lidem mým, již jako nepřítel povstává. Majíce oděv, plášť strhujete s těch, kteříž chodí bezpečně, vyhýbajíce se bitvě."},
	{9, "9 Manželky lidu mého vyháníte z domu rozkoší jejich, od dítek jejich odjímáte slávu mou na věky."},
	{10, "10 Vstaňte a odejděte, neboť tato není sídlem pro nečistotu. Ztratí vás, a to ztracením jistým."},
	{11, "11 Jestliže za proroka se vydávaje a lež mluvě, říká: Budu tobě prorokovati o víně aneb o nápoji opojujícím, takový bývá prorokem lidu tohoto."},
	{12, "12 Jistotně zberu tě, Jákobe, docela, jistotně shromáždím ostatky Izraele, a seženu je v hromadu jako ovce v Bozra, jako stádo do prostřed ovčince jeho, i vzejde hluk od lidu."},
	{13, "13 Vstoupí ten, kterýž prolamovati bude před nimi. Prolomí, a projdou bránu, a vyjdou skrze ni; ano i král jejich půjde před nimi, a Hospodin na špici jejich."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct cs3 poems[] = {
	{1, "1 Protož pravím: Slyštež již přední v Jákobovi, a vůdcové domu Izraelského: Zdaliž vy nemáte povědomi býti soudu?"},
	{2, "2 Nenávidí dobrého a milují zlé, sdírají s lidu kůži jejich, a maso jejich s kostí jejich."},
	{3, "3 A jedí maso lidu mého, a kůži jejich s nich svláčejí, i kosti jejich rozlamují, a rozdělují jako do hrnce, a jako maso do kotlíku."},
	{4, "4 Tehdy volati budou k Hospodinu, a nevyslyší jich, ale skryje tvář svou před nimi v ten čas, tak jakž oni vykonávali zlá předsevzetí svá."},
	{5, "5 Takto praví Hospodin o těch prorocích, kteříž v blud uvodí lid můj, a hryzouce zuby svými, vyhlašují pokoj, a proti tomu, kdož by jim nic do úst nedal, válku vyzdvihují."},
	{6, "6 A protož obrátí se vám vidění v noc, a předpovídání vaše v tmu; nebo zajde slunce těm prorokům, a zatmí se jim den."},
	{7, "7 I budou se hanbiti ti vidoucí, a styděti ti věštci, a zastrou bradu svou všickni napořád, proto že nebude žádné odpovědi Boží."},
	{8, "8 Ale já naplněn jsem silou Ducha Hospodinova, a soudem i udatností, abych oznámil Jákobovi zpronevěření jeho, a Izraelovi hřích jeho."},
	{9, "9 Slyštež již toto přední v domě Jákobově, a vůdcové domu Izraelského, kteříž v ošklivosti mají soud, a cožkoli jest pravého, převracejí:"},
	{10, "10 Každý vzdělává Sion vraždami, a Jeruzalém nepravostí."},
	{11, "11 Jehož přední podlé darů soudí, a kněží jeho ze mzdy učí, a proroci jeho z peněz hádají, a však na Hospodina zpoléhají, říkajíce: Zdaliž Hospodina není u prostřed nás? Nepřijdeť na nás nic zlého."},
	{12, "12 A protož vaší příčinou Sion jako pole orán bude, a Jeruzalém v hromady obrácen bude, a hora domu toho v vysoké lesy."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct cs4 poems[] = {
	{1, "1 Ale stane se v posledních dnech, že utvrzena bude hora domu Hospodinova na vrchu hor, a vyvýšena nad pahrbky, i pohrnou se k ní národové."},
	{2, "2 A půjdou lidé mnozí, říkajíce: Poďte, a vstupme na horu Hospodinovu, totiž do domu Boha Jákobova, a bude nás vyučovati cestám svým, i budeme choditi po stezkách jeho. Nebo z Siona vyjde zákon, a slovo Hospodinovo z Jeruzaléma."},
	{3, "3 Onť bude souditi mezi národy mnohými, a trestati bude národy silné za dlouhé časy. I skují meče své v motyky, a oštípy své v srpy. Nepozdvihne národ proti národu meče, a nebudou se více učiti boji."},
	{4, "4 Ale seděti bude každý pod vinným kmenem svým, a pod fíkovím svým, a nebude žádného, kdo by přestrašil; nebo ústa Hospodina zástupů mluvila."},
	{5, "5 Všickni zajisté národové choditi budou jeden každý ve jménu boha svého, ale my choditi budeme ve jménu Hospodina Boha našeho na věky věků."},
	{6, "6 V ten den, dí Hospodin, zberu zase kulhavou, a zahnanou shromáždím, i tu, kteréž jsem zle činil."},
	{7, "7 I dám té kulhavé potomky, a pryč zahnané národ silný, a bude kralovati Hospodin nad nimi na hoře Sion od tohoto času až na věky."},
	{8, "8 A tak ty věže bravná, bašto dcery Sionské, až k tobě přijde, přijde, pravím, panování první, a království k dceři Jeruzalémské."},
	{9, "9 Pročež nyní tak velice křičíš? Zdaliž není žádného krále v tobě? Zdali rádce tvůj zahynul, že tě zachvátila bolest jako rodičku?"},
	{10, "10 Pracujž ku porodu a úpěj, dcero Sionská, jako rodička; nebo již vyjdeš z města, a budeš bydliti na poli, a přijdeš až do Babylona. Tam vytržena budeš, tam tě vykoupí Hospodin z ruky nepřátel tvých."},
	{11, "11 Sbírajíť se nyní sic proti tobě národové mnozí, říkající: Nechť jest poškvrněn Sion, a nechť se podívají na to oči naše."},
	{12, "12 Však oni neznají myšlení Hospodinových, aniž rozumějí radě jeho, že je shromažďuje jako snopy na humno."},
	{13, "13 Vstaniž a mlať, dcero Sionská; nebo rok tvůj učiním železný, a kopyta tvá učiním ocelivá. I zetřeš národy mnohé, a posvětím Hospodinu jmění jejich, a zboží jejich Pánu vší země."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct cs5 poems[] = {
	{1, "1 Sbeřiž se nyní po houfích, ó záškodnice, oblehni nás, nechať bijí holí v líce soudce Izraelského."},
	{2, "2 A ty Betléme Efrata, jakžkoli jsi nejmenší mezi tisíci Judskými, z tebe mi vyjde ten, kterýž má býti Panovníkem v Izraeli, a jehož východové jsou od starodávna, ode dnů věčných."},
	{3, "3 Protož, ač je vydá v rozptýlení, ažby ta, kteráž rodí, porodila, však ostatek bratří jeho navrátí se s syny Izraelskými."},
	{4, "4 I stane a pásti bude v síle Hospodinově, a u velebnosti jména Hospodina Boha svého. I budou bydliti, nebo již velikomocný bude až do končin země."},
	{5, "5 I budeť takový pokoj, že když Assur přitáhne do země naší, a šlapati bude po palácích našich, tedy postavíme proti němu sedm pastýřů, a osmero knížat z lidu,"},
	{6, "6 Kteříž spasou zemi Assyrskou mečem, a zemi Nimrodovu v pomezích jejích. A tak vytrhne od Assura, když přitáhne do země naší, a šlapati bude po našem pomezí."},
	{7, "7 A protož ostatkové Jákobovi u prostřed národů mnohých budou jako rosa od Hospodina, jako tiší dešťové skrápějící bylinu, jichž neočekává od žádného, aniž čeká od synů lidských."},
	{8, "8 Budou též ostatkové Jákobovi mezi pohany, a u prostřed národů mnohých, jako lev mezi zvěří divokou, jako mladý lev mezi stády ovec. Kterýžto když jde, a pošlapává, i lapá, není žádného, kdo by vytrhl."},
	{9, "9 Vyvýšiť se ruka tvá nad tvými nepřátely, a všickni protivníci tvoji vypléněni budou."},
	{10, "10 I stane se v ten den, dí Hospodin, že vypléním koně tvé z prostředku tvého, a zkazím vozy tvé."},
	{11, "11 A vypléním města země tvé, a rozbořím všecky pevnosti tvé."},
	{12, "12 Vypléním též kouzly z tebe, a planetářů nebude v tobě."},
	{13, "13 Zahladím i rytiny tvé, i obrazy tvé z prostředku tvého, a nebudeš se klaněti více dílu rukou svých."},
	{14, "14 Vykořením i háje tvé z prostředku tvého, a zkazím nepřátely tvé."},
	{15, "15 A tak v hněvu a v prchlivosti vykonám pomstu nad těmi národy, kteříž nebyli poslušni."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct cs6 poems[] = {
	{1, "1 Slyštež nyní, co praví Hospodin: Vstaň, suď se s těmito horami, a nechť slyší pahrbkové hlas tvůj."},
	{2, "2 Slyštež hory rozepři Hospodinovu, i nejpevnější základové země; nebo má rozepři Hospodin s lidem svým, a proti Izraelovi odpor povede."},
	{3, "3 Lide můj, cožť jsem učinil? A čím jsem tě obtěžoval? Vydej svědectví proti mně."},
	{4, "4 Ješto jsem tě vyvedl z země Egyptské, a z domu služebníků vykoupil jsem tě, a poslal jsem před tváří tvou Mojžíše, Arona a Marii."},
	{5, "5 Lide můj, rozpomeň se nyní, jakou radu skládal Balák král Moábský, a co jemu odpovídal Balám syn Beorův, od Setim až do Galgala, abys poznal hojnou spravedlnost Hospodinovu."},
	{6, "6 Čímž předejdu Hospodina? Skloniti-liž se mám před Bohem nejvyšším? Předejdu-liž ho zápaly, volky ročními?"},
	{7, "7 Zalíbí-liž sobě Hospodin v tisících skopců, v mnohokrát desíti tisících potoků oleje? Dám-liž prvorozeného svého za přestoupení své, plod života svého za hřích duše své?"},
	{8, "8 Oznámiltě tobě, ó člověče, co jest dobrého, i čehož Hospodin vyhledává od tebe, jediné, abys činil soud, a miloval milosrdenství, a pokorně chodil s Bohem svým."},
	{9, "9 Hlas Hospodinův na město volá (ale sám rozumný spatřuje jméno tvé,): Slyštež o metle, a kdo ji uložil."},
	{10, "10 Ještě-liž jsou v domě bezbožného pokladové nespravedliví, a míra nespravedlivá a ohavná?"},
	{11, "11 Zdaliž ospravedlniti mám vážky nepravé, a v pytlíku kamení falešné?"},
	{12, "12 Bohatí jeho plní jsou nátisku, a obyvatelé jeho mluví lež, a jazyk jejich lstivý jest v ústech jejich."},
	{13, "13 Pročež i já také nemoc dopustím, bíti a pléniti tě budu pro hříchy tvé."},
	{14, "14 Ty budeš jísti, a nenasytíš se, a snížení tvé bude u prostřed tebe. Vyneseš zajisté, ale neodneseš, a co vyneseš, vydám pod meč."},
	{15, "15 Ty budeš síti, ale nebudeš žíti; ty tlačiti budeš olivky, ale nebudeš se pomazovati olejem, i mest, ale nebudeš píti vína."},
	{16, "16 Nebo snažně ostříhá ustanovení Amri, i každého skutku domu Achabova, a spravujete se radami jejich, tak abych tě vydal v zpuštění, a obyvatele jeho v posměch. A protož pohanění lidu mého ponesete."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct cs7 poems[] = {
	{1, "1 Běda mně, že jsem jako paběrek úrod letních, jako paběrkové po vinobraní. Není žádného hroznu k jídlu, prvotiny z ovoce žádá duše má."},
	{2, "2 Zahynul pobožný z země této, a upřímého mezi lidmi není žádného; všickni napořád o vylití krve úklady činí, jeden každý bratra svého loví sítí."},
	{3, "3 Co zlého oběma rukama páchají, to aby za dobré počteno bylo. Kníže žádá, a soudce z úplatku soudí, a kdož veliký jest, ten mluví převrácenost duše své, a v hromadu ji pletou."},
	{4, "4 Nejlepší z nich jest jako bodlák, nejupřímější převyšuje trní. Přicházíť den strážných tvých, navštívení tvé přichází; jižť nastane zpletení jejich."},
	{5, "5 Nedověřujte se příteli, nedoufejte v vůdce; před tou, jenž leží v lůnu tvém, ostříhej dveří úst svých."},
	{6, "6 Nebo syn v lehkost uvodí otce, dcera povstává proti mateři své, nevěsta proti svegruši své, a nepřátelé jednoho každého jsou vlastní jeho."},
	{7, "7 Protož já na Hospodina vyhlédati budu, očekávati budu na Boha spasení svého, vyslyšíť mne Bůh můj."},
	{8, "8 Neraduj se ze mne, nepřítelkyně má. Upadla-liť jsem, povstanu; sedím-liť v temnostech, svítí mi Hospodin."},
	{9, "9 Zůřivost Hospodinovu ponesu, nebo jsem proti němu zhřešila, až se vždy zasadí o mou při, a mne zastane. Vyvedeť mne na světlo, budu viděti spravedlnost jeho."},
	{10, "10 Uzříť to nepřítelkyně má, a přikryje ji hanba, ješto mi říká: Kdež jest Hospodin Bůh tvůj? Oči mé podívají se na ni; jižť bude rozšlapána jako bláto na ulicích."},
	{11, "11 Toho dne, v němž vystaveny budou hradby tvé, toho dne daleko se rozejde výpověd."},
	{12, "12 Toho dne k tobě přicházeti budou i z Assyrské země až do pevností, a od pevností až k řece, a od moře k moři, a od hory k hoře."},
	{13, "13 A však země tato zpuštěna bude pro obyvatele své, pro ovoce činů jejich."},
	{14, "14 Pasiž lid svůj berlou svou, stádce dědictví svého, kteréž přebývá osamělé v lese u prostřed polí, ať spasou Bázan a Galád jako za dnů starodávních,"},
	{15, "15 Jako za dnů v nichž jsi vyšel z země Egyptské. Ukáži jemu divné věci."},
	{16, "16 Což vidouce národové, styděti se budou za všecku sílu svou; vloží ruku na ústa, a uši jejich ohlechnou."},
	{17, "17 Lízati budou prach jako had, a jako hadové zemští s třesením polezou z děr svých; k Hospodinu Bohu našemu, předěšeni jsouce, poběhnou, a báti se tebe budou."},
	{18, "18 Kdo jest Bůh silný podobný tobě, kterýž by snímal nepravost a promíjel přestoupení ostatkům dědictví svého, kterýž by nedržel na věky hněvu svého, proto že líbost má v slitování se?"},
	{19, "19 Navrátě se, slituje se nad námi, podmaní nepravosti naše; nýbrž uvržeš do hlubin mořských všecky hříchy naše."},
	{20, "20 Pravdomluvným se ukážeš Jákobovi, milosrdným Abrahamovi, jakož jsi přisáhl otcům našim ode dnů starodávních."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};