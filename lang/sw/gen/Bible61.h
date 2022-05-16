#include <map>
#include <string>
class Bible61
{
	struct sw1	{ int val; const char *msg; };
	struct sw2	{ int val; const char *msg; };
	struct sw3	{ int val; const char *msg; };
public:
static void view1() {
struct sw1 poems[] = {
	{1, "1 Simoni Petro, mtumwa na mtume wa Yesu Kristo, kwa wale waliopata imani moja na sisi, yenye thamani, katika hali ya Mungu wetu, na Mwokozi Yesu Kristo. "},
	{2, "2 Neema na iwe kwenu na amani iongezwe katika kumjua Mungu na Yesu Bwana wetu. "},
	{3, "3 Kwa kuwa uweza wake wa Uungu umetukirimia vitu vyote vipasavyo uzima na utauwa, kwa kumjua yeye aliyetuita kwa utukufu wake na wema wake mwenyewe. "},
	{4, "4 Tena kwa hayo ametukirimia ahadi kubwa mno, za thamani, ili kwamba kwa hizo mpate kuwa washirika wa tabia ya Uungu, mkiokolewa na uharibifu uliomo duniani kwa sababu ya tamaa. "},
	{5, "5 Naam, na kwa sababu iyo hiyo mkijitahidi sana kwa upande wenu, katika imani yenu tieni na wema, na katika wema wenu maarifa, "},
	{6, "6 na katika maarifa yenu kiasi, na katika kiasi chenu saburi, na katika saburi yenu utauwa, "},
	{7, "7 na katika utauwa wenu upendano wa ndugu, na katika upendano wa ndugu, upendo. "},
	{8, "8 Maana mambo hayo yakiwa kwenu na kujaa tele, yawafanya ninyi kuwa si wavivu wala si watu wasio na matunda, kwa kumjua Bwana wetu Yesu Kristo. "},
	{9, "9 Maana yeye asiyekuwa na hayo ni kipofu, hawezi kuona vitu vilivyo mbali, amesahau kule kutakaswa dhambi zake za zamani. "},
	{10, "10 Kwa hiyo ndugu, jitahidini zaidi kufanya imara kuitwa kwenu na uteule wenu; maana mkitenda hayo hamtajikwaa kamwe. "},
	{11, "11 Maana hivi mtaruzukiwa kwa ukarimu kuingia katika ufalme wa milele wa Bwana wetu, Mwokozi wetu Yesu Kristo. "},
	{12, "12 Kwa hiyo nitakuwa tayari kuwakumbusha hayo siku zote, ijapokuwa mnayajua na kuthibitishwa katika kweli mliyo nayo. "},
	{13, "13 Nami naona ni haki, maadamu nipo mimi katika maskani hii, kuwaamsha kwa kuwakumbusha. "},
	{14, "14 Nikijua kwamba kule kuwekea mbali maskani yangu kwaja upesi, kama Bwana wetu Yesu Kristo alivyonionyesha. "},
	{15, "15 Walakini nitajitahidi, kwamba kila wakati baada ya kufariki kwangu mpate kuyakumbuka mambo hayo. "},
	{16, "16 Maana hatukufuata hadithi zilizotungwa kwa werevu, tulipowajulisha ninyi nguvu zake Bwana wetu Yesu Kristo na kuja kwake; bali tulikuwa tumeuona wenyewe ukuu wake. "},
	{17, "17 Maana alipata kwa Mungu Baba heshima na utukufu, hapo alipoletewa sauti iliyotoka katika utukufu mkuu, Huyu ni Mwanangu, mpendwa wangu, ninayependezwa naye. "},
	{18, "18 Na sauti hiyo sisi tuliisikia ikitoka mbinguni tulipokuwa pamoja naye katika mlima ule mtakatifu. "},
	{19, "19 Nasi tuna lile neno la unabii lililo imara zaidi, ambalo, mkiliangalia, kama taa ing'aayo mahali penye giza, mwafanya vyema, mpaka kutakapopambazuka, na nyota ya asubuhi kuzuka mioyoni mwenu. "},
	{20, "20 Mkijua neno hili kwanza, ya kwamba hakuna unabii katika maandiko upatao kufasiriwa kama apendavyo mtu fulani tu. "},
	{21, "21 Maana unabii haukuletwa po pote kwa mapenzi ya mwanadamu; bali wanadamu walinena yaliyotoka kwa Mungu, wakiongozwa na Roho Mtakatifu. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sw2 poems[] = {
	{1, "1 Lakini kuliondokea manabii wa uongo katika wale watu, kama vile kwenu kutakavyokuwako waalimu wa uongo, watakaoingiza kwa werevu uzushi wa kupoteza, wakimkana hata Bwana aliyewanunua, wakijiletea uharibifu usiokawia. "},
	{2, "2 Na wengi watafuata ufisadi wao; na kwa hao njia ya kweli itatukanwa. "},
	{3, "3 Na katika kutamani watajipatia faida kwenu kwa maneno yaliyotungwa; ambao hukumu yao tangu zamani haikawii, wala uvunjifu wao hausinzii. "},
	{4, "4 Kwa maana ikiwa Mungu hakuwaachilia malaika waliokosa, bali aliwatupa shimoni, akawatia katika vifungo vya giza, walindwe hata ije hukumu; "},
	{5, "5 wala hakuuachilia ulimwengu wa kale, bali alimhifadhi Nuhu, mjumbe wa haki, na watu wengine saba, hapo alipoleta Gharika juu ya ulimwengu wa wasiomcha Mungu; "},
	{6, "6 tena akaihukumu miji ya Sodoma na Gomora, akiipindua na kuifanya majivu, akaifanya iwe ishara kwa watu watakaokuwa hawamchi Mungu baada ya haya; "},
	{7, "7 akamwokoa Lutu, yule mwenye haki aliyehuzunishwa sana na mwenendo wa ufisadi wa hao wahalifu; "},
	{8, "8 maana mtu huyu mwenye haki akikaa kati yao, kwa kuona na kusikia, alijitesa roho yake yenye haki, siku baada ya siku, kwa matendo yao yasiyo na sheria; "},
	{9, "9 basi, Bwana ajua kuwaokoa watauwa na majaribu, na kuwaweka wasio haki katika hali ya adhabu hata siku ya hukumu; "},
	{10, "10 na hasa wale waufuatao mwili katika tamaa ya mambo machafu. na kudharau mamlaka. "},
	{11, "11 Wenye ushupavu, wenye kujikinai, hawatetemeki wakiyatukana matukufu; ijapokuwa malaika ambao ni wakuu zaidi kwa uwezo na nguvu, hawaleti mashitaka mabaya juu yao mbele za Bwana. "},
	{12, "12 Lakini hao kama wanyama wasio na akili, ambao walizaliwa kama wanyama tu wa kukamatwa na kupotezwa, wakikufuru katika mambo wasiyoyajua, wataangamizwa katika maangamizo yao; "},
	{13, "13 Wakipatikana na madhara, ambayo ni ujira wa udhalimu wao, wakidhania kuwa ulevi wakati wa mchana ni anasa; wamekuwa ni mawaa na aibu wakifuata anasa zisizo kiasi katika karamu zao za upendo, wafanyapo karamu pamoja nanyi; "},
	{14, "14 wenye macho yajaayo uzinzi, watu wasiokoma kutenda dhambi, wenye kuhadaa roho zisizo imara, wenye mioyo iliyozoezwa kutamani, wana wa laana; "},
	{15, "15 wakiiacha njia iliyonyoka, wakapotea, wakiifuata njia ya Balaamu, mwana wa Beori, aliyependa ujira wa udhalimu; "},
	{16, "16 lakini alikaripiwa kwa uhalifu wake mwenyewe; punda, asiyeweza kusema, akinena kwa sauti ya kibinadamu, aliuzuia wazimu wa nabii yule. "},
	{17, "17 Hawa ni visima visivyo na maji, na mawingu yachukuliwayo na tufani, ambao weusi wa giza ni akiba waliyowekewa. "},
	{18, "18 Maana wakinena maneno makuu mno ya kiburi, kwa tamaa za mwili na kwa ufisadi huwahadaa watu walioanza kuwakimbia wale wanaoenenda katika udanganyifu; "},
	{19, "19 wakiwaahidia uhuru, nao wenyewe ni watumwa wa uharibifu, maana mtu akishindwa na mtu huwa mtumwa wa mtu yule. "},
	{20, "20 Kwa maana wale waliokwisha kuyakimbia machafu ya dunia kwa kumjua Bwana na Mwokozi Yesu Kristo, kama wakinaswa tena na kushindwa, hali yao ya mwisho imekuwa mbaya kuliko ile ya kwanza. "},
	{21, "21 Maana ingekuwa heri kwao kama wasingaliijua njia ya haki, kuliko kuijua, kisha kuiacha ile amri takatifu waliyopewa. "},
	{22, "22 Lakini imetukia kwao sawasawa na ile mithali ya kweli, Mbwa ameyarudia matapiko yake mwenyewe, na nguruwe aliyeoshwa amerudi kugaa-gaa matopeni. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sw3 poems[] = {
	{1, "1 Wapenzi, waraka huu ndio wa pili niwaandikiao ninyi; katika zote mbili naziamsha nia zenu safi kwa kuwakumbusha, "},
	{2, "2 mpate kuyakumbuka yale maneno yaliyonenwa zamani na manabii watakatifu, na ile amri ya Bwana na Mwokozi iliyoletwa na mitume wenu. "},
	{3, "3 Mkijua kwanza neno hili ya kwamba katika siku za mwisho watakuja na dhihaka zao watu wenye kudhihaki, wafuatao tamaa zao wenyewe, "},
	{4, "4 na kusema, Iko wapi ahadi ile ya kuja kwake? Kwa maana, tangu hapo babu zetu walipolala, vitu vyote vinakaa hali iyo hiyo, tangu mwanzo wa kuumbwa. "},
	{5, "5 Maana hufumba macho yao wasione neno hili ya kuwa zilikuwako mbingu tangu zamani, na nchi pia, imefanyizwa kutoka katika maji, na ndani ya maji, kwa neno la Mungu; "},
	{6, "6 kwa hayo dunia ile ya wakati ule iligharikishwa na maji, ikaangamia. "},
	{7, "7 Lakini mbingu za sasa na nchi zimewekwa akiba kwa moto, kwa neno lilo hilo, zikilindwa hata siku ya hukumu, na ya kuangamia kwao wanadamu wasiomcha Mungu. "},
	{8, "8 Lakini, wapenzi, msilisahau neno hili, kwamba kwa Bwana siku moja ni kama miaka elfu, na miaka elfu ni kama siku moja. "},
	{9, "9 Bwana hakawii kuitimiza ahadi yake, kama wengine wanavyokudhani kukawia, bali huvumilia kwenu, maana hapendi mtu ye yote apotee, bali wote wafikilie toba. "},
	{10, "10 Lakini siku ya Bwana itakuja kama mwivi; katika siku hiyo mbingu zitatoweka kwa mshindo mkuu, na viumbe vya asili vitaunguzwa, na kufumuliwa, na nchi na kazi zilizomo ndani yake zitateketea. "},
	{11, "11 Basi, kwa kuwa vitu hivi vyote vitafumuliwa hivyo, imewapasa ninyi kuwa watu wa tabia gani katika mwenendo mtakatifu na utauwa, "},
	{12, "12 mkitazamia hata ije siku ile ya Mungu, na kuihimiza; ambayo katika hiyo mbingu zitafumuliwa zikiungua, na viumbe vya asili vitateketea na kuyeyuka? "},
	{13, "13 Lakini, kama ilivyo ahadi yake, mnatazamia mbingu mpya na nchi mpya, ambayo haki yakaa ndani yake. "},
	{14, "14 Kwa hiyo, wapenzi, kwa kuwa mnatazamia mambo hayo, fanyeni bidii ili mwonekane katika amani kuwa hamna mawaa wala aibu mbele yake. "},
	{15, "15 Nanyi uhesabuni uvumilivu wa Bwana wetu kuwa ni wokovu, kama vile na ndugu yetu mpenzi Paulo alivyowaandikia kwa hekima aliyopewa; "},
	{16, "16 vile vile kama katika nyaraka zake zote pia, akitoa humo habari za mambo hayo; katika nyaraka hizo yamo mambo ambayo ni vigumu kuelewa nayo; na mambo hayo watu wasio na elimu, wasio imara, huyapotoa, kama vile wayapotoavyo na maandiko mengine, kwa uvunjifu wao wenyewe. "},
	{17, "17 Basi, wapenzi mkitangulia kujua hayo, jilindeni nafsi zenu, msije mkachukuliwa na kosa la hao wahalifu mkaanguka na kuuacha uthibitifu wenu. "},
	{18, "18 Lakini, kueni katika neema, na katika kumjua Bwana wetu na Mwokozi Yesu Kristo. Utukufu una yeye sasa na hata milele. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};