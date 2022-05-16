#include <map>
#include <string>
class Bible30
{
	struct sw1	{ int val; const char *msg; };
	struct sw2	{ int val; const char *msg; };
	struct sw3	{ int val; const char *msg; };
	struct sw4	{ int val; const char *msg; };
	struct sw5	{ int val; const char *msg; };
	struct sw6	{ int val; const char *msg; };
	struct sw7	{ int val; const char *msg; };
	struct sw8	{ int val; const char *msg; };
	struct sw9	{ int val; const char *msg; };
public:
static void view1() {
struct sw1 poems[] = {
	{1, "1 Maneno ya Amosii, aliyekuwa mmoja wa wachungaji wa Tekoa; maono aliyoyaona katika habari za Israeli, siku za Uzia, mfalme wa Yuda, na siku za Yeroboamu, mwana wa Yoashi, mfalme wa Israeli, miaka miwili kabla ya tetemeko la nchi. "},
	{2, "2 Naye alisema, Bwana atanguruma toka Sayuni, Atatoa sauti yake toka Yerusalemu; Na malisho ya wachungaji yataomboleza, Na kilele cha Karmeli kitanyauka. "},
	{3, "3 Haya ndiyo asemayo Bwana; Kwa makosa matatu ya Dameski, naam, kwa manne, sitaizuia adhabu yake isimpate; kwa sababu wameipura Gileadi kwa vyombo vya kupuria vya chuma; "},
	{4, "4 lakini nitapeleka moto uingie katika nyumba ya Hazaeli, nao utayateketeza majumba ya Ben-hadadi. "},
	{5, "5 Nami nitalivunja komeo la Dameski, na kuwakatilia mbali wenyeji wa bondeni mwa Aveni, na yeye aishikaye fimbo ya enzi katika Beth-Adini; na watu wa Shamu watakwenda hali ya kufungwa hata Kiri, asema Bwana. "},
	{6, "6 Haya ndiyo asemayo Bwana; Kwa makosa matatu ya Gaza, naam, kwa manne, sitaizuia adhabu yake isimpate; kwa sababu waliichukua katika hali ya kufungwa kabila nzima, wawatie katika mikono ya Edomu; "},
	{7, "7 lakini nitapeleka moto juu ya ukuta wa Gaza, nao utayateketeza majumba yake. "},
	{8, "8 Nami nitamkatilia mbali mwenyeji katika Ashdodi; na yeye aishikaye fimbo ya enzi katika Ashkeloni; nami nitaugeuza mkono wangu uwe juu ya Ekroni; na mabaki ya Wafilisti wataangamia, asema Bwana MUNGU. "},
	{9, "9 Haya ndiyo asemayo Bwana; Kwa makosa matatu ya Tiro, naam, kwa manne, sitaizuia adhabu yake isimpate; kwa sababu wameitia kabila nzima katika mikono ya Edomu, wala hawakulikumbuka agano la udugu; "},
	{10, "10 lakini nitapeleka moto juu ya ukuta wa Tiro, nao utayateketeza majumba yake. "},
	{11, "11 Haya ndiyo asemayo Bwana; Kwa makosa matatu ya Edomu, naam, kwa manne, sitaizuia adhabu yake isimpate; kwa sababu alimfuatia ndugu yake kwa upanga, akatupilia mbali huruma zake zote; hasira yake ikararua-rarua daima, akaishika ghadhabu yake milele; "},
	{12, "12 lakini nitapeleka moto juu ya Temani, nao utayateketeza majumba ya Bosra. "},
	{13, "13 Haya ndiyo asemayo Bwana; Kwa makosa matatu ya wana wa Amoni, naam, kwa manne, sitaizuia adhabu yake isimpate; kwa sababu wamewapasua wanawake wa Gileadi wenye mimba, ili wapate kuongeza mipaka yao; "},
	{14, "14 lakini nitawasha moto katika ukuta wa Raba, nao utayateketeza majumba yake; pamoja na kupiga kelele siku ya vita, pamoja na tufani katika siku ya chamchela; "},
	{15, "15 na mfalme wao atakwenda utumwani, yeye na wakuu wake wote pamoja, asema Bwana. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sw2 poems[] = {
	{1, "1 Haya ndiyo asemayo Bwana; Kwa makosa matatu ya Moabu, naam, kwa manne, sitaizuia adhabu yake isimpate; kwa sababu aliichoma moto mifupa ya mfalme wa Edomu hata ikawa chokaa; "},
	{2, "2 lakini nitapeleka moto juu ya Moabu, nao utayateketeza majumba ya Keriothi; na Moabu atakufa pamoja na mshindo, na kelele, na sauti ya tarumbeta; "},
	{3, "3 nami nitamkatilia mbali mwamuzi atoke kati yake, nami nitawaua wakuu wake pamoja naye, asema Bwana. "},
	{4, "4 Haya ndiyo asemayo Bwana; Kwa makosa matatu ya Yuda, naam, kwa manne, sitaizuia adhabu yake isimpate; kwa sababu wameikataa sheria ya Bwana; wala hawakuzishika amri zake; na maneno yao ya uongo yamewakosesha, ambayo baba zao waliyafuata; "},
	{5, "5 lakini nitapeleka moto juu ya Yuda, nao utayateketeza majumba ya Yerusalemu. "},
	{6, "6 Haya ndiyo asemayo Bwana; Kwa makosa matatu ya Israeli, naam, kwa manne, sitaizuia adhabu yake isimpate; kwa sababu wamewauza wenye haki kwa fedha, na maskini kwa jozi ya viatu; "},
	{7, "7 nao hutwetea mavumbi yaliyo juu ya vichwa vya maskini, na kuipotosha njia ya mwenye upole; na mtu na baba yake humwendea mwanamke mmoja, hata kulitia unajisi jina langu takatifu; "},
	{8, "8 nao hujilaza karibu na kila madhabahu juu ya nguo zilizowekwa rehani, na katika nyumba ya Mungu wao hunywa divai ya watu waliotozwa fedha. "},
	{9, "9 Lakini nalimwangamiza Mwamori mbele yao, ambaye urefu wake ulikuwa kama urefu wa mierezi, tena alikuwa na nguvu kama mialoni; lakini naliyaangamiza matunda yake toka juu, na mizizi yake toka chini. "},
	{10, "10 Pia naliwapandisha ninyi kutoka nchi ya Misri, nikawaongoza muda wa miaka arobaini jangwani, ili mpate kuimiliki nchi ya Mwamori. "},
	{11, "11 Nami nikawainua watu miongoni mwa wana wenu wawe manabii, na katika vijana wenu wawe Wanadhiri; je! Sivyo hivyo, enyi wana wa Israeli? Asema Bwana. "},
	{12, "12 Lakini mliwapa Wanadhiri mvinyo wanywe; mkawaamuru manabii, mkisema, Msifanye unabii. "},
	{13, "13 Tazameni, nitawalemea ninyi, Kama gari lilemeavyo lililojaa miganda. "},
	{14, "14 Naye apigaye mbio atapotewa na kimbilio; Wala aliye hodari hataongeza nguvu zake; Wala shujaa hatajiokoa nafsi yake; "},
	{15, "15 Wala apindaye upinde hatasimama; Wala aliye mwepesi wa miguu hataokoka; Wala apandaye farasi hatajiokoa nafsi yake; "},
	{16, "16 Naye mwenye moyo mkuu miongoni mwa mashujaa Atakimbia uchi siku ile, asema Bwana. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sw3 poems[] = {
	{1, "1 Lisikieni neno hili alilolisema Bwana juu yenu, enyi wana wa Israeli, juu ya jamaa yote niliowapandisha kutoka nchi ya Misri, nikisema, "},
	{2, "2 Ni ninyi tu niliowajua katika jamaa zote zilizo duniani; kwa sababu hiyo nitawapatiliza ninyi maovu yenu yote. "},
	{3, "3 Je! Watu wawili waweza kutembea pamoja, wasipokuwa wamepatana? "},
	{4, "4 Je! Simba atanguruma mwituni, asipokuwa na mawindo? Mwana-simba atalia pangoni mwake, ikiwa hakupata kitu? "},
	{5, "5 Je! Ndege ataanguka mtegoni juu ya nchi, mahali asipotegewa tanzi? Mtego utafyatuka juu ya nchi, bila kunasa kitu cho chote? "},
	{6, "6 Je! Tarumbeta itapigwa mjini, watu wasiogope? Mji utapatikana na hali mbaya, asiyoileta Bwana? "},
	{7, "7 Hakika Bwana MUNGU hatafanya neno lo lote, bila kuwafunulia watumishi wake manabii siri yake. "},
	{8, "8 Simba amekwisha kunguruma, ni nani asiyeogopa? Bwana MUNGU amenena, ni nani awezaye neno ila kutabiri? "},
	{9, "9 Tangazeni habari katika majumba ya Ashdodi, na katika majumba ya nchi ya Misri, mkaseme, Kusanyikeni juu ya milima ya Samaria, katazameni, ni mishindo mikubwa kama nini iliyomo humo, na udhalimu mwingi kama nini uliomo ndani yake. "},
	{10, "10 Kwa maana hawajui kutenda haki, asema Bwana, hao wawekao akiba ya jeuri na unyang'anyi katika majumba yao. "},
	{11, "11 Basi, haya ndiyo asemayo Bwana MUNGU; Atakuwako adui, kuizunguka nchi pande zote; naye atazishusha chini nguvu zako zikutoke; na majumba yako yatatekwa nyara. "},
	{12, "12 Haya ndiyo asemayo Bwana; Kama vile mchungaji apokonyavyo kinywani mwa simba miguu miwili, au kipande cha sikio; ndivyo watakavyopokonywa wana wa Israeli, wakaao Samaria katika pembe ya semadari, na juu ya mito ya hariri ya kitanda. "},
	{13, "13 Sikieni, mkashuhudu juu ya nyumba ya Yakobo, asema Bwana, MUNGU wa majeshi. "},
	{14, "14 Kwani katika siku ile nitakapompatiliza Israeli makosa yake, nitazipatiliza pia madhabahu za Betheli, na pembe za madhabahu zitakatiliwa mbali, na kuanguka chini. "},
	{15, "15 Nami nitaipiga nyumba ya wakati wa baridi pamoja na nyumba ya wakati wa hari; na hizo nyumba za pembe zitaangamia, nazo nyumba kubwa zitakuwa na mwisho, asema Bwana. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sw4 poems[] = {
	{1, "1 Lisikieni neno hili, enyi ng'ombe wa Bashani, mnaokaa juu ya mlima wa Samaria, mnaowaonea maskini, na kuwaponda wahitaji; mnaowaambia bwana zao, Haya! Leteni, tunywe. "},
	{2, "2 Bwana MUNGU ameapa kwa utakatifu wake, ya kuwa, tazama, siku zitawajilia, watakapowaondoa ninyi kwa kulabu, na mabaki yenu kwa ndoana. "},
	{3, "3 Nanyi mtatoka kwenye mahali palipobomolewa, kila mwanamke moja kwa moja mbele yake; nanyi mtajitupa katika Harmoni, asema Bwana. "},
	{4, "4 Njoni Betheli, mkakose; njoni Gilgali, mkaongeze makosa; kaleteni dhabihu zenu kila asubuhi, na zaka zenu kila siku ya tatu; "},
	{5, "5 mkachome sadaka ya shukrani, ya kitu kilichotiwa chachu; mkatangaze sadaka mtoazo kwa hiari na kuzihubiri habari zake; kwa maana ndivyo viwapendezavyo ninyi, enyi wana wa Israeli, asema Bwana MUNGU. "},
	{6, "6 Mimi nami nimewapa usafi wa meno katika miji yenu yote, na kutindikiwa na mkate mahali penu pote; lakini hamkunirudia mimi, asema Bwana. "},
	{7, "7 Tena nimeizuia mvua msiipate, ilipobaki miezi mitatu kabla ya mavuno; nami nimenyesha mvua juu ya mji mmoja, nikaizuia mvua isinyeshe juu ya mji mwingine; sehemu moja ilipata mvua, na sehemu isiyopata mvua ilikatika. "},
	{8, "8 Basi kutoka miji miwili mitatu walitanga-tanga kuendea mji mwingine wapate kunywa maji, wasipate ya kuwatosha; lakini hamkunirudia mimi, asema Bwana. "},
	{9, "9 Nami nimewapiga kwa ukavu na koga; wingi wa bustani zenu na mashamba yenu ya mizabibu, na mitini yenu na mizeituni yenu imeliwa na tunutu; Lakini hamkunirudia mimi, asema Bwana. "},
	{10, "10 Nimewapelekea tauni, kama tauni ya Misri; vijana wenu nimewaua kwa upanga, na farasi wenu nimewachukulia mbali; nami nimeupandisha uvundo wa matuo yenu na kuuingiza katika mianzi ya pua zenu; lakini hamkunirudia mimi, asema Bwana. "},
	{11, "11 Baadhi yenu nimewaangamiza, kama hapo Mungu alipoiangamiza Sodoma na Gomora, nanyi mkawa kama kinga kilichonyakuliwa motoni; lakini hamkunirudia mimi, asema Bwana. "},
	{12, "12 Basi nitakutenda hivi, Ee Israeli, na kwa sababu nitakutenda hivi, ujiweke tayari kuonana na Mungu wako, Ee Israeli. "},
	{13, "13 Kwa maana, angalia, yeye aifanyizaye milima, na kuuumba upepo, na kumwambia mwanadamu mawazo yake, afanyaye asubuhi kuwa giza, na kupakanyaga mahali pa dunia palipoinuka; Bwana, Mungu wa majeshi, ndilo jina lake. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct sw5 poems[] = {
	{1, "1 Lisikieni neno hili nilitamkalo liwe maombolezo juu yenu, enyi nyumba ya Israeli. "},
	{2, "2 Bikira wa Israeli ameanguka; hatainuka tena; Ameangushwa katika nchi yake; hakuna mtu wa kumwinua. "},
	{3, "3 Kwa kuwa Bwana MUNGU asema hivi; Mji uliotoka nje wenye watu elfu, utasaziwa watu mia, na mji uliotoka wenye watu mia, utasaziwa watu kumi, kwa nyumba ya Israeli. "},
	{4, "4 Maana Bwana awaambia hivi nyumba ya Israeli, Nitafuteni mimi, nanyi mtaishi; "},
	{5, "5 bali msitafute Betheli, wala msiingie Gilgali, wala msipite kwenda Beer-sheba; kwani Gilgali hakika yake itakwenda utumwani, na Betheli itakuwa ubatili. "},
	{6, "6 Mtafuteni Bwana, nanyi mtaishi; asije akawaka kama moto katika nyumba ya Yusufu, nao ukateketeza, asiwepo mtu awezaye kuuzima katika Betheli. "},
	{7, "7 Ninyi mnaogeuza hukumu kuwa uchungu, na kuiangusha haki chini, "},
	{8, "8 mtafuteni yeye afanyaye Kilimia na Orioni, na kukigeuza kivuli cha mauti kuwa asubuhi, na kuufanya mchana kuwa giza kwa usiku; yeye ayaitaye maji ya bahari, na kuyamwaga juu ya uso wa nchi; Bwana, ndilo jina lake; "},
	{9, "9 yeye aletaye uharibifu wa ghafula juu yao walio hodari, hata uharibifu uipate ngome. "},
	{10, "10 Wao humchukia yeye akemeaye langoni, nao humzira anenaye maneno ya adili. "},
	{11, "11 Basi, kwa kuwa mnamkanyaga maskini, na kumtoza ngano; ninyi mmejenga nyumba za mawe yaliyochongwa, lakini hamtakaa ndani yake; ninyi mmepanda mashamba mazuri ya mizabibu, lakini hamtakunywa divai yake. "},
	{12, "12 Maana mimi najua jinsi maasi yenu yalivyo mengi, na jinsi dhambi zenu zilivyo kubwa; ninyi mnaowaonea wenye haki, mnaopokea rushwa, na kuwageuza wahitaji langoni wasipate haki yao. "},
	{13, "13 Kwa ajili ya hayo mwenye busara atanyamaza kimya wakati kama huo; kwa kuwa ni wakati mbaya. "},
	{14, "14 Tafuteni mema, wala si mabaya, mpate kuishi; hivyo Bwana, Mungu wa majeshi, atakuwa pamoja nanyi, kama msemavyo. "},
	{15, "15 Yachukieni mabaya; yapendeni mema; mkaithibitishe haki langoni; yamkini kwamba Bwana, Mungu wa majeshi, atawafanyia fadhili mabaki ya Yusufu. "},
	{16, "16 Kwa ajili ya hayo, asema Bwana, Mungu wa majeshi, aliye Bwana; Kutakuwako maombolezo katika njia kuu zote; nao watasema katika njia zote, Ole! Ole! Nao watamwita mkulima aje kuombolea, na hao walio hodari wa kulia waje kuomboleza. "},
	{17, "17 Tena katika mashamba yote ya mizabibu kutakuwako kulia; kwa maana mimi nitapita katikati yako, asema Bwana. "},
	{18, "18 Ole wenu! Ninyi mnaoitamani siku ya Bwana; kwani kuitamani siku ya Bwana? Ni giza, wala si nuru. "},
	{19, "19 Ni kama mtu aliyemkimbia simba, akakutana na dubu; au aliingia katika nyumba akauegemeza mkono wake ukutani, nyoka akamwuma. "},
	{20, "20 Je! Siku ya Bwana haitakuwa giza, wala si nuru? Naam, yenye giza sana, wala haina mwanga. "},
	{21, "21 Mimi nazichukia sikukuu zenu, nazidharau, nami sitapendezwa na makutano yenu ya dini. "},
	{22, "22 Naam, ijapokuwa mnanitolea sadaka zenu za kuteketezwa na sadaka zenu za unga, sitazikubali; wala sitaziangalia sadaka zenu za amani, na za wanyama walionona. "},
	{23, "23 Niondoleeni kelele za nyimbo zenu; kwa maana sitaki kuzisikia sauti za vinanda vyenu. "},
	{24, "24 Lakini hukumu na itelemke kama maji, na haki kama maji makuu. "},
	{25, "25 Je! Mliniletea dhabihu na sadaka jangwani muda wa miaka arobaini, enyi nyumba ya Israeli? "},
	{26, "26 Naam, mtamchukua Sikuthi, mfalme wenu, na Kiuni, sanamu zenu, nyota ya mungu wenu, mliojifanyizia wenyewe. "},
	{27, "27 Kwa sababu hiyo nitawahamisha, hali ya kufungwa, mwende mbali kupita Dameski, asema Bwana, ambaye jina lake ni Mungu wa majeshi. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct sw6 poems[] = {
	{1, "1 Ole wao wanaostarehe katika Sayuni, na hao wanaokaa salama katika mlima wa Samaria, watu mashuhuri wa taifa lililo la kwanza, ambao nyumba ya Israeli huwaendea. "},
	{2, "2 Piteni hata Kalne, mkaone; tena tokea huko enendeni hata Hamathi iliyo kuu; kisha shukeni hata Gathi ya Wafilisti; je! Ninyi ni bora kuliko falme hizi? Au mpaka wao ni mkubwa kuliko mpaka wenu? "},
	{3, "3 Ninyi mnaoiweka mbali siku hiyo mbaya, na kulileta karibu kao la udhalimu; "},
	{4, "4 ninyi mnaolala juu ya vitanda vya pembe, na kujinyosha juu ya masemadari yenu; ninyi mnaokula wana-kondoo wa kundi, na ndama waliomo zizini; "},
	{5, "5 ninyi mnaoimba nyimbo za upuzi pamoja na sauti ya vinanda, na kujifanyizia vinanda vya namna nyingi, kama vile Daudi; "},
	{6, "6 ninyi mnaokunywa divai katika mabakuli, na kujipaka marhamu iliyo nzuri; lakini hawahuzuniki kwa sababu ya mateso ya Yusufu. "},
	{7, "7 Basi kwa ajili ya hayo sasa watakwenda utumwani pamoja na wa kwanza watakaokwenda utumwani, na kelele za machezo za hao waliojinyosha zitakoma. "},
	{8, "8 Bwana MUNGU ameapa kwa nafsi yake, asema Bwana, Mungu wa majeshi; Naizira fahari ya Yakobo, nachukizwa na majumba yake; kwa sababu hiyo nitautoa huo mji, pamoja na wote waliomo ndani yake. "},
	{9, "9 Hata itakuwa, wakisalia wanaume kumi katika nyumba moja, watakufa. "},
	{10, "10 Na mjomba wa mtu atakapomwinua, yaani, yeye amchomaye moto, ili atoe mifupa yake nyumbani, naye atakapomwambia yeye aliye katika pande za ndani za nyumba, Je! Yuko mtu ye yote pamoja nawe? Naye atakaposema, La, hapana; ndipo atasema, Nyamaza kimya; maana hatuna ruhusa kulitaja jina la Bwana. "},
	{11, "11 Kwa maana, angalia, Bwana atoa amri, na nyumba kubwa itapigwa na kuwa na mahali palipobomolewa, na nyumba ndogo nayo itapigwa iwe na nyufa. "},
	{12, "12 Je! Farasi watapiga mbio juu ya mwamba? Je! Mtu atalima na ng'ombe huko? Hata mmegeuza hukumu kuwa uchungu, na matunda ya haki kuwa pakanga; "},
	{13, "13 ninyi mnaolifurahia jambo lisilo na maana, msemao, Je! Hatukujipatia pembe kwa nguvu zetu wenyewe? "},
	{14, "14 Maana, angalia, nitaondokesha taifa juu yenu, enyi nyumba ya Israeli, asema Bwana, Mungu wa majeshi, nao watawatesa ninyi toka mahali pa kuingilia katika Hamathi hata kijito cha Araba. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct sw7 poems[] = {
	{1, "1 Haya ndiyo aliyonionyesha Bwana MUNGU; tazama, aliumba nzige mwanzo wa kuchipuka kwake mimea wakati wa vuli; na tazama, ilikuwa mimea ya wakati wa vuli baada ya mavuno ya mfalme. "},
	{2, "2 Ikawa, nzige walipokwisha kula majani ya nchi, ndipo nikasema, Ee Bwana MUNGU, samehe, nakusihi; Yakobo atasimamaje? Kwa maana ni mdogo. "},
	{3, "3 Bwana akaghairi katika jambo hili. Jambo hili halitakuwa, asema Bwana. "},
	{4, "4 Haya ndiyo aliyonionyesha Bwana MUNGU; tazama, Bwana MUNGU aliita ili kushindana kwa moto; nao ukavila vilindi vikuu, ukataka kuiteketeza nchi kavu. "},
	{5, "5 Ndipo nikasema, Ee Bwana MUNGU, acha, nakusihi; Yakobo atasimamaje? Kwa maana ni mdogo. "},
	{6, "6 Bwana akaghairi katika jambo hili pia. Jambo hili halitakuwa, asema Bwana MUNGU. "},
	{7, "7 Haya ndiyo aliyonionyesha; na tazama, Bwana alisimama karibu na ukuta uliojengwa kwa timazi, mwenye timazi mkononi mwake. "},
	{8, "8 Bwana akaniambia, Amosii, unaona nini? Nikasema, Naona timazi. Ndipo Bwana akasema, Tazama, nitaweka timazi kati ya watu wangu Israeli; sitawapita tena kamwe; "},
	{9, "9 na mahali palipoinuka pa Isaka patakuwa ukiwa, na mahali patakatifu pa Israeli pataharibika; nami nitaondoka nishindane na nyumba ya Yeroboamu kwa upanga. "},
	{10, "10 Ndipo Amazia, kuhani wa Betheli, akapeleka habari kwa Yeroboamu, mfalme wa Israeli, akisema, Amosii amefanya fitina juu yako kati ya nyumba ya Israeli; nchi haiwezi kustahimili maneno yake yote. "},
	{11, "11 Kwa maana Amosii asema hivi, Yeroboamu atakufa kwa upanga, na bila shaka Israeli atachukuliwa mbali, hali ya kufungwa, atoke katika nchi yake. "},
	{12, "12 Tena Amazia akamwambia Amosii, Ewe mwonaji, nenda zako, ikimbilie nchi ya Yuda, ukale mkate huko, ukatabiri huko; "},
	{13, "13 lakini usitabiri tena huku Betheli; kwa maana ni mahali patakatifu pa mfalme, nayo ni nyumba ya kifalme. "},
	{14, "14 Ndipo Amosii akajibu akamwambia Amazia, Mimi sikuwa nabii, wala sikuwa mwana wa nabii; bali nalikuwa mchungaji, na mtunza mikuyu; "},
	{15, "15 naye Bwana akanitwaa, katika kufuatana na kundi; Bwana akaniambia, Enenda uwatabirie watu wangu Israeli. "},
	{16, "16 Basi, sasa lisikie neno la Bwana; Wewe unasema, Usitabiri juu ya Israeli, wala usitoe neno lako juu ya nyumba ya Isaka; "},
	{17, "17 kwa hiyo, Bwana asema hivi, Mke wako atakuwa kahaba mjini, na wana wako na binti zako wataanguka kwa upanga, na shamba lako litagawanywa kwa kamba; na wewe mwenyewe utakufa katika nchi iliyo najisi; na bila shaka Israeli atachukuliwa mbali hali ya kufungwa kutoka nchi yake. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct sw8 poems[] = {
	{1, "1 Haya ndiyo aliyonionyesha Bwana MUNGU; tazama, kikapu cha matunda ya wakati wa hari. "},
	{2, "2 Akaniambia, Amosii, unaona nini? Nikasema, Naona kikapu cha matunda ya wakati wa hari. Ndipo Bwana akaniambia, Mwisho wao umewajilia watu wangu Israeli; sitawapita tena kamwe. "},
	{3, "3 Tena nyimbo za hekaluni zitakuwa vilio siku ile, asema Bwana MUNGU; mizoga itakuwa mingi; kila mahali wataitupa, wakinyamaza kimya. "},
	{4, "4 Lisikieni hili, ninyi mnaopenda kuwameza wahitaji, na kuwakomesha maskini wa nchi, "},
	{5, "5 mkisema, Mwezi mpya utaondoka lini, tupate kuuza nafaka? Na sabato nayo, tupate kuandika ngano? Mkiipunguza efa na kuiongeza shekeli, mkidanganya watu kwa mizani ya udanganyifu; "},
	{6, "6 tupate kuwanunua maskini kwa fedha, na wahitaji kwa jozi ya viatu; na kuziuza takataka za ngano. "},
	{7, "7 Bwana ameapa kwa fahari ya Yakobo, Hakika sitazisahau kamwe kazi zao hata mojawapo. "},
	{8, "8 Kwa ajili ya hayo, je! Haitatetemeka nchi, na kuomboleza kila mtu akaaye ndani yake? Naam, itainuka yote pia kama huo Mto; nayo itataabika na kupwa tena kama Mto wa Misri. "},
	{9, "9 Tena itakuwa siku hiyo, asema Bwana MUNGU, nitalifanya jua litue wakati wa adhuhuri, nami nitaitia nchi giza wakati wa nuru ya mchana. "},
	{10, "10 Nami nitazigeuza sikukuu zenu kuwa maombolezo, na nyimbo zenu zote kuwa vilio; nami nitatia nguo za magunia katika viuno vyote, na upaa katika kila kichwa; nami nitayafanya haya kuwa kama maombolezo kwa ajili ya mwana wa pekee, na mwisho wake kama siku ya uchungu. "},
	{11, "11 Angalia, siku zinakuja, asema Bwana MUNGU, ambazo nitaleta njaa katika nchi; si njaa ya kukosa chakula, wala kiu ya kukosa maji, bali ya kukosa kuyasikia maneno ya Bwana. "},
	{12, "12 Nao watatanga-tanga toka bahari hata bahari; na toka upande wa kaskazi hata upande wa mashariki; watapiga mbio, wakienda huko na huko, kulitafuta neno la Bwana, wasilione. "},
	{13, "13 Siku hiyo wanawali wazuri na wavulana watazimia kwa kiu. "},
	{14, "14 Na hao waapao kwa dhambi ya Samaria, na kusema, Kama aishivyo Mungu wako, Ee Dani, na, Kama iishivyo njia ya Beer-sheba, hao nao wataanguka, wasiinuke tena. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view9() {
struct sw9 poems[] = {
	{1, "1 Nalimwona Bwana akisimama karibu na madhabahu; akasema, vipigo vichwa vya nguzo, hata vizingiti vitikisike; vivunje vipande vipande juu ya kichwa cha kila mmoja wao; nami nitamwua mtu wa mwisho wao kwa upanga; hapana hata mmoja wao atakayekimbia, wala hataokoka hata mmoja wao. "},
	{2, "2 Wajapochimba waingie katika kuzimu, mkono wangu utawatoa huko; nao wajapopanda hata mbinguni, nitawatelemsha toka huko. "},
	{3, "3 Nao wajapojificha katika kilele cha Karmeli, nitawatafuta na kuwatoa toka huko; na wajapositirika katika vilindi vya bahari nisiwaone, nitamwagiza joka huko, naye atawauma. "},
	{4, "4 Nao wajapokwenda hali ya kufungwa mbele ya adui zao, nitauagiza upanga huko, nao utawaua; nami nitawaelekezea macho yangu niwatende mabaya, wala si mema. "},
	{5, "5 Kwa maana Bwana, MUNGU wa majeshi, ndiye aigusaye nchi, nayo ikayeyuka, na wote wakaao ndani yake wataomboleza; nayo itainuka yote pia kama Mto, nayo itakupwa tena kama Mto wa Misri. "},
	{6, "6 Yeye ndiye avijengaye vyumba vyake mbinguni, na kuweka misingi ya kuba yake juu ya nchi; yeye ndiye ayaitaye maji ya bahari, na kuyamwaga juu ya uso wa nchi; Bwana ndilo jina lake. "},
	{7, "7 Je! Ninyi si kama wana wa Wakushi kwangu mimi, enyi wana wa Israeli, asema Bwana? Je! Mimi sikuwapandisha Israeli toka nchi ya Misri, na Wafilisti toka Kaftori, na Washami toka Kiri? "},
	{8, "8 Angalieni, macho ya Bwana MUNGU yanauangalia ufalme wenye dhambi, nami nitauangamiza utoke juu ya uso wa dunia; lakini sitaiangamiza kabisa nyumba ya Yakobo, asema Bwana. "},
	{9, "9 Kwa maana, angalieni, nitatoa amri, nami nitaipepeta nyumba ya Israeli katika mataifa yote, kama vile ngano ipepetwavyo katika ungo lakini hata chembe moja iliyo ndogo haitaanguka chini. "},
	{10, "10 Wenye dhambi wote katika watu wangu watakufa kwa upanga, hao wasemao, Mabaya hayatatupata nyuma wala mbele. "},
	{11, "11 Siku hiyo nitaiinua tena maskani ya Daudi iliyoanguka, na kuziba mahali palipobomoka; nami nitayainua magofu yake, na kuyajenga kama siku za kale; "},
	{12, "12 wapate kuyamiliki mabaki ya Edomu, na mataifa yote yaitwayo kwa jina langu, asema Bwana, afanyaye hayo. "},
	{13, "13 Angalieni, siku zinakuja, asema Bwana, ambazo huyo alimaye atamfikilia avunaye, na yeye akanyagaye zabibu atamfikilia apandaye mbegu; nayo milima itadondoza divai tamu, na vilima vyote vitayeyuka. "},
	{14, "14 Nami nitawarejeza tena watu wangu Israeli waliohamishwa, nao wataijenga miji iliyoachwa maganjo, na kukaa ndani yake; nao watapanda mizabibu katika mashamba, na kunywa divai yake; nao watafanyiza bustani, na kula matunda yake. "},
	{15, "15 Nami nitawapanda katika nchi yao, wala hawatang'olewa tena watoke katika nchi yao niliyowapa, asema Bwana, Mungu wako. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};