#include <map>
#include <string>
class Bible60
{
	struct hr1	{ int val; const char *msg; };
	struct hr2	{ int val; const char *msg; };
	struct hr3	{ int val; const char *msg; };
	struct hr4	{ int val; const char *msg; };
	struct hr5	{ int val; const char *msg; };
public:
static void view1() {
struct hr1 poems[] = {
	{1, "1 Petar, apostol Isusa Krista: putnicima Raseljeništva u Pontu, Galaciji, Kapadociji, Aziji i Bitiniji, "},
	{2, "2 po predznanju Boga  Oca, posvećenjem Duha izabranima da budu poslušni te poškropljeni  krvlju Isusa Krista. Punina vam milosti i mira!"},
	{3, "3 Blagoslovljen Bog i Otac Gospodina našega Isusa Krista koji nas po velikom milosrđu svojemu uskrsnućem Isusa Krista od mrtvih nanovo rodi za životnu nadu,"},
	{4, "4 za baštinu neraspadljivu, neokaljanu i neuvelu, pohranjenu na nebesima za vas,"},
	{5, "5 vas koje snaga Božja po vjeri čuva za spasenje, spremno da se objavi u posljednje vrijeme."},
	{6, "6 Zbog toga se radujte, makar se sada možda trebalo malo  i žalostiti zbog različitih kušnja: "},
	{7, "7 da prokušanost vaše vjere  - dragocjenija od propadljivog zlata, koje se ipak u vatri kuša  - stekne hvalu, slavu i čast o Objavljenju Isusa Krista. "},
	{8, "8 Njega  vi ljubite iako ga ne vidjeste; u njega, iako ga još ne gledate, vjerujete te klikćete od radosti neizrecive i proslavljene "},
	{9, "9 što  postigoste svrhu svoje vjere: spasenje duša."},
	{10, "10 To su spasenje istraživali i pronicali proroci koji prorokovahu  o milosti vama namijenjenoj. "},
	{11, "11 Pronicali su na koje ili kakvo  je vrijeme smjerao Duh Kristov u njima koji je unaprijed svjedočio  o Kristovim patnjama te slavama što su nakon njih imale doći: "},
	{12, "12 bi im objavljeno da ne sebi nego vama poslužuju ono što vam  sada u Duhu Svetom s neba poslanom navijestiše vaši blagovjesnici, a nada što se i anđeli žude nadviti."},
	{13, "13 Zato opašite bokove pameti svoje, trijezni budite i savršeno  se pouzdajte u milost koju vam donosi Objavljenje Isusa Krista. "},
	{14, "14 Kao poslušna djeca ne supriličujte se prijašnjim požudama  iz doba neznanja. "},
	{15, "15 Naprotiv, kao što je svet Onaj koji vas  pozva, i vi budite sveti u svemu življenju. "},
	{16, "16 Ta pisano je:  Budite sveti jer sam ja svet."},
	{17, "17 Ako dakle Ocem nazivate njega koji nepristrano svakoga  po djelu sudi, vrijeme svoga proputovanja proživite u bogobojaznosti. "},
	{18, "18 Ta znate da od svog ispraznog načina života, što vam ga oci  namriješe, niste otkupljeni nečim raspadljivim, srebrom ili zlatom,"},
	{19, "19 nego dragocjenom krvlju Krista, Jaganjca nevina i bez mane. "},
	{20, "20 On bijaše doduše predviđen prije postanka svijeta, ali se  očitova na kraju vremena radi vas "},
	{21, "21 koji po njemu vjerujete  u Boga koji ga uskrisi od mrtvih te mu dade slavu da vjera vaša  i nada bude u Bogu."},
	{22, "22 Pošto ste posluhom istini očistili duše svoje za nehinjeno  bratoljublje, od srca žarko ljubite jedni druge. "},
	{23, "23 Ta nanovo  ste rođeni, ne iz sjemena raspadljiva nego neraspadljiva: riječju  Boga koji živi i ostaje. "},
	{24, "24 Doista, svako je tijelo kao trava, sva mu slava ko cvijet poljski: sahne trava, vene cvijet, "},
	{25, "25 ali Riječ Gospodnja ostaje dovijeka. Ta pak riječ jest evanđelje koje vam je naviješteno."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct hr2 poems[] = {
	{1, "1 Odložite dakle svaku zloću i svaku prijevaru, himbe i zavisti  i sva klevetanja. "},
	{2, "2 Kao novorođenčad žudite za duhovnim, nepatvorenim  mlijekom da po njemu uzrastete za spasenje, "},
	{3, "3 ako ste doista  okusili kako je dobar Gospodin."},
	{4, "4 Pristupite k njemu, Kamenu živomu što ga, istina, ljudi odbaciše, ali je u očima Božjim izabran, dragocjen, "},
	{5, "5 pa  se kao živo kamenje ugrađujte u duhovni Dom za sveto svećenstvo  da prinosite žrtve duhovne, ugodne Bogu po Isusu Kristu."},
	{6, "6 Stoga stoji u Pismu: Evo postavljam na Sionu kamen odabrani, dragocjeni kamen ugaoni: Tko u nj vjeruje, ne, neće se postidjeti."},
	{7, "7 Vama dakle koji vjerujete - čast! A onima koji ne vjeruju  - kamen koji odbaciše graditelji postade kamen zaglavni "},
	{8, "8 i  kamen spoticanja, stijena posrtanja; oni se o nj spotiču, neposlušni Riječi, za što su i određeni."},
	{9, "9 A vi ste rod izabrani, kraljevsko svećenstvo, sveti  puk, narod stečeni da naviještate silna djela Onoga koji  vas iz tame pozva k divnom svjetlu svojemu; "},
	{10, "10 vi, nekoć Ne-narod,  a sada Narod Božji; vi Ne-mili, a sada Mili."},
	{11, "11 Ljubljeni! Zaklinjem vas da se kao pridošlice i putnici  klonite putenih požuda koje vojuju protiv duše; "},
	{12, "12 življenje  vaše među poganima neka bude uzorno da upravo onim za što vas  sada potvaraju kao zločince, pošto promotre vaša dobra djela, proslave Boga u dan pohoda."},
	{13, "13 Pokoravajte se svakoj ljudskoj ustanovi radi Gospodina:  bilo kralju kao vrhovniku, "},
	{14, "14 bilo upraviteljima jer ih on šalje  da kazne zločince, a pohvale one koji dobro čine. "},
	{15, "15 Doista, ovo je Božja volja: da čineći dobro ušutkate neznanje bezumnika. "},
	{16, "16 Kao slobodni ljudi - ali ne kao oni kojima je sloboda tek  pokrivalom zloće, već kao Božje sluge - "},
	{17, "17 sve poštujte, bratstvo  ljubite, Boga se bojte, kralja častite!"},
	{18, "18 Sluge, budite sa svim poštovanjem pokorni gospodarima, ne samo dobrima i blagima nego i naopakima. "},
	{19, "19 To je uistinu  milost ako tko radi savjesti, radi Boga podnosi nevolje trpeći  nepravedno. "},
	{20, "20 Kakve li slave doista ako za grijehe udarani  strpljivo podnosite? No ako dobro čineći trpite pa strpljivo  podnosite, to je Bogu milo."},
	{21, "21 Ta na to ste pozvani jer i Krist je trpio za vas i ostavio  vam primjer da idete stopama njegovim."},
	{22, "22 On koji grijeha ne učini nit mu usta prijevaru izustiše;"},
	{23, "23 on koji na uvredu nije uvredom uzvraćao i mučen nije prijetio, prepuštajući to Sucu pravednom;"},
	{24, "24 on koji u tijelu svom grijehe naše ponese na drvo da umrijevši grijesima pravednosti živimo; on čijom se modricom izliječiste."},
	{25, "25 Doista, poput ovaca lutaste, ali se sada obratiste k pastiru i čuvaru duša svojih."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct hr3 poems[] = {
	{1, "1 Tako i vi, žene, pokoravajte se svojim muževima: ako su neki  od njih možda neposlušni Riječi, da i bez riječi budu pridobiveni  življenjem vas žena, "},
	{2, "2 pošto promotre vaše bogoljubno i čisto  življenje. "},
	{3, "3 Vaš nakit neka ne bude izvanjski - pletenje kose, kićenje zlatom ili oblačenje haljina. "},
	{4, "4 Nego: čovjek skrovita  srca, neprolazne ljepote, blaga i smirena duha. To je pred Bogom  dragocjeno. "},
	{5, "5 Tako su se doista i nekoć svete žene, zaufane  u Boga, resile: pokoravale su se muževima. "},
	{6, "6 Sara se tako pokori  Abrahamu te ga nazva gospodarom. Njezina ste djeca ako činite  dobro ne bojeći se nikakva zastrašivanja."},
	{7, "7 Tako i vi, muževi, obazrivo živite sa svojim ženama, kao  sa slabijim spolom, te im iskazujte čast kao subaštinicima milosti  Života da ne spriječite svojih molitava."},
	{8, "8 Napokon, budite svi jednodušni, puni suosjećanja i bratske  ljubavi, milosrdni, ponizni! "},
	{9, "9 Ne vraćajte zlo za zlo ni uvredu  za uvredu! Naprotiv, blagoslivljajte jer ste na to i pozvani  da baštinite blagoslov! "},
	{10, "10 Doista, tko želi ljubiti život i naužit se dana sretnih, nek suspregne jezik oda zla i usne od riječi prijevarnih; "},
	{11, "11 zla nek se kloni, a čini dobro, mir neka traži i za njim ide: "},
	{12, "12 jer oči Gospodnje gledaju pravedne, uši mu slušaju vapaje njihove, a lice se Gospodnje okreće protiv zločinaca."},
	{13, "13 Pa tko da vam naudi ako revnujete za dobro? "},
	{14, "14 Nego, morali i trpjeti zbog svoje pravednosti, blago vama! No ne  bojte se njihova zastrašivanja i ne plašite se! "},
	{15, "15 Naprotiv, Gospodin - Krist neka vam bude svet, u srcima  vašim, te budite uvijek spremni na odgovor svakomu koji od vas  zatraži obrazloženje nade koja je u vama, "},
	{16, "16 ali blago i s poštovanjem, dobre savjesti da oni koji ozloglašuju vaš dobar život u Kristu, upravo onim budu postiđeni za što vas potvaraju. "},
	{17, "17 Ta uspješnije  je trpjeti, ako je to Božja volja, čineći dobro, nego čineći  zlo. "},
	{18, "18 Doista, i Krist jednom za grijehe umrije, pravedan za nepravedne, da vas privede k Bogu - ubijen doduše u tijelu, ali oživljen u duhu."},
	{19, "19 U njemu otiđe i propovijedati duhovima u tamnici"},
	{20, "20 koji bijahu nekoć nepokorni, kad ih ono Božja strpljivost iščekivaše, u vrijeme Noino, dok se gradila korablja u kojoj nekolicina, to jest osam duša, bi spašena vodom."},
	{21, "21 Njezin protulik, krštenje - ne odlaganje tjelesne nečistoće, nego molitva za dobru savjest upravljena Bogu - i vas sada spasava po uskrsnuću Isusa Krista"},
	{22, "22 koji, uzašavši na nebo, jest zdesna Bogu, pošto mu bijahu pokoreni anđeli, vlasti i sile."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct hr4 poems[] = {
	{1, "1 Dakle, budući da je Krist trpio u tijelu, i vi se oboružajte  istim mišljenjem - jer tko trpi u tijelu okanio se grijeha - "},
	{2, "2 da vrijeme što vam u tijelu još preostaje proživite ne više  po ljudskim požudama nego po Božjoj volji. "},
	{3, "3 Dosta je uistinu  što ste u prošlom vremenu vršili volju pogana, hodeći u razvratnostima, požudama, pijančevanjima, pijankama, opijanjima i bezakoničkim  idolopoklonstvima. "},
	{4, "4 Stoga se čude što se ne slijevate u tu  istu rijeku raskalašenosti te proklinju. "},
	{5, "5 Polagat će oni račun  Onomu tko je već spreman suditi žive i mrtve. "},
	{6, "6 Zato je i mrtvima  naviješteno evanđelje da osuđeni doduše po ljudsku, u tijelu, žive po Božju - u duhu."},
	{7, "7 Približio se svršetak svega! Osvijestite se i otrijeznite  za molitvu! "},
	{8, "8 Prije svega imajte žarku ljubav jedni prema drugima  jer ljubav pokriva mnoštvo grijeha! "},
	{9, "9 Gostoljubivo primajte  jedni druge bez mrmljanja! "},
	{10, "10 Jedni druge poslužujte - svatko  po primljenom daru - kao dobri upravitelji različitih Božjih  milosti! "},
	{11, "11 Govori li tko? Neka govori kao riječi Božje! Poslužuje  li tko? Neka poslužuje kao snagom koju daje Bog da se u svemu  slavi Bog po Isusu Kristu, komu slava i vlast u vijeke vijekova!  Amen. "},
	{12, "12 Ljubljeni! Ne čudite se požaru što bukti među vama da  vas iskuša, kao da vam se događa štogod neobično! "},
	{13, "13 Naprotiv, radujte se kao zajedničari Kristovih patnja da i o Objavljenju  njegove slave mognete radosno klicati. "},
	{14, "14 Pogrđuju li vas zbog  imena Kristova, blago vama, jer Duh Slave, Duh Božji u vama počiva. "},
	{15, "15 Tek neka nitko od vas ne trpi kao ubojica, ili kradljivac, ili zločinac, ili makar i kao nametljivac; "},
	{16, "16 ako li kao kršćanin, neka se ne stidi, nego slavi Boga zbog tog imena. "},
	{17, "17 Ta vrijeme  je da započne Sud - od doma Božjega. No ako već od vas započinje, kakav je onda svršetak onih što nisu poslušni Božjem evanđelju? "},
	{18, "18 I ako se pravednik jedva spasava, opak i grešnik gdje da se pojavi?"},
	{19, "19 Stoga oni koji po volji Božjoj trpe, neka dobrim djelima  povjere duše svoje vjernom Stvoritelju."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct hr5 poems[] = {
	{1, "1 Starješine dakle među vama opominjem, ja sustarješina i svjedok  Kristovih patnja, a zato i zajedničar slave koja se ima očitovati: "},
	{2, "2 pasite povjereno vam stado Božje, nadgledajte ga - ne prisilno, nego dragovoljno, po Božju; ne radi prljava dobitka, nego oduševljeno; "},
	{3, "3 i ne kao gospodari Baštine nego kao uzori stada. "},
	{4, "4 Pa kad  se pojavi Natpastir, primit ćete neuveli vijenac slave."},
	{5, "5 Tako i vi, mladići, podložite se starješinama; svi se  jedni prema drugima pripašite poniznošću jer Bog se oholima protivi, a poniznima daruje milost."},
	{6, "6 Ponizite se dakle pod snažnom rukom Božjom da vas uzvisi u  pravo vrijeme."},
	{7, "7 Svu svoju brigu povjerite njemu jer on se brine za  vas. "},
	{8, "8 Otrijeznite se! Bdijte! Protivnik vaš, đavao, kao ričući  lav obilazi tražeći koga da proždre. "},
	{9, "9 Oprite mu se stameni  u vjeri znajući da takve iste patnje podnose vaša braća po svijetu. "},
	{10, "10 A Bog svake milosti, koji vas pozva na vječnu slavu u Kristu, on će vas, pošto malo potrpite, usavršiti, učvrstiti, ojačati, utvrditi."},
	{11, "11 Njemu vlast u vijeke vjekova! Amen."},
	{12, "12 Pišem vam ukratko, po Silvanu, koga smatram bratom vjernim, da vas ohrabrim i posvjedočim kako je ovo istinska milost Božja.  Nje se držite!"},
	{13, "13 Pozdravlja vas suizabranica u Babilonu i Marko, sin moj."},
	{14, "14 Pozdravite jedni druge cjelovom ljubavi! Mir svima vama koji ste u Kristu!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};