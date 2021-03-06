#include <map>
#include <string>
class Bible15
{
	struct lt1	{ int val; const char *msg; };
	struct lt2	{ int val; const char *msg; };
	struct lt3	{ int val; const char *msg; };
	struct lt4	{ int val; const char *msg; };
	struct lt5	{ int val; const char *msg; };
	struct lt6	{ int val; const char *msg; };
	struct lt7	{ int val; const char *msg; };
	struct lt8	{ int val; const char *msg; };
	struct lt9	{ int val; const char *msg; };
	struct lt10	{ int val; const char *msg; };
public:
static void view1() {
struct lt1 poems[] = {
	{1, "1 Pirmaisiais persų karaliaus Kyro metais, kad įvyktų Jeremijo paskelbtas Viešpaties žodis, Viešpats paragino persų karalių Kyrą, kad jis paskelbtų visoje karalystėje žodžiu ir raštu:"},
	{2, "2 “Taip sako persų karalius Kyras: ‘Viešpats, dangaus Dievas, atidavė man visas žemės karalystes; Jis pavedė man atstatyti Jo namus Jeruzalėje, kuri yra Jude."},
	{3, "3 Kas iš jūsų yra iš Jo tautos, jo Dievas tebūna su juo ir tegrįžta jis į Jeruzalę, kuri yra Jude, ir tegul stato Viešpaties, Izraelio Dievo, kuris yra Jeruzalėje, namus."},
	{4, "4 Visose vietose, kur jis begyventų, pasilikusieji žmonės tepadeda jam sidabru ir auksu, manta ir gyvuliais bei laisvos valios auka Dievo namams Jeruzalėje’ ”."},
	{5, "5 Tuomet Judo ir Benjamino šeimų vyresnieji, kunigai, levitai ir visi, kurių dvasia buvo Dievo sužadinta, pakilo eiti statyti Viešpaties namų Jeruzalėje."},
	{6, "6 Visi aplinkiniai gyventojai juos parėmė sidabriniais ir auksiniais indais, manta, gyvuliais ir brangiomis dovanomis."},
	{7, "7 Karalius Kyras atidavė Viešpaties namų reikmenis, kuriuos Nebukadnecaras buvo atgabenęs iš Jeruzalės ir padėjęs savo dievo namuose."},
	{8, "8 Persų karalius Kyras juos perdavė per savo iždininką Mitredatą, kuris juos suskaitė ir atidavė Judo kunigaikščiui Šešbacarui:"},
	{9, "9 trisdešimt auksinių dubenų, tūkstantį sidabrinių dubenų, dvidešimt devynis peilius,"},
	{10, "10 trisdešimt auksinių taurių, keturis šimtus dešimt sidabrinių taurių ir tūkstantį kitokių indų."},
	{11, "11 Visų auksinių ir sidabrinių indų buvo penki tūkstančiai keturi šimtai. Visa tai paėmė Šešbacaras, belaisviams grįžtant iš Babilono į Jeruzalę."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lt2 poems[] = {
	{1, "1 Tie yra krašto žmonės, kurie grįžo iš nelaisvės, iš tų, kuriuos Babilono karalius Nebukadnecaras buvo ištrėmęs į Babiloną. Jie sugrįžo į Jeruzalę bei Judą, kiekvienas į savo miestą."},
	{2, "2 Su Zorobabeliu grįžo Jozuė, Nehemija, Seraja, Reelaja, Mordechajas, Bilšanas, Misparas, Bigvajas, Rehumas, Baana. Izraelio tautos vyrų skaičius toks:"},
	{3, "3 Parošo palikuonių­du tūkstančiai šimtas septyniasdešimt du;"},
	{4, "4 Šefatijos­trys šimtai septyniasdešimt du;"},
	{5, "5 Aracho­septyni šimtai septyniasdešimt penki;"},
	{6, "6 Pahat Moabo palikuonių iš Jozuės ir Joabo giminės­du tūkstančiai aštuoni šimtai dvylika;"},
	{7, "7 Elamo­tūkstantis du šimtai penkiasdešimt keturi;"},
	{8, "8 Zatuvo­devyni šimtai keturiasdešimt penki;"},
	{9, "9 Zakajo­septyni šimtai šešiasdešimt;"},
	{10, "10 Banio­šeši šimtai keturiasdešimt du;"},
	{11, "11 Bebajo­šeši šimtai dvidešimt trys;"},
	{12, "12 Azgado­tūkstantis du šimtai dvidešimt du;"},
	{13, "13 Adonikamo­šeši šimtai šešiasdešimt šeši;"},
	{14, "14 Bigvajo­du tūkstančiai penkiasdešimt šeši;"},
	{15, "15 Adino­keturi šimtai penkiasdešimt keturi;"},
	{16, "16 Atero palikuonių iš Jehizkijos­ devyniasdešimt aštuoni;"},
	{17, "17 Becajo­trys šimtai dvidešimt trys;"},
	{18, "18 Joros­šimtas dvylika;"},
	{19, "19 Hašumo­du šimtai dvidešimt trys;"},
	{20, "20 Gibaro­devyniasdešimt penki;"},
	{21, "21 Betliejaus vyrų­šimtas dvidešimt trys;"},
	{22, "22 Netofos vyrų­penkiasdešimt šeši;"},
	{23, "23 Anatoto vyrų­šimtas dvidešimt aštuoni;"},
	{24, "24 Azmaveto vyrų­keturiasdešimt du;"},
	{25, "25 Kirjat Arimo, Kefyros ir Beeroto vyrų­septyni šimtai keturiasdešimt trys;"},
	{26, "26 Ramos ir Gebos vyrų­šeši šimtai dvidešimt vienas;"},
	{27, "27 Michmašo vyrų­šimtas dvidešimt du;"},
	{28, "28 Betelio ir Ajo vyrų­du šimtai dvidešimt trys;"},
	{29, "29 Nebojo palikuonių­penkiasdešimt du;"},
	{30, "30 Magbišo­šimtas penkiasdešimt šeši;"},
	{31, "31 kito Elamo­tūkstantis du šimtai penkiasdešimt keturi;"},
	{32, "32 Harimo­trys šimtai dvidešimt;"},
	{33, "33 Lodo, Hadido ir Onojo­septyni šimtai dvidešimt penki;"},
	{34, "34 Jericho­trys šimtai keturiasdešimt penki;"},
	{35, "35 Senavos­trys tūkstančiai šeši šimtai trisdešimt."},
	{36, "36 Kunigų: Jedajos palikuonių iš Jozuės namų­devyni šimtai septyniasdešimt trys;"},
	{37, "37 Imero­tūkstantis penkiasdešimt du;"},
	{38, "38 Pašhūro­tūkstantis du šimtai keturiasdešimt septyni;"},
	{39, "39 Harimo­tūkstantis septyniolika."},
	{40, "40 Levitų: Jozuės ir Kadmielio palikuonių iš Hodavijos sūnų­septyniasdešimt keturi."},
	{41, "41 Giedotojų: Asafo palikuonių­ šimtas dvidešimt aštuoni."},
	{42, "42 Vartininkų: Šalumo, Atero, Talmono, Akubo, Hatitos ir Šobajo palikuonių­iš viso šimtas trisdešimt devyni."},
	{43, "43 Šventyklos tarnai: Cihos, Hasufos, Tabaoto,"},
	{44, "44 Keroso, Siacho, Padono,"},
	{45, "45 Lebanos, Hagabos, Akubo,"},
	{46, "46 Hagabo, Šalmajo, Hanano,"},
	{47, "47 Gidelio, Gaharo, Reajos,"},
	{48, "48 Recino, Nekodos, Gazamo,"},
	{49, "49 Uzos, Paseaho, Besajo,"},
	{50, "50 Asnos, Meunimo, Nefusimo,"},
	{51, "51 Bakbuko, Hakufos, Harhūro,"},
	{52, "52 Bacluto, Mehidos, Haršos,"},
	{53, "53 Barkoso, Siseros, Temaho,"},
	{54, "54 Neciacho ir Hatifos palikuonys."},
	{55, "55 Saliamono tarnų palikuonys: Sotajo, Sofereto, Perudos,"},
	{56, "56 Jaalos, Darkono, Gidelio,"},
	{57, "57 Šefatijos, Hatilo, Pocheret Cebaimo ir Amio palikuonys."},
	{58, "58 Šventyklos ir Saliamono tarnų palikuonių buvo trys šimtai devyniasdešimt du."},
	{59, "59 Šitie atvyko iš Tel Melacho, Tel Haršo, Kerubo, Adono ir Imero, bet negalėjo įrodyti savo tėvų ir savo kilmės, ar jie buvo kilę iš Izraelio:"},
	{60, "60 Delajos, Tobijos ir Nekodos palikuonių­šeši šimtai penkiasdešimt du."},
	{61, "61 Kunigai: Hobajos, Hakoco ir Barzilajaus (jis buvo vedęs vieną iš gileadiečo Barzilajaus dukterų ir buvo vadinamas jų vardu) palikuonys."},
	{62, "62 Jie ieškojo savo vardų giminių sąrašuose, tačiau jų nesurado; todėl buvo atskirti nuo kunigystės kaip susitepę."},
	{63, "63 Tiršata uždraudė jiems valgyti labai šventą maistą, kol atsiras kunigas su Urimu ir Tumimu."},
	{64, "64 Iš viso žmonių buvo keturiasdešimt du tūkstančiai trys šimtai šešiasdešimt,"},
	{65, "65 neskaičiuojant jų tarnų ir tarnaičių, kurių buvo septyni tūkstančiai trys šimtai trisdešimt septyni. Be to, jie turėjo du šimtus giedotojų."},
	{66, "66 Žirgų buvo septyni šimtai trisdešimt šeši, mulų­du šimtai keturiasdešimt penki,"},
	{67, "67 kupranugarių­keturi šimtai trisdešimt penki, asilų­šeši tūkstančiai septyni šimtai dvidešimt."},
	{68, "68 Kai kurie šeimų vadai, atėję prie Viešpaties namų Jeruzalėje, davė savo noru aukų Dievo namams;"},
	{69, "69 jie davė pagal savo išgales iždui šešiasdešimt vieną tūkstantį drachmų aukso, penkis tūkstančius minų sidabro ir šimtą apdarų kunigams."},
	{70, "70 Kunigai, levitai, tautos dalis, giedotojai, vartininkai ir šventyklos tarnai apsigyveno savo miestuose; ir visas Izraelis apsigyveno savo miestuose."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lt3 poems[] = {
	{1, "1 Izraelitams apsigyvenus savuose miestuose, septintą mėnesį visi vieningai susirinko į Jeruzalę."},
	{2, "2 Tada Jehocadako sūnus Jozuė su savo broliais kunigais ir Salatielio sūnus Zorobabelis su savo broliais atstatė Izraelio Dievo aukurą deginamosioms aukoms, kaip parašyta Dievo vyro Mozės įstatyme."},
	{3, "3 Jie atstatė aukurą jo senoje vietoje, nors ir bijojo aplinkui gyvenančių tautų. Jie kas rytą ir vakarą aukojo ant jo deginamąsias aukas Viešpačiui."},
	{4, "4 Jie šventė Palapinių šventę, kaip parašyta, ir kasdien aukojo deginamųjų aukų tiek, kiek buvo nustatyta tą dieną."},
	{5, "5 Be to, jie aukojo nuolatines deginamąsias, jauno mėnulio, visų metinių Viešpaties švenčių ir laisvos valios aukas Viešpačiui."},
	{6, "6 Septintojo mėnesio pirmąją dieną jie pradėjo aukoti Viešpačiui deginamąsias aukas, bet Viešpaties šventyklos pamatai dar nebuvo padėti."},
	{7, "7 Jie davė pinigų akmenskaldžiams ir statybininkams, o sidoniečiams ir Tyro gyventojams­ maisto, gėrimo ir aliejaus, kad jūra atgabentų kedro medžių iš Libano į Jopę, kaip jiems persų karalius Kyras buvo įsakęs."},
	{8, "8 Po savo sugrįžimo antrųjų metų antrąjį mėnesį, Salatielio sūnus Zorobabelis ir Jehocadako sūnus Jozuė su visais savo broliais kunigais, levitais ir visais, grįžusiais iš nelaisvės į Jeruzalę, pradėjo ir paskyrė levitus, dvidešimties metų ir vyresnius, Viešpaties namų statybos darbams prižiūrėti."},
	{9, "9 Jozuė ir jo sūnūs bei broliai, Kadmielis ir jo sūnūs iš Judo sūnų, Henadado sūnūs, jų broliai ir levitai prižiūrėjo darbininkus Dievo namų statyboje."},
	{10, "10 Statybininkams padėjus Viešpaties šventyklos pamatus, kunigai, apsirengę savo rūbais, sustojo su trimitais rankose, o levitai, Asafo sūnūs, su cimbolais šlovino Viešpatį pagal Izraelio karaliaus Dovydo nurodymus."},
	{11, "11 Jie pakaitomis giedojo, šlovindami ir dėkodami Viešpačiui: “Jis yra geras, ir Jo gailestingumas Izraeliui amžinas”. Kai jie šlovino Viešpatį, visi žmonės garsiai šaukė, nes Viešpaties namų pamatai buvo padėti."},
	{12, "12 Daugelis kunigų, levitų ir šeimų vyresniųjų, kurie buvo seni žmonės ir savo akimis matė pirmuosius namus, garsiai verkė, matydami šių namų pamatus; tuo tarpu kiti garsiai šaukė iš džiaugsmo."},
	{13, "13 Nebuvo galima atskirti džiaugsmo šūksnių ir verkiančiųjų balso, nes žmonės garsiai šaukė ir garsas buvo girdimas toli."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct lt4 poems[] = {
	{1, "1 Judo ir Benjamino priešai, išgirdę, kad grįžę tremtiniai stato šventyklą Viešpačiui, Izraelio Dievui,"},
	{2, "2 atėjo pas Zorobabelį ir Izraelio šeimų vyresniuosius ir jiems sakė: “Mes norime statyti kartu su jumis, nes mes, kaip ir jūs, ieškome jūsų Dievo ir Jam aukojame nuo Asarhadono, Asirijos karaliaus, kuris mus čia atvedė, laikų”."},
	{3, "3 Zorobabelis, Jozuė ir kiti Izraelio šeimų vyresnieji jiems atsakė: “Netinka jums kartu su mumis statyti namus mūsų Dievui, mes vieni statysime Viešpačiui, Izraelio Dievui, kaip mums įsakė persų karalius Kyras”."},
	{4, "4 Krašto žmonės silpnino Judo žmones ir trukdė jiems statyti."},
	{5, "5 Jie papirko patarėjus, norėdami atgrasinti juos nuo jų tikslo per visas persų karaliaus Kyro dienas iki persų karaliaus Darijaus laikų."},
	{6, "6 Pradėjus karaliauti Ahasverui, jie parašė kaltinimą prieš Judo ir Jeruzalės gyventojus."},
	{7, "7 Artakserkso dienomis Bišlamas, Mitredatas, Tabeelis ir kiti jų bendrai parašė persų karaliui Artakserksui laišką. Laiškas buvo parašytas aramėjų kalba."},
	{8, "8 Patarėjas Rehumas ir raštininkas Šimšajas rašė karaliui Artakserksui tokio turinio laišką prieš Jeruzalę:"},
	{9, "9 “Patarėjas Rehumas, raštininkas Šimšajas ir kiti jų bendrai iš Dinajo, Afarsato, Tarpelio, Afaro, Erecho, Babilono, Sūzų, Dehavo, Elamo"},
	{10, "10 ir kitų tautų, kurias didysis ir garbingasis Asnaparas atvedė ir įkurdino Samarijos miestuose ir kitose vietovėse šiapus upės”."},
	{11, "11 Tai nuorašas laiško, kurį jie pasiuntė: “Karaliui Artakserksui. Tavo tarnai, vyrai iš šiapus upės,"},
	{12, "12 praneša karaliui, kad žydai, kurie iš tavo teritorijų atvyko pas mus, apsigyveno Jeruzalėje ir stato tą maištingą ir blogą miestą. Jie stato sienas ir stiprina pamatus."},
	{13, "13 Tebūna žinoma karaliui, kad jei tas miestas bus pastatytas ir jo sienos užbaigtos, jie nebemokės mokesčių, duoklės ir muito; karaliaus metinės pajamos dėl to sumažės."},
	{14, "14 Kadangi mes išlaikomi karaliaus rūmų ir nenorime, kad karaliaus garbė būtų pažeminta, todėl pasiuntėme pranešimą karaliui."},
	{15, "15 Tegul paieško žinių apie tą miestą savo tėvų metraščių knygose. Ten atrasi, kad tas miestas yra maištingas ir pavojingas karaliams bei kraštams. Maištai jame keliami nuo seno, todėl tas miestas ir buvo sugriautas."},
	{16, "16 Mes pranešame karaliui, kad jei tas miestas bus pastatytas ir jo sienos užbaigtos, tu neteksi valdų šioje upės pusėje”."},
	{17, "17 Karalius pasiuntė tokį atsakymą patarėjui Rehumui, raštininkui Šimšajui ir kitiems jų bendrams, kurie gyvena Samarijoje ir anapus upės: “Ramybė jums!"},
	{18, "18 Jūsų atsiųstas laiškas buvo man perskaitytas."},
	{19, "19 Man įsakius, buvo ieškota ir rasta, kad tas miestas jau nuo seno sukildavo prieš karalius ir maištai bei vaidai kildavo jame."},
	{20, "20 Galingi karaliai viešpatavo Jeruzalėje ir valdė visą kraštą anapus upės; jiems mokėjo mokesčius, duoklę ir muitus."},
	{21, "21 Įsakykite tiems vyrams liautis statyti miestą, kol bus duotas jiems mano įsakymas."},
	{22, "22 Elkitės rūpestingai, kad karaliaus reikalai nenukentėtų”."},
	{23, "23 Kai karaliaus Artakserkso laiško nuorašas buvo perskaitytas Rehumui, raštininkui Šimšajui ir jų bendrams, jie skubiai nuėjo į Jeruzalę pas žydus ir jėga sustabdė statybą."},
	{24, "24 Dievo namų darbas Jeruzalėje sustojo ir nevyko iki antrųjų Persijos karaliaus Darijaus karaliavimo metų."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct lt5 poems[] = {
	{1, "1 Pranašas Agėjas ir Idojo sūnus Zacharija Izraelio Dievo vardu pranašavo žydams, kurie buvo Jude ir Jeruzalėje."},
	{2, "2 Tada Salatielio sūnus Zorobabelis ir Jehocadako sūnus Jozuė pradėjo statyti Dievo namus Jeruzalėje; su jais buvo Dievo pranašai ir jiems padėjo."},
	{3, "3 Tuo laiku pas juos atėjo krašto šioje upės pusėje valdytojas Tatnajas ir Šetar Boznajas su savo bendrais ir jų klausė: “Kas jums įsakė statyti šituos namus ir taisyti šitas sienas?”"},
	{4, "4 Mes atsakėme jiems, kuo vardu tie vyrai, kurie stato šitą pastatą."},
	{5, "5 Dievo akis buvo ant žydų vyresniųjų, todėl jie galėjo tęsti statybą, kol pranešimas pasieks Darijų ir bus gautas atsakymas šiuo reikalu."},
	{6, "6 Nuorašas laiško, kurį Tatnajas, krašto šioje upės pusėje valdytojas, Šetar Boznajas ir jų bendrai afarsakai, kurie buvo šiapus upės, pasiuntė karaliui Darijui:"},
	{7, "7 “Ramybė karaliui Darijui!"},
	{8, "8 Tebūna karaliui žinoma, kad mes nuvykome į Judėją, prie didžiojo Dievo namų. Jie statomi iš didelių akmenų, sienose rąstai dedami. Šitas darbas vykdomas sparčiai ir klesti jų rankose."},
	{9, "9 Mes klausėme vyresniųjų: ‘Kas jums įsakė statyti šituos namus ir taisyti šitas sienas?’"},
	{10, "10 Taip pat klausėme jų vardų, kad tau praneštume ir galėtume užrašyti jiems vadovaujančių vyrų vardus."},
	{11, "11 Jie atsakė: ‘Mes esame dangaus ir žemės Dievo tarnai ir atstatome namus, kurie prieš daugelį metų buvo pastatyti. Juos pastatė ir užbaigė garsus Izraelio karalius."},
	{12, "12 Bet kadangi mūsų tėvai užrūstino dangaus Dievą, Jis atidavė juos chaldėjui Nebukadnecarui, Babilono karaliui; jis sugriovė šituos namus, o tautą išvedė į Babiloną."},
	{13, "13 Tačiau pirmaisiais Babilono karaliaus Kyro metais karalius davė leidimą atstatyti šituos Dievo namus."},
	{14, "14 Taip pat ir auksinius bei sidabrinius Dievo namų indus, kuriuos Nebukadnecaras buvo išgabenęs iš Jeruzalės šventyklos į Babilono šventyklą, karalius Kyras paėmė iš Babilono šventyklos, perdavė Šešbacarui, kurį jis paskyrė valdytoju,"},
	{15, "15 ir įsakė: ‘Imk šituos indus ir juos nugabenk į Jeruzalėje esančią šventyklą. Atstatykite Dievo namus buvusioje vietoje’."},
	{16, "16 Šešbacaras atvykęs padėjo Jeruzalėje Dievo namų pamatus. Nuo to laiko iki šiol jie tebestatomi ir dar nebaigti’."},
	{17, "17 Jei karalius mano esant reikalinga, tepaieško Babilone, karaliaus saugykloje, ar tikrai karalius Kyras davė įsakymą atstatyti Dievo namus Jeruzalėje, ir tegul karalius mums atsiunčia savo valią šituo reikalu”."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct lt6 poems[] = {
	{1, "1 Karalius Darijus įsakė ieškoti žinių Babilono knygų saugykloje."},
	{2, "2 Medų krašte Ekbatanos rūmuose buvo surastas ritinys, kuriame buvo taip parašyta:"},
	{3, "3 “Pirmaisiais karaliaus Kyro metais karalius davė įsakymą Jeruzalės Dievo namų reikalu: ‘Turi būti atstatyti namai, kur buvo aukojamos aukos, ir jiems turi būti padėti tvirti pamatai. Jų aukštis ir plotis turi būti šešiasdešimt uolekčių."},
	{4, "4 Turi būti trys eilės didelių akmenų ir viena eilė rąstų. Išlaidas apmokės karaliaus namai."},
	{5, "5 Auksiniai ir sidabriniai Dievo namų indai, kuriuos Nebukadnecaras buvo atgabenęs iš Jeruzalės šventyklos į Babiloną, turi būti nugabenti į Jeruzalėje statomą šventyklą, į savo vietą, ir padėti Dievo namuose’ ”."},
	{6, "6 “Dabar, Tatnajau, valdytojau anapus upės, Šetar Boznajau ir jūsų bendrai afarsakai anapus upės, atsitraukite nuo jų."},
	{7, "7 Palikite Dievo namų darbą. Netrukdykite žydų valdytojui ir vyresniesiems statyti Dievo namų jų buvusioje vietoje."},
	{8, "8 Be to, įsakau, kad jūs padengtumėte žydų vyresniesiems visas Dievo namų išlaidas iš karaliaus turtų, iš mokesčių, surenkamų anapus upės, kad jų darbas nebūtų trukdomas."},
	{9, "9 Ko tik reikia dangaus Dievui deginamosioms aukoms: jaučių, avinų, ėriukų, kviečių, druskos, vyno ir aliejaus, kaip pasakys Jeruzalėje esą kunigai, privalote jiems kasdien nedelsiant suteikti,"},
	{10, "10 kad jie aukotų malonaus kvapo aukas dangaus Dievui ir melstųsi už karaliaus ir jo vaikų gyvybę."},
	{11, "11 Be to, aš įsakiau, kad kiekvienas, kuris sulaužys šitą įsakymą, bus prikaltas prie ištraukto iš jo namų rąsto, o jo namai paversti griuvėsių krūva."},
	{12, "12 O Dievas, kuris ten paskyrė savo vardui buveinę, tepašalina kiekvieną karalių ir tautą, kurie išdrįstų priešintis tam įsakymui ir siektų sunaikinti Jeruzalėje Dievo namus. Aš, Darijus, daviau įsakymą ir jis turi būti nedelsiant vykdomas”."},
	{13, "13 Tada krašto šiapus upės valdytojas Tatnajas, Šetar Boznajas ir jų bendrai nedelsiant įvykdė karaliaus Darijaus įsakymą."},
	{14, "14 Žydų vyresnieji statė šventyklą, ir jiems sekėsi pagal pranašų Agėjo ir Idojo sūnaus Zacharijos pranašystes. Jie statė ir užbaigė įsakius Izraelio Dievui ir persų karaliams Kyrui, Darijui ir Artakserksui."},
	{15, "15 Namai buvo užbaigti šeštaisiais karaliaus Darijaus karaliavimo metais, Adaro mėnesio trečią dieną."},
	{16, "16 Tuomet izraelitai, kunigai, levitai ir visi, sugrįžę iš nelaisvės, su džiaugsmu pašventino Dievo namus."},
	{17, "17 Pašventindami Dievo namus, jie aukojo šimtą jaučių, du šimtus avinų, keturis šimtus ėriukų ir auką už nuodėmę, už visą Izraelį­dvylika ožių pagal Izraelio giminių skaičių."},
	{18, "18 Kunigai buvo paskirstyti skyriais ir levitai pagal jų pareigas, kad tarnautų Dievui Jeruzalėje, kaip parašyta Mozės knygoje."},
	{19, "19 Pirmo mėnesio keturioliktą dieną grįžę tremtiniai šventė Paschą."},
	{20, "20 Visi kunigai ir levitai buvo apsivalę ir švarūs. Jie pjovė Paschos avinėlį visiems grįžusiems tremtiniams, savo broliams kunigams ir sau."},
	{21, "21 Paschos avinėlį valgė grįžusieji iš tremties izraelitai ir visi, kurie buvo atsiskyrę nuo krašto pagonių nešvaros ir prisijungę prie jų, kad ieškotų Viešpaties, Izraelio Dievo."},
	{22, "22 Septynias dienas jie džiaugsmingai šventė Neraugintos duonos šventę, nes Viešpats suteikė jiems džiaugsmo ir palenkė į juos Asirijos karaliaus širdį, kad sustiprintų juos Izraelio Dievo namų statyboje."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct lt7 poems[] = {
	{1, "1 Po šitų įvykių, persų karaliui Artakserksui karaliaujant, atėjo Ezra, sūnus Serajos, sūnaus Azarijos, sūnaus Hilkijos,"},
	{2, "2 sūnaus Šalumo, sūnaus Cadoko, sūnaus Ahitubo,"},
	{3, "3 sūnaus Amarijos, sūnaus Azarijos, sūnaus Merajoto,"},
	{4, "4 sūnaus Zerachijos, sūnaus Uzio, sūnaus Bukio,"},
	{5, "5 sūnaus Abišūvos, sūnaus Finehaso, sūnaus Eleazaro, sūnaus vyriausiojo kunigo Aarono."},
	{6, "6 Šitas Ezra išėjo iš Babilono; jis buvo geras žinovas Mozės įstatymo, kurį davė Viešpats, Izraelio Dievas. Karalius suteikė jam viską, ko jis prašė, nes Viešpaties, jo Dievo, ranka buvo su juo."},
	{7, "7 Karaliaus Artakserkso septintaisias metais į Jeruzalę su juo išėjo kai kurie izraelitai, kunigai, levitai, giedotojai, vartininkai ir šventyklos tarnai."},
	{8, "8 Jis atėjo į Jeruzalę septintų karaliaus metų penktą mėnesį."},
	{9, "9 Ezra išėjo iš Babilono pirmo mėnesio pirmą dieną, o penkto mėnesio pirmą dieną jis atėjo į Jeruzalę, nes gera Dievo ranka buvo ant jo."},
	{10, "10 Ezra paruošė savo širdį tyrinėti Viešpaties įstatymą, jį vykdyti ir mokyti Izraelyje jo nuostatų ir teisės."},
	{11, "11 Tai yra nuorašas laiško, kurį Artakserksas davė kunigui Ezrai, kuris buvo Viešpaties įsakymų ir Jo nuostatų Izraelyje žinovas:"},
	{12, "12 “Artakserksas, karalių karalius, kunigui Ezrai, dangaus Dievo įstatymo žinovui."},
	{13, "13 Aš įsakiau, kad kiekvienas izraelitas, kunigas bei levitas mano karalystėje gali vykti savo noru į Jeruzalę drauge su tavimi,"},
	{14, "14 nes tu esi karaliaus ir jo septynių patarėjų siunčiamas į Judą ir Jeruzalę nustatyti, ar vykdomas tavo Dievo įstatymas, kuris yra tavo rankoje."},
	{15, "15 Tu nugabensi sidabrą ir auksą, kurį karalius ir jo patarėjai padovanojo Izraelio Dievui, kurio buveinė yra Jeruzalėje,"},
	{16, "16 taip pat sidabrą ir auksą, kurį tu gausi Babilono krašte, kartu su tautos ir kunigų dovanomis, kurias jie padovanos savo Dievo namams, esantiems Jeruzalėje."},
	{17, "17 Nedelsdamas nupirk už tuos pinigus jaučių, avių, ėriukų ir kartu su jiems priklausančiomis duonos bei geriamosiomis aukomis aukok ant aukuro jūsų Dievo namuose Jeruzalėje."},
	{18, "18 Su likusiu sidabru ir auksu daryk, kas tau ir tavo broliams atrodys reikalinga, pagal jūsų Dievo valią."},
	{19, "19 Indus, kurie tau perduodami tavo Dievo namų reikalams, padėk priešais Jeruzalės Dievą."},
	{20, "20 Visa kita, ko reikės tavo Dievo namams, jei matysi esant reikalinga, paimk iš karaliaus iždo sandėlių."},
	{21, "21 Aš, karalius Artakserksas, įsakiau visiems iždininkams anapus upės: ‘Ko tik kunigas Ezra, dangaus Dievo įstatymo žinovas, iš jūsų reikalaus, nedelsdami duokite."},
	{22, "22 Iki šimto talentų sidabro, šimto saikų kviečių, šimto batų vyno, šimto batų aliejaus ir neribotą kiekį druskos."},
	{23, "23 Ko tik reikalaus dangaus Dievas, privalote padaryti Dievo namams, kad Jo rūstybė nepaliestų karaliaus ir jo sūnų."},
	{24, "24 Taip pat pranešu jums, kad neleidžiu apdėti jokiais mokesčiais kunigų, levitų, giedotojų, vartininkų ir šventyklos tarnų’."},
	{25, "25 O tu, Ezra, Dievo duota išmintimi paskirk mokytojų ir teisėjų, kurie teistų anapus upės gyvenančius žmones, pažįstančius tavo Dievo įstatymą; o kurie tų įstatymų nepažįsta, tuos pamokyk."},
	{26, "26 Kas nevykdys tavo Dievo ar karaliaus įstatymo, tas turi būti baudžiamas mirtimi, ištrėmimu, turto atėmimu arba kalėjimu”."},
	{27, "27 Garbė Viešpačiui, mūsų tėvų Dievui, kuris įdėjo tai į karaliaus širdį, kad Viešpaties namai Jeruzalėje būtų pagerbti."},
	{28, "28 Jis man suteikė malonę karaliaus, jo patarėjų ir galingų karaliaus kunigaikščių akyse. Aš buvau padrąsintas, kai Viešpaties, mano Dievo, ranka buvo ant manęs ir surinkau Izraelio vyresniuosius, kad jie eitų su manimi."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct lt8 poems[] = {
	{1, "1 Sąrašas šeimų vyresniųjų pagal jų kilmę, kurie, karaliui Artakserksui viešpataujant, išėjo su manimi iš Babilono:"},
	{2, "2 iš Finehaso palikuonių­Geršomas, iš Itamaro­Danielius, iš Dovydo­Hatušas,"},
	{3, "3 iš Šechanijos sūnų, Parošo palikuonių,­Zacharija, kartu su juo buvo užrašyta šimtas penkiasdešimt vyrų;"},
	{4, "4 iš Pahat Moabo­Zerachijos sūnus Eljehoenajas ir su juo du šimtai vyrų;"},
	{5, "5 iš Šechanijos­Jahazielio sūnus ir su juo trys šimtai vyrų;"},
	{6, "6 iš Adino­Jehonatano sūnus Ebedas ir su juo penkiasdešimt vyrų;"},
	{7, "7 iš Elamo­Atalijos sūnus Izaija ir su juo septyniasdešimt vyrų;"},
	{8, "8 iš Šefatijos­Mykolo sūnus Zebadija ir su juo aštuoniasdešimt vyrų;"},
	{9, "9 iš Joabo­Jehielio sūnus Abdija ir su juo du šimtai aštuoniolika vyrų;"},
	{10, "10 iš Šelomito­Josifijos sūnus ir su juo šešiasdešimt vyrų;"},
	{11, "11 iš Bebajo­Bebajo sūnus Zacharija ir su juo dvidešimt aštuoni vyrai;"},
	{12, "12 iš Azgado­Hakatano sūnus Johananas ir su juo šimtas dešimt vyrų;"},
	{13, "13 iš Adonikamo sūnų­Elifeletas, Jejelis, Šemaja ir su jais šešiasdešimt vyrų, kurie buvo paskutinieji;"},
	{14, "14 iš Bigvajo­Utajas, Zabudas ir su jais septyniasdešimt vyrų."},
	{15, "15 Aš juos sušaukiau prie upės, tekančios į Ahavą. Ten mes pasilikome palapinėje tris dienas. Aš apžiūrėjau žmones ir kunigus, tačiau tarp jų neradau nė vieno levito."},
	{16, "16 Tada aš pasikviečiau vyresniuosius: Eliezerą, Arielį, Semają, Elnataną, Jaribą, Elnataną, Nataną, Zachariją, Mešulamą, ir mokytojus: Jehojaribą ir Elnataną."},
	{17, "17 Juos pasiunčiau pas Idoją, Kasifijos vietovės vyresnįjį, prašydamas atsiųsti mums žmonių, kurie tarnautų Dievo namuose."},
	{18, "18 Gera mūsų Dievo ranka buvo ant mūsų, ir jie atsivedė išmintingą vyrą iš palikuonių Machlio, sūnaus Levio, sūnaus Izraelio,­Šerebiją su jo sūnumis ir broliais, aštuoniolika vyrų;"},
	{19, "19 iš Merario palikuonių­Hašabiją ir Izaiją su jo broliais ir sūnumis, dvidešimt vyrų;"},
	{20, "20 ir šventyklos tarnų, kuriuos Dovydas ir kunigaikščiai buvo paskyrę tarnais levitams, buvo du šimtai dvidešimt vyrų."},
	{21, "21 Prie Ahavos upės paskelbiau pasninką, kad nusižemintume prieš savo Dievą ir melstume laimingo kelio sau, savo vaikams ir savo turtui."},
	{22, "22 Aš gėdijausi prašyti iš karaliaus karių ir raitelių, kad jie mus apgintų nuo užpuolikų kelyje, nes buvau pasakęs karaliui: “Mūsų Dievo ranka yra ant visų, kurie Jo ieško, bet Jo rūstybė ir galia prieš tuos, kurie Jį apleidžia”."},
	{23, "23 Mes pasninkavome ir meldėme savo Dievo dėl šito, ir Jis išklausė mus."},
	{24, "24 Aš parinkau iš vyresniųjų kunigų dvylika vyrų: Šerebiją, Hašabiją ir su jais dešimt jų brolių,"},
	{25, "25 ir pasvėriau jiems sidabrą, auksą ir indus, Dievo namams skirtas dovanas, kurias paaukojo karalius, jo patarėjai, jo kunigaikščiai ir izraelitai."},
	{26, "26 Aš padaviau jiems šešis šimtus penkiasdešimt talentų sidabro, sidabrinių indų, sveriančių šimtą talentų, šimtą talentų aukso,"},
	{27, "27 dvidešimt auksinių taurių tūkstančio drachmų vertės ir du indus iš geriausio, blizgančio kaip auksas, vario"},
	{28, "28 ir tariau: “Jūs esate šventi Viešpačiui, indai taip pat šventi. Sidabras ir auksas yra laisvos valios aukos Viešpačiui, jūsų tėvų Dievui."},
	{29, "29 Budėkite ir saugokite tai, kol pasversite Jeruzalėje, Viešpaties namuose, kunigų, levitų ir Izraelio giminių vadų akivaizdoje”."},
	{30, "30 Kunigai ir levitai paėmė pasvertą sidabrą, auksą ir indus, kuriuos jie turėjo nugabenti į Jeruzalę, į Dievo namus."},
	{31, "31 Pirmo mėnesio dvyliktą dieną išėjome nuo Ahavos upės Jeruzalės link. Dievo ranka buvo ant mūsų, ir Jis saugojo mus nuo priešų ir užpuolikų."},
	{32, "32 Atėję į Jeruzalę, ten pasilikome tris dienas."},
	{33, "33 Ketvirtą dieną sidabras, auksas ir indai buvo pasverti Dievo namuose ir perduoti kunigui Meremotui, Ūrijos sūnui; su juo buvo Finehaso sūnus Eleazaras ir levitai: Jozuės sūnus Jehozabadas ir Binujo sūnus Noadija."},
	{34, "34 Viskas buvo suskaičiuota, pasverta ir surašyta."},
	{35, "35 Sugrįžę iš nelaisvės tremtiniai aukojo deginamąsias aukas Izraelio Dievui: dvylika jaučių už visą Izraelį, devyniasdešimt šešis avinus, septyniasdešimt septynis ėriukus, dvylika ožių aukai už nuodėmę; tai buvo deginamoji auka Viešpačiui."},
	{36, "36 Jie įteikė karaliaus įsakymus vietininkams ir krašto šiapus upės valdytojams, o šitie teikė paramą tautai ir Dievo namams."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view9() {
struct lt9 poems[] = {
	{1, "1 Po to prie manęs priėjo kunigaikščiai ir kalbėjo: “Izraelio tauta, kunigai ir levitai neatsiskyrė nuo šio krašto tautų: kanaaniečių, hetitų, perizų, jebusiečių, amonitų, moabitų, egiptiečių bei amoritų ir jų daromų bjaurysčių."},
	{2, "2 Jie ir jų vaikai ima į žmonas jų dukteris. Tuo būdu šventa sėkla susimaišė su krašto tautomis. Kunigaikščiai ir vyresnieji buvo pirmieji šiame nusikaltime”."},
	{3, "3 Išgirdęs visa tai, perplėšiau savo drabužį ir apsiaustą, roviau galvos ir barzdos plaukus ir sėdėjau sukrėstas."},
	{4, "4 Tuomet susirinko prie manęs visi, kurie drebėjo prieš Izraelio Dievo žodžius dėl tremtinių neištikimybės. O aš sėdėjau sukrėstas iki vakarinės aukos."},
	{5, "5 Vakarinės aukos metu atsikėliau iš savo liūdesio vietos perplėštais rūbais, atsiklaupiau ir, iškėlęs rankas į Viešpatį, savo Dievą,"},
	{6, "6 tariau: “Mano Dieve, man gėda pakelti akis į Tave, nes mūsų nusikaltimai peraugo mus, o mūsų kaltė siekia dangų."},
	{7, "7 Nuo savo tėvų laikų iki šios dienos mes labai nusikaltome; dėl mūsų nusikaltimų mes, mūsų karaliai ir kunigai buvome atiduoti į kitų kraštų karalių rankas ir jų kardui, buvome jų nelaisvėje apiplėšti ir išniekinti."},
	{8, "8 Dabar trumpam laikui Viešpats, mūsų Dievas, parodė savo malonę, palikdamas mums išgelbėtą likutį ir duodamas kuolelį savo šventoje vietoje; taip Dievas atvėrė mūsų akis ir leido mums truputį atsigauti mūsų vergystėje."},
	{9, "9 Mes esame vergai, tačiau mūsų Dievas neapleido mūsų vergystėje; Jis suteikė mums malonę persų karalių akyse, kad jie leistų mums atsigauti ir atstatyti savo Dievo namus iš griuvėsių ir duotų mums sieną Jude ir Jeruzalėje."},
	{10, "10 O dabar, mūsų Dieve, ką mes pasakysime dėl šito? Mes apleidome Tavo įsakymus,"},
	{11, "11 kuriuos Tu mums davei per savo tarnus pranašus, sakydamas: ‘Kraštas, kurį jūs einate paveldėti, yra suteptas. Jį sutepė krašto tautos savo bjaurystėmis ir pripildė jį savo nešvarumais nuo vieno krašto iki kito."},
	{12, "12 Todėl neleiskite savo dukterų už jų sūnų ir neimkite jų dukterų savo sūnums; nesiekite jų gėrybių nė taikos su jais, kad būtumėte stiprūs ir valgytumėte krašto gėrybes, ir paliktumėte kaip paveldėjimą savo vaikams’."},
	{13, "13 Kai visa tai užgriuvo ant mūsų už mūsų piktus darbus ir didelius nusikaltimus, vis dėlto Tu, mūsų Dieve, baudei mus švelniau, negu buvome verti, ir davei mums išgelbėjimą."},
	{14, "14 Argi mes vėl galėtume laužyti Tavo įsakymus ir susigiminiuoti vedybomis su šiomis bjauriomis tautomis? Argi Tu, užsirūstinęs ant mūsų, nesunaikinsi mūsų iki galo, nepalikdamas nė vieno, kuris išsigelbėtų?"},
	{15, "15 Viešpatie, Izraelio Dieve, Tu esi teisus. Tu išgelbėjai mūsų likutį. Štai mes esame Tavo akivaizdoje su savo kaltėmis, nors neturėtume būti Tavo akivaizdoje dėl to”."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view10() {
struct lt10 poems[] = {
	{1, "1 Kai Ezra, klūpodamas ir verkdamas, meldėsi ir išpažino savo ir tautos nuodėmes prie Dievo namų, didelis būrys vyrų, moterų ir vaikų iš Izraelio, susirinkę aplink jį, graudžiai verkė."},
	{2, "2 Tada Jehielio sūnus Šechanija iš Elamo palikuonių atsiliepė: “Mes nusikaltome savo Dievui, vesdami svetimtautes moteris, tačiau dar yra vilties Izraeliui."},
	{3, "3 Padarykime sandorą su Dievu, kad atleisime visas žmonas ir iš jų gimusius vaikus, klausydami Viešpaties ir tų, kurie dreba prieš mūsų Dievo įsakymus. Darykime, kaip reikalauja įstatymas!"},
	{4, "4 Kelkis, nes tu turi tai padaryti, o mes būsime su tavimi. Būk drąsus ir veik”."},
	{5, "5 Ezra atsikėlęs prisaikdino vyresniuosius kunigus ir levitus ir visą Izraelį, kad jie elgsis pagal tą žodį. Ir jie prisiekė."},
	{6, "6 Tada Ezra atėjo nuo Dievo namų į Eljašibo sūnaus Johanano kambarį, nieko nevalgė ir negėrė, nes liūdėjo dėl grįžusiųjų tremtinių nusikaltimo."},
	{7, "7 Jie paskelbė visame Jude ir Jeruzalėje visiems grįžusiems tremtiniams susirinkti į Jeruzalę."},
	{8, "8 Jei kas neateis per tris dienas, visas jo turtas kunigaikščių ir vyresniųjų nutarimu bus atimtas ir jis pats bus atskirtas nuo tremtinių."},
	{9, "9 Per tris dienas visi Judo ir Benjamino žmonės susirinko Jeruzalėje devinto mėnesio dvidešimtą dieną. Visi žmonės susėdo Dievo namų aikštėje, drebėdami dėl šito reikalo ir nuo smarkaus lietaus."},
	{10, "10 Kunigas Ezra atsistojęs tarė: “Jūs nusikaltote, vesdami svetimtautes moteris, ir tuo padidinote Izraelio kaltę."},
	{11, "11 Dabar išpažinkite savo kaltę Viešpačiui, savo tėvų Dievui, ir vykdykite Jo valią­atsiskirkite nuo šio krašto tautų ir nuo svetimtaučių moterų”."},
	{12, "12 Visi susirinkusieji garsiai atsakė: “Kaip pasakei, taip padarysime."},
	{13, "13 Žmonių yra daug, ir dabar lietingas metas, neįmanoma būti lauke. Be to, tas reikalas negali būti sutvarkytas per vieną ar dvi dienas, nes nusikaltusių tarp mūsų yra daug."},
	{14, "14 Tegul pasilieka mūsų vyresnieji. Visuose mūsų miestuose gyvenantieji, kurie yra vedę svetimtautes žmonas, tegul ateina paskirtu laiku su tų miestų vyresniaisiais ir teisėjais, kol pasitrauks nuo mūsų Dievo rūstybė dėl šito poelgio”."},
	{15, "15 Asaelio sūnus Jehonatanas ir Tikvos sūnus Jachzėja buvo paskirti tam darbui, o levitai Mešulamas ir Šabetajas jiems padėjo."},
	{16, "16 Grįžusieji tremtiniai taip ir padarė. Kunigas Ezra su šeimų vyresniaisiais, kurie buvo pašaukti vardais, buvo atskirti ir dešimto mėnesio pirmą dieną jie susėdo ištirti šį reikalą."},
	{17, "17 Iki pirmo mėnesio pirmos dienos jie pabaigė bylas su visais, kurie buvo vedę svetimtautes."},
	{18, "18 Tarp kunigų sūnų, vedusių svetimtautes, iš Jehocadako sūnaus Jozuės sūnų ir jo brolių­Maasėja, Eliezeras, Jaribas ir Gedolija."},
	{19, "19 Jie padavė rankas, kad atleis savo žmonas, ir už kaltę paaukojo po aviną."},
	{20, "20 Iš Imero­Hananis ir Zebadija."},
	{21, "21 Iš Harimo­Maasėja, Elija, Šemaja, Jehielis ir Uzija."},
	{22, "22 Iš Pašhūro­Eljoenajas, Maasėja, Izmaelis, Netanelis, Jehozabadas ir Eleasa."},
	{23, "23 Iš levitų palikuonių­Jehozabadas, Šimis, Kelaja, tai yra Kelita, Petahija, Judas ir Eliezeras."},
	{24, "24 Iš giedotojų­Eljašibas. Iš vartininkų—Šalumas, Telemas ir Ūris."},
	{25, "25 Kitų izraelitų palikuonys: iš Parošo palikuonių­Ramija, Izija, Malkija, Mijaminas, Eleazaras, Malkija ir Benaja;"},
	{26, "26 iš Elamo­Matanija, Zacharija, Jehielis, Abdis, Jeremotas ir Elija;"},
	{27, "27 iš Zatuvo­Eljoenajas, Eljašibas, Matanija, Jeremotas, Zabadas ir Aziza;"},
	{28, "28 iš Bebajo­Johananas, Hananija, Zabajas ir Atlajas;"},
	{29, "29 iš Banio­Mešulamas, Maluchas, Adaja, Jašubas, Šealas ir Jeramotas;"},
	{30, "30 iš Pahat Moabo­Adna, Kelalas, Benaja, Maasėja, Matanija, Becalelis, Binujas ir Manasas;"},
	{31, "31 iš Harimo­Eliezeras, Išija, Malkija, Šemaja, Simeonas,"},
	{32, "32 Benjaminas, Maluchas ir Šemarija;"},
	{33, "33 iš Hašumo­Matenajas, Matata, Zabadas, Elifeletas, Jeremajas, Manasas ir Šimis;"},
	{34, "34 iš Banio­Maadajas, Amramas, Uelis,"},
	{35, "35 Benaja, Bedija, Keluhis,"},
	{36, "36 Vanija, Meremotas, Eljašibas,"},
	{37, "37 Matanija, Matenajas ir Jaasajas,"},
	{38, "38 Banis, Binujis, Šimis,"},
	{39, "39 Šelemija, Natanas ir Adaja,"},
	{40, "40 Machnadbajas, Šašajas, Šarajas,"},
	{41, "41 Azarelis, Šelemijas, Šemarija,"},
	{42, "42 Šalumas, Amarija ir Juozapas;"},
	{43, "43 iš Nebojo­Jejelis, Matitija, Zabadas, Zebina, Jadajas, Joelis ir Benaja."},
	{44, "44 Visų šitų žmonos buvo svetimtautės, ir kai kurie iš jų turėjo vaikų su jomis."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};