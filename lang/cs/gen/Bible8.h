#include <map>
#include <string>
class Bible8
{
	struct cs1	{ int val; const char *msg; };
	struct cs2	{ int val; const char *msg; };
	struct cs3	{ int val; const char *msg; };
	struct cs4	{ int val; const char *msg; };
public:
static void view1() {
struct cs1 poems[] = {
	{1, "1 Stalo se pak za času soudců, že byl hlad v zemi. I odšel člověk z Betléma Judova, a bydlil pohostinu v krajině Moábské s manželkou svou a se dvěma syny svými."},
	{2, "2 Jméno pak muže toho Elimelech, a jméno ženy jeho Noémi, jméno také dvou synů jeho Mahalon a Chelion, Efratejští z Betléma Judova; a přišedše do krajiny Moábské, bydlili tam."},
	{3, "3 Umřel pak Elimelech, muž Noémi; i pozůstala ona s oběma syny svými."},
	{4, "4 Kteříž pojali sobě ženy Moábské; jméno jedné bylo Orfa a jméno druhé Rut. I bydlili tam téměř deset let."},
	{5, "5 Umřeli také oni oba dva, Mahalon i Chelion, a zůstala žena ta po dvou synech svých a manželu svém."},
	{6, "6 Tedy vstavši ona s nevěstami svými, navracela se z krajiny Moábské; nebo slyšela v krajině Moábské, že Hospodin navštívil lid svůj, dav jemu chléb."},
	{7, "7 Vyšedši tedy z místa, na němž bydlila, a obě nevěsty její s ní, daly se na cestu, aby se navrátily do země Judské."},
	{8, "8 Řekla pak Noémi oběma nevěstám svým: Jděte, navraťte se jedna každá do domu matky své. Učiniž Hospodin s vámi milosrdenství, jakož jste i vy činili s mrtvými syny mými i se mnou."},
	{9, "9 Dejž vám Hospodin, abyste nalezly odpočinutí, jedna každá v domě muže svého. I políbila jich, ony pak pozdvihše hlasu svého, plakaly."},
	{10, "10 A řekly jí: Obrátíme se raději s tebou k lidu tvému."},
	{11, "11 I řekla Noémi: Navraťte se, dcerky mé. Proč chcete jíti se mnou? Zdaliž ještě budu míti syny, aby byli vaši muži?"},
	{12, "12 Navraťte se, dcerky mé, a odejděte, neboť jsem již stará k vdání; nýbrž bych i řekla, že mám naději, bych i noci této se vdala a syny zrodila,"},
	{13, "13 Zdaž byste na ně čekaly, až by dorostli? Zdaliž tou příčinou meškati se budete, abyste se neměly vdáti? Ne tak, mé dcerky, nebo mé trápení větší jest nežli vaše, proto že ruka Hospodinova jest proti mně."},
	{14, "14 Ony pak pozdvihše hlasu, opět plakaly. A Orfa políbivši svegruši svou, odešla, Rut pak přídržela se jí."},
	{15, "15 Kteréžto řekla Noémi: Aj, přítelkyně tvá navrátila se k lidu svému a k bohům svým, navratiž se také za ní."},
	{16, "16 Ale Rut řekla: Nenuť mne, abych tě opustiti a od tebe odjíti měla. Nebo kamž se koli obrátíš, půjdu, a kdekoli bydliti budeš, i já bydliti budu; lid tvůj lid můj, a Bůh tvůj Bůh můj."},
	{17, "17 Kdekoli umřeš, umru, a tu pochována budu. Toto mi učiň Hospodin, a toto přidej, že toliko smrt rozdělí mne s tebou."},
	{18, "18 Tedy viduci, že se na tom ustavila, aby šla s ní, přestala k ní mluviti."},
	{19, "19 I šly obě dvě spolu, až přišly k Betlému. I stalo se, že když přišly do Betléma, roznesla se pověst o nich po všem městě, a pravili: To-li jest ta Noémi?"},
	{20, "20 Jimž ona řekla: Nenazývejte mne Noémi, říkejte mi Mara; nebo hořkostí velikou naplnil mne Všemohoucí."},
	{21, "21 Vyšla jsem plná, teď pak prázdnou mne zase Hospodin přivedl. Pročež tedy nazýváte mne Noémi, poněvadž mne Hospodin ssoužil, a Všemohoucí mne znuzil?"},
	{22, "22 A navrátila se Noémi s Rut Moábskou, nevěstou svou; navrátila se pak z krajiny Moábské. I přišly do Betléma, když počínali žíti ječmene."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct cs2 poems[] = {
	{1, "1 Měla pak Noémi přítele po manželu svém, muže mocného z čeledi Elimelechovy, jménem Bóza."},
	{2, "2 I řekla Rut Moábská Noémi: Nechť medle jdu na pole sbírati klasů za tím, kdož by mi toho přál. Jížto ona řekla: Jdi, dcero má."},
	{3, "3 Šla tedy, a přišedši, sbírala klasy na poli za ženci. Přihodilo se pak, že přišla na díl pole toho, kteréž přináleželo Bózovi, jenž byl z čeledi Elimelechovy."},
	{4, "4 A v tom přišel Bóz z Betléma, a řekl žencům: Hospodin s vámi. Kteříž odpověděli jemu: Požehnejž tobě Hospodin."},
	{5, "5 I řekl Bóz služebníku svému, kterýž postaven byl nad ženci: Čí jest tato mladice?"},
	{6, "6 Odpověděl služebník ten, kterýž postaven byl nad ženci, a řekl: Jest mladice Moábská, kteráž přišla s Noémi z země Moábské."},
	{7, "7 A řekla mi: Prosím, nechť sbírám a shromažďuji klasy mezi snopy za ženci. A přišedši, trvá od jitra až dosavad, kromě že na chvilku doma pobyla."},
	{8, "8 Tedy řekl Bóz k Rut: Slyš, dcero má, nechoď sbírati na jiné pole, aniž odcházej odsud, ale přídrž se teď děvek mých."},
	{9, "9 Zůstávej na tom poli, na němž budou žíti, a choď za nimi, nebo jsem přikázal služebníkům svým, aby se tebe žádný nedotýkal. Bude-liť se chtíti píti, jdi k nádobám, a napí se té vody, kteréž by navážili služebníci moji."},
	{10, "10 Tedy ona padla na tvář svou, a schýlivši se k zemi, řekla jemu: Odkudž mi to, že jsem nalezla milost před tebou, abys se známil ke mně, kteráž jsem cizozemka."},
	{11, "11 Odpověděl Bóz a řekl: O všemť mi oznámeno jest, co jsi koli činila svegruši své po smrti muže svého, a že opustivši otce svého a matku svou, i zemi, v kteréžs se narodila, šla jsi mezi lid, kteréhožs prvé neznala."},
	{12, "12 Odplatiž tobě Hospodin za skutek tvůj, a budiž mzda tvá dokonalá od Hospodina Boha Izraelského, poněvadž jsi přišla, abys pod křídly jeho doufala."},
	{13, "13 Kterážto řekla: Nalezla jsem milost před tebou, pane můj, poněvadž jsi mne potěšil, a mluvils k srdci děvky své, ješto nejsem podobná jedné z děvek tvých."},
	{14, "14 Tedy řekl jí Bóz: Když bude čas jísti, přistup sem, a pojez chleba, a omoč skyvu svou v octě. I posadila se při žencích, a podal jí pražmy; ona pak jedla až do sytosti, a ještě jí zbylo."},
	{15, "15 I vstala, aby sbírala. Přikázal pak Bóz služebníkům svým, řka: Byť pak i mezi snopy sbírala, nezbraňujte jí."},
	{16, "16 Nýbrž naschvál jí upouštějte z snopů a nechávejte, ať sbírá, a nedomlouvejte jí."},
	{17, "17 Sbírala tedy na poli tom až do večera, a což sebrala, to vymlátila; i byla téměř míra efi ječmene."},
	{18, "18 Kterýž vzavši, přišla do města, a viděla svegruše její to, což nasbírala. Vyňala také a dala jí to, což pozůstalo po nasycení jejím."},
	{19, "19 I řekla jí svegruše její: Kdes sbírala dnes, a kdes pracovala? Budiž požehnaný ten, kterýž tě přijal. Tedy oznámila svegruši své, u koho pracovala, řkuci: Jméno muže, u kteréhož jsem pracovala dnes, jest Bóz."},
	{20, "20 I řekla Noémi nevěstě své: Požehnanýť jest od Hospodina, že nepřestal milosrdenství svého nad živými i mrtvými. I to ještě k ní řekla Noémi: Blízký přítel náš a z příbuzných našich jest muž ten."},
	{21, "21 Řekla jí také Rut Moábská: I to mi ještě řekl: Čeládky mé přídrž se, dokavadž by všeho, což mého jest, nedožali."},
	{22, "22 Tedy řekla Noémi Rut nevěstě své: Dobré jest tedy, dcero má, abys vycházela s děvečkami jeho, ať by na jiném poli něco nepřekazili."},
	{23, "23 A tak se přídržela Rut děvek Bózových, a sbírala klasy, dokudž nesžali ječmene a pšenice, a bydlela u svegruše své."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct cs3 poems[] = {
	{1, "1 Řekla jí potom Noémi svegruše její: Má dcero, nemám-liž pohledati tobě odpočinutí, aby tobě dobře bylo?"},
	{2, "2 Anobrž zdaliž Bóz ten příbuzný náš, s jehož jsi děvečkami byla, nebude víti ječmene na humně noci této?"},
	{3, "3 Protož umej se a pomaž, roucho své také oblec, a jdi na humno, však tak, aby nebylo známé muži tomu, prvé než by přestal jísti a píti."},
	{4, "4 A když půjde ležeti, znamenej místo, na kterémž lehne, a přijduc, pozdvihneš pláště u noh jeho, a tu se položíš; on pak oznámí tobě, co bys měla činiti."},
	{5, "5 Jížto Rut řekla: Cokoli mi rozkážeš, učiním."},
	{6, "6 Šla tedy na to humno, a učinila všecko, což jí rozkázala svegruše její."},
	{7, "7 Když pak pojedl Bóz a napil se, a rozveselilo se srdce jeho, šel spáti vedlé stohu; přišla i ona tiše, a pozdvihši pláště u noh jeho, položila se."},
	{8, "8 A když bylo o půl noci, ulekl se muž ten a zchopil se, a aj, žena leží u noh jeho."},
	{9, "9 I řekl: Kdo jsi ty? A ona odpověděla: Já jsem Rut, děvka tvá. Vztáhni křídlo pláště svého na děvku svou, nebo příbuzný jsi."},
	{10, "10 A on řekl: Požehnaná jsi ty od Hospodina, dcero má. Větší jsi nyní pobožnosti dokázala, nežli prvé, že jsi nehledala mládenců bohatých aneb chudých."},
	{11, "11 Protož nyní, dcero má, neboj se; vše, čehož žádáš, učiním tobě, nebo víť všecko město lidu mého, že jsi ty žena šlechetná."},
	{12, "12 A také jest to pravé, že jsem příbuzný tvůj, ale jestiť příbuzný bližší nežli já."},
	{13, "13 Odpočiniž tu přes noc, a když bude ráno, jestližeť on bude chtíti práva příbuznosti k tobě užiti, dobře, nechť užive. Pakliť nebude chtíti práva užiti k tobě, já právem příbuznosti pojmu tebe, živť jest Hospodin. Spiž tu až do jitra."},
	{14, "14 A tak spala u noh jeho až do jitra. Potom vstala prvé, nežli by kdo poznati mohl bližního svého; nebo pečoval Bóz, aby někdo nezvěděl, že přišla žena ta na humno."},
	{15, "15 A řekl: Přines loktušku, kterouž se odíváš, a drž ji. A když ji držela, naměřiv jí šest měr ječmene, vložil na ni. I vešla do města."},
	{16, "16 A přišla k svegruši své. Kteráž řekla: Kdo jsi ty, dcero má? I vypravovala jí všecko, což jí učinil muž ten."},
	{17, "17 A řekla: Šest měr těchto ječmene dal mi, nebo řekl ke mně: Nenavrátíš se prázdná k svegruši své."},
	{18, "18 I řekla jí Noémi: Počekej, dcero má, až porozumíš, jak to padne; neboť neobleví muž ten, až tu věc dnes k místu přivede."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct cs4 poems[] = {
	{1, "1 Tedy Bóz všed do brány, posadil se tam. A aj, příbuzný ten, o němž on byl mluvil, šel tudy. I řekl jemu: Poď sem, a poseď tuto. Kterýž zastaviv se, sedl."},
	{2, "2 A vzav Bóz deset mužů z starších města toho, řekl: Posaďte se tuto. I posadili se."},
	{3, "3 Tedy řekl příbuznému tomu: Díl pole, kteréž bylo bratra našeho Elimelecha, prodala Noémi, kteráž se navrátila z krajiny Moábské."},
	{4, "4 A já jsem umínil netajiti toho před tebou, a pravímť: Ujmi pole to před přísedícími těmito a staršími lidu mého. Jestliže chceš koupiti, kup; pakli nekoupíš, oznam mi. Nebo vím, že kromě tebe není žádného, kterýž by měl právo koupiti je, a já jsem po tobě. Tedy on řekl: Já koupím."},
	{5, "5 I řekl Bóz: Když ujmeš pole to od Noémi, tedy i Rut Moábskou, manželku mrtvého, sobě pojmeš, abys vzbudil jméno mrtvého v dědictví jeho."},
	{6, "6 Odpověděl příbuzný ten: Nemohuť koupiti, abych snad nezahladil dědictví svého. Uživ ty práva příbuznosti mé, nebo já ho nemohu užiti."},
	{7, "7 (Byl pak ten obyčej od starodávna v Izraeli při koupi a směnách, ku potvrzení všelijakého jednání, že szul jeden obuv svou, a dal ji druhému. A to bylo na svědectví té věci v Izraeli.)"},
	{8, "8 Protož řekl příbuzný Bózovi: Ujmi ty. I szul obuv svou."},
	{9, "9 Tedy řekl Bóz starším těm a všemu lidu: Vy svědkové jste dnes, že jsem ujal všecko, což bylo Elimelechovo, i všecko to, což bylo Chelionovo a Mahalonovo, od Noémi."},
	{10, "10 Ano i Rut Moábskou, ženu Mahalonovu, vzal jsem sobě za manželku, abych vzbudil jméno mrtvého v dědictví jeho, a aby nebylo zahlazeno jméno mrtvého z bratří jeho, a z brány místa jeho. Vy svědkové jste dnes toho."},
	{11, "11 I řekl všecken lid, kterýž byl v bráně města, i starší: Svědkové jsme. Dejž Hospodin, aby žena vcházející do domu tvého byla jako Ráchel a jako Lía, kteréžto dvě vzdělaly dům Izraelský. Počínejž sobě zmužile v Efratě, a dosáhni jména v Betlémě."},
	{12, "12 A ať jest dům tvůj jako dům Fáresa, (kteréhož porodila Támar Judovi,) z semene toho, kteréž by dal tobě Hospodin s mladicí touto."},
	{13, "13 A tak Bóz pojal sobě Rut, a byla manželkou jeho. A když všel k ní, dal jí to Hospodin, že počala a porodila syna."},
	{14, "14 I řekly ženy Noémi: Požehnaný Hospodin, kterýž nedopustil toho, abys měla zbavena býti příbuzného v tento čas, tak aby trvalo v Izraeli jméno jeho."},
	{15, "15 Onť očerství duši tvou, a chovati tě bude v starosti tvé; nebo nevěsta tvá, kteráž tě miluje, porodila ho, kteráž tobě lepší jest, nežli sedm synů."},
	{16, "16 Tedy vzavši Noémi dítě, položila je na klín svůj, a byla pěstounkou jeho."},
	{17, "17 Daly mu pak jméno sousedy, kteréž pravily: Narodil se syn Noémi, a nazvaly ho jménem Obéd. Onť jest otec Izai, otce Davidova."},
	{18, "18 A tito jsou rodové Fáresovi: Fáres zplodil Ezrona;"},
	{19, "19 Ezron pak zplodil Rama, Ram pak zplodil Aminadaba;"},
	{20, "20 Aminadab pak zplodil Názona, Názon pak zplodil Salmona;"},
	{21, "21 Salmon pak zplodil Bóza, Bóz pak zplodil Obéda;"},
	{22, "22 Obéd pak zplodil Izai, Izai pak zplodil Davida."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};