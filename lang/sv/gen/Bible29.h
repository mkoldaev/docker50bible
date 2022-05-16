#include <map>
#include <string>
class Bible29
{
	struct sv1	{ int val; const char *msg; };
	struct sv2	{ int val; const char *msg; };
	struct sv3	{ int val; const char *msg; };
public:
static void view1() {
struct sv1 poems[] = {
	{1, "1 Detta är HERRENS ord som kom till Joel, Petuels son."},
	{2, "2 Hören detta, I gamle, och lyssnen härtill, I landets alla inbyggare. Har något sådant skett förut i edra dagar eller i edra fäders dagar?"},
	{3, "3 Nej, om detta mån I förtälja för edra barn, och edra barn må förtälja därom för sina barn, och deras barn för ett kommande släkte."},
	{4, "4 Vad som blev kvar efter gräsgnagarna, det åto gräshopporna upp; och vad som blev kvar efter gräshopporna, det åto gräsbitarna upp; och vad som blev kvar efter gräsbitarna det åto gräsfrätarna upp."},
	{5, "5 Vaknen upp, I druckne, och gråten; ja, jämren eder, alla I som dricken vin, över att druvsaften är ryckt undan eder mun."},
	{6, "6 Ty ett folk har dragit upp över mitt land, ett mäktigt, ett som ingen kan räkna; det har tänder likasom lejon, och dess kindtänder likna lejoninnors."},
	{7, "7 Mina vinträd har det förött, och mina fikonträd har det brutit ned det har skalat dem nakna och kastat dem undan; vitnade äro deras rankor."},
	{8, "8 Klaga likasom en jungfru som bär sorgdräkt efter sin ungdoms brudgum"},
	{9, "9 Spisoffer och drickoffer äro försvunna ifrån HERRENS hus; prästerna sörja, HERRENS tjänare."},
	{10, "10 Fälten äro förödda, marken ligger sörjande, ty säden är förödd, vinet borttorkat, oljan utsinad."},
	{11, "11 Åkermännen stå med skam, vingårdsmännen jämra sig, över vetet och över kornet; ty skörden på marken är förstörd."},
	{12, "12 Vinträden äro förtorkade och fikonträden försmäkta; granatträden och palmerna och äppelträden och alla andra träd på marken hava torkat bort. Ja, all fröjd har vissnat och flytt ifrån människors barn."},
	{13, "13 Kläden eder i sorgdräkt och klagen, I präster; jämren eder, I som tjänen vid altaret; gån in och sitten i sorgdräkt natten igenom, I min Guds tjänare, eftersom eder Gud hus måste sakna spisoffer och drickoffer"},
	{14, "14 Pålysen en helig fasta, lysen ut en högtidsförsamling; församlen de gamla, ja, alla landets inbyggare, till HERRENS, eder Guds, hus; och ropen så till HERREN."},
	{15, "15 Ve oss, vilken dag! ty HERRENS dag är nära, och såsom våld från den Allsvåldige kommer den."},
	{16, "16 Har icke vår bärgning blivit förstörd mitt för våra ögon? har icke glädje och fröjd försvunnit ifrån var Guds hus?"},
	{17, "17 Utsädet ligger förtorkat under mullen, förrådshusen stå öde, ladorna få förfalla, ty säden är borttorkad."},
	{18, "18 Huru stönar icke boskapen! Huru ängslas ej fäkreaturens hjordar! De finna ju intet bete. Ja, också fårhjordarna få lida under skulden."},
	{19, "19 Till dig, HERRE, ropar jag, nu då en eld har förtärt betesmarkerna i öknen och en eldslåga har förbränt alla träd på marken."},
	{20, "20 Ja, också markens djur ropa med trängtan till dig, eftersom vattenbäckarna äro uttorkade och betesmarkerna i öknen äro förtärda av eld."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sv2 poems[] = {
	{1, "1 Stöten i basun på Sion, och blåsen larmsignal på mitt heliga berg; må alla landets inbyggare darra! Ty HERRENS dag kommer, ja, den är nära;"},
	{2, "2 en dag av mörker och tjocka, en dag av moln och töcken, lik en gryning som breder ut sig över bergen. Ett stort och mäktigt folk kommer, ett vars like aldrig någonsin har funnits och ej heller hädanefter skall uppstå, intill senaste släktens år."},
	{3, "3 Framför dem går en förtärande eld och bakom dem kommer en förbrännande låga. Likt Edens lustgård var landet framför dem, men bakom dem är det en öde öken; ja, undan dem finnes ingen räddning."},
	{4, "4 De te sig likasom hästar, och såsom stridshästar hasta de åstad."},
	{5, "5 Med ett rassel likasom av vagnar spränga de fram över bergens toppar, med ett brus såsom av en eldslåga, när den förtär strå; de äro såsom ett mäktigt folk, ordnat till strid."},
	{6, "6 Vid deras åsyn gripas folken av ångest, alla ansikten skifta färg."},
	{7, "7 Såsom hjältar hasta de åstad, lika stridsmän bestiga de murarna; var och en går sin väg rakt fram, och ingen tager miste om sin stråt."},
	{8, "8 Den ene tränger icke den andre, var och en går sin givna bana; mitt igenom vapnen störta de fram utan hejd."},
	{9, "9 I staden rusa de in på murarna hasta de åstad, i husen tränga de upp, genom fönstren bryta de sig väg, såsom tjuvar göra."},
	{10, "10 Vid deras åsyn darrar jorden, och himmelen bävar; solen och månen förmörkas, och stjärnorna mista sitt sken."},
	{11, "11 Och HERREN låter höra sin röst framför sin här ty hans skara är mycket stor, mäktig är den skara som utför hans befallning. Ja, HERRENS dag är stor och mycket fruktansvärd vem kan uthärda den?"},
	{12, "12 Dock, nu mån I vända om till mig av allt edert hjärta, säger HERREN, med fasta och gråt och klagan."},
	{13, "13 Ja, riven sönder edra hjärtan, icke edra kläder, och vänden om till HERREN, eder Gud; ty nådig och barmhärtig är han, långmodig och stor i mildhet, och sådan att han ångrar det onda."},
	{14, "14 Måhända vänder han om och ångrar sig och lämnar kvar efter sig någon välsignelse, till spisoffer och drickoffer åt HERREN, eder Gud."},
	{15, "15 Stöten i basun på Sion, pålysen en helig fasta lysen ut en högtidsförsamling;"},
	{16, "16 församlen folket, pålysen en helig sammankomst, kallen tillhopa de gamla församlen de små barnen, jämväl dem som ännu dia vid bröstet brudgummen må komma ur sin kammare och bruden ur sitt gemak."},
	{17, "17 Mellan förhuset och altaret må prästerna, HERRENS tjänare, hålla klagogråt och säga: HERRE, skona ditt folk, och låt icke din arvedel bliva till smälek, till ett ordspråk bland hedningarna Varför skulle man få säga bland folken: 'Var är nu deras Gud?'"},
	{18, "18 Så upptändes då HERREN till nitälskan för sitt land, och han ömkade sig över sitt folk;"},
	{19, "19 HERREN svarade och sade till sitt folk: Se, jag vill sända eder säd och vin och olja, så att I fån mätta eder därav, och jag skall icke mer låta eder bliva till smälek bland hedningarna."},
	{20, "20 Och nordlandsskaran skall jag förjaga långt bort ifrån eder, jag skall driva den undan till ett torrt och öde Land, dess förtrupp till Östra havet och dess eftertrupp till Västra havet.  Och stank skall stiga upp därav, ja, vämjelig lukt skall stiga upp därav, eftersom den har tagit sig för så stora ting."},
	{21, "21 Frukta icke, du land, utan fröjda dig och gläds, ty stora ting har HERREN tagit sig för"},
	{22, "22 Frukten icke, I markens djur, ty betesmarkerna i öknen grönska, och träden bära sin frukt, fikonträden och vinträden giva sin kraft."},
	{23, "23 Och fröjden eder, I Sions barn, varen glada i HERREN, eder Gud; ty han giver eder höstregn, i rätt tid, han som ock förr sände ned över eder regn, både höst och vår."},
	{24, "24 Så skola logarna fyllas mod säd och pressarna flöda över av vin och olja."},
	{25, "25 Och jag skall giva eder gottgörelse för de årsgrödor som åtos upp av gräshopporna, gräsbitarna, gräsätarna och gräsgnagarna, den stora här som jag sände ut mot eder."},
	{26, "26 Och I skolen få äta till fyllest och bliva mätta; och då skolen I lova HERRENS, eder Guds, namn, hans som har handlat så underbart med eder; och mitt folk skall icke komma på skam evinnerligen."},
	{27, "27 Och I skolen förnimma att jag bor mitt i Israel, och att jag är HERREN, eder Gud, och eljest ingen.  Ja, mitt folk skall icke komma på skam evinnerligen."},
	{28, "28 Och det skall ske därefter att jag skall utgjuta min Ande över allt kött, och edra söner och edra döttrar skola profetera, edra gamla män skola hava drömmar edra ynglingar skola se syner;"},
	{29, "29 också över dem som äro tjänare och tjänarinnor skall jag i de dagarna utgjuta min Ande."},
	{30, "30 Och jag skall låta tecken synas på himmelen och på jorden: blod och eld och rökstoder."},
	{31, "31 Solen skall vändas i mörker och månen i blod förrän HERRENS dag kommer, den stora och fruktansvärda."},
	{32, "32 Men det skall ske att var och en som åkallar HERRENS namn han skall varda frälst. Ty på Sions berg och i Jerusalem skall finnas en räddad skara, såsom HERREN har sagt; och till de undsluppna skola höra de som HERREN kallar."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sv3 poems[] = {
	{1, "1 Ty se, i de dagarna och på den tiden, då jag åter upprättar Juda och Jerusalem,"},
	{2, "2 då skall jag samla tillhopa alla hednafolk och föra dem ned till Josafats dal, och där skall jag hålla dom över dem, för mitt folks och min arvedels, Israels, skull, därför att de hava förskingrat dem bland hedningarna och utskiftat mitt land."},
	{3, "3 Ja, de hava kastat lott om mitt folk, gossarna hava de givit såsom betalning åt skökor, och flickorna hava de sålt för vin, som de hava druckit upp."},
	{4, "4 Och du, Tyrus, och du, Sidon, och I, Filisteens alla kretsar, vad förehaven också I mot mig?  Haven I något att vedergälla mig för, eller är det I som viljen begynna något mot mig?  Snart och med hast skall jag låta det I haven gjort komma tillbaka över edra egna huvuden,"},
	{5, "5 eftersom I haven tagit mitt silver och mitt guld och fört mina skönaste klenoder in i edra palats,"},
	{6, "6 och eftersom I haven sålt Judas och Jerusalems barn åt Javans barn, till att föras långt bort ifrån sitt land."},
	{7, "7 Se, jag skall kalla dem åter från den ort dit I haven sålt dem; och det som I haven gjort skall jag låta komma tillbaka över edra egna huvuden."},
	{8, "8 Jag skall sälja edra söner och döttrar i Juda barns hand, och de skola sälja dem till sabéerna, folket i fjärran land.  Ty så har HERREN talat."},
	{9, "9 Ropen ut detta bland hednafolken, båden upp dem till helig strid. Manen på hjältarna, må alla stridsmännen komma och draga framåt."},
	{10, "10 Smiden edra plogbillar till svärd och edra vingårdsknivar till spjut; den svagaste må känna sig såsom en hjälte."},
	{11, "11 Skynden att komma, alla I folk har omkring, och samlen eder tillhopa. Sänd, o HERRE, ditned dina hjältar."},
	{12, "12 Ja, må hednafolken resa sig och draga åstad till Josafats dal; ty där skall jag sitta till doms över alla folk häromkring."},
	{13, "13 Låten lien gå, ty skörden är mogen. Kommen och trampen, ty pressen är full; presskaren flöda över, så stor är ondskan där."},
	{14, "14 Skaror hopa sig i Domens dal; ty HERRENS dag är nära i Domens dal."},
	{15, "15 Solen och månen förmörkas, och stjärnorna mista sitt sken."},
	{16, "16 Och HERREN upphäver ett rytande från Sion, och från Jerusalem låter han höra sin röst, så att himmelen och jorden bäva. Men för sitt folk är HERREN en tillflykt och för Israels barn ett värn."},
	{17, "17 Och I skolen förnimma att jag är HERREN, eder Gud, som bor på Sion, mitt heliga berg. Och Jerusalem skall vara en helgad plats och främlingar skola icke mer draga ditin."},
	{18, "18 På den tiden skall det ske att bergen drypa av druvsaft och höjderna flöda av mjölk; och alla bäckar i Juda skola flöda av vatten. Och en källa skall rinna upp i HERRENS hus och vattna Akaciedalen."},
	{19, "19 Men Egypten skall bliva en ödemark, och Edom skall varda en öde öken därför att de hava övat våld mot Juda barn och utgjutit oskyldigt blod i sitt land."},
	{20, "20 Sedan skall Juda trona evinnerligen, och Jerusalem från släkte till släkte."},
	{21, "21 Och jag skall utplåna deras blodskulder, dem som jag icke allaredan har utplånat. Och HERREN skall förbliva boende på Sion."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};