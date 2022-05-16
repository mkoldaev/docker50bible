#include <map>
#include <string>
class Bible35
{
	struct sv1	{ int val; const char *msg; };
	struct sv2	{ int val; const char *msg; };
	struct sv3	{ int val; const char *msg; };
public:
static void view1() {
struct sv1 poems[] = {
	{1, "1 Detta är den utsaga som uppenbarades för profeten Habackuk."},
	{2, "2 Huru länge, HERRE, skall jag ropa, utan att du hör klaga inför dig över våld, utan att du frälsar?"},
	{3, "3 Varför låter du mig se sådan ondska? Huru kan du själv skåda på sådan orättrådighet, på det fördärv och det våld jag har inför mina ögon? Så uppstår ju kiv, och så upphäva sig trätor."},
	{4, "4 Därigenom bliver lagen vanmäktig, och rätten kommer aldrig fram. Ty den ogudaktige snärjer den rättfärdige; så framstår rätten förvrängd."},
	{5, "5 Sen efter bland hedningarna och skåden; häpnen, ja, stån där med häpnad Ty en gärning utför han i edra dagar, som I icke skolen tro, när den förtäljes."},
	{6, "6 Ty se, jag skall uppväcka kaldéerna det bistra och oförvägna folket, som drager ut så vitt som jorden når och inkräktar boningar som icke äro deras."},
	{7, "7 Det folket är förskräckligt och fruktansvärt; rätt och myndighet tager det sig självt."},
	{8, "8 Dess hästar äro snabbare än pantrar och vildare än vargar om aftonen; dess ryttare jaga fram i fyrsprång. Ja, fjärran ifrån komma dess ryttare, de flyga åstad såsom örnen, när han störtar sig över sitt rov"},
	{9, "9 Alla hasta de till våld, av sin stridslust drivas de framåt; och fångar hopa de såsom sand."},
	{10, "10 Konungar äro dem ett åtlöje, och furstar räkna de för lekverk; åt alla slags fästen le de, de kasta upp jordvallar och intaga dem."},
	{11, "11 Så fara de åstad såsom vinden, alltjämt framåt till att åsamka sig skuld; ty deras egen kraft är deras gud."},
	{12, "12 Är du då icke till av ålder? Jo, HERRE, min Gud, min Helige, vi skola ej dö! HERRE, till en dom är det du har satt dem, och till en tuktan har du berett dem, du vår klippa."},
	{13, "13 Du vilkens ögon äro för rena för att se på det onda, du som icke lider att skåda på orättrådighet, huru kan du ändå skåda på dessa trolösa människor och tiga stilla, när den ogudaktige fördärvar den som har rätt mot honom?"},
	{14, "14 Så vållar du att människorna bliva lika fiskar i havet, lika kräldjur, som icke hava någon herre."},
	{15, "15 Ja, denne drager dem allasammans upp med sin krok, han fångar dem i sitt nät och församlar dem i sitt garn; däröver är han glad och fröjdar sig."},
	{16, "16 Fördenskull frambär han offer åt sitt nät och tänder offereld åt sitt garn; genom dem bliver ju hans andel så fet och hans mat så kräslig."},
	{17, "17 Men skall han därför framgent få tömma sitt nät och beständigt dräpa folken utan någon förskoning"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sv2 poems[] = {
	{1, "1 Jag vill stiga upp på min vaktpost och ställa mig på muren; jag vill speja för att se vad han skall tala genom mig, och vilket svar på mitt klagomål jag skall få att frambära."},
	{2, "2 Och HERREN svarade mig och sade: Skriv upp din syn, och uppteckna den på skrivtavlor, med tydlig skrift, så att den lätt kan läsas."},
	{3, "3 Ty ännu måste synen vänta på sin men den längtar efter fullbordan och skall icke slå fel. Om den dröjer, så förbida den, ty den kommer förvisso, den skall ej utebliva."},
	{4, "4 Se, uppblåst och orättrådig är dennes själ i honom; men den rättfärdige skall leva genom sin tro."},
	{5, "5 Ty såsom vinet icke är att lita på, så skall denne övermodige ej bestå, om han ock spärrar upp sitt gap såsom dödsriket och är omättlig såsom döden, om han ock har församlat till sig alla folk och hämtat tillhopa till sig alla folkslag."},
	{6, "6 Sannerligen, de skola allasammans stämma upp en visa över honom, ja, en smädesång om honom med välbetänkta ord; man skall säga: Ve dig som hopar vad som icke är ditt och belastar dig med utpantat gods -- men för huru länge!"},
	{7, "7 Sannerligen, oförtänkt skola borgenärer resa sig mot dig och anfäktare vakna upp mot dig, och du skall bliva ett byte för dem."},
	{8, "8 Såsom du själv har plundrat många folk, så skola ock alla andra folk få plundra dig, för dina blodsdåd mot människor och ditt våld mot länder, mot städer och alla som bo i dem."},
	{9, "9 Ve dig som söker orätt vinning åt ditt hus, för att kunna bygga ditt näste högt uppe och så skydda dig undan olyckans våld!"},
	{10, "10 Med dina rådslag drager du skam över ditt hus, i det att du gör ände på många folk och så syndar mot dig själv."},
	{11, "11 Ty stenarna i muren skola ropa, och bjälkarna i trävirket skola svara dem."},
	{12, "12 Ve dig som bygger upp städer med blodsdåd och befäster orter med orättfärdighet!"},
	{13, "13 Se, av HERREN Sebaot är det ju sagt: Så möda sig folken för det som skall förbrännas av elden- och folkslagen arbeta sig trötta för det som skall bliva till intet."},
	{14, "14 Ty jorden skall varda full av HERRENS härlighets kunskap, likasom havsdjupet är fyllt av vattnet."},
	{15, "15 Ve dig som iskänker vin åt din nästa och blandar ditt gift däri och berusar honom, för att få skåda hans blygd!"},
	{16, "16 Med skam skall du få mätta dig i stället för med ära. Ja, du skall också själv få dricka, till dess du ligger där med blottad förhud. Kalken skall i sin ordning räckas dig av HERRENS hand, och smälek skall hölja din ära."},
	{17, "17 Ty över dig skall komma en hemsökelse, lik Libanons, och en förhärjelse, lik den som skrämmer bort dess djur, för dina blodsdåd mot människor och ditt våld mot länder, mot städer och alla som bo i dem."},
	{18, "18 Vad kan ett skuret beläte hjälpa, eftersom en snidare vill slöjda sådant? Och vad ett gjutet beläte, en falsk vägvisare, eftersom dess formare så förtröstar därpå, att han gör sig stumma avgudar?"},
	{19, "19 Ve dig som säger till stocken: Vakna!, och till döda stenen: Vakna upp! Kan en sådan giva någon vägvisning? Visst är den överdragen med guld och silver, men alls ingen ande är däri."},
	{20, "20 Men HERREN är i sitt heliga tempel. Hela jorden vare stilla inför honom."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sv3 poems[] = {
	{1, "1 En bön av profeten Habackuk; till Sigjonót."},
	{2, "2 HERRE, jag har hört om dig och häpnat. HERRE, förnya i dessa år dina gärningar, låt oss förnimma dem i dessa år. Mitt i din vrede må du tänka på förbarmande."},
	{3, "3 Gud kommer från Teman, den helige från berget Paran.  Sela. Hans majestät övertäcker himmelen, och av hans lov är jorden full."},
	{4, "4 Då uppstår en glans såsom av solljus, strålar gå ut ifrån honom, och han höljer i dem sin makt."},
	{5, "5 Framför honom går pest, och feberglöd följer i hans spår."},
	{6, "6 Han träder fram -- därmed kommer han jorden att darra; en blick -- och han kommer folken att bäva. De uråldriga bergen splittras, de eviga höjderna sjunka ned. Han vandrar de vägar han fordom gick."},
	{7, "7 Jag ser Kusans hyddor hemsökta av fördärv; tälten darra i Midjans land."},
	{8, "8 Harmas då HERREN på strömmar? Ja, är din vrede upptänd mot strömmarna eller din förgrymmelse mot havet, eftersom du så färdas fram med dina hästar, med dina segerrika vagnar?"},
	{9, "9 Framtagen och blottad är din båge, ditt besvurna ords pilar.  Sela. Till strömfåror klyver du jorden."},
	{10, "10 Bergen se dig och bäva; såsom en störtskur far vattnet ned. Djupet låter höra sin röst, mot höjden lyfter det sina händer."},
	{11, "11 Sol och måne stanna i sin boning för skenet av dina farande pilar, för glansen av ditt blixtrande spjut."},
	{12, "12 I förgrymmelse går du fram över jorden, i vrede tröskar du sönder folken."},
	{13, "13 Du drager ut för att frälsa ditt folk, för att bereda frälsning åt din smorde. Du krossar taket på de ogudaktigas hus, du bryter ned huset, från grunden till tinnarna.  Sela."},
	{14, "14 Du genomborrar deras styresmans huvud med hans egna pilar, när de storma fram till att förskingra oss, under fröjd, såsom gällde det att i lönndom äta upp en betryckt."},
	{15, "15 Du far med dina hästar fram över havet, över de stora vattnens svall."},
	{16, "16 Jag hör det och darrar i mitt innersta, vid dånet skälva mina läppar; maktlöshet griper benen i min kropp, jag darrar på platsen där jag står. Ty jag måste ju stilla uthärda nödens tid, medan det kommer, som skall tränga folket."},
	{17, "17 Ja, fikonträdet blomstrar icke mer, och vinträden giva ingen skörd, olivträdets frukt slår fel och fälten alstra ingen äring, fåren ryckas bort ur fållorna, och inga oxar finnas mer i stallen."},
	{18, "18 Likväl vill jag glädja mig i HERREN och fröjda mig i min frälsnings Gud."},
	{19, "19 HERREN, Herren är min starkhet; han gör mina fötter såsom hindens och låter mig gå fram över mina höjder. För sångmästaren, med mitt strängaspel."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};