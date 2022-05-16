#include <map>
#include <string>
class Bible29
{
	struct fi1	{ int val; const char *msg; };
	struct fi2	{ int val; const char *msg; };
	struct fi3	{ int val; const char *msg; };
public:
static void view1() {
struct fi1 poems[] = {
	{1, "1 Herran sana, joka tuli Jooelille, Petuelin pojalle."},
	{2, "2 Kuulkaa tämä, te vanhimmat, ja ottakaa korviinne, kaikki maan asukkaat. Onko tällaista tapahtunut teidän päivinänne taikka teidän isienne päivinä?"},
	{3, "3 Kertokaa tämä lapsillenne, ja teidän lapsenne kertokoot sen lapsillensa ja heidän lapsensa tulevalle polvelle:"},
	{4, "4 Mitä kalvajasirkalta jäi, sen söi heinäsirkka. Ja mitä heinäsirkalta jäi, sen söi syöjäsirkka. Ja mitä syöjäsirkalta jäi, sen söi tuhosirkka."},
	{5, "5 Herätkää, te juopuneet, ja itkekää, valittakaa, kaikki viininjuojat, rypälemehun tähden, sillä se on otettu pois teidän suustanne."},
	{6, "6 Sillä minun maahani on hyökännyt kansa, väkevä ja epälukuinen. Sen hampaat ovat leijonan hampaat, ja sillä on naarasleijonan leukaluut."},
	{7, "7 Se on raastanut minun viiniköynnökseni ja katkonut minun viikunapuuni, on ne paljaiksi kuorinut ja karsinut; niiden oksat ovat valjenneet."},
	{8, "8 Valita niinkuin neitsyt, joka on vyöttäytynyt säkkiin nuoruutensa yljän tähden."},
	{9, "9 Pois on otettu ruokauhri ja juomauhri Herran huoneesta. Papit, jotka toimittavat Herran palvelusta, murehtivat."},
	{10, "10 Hävitetty on pelto, maa murehtii; sillä vilja on hävitetty, viinistä on tullut kato, öljy on kuivunut."},
	{11, "11 Peltomiehet ovat joutuneet häpeään, viinitarhurit valittavat nisun ja ohran tähden, sillä mennyt on pellon sato."},
	{12, "12 Viiniköynnöstä on kohdannut kato, viikunapuu on kuihtunut, granaattipuu ja myös palmu ja omenapuu; kaikki kedon puut ovat kuivettuneet. Niin, häpeään on joutunut ilo, ihmislasten joukosta pois."},
	{13, "13 Vyöttäytykää säkkiin, pitäkää valittajaiset, te papit; valittakaa, te jotka toimitatte palvelusta alttarilla. Käykää sisälle, viettäkää yö säkkeihin puettuina, te jotka toimitatte minun Jumalani palvelusta. Sillä poissa on teidän Jumalanne huoneesta ruokauhri ja juomauhri."},
	{14, "14 Kuuluttakaa pyhä paasto, kutsukaa koolle juhlakokous, kootkaa vanhimmat ja kaikki maan asukkaat Herran, teidän Jumalanne, huoneeseen ja huutakaa Herran puoleen."},
	{15, "15 Voi sitä päivää! Sillä lähellä on Herran päivä, ja se tulee niinkuin hävitys Kaikkivaltiaalta."},
	{16, "16 Eikö ole otettu meiltä ruoka silmäimme edestä sekä meidän Jumalamme huoneesta ilo ja riemu?"},
	{17, "17 Surkastuneet ovat siemenjyvät multiensa alla, varastohuoneet autiot, aitat puretut, kun viljasta on kato."},
	{18, "18 Kuinka huokaa karja, kuinka hädissään ovat raavaslaumat, sillä ei ole niillä laidunta! Myös lammaslaumat joutuvat perikatoon."},
	{19, "19 Sinua, Herra, minä huudan, sillä tuli on kuluttanut erämaan laitumet ja liekki polttanut kaikki kedon puut."},
	{20, "20 Metsän eläimetkin sinua ikävöivät, sillä vesipurot ovat kuivuneet ja tuli on kuluttanut erämaan laitumet."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct fi2 poems[] = {
	{1, "1 Puhaltakaa pasunaan Siionissa, toitottakaa torvia minun pyhällä vuorellani. Jokainen maan asukas on vapiseva, sillä Herran päivä tulee. Niin, se on lähellä:"},
	{2, "2 pimeyden ja synkeyden päivä, pilvien ja pilkkopimeän päivä. Vuorille levinneenä niinkuin aamurusko on lukuisa ja väkevä kansa, jonka vertaista ei ole ollut ikiajoista asti eikä tämän jälkeen enää tule, tulevaisten polvien vuosiin saakka."},
	{3, "3 Sen edellä käy kuluttava tuli, sen jäljissä polttava liekki. Niinkuin Eedenin puutarha on maa sen edessä, sen jäljissä on autio erämaa, eikä jää ketään, joka olisi siltä pelastunut."},
	{4, "4 Ne ovat näöltänsä kuin hevoset, ja niinkuin ratsut ne juoksevat."},
	{5, "5 Ryskyen kuin sotavaunut ne hyppivät vuorten huipuilla, räiskyen kuin tulen liekki, joka kuluttaa oljet; ne ovat kuin väkevä kansa, sotarintaan asettunut."},
	{6, "6 Niitten edessä kansat vapisevat, kaikki kasvot kalpenevat."},
	{7, "7 Ne juoksevat kuin sankarit, kuin soturit ne nousevat muurille. Jokainen kulkee tietänsä suoraan, ei mutkittele polullansa."},
	{8, "8 Toinen ei sysi toistansa: jokainen kulkee omaa suuntaansa. Heittoaseitten välitse ne syöksyvät pysähtymättä."},
	{9, "9 Kaupunkiin ne hyökkäävät, ryntäävät muurille, nousevat taloihin, tulevat ikkunoista sisään kuin varas."},
	{10, "10 Niitten edessä maa vapisee, ja taivaat järkkyvät; aurinko ja kuu käyvät mustiksi, ja tähdet kadottavat valonsa."},
	{11, "11 Ja Herra antaa äänensä jylistä sotajoukkonsa edellä, sillä ylen lukuisa on hänen väkensä, sillä väkevä on hänen käskynsä täyttäjä, sillä suuri on Herran päivä ja sangen peljättävä; kuka voi sitä kestää?"},
	{12, "12 Mutta vielä nytkin, sanoo Herra, kääntykää minun tyköni kaikesta sydämestänne, paastoten, itkien ja valittaen."},
	{13, "13 Reväiskää rikki sydämenne, älkää vaatteitanne, ja kääntykää Herran, teidän Jumalanne, tykö; sillä hän on armahtavainen ja laupias, pitkämielinen ja armosta rikas, ja hän katuu pahaa."},
	{14, "14 Ehkä hän vielä katuu ja jättää jälkeensä siunauksen: ruokauhrin ja juomauhrin Herralle, teidän Jumalallenne."},
	{15, "15 Puhaltakaa pasunaan Siionissa, kuuluttakaa pyhä paasto, kutsukaa koolle juhlakokous."},
	{16, "16 Kootkaa kansa, pitäkää pyhä seurakuntakokous, kerätkää vanhukset, kootkaa lapset ja rintoja imeväiset; lähteköön ylkä huoneestansa ja morsian kammiostansa."},
	{17, "17 Eteisen ja alttarin välillä itkekööt papit, jotka toimittavat Herran palvelusta, ja sanokoot: Säästä, Herra, kansaasi äläkä anna perintöosaasi häväistäväksi, pakanain pilkattavaksi. Miksi pitäisi sanottaman kansain seassa: 'Missä on heidän Jumalansa?'"},
	{18, "18 Niin Herra kiivaili maansa puolesta ja sääli kansaansa."},
	{19, "19 Ja Herra vastasi ja sanoi kansalleen: Katso, minä lähetän teille viljaa, viiniä ja öljyä, niin että te tulette niistä ravituiksi. Enkä minä anna enää häväistä teitä pakanain seassa."},
	{20, "20 Ja mikä pohjoisesta tulee, sen minä karkoitan teistä kauas ja syöksen sen kuivaan ja autioon maahan, sen alkupään Idänmereen ja sen loppupään Länsimereen. Ja siitä nousee löyhkä, nousee katku. Sillä suuria se on yrittänyt."},
	{21, "21 Älä pelkää, maa. Iloitse ja riemuitse, sillä Herra on tehnyt suuria."},
	{22, "22 Älkää peljätkö, metsän eläimet, sillä erämaan laitumet viheriöivät, sillä puu kantaa hedelmänsä, viikunapuu ja viiniköynnös antavat voimansa."},
	{23, "23 Ja te, Siionin lapset, iloitkaa ja riemuitkaa Herrassa, teidän Jumalassanne, sillä hän antaa teille syyssateen, vanhurskauden mukaan, vuodattaa teille sateen, syyssateen ja kevätsateen, niinkuin entisaikaan."},
	{24, "24 Ja puimatantereet tulevat jyviä täyteen, ja kuurna-altaat pursuvat viiniä ja öljyä."},
	{25, "25 Ja minä korvaan teille ne vuodentulot, jotka heinäsirkka, syöjäsirkka, tuhosirkka ja kalvajasirkka söivät, minun suuri sotajoukkoni, jonka minä lähetin teitä vastaan."},
	{26, "26 Ja te syötte kyllälti ja tulette ravituiksi ja kiitätte Herran, teidän Jumalanne, nimeä, hänen, joka on tehnyt ihmeitä teitä kohtaan. Eikä minun kansani joudu häpeään, iankaikkisesti."},
	{27, "27 Ja te tulette tietämään, että Israelin keskellä olen minä. Ja minä olen Herra, teidän Jumalanne, eikä toista ole. Eikä minun kansani joudu häpeään, iankaikkisesti."},
	{28, "28 Näitten jälkeen minä olen vuodattava Henkeni kaiken lihan päälle, ja teidän poikanne ja tyttärenne ennustavat, vanhuksenne unia uneksuvat, nuorukaisenne näkyjä näkevät."},
	{29, "29 Ja myös palvelijain ja palvelijattarien päälle minä niinä päivinä vuodatan Henkeni."},
	{30, "30 Minä annan näkyä ihmeitä taivaalla ja maassa: verta ja tulta ja savupatsaita;"},
	{31, "31 aurinko muuttuu pimeydeksi ja kuu vereksi, ennenkuin Herran päivä tulee, se suuri ja peljättävä."},
	{32, "32 Ja jokainen, joka huutaa avuksi Herran nimeä, pelastuu. Sillä Siionin vuorella ja Jerusalemissa ovat pelastuneet, niinkuin Herra on sanonut; ja pakoonpäässeitten joukossa ovat ne, jotka Herra kutsuu."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct fi3 poems[] = {
	{1, "1 Sillä katso, niinä päivinä ja siihen aikaan, kun minä käännän Juudan ja Jerusalemin kohtalon,"},
	{2, "2 minä kokoan kaikki pakanakansat, vien ne alas Joosafatin laaksoon ja käyn siellä oikeutta niitten kanssa kansani ja perintöosani, Israelin, tähden. Sillä he ovat hajottaneet sen pakanakansain sekaan, ovat jakaneet minun maani"},
	{3, "3 ja heittäneet minun kansastani arpaa; ovat antaneet pojan porttoa vastaan sekä myyneet tytön viinistä, jonka ovat juoneet."},
	{4, "4 Mitä on teillä sanomista minulle, teilläkin, Tyyro ja Siidon ja kaikki filistealaisten alueet? Tahdotteko te kostaa minulle, mitä minä olen tehnyt, vai itse tehdä minulle jotakin? Nopeasti, kiiruusti minä annan koston kohdata teidän päätänne siitä, mitä olette tehneet,"},
	{5, "5 te, jotka olette ottaneet minun hopeani ja kultani, vieneet minun ihanat kalleuteni temppeleihinne"},
	{6, "6 sekä myyneet Juudan ja Jerusalemin lapsia jaavanilaisille, poistaaksenne heidät kauas omalta maaltansa."},
	{7, "7 Katso, minä herätän heidät liikkeelle siitä paikasta, johon te olette heidät myyneet, ja annan koston teostanne kohdata teidän päätänne:"},
	{8, "8 minä myyn teidän poikianne ja tyttäriänne Juudan poikien käsiin, ja he myyvät ne sabalaisille, kaukaiselle kansalle. Sillä Herra on puhunut."},
	{9, "9 Julistakaa tämä pakanakansain seassa, alkakaa pyhä sota, innostakaa sankareita, lähestykööt, hyökätkööt kaikki soturit."},
	{10, "10 Takokaa vantaanne miekoiksi ja vesurinne keihäiksi. Sanokoon heikko: Minä olen sankari."},
	{11, "11 Käykää avuksi, tulkaa, kaikki kansakunnat joka taholta. He kokoontuvat sinne. Anna, Herra, sankariesi astua sinne alas."},
	{12, "12 Lähtekööt liikkeelle, hyökätkööt kansakunnat Joosafatin laaksoon; sillä siellä hän istuu tuomitsemassa kaikkia pakanakansoja, joka taholta tulleita."},
	{13, "13 Lähettäkää sirppi, sillä sato on kypsynyt. Tulkaa polkemaan, sillä kuurna on täynnä ja kuurna-altaat pursuvat ylitse; sillä heidän pahuutensa on suuri."},
	{14, "14 Meluavia joukkoja, meluavia joukkoja ratkaisulaaksossa! Sillä lähellä on Herran päivä ratkaisulaaksossa."},
	{15, "15 Aurinko ja kuu käyvät mustiksi, ja tähdet kadottavat valonsa."},
	{16, "16 Herra ärjyy Siionista ja antaa äänensä kuulua Jerusalemista, ja taivaat ja maa järkkyvät; mutta Herra on kansansa suoja, Israelin lasten turva."},
	{17, "17 Ja te tulette tietämään, että minä olen Herra, teidän Jumalanne, joka asun Siionissa, pyhällä vuorellani. Ja Jerusalem on oleva pyhä, ja vieraat eivät enää kulje sen läpi."},
	{18, "18 Sinä päivänä vuoret tiukkuvat rypälemehua, ja kukkulat vuotavat maitoa; kaikissa Juudan puronotkoissa virtaa vettä, ja Herran huoneesta juoksee lähde, ja se kastelee Akasialaakson."},
	{19, "19 Egypti tulee autioksi, ja Edom tulee autioksi erämaaksi väkivallan tähden, jota ne ovat tehneet Juudan lapsille, kun ovat vuodattaneet viatonta verta heidän maassansa."},
	{20, "20 Mutta Juuda on oleva asuttu iankaikkisesti ja Jerusalem polvesta polveen."},
	{21, "21 Ja minä julistan heidät puhtaiksi verivelasta, josta en ole heitä puhtaiksi julistanut. Ja Herra on asuva Siionissa."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};