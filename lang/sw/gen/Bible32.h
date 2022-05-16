#include <map>
#include <string>
class Bible32
{
	struct sw1	{ int val; const char *msg; };
	struct sw2	{ int val; const char *msg; };
	struct sw3	{ int val; const char *msg; };
	struct sw4	{ int val; const char *msg; };
public:
static void view1() {
struct sw1 poems[] = {
	{1, "1 Basi neno la Bwana lilimjia Yona, mwana wa Amitai, kusema, "},
	{2, "2 Ondoka, uende Ninawi, mji ule mkubwa, ukapige kelele juu yake; kwa maana uovu wao umepanda juu mbele zangu. "},
	{3, "3 Lakini Yona akaondoka akimbilie Tarshishi, apate kujiepusha na uso wa Bwana; akatelemka hata Yafa, akaona merikebu inayokwenda Tarshishi; basi, akatoa nauli, akapanda merikebuni, aende pamoja nao Tarshishi, ajiepushe na uso wa Bwana. "},
	{4, "4 Lakini Bwana alituma upepo mkuu baharini, ikawa tufani kubwa baharini, hata merikebu ikawa karibu na kuvunjika. "},
	{5, "5 Basi wale mabaharia wakaogopa, kila mtu akamwomba mungu wake; nao wakatupa baharini shehena iliyokuwa merikebuni, ili kuupunguza uzito wake. Lakini Yona alikuwa ameshuka hata pande za ndani za merikebu; akajilaza, akapata usingizi. "},
	{6, "6 Basi nahodha akamwendea, akamwambia, Una nini, Ewe ulalaye usingizi? Amka, ukamwombe Mungu wako; labda Mungu huyo atatukumbuka, tusipotee. "},
	{7, "7 Wakasemezana kila mtu na mwenzake, Haya, na mpige kura, mpate kujua mabaya haya yametupata kwa sababu ya nani. Basi wakapiga kura, nayo kura ikamwangukia Yona. "},
	{8, "8 Ndipo wakamwambia, Tafadhali utuambie, wewe ambaye mabaya haya yametupata kwa sababu yako; kazi yako ni kazi gani? Nawe umetoka wapi? Nchi yako ni nchi ipi? Nawe u mtu wa kabila gani? "},
	{9, "9 Akawaambia, Mimi ni Mwebrania; nami namcha Bwana, Mungu wa mbingu, aliyeziumba bahari na nchi kavu. "},
	{10, "10 Ndipo watu wale wakaogopa mno, wakamwambia, Ni jambo gani hili ulilolitenda! Kwa maana watu wale walijua ya kuwa amekimbia, ajiepushe na uso wa Bwana, kwa sababu alikuwa amewajulisha. "},
	{11, "11 Basi wakamwambia, Tukutende nini, ili bahari itulie? Kwa maana bahari ilikuwa inazidi kuchafuka. "},
	{12, "12 Naye akawaambia, Nikamateni, mnitupe baharini; basi bahari itatulia; kwa maana najua ya kuwa ni kwa ajili yangu tufani hii imewapata. "},
	{13, "13 Lakini wale watu wakavuta makasia kwa nguvu, ili wapate kurudi pwani, wasiweze; kwa maana bahari ilizidi kuwachafukia sana. "},
	{14, "14 Basi wakamlilia Bwana, wakasema, Twakuomba, Ee Bwana, twakuomba, tusiangamie kwa ajili ya uhai wa mtu huyu, wala usitupatilize kwa ajili ya damu isiyo na hatia; kwa maana wewe, Bwana, umefanya kama ulivyopenda. "},
	{15, "15 Basi wakamkamata Yona, wakamtupa baharini, nayo bahari ikaacha kuchafuka. "},
	{16, "16 Ndipo wale watu wakamwogopa Bwana mno, wakamtolea Bwana sadaka, na kuweka nadhiri. "},
	{17, "17 Bwana akaweka tayari samaki mkubwa ili ammeze Yona, naye Yona akawa ndani ya tumbo la samaki yule muda wa siku tatu, mchana na usiku. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sw2 poems[] = {
	{1, "1 Ndipo Yona akamwomba Bwana, Mungu wake, katika tumbo la yule samaki, "},
	{2, "2 Akasema, Nalimlilia Bwana kwa sababu ya shida yangu, Naye akaniitikia; Katika tumbo la kuzimu naliomba, Nawe ukasikia sauti yangu. "},
	{3, "3 Maana ulinitupa vilindini, Ndani ya moyo wa bahari; Gharika ya maji ikanizunguka pande zote; Mawimbi yako yote na gharika zako zote zimepita juu yangu. "},
	{4, "4 Nami nikasema, Nimetupwa mbali na macho yako; Lakini nitatazama tena kukabili hekalu lako takatifu. "},
	{5, "5 Maji yalinizunguka, hata nafsini mwangu; Vilindi vilinizunguka; Mwani ulikizinga kichwa changu; "},
	{6, "6 Nalishuka hata pande za chini za milima; Hiyo nchi na mapingo yake yalinifunga hata milele; Lakini umeipandisha nafsi yangu kutoka shimoni, Ee Bwana, Mungu wangu, "},
	{7, "7 Roho yangu ilipozimia ndani yangu, Nalimkumbuka Bwana; Maombi yangu yakakuwasilia, Katika hekalu lako takatifu. "},
	{8, "8 Watu waangaliao mambo ya ubatili na uongo Hujitenga na rehema zao wenyewe; "},
	{9, "9 Lakini mimi nitakutolea sadaka kwa sauti ya shukrani; Nitaziondoa nadhiri zangu. Wokovu hutoka kwa Bwana. "},
	{10, "10 Bwana akasema na yule samaki, naye akamtapika Yona pwani. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sw3 poems[] = {
	{1, "1 Neno la Bwana likamjia Yona mara ya pili, kusema, "},
	{2, "2 Ondoka, uende Ninawi, mji ule mkubwa; ukaihubiri habari nitakayokuamuru. "},
	{3, "3 Basi Yona akaondoka, akaenda Ninawi, kama Bwana alivyonena. Basi Ninawi ulikuwa mji mkubwa mno, ukubwa wake mwendo wa siku tatu. "},
	{4, "4 Yona akaanza kuuingia mji mwendo wa siku moja, akapaza sauti yake, akasema, Baada ya siku arobaini Ninawi utaangamizwa. "},
	{5, "5 Basi watu wa Ninawi wakamsadiki Mungu; wakatangaza kufunga, wakajivika nguo za magunia, tangu yeye aliye mkubwa hata aliye mdogo. "},
	{6, "6 Habari ikamfikia mfalme wa Ninawi, naye akaondoka katika kiti chake cha enzi, akavua vazi lake, akajivika nguo za magunia, na kuketi katika majivu. "},
	{7, "7 Naye akapiga mbiu, akatangaza habari katika mji wa Ninawi, kwa amri ya mfalme na wakuu wake; kusema, Mwanadamu asionje kitu, wala mnyama wala makundi ya ng'ombe, wala makundi ya kondoo; wasile, wala wasinywe maji; "},
	{8, "8 bali na wafunikwe nguo za magunia, mwanadamu na mnyama pia, nao wakamlilie Mungu kwa nguvu, naam, na wageuke, kila mtu akaache njia yake mbaya, na udhalimu ulio mikononi mwake. "},
	{9, "9 Ni nani ajuaye kwamba Mungu hatageuka na kughairi, na kuiacha hasira yake kali, ili msiangamizwe? "},
	{10, "10 Mungu akaona matendo yao, ya kuwa wameiacha njia yao mbaya. Basi Mungu akalighairi neno lile baya, ambalo alisema atawatenda; asilitende. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sw4 poems[] = {
	{1, "1 Lakini jambo hili lilimchukiza Yona sana, naye akakasirika. "},
	{2, "2 Akamwomba Bwana, akasema, Nakuomba, Ee Bwana; sivyo hivyo nilivyosema, hapo nilipokuwa katika nchi yangu? Hii ndiyo sababu nalifanya haraka kukimbilia Tarshishi; kwa maana nalijua ya kuwa wewe u Mungu mwenye neema, umejaa huruma, si mwepesi wa hasira, u mwingi wa rehema, nawe waghairi mabaya. "},
	{3, "3 Basi, sasa, Ee Bwana, nakuomba, uniondolee uhai wangu; maana ni afadhali nife mimi kuliko kuishi. "},
	{4, "4 Naye Bwana akasema, Je! Unatenda vema kukasirika? "},
	{5, "5 Ndipo Yona akatoka mjini, akaketi upande wa mashariki wa mji, akajifanyia kibanda huko, akakaa chini yake uvulini, hata aone mji ule utakuwaje. "},
	{6, "6 Na Bwana Mungu aliweka tayari mtango, akaufanya ukue juu ya Yona, ili uwe kivuli juu ya kichwa chake, na kumponya katika hali yake mbaya. Basi Yona akafurahi sana kwa sababu ya ule mtango. "},
	{7, "7 Lakini siku ya pili kulipopambazuka, Mungu akaweka tayari buu, nalo likautafuna ule mtango, ukakatika. "},
	{8, "8 Basi ikawa, jua lilipopanda juu, Mungu akaweka tayari upepo wa mashariki, wenye hari nyingi; jua likampiga Yona kichwani, hata akazimia, naye akajitakia kufa, akasema, Ni afadhali nife mimi kuliko kuishi. "},
	{9, "9 Mungu akamwambia Yona, Je! Unatenda vema kukasirika kwa ajili ya mtango? Naye akasema, Ndiyo, natenda vema kukasirika hata kufa. "},
	{10, "10 Bwana akamwambia, Wewe umeuhurumia mtango, ambao hukuufanyia kazi, wala kuuotesha; uliomea katika usiku mmoja, na kuangamia katika usiku mmoja; "},
	{11, "11 na mimi, je! Haikunipasa kuuhurumia Ninawi, mji ule mkubwa; ambao ndani yake wamo watu zaidi ya mia na ishirini elfu, wasioweza kupambanua katika mkono wao wa kulia na mkono wao wa kushoto; tena wamo wanyama wa kufugwa wengi sana? "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};