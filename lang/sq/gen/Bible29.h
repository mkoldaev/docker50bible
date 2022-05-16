#include <map>
#include <string>
class Bible29
{
	struct sq1	{ int val; const char *msg; };
	struct sq2	{ int val; const char *msg; };
	struct sq3	{ int val; const char *msg; };
public:
static void view1() {
struct sq1 poems[] = {
	{1, "1 Fjala e Zotit që iu drejtua Joelit, birit të Pethuelit."},
	{2, "2 Dëgjoni këtë, o pleq, dëgjoni, ju të gjithë banorë të vendit. A ka ndodhur vallë një gjë e tillë në ditët tuaja apo në ditët e etërve tuaj?"},
	{3, "3 Tregouani bijve tuaj, dhe bijtë tuaj bijve të tyre, dhe bijtë e tyre brezit tjetër."},
	{4, "4 Atë që la krimbi e hëngri karkaleci, atë që la karkaleci e hëngri larva e karkalecit, atë që la larva e hëngri bulkthi."},
	{5, "5 Zgjohuni, o të dehur, dhe qani; vajtoni ju të gjithë, që pini verë, për mushtin që ju hoqën nga goja."},
	{6, "6 Sepse një komb i fortë dhe i panumërt ka dalë kundër vendit tim. Dhëmbët e tij janë dhëmbë luani, dhe ka stërdhëmbë luaneshe."},
	{7, "7 Ka shkatërruar hardhinë time, e ka bërë copë-copë fikun tim, ia ka hequr lëvoren krejt dhe e ka hedhur tutje; degët e tij kanë mbetur të bardha."},
	{8, "8 Vajto si një virgjëreshë e veshur me thes për dhëndrrin e rinisë së saj."},
	{9, "9 Nga shtëpia e Zotit janë zhdukur ofertat e ushqimit dhe libacionet; priftërinjtë, ministrat e Zotit, pikëllohen."},
	{10, "10 Fusha është shkretuar, vendi është në zi, sepse gruri u prish, mushti u tha dhe vaji humbi."},
	{11, "11 Pikëllohuni, o bujq, vajtoni, o vreshtarë, për grurin dhe për elbin, sepse të korrat e arave humbën."},
	{12, "12 Hardhia u tha, fiku u tha, shega, hurma, molla dhe tërë drurët e fushës u thanë; nuk ka gëzim midis bijve të njerëzve."},
	{13, "13 Ngjeshuni me thes dhe mbani zi, o priftërinj, vajtoni, ministra të altarit. Ejani, rrini tërë natën të veshur me thasë, o ministra të Perëndisë tim, sepse oferta e ushqimit dhe libacioni u zhduk nga shtëpia e Perëndisë tuaj."},
	{14, "14 Shpallni agjërim, thërrisni një kuvend solemn. Mblidhni pleqtë dhe tërë banorët e vendit në shtëpinë e Zotit, Perëndisë tuaj, dhe i klithni Zotit."},
	{15, "15 Mjerë ajo ditë! Sepse dita e Zotit është e afërt; po, do të vijë si një shkatërrim nga i Plotfuqishmi."},
	{16, "16 A nuk u hoq vallë ushqimi para syve tona, dhe gëzimi dhe hareja nga shtëpia e Perëndisë tonë?"},
	{17, "17 Farërat po thahen nën plisa, depot janë katandisur të shkreta, hambaret e grurit po rrënohen, sepse gruri u tha."},
	{18, "18 Sa vuajnë kafshët! Kopetë e gjedhëve sillen më kot, sepse nuk ka kullotë për ta; lëngojnë edhe kopetë e deleve."},
	{19, "19 Te ty, o Zot, unë këlthas, sepse një zjarr ka gllabëruar të gjitha tokat për kullotë dhe një flakë ka djegur të gjithë drurët e fushës."},
	{20, "20 Edhe kafshët e fushave i ngrenë sytë drejt teje, sepse rrjedhjat e ujit janë tharë dhe zjarri ka gllabëruar tokat për kullotë."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct sq2 poems[] = {
	{1, "1 I bini borisë në Sion dhe jepni kushtrimin në malin tim të shenjtë! Le të dridhen të gjithë banorët e vendit, sepse dita e Zotit po vjen, është e afërt,"},
	{2, "2 po vjen dita e territ dhe e errësirës së dendur, ditë resh dhe mjegulle. Ashtu si përhapet agimi mbi malet, po vjen një popull i shumtë dhe i fuqishëm, të cilit kurrkush nuk i ka ngjarë më parë dhe  as nuk do të ketë më kurrë për shumë breza që  do të vijnë."},
	{3, "3 Para tij një zjarr po gllabëron dhe pas tij një flakë po djeg. Përpara tij vendi është si kopshti i Edenit; dhe pas tij është si një shkretëtirë e mjeruar; po, asgjë nuk i shpëton atij."},
	{4, "4 Pamja e tyre është si pamja e kuajve, dhe rendin si kuaj të shpejtë."},
	{5, "5 Ata hidhen mbi majat e maleve me zhurmë qerresh, si brambullima e flakës së zjarrit që djeg kallamishtet, si një popull i fortë që është rreshtuar për betejë."},
	{6, "6 Përpara tyre popujt përpëliten nga dhembja, çdo fytyrë zbehet."},
	{7, "7 Rendin si njerëz trima, ngjiten mbi muret si luftëtarë; secili ndjek rrugën e vet pa devijuar prej saj."},
	{8, "8 Askush nuk e shtyn fqinjin e tij, secili ndjek shtegun e vet; sulen në mes të shigjetave, por nuk plagosen."},
	{9, "9 I bien qytetit kryq e tërthor, rendin mbi muret, ngjiten në shtëpi, hyjnë në to nga dritaret si vjedhës."},
	{10, "10 Para tyre dridhet toka, dridhen qiejt, dielli dhe hëna erren dhe yjet humbin shkëlqimin e tyre."},
	{11, "11 Zoti bën që t'i dëgjohet zëri para ushtrisë së tij, sepse fusha e tij është shumë madhe dhe zbatuesi i fjalës së tij është i fuqishëm. Po, dita e Zotit është e madhe dhe fort e tmerrshme; kush mund ta durojë?"},
	{12, "12 Prandaj tani, thotë Zoti, kthehuni tek unë me gjithë zemrën tuaj, me agjërime, me lot dhe me vajtime."},
	{13, "13 Grisni zemrën tuaj dhe jo rrobat tuaja dhe kthehuni tek Zoti, Perëndia juaj, sepse ai është i mëshirshëm dhe plot dhemshuri, i ngadalshëm në zemërim dhe me shumë dashamirësi, dhe pendohet për të keqen që ka dërguar."},
	{14, "14 Kush e di, ndoshta kthehet dhe pendohet, dhe lë pas tij një bekim, një ofertë ushqimesh dhe një libacion për Zotin, Perëndinë tuaj?"},
	{15, "15 I bini borisë në Sion, shpallni një agjërim, thërrisni një kuvend solemn."},
	{16, "16 Mblidhni popullin, shenjtëroni kuvendin, mblidhni pleqtë, mblidhni fëmijët dhe foshnjat e gjirit. Të dalë dhëndrri nga dhoma e tij dhe nusja nga dhoma e saj e nusërisë."},
	{17, "17 Midis portikut dhe altarit le të qajnë priftërinjtë, ministrat e Zotit, dhe le të thonë: Fale, o Zot, popullin tënd dhe mos ia lër trashëgiminë tënde turpit apo nënshtrimit nga ana e kombeve. Sepse  do të thonë midis popujve: Ku është Perëndia  i tyre?."},
	{18, "18 Atëherë Zoti u bë xheloz për vendin e tij dhe i erdhi keq për popullin e tij."},
	{19, "19 Zoti do të përgjigjet dhe do t'i thotë popullit të tij: Ja, unë do t'ju dërgoj grurë, musht dhe vaj, do t'i keni me bollëk dhe nuk do të jeni më turpi i kombeve."},
	{20, "20 Do të largoj nga ju ushtrinë e veriut dhe do ta çoj në një tokë të zhuritur dhe të shkretë; pararojën e saj drejt detit lindor dhe praparojën e saj drejt detit perëndimor; era e keqe e saj do të përhapet,  duhma e saj do të përhapet, sepse ka  bërë gjëra të mëdha."},
	{21, "21 Mos kij frikë, o tokë, gëzohu, ngazëllohu, sepse Zoti ka bërë gjëra të mëdha."},
	{22, "22 Mos kini frikë, o kafshë të fushave, sepse tokat për kullotë do të gjelbërojnë, drurët mbajnë frytin e tyre, fiku dhe hardhia japin tërë bollëkun e tyre."},
	{23, "23 Prandaj gëzohuni, o bij të Sionit, dhe kënaquni, ngazëllohuni tek Zoti, Perëndia juaj, sepse ju ka dhënë shiun e parë me drejtësi, dhe do të bëjë të bjerë për ju shiun, shiun e parë dhe shiun e fundit në muajin e parë."},
	{24, "24 Lëmenjtë do të jenë plot me grurë dhe në butet do të grafullojë mushti dhe vaji;"},
	{25, "25 kështu do t'ju kompensoj për të korrat që kanë ngrënë karkaleci, larva e karkalecit, bulkthi dhe krimbi, ushtria ime e madhe që kisha dërguar kundër jush."},
	{26, "26 Dhe ju do të hani me bollëk dhe do të ngopeni, dhe do të lëvdoni emrin e Zotit, Perëndisë tuaj, që për ju ka bërë mrekulli, dhe popullin tim nuk do ta mbulojë më turpi."},
	{27, "27 Atëherë ju do të pranoni që unë jam në mes të Izraelit dhe që jam Zoti, Perëndia juaj, dhe nuk ka asnjë tjetër; popullin tim nuk do ta mbulojë më turpi."},
	{28, "28 Mbas kësaj do të ndodhë që unë do të përhap Frymën tim mbi çdo mish; bijtë tuaj dhe bijat tuaja do të profetizojnë, pleqtë tuaj do të shohin ëndrra, të rinjtë tuaj do të kenë vegime."},
	{29, "29 Në ato ditë do të përhap Frymën time edhe mbi shërbëtorët dhe shërbëtoret."},
	{30, "30 Do të bëj mrekulli në qiejt dhe mbi tokë: gjak, zjarr dhe shtëllunga tymi."},
	{31, "31 Dielli do të shndërrohet në terr dhe hëna në gjak, para se të vijë dita e madhe dhe e tmerrshme e Zotit."},
	{32, "32 Dhe do të ndodhë që kushdo që do t'i drejtohet emrit të Zotit do të shpëtojë, sepse në malin Sion dhe në Jeruzalem do të ketë shpëtim, siç e ka thënë Zoti, edhe për ata që kanë mbetur gjallë dhe që Zoti do t'i thërrasë."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct sq3 poems[] = {
	{1, "1 Sepse ja, në ato ditë dhe në atë kohë, kur do të bëj që të kthehen nga robëria ata të Judës dhe të Jeruzalemit,"},
	{2, "2 do të mbledh tërë kombet dhe do t'i bëj të zbresin në luginën e Jozafatit, dhe atje do të zbatoj gjykimin tim mbi ta, për Izraelin, popullin tim dhe trashëgiminë time, që e kanë shpërndarë midis kombeve, duke e ndarë kështu vendin tim."},
	{3, "3 Kanë hedhur shortin mbi popullin tim, kanë dhënë një djalë në këmbim të një prostitute dhe kanë shitur një vajzë në këmbim të verës, që të mund të pinin."},
	{4, "4 Përveç kësaj çfarë jeni ju për mua, Tiro dhe Sidoni, dhe ju, gjithë krahinat e Filistisë? Mos doni vallë të hakmerreni me mua për ndonjë gjë që kam bërë? Por në rast se hakmerreni, do të bëj që të  bjerë shpejt dhe pa ngurrim mbi kokën tuaj  ligësia që keni bërë."},
	{5, "5 Sepse ju keni marrë argjendin dhe arin tim dhe keni çuar në tempujt tuaj pjesën më të mirë të sendeve të mia të çmuara,"},
	{6, "6 dhe ua keni shitur bijtë e Judës dhe të Jeruzalemit bijve të Javanitëve, për t'i larguar nga vendi i tyre."},
	{7, "7 Ja, unë do t'i bëj të zgjohen nga vendi ku i keni shitur dhe do të bëj që të bjerë mbi kokën tuaj ajo që keni bërë."},
	{8, "8 Do t'i shes bijtë tuaj dhe bijat tuaja në duart e bijve të Judës, që do t'ua shesin Sabejve, një komb i largët, sepse Zoti ka folur."},
	{9, "9 Shpallni këtë midis kombeve: Pregatitni luftën, zgjoni njerëzit trima, le të afrohen, le të dalin gjithë luftëtarët!"},
	{10, "10 Farkëtoni shpata me ploret tuaj dhe ushta me drapërinjtë tuaj. I dobëti le të thotë: Jam i Fortë!."},
	{11, "11 Nxitoni dhe ejani, kombe rreth e rrotull, dhe mblidhuni! O Zot, bëj që të zbresin atje njerëzit e tu trima!"},
	{12, "12 Le të ngrihen dhe të dalin kombet në luginën e Jozafatit, sepse atje unë do të ulem për të gjykuar të gjitha kombet që janë përreth."},
	{13, "13 Merrni në dorë draprinjtë, sepse të korrat janë gati. Ejani, zbrisni, sepse trokulli është plot, butet grafullojnë, sepse e madhe është ligësia e tyre."},
	{14, "14 Turma pas turmash në Luginën e vendimit. Sepse dita e Zotit është e afërt, në Luginën e vendimit."},
	{15, "15 Dielli dhe hëna po erren dhe yjet po humbin shkëlqimin e tyre."},
	{16, "16 Zoti do të vrumbullojë nga Sioni dhe do të bëjë që t'i dëgjohet zëri nga Jeruzalemi, aq sa qiejt dhe toka do të dridhen. Por Zoti do të jetë një strehë për popullin e tij dhe një fortesë për bijtë e Izraelit."},
	{17, "17 Atëherë ju do të pranoni që unë jam Zoti, Perëndia juaj, që banon në Sion, mali im i shenjtë. Kështu Jeruzalemi do të jetë i shenjtë dhe të huajt nuk do të kalojnë më andej."},
	{18, "18 Atë ditë do të ndodhë që malet të pikojnë musht, qumështi do të rrjedhë nga kodrat dhe uji do të rrjedhë në të gjitha rrëketë e Judës. Nga shtëpia e Zotit do të dalë një burim, që do të ujitë luginën e Sitimit."},
	{19, "19 Egjipti do të bëhet shkreti dhe Edomi një shkretëtirë e mjeruar për shkak të dhunës kundër bijve të Judës, sepse kanë derdhur gjak të pafajshëm në vendin e tyre."},
	{20, "20 Por Juda do të mbetet përjetë, edhe Jeruzalemi brez pas brezi."},
	{21, "21 Do t'i pastroj nga gjaku i tyre i derdhur, nga i cili nuk i kisha pastruar, dhe Zoti do të banojë në Sion."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};