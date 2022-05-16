#include <map>
#include <string>
class Bible39
{
	struct sv1	{ int val; const char *msg; };
	struct sv2	{ int val; const char *msg; };
	struct sv3	{ int val; const char *msg; };
	struct sv4	{ int val; const char *msg; };
public:
static void view1() {
struct sv1 poems[] = {
	{1, "1 Detta är en utsaga, som innehåller HERRENS ord till Israel genom Malaki."},
	{2, "2 Jag har bevisat eder kärlek, säger HERREN.  Nu frågen I: Varmed har du då bevisat oss kärlek? Esau var ju en broder till Jakob, säger HERREN, och jag älskade Jakob,"},
	{3, "3 men Esau hatade jag; därför gjorde jag hans berg till en ödemark och hans arvedel till ett hemvist för öknens schakaler."},
	{4, "4 Om nu Edom säger: Ja, vi äro förstörda, men vi skola åter bygga upp det ödelagda, så svarar HERREN Sebaot: Väl må de bygga upp, men jag skall åter riva det ned, och så skall man få kalla det 'ogudaktighetens land' och 'det folk, på vilket HERREN evinnerligen vredgas'."},
	{5, "5 I skolen få se det med egna ögon, och då skolen I säga: 'HERREN är stor utöver Israels gränser.'"},
	{6, "6 En son skall hedra sin fader och en tjänare sin herre.  Om nu jag är fader, var är då den heder, som skulle visas mig?  Och om jag är en herre, var är då den fruktan, som man skulle hava för mig?  -- så säger HERREN Sebaot till eder, I präster, som förakten mitt namn.  Nu frågen I: Varmed hava vi då visat förakt för ditt namn?"},
	{7, "7 Jo, därmed att I bären fram ovärdig spis på mitt altare.  Åter frågen I: På vad sätt hava vi betett oss ovärdigt mot dig? Jo, i det att I tänken: HERRENS bord behöver man icke mycket akta."},
	{8, "8 När i fören fram ett offerdjur, som är blint, då räknen I sådant icke för ont; när I fören fram ett som är lytt eller svagt, då räknen I ej heller sådant för ont.  Kom med något sådant till din ståthållare, så får du se, om han tager gunstigt emot dig och bliver dig bevågen, säger HERREN Sebaot."},
	{9, "9 Bönfallen alltså nu inför Gud, att han må bliva oss nådig.  Kan han väl vara eder bevågen, då I haven begått sådant?  säger HERREN Sebaot."},
	{10, "10 Ack att bland eder funnes någon som ville stänga tempeldörrarna, så att I icke längre förgäves upptänden eder eld på mitt altare! Jag har icke behag till eder, säger HERREN Sebaot, och till offergåvor av eder hand har jag icke lust."},
	{11, "11 Från solens uppgång ända till dess nedgång är ju mitt namn stort bland folken, och överallt frambäras rökoffer och rena offergåvor åt mitt namn; ja, mitt namn är stort bland folken, säger HERREN Sebaot."},
	{12, "12 Men I ohelgen det, i det att I sägen: Herrens bord kan man gärna försumma, och den spis, som gives därtill, behöver man icke mycket akta."},
	{13, "13 Ja, I sägen: Icke är det mödan värt!, och så handhaven I det vanvördigt, säger HERREN Sebaot. När I alltså frambären eder offergåva, då fören I fram, vad som är rövat och vad som är lytt och svagt.  Skulle jag hava behag till sådana gåvor av eder hand?  säger HERREN."},
	{14, "14 Nej, förbannad vare den bedragare, som i sin hjord har ett djur av hankön, men ändå, när han har gjort ett löfte, offrar åt Herren ett djur, som icke duger.  Ty jag är en stor konung, säger HERREN Sebaot, och mitt namn är fruktansvärt bland folken."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sv2 poems[] = {
	{1, "1 Därför kommer nu följande bud till eder, I präster."},
	{2, "2 Om I icke hörsammen det och akten därpå, så att I given mitt namn ära, säger HERREN Sebaot, så skall jag sända förbannelse över eder och förbanna edra välsignelser; ja, jag har redan förbannat dem, eftersom I icke akten därpå."},
	{3, "3 Se, jag skall låta min näpst drabba eder avkomma, och jag skall kasta orenlighet i ansiktet på eder, orenligheten efter edra högtidsoffer; ja, I skolen själva bliva kastade i denna."},
	{4, "4 Då skolen I förstå, att jag har sänt till eder detta bud, för att mitt förbund med Levi skall bestå, säger HERREN Sebaot."},
	{5, "5 Jag hade ett förbund med honom, och däri var liv och frid. Sådant gav jag åt honom, för att han skulle frukta mig; och han fruktade mig och bävade för mitt namn."},
	{6, "6 Rätt undervisning var i hans mun, och ingen orätt fanns på hans läppar; fridsamt och redligt vandrade han i min umgängelse och omvände många från missgärning."},
	{7, "7 Ty prästens läppar skola förvara kunskap, och undervisning skall man hämta ur hans mun; han är ju HERREN Sebaots sändebud."},
	{8, "8 Men I haven vikit av ifrån vägen; genom eder undervisning haven I kommit många på fall.  I haven fördärvat förbundet med Levi, säger HERREN Sebaot."},
	{9, "9 Därför har ock jag gjort eder föraktade och låga i allt folkets ögon, eftersom I icke hållen mina vägar, utan haven anseende till personen, när I handhaven undervisningen."},
	{10, "10 Hava vi icke alla en och samma fader?  Har icke en och samma Gud skapat oss?  Varför handla vi då trolöst mot varandra och bryta våra fäders förbund?"},
	{11, "11 Juda har handlat trolöst, och styggelse är bedriven i Israel och i Jerusalem; ty Juda har oskärat HERRENS helgedom, den som han älskar, och de hava tagit till äkta kvinnor, som dyrka främmande gudar."},
	{12, "12 Hos den man som så gör må HERREN utrota var levande själ ur Jakobs hyddor, jämväl den som frambär offergåvor till HERREN Sebaot."},
	{13, "13 Och ännu något annat gören I: I vållen, att HERRENS altare höljes med tårar, med gråt och klagan, så att han icke mer vill se till offergåvorna, ej heller med välbehag kan taga emot något ur eder hand."},
	{14, "14 Nu frågen I: Huru så?  Jo, HERREN var ju vittne mellan dig och din ungdoms hustru, henne som du nu har varit trolös emot, fastän hon är din maka, din äkta hustru."},
	{15, "15 Hava vi då icke en och samma skapare, den, i vilkens hand det står, att vår ande bevaras?  Och vad vill nu denne ene?  Han vill ju hava ett gudaktigt släkte.  Tagen eder därför väl till vara, så att ingen bliver trolös mot sin ungdoms hustru."},
	{16, "16 Ty jag hatar äktenskapsskillnad, säger HERREN, Israels Gud, och att man höljer sig i våld såsom i en överklädnad, säger HERREN Sebaot.  Tagen eder därför väl till vara, så att I icke bliven trolösa."},
	{17, "17 I trötten ut HERREN med edert tal.  Nu frågen I: Varmed trötta vi då ut honom?  Jo, därmed att I sägen: Den som gör ont är ändå god i HERRENS ögon, och till sådana har han behag.  Ty varför kommer icke eljest domens Gud?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sv3 poems[] = {
	{1, "1 Se, jag skall sända ut min ängel, och han skall bereda väg för mig. Och med hast skall han komma till sitt tempel, den Herre, som I åstunden, ja, förbundets ängel, som I begären, se, han kommer, säger HERREN Sebaot."},
	{2, "2 Men vem kan uthärda hans tillkommelses dag, och vem kan bestå, när han uppenbarar sig? Ty han skall vara såsom en guldsmeds eld och såsom valkares såpa."},
	{3, "3 Och han skall sätta sig ned och smälta silvret och rena det; han skall rena Levi söner och luttra dem såsom guld och silver; och sedan skola de frambära åt HERREN offergåvor i rättfärdighet."},
	{4, "4 Och Juda offergåvor och Jerusalems skola då behaga HERREN väl likasom i forna dagar och i förgångna år."},
	{5, "5 Ja, jag skall komma till eder för att hålla dom, och jag skall vara ett snarfärdigt vittne mot trollkarlar, äktenskapsbrytare och menedare, så ock mot dem som förhålla dagakarlen hans lön eller förtrycka änkan och den faderlöse eller vränga rätten för främlingen, men icke frukta mig, säger HERREN Sebaot."},
	{6, "6 Ty jag, HERREN, har icke förändrats, och I, Jakobs barn, haven icke heller hört upp:"},
	{7, "7 allt ifrån edra fäders dagar haven I vikit av ifrån mina stadgar och icke hållit dem Vänden om till mig, så vill jag vända om till eder, säger HERREN Sebaot.  Nu frågen I: Varutinnan skola vi vända om?"},
	{8, "8 Menen I då, att en människa får röva från Gud?  Ty I röven ju från mig.  Åter frågen I: På vad sätt hava vi rövat från dig? Jo, i fråga om tionden och offergärden."},
	{9, "9 Förbannelse har drabbat eder, men ändå röven I från mig, så många I ären."},
	{10, "10 Fören full tionde till förrådshuset, så att i mitt hus finnes mat, och pröven så, hurudan jag sedan bliver, säger HERREN Sebaot.  Förvisso skall jag då öppna himmelens fönster över eder och utgjuta över eder riklig välsignelse."},
	{11, "11 Och jag skall näpsa gräshopporna för eder, så att de icke mer fördärva eder frukt på marken; ej heller skola edra vinträd mer slå fel på fältet, säger HERREN Sebaot."},
	{12, "12 Och alla folk skola prisa eder sälla, ty edert land skall då vara ljuvligt, säger HERREN Sebaot."},
	{13, "13 I haven talat hårda ord mot mig, säger HERREN.  Nu frågen I: Vad hava vi då med varandra talat mot dig?"},
	{14, "14 I haven sagt: Det är fåfängt att tjäna Gud.  Eller vad vinning hava vi därav att vi hålla, vad han har bjudit oss hålla, och därav att vi gå i sorgdräkt inför HERREN Sebaot?"},
	{15, "15 Nej, de fräcka vilja vi nu prisa sälla; ty de som göra, vad ogudaktigt är, bliva upprättade, de gå fria, huru de än fresta Gud."},
	{16, "16 Men därunder hava också de som frukta HERREN talat med varandra; och HERREN har aktat på dem och hört dem, och en minnesbok har blivit skriven inför hans ansikte till åminnelse av dessa som frukta HERREN och tänka på hans namn."},
	{17, "17 Och dessa, säger HERREN Sebaot, skall jag hava såsom min egendom på den dag, då jag utför mitt verk; och jag skall skona dem, såsom en fader skonar sin son, som tjänar honom."},
	{18, "18 Och I skolen då åter få se, vilken skillnad det är mellan den rättfärdige och den ogudaktige, mellan den som tjänar Gud och den som icke tjänar honom."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sv4 poems[] = {
	{1, "1 Ty se, dagen kommer, och den skall brinna såsom en ugn.  Då skola alla fräcka människor och alla som göra, vad ogudaktigt är, bliva lika strå, och dagen, den som kommer, skall förbränna dem, säger HERREN Sebaot, så att varken rot eller krona lämnas kvar av dem."},
	{2, "2 Men för eder, I som frukten mitt namn, skall rättfärdighetens sol gå upp med läkedom under sina vingar.  Då skolen I slippa ut och hoppa såsom kalvar, som hava varit instängda i stallet."},
	{3, "3 Och de ogudaktiga skolen I trampa ned, ty de skola bliva såsom aska under edra fötter på den dag, då jag utför mitt verk, säger HERREN Sebaot."},
	{4, "4 Tänken på Moses lag, min tjänares, åt vilken jag på Horeb gav stadgar och rätter för hela Israel."},
	{5, "5 Se, jag skall sända till eder profeten Elia, förrän HERRENS stora och fruktansvärda dag kommer."},
	{6, "6 Och han skall vända fädernas hjärtan till barnen och barnens hjärtan till deras fäder, för att jag icke, när jag kommer, skall slå landet med tillspillogivning."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};