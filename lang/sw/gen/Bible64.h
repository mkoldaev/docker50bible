#include <map>
#include <string>
class Bible64
{
	struct sw1	{ int val; const char *msg; };
public:
static void view1() {
struct sw1 poems[] = {
	{1, "1 Mzee, kwa Gayo mpenzi, nimpendaye katika kweli. "},
	{2, "2 Mpenzi naomba ufanikiwe katika mambo yote na kuwa na afya yako, kama vile roho yako ifanikiwavyo. "},
	{3, "3 Maana nalifurahi mno walipokuja ndugu na kuishuhudia kweli yako, kama uendavyo katika kweli. "},
	{4, "4 Sina furaha iliyo kuu kuliko hii, kusikia ya kwamba watoto wangu wanakwenda katika kweli. "},
	{5, "5 Mpenzi, kazi ile ni ya uaminifu uwatendeayo hao ndugu na hao wageni nao, "},
	{6, "6 waliokushuhudia upendo wako mbele ya kanisa; utafanya vizuri ukiwasafirisha kama ipasavyo kwa Mungu. "},
	{7, "7 Kwa maana, kwa ajili ya Jina hilo, walitoka, wasipokee kitu kwa Mataifa. "},
	{8, "8 Basi imetupasa sisi kuwakaribisha watu kama hao, ili tuwe watenda kazi pamoja na kweli. "},
	{9, "9 Naliliandikia kanisa neno, lakini Diotrefe, apendaye kuwa wa kwanza kati yao, hatukubali. "},
	{10, "10 Kwa hiyo, nikija, nitayakumbuka matendo yake atendayo, atoavyo upuzi juu yetu kwa maneno maovu; wala hatoshwi na hayo, ila yeye mwenyewe hawakaribishi hao ndugu, na wale watakao kuwakaribisha, huwazuia, na kuwatoa katika kanisa. "},
	{11, "11 Mpenzi, usiuige ubaya, bali uige wema. Yeye atendaye mema ni wa Mungu, bali yeye atendaye mabaya hakumwona Mungu. "},
	{12, "12 Demetrio ameshuhudiwa na watu wote, tena na ile kweli yenyewe. Nasi pia twashuhudia, nawe wajua ya kwamba ushuhuda wetu ni kweli. "},
	{13, "13 Nalikuwa na mambo mengi ya kukuandikia, lakini sipendi kukuandikia kwa wino na kalamu. "},
	{14, "14 Lakini nataraji kukuona karibu, nasi tutasema uso kwa uso. "},
	{15, "15 Amani kwako. Rafiki zetu wakusalimu. Wasalimu hao rafiki zetu, kila mtu kwa jina lake. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};