#include <map>
#include <string>
class Bible55
{
	struct sw1	{ int val; const char *msg; };
	struct sw2	{ int val; const char *msg; };
	struct sw3	{ int val; const char *msg; };
	struct sw4	{ int val; const char *msg; };
public:
static void view1() {
struct sw1 poems[] = {
	{1, "1 Paulo, mtume wa Kristo Yesu, kwa mapenzi ya Mungu; kwa ajili ya ahadi ya uzima ulio katika Kristo Yesu; "},
	{2, "2 kwa Timotheo, mwanangu mpendwa. Neema na iwe kwako, na rehema, na amani, zitokazo kwa Mungu Baba na kwa Kristo Yesu Bwana wetu. "},
	{3, "3 Namshukuru Mungu, nimwabuduye kwa dhamiri safi tangu zamani za wazee wangu, kama vile nikukumbukavyo wewe daima, katika kuomba kwangu usiku na mchana. "},
	{4, "4 Nami natamani sana kukuona, nikiyakumbuka machozi yako, ili nijae furaha; "},
	{5, "5 nikiikumbuka imani uliyo nayo isiyo na unafiki, ambayo ilikaa kwanza katika bibi yako Loisi, na katika mama yako Eunike, nami nasadiki wewe nawe unayo. "},
	{6, "6 Kwa sababu hiyo nakukumbusha, uichochee karama ya Mungu, iliyo ndani yako kwa kuwekewa mikono yangu. "},
	{7, "7 Maana Mungu hakutupa roho ya woga, bali ya nguvu na ya upendo na ya moyo wa kiasi. "},
	{8, "8 Basi usiuonee haya ushuhuda wa Bwana wetu, wala usinionee haya mimi mfungwa wake, bali uvumilie mabaya pamoja nami kwa ajili ya Injili, kwa kadiri ya nguvu ya Mungu; "},
	{9, "9 ambaye alituokoa akatuita kwa mwito mtakatifu, si kwa kadiri ya matendo yetu sisi, bali kwa kadiri ya makusudi yake yeye na neema yake. Neema hiyo tulipewa katika Kristo Yesu tangu milele, "},
	{10, "10 na sasa inadhihirishwa kwa kufunuliwa kwake Mwokozi wetu Kristo Yesu; aliyebatili mauti, na kuufunua uzima na kutokuharibika, kwa ile Injili; "},
	{11, "11 ambayo kwa ajili ya hiyo naliwekwa niwe mhubiri na mtume na mwalimu. "},
	{12, "12 Kwa sababu hiyo nimepatikana na mateso haya, wala sitahayari; kwa maana namjua yeye niliyemwamini, na kusadiki ya kwamba aweza kukilinda kile nilichokiweka amana kwake hata siku ile. "},
	{13, "13 Shika kielelezo cha maneno yenye uzima uliyoyasikia kwangu, katika imani na upendo ulio katika Kristo Yesu. "},
	{14, "14 Ilinde ile amana nzuri kwa Roho Mtakatifu akaaye ndani yetu. "},
	{15, "15 Waijua habari hii, ya kuwa wote walio wa Asia waliniepuka, ambao miongoni mwao wamo Figelo na Hermogene. "},
	{16, "16 Bwana awape rehema wale walio wa mlango wake Onesiforo; maana mara nyingi aliniburudisha, wala hakuuonea haya mnyororo wangu; "},
	{17, "17 bali, alipokuwapo hapa Rumi, alinitafuta kwa bidii akanipata. "},
	{18, "18 Bwana na ampe kuona rehema machoni pa Bwana siku ile. Na jinsi alivyonihudumia kwa mengi huko Efeso, wewe unajua sana. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sw2 poems[] = {
	{1, "1 Basi wewe, mwanangu, uwe hodari katika neema iliyo katika Kristo Yesu. "},
	{2, "2 Na mambo yale uliyoyasikia kwangu mbele ya mashahidi wengi, hayo uwakabidhi watu waaminifu watakaofaa kuwafundisha na wengine. "},
	{3, "3 Ushiriki taabu pamoja nami, kama askari mwema wa Kristo Yesu. "},
	{4, "4 Hakuna apigaye vita ajitiaye katika shughuli za dunia, ili ampendeze yeye aliyemwandika awe askari. "},
	{5, "5 Hata mtu akishindana katika machezo hapewi taji, asiposhindana kwa halali. "},
	{6, "6 Yampasa mkulima mwenye taabu ya kazi kuwa wa kwanza wa kupata fungu la matunda. "},
	{7, "7 Yafahamu sana hayo nisemayo, kwa maana Bwana atakupa akili katika mambo yote. "},
	{8, "8 Mkumbuke Yesu Kristo, aliyefufuka katika wafu, wa uzao wa Daudi kama inenavyo injili yangu. "},
	{9, "9 Nami katika hiyo nimeteswa hata kufungwa kama mtenda mabaya; lakini neno la Mungu halifungwi. "},
	{10, "10 Kwa ajili ya hilo nastahimili mambo yote, kwa ajili ya wateule, ili wao nao waupate wokovu ule ulio katika Kristo Yesu, pamoja na utukufu wa milele. "},
	{11, "11 Ni neno la kuaminiwa. Kwa maana, Kama tukifa pamoja naye, tutaishi pamoja naye pia; "},
	{12, "12 Kama tukistahimili, tutamiliki pamoja naye; Kama tukimkana yeye, yeye naye atatukana sisi; "},
	{13, "13 Kama sisi hatuamini, yeye hudumu wa kuaminiwa. Kwa maana hawezi kujikana mwenyewe. "},
	{14, "14 Uwakumbushe mambo hayo, ukiwaonya machoni pa Mungu, wasiwe na mashindano ya maneno, ambayo hayana faida, bali huwaharibu wasikiao. "},
	{15, "15 Jitahidi kujionyesha kuwa umekubaliwa na Mungu, mtenda kazi asiye na sababu ya kutahayari, ukitumia kwa halali neno la kweli. "},
	{16, "16 Jiepushe na maneno yasiyo na maana, ambayo si ya dini; kwa kuwa wataendelea zaidi katika maovu, "},
	{17, "17 na neno lao litaenea kama donda-ndugu. Miongoni mwa hao wamo Himenayo na Fileto, "},
	{18, "18 walioikosa ile kweli, wakisema ya kwamba kiyama imekwisha kuwapo, hata kuipindua imani ya watu kadha wa kadha. "},
	{19, "19 Lakini msingi wa Mungu ulio imara umesimama, wenye muhuri hii, Bwana awajua walio wake. Na tena, Kila alitajaye jina la Bwana na auache uovu. "},
	{20, "20 Basi katika nyumba kubwa havimo vyombo vya dhahabu na fedha tu, bali na vya mti, na vya udongo; vingine vina heshima, vingine havina. "},
	{21, "21 Basi ikiwa mtu amejitakasa kwa kujitenga na hao, atakuwa chombo cha kupata heshima, kilichosafishwa, kimfaacho Bwana, kimetengenezwa kwa kila kazi iliyo njema. "},
	{22, "22 Lakini zikimbie tamaa za ujanani; ukafuate haki, na imani, na upendo, na amani, pamoja na wale wamwitao Bwana kwa moyo safi. "},
	{23, "23 Walakini uyakatae maswali ya upumbavu yasiyo na elimu, ukijua ya kuwa huzaa magomvi. "},
	{24, "24 Tena haimpasi mtumwa wa Bwana kuwa mgomvi; bali kuwa mwanana kwa watu wote, awezaye kufundisha, mvumilivu; "},
	{25, "25 akiwaonya kwa upole wao washindanao naye, ili kama ikiwezekana, Mungu awape kutubu na kuijua kweli; "},
	{26, "26 wapate tena fahamu zao, na kutoka katika mtego wa Ibilisi, ambao hao wametegwa naye, hata kuyafanya mapenzi yake. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sw3 poems[] = {
	{1, "1 Lakini ufahamu neno hili, ya kuwa siku za mwisho kutakuwako nyakati za hatari. "},
	{2, "2 Maana watu watakuwa wenye kujipenda wenyewe, wenye kupenda fedha, wenye kujisifu, wenye kiburi, wenye kutukana, wasiotii wazazi wao, wasio na shukrani, wasio safi, "},
	{3, "3 wasiowapenda wa kwao, wasiotaka kufanya suluhu, wasingiziaji, wasiojizuia, wakali, wasiopenda mema, "},
	{4, "4 wasaliti, wakaidi, wenye kujivuna, wapendao anasa kuliko kumpenda Mungu; "},
	{5, "5 wenye mfano wa utauwa, lakini wakikana nguvu zake; hao nao ujiepushe nao. "},
	{6, "6 Kwa maana katika hao wamo wale wajiingizao katika nyumba za watu, na kuchukua mateka wanawake wajinga wenye mizigo ya dhambi, waliochukuliwa na tamaa za namna nyingi; "},
	{7, "7 wakijifunza siku zote, ila wasiweze kabisa kuufikia ujuzi wa kweli. "},
	{8, "8 Na kama vile Yane na Yambre walivyopingana na Musa, vivyo hivyo na hawa wanapingana na ile kweli; ni watu walioharibika akili zao, wamekataliwa kwa mambo ya imani. "},
	{9, "9 Lakini hawataendelea sana; maana upumbavu wao utakuwa dhahiri kwa watu wote, kama vile na upumbavu wa hao ulivyokuwa dhahiri. "},
	{10, "10 Bali wewe umeyafuata mafundisho yangu, na mwenendo wangu, na makusudi yangu, na imani, na uvumilivu, "},
	{11, "11 na upendo, na saburi; tena na adha zangu na mateso, mambo yaliyonipata katika Antiokia, katika Ikonio, na katika Listra, kila namna ya adha niliyoistahimili, naye Bwana aliniokoa katika hayo yote. "},
	{12, "12 Naam, na wote wapendao kuishi maisha ya utauwa katika Kristo Yesu wataudhiwa. "},
	{13, "13 lakini watu wabaya na wadanganyaji wataendelea, na kuzidi kuwa waovu, wakidanganya na kudanganyika. "},
	{14, "14 Bali wewe ukae katika mambo yale uliyofundishwa na kuhakikishwa, kwa maana unajua ni akina nani ambao ulijifunza kwao; "},
	{15, "15 na ya kuwa tangu utoto umeyajua maandiko matakatifu, ambayo yaweza kukuhekimisha hata upate wokovu kwa imani iliyo katika Kristo Yesu. "},
	{16, "16 Kila andiko, lenye pumzi ya Mungu, lafaa kwa mafundisho, na kwa kuwaonya watu makosa yao, na kwa kuwaongoza, na kwa kuwaadibisha katika haki; "},
	{17, "17 ili mtu wa Mungu awe kamili, amekamilishwa apate kutenda kila tendo jema. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sw4 poems[] = {
	{1, "1 Nakuagiza mbele za Mungu, na mbele za Kristo Yesu, atakayewahukumu walio hai na waliokufa; kwa kufunuliwa kwake na kwa ufalme wake; "},
	{2, "2 lihubiri neno, uwe tayari, wakati ukufaao na wakati usiokufaa, karipia, kemea, na kuonya kwa uvumilivu wote na mafundisho. "},
	{3, "3 Maana utakuja wakati watakapoyakataa mafundisho yenye uzima; ila kwa kuzifuata nia zao wenyewe watajipatia waalimu makundi makundi, kwa kuwa wana masikio ya utafiti; "},
	{4, "4 nao watajiepusha wasisikie yaliyo kweli, na kuzigeukia hadithi za uongo. "},
	{5, "5 Bali wewe, uwe na kiasi katika mambo yote, vumilia mabaya, fanya kazi ya mhubiri wa Injili, timiliza huduma yako. "},
	{6, "6 Kwa maana, mimi sasa namiminwa, na wakati wa kufariki kwangu umefika. "},
	{7, "7 Nimevipiga vita vilivyo vizuri, mwendo nimeumaliza, Imani nimeilinda; "},
	{8, "8 baada ya hayo nimewekewa taji ya haki, ambayo Bwana, mhukumu mwenye haki, atanipa siku ile; wala si mimi tu, bali na watu wote pia waliopenda kufunuliwa kwake. "},
	{9, "9 Jitahidi kuja kwangu upesi. "},
	{10, "10 Maana Dema aliniacha, akiupenda ulimwengu huu wa sasa, akasafiri kwenda Thesalonike; Kreske amekwenda Galatia; Tito amekwenda Dalmatia. "},
	{11, "11 Luka peke yake yupo hapa pamoja nami. Umtwae Marko, umlete pamoja nawe, maana anifaa kwa utumishi. "},
	{12, "12 Lakini Tikiko nalimpeleka Efeso. "},
	{13, "13 Lile joho nililoliacha kwa Karpo huko Troa, ujapo ulilete, na vile vitabu, hasa vile vya ngozi. "},
	{14, "14 Iskanda, mfua shaba, alionyesha ubaya mwingi kwangu; Bwana atamlipa sawasawa na matendo yake. "},
	{15, "15 Nawe ujihadhari na huyo, kwa sababu aliyapinga sana maneno yetu. "},
	{16, "16 Katika jawabu langu la kwanza hakuna mtu aliyesimama upande wangu, bali wote waliniacha; naomba wasihesabiwe hatia kwa jambo hilo. "},
	{17, "17 Lakini Bwana alisimama pamoja nami akanitia nguvu, ili kwa kazi yangu ule ujumbe utangazwe kwa utimilifu, hata wasikie Mataifa yote; nami nikaokolewa katika kinywa cha simba. "},
	{18, "18 Bwana ataniokoa na kila neno baya, na kunihifadhi hata nifike ufalme wake wa mbinguni. Utukufu una Yeye milele na milele. Amina. "},
	{19, "19 Nisalimie Priska na Akila, na wale wa nyumbani mwa Onesiforo. "},
	{20, "20 Erasto alikaa Korintho. Trofimo nalimwacha huko Mileto, hawezi. "},
	{21, "21 Jitahidi kuja kabla ya wakati wa baridi. Eubulo akusalimu, na Pude, na Lino, na Klaudia, na ndugu wote pia. "},
	{22, "22 Bwana na awe pamoja na roho yako. Neema na iwe pamoja nanyi. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};