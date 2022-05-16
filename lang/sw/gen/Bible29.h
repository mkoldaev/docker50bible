#include <map>
#include <string>
class Bible29
{
	struct sw1	{ int val; const char *msg; };
	struct sw2	{ int val; const char *msg; };
	struct sw3	{ int val; const char *msg; };
public:
static void view1() {
struct sw1 poems[] = {
	{1, "1 Neno la Bwana lililomjia Yoeli, mwana wa Pethueli. "},
	{2, "2 Sikieni haya, enyi wazee; Sikilizeni, enyi wenyeji wote wa nchi. Je! Mambo haya yamekuwako katika siku zenu, Au katika siku za baba zenu? "},
	{3, "3 Waarifuni watoto wenu habari yake, Watoto wenu wakawaambie watoto wao, Na watoto wao wakakiambie kizazi kingine. "},
	{4, "4 Yaliyosazwa na tunutu yameliwa na nzige; na yaliyosazwa na nzige yameliwa na parare; na yaliyosazwa na parare yameliwa na madumadu. "},
	{5, "5 Levukeni, enyi walevi, mkalie; Pigeni yowe, ninyi nyote mnywao divai; Kwa sababu ya divai mpya; Maana umekatiliwa mbali na vinywa vyenu. "},
	{6, "6 Maana taifa limepanda juu ya nchi yangu, Lenye nguvu, tena halina hesabu; Meno yake ni kama meno ya simba, Naye ana magego ya simba mkubwa. "},
	{7, "7 Ameuharibu mzabibu wangu; ameuvunja mtini wangu; ameyaambua magamba yake kabisa; ameuangusha chini; matawi yake yamefanywa kuwa meupe. "},
	{8, "8 Ombolea kama mwanamwali avaaye magunia Kwa ajili ya mume wa ujana wake. "},
	{9, "9 Sadaka ya unga na sadaka ya kinywaji Zimekatiliwa mbali na nyumba ya Bwana; Hao makuhani, wahudumu wa Bwana, wanaomboleza. "},
	{10, "10 Shamba limeharibika, nchi inaomboleza; maana nafaka imeharibika, divai mpya imekauka, mafuta yamepunguka. "},
	{11, "11 Tahayarini, enyi wakulima; Pigeni yowe, enyi watunzaji wa mizabibu; Kwa ajili ya ngano na shayiri, Maana mavuno ya mashamba yamepotea. "},
	{12, "12 Mzabibu umesinyaa, mtini nao umevia; Nao mkomamanga na mtende na mtofaa; Naam, miti yote ya mashamba imekauka; Maana furaha imekauka katika wanadamu. "},
	{13, "13 Jikazeni mkaomboleze, enyi makuhani; Pigeni yowe, enyi wahudumu wa madhabahu; Njoni mlale usiku kucha katika magunia, Enyi wahudumu wa Mungu wangu; Kwa kuwa sadaka ya unga na sadaka ya kinywaji Zimezuiwa katika nyumba ya Mungu wenu. "},
	{14, "14 Takaseni saumu, iteni kusanyiko la dini, Wazee na wakusanye wenyeji wote wa nchi; Waende nyumbani kwa Bwana, Mungu wenu, Na kumlilia Bwana, "},
	{15, "15 Ole wake siku hii! Kwa maana siku ya Bwana inakaribia, nayo itakuja kama uangamivu utokao kwake aliye Mwenyezi. "},
	{16, "16 Je! Chakula hakikukatiliwa mbali mbele ya macho yetu? Naam, furaha na kicheko mbali na nyumba ya Mungu wetu? "},
	{17, "17 Mbegu zinaoza chini ya udongo wake; ghala zimeachwa ukiwa; mabanda yamevunjika; kwa maana nafaka imekauka. "},
	{18, "18 Jinsi wanyama wanavyougua! Makundi ya ng'ombe yamefadhaika, kwa sababu hawana malisho; naam, makundi ya kondoo yamepata mateso. "},
	{19, "19 Ee Bwana, nakulilia wewe; Kwa maana moto umeyala malisho ya nyikani, Na miali ya moto imeteketeza miti yote ya mashamba. "},
	{20, "20 Naam, wanyama wa mashamba wanakutwetea wewe; Kwa maana vijito vya maji vimekauka, Na moto umeyateketeza malisho ya nyikani. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sw2 poems[] = {
	{1, "1 Pigeni tarumbeta katika Sayuni, Pigeni na kelele katika mlima wangu mtakatifu; Wenyeji wote wa nchi na watetemeke; Kwa maana siku ya Bwana inakuja. Kwa sababu inakaribia; "},
	{2, "2 siku ya giza na weusi, siku ya mawingu na giza kuu. Kama mapambazuko yakitandazwa juu ya milima, hao ni wakuu, tena wenye nguvu, mfano wao haukuwako kamwe, wala hautakuwako baada ya hao, hata katika miaka ya vizazi vingi. "},
	{3, "3 Moto unakula mbele yao; na nyuma yao miali ya moto inateketeza; hiyo nchi inafanana na bustani ya Adeni mbele yao, na nyuma yao imekuwa jangwa tupu; naam, hakuna aliyeokoka asipatikane nao. "},
	{4, "4 Kuonekana kwao ni kama kuonekana kwa farasi; na kama wapanda farasi ndivyo wanavyopiga mbio. "},
	{5, "5 Kama mshindo wa magari ya vita juu ya vilele vya milima, ndivyo warukavyo; kama mshindo wa miali ya moto ilapo mabua makavu, kama mashujaa waliopangwa tayari kwa vita. "},
	{6, "6 Mbele yao watu wanahangaika; nyuso zote zimegeuka kuwa nyeupe kwa hofu. "},
	{7, "7 Hupiga mbio kama mashujaa; huupanda ukuta kama watu wa vita; nao huendelea mbele kila mmoja katika njia zake, wala hawapotoshi safu zao. "},
	{8, "8 Wala hapana mmoja amsukumaye mwenzake; huendelea mbele kila mmoja katika njia yake; hujifanyizia njia kwa nguvu kati ya silaha, wala hawaachi kuifuata njia yao. "},
	{9, "9 Huurukia mji; hupiga mbio juu ya ukuta; hupanda na kuingia ndani ya nyumba; huingia madirishani kama aingiavyo mwivi. "},
	{10, "10 Nchi inatetemeka mbele yao; mbingu zinatetemeka; jua na mwezi hutiwa giza, na nyota huacha kuangaza; "},
	{11, "11 naye Bwana anatoa sauti yake mbele ya jeshi lake; maana matuo yake ni makubwa sana; kwa maana yeye ni hodari atekelezaye neno lake; kwa kuwa siku ya Bwana ni kuu, yenye kitisho sana; naye ni nani awezaye kuistahimili? "},
	{12, "12 Lakini hata sasa, asema Bwana, nirudieni mimi kwa mioyo yenu yote, na kwa kufunga, na kwa kulia, na kwa kuombolea; "},
	{13, "13 rarueni mioyo yenu, wala si mavazi yenu, mkamrudie Bwana, Mungu wenu; kwa maana yeye ndiye mwenye neema, amejaa huruma; si mwepesi wa hasira, ni mwingi wa rehema, naye hughairi mabaya. "},
	{14, "14 N'nani ajuaye kwamba hatarudi na kugeuka, na kutuachia baraka nyuma yake, naam, sadaka ya unga, na sadaka ya kinywaji, kwa Bwana, Mungu wenu? "},
	{15, "15 Pigeni tarumbeta katika Sayuni, Takaseni saumu, kusanyeni kusanyiko kuu; "},
	{16, "16 Kusanyeni watu, litakaseni kusanyiko, Kusanyeni wazee, kusanyeni watoto, Na hao wanyonyao maziwa; Bwana arusi na atoke chumbani mwake, Na bibi arusi katika hema yake. "},
	{17, "17 Hao makuhani, wahudumu wa Bwana, na walie Kati ya patakatifu na madhabahu, Na waseme, Uwaachilie watu wako, Ee Bwana, Wala usiutoe urithi wako upate aibu, Hata mataifa watawale juu yao; Kwani waseme kati ya watu, Yuko wapi Mungu wao? "},
	{18, "18 Hapo ndipo Bwana alipoona wivu kwa ajili ya nchi yake, akawahurumia watu wake. "},
	{19, "19 Bwana akajibu, akawaambia watu wake; Tazameni, nitawaletea nafaka, na divai, na mafuta, nanyi mtashiba kwa vitu hivyo; wala sitawafanya tena kuwa aibu kati ya mataifa; "},
	{20, "20 lakini jeshi lililotoka kaskazini nitaliondolea mbali nanyi, nami nitalifukuza mpaka nchi ya ukame na ukiwa; sehemu yake iliyo mbele itaingia katika bahari ya mashariki, na sehemu yake iliyo nyuma itaingia katika bahari ya magharibi; na uvundo wake utapanda juu, na harufu yake mbaya itapanda juu, kwa sababu ametenda mambo makubwa. "},
	{21, "21 Ee nchi, usiogope; furahi na kushangilia; kwa kuwa Bwana ametenda mambo makuu. "},
	{22, "22 Msiogope, enyi wanyama wa kondeni; maana malisho ya jangwani yanatoa miche, na huo mti unazaa matunda yake, mtini na mzabibu inatoa nguvu zake. "},
	{23, "23 Furahini, basi, enyi wana wa Sayuni, mkamfurahie Bwana, Mungu wenu; kwa kuwa yeye huwapa ninyi mvua ya masika, kwa kipimo cha haki, naye huwanyeshea mvua, mvua ya masika, na mvua ya vuli, kama kwanza. "},
	{24, "24 Na sakafu za kupepetea zitajaa ngano, na mashinikizo yatafurika kwa divai na mafuta. "},
	{25, "25 Nami nitawarudishia hiyo miaka iliyoliwa na nzige, na parare, na madumadu, na tunutu, jeshi langu kubwa nililotuma kati yenu. "},
	{26, "26 Nanyi mtakula chakula tele na kushiba, na kulihimidi jina la Bwana, Mungu wenu, aliyewatendea mambo ya ajabu; na watu wangu hawatatahayari kamwe. "},
	{27, "27 Nanyi mtajua ya kuwa mimi ni katikati ya Israeli, na ya kuwa mimi ndimi Bwana, Mungu wenu, wala hakuna mwingine; na watu wangu hawatatahayari kamwe. "},
	{28, "28 Hata itakuwa, baada ya hayo, ya kwamba nitamimina roho yangu juu ya wote wenye mwili; na wana wenu, waume kwa wake, watatabiri, wazee wenu wataota ndoto, na vijana wenu wataona maono; "},
	{29, "29 tena juu ya watumishi wenu, wanaume kwa wanawake, katika siku zile, nitamimina roho yangu. "},
	{30, "30 Nami nitaonyesha mambo ya ajabu katika mbingu na katika dunia, damu, na moto, na minara ya moshi. "},
	{31, "31 Jua litageuzwa kuwa giza, na mwezi kuwa damu, kabla haijaja hiyo siku ya Bwana iliyo kuu na itishayo. "},
	{32, "32 Na itakuwa ya kwamba mtu awaye yote atakayeliita jina la Bwana ataponywa; kwa kuwa katika mlima Sayuni na katika Yerusalemu watakuwako watu watakaookoka, kama Bwana alivyosema; na katika mabaki, hao awaitao Bwana. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sw3 poems[] = {
	{1, "1 Kwa maana, angalieni, siku zile, na wakati ule, nitakapowarudisha mateka wa Yuda na Yerusalemu, "},
	{2, "2 nitakusanya mataifa yote, nami nitawaleta chini katika bonde la Yehoshafau, na huko nitawahukumu kwa ajili ya watu wangu, na kwa ajili ya urithi wangu, Israeli, ambao wamewatawanya kati ya mataifa, na kuigawanya nchi yangu. "},
	{3, "3 Nao wamewapigia kura watu wangu; na mtoto mwanamume wamemtoa ili kupata kahaba, na mtoto mwanamke wamemwuza ili kupata divai, wapate kunywa. "},
	{4, "4 Naam, na ninyi ni kitu gani kwangu, enyi Tiro, na Sidoni, na nchi zote za Filisti? Je! Mtanirudishia malipo? Au mtanitenda neno lo lote? Upesi na kwa haraka nitawarudishia malipo yenu juu ya vichwa vyenu wenyewe. "},
	{5, "5 Kwa kuwa mmetwaa fedha yangu na dhahabu yangu, nanyi mmevichukua vitu vyangu vyema vipendezavyo, na kuviingiza katika hekalu zenu; "},
	{6, "6 tena watoto wa Yuda na watoto wa Yerusalemu mmewauzia Wayunani, mpate kuwahamisha mbali na mipaka yao; "},
	{7, "7 tazameni, nitawaamsha wapatoke mahali mlipowauza, nami nitawarudishia malipo yenu juu ya vichwa vyenu wenyewe. "},
	{8, "8 Na mimi nitawauza wana wenu na binti zenu, na kuwatia katika mikono ya wana wa Yuda, nao watawauzia watu wa Sheba, taifa lililo mbali kabisa; kwa maana Bwana ndiye aliyesema neno hili. "},
	{9, "9 Tangazeni haya kati ya mataifa; takaseni vita; waamsheni mashujaa; watu wa vita na wakaribie; na wapande juu. "},
	{10, "10 Yafueni majembe yenu yawe panga, na miundu yenu iwe mikuki; aliye dhaifu na aseme, Mimi ni hodari. "},
	{11, "11 Fanyeni haraka, mje, enyi mataifa yote, wa pande zote, jikusanyeni pamoja; na huko watelemshe mashujaa wako wote, Ee Bwana. "},
	{12, "12 Mataifa na wajihimize, wakapande juu katika bonde la Yehoshafau; maana huko ndiko nitakakoketi niwahukumu mataifa yote yaliyo pande zote. "},
	{13, "13 Haya! Utieni mundu, maana mavuno yameiva; njoni, kanyageni; kwa maana shinikizo limejaa, mapipa nayo yanafurika; kwani uovu wao ni mwingi sana. "},
	{14, "14 Makutano makubwa, makutano makubwa, wamo katika bonde la kukata maneno! Kwa maana siku ya Bwana i karibu, katika bonde la kukata maneno. "},
	{15, "15 Jua na mwezi vimetiwa giza, na nyota zimeacha kuangaza. "},
	{16, "16 Naye Bwana atanguruma toka Sayuni, atatoa sauti yake toka Yerusalemu; na mbingu na nchi zitatetemeka; lakini Bwana atakuwa kimbilio la watu wake, na ngome ya wana wa Israeli. "},
	{17, "17 Hivyo ndivyo mtakavyojua ya kuwa mimi ndimi Bwana, Mungu wenu, nikaaye Sayuni, mlima wangu mtakatifu; ndipo Yerusalemu utakapokuwa mtakatifu, wala wageni hawatapita tena ndani yake kamwe. "},
	{18, "18 Tena itakuwa siku ile, ya kwamba milima itadondoza divai tamu, na vilima vitatiririka maziwa, na vijito vyote vya Yuda vitatoa maji tele; na chemchemi itatokea katika nyumba ya Bwana, na kulinywesha bonde la Shitimu. "},
	{19, "19 Misri itakuwa ukiwa, na Edomu itakuwa jangwa tupu, kwa sababu ya dhuluma waliowatenda wana wa Yuda; kwa sababu wamemwaga damu isiyo na hatia katika nchi yao. "},
	{20, "20 Bali Yuda atadumu milele, na Yerusalemu tangu kizazi hata kizazi. "},
	{21, "21 Nami nitaitakasa damu yao ambayo sijaitakasa; kwa maana Bwana ndiye akaaye Sayuni. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};