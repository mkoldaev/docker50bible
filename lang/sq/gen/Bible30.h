#include <map>
#include <string>
class Bible30
{
	struct sq1	{ int val; const char *msg; };
	struct sq2	{ int val; const char *msg; };
	struct sq3	{ int val; const char *msg; };
	struct sq4	{ int val; const char *msg; };
	struct sq5	{ int val; const char *msg; };
	struct sq6	{ int val; const char *msg; };
	struct sq7	{ int val; const char *msg; };
	struct sq8	{ int val; const char *msg; };
	struct sq9	{ int val; const char *msg; };
public:
static void view1() {
struct sq1 poems[] = {
	{1, "1 Fjalë të Amosit, një nga barinjtë e Tekoas, që pati vegime për Izraelin, në kohën e Uziahut, mbretit të Judës, dhe në kohën e Jeroboamit, birit të Joasit, mbret i Izraelit, dy vjet para tërmetit."},
	{2, "2 Ai tha: Zoti bërtet nga Sioni dhe bën që të dëgjohet zëri i tij në Jeruzalem; kullotat e barinjve janë të shkreta dhe maja e Karmelit u tha."},
	{3, "3 Kështu flet Zoti: Për tre krime të Damaskut, madje për katër, unë nuk do ta revokoj ndëshkimin e tij, sepse e kanë shirë Galaadin me shirëse prej hekuri."},
	{4, "4 Prandaj do të dërgoj zjarr në shtëpinë e Hazaelit, që do të gllabërojë pallatet e Ben-hadadit."},
	{5, "5 Do të copëtoj edhe shufrat e Damaskut, do të shfaros banorin e Bikath-avenit dhe atë që mban skeptrin e Beth-edenit, dhe populli i Sirisë do të shkojë në robëri në Kir, thotë Zoti."},
	{6, "6 Kështu thotë Zoti: Për tre krime të Gazës, madje për katër, unë nuk do ta revokoj ndëshkimin e saj, sepse kanë shpërngulur një popullatë të tërë për t'ia dorëzuar Edomit."},
	{7, "7 Prandaj do të dërgoj zjarr brenda mureve të Gazës, që do të gllabërojë pallatet e saj."},
	{8, "8 Do të shfaros banorin prej Ashdodit dhe atë që mban skeptrin prej Ashkelonit; do ta kthej dorën time kundër Ekronit, dhe kusuri i Filistejve do të vdesë, thotë Zoti, Zoti."},
	{9, "9 Kështu thotë Zoti: Për tre krime të Tiros, madje për katër, unë nuk do ta revokoj ndëshkimin e tij, sepse i kanë dorëzuar si robër Edomit një popullatë të tërë, pa kujtuar besëlidhjen vëllazërore."},
	{10, "10 Prandaj do të dërgoj zjarr brenda mureve të Tiros, që do të gllabërojë pallatet e tij."},
	{11, "11 Kështu thotë Zoti: Për tre krime të Edomit, madje për katër, unë nuk do ta revokoj ndëshkimin e tij, sepse ka ndjekur me shpatë vëllanë e tij, duke mbytur çdo mëshirë; zemërimi i tij vepron vazhdimisht dhe indinjata e tij përjetë."},
	{12, "12 Prandaj do të dërgoj zjarr kundër Temanit, që do të gllabërojë pallatet e Botsrahut."},
	{13, "13 Kështu thotë Zoti: Për tre krime të bijve te Amonit, madje për katër, unë nuk do ta revokoj ndëshkimin e tij, sepse u kanë çarë barkun grave me barrë të Galaadit për të zgjeruar kufijtë e tyre."},
	{14, "14 Prandaj do të ndez një zjarr brenda mureve të Rabahut, që do të gllabërojë pallatet e tij midis zhurmës së një dite beteje, midis shakullinës së një dite stuhie."},
	{15, "15 Mbreti i tyre do të shkojë në robëri, ai bashkë me krerët e tij, thotë Zoti."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sq2 poems[] = {
	{1, "1 Kështu thotë Zoti: Për tre krime të Moabit, madje për katër, unë nuk do ta revokoj ndëshkimin e tij, sepse ka djegur kockat e mbretit të Edomit, duke i katandisur në gëlqere."},
	{2, "2 Prandaj do të dërgoj zjarr në Moab, që do të gllabërojë pallatet e Keriothit, dhe Moabi do të vdesë në mes të rrëmujës, të britmës së luftës dhe të tingullit të borive."},
	{3, "3 Do të shfaros nga mesi i tij gjykatësin dhe do të vras tërë krerët e tij bashkë me të, thotë Zoti."},
	{4, "4 Kështu thotë Zoti: Për tre krime të Judës, madje për katër, unë nuk do ta revokoj ndëshkimin e tij, sepse kanë përçmuar ligjin e Zotit dhe nuk kanë respektuar statutet e tij. Kështu idhujt, pas të  cilëve shkuan etërit e tyre, i kanë bërë të  devijojnë."},
	{5, "5 Prandaj do të dërgoj zjarr në Judë, që do të gllabërojë pallatet e Jeruzalemit."},
	{6, "6 Kështu thotë Zoti: Për tre krime të Izraelit, madje për katër, unë nuk do ta revokoj ndëshkimin e tij, sepse e shesin me pare të drejtin dhe të varfrin për një palë sandale,"},
	{7, "7 ata që dëshirojnë fort të shohin pluhurin e tokës mbi kryet e të varfërve dhe shkelin të drejtën e të përulurve. Një njeri dhe ati i tij shkojnë bashkë te po ajo vajzë, për të përdhosur emrin tim të shenjtë."},
	{8, "8 Shtrihen rreth çdo altari me rroba që kanë marrë hua dhe në shtëpinë e perëndive të tyre pinë verën e atyre që janë dënuar me gjobë."},
	{9, "9 Unë, pra, e shkatërrova para tyre Amoreon, që ishte i gjatë sa është i gjatë kedri dhe ishte fortë si lisi; unë shkatërrova frytin e tij lart dhe rrënjët e tij poshtë."},
	{10, "10 Unë ju nxora gjithashtu nga vendi i Egjiptit dhe ju çova për dyzet vjet në shkretëtirë, për t'ju dhënë në trashëgimi vendin e Amoreut."},
	{11, "11 Nxora disa profetë midis bijve tuaj dhe Nazirej midis të rinjve tuaj. Vallë, nuk është kështu, o bij të Izraelit?, thotë Zoti."},
	{12, "12 Por i keni detyruar Nazirejtë të pinë verë dhe i keni urdhëruar profetët duke thënë: Mos profetizoni."},
	{13, "13 Unë jam i shtypur poshtë jush, ashtu siç është e shtypur qerrja e mbushur me duaj."},
	{14, "14 Prandaj i shpejti nuk do të ketë mundësi të ikë, i forti nuk do të konsolidojë forcën e tij dhe njeriu trim nuk do ta shpëtojë jetën e tij."},
	{15, "15 Kush përdor harkun nuk do të mund të rezistojë, kush ka këmbë të shpejta nuk do t'ia dalë të ikë, as ka për të shpëtuar jetën e vet kalorësi mbi kalë."},
	{16, "16 Atë ditë më trimi ndër trimat do të ikë lakuriq, thotë Zoti."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sq3 poems[] = {
	{1, "1 Dëgjoni këtë fjalë që Zoti ka shqiptuar kundër jush, o bij të Izraelit, kundër tërë familjes që nxora nga vendi i Egjiptit:"},
	{2, "2 Vetëm ju kam njohur midis tërë familjeve të dheut; prandaj unë do t'ju ndëshkoj për të gjitha paudhësitë tuaja."},
	{3, "3 A mund të ecin bashkë dy veta, në rast se nuk janë marrë vesh më parë?"},
	{4, "4 A vrumbullon luani në pyll në rast se nuk ka një gjah përpara? A do ta ngrerë zërin luani i vogël nga strofka e i tij në rast se nuk ka kapur diçka?"},
	{5, "5 A bie vallë zogu në një kurth në tokë, po të mos i jetë vënë një lak? A shkrehet kurthi nga toka, në rast se nuk ka zënë diçka?"},
	{6, "6 Në rast se në qytet i bien borisë, a nuk do të trembet vallë populli? Në rast se në një qytet ndodh një fatkeqësi, a nuk e ka shkaktuar vallë Zoti?"},
	{7, "7 Sepse Zoti, Zoti, nuk bën asgjë, pa ua treguar sekretin e tij shërbëtorëve të tij, profetëve."},
	{8, "8 Luani vrumbulloi, kush nuk do të ketë frikë? Zoti, Zoti, foli, kush nuk do të profetizojë?"},
	{9, "9 Bëjeni të dëgjohet në pallatet e Ashdodit dhe në pallatet e vendit të Egjiptit dhe thoni: Mblidhuni në malet e Samarisë dhe shikoni sa parregullsi ka në mes të saj dhe shtypje brenda saj."},
	{10, "10 Ata nuk dinë të bëjnë atë që është e drejtë, thotë Zoti, në pallatet e tyre grumbullojnë dhunë dhe grabitje."},
	{11, "11 Prandaj, kështu thotë Zoti, Zoti: Armiku do të rrethojë nga çdo anë vendin, do të shembë fuqinë tënde dhe pallatet e tua do të plaçkiten."},
	{12, "12 Kështu thotë Zoti: Ashtu si një bari shkëput nga goja e luanit dy këmbë ose një copë veshi, kështu do të shkëputen bijtë e Izraelit që në Samari rrinë në cepin e një shtrati ose mbi damaskun e një divani."},
	{13, "13 Dëgjoni dhe dëshmojeni në shtëpinë e Jakobit, thotë Zoti, Zoti, Perëndia i ushtrive,"},
	{14, "14 ditën në të cilën unë do të ndëshkoj Izraelin për shkeljet e tij, do të ndëshkoj edhe altarët e Bethelit; brirët e altarit do të copëtohen dhe do të bien për tokë."},
	{15, "15 Do të godas shtëpitë e dimrit bashkë me shtëpitë e verës; shtëpitë prej fildishi do të shkatërrohen dhe shtëpitë e mëdha do të zhduken, thotë Zoti."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct sq4 poems[] = {
	{1, "1 Dëgjoni këtë fjalë, lopë të Bashanit, që ndodheni mbi malin e Samarisë, ju, që shypni të mjerët, që keqtrajtoni të varfrit, që u thoni zotërinjve tuaj: Sillni verë dhe ta pimë."},
	{2, "2 Zoti, Zoti, është betuar për shenjtërinë e tij: Ja, do të vinë për ju ditë në të cilat do t'ju zënë me çengela dhe ata që kanë mbetur me grepa peshkimi."},
	{3, "3 Do të dilni nëpër të çara, secili drejt përpara, dhe do t'ju hedhin në Harmon, thotë Zoti."},
	{4, "4 Shkoni në Bethel dhe kryeni mëkate; në Gilgal kryeni edhe më shumë mëkate. Sillni çdo mëngjes flijimet tuaja dhe çdo tri ditë të dhjetat tuaja."},
	{5, "5 Ofroni një flijim falënderimi me maja. Shpallni ofertat me dëshirë dhe i propagandoni, sepse kështu ju pëlqen të veproni, o bij të Izraelit, thotë Zoti, Zoti."},
	{6, "6 Ju kam lënë gojë thatë në të gjitha qytetet tuaja dhe pa bukë në të gjitha banesat tuaja, por nuk jeni kthyer tek unë, thotë Zoti."},
	{7, "7 Kam ndalur shiun gjithashtu prej jush tre muaj para korrjes. Kam bërë të bjerë shi mbi një qytet, ndërsa nuk ka rënë shi mbi një qytet tjetër. Mbi një pjesë të arës ka rënë shi, por pjesa ku nuk ka rënë shi është tharë."},
	{8, "8 Kështu dy ose tre qytete endeshin drejt një qyteti tjetër për të pirë ujë, por pa shuar dot etjen; por ju nuk u kthyet tek unë, thotë Zoti."},
	{9, "9 Ju godita me blozën dhe me ndryshkun. Krimbi ka ngrënë kopshtet tuaja të shumta, vreshtat tuaja, fiqtë tuaj, ullinjtë tuaj, por ju nuk u kthyet tek unë, thotë Zoti."},
	{10, "10 Dërgova midis jush murtajën, ashtu si kisha bërë në Egjipt; vrava të rinjtë tuaj me shpatë bashkë me kuajt e zënë; bëra që duhma e kampeve tuaj të ngjitet deri te flegrat tuaja, por ju nuk u kthyet tek unë, thotë Zoti."},
	{11, "11 Ju përlava, si Sodoma dhe Gomora, ju ishit si një urë zjarri, dhe nuk u kthyet tek unë, thotë Zoti."},
	{12, "12 Prandaj kështu do të sillem me ty, o Izrael; dhe duke qenë se unë do të bëj këtë kundër teje, përgatitu, o Izrael, të takosh Perëndinë tënd."},
	{13, "13 Sepse ja, ai që formon malet dhe krijon erën, që i bën të njohur njeriut cili është mendimi i tij, që e kthen agimin në terr dhe ecën mbi vendet e larta të tokës: Zoti, Perëndia i ushtrive, është emri i tij."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct sq5 poems[] = {
	{1, "1 Dëgjoni këtë fjalë, këtë vajtim që unë ngre mbi ju, o shtëpi e Izraelit."},
	{2, "2 Virgjëresha e Izraelit ra dhe nuk do të ngrihet më; ajo rri shtrirë në tokën e vet dhe askush nuk e ngre."},
	{3, "3 Sepse kështu thotë Zoti, Zoti: Qyteti që dilte me njëmijë njerëz do të mbetet me njëqind, ndërsa ai që dilte me njëqind do të mbetet me dhjetë për shtëpinë e Izraelit."},
	{4, "4 Sepse kështu thotë Zoti shtëpisë së Izraelit: Më kërkoni dhe do të rroni,"},
	{5, "5 por mos kërkoni Bethelin, mos shkoni në Gilgal, mos vazhdoni deri në Beer-Sheba, sepse Gilgali do të shkojë me siguri në robëri dhe Betheli do të katandiset në asgjë."},
	{6, "6 Kërkoni Zotin dhe do të rroni, që të mos shpërthejë si zjarr në shtëpinë e Jozefit dhe ta gllabërojë pa qenë në gjendje ta shuajë askush në Bethel."},
	{7, "7 Ai braktis ata që e ndërrojnë ndershmërinë dhe drejtësinë në helm mbi tokë."},
	{8, "8 Ai ka bërë Plejadat dhe Orionin, e kthen hijen e vdekjes në agim dhe e bën ditën të errët si nata; thërret ujërat e detit dhe i derdh mbi faqen e dheut: emri i tij është Zoti."},
	{9, "9 Ata sjellin papritmas shkatërrimin mbi të fuqishmit, dhe kështu rrënimi u sulet fortesave."},
	{10, "10 Ata e urrejnë atë që i qorton te porta dhe kanë neveri për ata që flasin me ndershmëri."},
	{11, "11 Pastaj, duke qenë se keni shtypur të varfrin dhe kërkoni prej tij taksa në grurë, megjithëse keni ndërtuar shtëpi prej guri të palatuar, nuk do të banoni në to; keni mbjellë vreshta të mrekullueshme, por nuk do ta pini verën e tyre."},
	{12, "12 Unë, pra, njoh sa të shumta janë shkeljet tuaja dhe sa të rënda janë mëkatet tuaja; ju shtypni të drejtin, pranoni dhurata dhe u bëni padrejtësi të varfërve në gjyq."},
	{13, "13 Prandaj njeriu i matur në këtë kohë do të heshtë, sepse koha është e keqe."},
	{14, "14 Kërkoni të mirën dhe jo të keqen, që të rroni, dhe kështu Zoti, Perëndia i ushtrive, do të jetë me ju, ashtu si thoni ju."},
	{15, "15 Urreni të keqen, dashuroni të mirën dhe vendosni mirë drejtësinë në gjyq. Ndofta Zoti, Perëndia i ushtrive, do të tregojë dhemshurinë për ata që kanë mbetur nga Jozefi."},
	{16, "16 Prandaj kështu thotë Zoti, Perëndia i ushtrive, Zoti: Në të gjitha sheshet do të ketë vajtime dhe në të gjitha rrugët do të thonë: Vaj medet, vaj medet!. Atëherë do të thërrasin bujkun të mbajë"},
	{17, "17 Në të gjitha vreshtat do të ketë vajtim, sepse unë do të kaloj në mes teje, thotë Zoti."},
	{18, "18 Mjerë ju që dëshironi ditën e Zotit! Çfarë do të jetë vallë për ju dita e Zotit? Do të jetë një ditë terri dhe jo drite."},
	{19, "19 Do të jetë ashtu si dikush që fugon para një luani dhe ndesh një ujk; ose hyn në shtëpi, e mbështet dorën mbi mur dhe një gjarpër e kafshon."},
	{20, "20 Dita e Zotit a nuk është vallë terr dhe jo dritë, errësirë e madhe dhe pa asnjë shkëlqim?"},
	{21, "21 Unë i urrej, i përçmoj festat tuaja, nuk ndiej asnjë gëzim në mbledhjet tuaja solemne."},
	{22, "22 Edhe sikur të më ofroni olokaustet tuaja dhe blatimet tuaja ushqimore, unë nuk do t'i pëlqej as do të shikoj me favor flijimet e falendërimit të kafshëve të majme."},
	{23, "23 Largo nga unë zhurmën e këngëve të tua, sepse nuk dua të dëgjoj muzikën e harpave të tua."},
	{24, "24 Por le të rrjedhë e drejta si uji dhe drejtësia si një burim i përhershëm uji."},
	{25, "25 O shtëpi e Izraelit, më keni ofruar vallë flijime dhe blatime ushqimore në shkretëtrë për dyzet vjet me radhë?"},
	{26, "26 Ju keni mbartur gjithashtu Sikuthin, mbretin tuaj, dhe Kiunin, figurat tuaja, yllin e perëndive tuaja, që i keni bërë vetë."},
	{27, "27 Prandaj unë do të bëj që të shkoni në robëri matanë Damaskut, thotë Zoti, emri i të cilit është Perëndia i ushtrive."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct sq6 poems[] = {
	{1, "1 Mjerë ata që jetojnë në bollëk në Sion dhe që e ndjejnë veten të sigurt në malin e Samarias, njerëz të parisë të ballit të kombeve, ku po shkon shtëpia e Izraelit."},
	{2, "2 Kaloni në Kalneh dhe shikoni, që andej shkoni në Hamathin e madh, pastaj zbrisni në Gathin e Filistejve. A janë vallë ato më të mira nga këto mbretëri ose territori i tyre është më i madh nga ai juaji?"},
	{3, "3 Ju doni të largoni ditën e keqe, por e afroni selinë e dhunës."},
	{4, "4 Mjerë ata që rrinë shtrirë mbi shtretër prej fildishi, që shtrihen mbi divanet e tyre dhe hanë qengjat e kopesë dhe viçat që merren nga stalla."},
	{5, "5 Këndojnë me tingullin e harpës dhe ashtu si Davidi shpikin për vete vegla muzikore;"},
	{6, "6 pinë verë në kupa të gjëra dhe lyhen me vajrat më të mira, por nuk trishtohen për shkatërrimin e Jozefit."},
	{7, "7 Prandaj do të shkojnë në robëri në krye të të internuarve dhe ata që shtrihen mbi divanet në banketet do të hiqen."},
	{8, "8 Zoti, Zoti, është betuar për veten e tij, thotë Zoti, Perëndia i ushtrive: Unë nuk e shoh dot me sy madhështinë e Jakobit dhe i urrej pallatet e tij; prandaj do t'ia jap armikut në dorë qytetin me tërë ato që përmban."},
	{9, "9 Dhe do të ndodhë që, po të lënë dhjetë burra në një shtëpi, do të vdesin edhe ata."},
	{10, "10 Kur një i afërt do të vijë me atë që djeg kufomat për t'i marrë trupat dhe për t'i nxjerrë jashtë shtëpisë, do t'i thotë atij që ndodhet brenda në shtëpi: A ka të tjerë me ty?. Tjetri do të përgjigjet:  Jo. Dhe i pari do të thotë: Hesht,  sepse nuk duhet të përmendet emri i Zotit."},
	{11, "11 Sepse ja, Zoti urdhëron dhe e katandis shtëpinë e madhe në bajgë dhe të voglën në copëza."},
	{12, "12 Vallë, a rendin kuajt mbi shkëmbinjtë ose a lërohen ata me qe? Por ju e ktheni të drejtën në helm dhe frytin e drejtësisë në hidhërim,"},
	{13, "13 ju, që gëzoheni për Lo-debarin, ju që thoni: A nuk e kemi marrë për vete Karnaimin me forcën tonë?."},
	{14, "14 Sepse ja, o shtëpia e Izraelit, thotë Zoti, Perëndia i ushtrive, unë do të ngre kundër jush një komb, që do t'ju shtypë nga hyrja e Hamathit deri të përroi i Arabahut."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct sq7 poems[] = {
	{1, "1 Ja ç'më bëri të shoh Zoti, Zoti: ai formonte karkaleca kur fillonte të rritej bari i dytë; dhe ja, bari i dytë vinte mbas korrjes së mbretit."},
	{2, "2 Kur ato mbaruan së ngrëni barin e tokës, unë thashë: Zot, Zot, oh, na fal, pra. Si mund të rezistojë Jakobi, duke qenë se është i vogël?."},
	{3, "3 Zoti u pendua për këtë: Kjo nuk ka për të ndodhur, tha Zoti."},
	{4, "4 Ja ç'më bëri të shoh Zoti, Zoti: Zoti, Zoti shpalli se do mbronte çështjen e tij me zjarr; dhe zjarri gllabëroi humnerën e madhe dhe gllabëroi një pjesë të vendit."},
	{5, "5 Atëherë unë i thashë: Zoti, Zoti, oh, jepi fund, pra. Si mund të rezistojë Jakobi, duke qenë se është i vogël?."},
	{6, "6 Zoti u pendua për këtë: As kjo nuk ka për të ndodhur, tha Zoti, Zoti."},
	{7, "7 Ja ç'më bëri të shoh: Zoti rrinte drejt mbi një mur të ndërtuar me plumbçe dhe me një plumbçe në dorë."},
	{8, "8 Zoti më tha: Amos, çfarë shikon?. Unë iu përgjigja: Një plumbçe. Atëherë Zoti tha: Ja, unë po vendos një plumbçe në mes të popullit tim të Izraelit; nuk do ta fal më gjatë."},
	{9, "9 Vendet e larta të Isakut do të prishen dhe shenjtëroret e Izraelit do të shkatërrohen; unë do të ngrihem me shpatë kundër shtëpisë së Jeroboamit."},
	{10, "10 Atëherë Amatsiahu, prifti i Bethelit, i çoi fjalë Jeroboamit, mbretit të Izraelit: Amosi komploton kundër teje në mes të shtëpisë së Izraelit; vendi nuk është në gjendje të durojë tërë fjalët e tij."},
	{11, "11 Në fakt Amosi ka thënë kështu: Jeroboami do të vdesë nga shpata dhe Izraeli do të internohet me siguri larg vendit të tij."},
	{12, "12 Amatsiahu i tha Amosit: Shikues, shko, ik në vendin e Judës; atje ke për të ngrënë bukë dhe atje do të profetizosh;"},
	{13, "13 por mos profetizo më në Bethel, sepse është shenjtërorja e mbretit dhe selia mbretërore."},
	{14, "14 Atëherë Amosi u përgjigj dhe i tha Amatsiahut: Unë nuk isha profet as bir profeti, por isha bari dhe rrisja fiq egjipti."},
	{15, "15 Zoti më mori pas kopesë dhe Zoti më tha: Shko, profetizoi popullit tim të Izraelit."},
	{16, "16 Prandaj tani dëgjo fjalën e Zotit: Ti po thua: Mos profetizo kundër Izraelit dhe mos fol më kundër shtëpisë së Isakut."},
	{17, "17 Prandaj kështu flet Zoti: Gruaja jote do të kurvërohet në qytet, bijtë dhe bijat e tu do të vriten nga shpata dhe vendi yt do të ndahet me litar; ti do të vdesësh në tokë të papastër dhe Izraeli patjetër do të internohet larg vendit të tij."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct sq8 poems[] = {
	{1, "1 Ja ç'më bëri të shoh Zoti, Zoti: ishte një shportë me fruta vere."},
	{2, "2 Ai më tha: Amos, çfarë po shikon?. Unë u përgjigja: Një shportë me fruta vere. Zoti më tha: Erdhi fundi për popullin tim të Izraelit; nuk do ta fal më gjatë."},
	{3, "3 Atë ditë këngët e tempullit do të bëhen vajtime, thotë Zoti, Zoti. Do të ketë kudo shumë kufoma; do t'i hedhin jashtë në heshtje."},
	{4, "4 Dëgjoni këtë, o ju që gllabëroni nevojtarin dhe shfarosni të varfërit e vendit,"},
	{5, "5 dhe thoni: Kur do të kalojë hëna e re që të mund të shesim grurin, dhe e shtuna që të fillojmë shitjen e grurit, duke e zvogëluar efan dhe duke rritur siklin, duke falsifikuar peshoret për të mashtruar,"},
	{6, "6 duke i blerë të varfrit me para, nevojtarin për një palë sandale dhe duke shitur edhe skarcitetet e grurit?."},
	{7, "7 Zoti është betuar për krenarinë e Jakobit: Nuk do të harroj asnjë nga veprat e tyre."},
	{8, "8 A nuk do të dridhet vallë vendi për këtë dhe nuk do të jenë në zi tërë banorët e tij? Do të ngrihet i tëri si Nili, do të trazohet dhe do të ulet si lumi i Egjiptit."},
	{9, "9 Atë ditë do të ndodhë, thotë Zoti, Zoti, që unë do ta bëj diellin të perëndojë në mesditë dhe do ta errësoj tokën ditën."},
	{10, "10 Do t'i shndërroj festat tuaja në zi dhe të gjitha këngët tuaja në vajtime; do të bëj që secili të vishet me thes dhe do ta bëj të shogët çdo kokë. Do ta bëj si një zi për një bir të vetëm dhe fundi i tij do të jetë një ditë trishtimi."},
	{11, "11 Ja, do të vijnë ditët, thotë Zoti, Zoti, gjatë të cilave unë do të dërgoj urinë në vend, jo uri për bukë dhe etje për ujë, por më tepër për të dëgjuar fjalët e Zotit."},
	{12, "12 Ata do të shkojnë duke u endur nga një det në tjetrin, nga veriu në lindje, do të rendin sa andej dhe këtej në kërkim të fjalës të Zotit, por nuk do ta gjejnë."},
	{13, "13 Atë ditë vajzat e bukura dhe djemtë e zgjedhur do të ligështohen nga etja."},
	{14, "14 Ata që betohen për mëkatin e Samarisë dhe thonë: Ashtu si Perëndia yt rron, o Dan, dhe: Si rron Beer-Sheba, do të rrëzohen dhe nuk do të çohen më."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view9() {
struct sq9 poems[] = {
	{1, "1 Unë pashë Zotin që rrinte më këmbë pranë altarit dhe tha: Goditi kapitelet, u shkundshin portat, dhe copëtoji mbi kokat e tyre. Unë do t'i vras pastaj ata që kanë mbetur me shpatë. Asnjë nga ata"},
	{2, "2 Edhe sikur të depërtojnë në Sheol, dora ime do t'i shkëpusë që andej; edhe sikur të ngjiten në qiell, unë do t'i tërheq poshtë që andej."},
	{3, "3 Edhe sikur të fshiheshin në majë të Karmelit, unë do t'i gjej dhe do t'i marr; edhe sikur t'i fshiheshin shikimit tim në fund të detit, atje do të urdhëroj gjarpërin t'i kafshojë;"},
	{4, "4 edhe sikur të shkonin në robëri para armiqve të tyre, atje do të urdhëroj shpatën t'i vrasë. Unë do të ngul sytë e mi mbi ta për të keqen dhe jo për të mirën."},
	{5, "5 Zoti, Zoti i ushtrive, është ai që prek tokën dhe ajo shkrihet, dhe tërë banorët e saj mbajnë zi; ajo ngrihet e tëra si Nili dhe ulet si lumi i Egjiptit."},
	{6, "6 Éshtë ai që ndërton në qiejt dhomat e tij të sipërme dhe ka vënë mbi tokë themelet e kupës së tij qiellore; ai thërret ujërat e detit dhe i derdh mbi faqen e dheut; emri i tij është Zoti."},
	{7, "7 A nuk jeni për mua si bijtë e Etiopasve, o bij të Izraelit?, thotë Zoti. A nuk e nxora unë Izraelin nga vendi i Egjiptit, Filistejtë nga Kaftori dhe Sirët nga Kiri?"},
	{8, "8 Ja sytë e Zotit, Zotit, janë mbi mbretërinë mëkatare; unë do ta shfaros nga faqja e dheut, por nuk do ta shfaros krejt shtëpinë e Jakobit, thotë Zoti."},
	{9, "9 Sepse ja, unë do të jap urdhrin dhe do ta shosh shtëpinë e Izraelit midis gjithë kombeve, ashtu si bëhet me shoshën, por në tokë nuk do të bjerë as kokrra më e vogël e grurit."},
	{10, "10 Tërë mëkatarët e popullit tim do të vdesin nga shpata, ata që thonë: Gjëma nuk do të afrohet as ka për të arritur deri te ne."},
	{11, "11 Atë ditë do të ngre përsëri tabernakullin e Davidit që ka rënë, do të ndreq të çarat e tij dhe do të ngre rrënojat e tij, dhe do ta rindërtoj si në ditët e lashta,"},
	{12, "12 më qëllim që të zotërojnë kusurin e Edomit dhe tërë kombet ku i bëjnë thirrje emrit tim, thotë Zoti që do ta bëjë këtë."},
	{13, "13 Ja, ditët po vijnë, thotë Zoti, kur ai që lëron do t'i afrohet atij që korr dhe ai që shtrydh rrushin atij që hedh farën; atëherë malet do të kullojnë musht, që do të rrjedhë poshtë nëpër kodra."},
	{14, "14 Do ta kthej nga robëria popullin tim të Izraelit, dhe ata do të rindërtojnë qytetet e shkretuara dhe do të banojnë në to, do të mbjellin vreshta dhe do të pijnë verën e tyre, do të punojnë kopshtet dhe do të hanë frytet e tyre."},
	{15, "15 Unë do t'i mbjell në tokën e tyre dhe nuk do të çrrënjosen kurrë më nga toka që u kam dhënë atyre, thotë Zoti, Perëndia yt."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};