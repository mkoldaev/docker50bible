#include <map>
#include <string>
class Bible29
{
	struct hu1	{ int val; const char *msg; };
	struct hu2	{ int val; const char *msg; };
	struct hu3	{ int val; const char *msg; };
public:
static void view1() {
struct hu1 poems[] = {
	{1, "1 Az Úrnak igéje, a mely lõn Jóelhez, a Petuel fiához."},
	{2, "2 Vének! halljátok meg ezt, és hallgassátok meg, e földnek minden lakói! Történt-é ilyen a ti idõtökben, vagy a ti atyáitoknak idejében?"},
	{3, "3 Beszéljétek el azt a ti fiaitoknak, és a ti fiaitok az õ fiaiknak, és azoknak fiai a következõ nemzetségnek."},
	{4, "4 A mit a sáska meghagyott, megette a szöcskõ; és a mit a szöcskõ meghagyott, megette a cserebogár; és a mit a cserebogár meghagyott, megette a hernyó."},
	{5, "5 Serkenjetek fel részegek és sírjatok, és jajgassatok mind, ti borivók a mustért, mert elvétetett az a ti szátoktól!"},
	{6, "6 Mert egy nép jött fel az én földemre, erõs és megszámlálhatatlan; fogai, mint az oroszlán fogai, és agyarai, mint a nõstény oroszláné."},
	{7, "7 Pusztává tette szõlõmet; összetörte fügefáimat, mezítelenre hántotta és széjjelhányta; fehérlenek annak ágai."},
	{8, "8 Keseregj, mint a szûz, a ki gyászba öltözik az õ ifjúsága férjéért."},
	{9, "9 Kifogyott az étel- és italáldozat az Úrnak házából; gyászolnak a papok, az Úrnak szolgái."},
	{10, "10 Elpusztíttatott a mezõ, gyászol a föld; mert elpusztíttatott a gabona; kiszáradt a must; kiapadt az olaj."},
	{11, "11 Szégyenüljetek meg, ti szántóvetõk; jajgassatok szõlõmûvesek: a búzáért és az árpáért; mert elveszett a mezõ aratása!"},
	{12, "12 Elszáradt a szõlõtõ; a fügefa elhervadt; a gránátfa, a datolyafa és az almafa, a mezõnek minden gyümölcsfája kiaszott. Bizony kiszáradott az öröm az emberek közül."},
	{13, "13 Öltsetek gyászt és sírjatok, ti papok! Jajgassatok, ti oltár szolgái; jõjjetek és háljatok gyászruhákban, Istenem szolgái; mert megvonatott az étel- és italáldozat Isteneteknek házától."},
	{14, "14 Szenteljetek bõjtöt, hirdessetek gyûlést; gyûjtsétek egybe a véneket, a földnek minden lakosát az Úrnak, a ti Isteneteknek házába, és kiáltsatok az Úrhoz."},
	{15, "15 Jaj ez a nap! Bizony közel van az Úrnak napja, és mint a pusztítás, úgy jön el a Mindenhatótól."},
	{16, "16 Hát nem szemünk láttára irtatott-é ki az élelem, az öröm és vígasság Istenünk házából?!"},
	{17, "17 Elsenyvedtek a magvak barázdáik alatt, elpusztultak a gabonás házak, összedõltek a csûrök; mert kiaszott a gabona."},
	{18, "18 Mint nyög a barom! Megháborodtak a marha-csordák, mert nincs legelõjük; bûnhõdnek még a juhnyájak is!"},
	{19, "19 Hozzád kiáltok Uram, mert tûz emésztette meg a puszta virányait, és láng perzselte le a mezõ minden fáját."},
	{20, "20 A mezõ vadai is hozzád esengenek, mert kiszáradtak a vizeknek ágyai, és tûz emésztette meg a puszta virányait."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct hu2 poems[] = {
	{1, "1 Fújjátok a kürtöt a Sionon, és rivalgjatok az én szent hegyemen! Rémüljenek meg e föld minden lakói; mert eljõ az Úrnak napja; mert közel van [az.]"},
	{2, "2 Sötétségnek és homálynak napja; felhõnek és borulatnak napja; mint a hegyekre ráterülõ alkonyat! Nagy és hatalmas nép, a milyen nem volt öröktõl fogva és nem is lesz utána többé, nemzetségrõl nemzetségre."},
	{3, "3 Elõtte tûz emészt, utána láng lobog; elõtte a föld olyan, mint az Éden kertje, utána pedig kietlen pusztaság; meg sem menekülhet tõle semmi."},
	{4, "4 A milyen a lovak alakja, olyan annak alakja, és száguldoznak, mint a lovasok."},
	{5, "5 Rohannak a hegyek tetején, mintha hadi szekerek robognának; mintha tarlót emésztõ láng ropogna; a milyen az ütközetre kész hatalmas nép."},
	{6, "6 Elrémülnek tõle a népek; minden arcz elsáppad."},
	{7, "7 Száguldoznak, mint a hõsök, felhágnak a kõfalakra, mint a bajnokok; mindenik a maga útján halad, nem bontják meg soraikat."},
	{8, "8 Egymást nem szorongatják; mindenik a maga útján halad; néki rohannak a fegyvernek, és nem esik seb rajtok."},
	{9, "9 Betörnek a városba, futkároznak a kõfalon, felhágnak a házakra, betörnek az ablakokon, mint a tolvaj."},
	{10, "10 Reszket elõttök a föld, és megrendülnek az egek; a nap és hold elsötétednek, a csillagok is bevonják fényöket."},
	{11, "11 És megzendül az Úrnak szava az õ serege elõtt, mert felette nagy az õ tábora; mert hatalmas az õ rendeletének végrehajtója. Bizony nagy az Úrnak napja és igen rettenetes! Ki állhatja ki azt?"},
	{12, "12 De még most is így szól az Úr: Térjetek meg hozzám teljes szívetek szerint; bõjtöléssel is, sírással is, kesergéssel is."},
	{13, "13 És szíveteket szaggassátok meg, ne ruháitokat, úgy térjetek meg az Úrhoz, a ti Istenetekhez; mert könyörülõ és irgalmas õ; késedelmes a haragra és nagy kegyelmû, és bánkódik a gonosz miatt."},
	{14, "14 Ki tudja, hátha visszatér és megbánja, és áldást hagy maga után; étel- és italáldozatot az Úrnak, a ti Isteneteknek?!"},
	{15, "15 Fújjatok kürtöt a Sionon; szenteljetek bõjtöt, hirdessetek gyûlést!"},
	{16, "16 Gyûjtsétek össze a népet, szenteljétek meg a gyülekezetet; hívjátok egybe a véneket, gyûjtsétek össze a kisdedeket és a csecsszopókat; menjen ki a võlegény az õ ágyasházából és a menyasszony is az õ szobájából."},
	{17, "17 A tornácz és az oltár között sírjanak a papok, az Úr szolgái, és mondják: Légy kegyelmes, oh Uram, a te népedhez, és ne bocsásd szidalomra a te örökségedet, hogy uralkodjanak rajtok a pogányok. Miért mondanák a népek között: Hol az õ Istenök?"},
	{18, "18 Erre buzgó lõn az Úrnak szeretete az õ földe iránt, és kegyelmezett az õ népének."},
	{19, "19 És választ tõn az Úr, és mondá az õ népének: Ímé, adok néktek gabonát, bort és olajat, hogy megelégedtek vele, és nem adlak többé titeket szidalomra a pogányok között."},
	{20, "20 Az északi [népet] is elûzöm tõletek, és puszta és sivatag vidékre vetem azt; elejét a keleti tengerbe, hátulját a nyugoti tengerbe, és bûze magasra száll; felszáll büdössége, mert nagy dolgokat cselekedett."},
	{21, "21 Ne félj, te föld! Örülj és vígadozz, mert nagy dolgokat cselekeszik az Úr!"},
	{22, "22 Ne féljetek, ti mezei vadak! mert zöldülnek a pusztának virányai; mert a fa megtermi gyümölcsét; a füge és szõlõ is kitárják gazdagságukat."},
	{23, "23 Ti is, Sionnak fiai! örvendezzetek és vígadjatok az Úrban, a ti Istenetekben; mert megadja néktek az esõt igazság szerint, és korai és kései esõt hullat néktek az elsõ [hónapban.]"},
	{24, "24 És megtelnek a csûrök gabonával, és bõven öntik a sajtók a mustot és az olajat."},
	{25, "25 És kipótolom néktek az esztendõket, a melyeket tönkre tett a szöcskõ, a cserebogár és a hernyó és a sáska; az én nagy seregem, a melyet reátok küldöttem."},
	{26, "26 És esztek bõven és megelégesztek, és magasztaljátok az Úrnak, a ti Isteneteknek nevét, a ki csodálatosan cselekedett veletek, és soha többé nem pironkodik az én népem."},
	{27, "27 És megtudjátok, hogy az Izráel között vagyok én, és hogy én vagyok az Úr, a ti Istenetek és nincs más! És soha többé nem pironkodik az én népem."},
	{28, "28 És lészen azután, hogy kiöntöm lelkemet minden testre, és prófétálnak a ti fiaitok és leányaitok; véneitek álmokat álmodnak; ifjaitok pedig látomásokat látnak."},
	{29, "29 Sõt még a szolgákra és szolgálóleányokra is kiöntöm azokban a napokban az én lelkemet."},
	{30, "30 És csodajeleket mutatok az égen és a földön; vért, tüzet és füstoszlopokat."},
	{31, "31 A nap sötétséggé válik, a hold pedig vérré, minekelõtte eljõ az Úrnak nagy és rettenetes napja."},
	{32, "32 De mindaz, a ki az Úrnak nevét hívja segítségül, megmenekül; mert a Sion hegyén és Jeruzsálemben lészen a szabadulás, a mint megigérte az Úr, és a megszabadultak közt lesznek azok, a kiket elhí az Úr!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct hu3 poems[] = {
	{1, "1 Mert ímé, azokon a napokon és abban az idõben, a mikor meghozom Júda és Jeruzsálem fogságát:"},
	{2, "2 Egybegyûjtöm akkor mind a pogányokat, és levezetem õket a Josafát völgyébe, és perbe szállok ott velök, az én népemért és örökségemért, az Izráelért, a melyet szétszórtak a pogányok közé, és megosztoztak az én földemen;"},
	{3, "3 Népemre pedig sorsot vetettek; a fiút szajháért adták oda, a leányt pedig borért cserélték el, hogy ihassanak."},
	{4, "4 Sõt néktek is mi közötök velem, Tírus, Sidon és Filiszteának egész környéke?! Vajjon bosszút állani [jöttök-]é reám? Ha bosszút akarnátok rajtam állani, nagy hirtelen fejetekre fordítom vissza bosszútokat!"},
	{5, "5 Mivelhogy elraboltátok ezüstömet és aranyomat, és legszebb kincsemet templomaitokba vittétek;"},
	{6, "6 És a Júda fiait és Jeruzsálem fiait eladtátok a Jávánok fiainak, hogy messze vessétek õket határaiktól:"},
	{7, "7 Ímé, kiindítom õket a helybõl, a hova eladtátok õket, és fejetekre fordítom vissza bosszútokat."},
	{8, "8 És adom a ti fiaitokat és leányaitokat a Júda fiainak kezébe; azok pedig eladják õket a Sabeusoknak, a messze lakó népnek; mert [ezt] végezte az Úr."},
	{9, "9 Hirdessétek ezt a pogányok között; készüljetek harczra; indítsátok fel a hõsöket. Járuljanak elé, jõjjenek fel mindnyájan a hadakozó férfiak!"},
	{10, "10 Kovácsoljátok szántóvasaitokat kardokká, kaszáitokat dárdákká; mondja a beteg [is:] Hõs vagyok!"},
	{11, "11 Siessetek és jõjjetek el ti népek mindenfelõl, és seregeljetek egybe! Ide vezesd Uram a te hõseidet!"},
	{12, "12 Serkenjenek fel és jõjjenek fel a népek a Josafát völgyébe; mert ott ülök [törvényt,] hogy megítéljek minden népeket."},
	{13, "13 Ereszszétek néki a sarlót, mert megérett az aratni való! Jertek el, tapossatok, mert tetézve a kád, ömlenek a sajtók! Mert megsokasult az õ gonoszságuk!"},
	{14, "14 Tömegek, tömegek! az ítélet völgyében! Mert közel van az Úrnak napja az ítélet völgyében!"},
	{15, "15 A nap és hold elsötétednek; a csillagok bevonják fényöket;"},
	{16, "16 Az Úr pedig megharsan a Sionról és megzendül Jeruzsálembõl, és megrendülnek az egek és a föld; de az Úr az õ népének oltalma és az Izráel fiainak erõssége!"},
	{17, "17 És megtudjátok, hogy én vagyok az Úr, a ti Istenetek, a ki a Sionon lakozom, az én szent hegyemen. És szentté lészen Jeruzsálem, és idegenek nem vonulnak át többé rajta."},
	{18, "18 És majd azon a napon a hegyek musttal csepegnek és a halmok tejjel folynak, és a Júda minden medre bõ vízzel ömledez, és forrás fakad az Úrnak házából, és megöntözi a Sittimnek völgyét."},
	{19, "19 Égyiptom pusztasággá lészen, Edom pedig kietlen sivataggá; a Júda fiain való erõszakosságért, mert ártatlan vért ontottak azoknak földén."},
	{20, "20 De a Júda örökké megmarad; Jeruzsálem is nemzetségrõl nemzetségre."},
	{21, "21 És kitisztítom vérökbõl, a melybõl még ki nem tisztítottam, és a Sion lesz az Úr lakóhelye!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};