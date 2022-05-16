#include <map>
#include <string>
class Bible62
{
	struct sw1	{ int val; const char *msg; };
	struct sw2	{ int val; const char *msg; };
	struct sw3	{ int val; const char *msg; };
	struct sw4	{ int val; const char *msg; };
	struct sw5	{ int val; const char *msg; };
public:
static void view1() {
struct sw1 poems[] = {
	{1, "1 Lile lililokuwako tangu mwanzo, tulilolisikia, tuliloliona kwa macho yetu, tulilolitazama, na mikono yetu ikalipapasa, kwa habari ya Neno la uzima; "},
	{2, "2 (na uzima huo ulidhihirika, nasi tumeona, tena twashuhudia, na kuwahubiri ninyi ule uzima wa milele, uliokuwa kwa Baba, ukadhihirika kwetu); "},
	{3, "3 hilo tuliloliona na kulisikia, twawahubiri na ninyi; ili nanyi pia mpate kushirikiana nasi: na ushirika wetu ni pamoja na Baba, na pamoja na Mwana wake Yesu Kristo. "},
	{4, "4 Na haya twayaandika, ili furaha yetu itimizwe. "},
	{5, "5 Na hii ndiyo habari tuliyoisikia kwake, na kuihubiri kwenu, ya kwamba Mungu ni nuru, wala giza lo lote hamna ndani yake. "},
	{6, "6 Tukisema ya kwamba twashirikiana naye, tena tukienenda gizani, twasema uongo, wala hatuifanyi iliyo kweli; "},
	{7, "7 bali tukienenda nuruni, kama yeye alivyo katika nuru, twashirikiana sisi kwa sisi, na damu yake Yesu, Mwana wake, yatusafisha dhambi yote. "},
	{8, "8 Tukisema kwamba hatuna dhambi, twajidanganya wenyewe, wala kweli haimo mwetu. "},
	{9, "9 Tukiziungama dhambi zetu, Yeye ni mwaminifu na wa haki hata atuondolee dhambi zetu, na kutusafisha na udhalimu wote. "},
	{10, "10 Tukisema kwamba hatukutenda dhambi, twamfanya Yeye kuwa mwongo wala neno lake halimo mwetu. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sw2 poems[] = {
	{1, "1 Watoto wangu wadogo, nawaandikia haya ili kwamba msitende dhambi. Na kama mtu akitenda dhambi tunaye Mwombezi kwa Baba, Yesu Kristo mwenye haki, "},
	{2, "2 naye ndiye kipatanisho kwa dhambi zetu; wala si kwa dhambi zetu tu, bali na kwa dhambi za ulimwengu wote. "},
	{3, "3 Na katika hili twajua ya kuwa tumemjua yeye, ikiwa tunashika amri zake. "},
	{4, "4 Yeye asemaye, Nimemjua, wala hazishiki amri zake, ni mwongo, wala kweli haimo ndani yake. "},
	{5, "5 Lakini yeye alishikaye neno lake, katika huyo upendo wa Mungu umekamilika kweli kweli. Katika hili twajua ya kuwa tumo ndani yake. "},
	{6, "6 Yeye asemaye ya kuwa anakaa ndani yake, imempasa kuenenda mwenyewe vile vile kama yeye alivyoenenda. "},
	{7, "7 Wapenzi, siwaandikii amri mpya, ila amri ya zamani mliyokuwa nayo tangu mwanzo. Na hiyo amri ya zamani ni neno lile mlilolisikia. "},
	{8, "8 Tena nawaandikia amri mpya, neno lililo kweli ndani yake na ndani yenu; kwa kuwa giza linapita na ile nuru ya kweli imekwisha kung'aa. "},
	{9, "9 Yeye asemaye kwamba yumo nuruni, naye amchukia ndugu yake, yumo gizani hata sasa. "},
	{10, "10 Yeye ampendaye ndugu yake, akaa katika nuru, wala ndani yake hamna kikwazo. "},
	{11, "11 Bali yeye amchukiaye ndugu yake, yu katika giza, tena anakwenda katika giza, wala hajui aendako, kwa sababu giza imempofusha macho. "},
	{12, "12 Nawaandikia ninyi, watoto wadogo, kwa sababu mmesamehewa dhambi zenu, kwa ajili ya jina lake. "},
	{13, "13 Nawaandikia ninyi, akina baba, kwa sababu mmemjua yeye aliye tangu mwanzo. Nawaandikia ninyi, vijana, kwa sababu mmemshinda yule mwovu. Nimewaandikia ninyi, watoto, kwa sababu mmemjua Baba. "},
	{14, "14 Nimewaandikia ninyi, akina baba, kwa sababu mmemjua yeye aliye tangu mwanzo. Nimewaandikia ninyi, vijana, kwa sababu mna nguvu, na neno la Mungu linakaa ndani yenu, nanyi mmemshinda yule mwovu. "},
	{15, "15 Msiipende dunia, wala mambo yaliyomo katika dunia. Mtu akiipenda dunia, kumpenda Baba hakumo ndani yake. "},
	{16, "16 Maana kila kilichomo duniani, yaani, tamaa ya mwili, na tamaa ya macho, na kiburi cha uzima, havitokani na Baba, bali vyatokana na dunia. "},
	{17, "17 Na dunia inapita, pamoja na tamaa zake, bali yeye afanyaye mapenzi ya Mungu adumu hata milele. "},
	{18, "18 Watoto, ni wakati wa mwisho; na kama vile mlivyosikia kwamba mpinga Kristo yuaja, hata sasa wapinga Kristo wengi wamekwisha kuwapo. Kwa sababu hiyo twajua ya kuwa ni wakati wa mwisho. "},
	{19, "19 Walitoka kwetu, lakini hawakuwa wa kwetu. Maana kama wangalikuwa wa kwetu, wangalikaa pamoja nasi. Lakini walitoka ili wafunuliwe kwamba si wote walio wa kwetu. "},
	{20, "20 Nanyi mmepakwa mafuta na Yeye aliye Mtakatifu nanyi mnajua nyote. "},
	{21, "21 Sikuwaandikia ninyi kwa sababu hamwijui iliyo kweli, bali kwa sababu mwaijua, tena kwamba hapana uongo wo wote utokao katika hiyo kweli. "},
	{22, "22 Ni nani aliye mwongo ila yeye akanaye ya kuwa Yesu ni Kristo? Huyo ndiye mpinga Kristo, yeye amkanaye Baba na Mwana. "},
	{23, "23 Kila amkanaye Mwana, hanaye Baba; amkiriye Mwana anaye Baba pia. "},
	{24, "24 Ninyi basi, hilo mlilolisikia tangu mwanzo na likae ndani yenu. Ikiwa hilo mlilolisikia tangu mwanzo linakaa ndani yenu, ninyi nanyi mtakaa ndani ya Mwana, na ndani ya Baba. "},
	{25, "25 Na hii ndiyo ahadi aliyotuahidia, yaani, uzima wa milele. "},
	{26, "26 Nimewaandikia haya katika habari za watu wale wanaotaka kuwapoteza. "},
	{27, "27 Nanyi, mafuta yale mliyoyapata kwake yanakaa ndani yenu, wala hamna haja ya mtu kuwafundisha; lakini kama mafuta yake yanavyowafundisha habari za mambo yote, tena ni kweli wala si uongo, na kama yalivyowafundisha, kaeni ndani yake. "},
	{28, "28 Na sasa, watoto wadogo, kaeni ndani yake, ili kusudi, atakapofunuliwa, mwe na ujasiri, wala msiaibike mbele zake katika kuja kwake. "},
	{29, "29 Kama mkijua ya kuwa yeye ni mwenye haki, jueni ya kuwa kila atendaye haki amezaliwa na yeye. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sw3 poems[] = {
	{1, "1 Tazameni, ni pendo la namna gani alilotupa Baba, kwamba tuitwe wana wa Mungu; na ndivyo tulivyo. Kwa sababu hii ulimwengu haututambui, kwa kuwa haukumtambua yeye. "},
	{2, "2 Wapenzi, sasa tu wana wa Mungu, wala haijadhihirika bado tutakavyokuwa; lakini twajua ya kuwa atakapodhihirishwa, tutafanana naye; kwa maana tutamwona kama alivyo. "},
	{3, "3 Na kila mwenye matumaini haya katika yeye hujitakasa, kama yeye alivyo mtakatifu. "},
	{4, "4 Kila atendaye dhambi, afanya uasi; kwa kuwa dhambi ni uasi. "},
	{5, "5 Nanyi mnajua ya kuwa yeye alidhihirishwa, ili aziondoe dhambi; na dhambi haimo ndani yake. "},
	{6, "6 Kila akaaye ndani yake hatendi dhambi; kila atendaye dhambi hakumwona yeye, wala hakumtambua. "},
	{7, "7 Watoto wadogo, mtu na asiwadanganye; atendaye haki yuna haki, kama yeye alivyo na haki; "},
	{8, "8 atendaye dhambi ni wa Ibilisi; kwa kuwa Ibilisi hutenda dhambi tangu mwanzo. Kwa kusudi hili Mwana wa Mungu alidhihirishwa, ili azivunje kazi za Ibilisi. "},
	{9, "9 Kila mtu aliyezaliwa na Mungu hatendi dhambi, kwa sababu uzao wake wakaa ndani yake; wala hawezi kutenda dhambi kwa sababu amezaliwa kutokana na Mungu. "},
	{10, "10 Katika hili watoto wa Mungu ni dhahiri, na watoto wa Ibilisi nao. Mtu ye yote asiyetenda haki hatokani na Mungu, wala yeye asiyempenda ndugu yake. "},
	{11, "11 Maana, hii ndiyo habari mliyoisikia tangu mwanzo, kwamba tupendane sisi kwa sisi; "},
	{12, "12 si kama Kaini alivyokuwa wa yule mwovu, akamwua ndugu yake. Naye alimwua kwa sababu gani? Kwa sababu matendo yake yalikuwa mabaya, na ya ndugu yake yalikuwa ya haki. "},
	{13, "13 Ndugu zangu, msistaajabu, ulimwengu ukiwachukia. "},
	{14, "14 Sisi tunajua ya kuwa tumepita toka mautini kuingia uzimani, kwa maana twawapenda ndugu. Yeye asiyependa, akaa katika mauti. "},
	{15, "15 Kila amchukiaye ndugu yake ni mwuaji: nanyi mnajua ya kuwa kila mwuaji hana uzima wa milele ukikaa ndani yake. "},
	{16, "16 Katika hili tumelifahamu pendo, kwa kuwa yeye aliutoa uhai wake kwa ajili yetu; imetupasa na sisi kuutoa uhai wetu kwa ajili ya hao ndugu. "},
	{17, "17 Lakini mtu akiwa na riziki ya dunia, kisha akamwona ndugu yake ni mhitaji, akamzuilia huruma zake, je! Upendo wa Mungu wakaaje ndani yake huyo? "},
	{18, "18 Watoto wadogo, tusipende kwa neno, wala kwa ulimi, bali kwa tendo na kweli. "},
	{19, "19 Katika hili tutafahamu ya kwamba tu wa kweli, nasi tutaituliza mioyo yetu mbele zake, "},
	{20, "20 ikiwa mioyo yetu inatuhukumu; kwa maana Mungu ni mkuu kuliko mioyo yetu naye anajua yote. "},
	{21, "21 Wapenzi, mioyo yetu isipotuhukumu, tuna ujasiri kwa Mungu; "},
	{22, "22 na lo lote tuombalo, twalipokea kwake, kwa kuwa twazishika amri zake, na kuyatenda yapendezayo machoni pake. "},
	{23, "23 Na hii ndiyo amri yake, kwamba tuliamini jina la Mwana wake Yesu Kristo, na kupendana sisi kwa sisi, kama alivyotupa amri. "},
	{24, "24 Naye azishikaye amri zake hukaa ndani yake yeye naye ndani yake. Na katika hili tunajua ya kuwa anakaa ndani yetu, kwa huyo Roho aliyetupa. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sw4 poems[] = {
	{1, "1 Wapenzi, msiiamini kila roho, bali zijaribuni hizo roho, kwamba zimetokana na Mungu; kwa sababu manabii wa uongo wengi wametokea duniani. "},
	{2, "2 Katika hili mwamjua Roho wa Mungu; kila roho ikiriyo kwamba Yesu Kristo amekuja katika mwili yatokana na Mungu. "},
	{3, "3 Na kila roho isiyomkiri Yesu haitokani na Mungu. Na hii ndiyo roho ya mpinga Kristo ambayo mmesikia kwamba yaja; na sasa imekwisha kuwako duniani. "},
	{4, "4 Ninyi, watoto wadogo, mwatokana na Mungu nanyi mmewashinda, kwa sababu yeye aliye ndani yenu ni mkuu kuliko yeye aliye katika dunia. "},
	{5, "5 Hao ni wa dunia; kwa hiyo wanena ya dunia na dunia huwasikia "},
	{6, "6 Sisi twatokana na Mungu. Yeye amjuaye Mungu atusikia; yeye asiyetokana na Mungu hatusikii. Katika hili twamjua Roho wa kweli, na roho ya upotevu. "},
	{7, "7 Wapenzi, na mpendane; kwa kuwa pendo latoka kwa Mungu, na kila apendaye amezaliwa na Mungu, naye anamjua Mungu. "},
	{8, "8 Yeye asiyependa, hakumjua Mungu, kwa maana Mungu ni upendo. "},
	{9, "9 Katika hili pendo la Mungu lilionekana kwetu, kwamba Mungu amemtuma Mwanawe pekee ulimwenguni, ili tupate uzima kwa yeye. "},
	{10, "10 Hili ndilo pendo, si kwamba sisi tulimpenda Mungu, bali kwamba yeye alitupenda sisi, akamtuma Mwanawe kuwa kipatanisho kwa dhambi zetu. "},
	{11, "11 Wapenzi ikiwa Mungu alitupenda sisi hivi, imetupasa na sisi kupendana. "},
	{12, "12 Hakuna mtu aliyemwona Mungu wakati wo wote. Tukipendana, Mungu hukaa ndani yetu, na pendo lake limekamilika ndani yetu. "},
	{13, "13 Katika hili tunafahamu ya kuwa tunakaa ndani yake, naye ndani yetu, kwa kuwa ametushirikisha Roho wake. "},
	{14, "14 Na sisi tumeona na kushuhudia ya kuwa Baba amemtuma Mwana kuwa Mwokozi wa ulimwengu. "},
	{15, "15 Kila akiriye ya kuwa Yesu ni Mwana wa Mungu, Mungu hukaa ndani yake, naye ndani ya Mungu. "},
	{16, "16 Nasi tumelifahamu pendo alilo nalo Mungu kwetu sisi, na kuliamini. Mungu ni upendo, naye akaaye katika pendo, hukaa ndani ya Mungu, na Mungu hukaa ndani yake. "},
	{17, "17 Katika hili pendo limekamilishwa kwetu, ili tuwe na ujasiri katika siku ya hukumu; kwa kuwa, kama yeye alivyo, ndivyo tulivyo na sisi ulimwenguni humu. "},
	{18, "18 Katika pendo hamna hofu; lakini pendo lililo kamili huitupa nje hofu, kwa maana hofu ina adhabu; na mwenye hofu hakukamilishwa katika pendo. "},
	{19, "19 Sisi twapenda kwa maana yeye alitupenda sisi kwanza. "},
	{20, "20 Mtu akisema, Nampenda Mungu, naye anamchukia ndugu yake, ni mwongo; kwa maana asiyempenda ndugu yake ambaye amemwona, hawezi kumpenda Mungu ambaye hakumwona. "},
	{21, "21 Na amri hii tumepewa na yeye, ya kwamba yeye ampendaye Mungu, ampende na ndugu yake. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct sw5 poems[] = {
	{1, "1 Kila mtu aaminiye kwamba Yesu ni Kristo amezaliwa na Mungu. Na kila mtu ampendaye mwenye kuzaa, ampenda hata yeye aliyezaliwa na yeye. "},
	{2, "2 Katika hili twajua kwamba twawapenda watoto wa Mungu, tumpendapo Mungu, na kuzishika amri zake. "},
	{3, "3 Kwa maana huku ndiko kumpenda Mungu, kwamba tuzishike amri zake; wala amri zake si nzito. "},
	{4, "4 Kwa maana kila kitu kilichozaliwa na Mungu huushinda ulimwengu; na huku ndiko kushinda kuushindako ulimwengu, hiyo imani yetu. "},
	{5, "5 Mwenye kuushinda ulimwengu ni nani, isipokuwa ni yeye aaminiye ya kwamba Yesu ni Mwana wa Mungu? "},
	{6, "6 Huyu ndiye aliyekuja kwa maji na damu, Yesu Kristo; si katika maji tu, bali katika maji na katika damu. "},
	{7, "7 Naye Roho ndiye ashuhudiaye, kwa sababu Roho ndiye kweli. "},
	{8, "8 Kwa maana wako watatu washuhudiao [mbinguni, Baba, na Neno, na Roho Mtakatifu, na watatu hawa ni umoja. "},
	{9, "9 Kisha wako watatu washuhudiao duniani], Roho, na maji, na damu; na watatu hawa hupatana kwa habari moja. Tukiupokea ushuhuda wa wanadamu, ushuhuda wa Mungu ni mkuu zaidi; kwa maana ushuhuda wa Mungu ndio huu, kwamba amemshuhudia Mwanawe. "},
	{10, "10 Yeye amwaminiye Mwana wa Mungu anao huo ushuhuda ndani yake. Asiyemwamini Mungu amemfanya kuwa mwongo, kwa kuwa hakuuamini huo ushuhuda ambao Mungu amemshuhudia Mwanawe. "},
	{11, "11 Na huu ndio ushuhuda, ya kwamba Mungu alitupa uzima wa milele; na uzima huu umo katika Mwanawe. "},
	{12, "12 Yeye aliye naye Mwana, anao huo uzima; asiye naye Mwana wa Mungu hana huo uzima. "},
	{13, "13 Nimewaandikia ninyi mambo hayo, ili mjue ya kuwa mna uzima wa milele, ninyi mnaoliamini Jina la Mwana wa Mungu. "},
	{14, "14 Na huu ndio ujasiri tulio nao kwake, ya kuwa, tukiomba kitu sawasawa na mapenzi yake, atusikia. "},
	{15, "15 Na kama tukijua kwamba atusikia, tuombacho chote, twajua kwamba tunazo zile haja tulizomwomba. "},
	{16, "16 Mtu akimwona ndugu yake anatenda dhambi isiyo ya mauti, ataomba, na Mungu atampa uzima kwa ajili ya hao watendao dhambi isiyo ya mauti. Iko dhambi iliyo ya mauti. Sisemi ya kwamba ataomba kwa ajili ya hiyo. "},
	{17, "17 Kila lisilo la haki ni dhambi, na dhambi iko isiyo ya mauti. "},
	{18, "18 Twajua ya kuwa kila mtu aliyezaliwa na Mungu hatendi dhambi; bali yeye aliyezaliwa na Mungu hujilinda, wala yule mwovu hamgusi. "},
	{19, "19 Twajua ya kuwa sisi tu wa Mungu; na dunia yote pia hukaa katika yule mwovu. "},
	{20, "20 Nasi twajua kwamba Mwana wa Mungu amekwisha kuja, naye ametupa akili kwamba tumjue yeye aliye wa kweli, nasi tumo ndani yake yeye aliye wa kweli, yaani, ndani ya Mwana wake Yesu Kristo. Huyu ndiye Mungu wa kweli, na uzima wa milele. "},
	{21, "21 Watoto wadogo, jilindeni nafsi zenu na sanamu. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};