#include <map>
#include <string>
class Bible60
{
	struct pl1	{ int val; const char *msg; };
	struct pl2	{ int val; const char *msg; };
	struct pl3	{ int val; const char *msg; };
	struct pl4	{ int val; const char *msg; };
	struct pl5	{ int val; const char *msg; };
public:
static void view1() {
struct pl1 poems[] = {
	{1, "1 Piotr, Apostoł Jezusa Chrystusa, przychodniom rozproszonym w Poncie, w Galacyi, w Kapadocyi, w Azji i w Bitynii;"},
	{2, "2 Wybranym według przejrzenia Boga Ojca przez poświęcenie Ducha, ku posłuszeństwu i pokropieniu krwi Jezusa Chrystusa. Łaska wam i pokój niech będzie rozmnożony."},
	{3, "3 Błogosławiony niech będzie Bóg i Ojciec Pana naszego, Jezusa Chrystusa, który według wielkiego miłosierdzia swego odrodził nas ku nadziei żywej przez zmartwychwstanie Jezusa Chrystusa od umarłych,"},
	{4, "4 Ku dziedzictwu nieskazitelnemu i niepokalanemu, i niezwiędłemu, w niebiesiech dla was zachowanemu,"},
	{5, "5 Którzy mocą Bożą strzeżeni bywacie przez wiarę ku zbawieniu, które zgotowane jest, aby było objawione czasu ostatecznego."},
	{6, "6 W czem weselicie się teraz maluczko, (jeźliże potrzeba) zasmuceni w rozmaitych pokusach,"},
	{7, "7 Aby doświadczenie wiary waszej daleko droższe niż złoto, które ginie, którego jednak przez ogień doświadczają, znalezione było wam ku chwale i ku czci, i ku sławie w objawienie Jezusa Chrystusa,"},
	{8, "8 Którego nie widziawszy, miłujecie, którego teraz nie widząc, wszakże weń wierząc, weselicie się radością niewymowną i chwalebną,"},
	{9, "9 Odnosząc koniec wiary waszej: zbawienie dusz."},
	{10, "10 O którem zbawieniu wywiadywali się i badali się prorocy, którzy o tej łasce, która na was przyjść miała, prorokowali."},
	{11, "11 Badając się, na który albo na jaki czas objawiał Duch Chrystusowy, który w nich był, świadcząc pierwej o utrapieniach, które miały przyjść na Chrystusa i o wielkiej za tem chwale."},
	{12, "12 Którym objawione jest, iż nie samym sobie, ale nam tem usługiwali, co wam teraz zwiastowano przez tych, którzy wam kazali Ewangieliję przez Ducha Świętego z nieba zesłanego, na które rzeczy pragną patrzyć Aniołowie."},
	{13, "13 Przetoż przepasawszy biodra myśli waszej i trzeźwymi będąc, doskonałą miejcie nadzieję ku tej łasce, która wam dana będzie w objawienie Jezusa Chrystusa,"},
	{14, "14 Jako synowie posłuszni, którzy się nie przypodobywacie przeszłym w nieumiejętności waszej pożądliwościom;"},
	{15, "15 Ale jako ten, który was powołał, święty jest, i wy bądźcie świętymi we wszelkiem obcowaniu,"},
	{16, "16 Dlatego że napisano: Świętymi bądźcie, iżem Ja jest święty."},
	{17, "17 A ponieważ Ojcem nazywacie tego, który bez braku osób każdego sądzi według uczynku, patrzcież, abyście w bojaźni czas pielgrzymowania waszego trawili,"},
	{18, "18 Wiedząc, iż nie skazitelnemi rzeczami, srebrem albo złotem, wykupieni jesteście od marnego obcowania waszego, od ojców podanego."},
	{19, "19 Ale drogą krwią, jako baranka niewinnego i niepokalanego, Chrystusa;"},
	{20, "20 Przejrzanego przed założeniem świata, a objawionego czasów ostatecznych dla was,"},
	{21, "21 Którzy przez niego wierzycie w Boga, który go wzbudził od umarłych i dał mu chwałę, aby wiara i nadzieja wasza była w Bogu."},
	{22, "22 Oczyszczając dusze wasze w posłuszeństwie prawdy przez Ducha Świętego ku nieobłudnej braterskiej miłości, z czystego serca jedni drugich miłujcie uprzejmie,"},
	{23, "23 Odrodzeni będąc nie z nasienia skazitelnego, ale z nieskazitelnego przez słowo Boże żywe i trwające na wieki."},
	{24, "24 Ponieważ wszelkie ciało jest jako trawa i wszelka chwała człowieka jako kwiat trawy; uwiędła trawa i kwiat jej opadł;"},
	{25, "25 Ale słowo Pańskie trwa na wieki. A toć jest słowo, które wam jest zwiastowane."},
	{26, "1 Piotr, Apostoł Jezusa Chrystusa, przychodniom rozproszonym w Poncie, w Galacyi, w Kapadocyi, w Azji i w Bitynii;"},
	{27, "2 Wybranym według przejrzenia Boga Ojca przez poświęcenie Ducha, ku posłuszeństwu i pokropieniu krwi Jezusa Chrystusa. Łaska wam i pokój niech będzie rozmnożony."},
	{28, "3 Błogosławiony niech będzie Bóg i Ojciec Pana naszego, Jezusa Chrystusa, który według wielkiego miłosierdzia swego odrodził nas ku nadziei żywej przez zmartwychwstanie Jezusa Chrystusa od umarłych,"},
	{29, "4 Ku dziedzictwu nieskazitelnemu i niepokalanemu, i niezwiędłemu, w niebiesiech dla was zachowanemu,"},
	{30, "5 Którzy mocą Bożą strzeżeni bywacie przez wiarę ku zbawieniu, które zgotowane jest, aby było objawione czasu ostatecznego."},
	{31, "6 W czem weselicie się teraz maluczko, (jeźliże potrzeba) zasmuceni w rozmaitych pokusach,"},
	{32, "7 Aby doświadczenie wiary waszej daleko droższe niż złoto, które ginie, którego jednak przez ogień doświadczają, znalezione było wam ku chwale i ku czci, i ku sławie w objawienie Jezusa Chrystusa,"},
	{33, "8 Którego nie widziawszy, miłujecie, którego teraz nie widząc, wszakże weń wierząc, weselicie się radością niewymowną i chwalebną,"},
	{34, "9 Odnosząc koniec wiary waszej: zbawienie dusz."},
	{35, "10 O którem zbawieniu wywiadywali się i badali się prorocy, którzy o tej łasce, która na was przyjść miała, prorokowali."},
	{36, "11 Badając się, na który albo na jaki czas objawiał Duch Chrystusowy, który w nich był, świadcząc pierwej o utrapieniach, które miały przyjść na Chrystusa i o wielkiej za tem chwale."},
	{37, "12 Którym objawione jest, iż nie samym sobie, ale nam tem usługiwali, co wam teraz zwiastowano przez tych, którzy wam kazali Ewangieliję przez Ducha Świętego z nieba zesłanego, na które rzeczy pragną patrzyć Aniołowie."},
	{38, "13 Przetoż przepasawszy biodra myśli waszej i trzeźwymi będąc, doskonałą miejcie nadzieję ku tej łasce, która wam dana będzie w objawienie Jezusa Chrystusa,"},
	{39, "14 Jako synowie posłuszni, którzy się nie przypodobywacie przeszłym w nieumiejętności waszej pożądliwościom;"},
	{40, "15 Ale jako ten, który was powołał, święty jest, i wy bądźcie świętymi we wszelkiem obcowaniu,"},
	{41, "16 Dlatego że napisano: Świętymi bądźcie, iżem Ja jest święty."},
	{42, "17 A ponieważ Ojcem nazywacie tego, który bez braku osób każdego sądzi według uczynku, patrzcież, abyście w bojaźni czas pielgrzymowania waszego trawili,"},
	{43, "18 Wiedząc, iż nie skazitelnemi rzeczami, srebrem albo złotem, wykupieni jesteście od marnego obcowania waszego, od ojców podanego."},
	{44, "19 Ale drogą krwią, jako baranka niewinnego i niepokalanego, Chrystusa;"},
	{45, "20 Przejrzanego przed założeniem świata, a objawionego czasów ostatecznych dla was,"},
	{46, "21 Którzy przez niego wierzycie w Boga, który go wzbudził od umarłych i dał mu chwałę, aby wiara i nadzieja wasza była w Bogu."},
	{47, "22 Oczyszczając dusze wasze w posłuszeństwie prawdy przez Ducha Świętego ku nieobłudnej braterskiej miłości, z czystego serca jedni drugich miłujcie uprzejmie,"},
	{48, "23 Odrodzeni będąc nie z nasienia skazitelnego, ale z nieskazitelnego przez słowo Boże żywe i trwające na wieki."},
	{49, "24 Ponieważ wszelkie ciało jest jako trawa i wszelka chwała człowieka jako kwiat trawy; uwiędła trawa i kwiat jej opadł;"},
	{50, "25 Ale słowo Pańskie trwa na wieki. A toć jest słowo, które wam jest zwiastowane."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct pl2 poems[] = {
	{1, "1 Przetoż złożywszy wszelką złość i wszelką zdradę, i obłudę, i zazdrość, i wszelakie obmowiska,"},
	{2, "2 Jako dopiero narodzone niemowlątka, szczerego mleka słowa Bożego pożądajcie, abyście przez nie urośli,"},
	{3, "3 Jeźliście tylko skosztowali, że dobrotliwy jest Pan."},
	{4, "4 Do którego przystępując, do kamienia żywego, acz od ludzi odrzuconego, ale od Boga wybranego i kosztownego,"},
	{5, "5 I wy jako żywe kamienie budujcie się w dom duchowny, w kapłaństwo święte, ku ofiarowaniu duchowych ofiar, przyjemnych Bogu przez Jezusa Chrystusa."},
	{6, "6 A przetoż mówi Pismo: Oto kładę na Syonie kamień narożny węgielny, wybrany, kosztowny; a kto w niego uwierzy, nie będzie zawstydzony."},
	{7, "7 Wam tedy wierzącym jest uczciwością, ale nieposłusznym, kamień, który odrzucili budujący, ten się stał głową węgielną,"},
	{8, "8 I kamieniem obrażenia, i opoką zgorszenia tym, którzy się obrażają o słowo, nie wierząc, na co też wystawieni są."},
	{9, "9 Ale wy jesteście rodzajem wybranym, królewskim kapłaństwem, narodem świętym, ludem nabytym, abyście opowiadali cnoty tego, który was powołał z ciemności ku dziwnej swojej światłości."},
	{10, "10 Którzyście niekiedy byli nie ludem, aleście teraz ludem Bożym; którzyście niekiedy nie dostąpili byli miłosierdzia, aleście teraz miłosierdzia dostąpili."},
	{11, "11 Najmilsi! proszę was, abyście się jako przychodniowie i goście wstrzymywali od cielesnych pożądliwości, które walczą przeciwko duszy,"},
	{12, "12 Obcowanie wasze mając poczciwe między poganami, aby zamiast tego, w czem was pomawiają jako złoczyńców, dobrym się uczynkom waszym przypatrując, chwalili Boga w dzień nawiedzenia."},
	{13, "13 Bądźcież tedy poddani wszelkiemu ludzkiemu urzędowi dla Pana, bądź królowi, jako najwyższemu,"},
	{14, "14 Bądź przełożonym, jako od niego posłanym ku pomście źle czyniących, a ku chwale dobrze czyniących."},
	{15, "15 Albowiem taka jest wola Boża, abyście dobrze czyniąc, usta zatkali nieumiejętności głupich ludzi."},
	{16, "16 (Bądźcież) jako wolni, a nie jako ci, którzy wolność zasłoną złości mają, ale jako słudzy Boży."},
	{17, "17 Wszystkich czcijcie, braterstwo miłujcie, Boga się bójcie, króla w uczciwości miejcie."},
	{18, "18 Słudzy! bądźcie poddani panom we wszelakiej bojaźni, nie tylko dobrym i bacznym, ale i dziwnym."},
	{19, "19 Boć to jest łaska, jeźli kto dla sumienia Bożego ponosi frasunki, cierpiąc bezwinnie."},
	{20, "20 Bo cóż jest za chwała, jeźlibyście grzesząc, cierpliwie znosili, by was i pięściami bito? Ale jeźli dobrze czyniąc i cierpiąc znosicie, to jest łaska u Boga."},
	{21, "21 Albowiem na to też powołani jesteście, ponieważ i Chrystus cierpiał za was, zostawiwszy wam przykład, abyście naśladowali stóp jego."},
	{22, "22 Który grzechu nie uczynił, ani znaleziona jest zdrada w ustach jego."},
	{23, "23 Któremu gdy złorzeczono, nie odzłorzeczył; gdy cierpiał, nie groził, ale poruczył krzywdę temu, który sprawiedliwie sądzi."},
	{24, "24 Który grzechy nasze na ciele swoim zaniósł na drzewo, abyśmy obumarłszy grzechom sprawiedliwości żyli, którego sinością uzdrowieni jesteście."},
	{25, "25 Albowiemeście byli jako owce błądzące; ale teraz jesteście nawróceni do pasterza i biskupa dusz waszych."},
	{26, "1 Przetoż złożywszy wszelką złość i wszelką zdradę, i obłudę, i zazdrość, i wszelakie obmowiska,"},
	{27, "2 Jako dopiero narodzone niemowlątka, szczerego mleka słowa Bożego pożądajcie, abyście przez nie urośli,"},
	{28, "3 Jeźliście tylko skosztowali, że dobrotliwy jest Pan."},
	{29, "4 Do którego przystępując, do kamienia żywego, acz od ludzi odrzuconego, ale od Boga wybranego i kosztownego,"},
	{30, "5 I wy jako żywe kamienie budujcie się w dom duchowny, w kapłaństwo święte, ku ofiarowaniu duchowych ofiar, przyjemnych Bogu przez Jezusa Chrystusa."},
	{31, "6 A przetoż mówi Pismo: Oto kładę na Syonie kamień narożny węgielny, wybrany, kosztowny; a kto w niego uwierzy, nie będzie zawstydzony."},
	{32, "7 Wam tedy wierzącym jest uczciwością, ale nieposłusznym, kamień, który odrzucili budujący, ten się stał głową węgielną,"},
	{33, "8 I kamieniem obrażenia, i opoką zgorszenia tym, którzy się obrażają o słowo, nie wierząc, na co też wystawieni są."},
	{34, "9 Ale wy jesteście rodzajem wybranym, królewskim kapłaństwem, narodem świętym, ludem nabytym, abyście opowiadali cnoty tego, który was powołał z ciemności ku dziwnej swojej światłości."},
	{35, "10 Którzyście niekiedy byli nie ludem, aleście teraz ludem Bożym; którzyście niekiedy nie dostąpili byli miłosierdzia, aleście teraz miłosierdzia dostąpili."},
	{36, "11 Najmilsi! proszę was, abyście się jako przychodniowie i goście wstrzymywali od cielesnych pożądliwości, które walczą przeciwko duszy,"},
	{37, "12 Obcowanie wasze mając poczciwe między poganami, aby zamiast tego, w czem was pomawiają jako złoczyńców, dobrym się uczynkom waszym przypatrując, chwalili Boga w dzień nawiedzenia."},
	{38, "13 Bądźcież tedy poddani wszelkiemu ludzkiemu urzędowi dla Pana, bądź królowi, jako najwyższemu,"},
	{39, "14 Bądź przełożonym, jako od niego posłanym ku pomście źle czyniących, a ku chwale dobrze czyniących."},
	{40, "15 Albowiem taka jest wola Boża, abyście dobrze czyniąc, usta zatkali nieumiejętności głupich ludzi."},
	{41, "16 (Bądźcież) jako wolni, a nie jako ci, którzy wolność zasłoną złości mają, ale jako słudzy Boży."},
	{42, "17 Wszystkich czcijcie, braterstwo miłujcie, Boga się bójcie, króla w uczciwości miejcie."},
	{43, "18 Słudzy! bądźcie poddani panom we wszelakiej bojaźni, nie tylko dobrym i bacznym, ale i dziwnym."},
	{44, "19 Boć to jest łaska, jeźli kto dla sumienia Bożego ponosi frasunki, cierpiąc bezwinnie."},
	{45, "20 Bo cóż jest za chwała, jeźlibyście grzesząc, cierpliwie znosili, by was i pięściami bito? Ale jeźli dobrze czyniąc i cierpiąc znosicie, to jest łaska u Boga."},
	{46, "21 Albowiem na to też powołani jesteście, ponieważ i Chrystus cierpiał za was, zostawiwszy wam przykład, abyście naśladowali stóp jego."},
	{47, "22 Który grzechu nie uczynił, ani znaleziona jest zdrada w ustach jego."},
	{48, "23 Któremu gdy złorzeczono, nie odzłorzeczył; gdy cierpiał, nie groził, ale poruczył krzywdę temu, który sprawiedliwie sądzi."},
	{49, "24 Który grzechy nasze na ciele swoim zaniósł na drzewo, abyśmy obumarłszy grzechom sprawiedliwości żyli, którego sinością uzdrowieni jesteście."},
	{50, "25 Albowiemeście byli jako owce błądzące; ale teraz jesteście nawróceni do pasterza i biskupa dusz waszych."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct pl3 poems[] = {
	{1, "1 Także i żony! bądźcie poddane mężom swoim, aby i ci, którzy nie wierzą słowu, przez pobożne obcowanie żon, bez słowa byli pozyskani,"},
	{2, "2 Obaczywszy czyste w bojaźni Bożej obcowanie wasze."},
	{3, "3 Których ochędostwo niech będzie nie ono zwierzchne, w splecieniu włosów i obłożeniu się złotem, albo w ubieraniu się w szaty:"},
	{4, "4 Ale on skryty serdeczny człowiek, zależący w nieskażeniu cichego i spokojnego ducha, który jest przed obliczem Bożem kosztowny."},
	{5, "5 Albowiem tak niekiedy i one święte małżonki, które nadzieję miały w Bogu, zdobiły się, będąc poddane mężom swoim."},
	{6, "6 Jako Sara była posłuszną Abrahamowi nazywając go panem; której wy stałyście się córkami, gdy dobrze czynicie, nie bojąc się żadnego postrachu."},
	{7, "7 Także i wy, mężowie! mieszkajcie z niemi umiejętnie, a jako mdlejszemu naczyniu niewieściemu oddawajcie uczciwość, jako też spółdziedziczkom łaski żywota, aby się modlitwy wasze nie przerywały."},
	{8, "8 A na koniec wszyscy bądźcie jednomyślni, spółcierpiący doległości, braterstwo miłujący, miłosierni i dobrotliwi,"},
	{9, "9 Nie oddawając złego za złe, ani łajania za łajanie, lecz przeciwnym obyczajem dobrorzecząc, gdyż wiecie, iż na to powołani jesteście, abyście błogosławieństwo odziedziczyli."},
	{10, "10 Albowiem kto chce żywot miłować i oglądać dni dobre, niech pohamuje języka swego od złego, a usta jego niech nie mówią zdrady;"},
	{11, "11 Niech się odwróci od złego, a czyni dobre; niech szuka pokoju i ściga go."},
	{12, "12 Albowiem oczy Pańskie otworzone są na sprawiedliwych, a uszy jego ku prośbie ich; lecz oblicze Pańskie przeciwko tym, którzy czynią złe rzeczy."},
	{13, "13 I któż jest, co by wam złe uczynił, jeźlibyście dobrego naśladowcami byli?"},
	{14, "14 Ale chociażbyście też cierpieli dla sprawiedliwości, błogosławieni jesteście, a strachu ich nie lękajcie się, ani trwożcie sobą, ale Pana Boga poświęcajcie w sercach waszych."},
	{15, "15 Bądźcie zawsze gotowi ku daniu odpowiedzi każdemu domagającemu się od was rachunku o tej nadziei, która w was jest, z cichością i z bojaźnią, mając sumienie dobre;"},
	{16, "16 Aby w tem, w czem was pomawiają jako złoczyńców, zawstydzili się ci, którzy naganę dawają waszemu dobremu obcowaniu w Chrystusie."},
	{17, "17 Lepiej bowiem jest, abyście dobrze czyniąc, jeźli się tak podoba woli Bożej, cierpieli, niżeli źle czyniąc."},
	{18, "18 Bo i Chrystus raz za grzechy cierpiał, sprawiedliwy za niesprawiedliwych, aby nas przywiódł do Boga, umartwiony będąc ciałem, ale ożywiony duchem;"},
	{19, "19 Przez którego i tym duchom, którzy są w więzieniu, przyszedłszy kazał."},
	{20, "20 Którzy niekiedy nieposłuszni byli, gdy raz oczekiwała Boża cierpliwość za dni Noego, kiedy korab gotowano, w którym mało (to jest ośm) dusz zachowane są w wodzie."},
	{21, "21 Czego teraz chrzest wzorem będąc, zbawia nas (nie składanie cielesnego plugastwa, ale obietnica spólna sumienia dobrego u Boga,) przez zmartwychwstanie Jezusa Chrystusa,"},
	{22, "22 Który jest na prawicy Bożej, szedłszy do nieba, podbiwszy sobie Aniołów i zwierzchności, i mocy."},
	{23, "1 Także i żony! bądźcie poddane mężom swoim, aby i ci, którzy nie wierzą słowu, przez pobożne obcowanie żon, bez słowa byli pozyskani,"},
	{24, "2 Obaczywszy czyste w bojaźni Bożej obcowanie wasze."},
	{25, "3 Których ochędostwo niech będzie nie ono zwierzchne, w splecieniu włosów i obłożeniu się złotem, albo w ubieraniu się w szaty:"},
	{26, "4 Ale on skryty serdeczny człowiek, zależący w nieskażeniu cichego i spokojnego ducha, który jest przed obliczem Bożem kosztowny."},
	{27, "5 Albowiem tak niekiedy i one święte małżonki, które nadzieję miały w Bogu, zdobiły się, będąc poddane mężom swoim."},
	{28, "6 Jako Sara była posłuszną Abrahamowi nazywając go panem; której wy stałyście się córkami, gdy dobrze czynicie, nie bojąc się żadnego postrachu."},
	{29, "7 Także i wy, mężowie! mieszkajcie z niemi umiejętnie, a jako mdlejszemu naczyniu niewieściemu oddawajcie uczciwość, jako też spółdziedziczkom łaski żywota, aby się modlitwy wasze nie przerywały."},
	{30, "8 A na koniec wszyscy bądźcie jednomyślni, spółcierpiący doległości, braterstwo miłujący, miłosierni i dobrotliwi,"},
	{31, "9 Nie oddawając złego za złe, ani łajania za łajanie, lecz przeciwnym obyczajem dobrorzecząc, gdyż wiecie, iż na to powołani jesteście, abyście błogosławieństwo odziedziczyli."},
	{32, "10 Albowiem kto chce żywot miłować i oglądać dni dobre, niech pohamuje języka swego od złego, a usta jego niech nie mówią zdrady;"},
	{33, "11 Niech się odwróci od złego, a czyni dobre; niech szuka pokoju i ściga go."},
	{34, "12 Albowiem oczy Pańskie otworzone są na sprawiedliwych, a uszy jego ku prośbie ich; lecz oblicze Pańskie przeciwko tym, którzy czynią złe rzeczy."},
	{35, "13 I któż jest, co by wam złe uczynił, jeźlibyście dobrego naśladowcami byli?"},
	{36, "14 Ale chociażbyście też cierpieli dla sprawiedliwości, błogosławieni jesteście, a strachu ich nie lękajcie się, ani trwożcie sobą, ale Pana Boga poświęcajcie w sercach waszych."},
	{37, "15 Bądźcie zawsze gotowi ku daniu odpowiedzi każdemu domagającemu się od was rachunku o tej nadziei, która w was jest, z cichością i z bojaźnią, mając sumienie dobre;"},
	{38, "16 Aby w tem, w czem was pomawiają jako złoczyńców, zawstydzili się ci, którzy naganę dawają waszemu dobremu obcowaniu w Chrystusie."},
	{39, "17 Lepiej bowiem jest, abyście dobrze czyniąc, jeźli się tak podoba woli Bożej, cierpieli, niżeli źle czyniąc."},
	{40, "18 Bo i Chrystus raz za grzechy cierpiał, sprawiedliwy za niesprawiedliwych, aby nas przywiódł do Boga, umartwiony będąc ciałem, ale ożywiony duchem;"},
	{41, "19 Przez którego i tym duchom, którzy są w więzieniu, przyszedłszy kazał."},
	{42, "20 Którzy niekiedy nieposłuszni byli, gdy raz oczekiwała Boża cierpliwość za dni Noego, kiedy korab gotowano, w którym mało (to jest ośm) dusz zachowane są w wodzie."},
	{43, "21 Czego teraz chrzest wzorem będąc, zbawia nas (nie składanie cielesnego plugastwa, ale obietnica spólna sumienia dobrego u Boga,) przez zmartwychwstanie Jezusa Chrystusa,"},
	{44, "22 Który jest na prawicy Bożej, szedłszy do nieba, podbiwszy sobie Aniołów i zwierzchności, i mocy."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct pl4 poems[] = {
	{1, "1 Ponieważ tedy Chrystus ucierpiał za nas w ciele, i wy też tąż myślą bądźcie uzbrojeni, że ten, co cierpiał w ciele, poprzestał grzechu,"},
	{2, "2 Aby już więcej nie cielesnym pożądliwościom, ale woli Bożej żył ostatek czasu w ciele."},
	{3, "3 Albowiem dosyć nam, żeśmy przeszłego czasu żywota popełniali lubości pogan, chodząc w rozpustach, w pożądliwościach, w opilstwach, w biesiadach, w pijaństwach i sprośnych bałwochwalstwach."},
	{4, "4 Przetoż, że się wy z nimi nie schadzacie na taką zbyteczną rozpustę, zda się im rzeczą obcą i bluźnią to."},
	{5, "5 Ci dadzą liczbą temu, który gotowy jest sądzić żywych i umarłych."},
	{6, "6 Dlatego bowiem i umarłym kazano Ewangieliję, aby sądzeni byli według ludzi z strony ciała, ale żyli według Boga duchem."},
	{7, "7 A wszystkiemuć się koniec przybliża."},
	{8, "8 Przetoż trzeźwymi bądźcie i czułymi ku modlitwom, a nade wszystko miejcie uprzejmą miłość jedni ku drugim; albowiem miłość zakryje mnóstwo grzechów."},
	{9, "9 Gościnnymi bądźcie jedni ku drugim bez szemrania."},
	{10, "10 Każdy jako wziął dar, tak nim jeden drugiemu usługujcie, jako dobrzy szafarze rozlicznej łaski Bożej."},
	{11, "11 Jeźli kto mówi, niech mówi jako wyroki Boże, jeźli kto posługuje, niech to czyni jako z siły, której Bóg dodaje, aby we wszystkiem chwalony był Bóg przez Jezusa Chrystusa, któremu należy chwała i panowanie na wieki wieków. Amen."},
	{12, "12 Najmilsi! niech wam nie będzie rzeczą dziwną ten ogień, który na was przychodzi ku doświadczeniu waszemu, jakoby co obcego na was przychodziło;"},
	{13, "13 Ale radujcie się z tego, żeście uczestnikami ucierpienia Chrystusowego, abyście się i w objawienie chwały jego z radością weselili."},
	{14, "14 Jeźli was lżą dla imienia Chrystusowego, błogosławieni jesteście, gdyż on Duch chwały a Duch Boży odpoczywa na was, który względem nich bywa bluźniony, ale względem was bywa uwielbiony."},
	{15, "15 A żaden z was niech nie cierpi jako mężobójca, albo złodziej, albo złoczyńca, albo jako w cudzy urząd się wtrącający."},
	{16, "16 Lecz jeźli cierpi jako chrześcijanin, niech się nie wstydzi, owszem niech chwali Boga w tej mierze ."},
	{17, "17 Albowiem czas jest, aby się sąd począł od domu Bożego; a ponieważ najprzód zaczyna się od nas, jakiż będzie koniec tych, co są nieposłuszni Ewangielii Bożej?"},
	{18, "18 A ponieważ sprawiedliwy ledwie zbawiony będzie, niezbożny i grzeszny gdzież się okaże?"},
	{19, "19 Przetoż i ci, którzy cierpią według woli Bożej, niechaj jemu, jako wiernemu Stworzycielowi, poruczają dusze swoje, dobrze czyniąc."},
	{20, "1 Ponieważ tedy Chrystus ucierpiał za nas w ciele, i wy też tąż myślą bądźcie uzbrojeni, że ten, co cierpiał w ciele, poprzestał grzechu,"},
	{21, "2 Aby już więcej nie cielesnym pożądliwościom, ale woli Bożej żył ostatek czasu w ciele."},
	{22, "3 Albowiem dosyć nam, żeśmy przeszłego czasu żywota popełniali lubości pogan, chodząc w rozpustach, w pożądliwościach, w opilstwach, w biesiadach, w pijaństwach i sprośnych bałwochwalstwach."},
	{23, "4 Przetoż, że się wy z nimi nie schadzacie na taką zbyteczną rozpustę, zda się im rzeczą obcą i bluźnią to."},
	{24, "5 Ci dadzą liczbą temu, który gotowy jest sądzić żywych i umarłych."},
	{25, "6 Dlatego bowiem i umarłym kazano Ewangieliję, aby sądzeni byli według ludzi z strony ciała, ale żyli według Boga duchem."},
	{26, "7 A wszystkiemuć się koniec przybliża."},
	{27, "8 Przetoż trzeźwymi bądźcie i czułymi ku modlitwom, a nade wszystko miejcie uprzejmą miłość jedni ku drugim; albowiem miłość zakryje mnóstwo grzechów."},
	{28, "9 Gościnnymi bądźcie jedni ku drugim bez szemrania."},
	{29, "10 Każdy jako wziął dar, tak nim jeden drugiemu usługujcie, jako dobrzy szafarze rozlicznej łaski Bożej."},
	{30, "11 Jeźli kto mówi, niech mówi jako wyroki Boże, jeźli kto posługuje, niech to czyni jako z siły, której Bóg dodaje, aby we wszystkiem chwalony był Bóg przez Jezusa Chrystusa, któremu należy chwała i panowanie na wieki wieków. Amen."},
	{31, "12 Najmilsi! niech wam nie będzie rzeczą dziwną ten ogień, który na was przychodzi ku doświadczeniu waszemu, jakoby co obcego na was przychodziło;"},
	{32, "13 Ale radujcie się z tego, żeście uczestnikami ucierpienia Chrystusowego, abyście się i w objawienie chwały jego z radością weselili."},
	{33, "14 Jeźli was lżą dla imienia Chrystusowego, błogosławieni jesteście, gdyż on Duch chwały a Duch Boży odpoczywa na was, który względem nich bywa bluźniony, ale względem was bywa uwielbiony."},
	{34, "15 A żaden z was niech nie cierpi jako mężobójca, albo złodziej, albo złoczyńca, albo jako w cudzy urząd się wtrącający."},
	{35, "16 Lecz jeźli cierpi jako chrześcijanin, niech się nie wstydzi, owszem niech chwali Boga w tej mierze ."},
	{36, "17 Albowiem czas jest, aby się sąd począł od domu Bożego; a ponieważ najprzód zaczyna się od nas, jakiż będzie koniec tych, co są nieposłuszni Ewangielii Bożej?"},
	{37, "18 A ponieważ sprawiedliwy ledwie zbawiony będzie, niezbożny i grzeszny gdzież się okaże?"},
	{38, "19 Przetoż i ci, którzy cierpią według woli Bożej, niechaj jemu, jako wiernemu Stworzycielowi, poruczają dusze swoje, dobrze czyniąc."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct pl5 poems[] = {
	{1, "1 Starszych, którzy są między wami, proszę ja spółstarszy i świadek ucierpienia Chrystusowego, i uczestnik chwały, która ma być objawiona:"},
	{2, "2 Paście trzodę Bożą, która jest między wami, doglądając jej nie poniewolnie, ale dobrowolnie; nie dla sprośnego zysku, ale ochotnym umysłem:"},
	{3, "3 Ani jako panując nad dziedzictwem Pańskiem, ale wzorami będąc trzody."},
	{4, "4 A gdy się okaże on książę pasterzy, odniesiecie niezwiędłą koronę chwały."},
	{5, "5 Także, młodsi! bądźcie poddani starszym, a wszyscy jedni drugim bądźcie poddani. Pokorą bądźcie wewnątrz ozdobieni, gdyż Bóg pysznym się sprzeciwia, a pokornym łaskę daje."},
	{6, "6 Uniżajcież się tedy pod mocną ręką Bożą, aby was wywyższył czasu swego;"},
	{7, "7 Wszystko staranie wasze wrzuciwszy na niego, gdyż on ma pieczę o was."},
	{8, "8 Trzeźwymi bądźcie, czujcie; albowiem przeciwnik wasz dyjabeł, jako lew ryczący obchodzi, szukając kogo by pożarł."},
	{9, "9 Któremu dawajcie odpór, mocni będąc w wierze, wiedząc, iż się takoweż ucierpienia nad braterstwem waszem, które jest na świecie, wykonywają."},
	{10, "10 A Bóg wszelkiej łaski, który nas powołał do wiecznej chwały swojej w Chrystusie Jezusie, gdy maluczko ucierpicie, ten niech was doskonałymi uczyni, utwierdzi, umocni i ugruntuje;"},
	{11, "11 Jemu niech będzie chwała i panowanie na wieki wieków. Amen."},
	{12, "12 Przez Sylwana wam wiernego brata, jako rozumiem, krótkom pisał, napominając i świadcząc, iż ta jest prawdziwa łaska Boża, w której stoicie."},
	{13, "13 Pozdrawia was spółwybrany zbór, ten, który jest w Babilonie i Marek, syn mój"},
	{14, "14 Pozdrówcie jedni drugich w pocałowaniu miłości. Pokój niech będzie wam wszystkim, którzyście w Chrystusie Jezusie. Amen."},
	{15, "1 Starszych, którzy są między wami, proszę ja spółstarszy i świadek ucierpienia Chrystusowego, i uczestnik chwały, która ma być objawiona:"},
	{16, "2 Paście trzodę Bożą, która jest między wami, doglądając jej nie poniewolnie, ale dobrowolnie; nie dla sprośnego zysku, ale ochotnym umysłem:"},
	{17, "3 Ani jako panując nad dziedzictwem Pańskiem, ale wzorami będąc trzody."},
	{18, "4 A gdy się okaże on książę pasterzy, odniesiecie niezwiędłą koronę chwały."},
	{19, "5 Także, młodsi! bądźcie poddani starszym, a wszyscy jedni drugim bądźcie poddani. Pokorą bądźcie wewnątrz ozdobieni, gdyż Bóg pysznym się sprzeciwia, a pokornym łaskę daje."},
	{20, "6 Uniżajcież się tedy pod mocną ręką Bożą, aby was wywyższył czasu swego;"},
	{21, "7 Wszystko staranie wasze wrzuciwszy na niego, gdyż on ma pieczę o was."},
	{22, "8 Trzeźwymi bądźcie, czujcie; albowiem przeciwnik wasz dyjabeł, jako lew ryczący obchodzi, szukając kogo by pożarł."},
	{23, "9 Któremu dawajcie odpór, mocni będąc w wierze, wiedząc, iż się takoweż ucierpienia nad braterstwem waszem, które jest na świecie, wykonywają."},
	{24, "10 A Bóg wszelkiej łaski, który nas powołał do wiecznej chwały swojej w Chrystusie Jezusie, gdy maluczko ucierpicie, ten niech was doskonałymi uczyni, utwierdzi, umocni i ugruntuje;"},
	{25, "11 Jemu niech będzie chwała i panowanie na wieki wieków. Amen."},
	{26, "12 Przez Sylwana wam wiernego brata, jako rozumiem, krótkom pisał, napominając i świadcząc, iż ta jest prawdziwa łaska Boża, w której stoicie."},
	{27, "13 Pozdrawia was spółwybrany zbór, ten, który jest w Babilonie i Marek, syn mój"},
	{28, "14 Pozdrówcie jedni drugich w pocałowaniu miłości. Pokój niech będzie wam wszystkim, którzyście w Chrystusie Jezusie. Amen."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};