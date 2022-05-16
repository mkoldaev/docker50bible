#include <map>
#include <string>
class Bible8
{
	struct da1	{ int val; const char *msg; };
	struct da2	{ int val; const char *msg; };
	struct da3	{ int val; const char *msg; };
	struct da4	{ int val; const char *msg; };
public:
static void view1() {
struct da1 poems[] = {
	{1, "1 I Dommernes Dage blev der engang Hungersnød i Landet. Da drog en Mand fra Betlehem i Juda til Moabiternes Land for at bo der som fremmed med sin Hustru og sine to Sønner."},
	{2, "2 Manden bed Elimelek, hans Hustru No'omi og hans to Sønner Malon og Hiljon, Efratiter fra Betlehem i Juda, og de kom til Moabiternes Land og opholdt sig der."},
	{3, "3 Så døde Elimelek, No'omis Mand, og hun sad tilbage med sine to Sønner."},
	{4, "4 De tog sig moabitiske Hustruer; den ene hed Orpa, den anden Rut. Men da de havde boet der en halv Snes År,"},
	{5, "5 døde også de to, Malon og Kiljon, så at Kvinden sad alene tilbage efter sine to Sønner og sin Mand."},
	{6, "6 Da brød hun op med sine Sønnekoner for at vende hjem fra Moabiternes Land; thi hun havde hørt i Moabiternes Land, at HERREN havde set til sit Folk og givet dem Brød."},
	{7, "7 Så drog hun sammen med sine to Sønnekoner bort fra det Sted, hvor hun havde opholdt sig, men på Hjemvejen til Judas Land"},
	{8, "8 sagde No'omi til sine to Sønnekoner: 'Vend nu tilbage hver til sin Moders Hus! HERREN være barmhjertig imod eder, som I har været imod de døde og mig;"},
	{9, "9 HERREN give eder, at I må finde Ro, hver i sin Mands Hus!' Og hun kyssede dem. Men de gav sig til at græde højt"},
	{10, "10 og sagde til hende: 'Nej! vi vil følge dig hjem til dit Folk!'"},
	{11, "11 Men No'omi sagde: 'Vend tilbage, mine Døtre! Hvorfor vil I drage med mig? Bærer jeg endnu Sønner i mit Skød, som kan blive eders Mænd?"},
	{12, "12 Vend tilbage, mine Døtre, gå nu hjem, thi jeg er for gammel til at blive en Mands Hustru. Og selv om jeg tænkte, at jeg endnu havde Håb, selv om jeg endnu i Nat tilhørte en Mand og virkelig fødte Sønner,"},
	{13, "13 skulde I så derfor vente, til de blev voksne? Skulde I derfor stænge eder inde og leve ugifte? Nej, mine Døtre, det gør mig såre ondt for eder, thi mig har HERRENs Hånd ramt!'"},
	{14, "14 De gav sig da igen til at græde højt, og Orpa kyssede sin Svigermoder, men Rut klyngede sig til hende."},
	{15, "15 Da sagde hun: 'Se, din Svigerinde er vendt tilbage til sit Folk og sin Gud; vend du også tilbage og følg din Svigerinde!'"},
	{16, "16 Men Rut svarede: 'Nød mig ikke til at forlade dig og vende tilbage! Nej, hvor du går hen, der vil jeg gå hen, og hvor du tager Bolig, der vil jeg tage Bolig; dit Folk skal være mit Folk, og din Gud skal være min Gud;"},
	{17, "17 hvor du dør, der vil jeg dø, og der vil jeg jordes. HERREN ramme mig både med det ene og det andet: Kun Døden skal skille os ad!'"},
	{18, "18 Da No'omi så, at det var hendes faste Vilje at drage med hende. holdt hun op at tale til hende derom,"},
	{19, "19 og de drog da videre sammen, indtil de kom til Betlehem. Men da de kom til Betlehem, blev der Røre i hele Byen, og Kvinderne sagde: 'Er det No'omi?'"},
	{20, "20 Men hun sagde til dem: 'Kald mig ikke No'omi; kald mig Mara', thi den Almægtige har voldet mig megen bitter Smerte!"},
	{21, "21 Rig drog jeg herfra, og fattig har HERREN ført mig tilbage. Hvorfor kalder I mig No'omi, når HERREN har vidnet imod mig og den Almægtige tilskikket mig Ulykke?'"},
	{22, "22 Således vendte No'omi tilbage fra Moabiternes Land tillige med sin Sønnekone, Moabiterinden Rut, og de kom til Betlehem først på Byghøsten."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct da2 poems[] = {
	{1, "1 No'omi havde en Slægtning på sin Mands Side, en formuende Mand af Elimeleks Slægt ved Navn Boaz."},
	{2, "2 En Dag sagde Moabiterinden Rut til No'omi: 'Jeg vil gå ud i Marken og sanke Aks efter den, for hvis Øjne jeg finder Nåde.' Hun svarede hende: 'Ja, gør det, min Datter!'"},
	{3, "3 Så gik hun hen og sankede Aks på Marken efter Høstfolkene; og det traf sig, at Marken tilhørte Boaz, som var af Elimeleks Slægt."},
	{4, "4 Boaz kom just gående fra Betlehem; han sagde da til Høstfolkene: 'HERREN være med eder!' Og de svarede: 'HERREN velsigne dig!'"},
	{5, "5 Derpå sagde Boaz til den Karl, som havde Opsyn med Høstfolkene: 'Hvor hører denne unge Kvinde hjemme?'"},
	{6, "6 Karlen, som havde Opsyn med Høstfolkene, svarede: 'Det er en moabitisk Pige; det er hende, som fulgte med No'omi tilbage fra Moab;"},
	{7, "7 hun sagde: Lad mig få Lov at sanke og samle Aks blandt Negene efter Høstfolkene! Så kom hun og har holdt ud lige fra i Morges tidlig til nu uden at unde sig et Øjebliks Hvile.'"},
	{8, "8 Da sagde Boaz til Rut: 'Hør, min Datter! Du skal ikke gå hen og sanke Aks på nogen anden Mark! Nej, gå ikke herfra, men hold dig til mine Piger her;"},
	{9, "9 hold Øje med, hvor de høster på Marken, og gå bag efter. Jeg har pålagt Karlene, at de ikke må fortrædige dig; og bliver du tørstig, kan du gå hen til Karrene og drikke af det, Karlene øser op!'"},
	{10, "10 Da faldt hun på sit Ansigt, bøjede sig til Jorden og sagde til ham: 'Hvorledes har jeg fundet Nåde for dine Øjne, så du viser mig Velvilje, skønt jeg er fremmed?'"},
	{11, "11 Boaz svarede hende: 'Man har fortalt mig alt, hvad du har været for din Svigermoder efter din Mands Død, hvorledes du forlod din Fader og din Moder og dit Fædreland for at drage til et Folk, du ikke tidligere kendte;"},
	{12, "12 HERREN gengælde dig, hvad du har gjort, og din Løn blive rigelig fra HERREN, Israels Gud, under hvis Vinger du kom og søgte Ly!'"},
	{13, "13 Hun sagde: 'Så har jeg da fundet Nåde for dine Øjne, Herre, siden du har trøstet mig og talt venligt til din Trælkvinde, skønt jeg ikke er så meget som en af dine Trælkvinder!'"},
	{14, "14 Ved Spisetid sagde Boaz til hende: 'Kom herhen og spis med og dyp din Bid i Eddiken!' Så satte hun sig hos Høstfolkene, og han rakte hende så meget ristet Korn, at hun kunde spise sig mæt og endda levne."},
	{15, "15 Da hun rejste sig for at sanke Aks, bød Boaz sine Karle: 'Lad hende også sanke mellem Negene og fornærm hende ikke;"},
	{16, "16 I kan også trække nogle Aks ud af Knipperne til hende og lade dem ligge, så hun kan sanke dem op, og I må ikke skænde på hende!'"},
	{17, "17 Så sankede hun Aks på Marken lige til Aften; og da hun tærskede, hvad hun havde sanket, var det omtrent en Efa Byg."},
	{18, "18 Derpå tog hun det og gik til Byen, og hendes Svigermoder så, hvad hun havde sanket; og Rut tog og gav hende, hvad hun havde levnet efter at have spist sig mæt."},
	{19, "19 Da sagde hendes Svigermoder til hende: 'Hvor har du sanket Aks i Dag, hvor har du været? Velsignet være han, der viste dig Velvilje!' Så fortalte hun sin Svigermoder, hvem hun havde været hos, og sagde: 'Den Mand, jeg var hos i Dag, hedder Boaz!'"},
	{20, "20 Da sagde No'omi til sin Sønnekone: 'HERREN, som ikke har unddraget de levende og døde sin Miskundhed, velsigne ham!' Og No'omi sagde fremdeles til hende: 'Den Mand er en nær Slægtning af os; han er en af vore Løsere.'"},
	{21, "21 Moabiterinden Rut sagde: 'Han sagde også til mig: Hold dig kun til mine Folk, indtil de er helt færdige med min Høst!'"},
	{22, "22 Da sagde No'omi til sin Sønnekone: 'Du gør ret, min Datter. i at følge med hans Piger, at man ikke skal volde dig Men på en anden Mark!'"},
	{23, "23 Så holdt hun sig til Boazs Piger og sankede Aks der, indtil Byghøsten og Hvedehøsten var til Ende; og hun blev boende hos sin Svigermoder."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct da3 poems[] = {
	{1, "1 Men hendes Svigermoder No'omi sagde til hende: 'Min Datter, skal jeg ikke søge at skaffe dig et Hjem, hvor du kan få det godt?"},
	{2, "2 Nu vel! Boaz, hvis Piger du var sammen med, er vor Slægtning; se, han kaster i Nat Byg på Tærskepladsen;"},
	{3, "3 tvæt dig nu og salv dig, tag dine Klæder på og gå ned på Tærskepladsen; men lad ikke Manden mærke noget til dig, før han er færdig med at spise og drikke;"},
	{4, "4 når han da lægger sig, mærk dig så Stedet, hvor han lægger sig, og gå hen og løft Kappen op ved hans Fødder og læg dig der, så skal han nok sige dig, hvad du skal gøre!'"},
	{5, "5 Hun svarede: 'Jeg vil gøre alt. hvad du siger!'"},
	{6, "6 Så gik hun ned på Tærskepladsen og gjorde alt, hvad hendes Svigermoder havde pålagt hende."},
	{7, "7 Da Boaz havde spist og drukket og var vel tilpas, gik han hen og lagde sig ved Korndyngen; så gik hun sagte hen og løftede Kappen op ved hans Fødder og lagde sig der."},
	{8, "8 Ved Midnatstide blev Manden opskræmt og bøjede sig frem, og se, da lå der en Kvinde ved hans Fødder."},
	{9, "9 Da sagde han: 'Hvem er du?' Og hun svarede: 'Jeg er Rut, din Trælkvinde! Bred Fligen af din Kappe ud over din Trælkvinde; thi du er Løser!'"},
	{10, "10 Da sagde han: 'HERREN velsigne dig, min Datter! Den Godhed, du nu sidst har udvist, overgår den, du før udviste, at du nu ikke er gået efter de unge Mænd, hverken fattige eller rige!'"},
	{11, "11 Så frygt nu ikke, min Datter! Alt, hvad du siger, vil jeg gøre imod dig; thi enhver i mit Folks Port ved, at du er en dygtig Kvinde."},
	{12, "12 Det er rigtigt. at jeg er din Løser, men der er en anden, som er nærmere end jeg."},
	{13, "13 Bliv nu her i Nat; og hvis han i Morgen vil løse dig, godt, så lad ham gøre det; men er han uvillig til at løse dig, gør jeg det, så sandt HERREN lever. Bliv kun liggende, til det bliver Morgen!'"},
	{14, "14 Så blev hun liggende ved hans Fødder til Morgen; men hun stod op, før det ene Menneske endnu kunde kende det andet, thi han tænkte: 'Det må ikke rygtes, at en Kvinde er kommet ud på Tærskepladsen!'"},
	{15, "15 Derpå sagde han: 'Tag og hold det Klæde frem, du har over dig!' Og da hun holdt det frem, afmålte han seks Mål Byg og lagde det på hende. Så gik hun ind i Byen."},
	{16, "16 Da hun kom til sin Svigermoder, sagde denne: 'Hvorledes gik det, min datter?' Så fortalte hun hende alt, hvad Manden havde gjort imod hende,"},
	{17, "17 og sagde; 'Disse seks Mål Byg gav han mig med de Ord: Du skal ikke komme tomhændet til din Svigermoder!'"},
	{18, "18 Da sagde hun: 'Hold dig nu rolig, min Datter, indtil du får at vide, hvilket Udfald Sagen får; thi den Mand under sig ikke Ro, før han får Sagen afgjort endnu i Dag!'"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct da4 poems[] = {
	{1, "1 Boaz var imidlertid gået op til Byporten og havde sat sig der. Og se, den Løser, Boaz havde talt om, kom netop forbi. Da tiltalte han ham og sagde: 'Kom og sæt dig her!' Da den anden kom og satte sig,"},
	{2, "2 fik han fat i ti af Byens Ældste og sagde: 'Sæt eder her!' Og de satte sig der."},
	{3, "3 Da sagde han til Løseren: 'Den Marklod, som tilhørte vor Slægtning Elimelek, vil No'omi, der er kommet tilbage fra Moab, sælge."},
	{4, "4 Derfor tænkte jeg, at jeg vilde lade dig det vide og sige: Køb den i Overværelse af dem, der sidder her, og mit Folks Ældste! Vil du løse den, så gør det; men vil du ikke, så sig til, at jeg kan vide det; thi der er ingen anden til at løse end du og derefter jeg selv!' Han svarede: 'Jeg vil løse den!'"},
	{5, "5 Da sagde Boaz: 'Men samtidig med at du køber Marken af No'omi, køber du også Moabiterinden Rut, den afdødes Enke, for at rejse den afdødes Navn over hans Arvelod!'"},
	{6, "6 Da svarede Løseren: 'Så kan jeg ikke blive Løser, da jeg derved vilde skade min egen Arvelod. Løs du, hvad jeg skulde løse, thi jeg kan ikke!'"},
	{7, "7 Nu havde man i gamle Dage i Israel den Skik til Stadfæstelse af Løsning og Byttehandel, at man trak sin Sko af og gav den anden Part den; således blev en Sag vidnefast i Israel."},
	{8, "8 Idet nu Løseren sagde til Boaz: 'Køb du den!' trak han derfor sin Sko af."},
	{9, "9 Da sagde Boaz til de Ældste og alle dem, der var til Stede: 'I er i Dag Vidner på, at jeg køber alt, hvad der tilhørte Elimelek, og alt, hvad der tilhørte Kiljon og Malon, af No'omi;"},
	{10, "10 og tillige køber jeg mig Moabiterinden Rut, Malons Enke, til Hustru for at rejse den afdødes Navn over hans Arvelod, at den afdødes Navn ikke skal udslettes blandt hans Brødre og fra hans Hjemstavns Port; I er Vidner i Dag!'"},
	{11, "11 Da sagde alle Folkene, som var i Byporten, og de Ældste: 'Vi er Vidner! HERREN lade den Kvinde, der nu drager ind i dit Hus, blive som Rakel og Lea, de to, der byggede Israels Hus. Bliv mægtig i Efrata, og dit Navn vorde priset i Betlehem!"},
	{12, "12 Måtte dit Hus blive som Perezs Hus, ham, Tamar fødte Juda, ved de Efterkommere, HERREN giver dig af denne unge Kvinde!'"},
	{13, "13 Så ægtede Boaz Rut, og hun blev hans Hustru; og da han gik ind til hende, lod HERREN hende blive frugtsommelig, og hun fødte en Søn."},
	{14, "14 Da sagde Kvinderne til No'omi: 'Lovet være HERREN, som ikke lod dig uden Løser i Dag, og hans Navn skal prises i Israel."},
	{15, "15 Han blive din Trøster og Forsørger i din Alderdom; thi din Sønnekone, som viste dig Kærlighed, har født ham, hun, som er dig mere værd end syv Sønner!'"},
	{16, "16 Da tog No'omi Barnet i sin Favn, og hun blev dets Fostermoder."},
	{17, "17 Og Naboerskerne gav ham Navn, idet de sagde: 'No'omi har fået en Søn!' Og de kaldte ham Obed. Han blev Fader til Davids Fader Isaj."},
	{18, "18 Dette er Perezs Slægtebog: Perez avlede Hezron,"},
	{19, "19 Hezron avlede Ram, Ram avlede Amminadab,"},
	{20, "20 Amminadab avlede Nahasjon, Nahasjon avlede Salmon,"},
	{21, "21 Salmon avlede Boaz, Boaz avlede Obed,"},
	{22, "22 Obed avlede Isaj, og Isaj avlede David."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};