#include <map>
#include <string>
class Bible53
{
	struct sw1	{ int val; const char *msg; };
	struct sw2	{ int val; const char *msg; };
	struct sw3	{ int val; const char *msg; };
public:
static void view1() {
struct sw1 poems[] = {
	{1, "1 Paulo, na Silwano, na Timotheo, kwa kanisa la Wathesalonike, lililo katika Mungu Baba yetu, na Bwana Yesu Kristo. "},
	{2, "2 Neema na iwe kwenu na amani zitokazo kwa Mungu Baba, na kwa Bwana Yesu Kristo. "},
	{3, "3 Ndugu, imetupasa kumshukuru Mungu sikuzote kwa ajili yenu, kama ilivyo wajibu, kwa kuwa imani yenu inazidi sana, na upendo wa kila mtu kwenu kwa mwenzake umekuwa mwingi. "},
	{4, "4 Hata na sisi wenyewe twaona fahari juu yenu katika makanisa ya Mungu kwa ajili ya saburi yenu, na imani mliyo nayo katika adha zenu zote na dhiki mnazostahimili. "},
	{5, "5 Ndiyo ishara hasa ya hukumu iliyo haki ya Mungu, ili mhesabiwe kuwa mwastahili kuuingia ufalme wa Mungu, ambao kwa ajili yake mnateswa. "},
	{6, "6 Kwa kuwa ni haki mbele za Mungu kuwalipa mateso wale wawatesao ninyi; "},
	{7, "7 na kuwalipa ninyi mteswao raha pamoja na sisi; wakati wa kufunuliwa kwake Bwana Yesu kutoka mbinguni pamoja na malaika wa uweza wake "},
	{8, "8 katika mwali wa moto; huku akiwalipiza kisasi wao wasiomjua Mungu, na wao wasioitii Injili ya Bwana wetu Yesu; "},
	{9, "9 watakaoadhibiwa kwa maangamizi ya milele, kutengwa na uso wa Bwana na utukufu wa nguvu zake; "},
	{10, "10 yeye atakapokuja ili kutukuzwa katika watakatifu wake, na kustaajabiwa katika wote waliosadiki katika siku ile, (kwa sababu ushuhuda wetu ulisadikiwa kwenu). "},
	{11, "11 Kwa hiyo twawaombea ninyi sikuzote, ili Mungu wetu awahesabu kuwa mmekustahili kuitwa kwenu, akatimiza kila haja ya wema na kila kazi ya imani kwa nguvu; "},
	{12, "12 jina la Bwana wetu Yesu litukuzwe ndani yenu, nanyi ndani yake, kwa neema ya Mungu wetu na ya Bwana Yesu Kristo. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sw2 poems[] = {
	{1, "1 Basi, ndugu, tunakusihini, kwa habari ya kuja kwake Bwana wetu Yesu Kristo, na kukusanyika kwetu mbele zake, "},
	{2, "2 kwamba msifadhaishwe upesi hata kuiacha nia yenu, wala msisitushwe, kwa roho, wala kwa neno, wala kwa waraka unaodhaniwa kuwa ni wetu, kana kwamba siku ya Bwana imekwisha kuwapo. "},
	{3, "3 Mtu awaye yote asiwadanganye kwa njia yo yote; maana haiji, usipokuja kwanza ule ukengeufu; akafunuliwa yule mtu wa kuasi, mwana wa uharibifu; "},
	{4, "4 yule mpingamizi, ajiinuaye nafsi yake juu ya kila kiitwacho Mungu ama kuabudiwa; hata yeye mwenyewe kuketi katika hekalu la Mungu, akijionyesha nafsi yake kana kwamba yeye ndiye Mungu. "},
	{5, "5 Je! Hamkumbuki ya kuwa wakati nilipokuwapo pamoja nanyi naliwaambieni hayo? "},
	{6, "6 Na sasa lizuialo mwalijua, yule apate kufunuliwa wakati wake. "},
	{7, "7 Maana ile siri ya kuasi hivi sasa inatenda kazi; lakini yuko azuiaye sasa, hata atakapoondolewa. "},
	{8, "8 Hapo ndipo atakapofunuliwa yule asi, ambaye Bwana Yesu atamwua kwa pumzi ya kinywa chake, na kumwangamiza kwa ufunuo wa kuwapo kwake; "},
	{9, "9 yule ambaye kuja kwake ni kwa mfano wa kutenda kwake Shetani, kwa uwezo wote, na ishara na ajabu za uongo; "},
	{10, "10 na katika madanganyo yote ya udhalimu kwa hao wanaopotea; kwa sababu hawakukubali kuipenda ile kweli, wapate kuokolewa. "},
	{11, "11 Kwa hiyo Mungu awaletea nguvu ya upotevu, wauamini uongo; "},
	{12, "12 ili wahukumiwe wote ambao hawakuiamini kweli, bali walikuwa wakijifurahisha katika udhalimu. "},
	{13, "13 Lakini imetupasa sisi kumshukuru Mungu sikuzote kwa ajili yenu, ndugu mliopendwa na Bwana, kwa kuwa Mungu amewachagua tangu mwanzo mpate wokovu, katika kutakaswa na Roho, na kuiamini kweli; "},
	{14, "14 aliyowaitia ninyi kwa injili yetu, ili kuupata utukufu wa Bwana wetu Yesu Kristo. "},
	{15, "15 Basi, ndugu, simameni imara, mkayashike mapokeo mliyofundishwa, ama kwa maneno, ama kwa waraka wetu. "},
	{16, "16 Na Bwana wetu Yesu Kristo mwenyewe, na Mungu Baba yetu, aliyetupenda akatupa faraja ya milele na tumaini jema, katika neema, "},
	{17, "17 awafariji mioyo yenu, na kuwafanya imara katika kila neno na tendo jema. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sw3 poems[] = {
	{1, "1 Hatimaye, ndugu, tuombeeni, neno la Bwana liendelee, na kutukuzwa vile vile kama ilivyo kwenu; "},
	{2, "2 tukaokolewe na watu wasio haki, wabaya; maana si wote walio na imani. "},
	{3, "3 Lakini Bwana ni mwaminifu, atakayewafanya imara na kuwalinda na yule mwovu. "},
	{4, "4 Nasi tumemtumaini Bwana kwa mambo yenu, kwamba mnayafanya tulivyowaagiza, tena kwamba mtayafanya. "},
	{5, "5 Bwana awaongoze mioyo yenu mkapate pendo la Mungu, na saburi ya Kristo. "},
	{6, "6 Ndugu, twawaagiza katika jina la Bwana Yesu Kristo, jitengeni nafsi zenu na kila ndugu aendaye bila utaratibu, wala si kwa kufuata mapokeo mliyoyapokea kwetu. "},
	{7, "7 Mwajua wenyewe jinsi iwapasavyo kutufuata; kwa sababu hatukuenda bila utaratibu kwenu; "},
	{8, "8 wala hatukula chakula kwa mtu ye yote bure; bali kwa taabu na masumbufu, usiku na mchana tulitenda kazi, ili tusimlemee mtu wa kwenu awaye yote. "},
	{9, "9 Si kwamba hatuna amri, lakini makusudi tufanye nafsi zetu kuwa kielelezo kwenu, mtufuate. "},
	{10, "10 Kwa kuwa hata wakati ule tulipokuwapo kwenu tuliwaagiza neno hili, kwamba ikiwa mtu hataki kufanya kazi, basi, asile chakula. "},
	{11, "11 Maana twasikia kwamba wako watu kwenu waendao bila utaratibu, hawana shughuli zao wenyewe, lakini wanajishughulisha na mambo ya wengine. "},
	{12, "12 Basi twawaagiza hao, na kuwaonya katika Bwana Yesu Kristo, watende kazi kwa utulivu na kula chakula chao wenyewe. "},
	{13, "13 Lakini ninyi, ndugu, msikate tamaa katika kutenda mema. "},
	{14, "14 Na ikiwa mtu awaye yote halishiki neno letu la waraka huu, jihadharini na mtu huyo, wala msizungumze naye, apate kutahayari; "},
	{15, "15 lakini msimhesabu kuwa adui, bali mwonyeni kama ndugu. "},
	{16, "16 Sasa, Bwana wa amani mwenyewe na awape amani daima kwa njia zote. Bwana awe pamoja nanyi nyote. "},
	{17, "17 Salamu zangu mimi Paulo, kwa mkono wangu mwenyewe. Hii ndiyo alama katika kila waraka, ndio mwandiko wangu. "},
	{18, "18 Neema ya Bwana wetu Yesu Kristo na iwe pamoja nanyi nyote. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};