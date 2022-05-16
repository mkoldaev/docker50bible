#include <map>
#include <string>
class Bible62
{
	struct sq1	{ int val; const char *msg; };
	struct sq2	{ int val; const char *msg; };
	struct sq3	{ int val; const char *msg; };
	struct sq4	{ int val; const char *msg; };
	struct sq5	{ int val; const char *msg; };
public:
static void view1() {
struct sq1 poems[] = {
	{1, "1 Atë që pamë dhe dëgjuam, ne po jua shpallim, që edhe ju të keni bashkësi me ne; dhe bashkësia jonë është me Atin dhe me Birin e tij, Jezu Krishtin."},
	{2, "2 Dhe po ju shkruajmë këto gjëra që gëzimi juaj të jetë i plotë."},
	{3, "3 Dhe ky është mesazhi që dëgjuam nga ai dhe po jua shpallim juve: Perëndia është dritë dhe në Të nuk ka kurrfarë errësirë"},
	{4, "4 Po të themi se kemi bashkësi me Të, dhe ecim në errësirë, ne gënjejmë dhe nuk e vëmë në praktik të vërtetën;"},
	{5, "5 por, po të ecim në dritë, sikurse ai është në dritë, kemi bashkësi njeri me tjetrin, dhe gjaku i Jezu Krishtit, Birit të tij, na pastron nga çdo mëkat."},
	{6, "6 Po të themi se jemi pa mëkat, gënjej-më vetveten dhe e vërteta nuk është në ne."},
	{7, "7 Po t'i rrëfejmë mëkatet tona, ai është besnik dhe i drejtë që të na falë mëkatet dhe të na pastrojë nga çdo paudhësi."},
	{8, "8 Po të themi se s'kemi mëkatuar, e bëjmë atë gënjeshtar dhe fjala e tij nuk është në ne."},
	{9, "9 Djema të mi, ju shkruaj këto gjëra që të mos mëkatoni; dhe në qoftë se ndokush mëkatoi, kemi një avokat te Ati, Jezu Krishtin të drejtin."},
	{10, "10 Ai është shlyesi për mëkatet tona; dhe jo vetëm për tonat, por edhe për ata të të gjithë botës."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sq2 poems[] = {
	{1, "1 Dhe nga kjo e dimë se e kemi njohur atë, në qoftë se i zbatojmë urdhërimet e tij."},
	{2, "2 Ai që thotë: Unë e kam njohur atë, dhe nuk zbaton urdhërimet e tij, është gënjeshtar dhe e vërteta nuk është në të."},
	{3, "3 Por kush e zbaton fjalën e tij, në të me të vërtetë dashuria e Perëndisë është përsosur. Nga kjo e njohim se jemi në të."},
	{4, "4 Ai që thotë se qëndron në të, duhet të ecë edhe vetë sikurse ka ecur ai."},
	{5, "5 Vëllezër, nuk ju shkruaj një urdhërim të ri, por një urdhërim të vjetër, që e kishit nga fillimi: urdhërimi i vjetër është fjala që dëgjuat nga fillimi."},
	{6, "6 E megjithatë po ju shkruaj një urdhërim të ri, që është i vërtetë në të dhe në ju, sepse errësira po shkon dhe tashmë po ndrit drita e vërtetë."},
	{7, "7 Ai që thotë se është në dritë dhe urren vëllanë e vet, është ende në errësirë."},
	{8, "8 Ai që e do vëllanë e vet qëndron në dritë dhe nuk ka asgjë në të që e bënë të bjerë."},
	{9, "9 Por ai që urren vëllanë e vet është në errësirë, ecën në errësirë dhe nuk di ku shkon, sepse errësira ia ka verbuar sytë."},
	{10, "10 Djema, ju shkruaj sepse mëkatet ju janë falur nëpërmjet emrit të tij."},
	{11, "11 Etër, ju shkruaj sepse ju e keni njohur atë që është që nga fillimi. Të rinj, ju shkruaj sepse e mundët të ligun. Djema, po ju shkruaj sepse e keni njohur Atin."},
	{12, "12 Etër, ju kam shkruar sepse e keni njohur atë që është nga fillimi. Të rinj, ju kam shkruar sepse jeni të fortë dhe fjala e Perëndisë qëndron në ju dhe sepse e mundët të ligun."},
	{13, "13 Mos e doni botën, as gjërat që janë në botë. Ne qoftë se ndokush do botën, dashuria e Atit nuk është në të,"},
	{14, "14 sepse gjithçka që është në botë, lakmia e mishit, lakmia e syve dhe krenaria e jetës, nuk vjen nga Ati, por nga bota."},
	{15, "15 Dhe bota kalon me lakminë e saj; por ai që bën vullnetin e Perëndisë mbetet përjetë."},
	{16, "16 Fëmijë, është ora e fundit. Dhe, sikurse e dëgjuat, antikrishti duhet të vijë, dhe tani janë shfaqur shumë antikrishtë; prej nga e dimë se është ora e fundit."},
	{17, "17 Mes nesh dolën, por nuk ishin nga tanët, sepse, po të ishin nga tanët, do të kishin qëndruar me ne; por kjo ndodhi që të dalë se nuk janë të gjithë nga tanët."},
	{18, "18 Por ju keni vajosjen nga i Shenjti dhe i dini çdo gjë."},
	{19, "19 Nuk ju shkrova juve sepse nuk e njihni të vërtetën, por sepse ju e njihni dhe sepse asnjë gënjeshtër nuk del nga e vërteta."},
	{20, "20 Kush është gënjeshtari, veçse ai që mohon se Jezus është Krishti? Antikrishti është ai, që mohon Atin dhe Birin."},
	{21, "21 Kushdo që mohon Birin, s'ka as Atin; kushdo që njeh Birin, ka edhe Atin."},
	{22, "22 Ajo që ju, pra, dëgjuat nga fillimi le të qëndrojë në ju; në qoftë se ajo që dëgjuat nga fillimi qëndron në ju, edhe ju do të qëndroni në Birin dhe në Atin."},
	{23, "23 Dhe ky është premtimi që ai na bëri: jeta e përjetshme."},
	{24, "24 Ju shkrova këto gjëra për ata që kërkojnë t'ju gënjejnë."},
	{25, "25 Dhe, sa për ju, vajosja që keni marrë prej tij qëndron në ju dhe nuk keni nevojë që ndokush t'ju mësojë; por, duke qenë se vajosja e tij ju mëson çdo gjë dhe është e vërtetë e nuk është gënjeshtër, qëndroni në të ashtu sikurse ju mësoi."},
	{26, "26 Edhe tani, djema, qëndroni në të që, kur të shfaqet ai, ne të mund të kemi besim, dhe në ardhjen e tij të mos turpërohemi para Tij."},
	{27, "27 Në qoftë se e dini se ai është i drejtë, ta dini se kushdo që praktikon drejtësinë ka lindur prej tij."},
	{28, "28 Shikoni ç'dashuri të madhe na dha Ati, që të quhemi bij të Perëndisë. Prandaj bota nuk na njeh, sepse nuk e ka njohur atë."},
	{29, "29 Shumë të dashur, tani jemi bij të Perëndisë, por ende nuk është shfaqur ç'do të jemi; por dimë se, kur të shfaqet ai, do të jemi të ngjashëm me të, sepse do ta shohim se si është ai."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sq3 poems[] = {
	{1, "1 Dhe kushdo që e ka këtë shpresë në të, le ta pastrojë veten, siç është i pastër ai."},
	{2, "2 Kush bën mëkat, bën edhe shkelje të ligjit; dhe mëkati është shkelje e ligjit."},
	{3, "3 Dhe ju e dini se ai u shfaq për të hequr mëkatet tona; dhe në të nuk ka mëkat."},
	{4, "4 Kush qëndron në të nuk mëkaton; kush mëkaton nuk e ka parë dhe as nuk e ka njohur."},
	{5, "5 Djema, kurrkush mos ju mashtroftë: ai që zbaton drejtësinë është i drejtë, ashtu sikur është i drejtë ai."},
	{6, "6 Kush kryen mëkat është nga djalli, sepse djalli mëkaton nga fillimi; prandaj është shfaqur Biri i Perëndisë: për të shkatërruar veprat e djallit."},
	{7, "7 Kush lindi nga Perëndia nuk kryen mëkat, sepse fara e Perëndisë qëndron në të dhe nuk mund të mëkatojë sepse lindi nga Perëndia."},
	{8, "8 Prej kësaj njihen bijtë e Perëndisë dhe bijtë e djallit; kushdo që nuk praktikon drejtësinë nuk është nga Perëndia, dhe i tillë nuk është as ai që nuk do vëllanë e vet."},
	{9, "9 Sepse ky është mesazhi që dëgjuat nga fillimi. Ta duam njeri-tjetrin,"},
	{10, "10 jo sikundër Kaini, i cili ishte nga i ligu dhe vrau vëllanë e vet. Dhe për çfarë arësye e vrau atë? Sepse veprat e tij ishin të liga dhe ato të të vëllait ishin të drejta."},
	{11, "11 Mos u çuditni, vëllezër të mi, nëse bota ju urren."},
	{12, "12 Ne e dimë se kemi kaluar nga vdekja në jetë, sepse i duam vëllezërit; kush nuk e do vëllanë e vet, mbetet në vdekje."},
	{13, "13 Kushdo që urren vëllanë e vet është vrasës; dhe ju e dini se asnjë vrasës nuk ka jetë të përjetshme të qëndrueshme në vete."},
	{14, "14 Nga kjo e kemi njohur dashurinë: ai e dha jetën e vet për ne; dhe ne duhet ta japim jetën tonë për vëllezërit."},
	{15, "15 Dhe nëse njëri ka të mirat e kësaj bote dhe sheh të vëllanë që është në nevojë dhe e mbyll zemrën e tij, si qëndron në të dashuria e Perëndisë?"},
	{16, "16 Djema të rinj, të mos duam me fjalë, as me gjuhë, por me vepra dhe në të vërtetë."},
	{17, "17 Dhe nga kjo ne dimë se jemi në të vërtetën dhe do t'i bindim zemrat tona para atij;"},
	{18, "18 sepse, po të na dënojë zemra jonë, Perëndia është më i madh se zemra jonë dhe njeh çdo gjë."},
	{19, "19 Shumë të dashur, nëse zemra jonë nuk na dënon, kemi siguri para Perëndisë;"},
	{20, "20 dhe ç'të kërkojmë, e marrim nga ai, sepse zbatojmë urdhërimet e tij dhe bëjmë gjërat që janë të pëlqyera prej tij."},
	{21, "21 Dhe ky është urdhërimi i tij që besojmë në emrin e Birit të tij Jezu Krisht dhe ta duam njeri-tjetrin si na urdhëroi ai."},
	{22, "22 Ai që zbaton urdhërimet e tij qëndron në Perëndinë, dhe Ai në të; dhe prej kësaj ne dijmë se ai qëndron në ne: nga Fryma që ai na dha."},
	{23, "23 Shumë të dashur, mos i besoni çdo frymë, por i vini në provë frymërat për të ditur nëse janë nga Perëndia, sepse shumë profetë të rremë kanë dalë në botë."},
	{24, "24 Nga kjo mund të njihni Frymën e Perëndisë: çdo frymë që rrëfen se Jezu Krishti ka ardhur në mish, është nga Perëndia."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sq4 poems[] = {
	{1, "1 Dhe çdo frymë që nuk rrëfen se Jezu Krishti ka ardhur në mish, nuk është nga Perëndia; dhe kjo është fryma e antikrishtit që, siç e keni dëgjuar se vjen; dhe tashmë është në botë."},
	{2, "2 Ju jeni prej Perëndisë, o djem të rinj, dhe i keni mundur ata, sepse ai që është në ju është më i madh se ai që është në botë."},
	{3, "3 Ata janë nga bota; prandaj flasin për gjërat e botës dhe bota i dëgjon."},
	{4, "4 Ne jemi prej Perëndisë; kush njeh Perëndinë na dëgjon; kush nuk është prej Perëndisë nuk na dëgjon; nga kjo njohim Frymën e së vërtetës dhe frymën e gabimit."},
	{5, "5 Shumë të dashur, le ta duam njeri tjetrin, sepse dashuria është nga Perëndia dhe kushdo që do, ka lindur nga Perëndia dhe e njeh Perëndinë."},
	{6, "6 Ai që nuk ka dashuri nuk e ka njohur Perëndinë, sepse Perëndia është dashuri."},
	{7, "7 Në këtë është shfaqur dashuria e Perëndisë ndaj nesh, se Perëndia dërgoi Birin e tij të vetëmlindurin në botë që ne të rrojmë nëpërmjet tij."},
	{8, "8 Në këtë është dashuria: jo se ne e kemi dashur Perëndinë, por që ai na ka dashur ne dhe dërgoi Birin e tij për shlyerjen e mëkateve tona."},
	{9, "9 Shumë të dashur, në qoftë se Perëndia na ka dashur në këtë mënyrë; edhe ne duhet ta duam njeri-tjetrin."},
	{10, "10 Askush s'e ka parë ndonjëherë Perëndinë; po ta duam njeri-tjetrin, Perëndia qëndron në ne dhe dashuria e tij është e përsosur në ne."},
	{11, "11 Nga kjo ne njohim se qëndrojmë në të dhe ai në ne, sepse ai na ka dhënë nga Fryma e tij."},
	{12, "12 Dhe ne pamë dhe dëshmojmë se Ati e dërgoi Birin për të qënë Shpëtimtar i botës."},
	{13, "13 Ai që rrëfen se Jezusi është Biri i Perëndisë, Perëndia qëndron në të dhe ai në Perëndinë."},
	{14, "14 Dhe ne njohëm dhe besuam dashurinë që Perëndia ka për ne. Perëndia është dashuri; dhe ai që qëndron në dashuri qëndron në Perëndinë dhe Perëndia në të."},
	{15, "15 Në këtë dashuria u përsos në ne (që të kemi guxim në ditën e gjyqit): sepse sikurse është ai, po kështu jemi edhe ne në këtë botë."},
	{16, "16 Në dashuri nuk ka frikë, madje dashuria e përsosur e nxjerr jashtë frikën, sepse frika ka të bëjë me ndëshkimin, dhe ai që ka frikë nuk është i përsosur në dashuri."},
	{17, "17 Ne e duam atë, sepse ai na deshi i pari."},
	{18, "18 Po të thotë dikush: Unë e dua Perëndinë dhe urren vëllanë e vet, është gënjeshtar; sepse ai që nuk do vëllanë e vet të cilin e sheh, si mund të dojë Perëndinë, që nuk e sheh?"},
	{19, "19 Dhe ky është urdhërimi që kemi marrë nga ai: ai që do Perëndinë, të dojë edhe vëllanë e vet."},
	{20, "20 Kushdo që beson se Jezusi është Krishti, ka lindur nga Perëndia; dhe kushdo që do atë që e ka ngjizur, do edhe atë që ka qenë ngjizur nga ai."},
	{21, "21 Nga kjo ne dimë ti duam bijtë e Perëndisë: kur duam Perëndinë dhe zbatojmë urdhërimet e tij."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct sq5 poems[] = {
	{1, "1 Sepse kjo është dashuria e Perëndisë: që ne të zbatojmë urdhërimet e tij; dhe urdhërimet e tij nuk janë të rënda."},
	{2, "2 Sepse çdo gjë që ka lindur nga Perëndia e mund botën; dhe kjo është fitorja që e mundi botën: besimi ynë"},
	{3, "3 Cili është ai që e mund botën, veç se ai që beson se Jezusi është Biri i Perëndis?"},
	{4, "4 Ky është ai që erdhi me anë të ujit e gjakut, Jezu Krishti; jo vetëm me anë të ujit, por me anë të ujit e me anë të gjakut. Dhe Fryma është ai që dëshmon, sepse Fryma është e vërteta."},
	{5, "5 Sepse tre janë ata që dëshmojnë në qiell: Ati, Fjala dhe Fryma e Shenjtë; dhe këta të tre janë një."},
	{6, "6 Edhe tre janë ata që dëshmojnë mbi dhe: Fryma, uji dhe gjaku; dhe këta të tre janë të një mendimi."},
	{7, "7 Në qoftë se ne pranojmë dëshminë e njerëzve, dëshmia e Perëndisë është më e madhe, sepse kjo është dëshmia e Perëndisë që ai dha për Birin e tij."},
	{8, "8 Ai që beson në Birin e Perëndisë ka këtë dëshmi në vetvete; ai që nuk beson te Perëndia, e ka bërë atë gënjeshtar, sepse nuk i besoi dëshmisë që Perëndia dha për Birin e tij."},
	{9, "9 Dhe dëshmia është kjo: Perëndia na dha jetën e përjetshme dhe kjo jetë është në Birin e tij."},
	{10, "10 Ai që ka Birin, ka jetën; ai që nuk ka Birin e Perëndisë, nuk ka jetën."},
	{11, "11 Jua shkrova këto gjëra juve që besoni në emrin e Birit të Perëndisë, që të dini se keni jetën e përjetshme dhe që të besoni në emrin e Birit të Perëndisë."},
	{12, "12 Kjo është siguria që kemi përpara tij: nëse kërkojmë diçka sipas vullnetit të tij, ai na e plotëson:"},
	{13, "13 Dhe nëse dimë se ai na i plotëson të gjitha ato që i kërkojmë, ne dimë se i kemi ato që i kërkuam atij."},
	{14, "14 Në se dikush sheh vëllanë e vet se kryen një mëkat që nuk çon në vdekje, le t'i lutet Perëndisë, dhe ai do t'i japë jetën, atyre që bëjnë mëkat që nuk çon në vdekje. Ka mëkat që çon në vdekje nuk them që ai të lutet për këtë."},
	{15, "15 Çdo paudhësi është mëkat; por ka mëkat që nuk çon në vdekje."},
	{16, "16 Ne dimë se kushdo që ka lindur nga Perëndia nuk mëkaton; ai që ka lindur nga Perëndia e ruan veten e tij, dhe i ligu nuk e prek atë."},
	{17, "17 Ne dimë se jemi nga Perëndia dhe se gjithë bota dergjet në ligësi."},
	{18, "18 Por ne dimë se Biri i Perëndisë erdhi dhe na dha të kuptuarit, që ne të njohim atë që është i Vërteti; dhe ne jemi në të Vërtetin, në Birin e tij Jezu Krisht; ky është i vërteti Perëndi dhe jeta e përjetshme."},
	{19, "19 Djema, ruani veten nga idhujt."},
	{20, "20 Plaku; zonjës së zgjedhur dhe bijve të saj që i dua në të vërtetë, dhe jo vetëm unë, por edhe të gjithë ata që e kanë njohur të vërtetën,"},
	{21, "21 për shkak të së vërtetës që qëndron në ne dhe do të jetë me ne përjetë:"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};