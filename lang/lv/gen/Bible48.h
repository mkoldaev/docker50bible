#include <map>
#include <string>
class Bible48
{
	struct lv1	{ int val; const char *msg; };
	struct lv2	{ int val; const char *msg; };
	struct lv3	{ int val; const char *msg; };
	struct lv4	{ int val; const char *msg; };
	struct lv5	{ int val; const char *msg; };
	struct lv6	{ int val; const char *msg; };
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Pāvils, apustulis, ne cilvēku sūtīts, nedz kāda cilvēka, bet Jēzus Kristus iecelts un Dieva Tēva, kas Viņu uzmodinājis no miroņiem, "},
	{2, "2 un visi brāļi, kas pie manis ir, Galatijas draudzēm: "},
	{3, "3 žēlastība jums un miers no Dieva, mūsu Tēva, un Kunga Jēzus Kristus, "},
	{4, "4 kas pats Sevi ir nodevis par mūsu grēkiem, lai mūs izglābtu no šīs tagadējās ļaunās pasaules pēc Dieva, mūsu Tēva, prāta; "},
	{5, "5 Viņam lai ir gods mūžu mūžos! Āmen! "},
	{6, "6 Es brīnos, ka jūs tik drīz novēršaties no tā, kas jūs aicinājis Kristus žēlastībā, un piegriežaties citam evaņģēlijam. "},
	{7, "7 Un tomēr cita nav. Ir tikai kādi, kas jūs sajauc un grib pārgrozīt Kristus evaņģēliju. "},
	{8, "8 Bet, ja arī mēs vai kāds eņģelis no debesīm jums sludinātu citu evaņģēliju nekā to, ko esam jums pasludinājuši, lāsts pār to! "},
	{9, "9 Kā jums jau agrāk esam sacījuši, tā arī tagad vēlreiz saku: ja kāds jums sludina citu evaņģēliju nekā to, ko jūs esat saņēmuši, lāsts pār to! "},
	{10, "10 Jo vai tad es tagad runāju cilvēkiem pa prātam vai Dievam? Jeb vai es cenšos cilvēkiem patikt? Ja es vēl cilvēkiem censtos patikt, tad es nebūtu Kristus kalps. "},
	{11, "11 Jo es jums apliecinu, brāļi: tas evaņģēlijs, kuru es jums esmu pasludinājis, nav cilvēku izdomāts. "},
	{12, "12 Es to arī neesmu saņēmis no kāda cilvēka, nedz kāds man to ir mācījis, bet Jēzus Kristus man to ir atklājis. "},
	{13, "13 Jo jūs esat dzirdējuši par manu kādreizējo dzīvi jūdu ticībā, kā es pārlieku vajāju Dieva draudzi un to postīju "},
	{14, "14 un ka es pārspēju jūdu ticībā daudzus savus biedrus savā tautā, būdams vēl dedzīgāks tēvu paražu aizstāvis. "},
	{15, "15 Bet, kad Dievam, kas mani no mātes miesām izredzējis un Savā žēlastībā aicinājis, labpatika "},
	{16, "16 Savu Dēlu manī atklāt, lai es prieka vēsti par Viņu nestu pagāniem, tad es tūdaļ negriezos pēc padoma pie miesas un asinīm, "},
	{17, "17 nedz nogāju uz Jeruzālemi pie tiem, kas priekš manis bija apustuļi, bet aizgāju uz Arābiju un atkal atgriezos atpakaļ Damaskā. "},
	{18, "18 Tad, trīs gadus vēlāk, es nogāju uz Jeruzālemi iepazīties ar Kēfu (Pēteri) un paliku pie viņa piecpadsmit dienas. "},
	{19, "19 Kādu citu apustuli es netiku redzējis, bet tikai Jēkabu, Tā Kunga brāli. "},
	{20, "20 Bet, ko es jums rakstu, redzi, Dievs ir mans liecinieks, tie nav meli. "},
	{21, "21 Pēc tam es nonācu Sīrijas un Kilikijas apgabalos. "},
	{22, "22 Bet Jūdejas draudzes, kas ir Kristū, mani vaigā nepazina. "},
	{23, "23 Tikai to viņas dzirdēja: tas, kas mūs citkārt vajāja, sludina tagad to ticību, ko viņš senāk centās iznīcināt. "},
	{24, "24 Un tie slavēja manis dēļ Dievu."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lv2 poems[] = {
	{1, "1 Pēc tam, pēc četrpadsmit gadiem, es atkal nogāju uz Jeruzālemi kopā ar Barnabu, līdzi ņemdams arī Titu; "},
	{2, "2 bet es nogāju, sekodams atklāsmei, un cēlu viņiem priekšā to evaņģēliju, ko es sludinu pagāniem, bet sevišķi tiem, ko uzskatīja par vadoņiem, lai manas gaitas nav vai nebūtu bijušas veltīgas. "},
	{3, "3 Bet pat mans pavadonis Tits, grieķis, netika spiests apgraizīties. "},
	{4, "4 Bet no malas ievesto viltus brāļu dēļ, kas bija iezagušies novērot mūsu brīvību, kas mums dota Kristū Jēzū, ar nolūku mūs darīt atkal par kalpiem, - "},
	{5, "5 viņiem mēs ne acumirkli neesam piekāpušies, lai evaņģēlija patiesība paliktu pie jums. "},
	{6, "6 Bet tie, kas bija sevišķi cienīti - kādi tie reiz bijuši, tas man ir vienalga, Dievs neuzlūko cilvēka vaigu, - man jau šie cienītie nav nekādas saistības uzlikuši, "},
	{7, "7 bet turpretim, redzēdami, ka man ir uzticēta evaņģēlija sludināšana neapgraizītajiem, tāpat kā Pēterim apgraizītajiem - "},
	{8, "8 jo Tas, kas Pēterim bija devis spēku apustuļa darbam apgraizīto starpā, Tas arī man bija devis spēku pagānu starpā, - "},
	{9, "9 vērodami to žēlastību, kas man dota, Jēkabs, Kēfa un Jānis, kurus uzskatīja par draudzes balstiem, sniedza man un Barnabam roku kopējam darbam, lai mēs ietu pie pagāniem, bet šie pie apgraizītajiem. "},
	{10, "10 Tikai lai mēs pieminētu nabagus, to es arī esmu centies darīt. "},
	{11, "11 Bet, kad Pēteris nonāca Antiohijā, tad viņam atklāti nostājos pretim, jo viņš bija kritis vainā. "},
	{12, "12 Proti, pirms kādi no Jēkaba ļaudīm bija nākuši, viņš ēda kopā ar pagāniem; bet, kad šie atnāca, tad viņš atrāvās un nošķīrās, bīdamies no apgraizītajiem. "},
	{13, "13 Un līdz ar viņu liekuļoja arī pārējie jūdi, un arī Barnabu viņu liekulība aizrāva līdzi. "},
	{14, "14 Bet, kad es redzēju, ka tie nedara pareizi pēc evaņģēlija patiesības, es sacīju Pēterim visu priekšā: ja tu, jūds būdams, dzīvo pēc pagānu un ne pēc jūdu paražām, kā tu gribi piespiest pagānus dzīvot pēc jūdu dzīves veida? "},
	{15, "15 Mēs - dzimuši jūdi un ne pagānu grēcinieki. "},
	{16, "16 Zinādami, ka neviens cilvēks netop taisnots pēc bauslības darbiem, bet ticībā Jēzum Kristum, arī mēs kļuvām ticīgi Kristum Jēzum, lai taptu taisnoti Kristus ticībā un ne pēc bauslības darbiem, jo pēc bauslības darbiem neviens cilvēks nekļūst taisnots. "},
	{17, "17 Bet, ja izrādās, ka mēs, kas cenšamies tapt taisnoti iekš Kristus, paši esam grēcinieki, vai tad Kristus kalpo grēkam? Nekādā ziņā ne. "},
	{18, "18 Proti, kad es to, ko esmu noārdījis, atkal uzceļu, es kļūstu par pārkāpēju. "},
	{19, "19 Jo es bauslībā bauslībai esmu nomiris, lai dzīvotu Dievam. "},
	{20, "20 Līdz ar Kristu esmu krustā sists, bet nu nedzīvoju es, bet manī dzīvo Kristus; bet, cik es tagad dzīvoju miesā, es dzīvoju ticībā uz Dieva Dēlu, kas mani ir mīlējis un nodevies par mani. "},
	{21, "21 Es nenoliedzu Dieva žēlastību; jo, ja bauslībā ir taisnība, tad Kristus velti ir miris."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct lv3 poems[] = {
	{1, "1 Jūs, neprātīgie galatieši, kas jūs apmājis, jūs, kam acu priekšā ir tēlots Jēzus Kristus, krustā sistais? "},
	{2, "2 To vien vēlos no jums dabūt zināt: vai jūs Garu esat saņēmuši ar bauslības darbiem vai ar ticības sludināšanu? "},
	{3, "3 Vai jūs esat tik neprātīgi? Garā iesākuši, jūs tagad miesā gribat pabeigt? "},
	{4, "4 Vai tik lielas lietas jūs velti esat piedzīvojuši? Taču ne velti! "},
	{5, "5 Vai tad nu Tas, kas jums sniedz Garu un jūsos dara brīnumus, to dara ar bauslības darbiem vai ar ticības sludināšanu? "},
	{6, "6 Jau Ābrahāms ticēja Dievam, un to viņam pielīdzināja par taisnību. "},
	{7, "7 Tātad atzīstiet, ka tie, kas tic, ir Ābrahāma bērni. "},
	{8, "8 Bet raksti, paredzēdami, ka Dievs pēc ticības taisno pagānus, ir Ābrahāmam iepriekš pasludinājuši prieka vēsti: tevī taps svētītas visas tautas. - "},
	{9, "9 Tātad tie, kas tic, tiek svētīti līdz ar ticīgo Ābrahāmu. "},
	{10, "10 Proti, visi, kas dzīvo bauslības darbos, ir zem lāsta; jo ir rakstīts: nolādēts ir ikkatrs, kas netur un nedara visu to, kas ir rakstīts bauslības grāmatā. - "},
	{11, "11 Bet ir skaidrs, ka ar bauslību neviens netop taisnots Dieva priekšā, jo ticībā taisnais dzīvos. "},
	{12, "12 Bauslībai nav daļas ar ticību, bet kas to ir turējis, tam tā dod dzīvību. "},
	{13, "13 Kristus ir mūs atpircis no bauslības lāsta, mūsu labā kļūdams par lāstu, jo ir rakstīts: nolādēts ir ikkatrs, kas karājas pie koka, - "},
	{14, "14 lai Ābrahāma svētība nāktu pār pagāniem Kristū Jēzū, tā ka ticībā mēs saņemam Gara apsolījumu. "},
	{15, "15 Brāļi, es runāju cilvēcīgi, arī cilvēka pēdējo gribu, kas stājusies spēkā, neviens neatceļ, nedz pieliek tai ko klāt. "},
	{16, "16 Ābrahāmam un viņa dzimumam ir doti apsolījumi. Nav rakstīts un dzimumiem, tas ir par daudziem, bet par vienu: un tavam dzimumam, proti, Kristum. "},
	{17, "17 Bet es saku to: Dieva jau sen spēkā nākušo gribas izpausmi neatceļ bauslība, kas dota četri simti trīsdesmit gadus vēlāk. Tā nevar iznīcināt apsolījumu. "},
	{18, "18 Jo, ja ar bauslību nāk mantojums, tad vairs ne ar apsolījumu, bet Ābrahāmam to Dievs ar Savu apsolījumu ir dāvinājis. "},
	{19, "19 Kāpēc tad ir dota bauslība? Pārkāpumu dēļ tā ir klāt pielikta - līdz nāktu dzimums, kam ir dots apsolījums, - eņģeļu dota tā, ar starpnieka roku uzrakstīta. "},
	{20, "20 Kur viens, tur nav starpnieka, bet Dievs ir viens vienīgs. "},
	{21, "21 Vai tad nu bauslība ir pret Dieva apsolījumiem? Nekādā ziņā ne. Jo, ja būtu dota bauslība, kas spēj dzīvu darīt, tad patiesi taisnība nāktu ar bauslību. "},
	{22, "22 Bet raksti ir it visu saslēguši grēkā, lai apsolījums taptu dots ticīgiem ticībā uz Jēzu Kristu. "},
	{23, "23 Bet, pirms nāca ticība, mēs bijām turēti ieslēgti bauslības važās, līdz parādītos ticība, kurai bija jānāk. "},
	{24, "24 Tātad bauslība līdz Kristum ir bijusi mūsu audzinātāja, lai mēs ticībā kļūtu taisnoti. "},
	{25, "25 Bet, kad ticība ir nākusi, tad audzinātājai nav vairs varas pār mums. "},
	{26, "26 Jūs jau visi ticēdami uz Jēzu Kristu esat Dieva bērni. "},
	{27, "27 Jo jūs visi, kas esat kristīti Kristus Vārdā, esat tērpušies Kristū. "},
	{28, "28 Tur nav ne jūda, ne grieķa, nav ne kalpa, nedz svabadā, tur nav ne vīra, nedz sievas, jo jūs visi esat viens Kristū Jēzū. "},
	{29, "29 Bet, kad jūs piederat Kristum, tad jūs esat Ābrahāma dzimums, mantinieki pēc apsolījuma."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct lv4 poems[] = {
	{1, "1 Bet es saku: kamēr mantinieks vēl nav pieaudzis, nav nekādas starpības starp viņu un kalpu, kaut arī visa manta viņam pieder. "},
	{2, "2 Bet viņš ir padots aizbildņiem un pārvaldniekiem līdz tēva nospriestam laikam. "},
	{3, "3 Tā arī mēs, kad nebijām pieauguši, bijām pasaules pirmspēku kalpībā. "},
	{4, "4 Bet, kad laiks bija piepildījies, tad Dievs sūtīja Savu Dēlu, dzimušu no sievas, noliktu zem bauslības, "},
	{5, "5 lai izpirktu tos, pār kuriem valdīja bauslība, ka mēs iegūtu bērnu tiesības. "},
	{6, "6 Bet, ka jūs esat bērni, to ir Dievs apliecinājis, sūtīdams Sava Dēla Garu jūsu sirdīs, kas sauc: Aba, Tēvs! "},
	{7, "7 Tātad tu vairs neesi kalps, bet bērns, bet, ja bērns, tad arī caur Dievu mantinieks. "},
	{8, "8 Gan toreiz jūs, Dievu nepazīdami, kalpojāt tiem, kas pēc būtības nav dievi. "},
	{9, "9 Bet tagad, kad jūs Dievu esat atzinuši vai, labāki sakot, kad Dievs jūs ir atzinis, kā tad jūs atkal atgriežaties pie nespēcīgajiem un nabadzīgajiem pirmspēkiem un tiem atkal no jauna gribat kalpot? "},
	{10, "10 Jūs cienījat dienas, mēnešus, gadus un laikus. "},
	{11, "11 Es bīstos, ka tik nebūtu velti pie jums strādājis. "},
	{12, "12 Topiet tādi kā es, jo es tapu tāds kā jūs, es jūs lūdzu, brāļi. Jūs man neesat darījuši nekā ļauna. "},
	{13, "13 Bet, kā jums zināms, es pirmoreiz, slims būdams, sludināju jums evaņģēliju. "},
	{14, "14 Un jūsu pārbaudījums, kas jums cēlās ar manu slimību, nenoveda pie nicināšanas, nedz riebuma, bet jūs uzņēmāt mani kā Dieva eņģeli, kā Kristu Jēzu. "},
	{15, "15 Kur tad nu paliek jūsu svētais prieks? Jo es varu jums apliecināt, ka jūs, ja būtu bijis iespējams, savas acis būtu izrāvuši un man atdevuši. "},
	{16, "16 Tātad es esmu tapis jūsu ienaidnieks, sacīdams jums patiesību. "},
	{17, "17 Ne labā nolūkā tie izrāda dedzību pret jums, bet tie grib jūs atšķirt, lai jūs dedzīgi pieķertos viņiem. "},
	{18, "18 Teicami ir iekaist par labu vienumēr un ne tikai tad, kad es esmu pie jums. "},
	{19, "19 Mani bērni, par kuriem es no jauna ciešu radību sāpes, līdz kamēr Kristus izveidotos jūsos; "},
	{20, "20 bet es gribētu tagad būt pie jums un runāt ar jums citādā balsī, jo man pietrūkst padoma, ko darīt ar jums. "},
	{21, "21 Sakiet man, jūs, kas gribat būt zem bauslības, vai jūs esat dzirdējuši, ko bauslība saka? "},
	{22, "22 Proti, ir rakstīts, ka Ābrahāmam piedzima divi dēli, viens no kalpones, otrs no svabadās. "},
	{23, "23 Bet tas, kas no kalpones, ir dabīgi dzimis, turpretim tas, kas no svabadās, pēc apsolījuma. "},
	{24, "24 Tas ir līdzībā teikts, jo tās ir tās abas derības: viena no Sinaja kalna, kas dzemdē kalpībai, tā ir Hagare. "},
	{25, "25 Bet Hagare ir Sinaja kalns Arābijā un atbilst tagadējai Jeruzālemei, jo tā ar saviem bērniem ir kalpu stāvoklī. "},
	{26, "26 Bet augšējā Jeruzāleme ir svabada, tā ir mūsu māte; "},
	{27, "27 jo ir rakstīts: priecājies, neauglīgā, kas nedzemdē, gavilē un sauc skaļi, kas necieti bērnu sāpes, jo daudz bērnu ir vientulei, vairāk nekā tai, kam ir vīrs. - "},
	{28, "28 Jūs, brāļi, esat apsolījuma bērni kā Īzāks. "},
	{29, "29 Bet, kā toreiz miesīgi dzimušais vajāja garīgi dzimušo, tā arī tagad. "},
	{30, "30 Bet ko saka raksti? Padzen kalponi un viņas dēlu! Jo kalpones dēlam nebūs mantot kopā ar svabadās dēlu. "},
	{31, "31 Tātad, brāļi, mēs neesam kalpones, bet svabadās bērni."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct lv5 poems[] = {
	{1, "1 Svabadībai Kristus mūs ir atsvabinājis. Tad nu stāviet stipri un neļaujieties atkal iejūgties kalpības jūgā! "},
	{2, "2 Redziet, es, Pāvils, saku jums: ja jūs tiekat apgraizīti, tad Kristus jums nekādā ziņā nepalīdzēs. "},
	{3, "3 No jauna es apliecinu katram cilvēkam, kas tiek apgraizīts, ka viņam jāizpilda visa bauslība. "},
	{4, "4 Jūs esat šķirti no Kristus, ja jūs bauslībā gribat tapt taisnoti, jūs esat žēlastību pazaudējuši. "},
	{5, "5 Mēs garā gaidām un ceram uz ticības pamata iegūt taisnību. "},
	{6, "6 Jo Kristū Jēzū nedz apgraizīšana ko spēj, nedz neapgraizīšana, bet ticība, kas darbojas mīlestībā. "},
	{7, "7 Jūs bijāt skaistā gājienā, kas jūs ir kavējis paklausīt patiesībai? "},
	{8, "8 Šis mudinājums nenāk no Tā, kas jūs aicina. "},
	{9, "9 Nedaudz rauga saraudzē visu mīklu. "},
	{10, "10 Es paļaujos uz jums ticībā Tam Kungam, ka jūs nepieņemsit svešas domas, bet tas, kas jūs sajauc, saņems sodu, lai būtu kas būdams. "},
	{11, "11 Bet, ja es, brāļi, sludinu apgraizīšanu, kamdēļ tad es vēl topu vajāts? Tad jau Kristus krusta piedauzība ir beigusies. "},
	{12, "12 Kaut jel tie sagraizītos, kas jūs musina! "},
	{13, "13 Jo jūs, brāļi, esat svabadībai aicināti. Tik ne tādai svabadībai, kas dod vaļu miesai, turpretim kalpojiet cits citam mīlestībā! "},
	{14, "14 Jo visa bauslība ir vienā vārdā izpildīta, proti, tanī: tev būs savu tuvāku mīlēt kā sevi pašu. - "},
	{15, "15 Bet, ja jūs savā starpā kožaties un ēdaties, tad pielūkojiet, ka jūs cits citu neaprijat! "},
	{16, "16 Bet es saku: staigājiet Garā, tad jūs miesas kārību savaldīsit. "},
	{17, "17 Jo miesas tieksmes ir pret Garu, bet Gara tieksmes ir pret miesu, jo šie divi viens otram stāv pretī, ka jūs nedarāt to, ko gribat. "},
	{18, "18 Bet, ja Gars jūs vada, tad jūs vairs neesat padoti bauslībai. "},
	{19, "19 Bet zināmi ir miesas darbi: tie ir netiklība, nešķīstība, izlaidība, "},
	{20, "20 elku kalpība, buršana, ienaids, strīdi, nenovīdība, dusmas, ķildas, šķelšanās, ķecerība, "},
	{21, "21 skaudība, dzeršana, dzīrošana un tamlīdzīgas lietas, par kurām es iepriekš saku, kā jau esmu senāk sacījis: tie, kas tādas lietas dara, nemantos Dieva valstību. "},
	{22, "22 Bet Gara auglis ir: mīlestība, prieks, miers, pacietība, laipnība, labprātība, uzticamība, lēnprātība, atturība. "},
	{23, "23 Pret tādām lietām nav bauslības. "},
	{24, "24 Bet tie, kas Kristum pieder, ir savu miesu krustā situši līdz ar kaislībām un iekārošanām. "},
	{25, "25 Ja dzīvojam Garā, tad arī staigāsim Garā. "},
	{26, "26 Nedzīsimies pēc tukša goda, cits citu izaicinādami, cits citu apskauzdami."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct lv6 poems[] = {
	{1, "1 Brāļi, ja arī kāds cilvēks ir pienākts kādā pārkāpumā, tad jūs, kas esat garīgi, atgrieziet tādu uz pareiza ceļa ar lēnprātīgu garu, un lūkojies pats uz sevi, ka arī tu nekrīti kārdināšanā. "},
	{2, "2 Nesiet cits cita nastas, tā jūs piepildīsit Kristus likumu. "},
	{3, "3 Jo, ja kāds domā, ka viņš kas esot, nebūdams nekas, tas pieviļ pats sevi. "},
	{4, "4 Bet ikviens lai pārbauda pats savus darbus, tad viņam pašam būs prieks un viņš nelielīsies citu priekšā. "},
	{5, "5 Jo ikkatram jānes sava paša nasta. "},
	{6, "6 Bet tas, kas mācās to vārdu, lai dalās visās labās lietās ar to, kas viņu māca. "},
	{7, "7 Nepievilieties, Dievs neļaujas apsmieties! Jo, ko cilvēks sēj, to viņš arī pļaus. "},
	{8, "8 Proti, kas sēj savā miesā, tas pļaus no miesas pazušanu, bet, kas sēj Garā, tas pļaus no Gara mūžīgo dzīvību. "},
	{9, "9 Tad nu nepiekusīsim, labu darīdami, jo savā laikā mēs pļausim, ja nepagursim. "},
	{10, "10 Tad nu, kamēr mums ir laiks, darīsim labu visiem, bet sevišķi ticības biedriem. "},
	{11, "11 Redziet, ar kādiem burtiem es jums rakstu ar savu paša roku! "},
	{12, "12 Tie, kas grib būt ārīgi godājami, spiež jūs apgraizīties tikai tāpēc, lai viņi Kristus krusta dēļ netiktu vajāti. "},
	{13, "13 Tikai viņi, kas apgraizīti, paši netur bauslību, bet prasa, lai jūs pieņemtu apgraizīšanu, ka viņi ar to, kas noticis pie jūsu miesas, varētu lepoties. "},
	{14, "14 Bet es no savas puses negribu lielīties, kā tikai ar mūsu Kunga Jēzus Kristus krustu, ar ko man pasaule ir krustā sista un es pasaulei. "},
	{15, "15 Jo nedz apgraizīšana ir kas, nedz neapgraizīšana, bet jauns radījums. "},
	{16, "16 Un, kas šo ceļu ies, pār tiem miers un žēlastība un vispār pār Dieva Israēlu. "},
	{17, "17 Turpmāk lai neviens man nedara raizes! Jo es nesu Jēzus rētas savā miesā. "},
	{18, "18 Mūsu Kunga Jēzus Kristus žēlastība lai ir ar jūsu garu, brāļi! Āmen!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};