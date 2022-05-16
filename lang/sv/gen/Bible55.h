#include <map>
#include <string>
class Bible55
{
	struct sv1	{ int val; const char *msg; };
	struct sv2	{ int val; const char *msg; };
	struct sv3	{ int val; const char *msg; };
	struct sv4	{ int val; const char *msg; };
public:
static void view1() {
struct sv1 poems[] = {
	{1, "1 Paulus, genom Guds vilja Kristi Jesu apostel -- sänd enligt det löfte som gavs oss om liv, livet i Kristus Jesus --"},
	{2, "2 hälsar Timoteus, sin älskade son.  Nåd, barmhärtighet och frid ifrån Gud, Fadern, och Kristus Jesus, vår Herre!"},
	{3, "3 Jag tackar Gud, som jag i likhet med mina förfäder tjänar, och det med rent samvete, såsom jag ock oavlåtligen har dig i åtanke i mina böner, både natt och dag."},
	{4, "4 Och när jag kommer ihåg dina tårar, längtar jag efter att se dig, för att så bliva uppfylld av glädje,"},
	{5, "5 då jag erinras om din oskrymtade tro, samma tro som förut bodde i din mormoder Lois och din moder Eunice, och som nu -- därom är jag förvissad -- jämväl bor i dig."},
	{6, "6 Fördenskull påminner jag dig att du må uppliva den nådegåva från Gud, som i följd av min handpåläggning finnes i dig."},
	{7, "7 Ty Gud har icke givit oss en försagdbetens ande, utan en kraftens och kärlekens och tuktighetens ande."},
	{8, "8 Blygs därför icke för vittnesbördet om vår Herre, ej heller för mig, hans fånge, utan bär också du ditt lidande för evangelium, genom den kraft som Gud giver,"},
	{9, "9 han som har frälst oss och kallat oss med en helig kallelse, icke på grund av våra gärningar, utan efter sitt eget rådslut och sin nåd, den nåd som redan för evärdliga tider sedan gavs oss i Kristus Jesus,"},
	{10, "10 men som nu har blivit uppenbar genom vår Frälsares, Kristi Jesu, uppenbarelse.  Ty han har gjort dödens makt om intet och fört liv och oförgänglighet fram i ljuset genom evangelium,"},
	{11, "11 till vars förkunnare och apostel och lärare jag har blivit satt."},
	{12, "12 Fördenskull lider jag också detta, men jag blyges dock icke därför.  Ty jag vet på vem jag tror, och jag är viss om att han är mäktig att för den dagen bevara vad som har blivit mig betrott."},
	{13, "13 Såsom förebild i fråga om sunda ord må du, i tron och kärleken i Kristus Jesus, hava de ord som du har hört av mig."},
	{14, "14 Bevara genom den helige Ande, vilken bor i oss, det goda som har blivit dig betrott."},
	{15, "15 Det vet du, att alla i provinsen Asien hava vänt sig ifrån mig, bland dem också Fygelus och Hermogenes."},
	{16, "16 Må Herren visa barmhärtighet mot Onesiforus' hus, eftersom han ofta var mig till vederkvickelse och icke blygdes för mina kedjor;"},
	{17, "17 fastmer, när han kom till Rom, sökte han efter mig med all iver, till dess han fann mig."},
	{18, "18 Ja, Herren give att han må finna barmhärtighet hos Herren på den dagen.  Till huru stor tjänst han var i Efesus, det vet du själv bäst."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sv2 poems[] = {
	{1, "1 Så bliv nu du, min son, allt starkare i den nåd som är i Kristus Jesus."},
	{2, "2 Och vad du har hört av mig och fått betygat av många vittnen, det må du betro åt män som äro förtroende värda, och som kunna bliva skickliga att i sin ordning undervisa andra."},
	{3, "3 Bär ock du ditt lidande såsom en god Kristi Jesu stridsman."},
	{4, "4 Ingen som tjänar i krig låter sig insnärjas i näringsomsorger, ty han vill vara den till behag, som har tagit honom i sin sold."},
	{5, "5 Likaså, om någon deltager i en tävlingskamp, så vinner han icke segerkransen, ifall han icke kämpar efter stadgad ordning."},
	{6, "6 Åkermannen, han som gör arbetet, bör främst av alla få njuta av frukten."},
	{7, "7 Fatta rätt vad jag säger; Herren skall giva dig förstånd i allt."},
	{8, "8 Tänk på Jesus Kristus, som är uppstånden från de döda, av Davids säd, enligt det evangelium som jag förkunnar,"},
	{9, "9 och i vars tjänst jag jämväl utstår lidande, ja, till och med måste bära bojor såsom en ogärningsman.  Men Guds ord bär icke bojor."},
	{10, "10 Därför uthärdar jag ståndaktigt allting för de utvaldas skull, på det att också de må vinna frälsningen i Kristus Jesus och därmed evig härlighet."},
	{11, "11 Detta är ett fast ord; ty hava vi dött med honom, så skola vi ock leva med honom;"},
	{12, "12 äro vi ståndaktiga, så skola vi ock få regera med honom Men förneka vi honom, så skall ock han förneka oss;"},
	{13, "13 äro vi trolösa, så står han troget fast vid sitt ord Ty han kan icke förneka sig själv."},
	{14, "14 Påminn dem om detta, och uppmana dem allvarligt inför Gud att icke befatta sig med ordstrider; ty sådana gagna till intet, utan äro allenast till fördärv för dem som höra därpå."},
	{15, "15 Sträva med all flit efter att själv kunna träda fram inför Gud såsom en som håller provet, en arbetare som icke behöver blygas, utan rätt förvaltar sanningens ord."},
	{16, "16 Men undfly oandligt och tomt prat.  Ty de som befatta sig med sådant komma att gå allt längre i ogudaktighet,"},
	{17, "17 och deras tal skall fräta omkring sig såsom ett kräftsår.  Av det slaget äro Hymeneus och Filetus;"},
	{18, "18 ty när dessa säga att uppståndelsen redan har skett, hava de farit vilse från sanningen, och de förvända så tron hos somliga."},
	{19, "19 Dock, Guds fasta grundval förbliver beståndande och har ett insegel med dessa ord: Herren känner de sina, och: Var och en som åkallar Herrens namn, han vände sig bort ifrån orättfärdighet."},
	{20, "20 Men i ett stort hus finnas kärl icke allenast av guld och silver, utan ock av trä och lera; och somliga äro till hedersamt bruk, andra till mindre hedersamt."},
	{21, "21 Om nu någon håller sig ren och obesmittad av sådant folk, då bliver han ett kärl till hedersamt bruk, helgat, gagneligt för sin herre, tjänligt till allt vad gott är."},
	{22, "22 Fly ungdomens onda begärelser, och far efter rättfärdighet, tro och kärlek, och frid med dem som av rent hjärta åkalla Herren."},
	{23, "23 Men undvik dåraktiga och barnsliga tvistefrågor; du vet ju att de föda av sig strider."},
	{24, "24 Och en Herrens tjänare bör icke strida, utan vara mild mot alla, väl skickad att undervisa, tålig när han får lida."},
	{25, "25 Han bör med saktmod tillrättavisa de motspänstiga, i hopp att Gud till äventyrs skall förläna dem bättring, så att de komma till kunskap om sanningen,"},
	{26, "26 och i hopp att de så skola bliva nyktra och därigenom befrias ur djävulens snara; ty av honom äro de fångade, så att de göra hans vilja"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sv3 poems[] = {
	{1, "1 Men det må du veta, att i de yttersta dagarna svåra tider skola komma."},
	{2, "2 Ty människorna skola då vara själviska, penningkära, stortaliga, övermodiga, smädelystna, olydiga mot sina föräldrar, otacksamma, gudlösa,"},
	{3, "3 kärlekslösa mot sina närmaste, trolösa, begivna på förtal, omåttliga, tygellösa, fientliga mot det goda,"},
	{4, "4 förrädiska, besinningslösa, förblindade av högmod; de skola älska vällust mer än Gud,"},
	{5, "5 de skola hava ett sken av gudsfruktan, men skola icke vilja veta av dess kraft. Vänd dig bort ifrån sådana."},
	{6, "6 Ty till dem höra de män som innästla sig i husen och fånga svaga kvinnor, som äro tyngda av synder och drivas av allahanda begärelser,"},
	{7, "7 kvinnor som alltjämt hålla på med att lära, men aldrig kunna komma till kunskap om sanningen."},
	{8, "8 Och såsom Jannes och Jambres stodo emot Moses, så stå dessa män emot sanningen; de äro människor som äro fördärvade i sitt sinne och icke hålla provet i fråga om tron."},
	{9, "9 Men de skola icke tillstädjas att gå längre, ty deras galenskap skall bliva uppenbar för alla, såsom det skedde med de männens."},
	{10, "10 Du åter har blivit min efterföljare lära, i vandel, i strävanden, i tro, tålamod, i kärlek, i ståndaktighet,"},
	{11, "11 under förföljelser och lidanden, sådana som drabbade mig i Antiokia, Ikonium och Lystra.  Ja, sådana förföljelser har jag fått utstå, men ur alla har Herren frälst mig."},
	{12, "12 Så skola ock alla de, som vilja leva gudfruktigt i Kristus Jesus, få lida förföljelse."},
	{13, "13 Men onda människor och bedragare skola gå allt längre i ondska; de skola förvilla andra och själva bliva förvillade."},
	{14, "14 Men förbliv du vid det som du har lärt, och som du har fått visshet om.  Du vet ju av vilka du har lärt det,"},
	{15, "15 och du känner från barndomen de heliga skrifter som kunna giva dig vishet, så att du bliver frälst genom den tro du har i Kristus Jesus."},
	{16, "16 All skrift som är ingiven av Gud är ock nyttig till undervisning, till bestraffning, till upprättelse, till fostran i rättfärdighet,"},
	{17, "17 så att en gudsmänniska kan bliva fullt färdig, väl skickad till allt gott verk."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sv4 poems[] = {
	{1, "1 Jag uppmanar dig allvarligt inför Gud och Kristus Jesus, inför honom som skall döma levande och döda, jag uppmanar dig vid hans tillkommelse och hans rike:"},
	{2, "2 Predika ordet, träd upp i tid och otid, bestraffa tillrättavisa, förmana med allt tålamod och med undervisning i alla stycken."},
	{3, "3 Ty den tid kommer, då de icke längre skola fördraga den sunda läran, utan efter sina egna begärelser skola samla åt sig lärare hoptals, alltefter som det kliar dem i öronen,"},
	{4, "4 en tid då de skola vända sina öron från sanningen, och i stället vända sig till fabler."},
	{5, "5 Men du, var nykter i allting, bär ditt lidande, utför en evangelists verk, fullgör i allo vad som tillhör ditt ämbete."},
	{6, "6 Ty själv är jag nu på väg att offras, och tiden är inne, då jag skall bryta upp."},
	{7, "7 Jag har kämpat den goda kampen, jag har fullbordat mitt lopp, jag har bevarat tron."},
	{8, "8 Nu ligger rättfärdighetens segerkrans tillreds åt mig, och Herren, den rättfärdige domaren, skall giva den åt mig på den dagen, och icke åt mig allenast, utan åt alla som hava älskat hans tillkommelse."},
	{9, "9 Låt dig angeläget vara att snart komma till mig."},
	{10, "10 Ty av kärlek till denna tidsålders väsende har Demas övergivit mig och har begivit sig till Tessalonika; Krescens har begivit sig till Galatien och Titus till Dalmatien."},
	{11, "11 Lukas är den ende som är kvar hos mig. Tag Markus med dig hit; ty han kan i mycket vara mig till gagn och tjäna mig."},
	{12, "12 Tykikus har jag sänt till Efesus."},
	{13, "13 När du kommer, så hav med dig den mantel som jag lämnade kvar hos Karpus i Troas, så ock böckerna, först och främst pergamentskrifterna."},
	{14, "14 Alexander, smeden, har gjort mig mycket ont; Herren kommer att vedergälla honom efter hans gärningar."},
	{15, "15 Också du må taga dig till vara för honom, ty han har häftigt trätt upp emot det som vi hava talat."},
	{16, "16 Vid mitt första försvar inför rätta kom ingen mig till hjälp, utan alla övergåvo mig; må det icke bliva dem tillräknat."},
	{17, "17 Men Herren stod mig bi och gav mig kraft, för att genom mig ordet överallt skulle bliva predikat, så att alla hedningar finge höra det; och så blev jag räddad ur lejonets gap."},
	{18, "18 Ja, Herren skall rädda mig från alla ondskans tilltag och frälsa mig till sitt himmelska rike.  Honom tillhör äran i evigheternas evigheter.  Amen."},
	{19, "19 Hälsa Priska och Akvila, så ock Onesiforus' hus."},
	{20, "20 Erastus stannade kvar i Korint, men Trofimus lämnade jag sjuk efter mig i Miletus."},
	{21, "21 Låt dig angeläget vara att komma hit före vintern. Eubulus och Pudens och Linus och Klaudia och alla bröderna hälsa dig."},
	{22, "22 Herren vare med din ande.  Nåd vare med eder."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};