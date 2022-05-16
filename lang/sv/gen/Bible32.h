#include <map>
#include <string>
class Bible32
{
	struct sv1	{ int val; const char *msg; };
	struct sv2	{ int val; const char *msg; };
	struct sv3	{ int val; const char *msg; };
	struct sv4	{ int val; const char *msg; };
public:
static void view1() {
struct sv1 poems[] = {
	{1, "1 Och HERRENS ord kom till Jona, Amittais son; han sade:"},
	{2, "2 Stå upp och begiv dig till Nineve, den stora staden, och predika för den; ty deras ondska har kommit upp inför mitt ansikte."},
	{3, "3 Men Jona stod upp och ville fly till Tarsis, undan HERRENS ansikte.  Och han for ned till Jafo och fann där ett skepp som skulle gå till Tarsis.  Och sedan han hade erlagt betalning för resan, steg han ombord därpå för att fara med till Tarsis, undan HERRENS ansikte."},
	{4, "4 Men HERREN sände en stark vind ut över havet, så att en stark storm uppstod på havet; och skeppet var nära att krossas."},
	{5, "5 Då betogos sjömännen av fruktan och ropade var och en till sin gud; och vad löst som fanns i skeppet kastade de i havet för att bereda sig lättnad.  Men Jona hade gått ned i det inre av fartyget och låg där i djup sömn."},
	{6, "6 Då gick skepparen till honom och sade till honom: Huru kan du sova så?  Stå upp och åkalla din Gud.  Kanhända skall den Guden tänka på oss, så att vi icke förgås."},
	{7, "7 Och folket sade till varandra: Välan, låt oss kasta lott, så att vi få veta för vems skull denna olycka har kommit över oss. När de så kastade lott, föll lotten på Jona."},
	{8, "8 Då sade de till honom: Säg oss för vems skull denna olycka har kommit över oss.  Vad är ditt ärende, och varifrån kommer du? Från vilket land och av vad folk är du?"},
	{9, "9 Han svarade den; Jag är en hebré, och jag dyrkar HERREN, himmelens Gud, som har gjort havet och det torra."},
	{10, "10 Då betogos männen av stor fruktan och sade till honom: Vad är det du har gjort!  Ty männen fingo genom det han berättade dem veta att han flydde undan HERRENS ansikte."},
	{11, "11 Och de sade till honom: Vad skola vi göra med dig, så att havet stillar sig för oss?  Ty havet stormade mer och mer."},
	{12, "12 Då svarade han dem: Tagen mig och kasten mig i havet, så skall havet stillas för eder; ty jag vet att det är för min skull som denna starka storm har kommit över eder."},
	{13, "13 Och männen strävade med all makt att komma tillbaka till land, men de kunde icke; ty havet stormade mer och mer emot dem."},
	{14, "14 Då ropade de till HERREN och sade: Ack HERRE, låt oss icke förgås för denne mans själs skull, och låt icke oskyldigt blod komma över oss.  Ty du, HERRE, har gjort såsom dig täckes."},
	{15, "15 Därefter togo de Jona och kastade honom i havet.  Då lade sig havets raseri."},
	{16, "16 Och männen betogos av stor fruktan för HERREN, och de offrade slaktoffer åt HERREN och gjorde löften."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sv2 poems[] = {
	{1, "1 Men HERREN sände en stor fisk, som slukade upp Jona.  Och Jona var i fiskens buk tre dagar och tre nätter."},
	{2, "2 Och Jona bad till HERREN, sin Gud, i fiskens buk."},
	{3, "3 Han sade: Jag åkallade HERREN i min nöd, och han svarade mig; från dödsrikets buk ropade jag, och du hörde min röst."},
	{4, "4 Du kastade mig i djupet, mitt i havet, och strömmen omslöt mig, alla dina svallande böljor gingo över mig."},
	{5, "5 Jag tänkte då: 'Jag är bortdriven ifrån dina ögon.' Men jag skall åter få skåda upp mot ditt heliga tempel."},
	{6, "6 Vatten omvärvde mig in på livet, djupet omslöt mig; sjögräs omsnärjde mitt huvud."},
	{7, "7 Till bergens grund sjönk jag ned, jordens bommar slöto sig bakom mig för evigt. Men du förde min själ upp ur graven, HERRE, min Gud."},
	{8, "8 När min själ försmäktade i mig, då tänkte jag på HERREN, och min bön kom till dig, i ditt heliga tempel."},
	{9, "9 De som hålla sig till fåfängliga avgudar, de låta sin nåds Gud fara."},
	{10, "10 Men jag vill offra åt dig, med högljudd tacksägelse; vad jag har lovat vill jag infria; frälsningen är hos HERREN!"},
	{11, "11 Och på HERRENS befallning kastade fisken upp Jona på land."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sv3 poems[] = {
	{1, "1 Och HERRENS ord kom för andra gången till Jona; han sade:"},
	{2, "2 Stå upp och begiv dig till Nineve, den stora staden, och predika för den vad jag skall tala till dig."},
	{3, "3 Då stod Jona upp och begav sig till Nineve, såsom HERREN hade befallt.  Men Nineve var en stor stad inför Gud, tre dagsresor lång."},
	{4, "4 Och Jona begav sig på väg in i staden, en dagsresa, och predikade och sade: Det dröjer ännu fyrtio dagar, så skall Nineve bliva omstörtat."},
	{5, "5 Då trodde folket i Nineve på Gud, och lyste ut en fasta och klädde sig i sorgdräkt, både stora och små."},
	{6, "6 Och när saken kom för konungen i Nineve, stod han upp från sin tron och lade av sin mantel och höljde sig i sorgdräkt och satte sig i aska."},
	{7, "7 Sedan utropade och förkunnade man i Nineve, enligt konungens och hans stores påbud, och sade: Ingen människa må smaka något, icke heller något djur, vare sig av fäkreaturen eller småboskapen; de må icke föras i bet, ej heller vattnas."},
	{8, "8 Och både människor och djur skola hölja sig i sorgdräkt och ropa till Gud med all makt.  Och var och en må vända om från sin onda väg och från den orätt som han har haft för händer."},
	{9, "9 Vem vet, kanhända vänder Gud då om och ångrar sig och vänder sig ifrån sin vredes glöd, så att vi icke förgås."},
	{10, "10 Då nu Gud såg vad de gjorde, att de vände om från sin onda väg, ångrade han det onda som han hade hotat att göra mot dem, och han gjorde icke så."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sv4 poems[] = {
	{1, "1 Men detta förtröt Jona högeligen, och hans vrede upptändes."},
	{2, "2 Och han bad till HERREN och sade: Ack Herre, var det icke detta jag tänkte, när jag ännu var i mitt land!  Därför ville jag ock i förväg fly undan till Tarsis.  Jag visste ju att du är en nådig och barmhärtig Gud, långmodig och stor i mildhet, och sådan att du ångrar det onda."},
	{3, "3 Så tag nu, Herre, mitt liv ifrån mig; ty jag vill hellre vara död än leva."},
	{4, "4 Men HERREN sade: Menar du att du har skäl till att vredgas?"},
	{5, "5 Och Jona gick ut ur staden och stannade öster om staden; där gjorde han sig en hydda och satt i skuggan därunder, för att se huru det skulle gå med staden."},
	{6, "6 Och HERREN Gud lät en ricinbuske skjuta upp över Jona, för att den skulle giva skugga åt hans huvud och hjälpa honom ur hans förtrytelse; och Jona gladde sig högeligen över ricinbusken."},
	{7, "7 Men dagen därefter, när morgonrodnaden gick upp, sände Gud maskar som frätte ricinbusken, så att den vissnade."},
	{8, "8 När sedan solen hade gått upp, sände Gud en brännande östanvind, och solen stack Jona på huvudet, så att han försmäktade.  Då önskade han sig döden och sade: Jag vill hellre vara död än leva."},
	{9, "9 Men Gud sade till Jona: Menar du att du har skäl till att vredgas för ricinbuskens skull?  Han svarade: Jag må väl hava skäl att vredgas till döds."},
	{10, "10 Då sade HERREN: Du ömkar dig över ricinbusken, som du icke har haft någon möda med och icke har dragit upp, som kom till på en natt och förgicks efter en natt."},
	{11, "11 Och jag skulle icke ömka mig över Nineve, den stora staden, där mer än ett hundra tjugu tusen människor finnas, som icke förstå att skilja mellan höger och vänster, och därtill djur i myckenhet!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};