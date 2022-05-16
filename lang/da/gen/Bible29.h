#include <map>
#include <string>
class Bible29
{
	struct da1	{ int val; const char *msg; };
	struct da2	{ int val; const char *msg; };
	struct da3	{ int val; const char *msg; };
public:
static void view1() {
struct da1 poems[] = {
	{1, "1 Herrens Ord, som kom til Joel, Petuels søn."},
	{2, "2 Hør dette, I Ældste, lån Øre, alle, som bor i Landet! Er sligt mon sket i eders eller eders Fædres Dage?"},
	{3, "3 I skal fortælle det til eders Børn, og de igen til deres, og deles til næste Slægt."},
	{4, "4 Græshoppen åd, hvad Gnaveren levned, Springeren åd, hvad Græshoppen levned, Æderen åd, hvad Springeren levned."},
	{5, "5 Vågn op, I drukne, og græd; enhver, som drikker Vin, skal jamre over Most, der gik tabt for eders. Mund."},
	{6, "6 Thi et Folk drog op mod mit Land, vældigt og uden Tal; dets Tænder er Løvetænder, det har Kindtænder som en Løvinde."},
	{7, "7 Det lagde min Vinstok øde, knækked mit Figentræ, afbarked og hærgede det; dets Grene stritter hvide."},
	{8, "8 Klag som sørgeklædt Jomfru over sin Ungdoms Brudgom!"},
	{9, "9 Afgrødeoffer og Drikoffer gik tabt for HERRENs Hus; Præsterne, HERRENs Tjenere sørger."},
	{10, "10 Marken er ødelagt, Jorden sørger; thi Kornet er ødelagt, Mosten slog fejl og Olien hentørres."},
	{11, "11 Bønder skuffes og Vingårdsmænd jamrer både over Hveden og Byggen; thi Markens Høst gik tabt;"},
	{12, "12 fejl slog Vinstokken, Figentræet tørres; Granatæble, Palme og æbletræ, hvert Markens Træ tørres hen. Ja, med Skam veg Glæde fra Menneskens Børn:"},
	{13, "13 Sørg, I Præster i Sæk, I AIterets Tjenere, jamrer! Gå ind og bær Sæk i Nat, I, som tjener min Gud! Thi Afgrødeoffer og Drikofer unddrages eders Guds Hus."},
	{14, "14 Helliger en Faste, udråb festlig Samling, I Ældste, kald alle, som bor i Landet, sammen til HERREN eders Guds Hus og råb så til HERREN!"},
	{15, "15 Ak, hvilken Dag! Thi nær er HERRENs Dag, den kommer som Vold fra den Vældige."},
	{16, "16 Så vi ej Føden gå tabt, vor Guds Hus tømt for Glæde og Jubel?"},
	{17, "17 Sæden skrumper ind i den klumpede Jord; Lader er nedbrudt, Forrådshuse jævnet, thi Kornet er vissent."},
	{18, "18 Hvor Kvæget dog stønner! Oksernes Hjorde er skræmte, fordi de ikke har Græs; selv Småkvægets Hjorde lider."},
	{19, "19 Jeg råber til dig, o HERRE; thi Ild har fortæret Ørkenens Græsning, og Luen afsved hvert Markens Træ;"},
	{20, "20 til dig skriger selv Markens Dyr, thi Bækkenes Lejer er tørre, og Ild har fortæret Ørkenens Græsning."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct da2 poems[] = {
	{1, "1 Stød i horn på Zion, blæs alarm på mit hellige Bjerg! Alle i landet skal bæve, thi HERRENs Dag, den kommer;"},
	{2, "2 ja, nær er Mulms og Mørkes Dag, Skyers og Tåges Dag. Et stort, et vældigt Folk er bredt som Gry over Bjerge. Dets Lige har aldrig været, skal aldrig komme herefter til fjerneste Slægters År."},
	{3, "3 Foran det æder Ild, og bag det flammer Lue; foran det er Landet som Eden og bag det en øde Ørk; fra det slipper ingen bort."},
	{4, "4 At se til er de som Heste, som Hingste farer de frem;"},
	{5, "5 det lyder som raslende Vogne, når de hopper på Bjergenes Tinder, som knitrende Lue, der æder Strå, som en vældig Hær, der er rustet til Strid."},
	{6, "6 Folkeslag skælver for dem, alle Ansigter blusser."},
	{7, "7 Som Helte haster de frem, som Stridsmænd stormer de Mure; enhver går lige ud, de bøjer ej af fra vejen."},
	{8, "8 De trænger ikke hverandre, hver følger sin egen Sti. Trods Våbenmagt styrter de frem uden at lade sig standse, de kaster sig over Byen,"},
	{9, "9 stormer Mulen i Løb; i Husene trænger de ind, gennem Vinduer kommer de som Tyve."},
	{10, "10 Foran dem skælver Jorden, Himlen bæver; Sol og Måne sortner, Stjernerne mister deres Glans."},
	{11, "11 Foran sin Stridsmagt løfter HERREN sin Røst, thi såre stor er hans Hær, ja, hans Ords Fuldbyrder er vældig; thi stor er HERRENs Dag og såre frygtelig; hvem holder den ud?"},
	{12, "12 Selv nu, så lyder det fra HERREN, vend om til mig af ganske Hjerte, med Faste og Gråd og Klage!"},
	{13, "13 Sønderriv Hjerterne, ej eders Klæder, vend om til HERREN eders Gud! Thi nådig og barmhjertig er han, langmodig og rig på Miskundhed, han angrer det onde."},
	{14, "14 Måske slår han om og angrer og levner Velsignelse efter sig, Afgrødeoffer og Drikoffer til HERREN eders Gud."},
	{15, "15 Stød i Horn på Zion, helliger Faste, udråb festlig Samling,"},
	{16, "16 kald Folket sammen, helliger et Stævne, lad de gamle samles, kald Børnene sammen, også dem, som dier Bryst; lad Brudgom gå ud af sit Kammer, Brud af sit Telt!"},
	{17, "17 Imellem Forhal og Alter skal Præsterne, HERRENs Tjenere, græde og sige: 'HERRE, spar dog dit Folk! Overgiv ej din Arv til Skændsel, til Hedningers Spot! Hvi skal man sige blandt Folkene: Hvor er deres Gud?'"},
	{18, "18 Og HERREN blev nidkær for sit Land og fik Medynk med sit Folk."},
	{19, "19 Og HERREN svarede sit Folk: Se, jeg sender eder korn, Most og Olie, så I kan mættes deraf; og jeg vil ikke længer gøre eder til Skændsel iblandt Hedningerne."},
	{20, "20 Fjenden fra Nord driver jeg langt bort fra eder og støder ham ud i et tørt og øde Land, hans Fortrop ud i Havet i Øst og hans Bagtrop i Havet i Vest, og han skal udsprede Stank og ilde Lugt; thi han udførte store Ting."},
	{21, "21 Frygt ikke, Jord, fryd dig, vær glad! Thi HERREN har udført store Ting."},
	{22, "22 Frygt ikke, I Markens Dyr! Thi Ørkenens Græsmarker grønnes, og Træerne bærer Frugt; Figentræ og Vinstok giver alt, hvad de kan."},
	{23, "23 Og I, Zions Sønner, fryd eder, vær glade i HERREN eders Gud! Thi han giver eder Føde til Frelse, idet han sender eder Regn, Tidligregn og Sildigregn, som før."},
	{24, "24 Tærskepladserne skal fyldes med Korn, Persekummerne løbe over med Most og Olie."},
	{25, "25 Og jeg godtgør eder de År, da Græshoppen, Springeren, Æderen og Gnaveren hærgede, min store Hær, som jeg sendte imod eder."},
	{26, "26 I skal spise og mættes og love HERREN eders Guds Navn, fordi han handler underfuldt med eder; og mit Folk skal i Evighed ikke blive til Skamme."},
	{27, "27 Og I skal kende, at jeg er i Israels Midte, og at jeg, og ingen anden er HERREN eders Gud; og mit Folk skal i Evighed ikke blive til Skamme."},
	{28, "28 Og det skal ske derefter, at jeg vil udgyde min ånd over alt kød, eders Sønner og eders Døtre skal profetere, eders gamle skal drømme Drømme og eders unge skue Syner;"},
	{29, "29 også over Trælle og Trælkvinder vil jeg udgyde min Ånd i de Dage."},
	{30, "30 Og jeg lader ske Tegn på Himmelen og på Jorden, Blod, Ild og Røgstøtter."},
	{31, "31 Solen skal vendes til Mørke og Månen til Blod, før HERRENs store og frygtelige Dag kommer."},
	{32, "32 Men enhver, som påkalder HERRENs Navn, skal frelses; thi på Zions Bjerg og i Jerusalem skal der være Frelse, som HERREN har sagt; og til de undslupne skal hver den høre, som HERREN kalder."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct da3 poems[] = {
	{1, "1 Thi se, i de Dage og på den Tid, når jeg vender Judas og Jerusalems Skæbne,"},
	{2, "2 samler jeg alle Hedningefolk og fører dem ned i Josafats Dal. Der vil jeg holde Rettergang med dem om mit Folk og min Arvelod Israel, som de spredte blandt Folkene; og de delte mit Land,"},
	{3, "3 kastede Lod om mit Folk, gav en Dreng for en Skøge og solgte en Pige for Vin, som de drak."},
	{4, "4 Og desuden, hvad vil I mig, Tyrus og Zidon og alle Filisterlands Kredse? Er der noget, I vil gengælde mig, eller vil I gøre mig noget? Hastigt og brat lader jeg Gengældelse komme over eders Hoved,"},
	{5, "5 I, som tog mit Sølv og Guld, bortførte mine kostbareste Ting til eders Borge"},
	{6, "6 og solgte Judæerne og Jerusalems Borgere til Grækerne, for at de skulde føres langt bort fra deres Hjem."},
	{7, "7 Se, jeg vækker dem op fra det Sted, I solgte dem til, og lader Gengældelse komme over eders Hoved."},
	{8, "8 Jeg sælger eders Sønner og Døtre til Judæerne, og de skal sælge dem til Sabæerne, Folket i det fjerne Land, så sandt HERREN har talet."},
	{9, "9 Råb det ud blandt Folkene, helliger en Krig, væk Heltene op! Lad alle våbenføre Mænd komme og drage op!"},
	{10, "10 Smed eders Plovjern om til Sværd, eders Vingårdsknive til Spyd! Svæklingen skal sige: 'Jeg er en Helt!'"},
	{11, "11 Skynd eder og kom, alle Hedningefolk viden om, og saml eder! Før dine Helte derned, HERRE!"},
	{12, "12 Hedningefolkene skal vækkes op og drage til Josafats Dal; thi der vil jeg sidde til Doms over alle Hedningefolk viden om."},
	{13, "13 Sving Seglen, thi Høsten er moden; kom og stamp, thi Persekummen er fuld! Persekarrene løber over, thi stor er Folkenes Ondskab."},
	{14, "14 Skarer på Skarer i Opgørets Dal! Thi nær er HERRENs Dag i Opgørets Dal."},
	{15, "15 Sol og Måne sortner, og Stjernerne mister deres Glans."},
	{16, "16 HERREN brøler fra Zion, fra Jerusalem løfter han sin Røst; Himmelen og Jorden skælver. Men HERREN er Ly for sit Folk og Værn for Israels Børn."},
	{17, "17 Og I skal kende, at jeg er HERREN eders Gud, som bor på Zion, mit hellige Bjerg. Jerusalem skal blive en Helligdom, og fremmede skal ikke mere drage derigennem."},
	{18, "18 På hin Dag skal Bjergene dryppe af Most og Højene flyde med Mælk; alle Judas Bække skal strømme med Vand, og en kilde skal vælde frem fra HERRENs Hus og vande Akaciedalen."},
	{19, "19 Ægypten skal blive øde, Edom en øde Ørk for deres Vold mod Judæerne, i hvis Land de udgød uskyldigt Blod."},
	{20, "20 Og Juda skal være beboet evindelig, Jerusalem fra Slægt til Slægt."},
	{21, "21 Jeg hævner deres Blod, som jeg endnu ikke har hævnet; og HERREN bor på Zion."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};