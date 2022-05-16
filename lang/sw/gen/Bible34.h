#include <map>
#include <string>
class Bible34
{
	struct sw1	{ int val; const char *msg; };
	struct sw2	{ int val; const char *msg; };
	struct sw3	{ int val; const char *msg; };
public:
static void view1() {
struct sw1 poems[] = {
	{1, "1 Ufunuo juu ya Ninawi. Kitabu cha maono aliyoyaona Nahumuu, Mwelkoshi. "},
	{2, "2 Bwana ni Mungu mwenye wivu, naye hujilipiza kisasi; Bwana hujilipiza kisasi, naye ni mwingi wa hasira; Bwana hujilipiza kisasi juu ya adui zake, huwawekea adui zake akiba ya hasira. "},
	{3, "3 Bwana si mwepesi wa hasira, ana uweza mwingi, wala hatamhesabia mtu mwovu kuwa hana hatia kamwe; Bwana ana njia yake katika kisulisuli na tufani, na mawingu ni mavumbi ya miguu yake. "},
	{4, "4 Yeye huikemea bahari na kuikausha, pia huikausha mito yote; Bashani hulegea, na Karmeli; hulegea nalo ua la Lebanoni. "},
	{5, "5 Milima hutetema mbele zake, navyo vilima huyeyuka; nayo dunia huinuliwa mbele za uso wake, naam, dunia na wote wakaao ndani yake. "},
	{6, "6 Ni nani awezaye kusimama mbele za ghadhabu yake, naye ni nani awezaye kukaa katika ukali wa hasira yake? Hasira yake kali humwagwa kama moto, nayo majabali yapasuliwa na yeye. "},
	{7, "7 Bwana ni mwema, ni ngome siku ya taabu; naye huwajua hao wamkimbiliao. "},
	{8, "8 Lakini kwa gharika ifurikayo atapakomesha kabisa mahali pake, na kuwafuatia adui zake hata gizani. "},
	{9, "9 Mnawaza nini juu ya Bwana? Yeye atakomesha kabisa; mateso hayatainuka mara ya pili. "},
	{10, "10 Kwa maana wangawa kama miiba iliyotatana, na kunyweshwa kana kwamba ni katika kunywa kwao, wataliwa kabisa kama mabua makavu. "},
	{11, "11 Ametoka mmoja kwako, aniaye mabaya juu ya Bwana, atoaye mashauri yasiyofaa kitu. "},
	{12, "12 Bwana asema hivi, Ijapokuwa wana nguvu zilizo timilifu, ijapokuwa ni wengi, hata hivyo watakatwa, naye atapita na kwenda zake. Ingawa nimekutesa, sitakutesa tena. "},
	{13, "13 Na sasa nitakuvunjia nira yake, nami nitakupasulia mafungo yako. "},
	{14, "14 Tena Bwana ametoa amri katika habari zako, ya kwamba asipandwe tena mtu awaye yote mwenye jina lako; toka nyumba ya miungu yako nitakatilia mbali sanamu ya kuchora, na sanamu ya kuyeyusha; nitakufanyia kaburi lako; kwa maana u mbovu. "},
	{15, "15 Tazama, juu ya milima iko miguu yake aletaye habari njema, atangazaye amani. Zishike sikukuu zako, Ee Yuda, uziondoe nadhiri zako; kwa maana yule asiyefaa kitu hatapita kati yako tena kamwe; amekwisha kukatiliwa mbali. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sw2 poems[] = {
	{1, "1 Yeye asetaye vipande vipande amepanda juu mbele ya uso wako; zishike silaha, ilinde njia, vitie nguvu viuno vyako, uongeze uwezo wako sana. "},
	{2, "2 Kwa maana Bwana anairudisha fahari ya Yakobo, kama fahari ya Israeli; maana watekao nyara wamewateka, na kuyaharibu matawi ya mizabibu yao. "},
	{3, "3 Ngao ya mashujaa wake imefanywa kuwa nyekundu, watu walio hodari wa vita wamevaa nguo nyekundu sana; magari ya vita yametameta kwa chuma cha pua siku ya kujitengeza kwake, na mikuki inatikiswa kwa namna ya kutisha. "},
	{4, "4 Magari ya vita yanafanya mshindo njiani, Yanasongana-songana katika njia kuu; Kuonekana kwake ni kama mienge, Yanakwenda upesi kama umeme. "},
	{5, "5 Awakumbuka watu wake wenye heshima; Wanajikwaa katika mwendo wao; Wanafanya haraka waende ukutani; Nacho kitu cha kuwafunika kimewekwa tayari. "},
	{6, "6 Malango ya mito yamefunguka, na jumba la mfalme limeyeyushwa. "},
	{7, "7 Husabu naye amefunuliwa, anachukuliwa, na wajakazi wake wanalia kama kwa sauti ya hua, wakipiga-piga vifua vyao. "},
	{8, "8 Lakini Ninawi tokea zamani amekuwa kama ziwa la maji; ila hata sasa wanakimbia; Simameni! Simameni! Lakini hapana hata mmoja atazamaye nyuma. "},
	{9, "9 Chukueni nyara za fedha; Chukueni nyara za dhahabu; Kwa maana ni akiba isiyoisha, Fahari ya vyombo vipendezavyo. "},
	{10, "10 Amekuwa utupu, na ukiwa, na uharibifu; hata moyo unayeyuka, na magoti yanagongana-gongana; viunoni mwote mna utungu, na nyuso za wote zimekuwa nyeupe kwa hofu. "},
	{11, "11 Kao la simba li wapi? Na mahali walishapo wana-simba pa wapi, mahali walipotembea simba mume na simba mke na mwana-simba, wala hapana aliyewatia hofu? "},
	{12, "12 Simba alirarua vipande vipande chakula cha kuwatosha watoto wake, aliwasongea wake zake nyama, aliyajaza mapango yake mateka, na makao yake aliyajaza mawindo. "},
	{13, "13 Tazama, mimi ni juu yako, asema Bwana wa majeshi, nami nitayateketeza magari yako ya vita katika moshi, na upanga utawala wana-simba wako; nami nitayakatilia mbali mawindo yako katika nchi, na sauti za wajumbe wako hazitasikiwa tena kamwe. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sw3 poems[] = {
	{1, "1 Ole wake mji wa damu! Umejaa mambo ya uongo na unyang'anyi; mateka hayaondoki. "},
	{2, "2 Kelele za mjeledi, kelele za magurudumu yafanyayo kishindo; na farasi wenye kupara-para, na magari ya vita yenye kuruka-ruka; "},
	{3, "3 mpanda farasi akipanda, na upanga ukimeta-meta, na mkuki ukimemetuka; na wingi wa waliouawa, na chungu kubwa ya mizoga; mizoga haina mwisho; wanajikwaa juu ya mizoga yao. "},
	{4, "4 Kwa sababu ya wingi wa ukahaba wa yule kahaba mzuri, yule bibi wa mambo ya uchawi, auzaye mataifa kwa ukahaba wake, na jamaa za watu kwa uchawi wake. "},
	{5, "5 Tazama, mimi ni juu yako, asema Bwana wa majeshi; nami nitafunua marinda yako mbele ya uso wako; nami nitawaonyesha mataifa uchi wako, na falme aibu yako. "},
	{6, "6 Nami nitatupa uchafu uchukizao juu yako, kukufanya uwe mchafu, nami nitakufanya kuwa kitu cha kutazamwa kwa dharau. "},
	{7, "7 Hata itakuwa, wote wakutazamao watakukimbia, wakisema, Ninawi umeharibika; ni nani atakayeuhurumia? Nikutafutie wapi wafariji? "},
	{8, "8 Je! Wewe u mwema kuliko No-amoni, uliowekwa kati ya mito, uliozungukwa na maji; ambao boma lake lilikuwa bahari, na bahari ilikuwa ukuta wake. "},
	{9, "9 Kushi na Misri walikuwa nguvu zake, nazo zilikuwa hazina mpaka; Putu na Walibia walikuwa wasaidizi wake. "},
	{10, "10 Hata hivyo alichukuliwa mbali, alikwenda utumwani; watoto wake wachanga walisetwa kwenye maachano ya njia kuu zote; watu wake wenye heshima wakapigiwa kura, na wakuu wake wote wakafungwa kwa minyororo. "},
	{11, "11 Tena utalewa, utafichwa; tena utatafuta ngome kwa sababu ya adui. "},
	{12, "12 Ngome zako zote zitakuwa kama mitini yenye tini zilizoiva kwanza; ikitikisika zaanguka katika kinywa chake alaye. "},
	{13, "13 Tazama, watu wako walio ndani yako ni wanawake; malango ya nchi yako yamekuwa wazi kabisa mbele ya adui zako; moto umeteketeza mapingo yako. "},
	{14, "14 Teka maji yawe tayari kwa kuzingirwa kwako; Zitie nguvu ngome zako; Ingia katika udongo, yakanyage matope, Itie nguvu tanuru ya kuokea matofali. "},
	{15, "15 Huko moto utakuteketeza; Upanga utakukatilia mbali; Utakumeza kama tunutu alavyo; Jifanye kuwa wengi kama tunutu! Jifanye kuwa wengi kama nzige! "},
	{16, "16 Umeongeza wafanya biashara wako kuwa wengi kuliko nyota za mbinguni; tunutu huharibu; kisha huruka juu na kwenda zake. "},
	{17, "17 Watu wako waliotiwa taji ni kama nzige, na majemadari wako ni kama makundi ya mapanzi, watuao katika vitalu siku ya baridi, lakini jua lipandapo huruka juu na kwenda zao, na mahali pao walipo hapajulikani. "},
	{18, "18 Wachungaji wako wanalala usingizi, Ee mfalme wa Ashuru; watu wako wenye heshima wamepumzika; watu wako wametawanyika juu ya milima, wala hapana mtu wa kuwakusanya. "},
	{19, "19 Jeraha yako haipunguziki; jeraha yako ni nzito sana; wote wasikiao habari zako wapiga makofi juu yako; kwa maana ni nani ambaye uovu wako haukupita juu yake daima? "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};