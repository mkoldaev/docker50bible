#include <map>
#include <string>
class Bible36
{
	struct sq1	{ int val; const char *msg; };
	struct sq2	{ int val; const char *msg; };
	struct sq3	{ int val; const char *msg; };
public:
static void view1() {
struct sq1 poems[] = {
	{1, "1 Fjala e Zotit që iu drejtua Sofonias, birit të Kushit, bir i Gedaliahut, bir i Amariahut, bir i Ezekias, në ditët e Josias, birit të Amonit, mbret i Judës."},
	{2, "2 Unë do të zhduk krejt çdo gjë nga faqja e dheut, thotë Zoti."},
	{3, "3 Do të zhduk njerëz dhe kafshë, do të zhduk zogjtë e qiellit dhe peshqit e detit, shkaqet e mëkatit së bashku me të pabesët dhe do të shfaros njeriun nga faqja e dheut, thotë Zoti."},
	{4, "4 Do të shtrij dorën time kundër Judës dhe kundër të gjithë banorëve të Jeruzalemit dhe do të shfaros nga ky vend mbeturinat e Baalit, emrin e priftërinjve idhujtarë, bashkë me priftërinjtë,"},
	{5, "5 ata të cilët bien përmbys mbi tarraca përpara ushtrisë së qiellit, ata që bien përmbys duke iu betuar Zotit, por duke iu betuar edhe Malkamit,"},
	{6, "6 ata që largohen nga Zoti dhe ata që nuk e kërkojnë Zotin dhe nuk e konsultojnë."},
	{7, "7 Rri në heshtje para Zotit, Zotit, sepse dita e Zotit është e afërt, sepse Zoti ka përgatitur një flijim, ka shenjtëruar të ftuarit e tij."},
	{8, "8 Ditën e flijimit të Zotit do të ndodhë që unë do të ndëshkoj princat, bijtë e mbretit dhe tërë ata që mbajnë veshje të huajsh."},
	{9, "9 Po atë ditë do të ndëshkoj tërë ata që hidhen mbi prag, që mbushin me dhunë dhe mashtrim shtëpitë e zotërve të tyre."},
	{10, "10 Atë ditë, thotë Zoti, do të ngrihet një britmë nga porta e peshqve, një klithmë nga lagja e dytë dhe një zhurmë e madhe nga kodrat."},
	{11, "11 Ulërini, o banorë të Makteshit, sepse tërë populli i tregtarëve është asgjësuar, tërë ata të ngarkuar me para janë shfarosur."},
	{12, "12 Në atë kohë do të ndodhë që unë do të kontrolloj Jeruzalemin me llampa dhe do të ndëshkoj njerëzit që, duke qëndruar në llumin e tyre, thonë në zemër të tyre: Zoti nuk bën as të mirë as të keq."},
	{13, "13 Prandaj pasuritë e tyre do të bëhen plaçkë lufte dhe shtëpitë e tyre do të shkretohen. Do të ndërtojnë shtëpi, do të mbjellin vreshta, por nuk do pinë verën e tyre."},
	{14, "14 Dita e Zotit është e afërt, është e afërt dhe po vjen me shpejtësi të madhe. Zhurma e ditës së Zotit është e hidhur; atëherë njeriu trim do të këlthasë fort."},
	{15, "15 Ajo ditë është një ditë zemërimi, një ditë mjerimi dhe ankthi, një ditë shkatërrimi dhe shkretie, një ditë terri dhe mjegulle, një ditë resh dhe errësire të thellë,"},
	{16, "16 një ditë zhurmimi të borisë dhe alarmi kundër qyteteve të fortifikuara dhe kullave të larta."},
	{17, "17 Unë do të sjell fatkeqësinë mbi njerëzit dhe ata do të ecin si të verbër, sepse kanë mëkatuar kundër Zotit; gjaku i tyre do të shpërndahet si pluhur dhe mishi i tyre si jashtëqitje."},
	{18, "18 As argjendi i tyre as ari i tyre nuk do të mund t'i çlirojnë ditën e zemërimit të Zotit; përkundrazi tërë vendi do të gllabërohet nga zjarri i xhelozisë së tij, sepse ai do të kryejë me siguri një  shkatërrim të plotë të të gjithë banorëve të  vendit."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sq2 poems[] = {
	{1, "1 Mblidhuni, mblidhuni bashkë, o komb i pacipë,"},
	{2, "2 para se dekreti të ketë efekt, para se dita të kalojë si byku, para se të bjerë mbi ju zemërimi i zjarrtë i Zotit, para se të vijë mbi ju dita e zemërimit të Zotit."},
	{3, "3 Kërkoni Zotin ju të gjithë, të përulurit e dheut, që zbatoni ligjin e tij. Kërkoni drejtësinë, kërkoni përulësinë. Ndofta do të jeni të mbrojtur në ditën e zemërimit të Zotit."},
	{4, "4 Sepse Gaza do të braktiset dhe Ashkeloni do të bëhet një shkreti; do të dëbojnë Ashdodin me dhunë në mes të ditës, dhe Ekroni do të çrrënjoset."},
	{5, "5 Mjerë banorët e bregut të detit, mjerë kombi i Kerethejve! Fjala e Zotit është kundër teje, o Kanaan, vend i Filistejve: Unë do të të shkatërroj dhe nuk do të mbetet më asnjë i gjallë."},
	{6, "6 Kështu bregu i detit do të jetë i tëri kullotë me banesa për barinjtë dhe vathë për kopetë."},
	{7, "7 Bregdeti do t'i përkasë mbeturinës së shtëpisë së Judës; në këto vende do të kullotin kopetë; në mbrëmje do të pushojnë në shtëpitë e Ashkelonit, sepse Zoti, Perëndia i tyre, do t'i vizitojë dhe do t'i kthejë nga robëria."},
	{8, "8 Kam dëgjuar përbuzjen e Moabit dhe fyerjet e rënda të bijve të Amonit, me të cilat kanë fyer popullin tim dhe janë zmadhuar në dëm të territorit të tyre."},
	{9, "9 Prandaj, ashtu siç është e vërtetë që unë rroj, thotë Zoti i ushtrive, Perëndia i Izraelit, me siguri Moabi do të jetë si Sodoma, dhe bijtë e Amonit si Gomorra, një vend i zënë nga hithrat dhe kripërat,  një shkreti përjetë. Kusuri i popullit  tim do t'i plaçkitë dhe mbeturina e popullit tim do t'i zotërojë."},
	{10, "10 Kjo do t'u ndodhë për shkak të kryelartësisë së tyre, sepse kanë fyer dhe trajtuar me arrogancë popullin e Zotit të ushtrive."},
	{11, "11 Zoti do të jetë i tmerrshëm kundër tyre, sepse do t'i përkulë tërë perënditë e tokës; dhe secili do ta adhurojë nga vendi i tij, po, tërë ishujt e kombeve."},
	{12, "12 Edhe ju, Etiopas, do të vriteni nga shpata ime."},
	{13, "13 Ai do të shtrijë dorën kundër veriut, do të shkatërrojë Asirinë dhe do ta bëjë Niniven shkreti, një vend të thatë si shkretëtira."},
	{14, "14 Në mes të tij do të struken kopetë, tërë kafshët e kombeve; si pelikani ashtu dhe çafka do të kalojnë natën mbi kapitelet e shtyllave të tij; zëri i tyre do të dëgjohet në dritare; shkretimi do të  jetë mbi pragje, sepse do të shkatërrojë  veshjen me panela kedri."},
	{15, "15 Ky është qyteti i qejfeve që rrinte i sigurt dhe thoshte në zemër të vet: Unë, dhe askush tjetër veç meje. Vallë si u bë një shkreti, një vend ku struken kafshët? Kushdo që do t'i kalojë afër do të fërshëllejë dhe do të tundë dorën."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sq3 poems[] = {
	{1, "1 Mjerë ai që është rebel dhe i ndotur, mjerë qyteti i shtypjes!"},
	{2, "2 Ai nuk ka dëgjuar zërin e tij, nuk ka pranuar të ndreqet, nuk ka patur besim tek Zoti, nuk i është afruar Perëndisë të vet."},
	{3, "3 Krerët e tij në mes të tij janë luanë që vrumbullojnë; gjyqtarët e tij janë ujqër të mbrëmjes, që nuk lënë asnjë kockë për ta brejtur për mëngjes."},
	{4, "4 Profetët e tij janë mburravecë, të pabesë; priftërinjtë e tij kanë përdhosur vendin e shenjtë, kanë dhunuar ligjin."},
	{5, "5 Zoti është i drejtë në mes të tij, ai nuk kryen paudhësi. Çdo mëngjes ai sjell në dritë drejtësinë pa munguar asnjë herë, por i çorodituri nuk njeh turp."},
	{6, "6 Kam shfarosur kombet; kalatë e tyre janë shembur; i kam shkretuar rrugët e tyre dhe askush nuk kalon nëpër to; qytetet e tyre janë shkatërruar dhe askush nuk banon në to."},
	{7, "7 Unë thoja: Me siguri do të kesh frikë nga unë, do të pranosh të ndreqesh, dhe kështu banesa e tij nuk do të shkatërrohej me gjithë ndëshkimet që i kam dhënë. Por ata u nxituan të prishen në të gjitha veprimet e tyre."},
	{8, "8 Prandaj më prit, thotë Zoti, kur të ngrihem për të bërë plaçkë, sepse unë kam vendosur të mbledh kombet, të bashkoj mbretëritë, për të hedhur mbi ta indinjatën time, gjithë zjarrin e zemërimit tim;"},
	{9, "9 Sepse atëherë do t'u jap popujve një të folur të pastër, me qëllim që të gjithë të përmendin emrin e Zotit, për t'i shërbyer me një marrëveshje të përbashkët."},
	{10, "10 Që përtej lumenjve të Etiopisë, adhuruesit e mi, bija e të humburve të mi, do të më sjellin ofertat e tyre."},
	{11, "11 Në atë ditë ti nuk do të kesh më turp për të gjitha veprimet e tua me të cilat ngrite krye kundër meje, sepse atëherë unë do të largoj nga mesi yt ata që gëzohen në madhështinë tënde, dhe ti nuk do të krenohesh në malin tim të shenjtë."},
	{12, "12 Do të bëj të mbetet midis teje një popull i përulur dhe i varfër, që do të ketë besim te emri i Zotit."},
	{13, "13 Mbeturina e Izraelit nuk do të kryejë paudhësi dhe nuk do të thotë më gënjeshtra, as do të gjendet në gojën e tyre një gjuhë gënjeshtare; sepse ata do ta kullotin kopenë e tyre, do të bien të flenë dhe askush nuk do t'i trembë."},
	{14, "14 Lësho britma gëzimi, o bijë e Sionit, lësho britma hareje, o Izrael! Gëzohu dhe ngazëllo me gjithë zemër, o bijë e Jeruzalemit!"},
	{15, "15 Zoti i ka revokuar gjykimet e tij kundër teje, ka dëbuar armikun tënd. Mbreti i Izraelit, Zoti, ndodhet midis teje, nuk do të kesh më frikë nga asgjë."},
	{16, "16 Atë ditë do të thonë në Jeruzalem: Mos ki frikë, o Sion, duart e tua mos u dobësofshin!"},
	{17, "17 Zoti, Perëndia yt, në mes teje është i fuqishmi që shpëton. Ai do të mbushet me gëzim për ty, në dashurinë e tij do qëndrojë në heshtje, do të gëzohet për ty me britma gëzimi."},
	{18, "18 Unë do të mbledh ata që janë të pikëlluar për kuvendet solemne, që janë në mes tuaj për të cilët pesha për atë ishte bërë objekt përçmimi."},
	{19, "19 Ja, në atë kohë unë do të veproj kundër atyre që të shtypin; do të shpëtoj çalamanin dhe do të mbledh ata që janë dëbuar, dhe do t'i bëj të lavdishëm dhe të dëgjuar në të gjitha vendet ku kanë qenë me turp."},
	{20, "20 Në atë kohë unë do t'ju kthej, po, në atë kohë do t'ju mbledh; sepse do t'ju bëj të famshëm dhe të lavdishëm midis tërë popujve të tokës, kur, para syve tuaj, do t'i bëj të kthehen ata që janë në robëri, thotë Zoti."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};