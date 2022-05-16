#include <map>
#include <string>
class Bible35
{
	struct sw1	{ int val; const char *msg; };
	struct sw2	{ int val; const char *msg; };
	struct sw3	{ int val; const char *msg; };
public:
static void view1() {
struct sw1 poems[] = {
	{1, "1 Ufunuo aliouona nabii Habakuki. "},
	{2, "2 Ee Bwana, nilie hata lini, wewe usitake kusikia? Nakulilia kwa sababu ya udhalimu, ila hutaki kuokoa. "},
	{3, "3 Mbona wanionyesha uovu, na kunitazamisha ukaidi? Maana uharibifu na udhalimu u mbele yangu; kuna ugomvi, na mashindano yatokea. "},
	{4, "4 Kwa sababu hiyo sheria imelegea, wala hukumu haipatikani; kwa maana watu wabaya huwazunguka wenye haki; kwa sababu hiyo hukumu ikipatikana imepotoka. "},
	{5, "5 Angalieni, enyi mlio kati ya mataifa, katazameni, kastaajabuni sana; kwa maana mimi natenda tendo siku zenu, ambalo hamtaliamini hata mkiambiwa. "},
	{6, "6 Kwa maana, angalieni, nawaondokesha Wakaldayo, taifa lile kali, lenye haraka kupita kiasi; wapitao katikati ya dunia, ili wayamiliki makao yasiyo yao. "},
	{7, "7 Hao ni watu wa kutisha sana, wa kuogofya sana; hukumu yao na ukuu wao hutoka katika nafsi zao wenyewe. "},
	{8, "8 Farasi zao ni wepesi kuliko chui, ni wakali kuliko mbwa-mwitu wa jioni; na wapanda farasi wao hujitapa naam, wapanda farasi wao watoka mbali sana; huruka kama tai afanyaye haraka ale. "},
	{9, "9 Waja wote ili kufanya udhalimu; nyuso zao zimeelekezwa kwa bidii yao kama upepo wa mashariki, nao hukusanya mateka kama mchanga. "},
	{10, "10 Naam, huwadhihaki wafalme, na wakuu ni kitu cha kudharauliwa kwake; huidharau kila ngome; kwa maana hufanya chungu ya mavumbi, na kuitwaa. "},
	{11, "11 Kisha atapita kwa kasi, kama upepo, atapita na kuwa ana hatia; yeye ambaye nguvu zake ni mungu wake. "},
	{12, "12 Ee Bwana, Mungu wangu, mtakatifu wangu, wewe si wa milele? Hatutakufa. Ee Bwana, umemwandikia hukumu, nawe, Ee Jabali, umemweka imara ili aadhibishwe. "},
	{13, "13 Wewe uliye na macho safi hata usiweze kuangalia uovu, wewe usiyeweza kutazama ukaidi, mbona unawaangalia watendao kwa hila; na kunyamaza kimya, hapo mtu mwovu ammezapo mtu aliye mwenye haki kuliko yeye; "},
	{14, "14 na kufanya wanadamu kuwa kama samaki wa baharini, kama vitu vitambaavyo, ambavyo havina mtawala? "},
	{15, "15 Yeye huwatoa wote kwa ndoana yake, huwakamata katika wavu wake, na kuwakusanya katika juya lake; ndiyo sababu afurahi na kupendezwa. "},
	{16, "16 Kwa sababu hiyo huutolea wavu wake sadaka, na kulifukizia uvumba juya lake; kwa sababu kwa vitu vile fungu lake limenona, na chakula chake kimekuwa tele. "},
	{17, "17 Je! Atawatoa walio katika wavu wake, asiache kuwaua watu wa mataifa daima? "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sw2 poems[] = {
	{1, "1 Mimi nitasimama katika zamu yangu, nitajiweka juu ya mnara, nitaangalia ili nione atakaloniambia, na jinsi nitakavyojibu katika habari ya kulalamika kwangu. "},
	{2, "2 Bwana akanijibu, akasema, Iandike njozi ukaifanye iwe wazi sana katika vibao, ili aisomaye apate kuisoma kama maji. "},
	{3, "3 Maana njozi hii bado ni kwa wakati ulioamriwa, inafanya haraka ili kuufikilia mwisho wake, wala haitasema uongo; ijapokawia, ingojee; kwa kuwa haina budi kuja, haitakawia. "},
	{4, "4 Tazama, roho yake hujivuna, haina unyofu ndani yake; lakini mwenye haki ataishi kwa imani yake. "},
	{5, "5 Naam, pamoja na hayo, divai ni mchumi mdanganyifu, mtu wa kiburi asiyekaa nyumbani mwake; huongeza tamaa yake kama kuzimu, naye huwa kama mauti, hawezi kushibishwa; bali hujikusanyia mataifa yote; hujiwekea kabila zote chungu chungu. "},
	{6, "6 Je! Hawa wote hawatapiga mfano juu yake, na mithali ya kusimanga juu yake, wakisema, Ole wake yeye aongezaye kisicho mali yake! Hata lini? Na ole wake yeye ajitwikaye mzigo wa rehani! "},
	{7, "7 Je! Hawatainuka ghafula wao watakaokuuma, hawataamka wao watakaokusumbua, nawe utakuwa mateka kwao? "},
	{8, "8 Kwa sababu umeteka nyara mataifa mengi, mabaki yote ya kabila watakuteka wewe; kwa sababu ya damu ya watu, na kwa sababu ya udhalimu iliotendwa nchi hii, na mji huu, na watu wote wanaokaa ndani yake. "},
	{9, "9 Ole wake yeye aipatiaye nyumba yake mapato mabaya, ili apate kukiweka kioto chake juu, apate kujiepusha na mkono wa uovu! "},
	{10, "10 Wewe umeifanyia nyumba yako kusudi la aibu, kwa kukatilia mbali watu wengi, nawe umetenda dhambi juu ya roho yako. "},
	{11, "11 Kwa maana jiwe litapiga kelele katika ukuta, nayo boriti katika miti italijibu. "},
	{12, "12 Ole wake yeye ajengaye mji kwa damu, awekaye imara mji mkubwa kwa uovu! "},
	{13, "13 Angalieni; je! Jambo hili halikutoka kwa Bwana wa majeshi, kwamba watu wajishughulikie moto, na mataifa wajisumbue kwa ajili ya ubatili? "},
	{14, "14 Kwa maana dunia itajazwa maarifa ya utukufu wa Bwana, kama maji yaifunikavyo bahari. "},
	{15, "15 Ole wake yeye ampaye jirani yake kileo, wewe utiaye sumu yako, na kumlevya pia, ili kuutazama uchi wao! "},
	{16, "16 Umejaa aibu badala ya utukufu; unywe nawe, uwe kama mtu asiyetahiriwa; kikombe cha mkono wa kuume wa Bwana kitageuzwa ukipokee, na aibu kuu itakuwa juu ya utukufu wako. "},
	{17, "17 Kwa maana udhalimu uliotendwa juu ya Lebanoni utakufunikiza, na kuangamizwa kwao wanyama kutakutia hofu; kwa sababu ya damu ya watu, na kwa sababu ya udhalimu iliotendwa nchi hii, na mji huu, na watu wote wanaokaa ndani yake. "},
	{18, "18 Sanamu ya kuchora yafaa nini, hata yeye aliyeifanya ameichora? Sanamu ya kuyeyuka, nayo ni mwalimu wa uongo, yafaa nini, hata yeye aliyeifanya aiwekee tumaini lake, na kufanya sanamu zisizoweza kusema? "},
	{19, "19 Ole wake yeye auambiaye mti, Amka; aliambiaye jiwe lisiloweza kusema, Ondoka! Je! Kitu hicho kitafundisha? Tazama, kimefunikwa kwa dhahabu na fedha, wala hamna pumzi ndani yake kabisa. "},
	{20, "20 Lakini Bwana yumo ndani ya hekalu lake takatifu; dunia yote na inyamaze kimya mbele zake. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sw3 poems[] = {
	{1, "1 Sala ya nabii Habakuki. "},
	{2, "2 Ee Bwana, nimesikia habari zako, nami naogopa; Ee Bwana, fufua kazi yako katikati ya miaka; Katikati ya miaka tangaza habari yake; Katika ghadhabu kumbuka rehema. "},
	{3, "3 Mungu alikuja kutoka Temani, Yeye aliye mtakatifu kutoka mlima Parani. Utukufu wake ukazifunika mbingu, Nayo dunia ikajaa sifa yake. "},
	{4, "4 Mwangaza wake ulikuwa kama nuru; Alikuwa na mishale ya nuru ubavuni pake; Ndipo ulipofichwa uweza wake. "},
	{5, "5 Mbele zake ilikwenda tauni, Na makaa ya moto yakatoka miguuni pake. "},
	{6, "6 Akasimama, akaitetemesha dunia; Akatazama, akawasitusha mataifa; Na milima ya zamani ikatawanyika; Vilima vya kale vikainama; Miendo yake ilikuwa kama siku za kale. "},
	{7, "7 Naliziona hema za Kushani katika taabu; Mapazia ya nchi ya Midiani yakatetemeka. "},
	{8, "8 Je! Bwana aliikasirikia mito? Je! Hasira yako ilikuwa juu ya mito, Au ghadhabu yako juu ya bahari, Hata ukapanda farasi zako, Katika magari yako ya wokovu? "},
	{9, "9 Uta wako ukafanywa wazi kabisa; Viapo walivyopewa kabila vilikuwa neno thabiti; Ukaipasua nchi kwa mito. "},
	{10, "10 Milima ilikuona, ikaogopa; Gharika ya maji ikapita; Vilindi vikatoa sauti yake, Vikainua juu mikono yake. "},
	{11, "11 Jua na mwezi vikasimama makaoni mwao; Mbele ya nuru ya mishale yako ilipotapakaa, Mbele ya mwangaza wa mkuki wako umeremetao. "},
	{12, "12 Ulikwenda katikati ya nchi kwa ghadhabu; Ukawapura mataifa kwa hasira. "},
	{13, "13 Ukatokea kwa ajili ya wokovu wa watu wako, Kwa ajili ya wokovu wa masihi wako; Ukakiponda kichwa cha nyumba ya waovu, Ukiuweka wazi msingi hata mwambani. "},
	{14, "14 Ukakichoma kichwa cha mashujaa wake kwa fimbo zao wenyewe; Wakaja kama kisulisuli ili kunitawanya; Kama wakifurahi kuwameza maskini kwa siri. "},
	{15, "15 Ukaikanyaga bahari kwa farasi zako, Chungu ya maji yenye nguvu. "},
	{16, "16 Nikasikia, na tumbo langu likatetemeka, Midomo yangu ikatikisika kwa sauti ile; Ubovu ukaingia mifupani mwangu, Nikatetemeka katika mahali pangu; Ili nipate kuingoja ile siku ya dhiki, Kundi lao washambuliao wakweapo juu ya watu. "},
	{17, "17 Maana mtini hautachanua maua, Wala mizabibuni hamtakuwa na matunda; Taabu ya mzeituni itakuwa bure, Na mashamba hayatatoa chakula; Zizini hamtakuwa na kundi, Wala vibandani hamtakuwa na kundi la ng'ombe; "},
	{18, "18 Walakini nitamfurahia Bwana Nitamshangilia Mungu wa wokovu wangu. "},
	{19, "19 YEHOVA, aliye Bwana, ni nguvu zangu, Yeye huifanya miguu yangu kuwa kama ya kulungu, Naye ataniendesha katika mahali pangu palipoinuka. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};