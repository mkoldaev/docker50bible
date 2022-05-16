#include <map>
#include <string>
class Bible37
{
	struct lv1	{ int val; const char *msg; };
	struct lv2	{ int val; const char *msg; };
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Ķēniņa Dārija otrā valdīšanas gada sestajā mēnesī, pirmā mēneša dienā, caur pravieti Hagaju atklājās Tā Kunga vārds Zerubābelam, Šealtiēla dēlam, Jūdas pārvaldniekam, un Jozuam, Jocadaka dēlam, augstajam priesterim, un tas skanēja tā: "},
	{2, "2 Tā saka Tas Kungs Cebaots: šī tauta runā: vēl nav pienācis laiks no jauna celt Tā Kunga namu! "},
	{3, "3 Un tad atklājās Tā Kunga vārds caur pravieti Hagaju: "},
	{4, "4 Vai tad jums ir pienācis laiks, lai jūs dzīvotu ar ciedru koku plāksnēm grezni izrotātos namos, bet šim namam ir jāstāv drupās pamestam? "},
	{5, "5 Un nu, saka Tas Kungs Cebaots, palūkojieties, kā jums ir līdz šim klājies jūsu ceļos! "},
	{6, "6 Jūs sējāt bagātīgi, bet ievācāt trūcīgi; jūs ēdāt gan, tomēr trūkst, lai jūs justos paēduši; jūs dzerat un tomēr nedzesējat slāpes; jums ir gan apģērbs, bet tas nedod pietiekami siltuma, un, kas pelna algu, tas ber to caurā makā. "},
	{7, "7 Tā saka Tas Kungs Cebaots: palūkojieties taču, kā jums ir līdz šim klājies jūsu ceļos! "},
	{8, "8 Kāpiet augšup kalnos, sataisiet kokus un celiet šo namu; tas Man būs patīkami, un Es parādīšu Savu godību, saka Tas Kungs. "},
	{9, "9 Jūs gan sagaidījāt daudz, un redzi, iznāca maz, un, kad jūs to pārvedāt mājās, tad Es to tomēr izputināju. Kāpēc tā? jautā Tas Kungs Cebaots. Tāpēc, ka Mans nams stāv drupās un ikviens dzenas tikai pēc sava nama. "},
	{10, "10 Tāpēc debess aizturēja pār jums savu veldzi, un zemes klēpis noslēdza jums savus augļus. "},
	{11, "11 Un Es sūtīju sausumu pār visu zemi un kalniem, pār labību, pār vīnu un eļļu, un pār visu, kas izaug no zemes, tāpat arī pār ļaudīm, lopiem un visiem ar rokām darāmiem darbiem. "},
	{12, "12 Tad Zerubābels, Šealtiēla dēls, un Jozua, Jocadaka dēls, augstais priesteris un visi, kas tur no tautas vēl bija, ar lielu uzmanību uzklausīja Tā Kunga, sava Dieva, balsi un pravieša Hagaja vārdus, kuru Dievs Tas Kungs pie viņiem bija sūtījis, un tauta sajuta lielu bijību Tā Kunga priekšā. "},
	{13, "13 Tad Hagajs, Tā Kunga sūtnis, kura uzdevums bija Dieva vēstījumu tautai zināmu darīt, runāja šādus vārdus: Es esmu ar jums! - tā saka Tas Kungs. "},
	{14, "14 Un Tas Kungs lika pamosties Zerubābelā, Šealtiēla dēlā, Jūdas apgabala pārvaldniekā, un Jozuā, Jocadaka dēlā, augstajā priesterī, un visos no tautas atlikušajos jaunam garam, tā ka viņi nāca un uzsāka darbus gar Tā Kunga Cebaota, sava Dieva, namu "},
	{15, "15 sestā mēneša divdesmit ceturtajā dienā ķēniņa Dārija otrā valdīšanas gadā."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct lv2 poems[] = {
	{1, "1 Septītā mēneša divdesmit pirmajā dienā atklājās Tā Kunga vārds caur pravieti Hagaju: "},
	{2, "2 Uzrunā Zerubābelu, Šealtiēla dēlu, Jūdas pārvaldnieku, un Jozuu, Jocadaka dēlu, augsto priesteri, un atlikušos ļaudis un saki tā: "},
	{3, "3 kas vēl ir palicis no jūsu vidus, kas šo namu ir redzējuši tā kādreizējā godībā, un kā jūs šo namu redzat tagad? Vai nav tiesa: tas ir it kā nekas pret agrāko? "},
	{4, "4 Un tagad, Zerubābel, ņemies drosmi, saka Tas Kungs, pildies ar jaunu drosmi arī tu, Jozua, Jocadaka dēls, tu augstais priesteri! Esi droša savā rīcībā, visa šīs zemes tauta, saka Tas Kungs, un strādājiet, jo Es esmu ar jums! - saka Tas Kungs Cebaots. "},
	{5, "5 Apsolījums, ko Es jums devu, izejot no Ēģiptes zemes, paliek spēkā, un Mans Gars valda jūsu vidū: nebīstieties! "},
	{6, "6 Jo tā saka Tas Kungs Cebaots: vēl tikai īss brīdis, ka Es satricināšu debesis un zemi, jūru un sauszemi. "},
	{7, "7 Jā, Es sakustināšu visas tautas; tad nāks šurp visu tautu bagātības, un Es darīšu šo namu pilnu krāšņuma, saka Tas Kungs Cebaots, "},
	{8, "8 Man pieder sudrabs, un Man pieder zelts, saka Tas Kungs Cebaots, "},
	{9, "9 un šā pēdējā nama krāšņumam jābūt lielākam, nekā bija pirmā krāšņums un godība, tā saka Tas Kungs Cebaots, un Es gribu dāvināt mieru šai vietā, saka Tas Kungs Cebaots. "},
	{10, "10 Dārija otrā valdīšanas gada devītā mēneša divdesmit ceturtajā dienā nāca Tā Kunga vārds pār pravieti Hagaju: "},
	{11, "11 Tā saka Tas Kungs Cebaots: apjautājies priesteriem par bauslību un saki: "},
	{12, "12 ja kāds savu drēbju ielokā nestu svētītu gaļu un ja viņš ar šo ieloku pieskartos pie maizes, saknēm, vīna, eļļas vai vispār pie kādas barības, vai tā tad kļūtu svēta? Priesteri atbildēja un teica: Nē, nekļūtu! "},
	{13, "13 Hagajs tad jautāja tālāk: Bet, ja kāds kļūtu nešķīsts no miroņa un pēc tam pieskartos kādai no šām lietām, vai tās kļūtu nešķīstas? Priesteri atbildēja un teica: Tiešām, tās kļūtu nešķīstas! "},
	{14, "14 Te nu Hagajs aizrādīja: Ja tā, tad arī šī tauta un visi šie ļaudis Manā priekšā, saka Tas Kungs, un visi viņu roku darbi un viss, ko viņi nes upuriem, ir nešķīsts! "},
	{15, "15 Padomājiet tomēr savā sirdī par laiku no šīs dienas atpakaļ līdz agrākam laikam, kā bija, pirms lika akmeni uz akmens Tā Kunga namam! "},
	{16, "16 Ja kāds pienāca pie neizkultas labības kaudzes, kurā būtu bijis jābūt divdesmit mēriem, tad tur bija tikai desmit; un, ja viņš pienāca pie vīna spaida, sagaidīdams saņemt piecdesmit spaiņu, tad iznāca tikai divdesmit. "},
	{17, "17 Jo Es jūs piemeklēju ar sausumu, ar labības rūsu un dzelti un krusu ikvienā jūsu darbā, un tomēr jūs neatgriezāties pie Manis, saka Tas Kungs. "},
	{18, "18 Tad nu raugaities uz to, kas notiks turpmāk, skaitot no šās dienas un vēl drusku atpakaļ, proti, sākot ar devītā mēneša divdesmit ceturto dienu - dienu, kad Tā Kunga namam likts pamats; raugaities un vērojiet uzmanīgi, "},
	{19, "19 vai sēklas labība joprojām vēl paliek klētī un vai vīna un vīģes koks, granātābele un eļļas koks arī turpmāk vēl nenes nekādus augļus. Ar šo dienu sākot, Es gribu jums piešķirt svētību. "},
	{20, "20 Un Tā Kunga vārds otrreiz nāca pār Hagaju tā paša mēneša divdesmit ceturtajā dienā: "},
	{21, "21 Saki Zerubābelam, Jūdas pārvaldniekam, un pastāsti viņam: Es sakustināšu debesis un zemi, "},
	{22, "22 un Es apgāzīšu ķēniņu troņus un iznīcināšu citu tautu varenās ķēniņu valstis; Es apgāzīšu kaujas ratus kopā ar braucējiem, kritīs no zobena zirgi un jātnieki cīņā cits pret citu. "},
	{23, "23 Tanī pašā dienā, saka Tas Kungs Cebaots, Es tevi, Zerubābel, Šealtiēla dēlu, Savu kalpu, ņemšu Savā zināšanā, saka Tas Kungs, un turēšu tevi kā zīmoga gredzenu, jo Es tevi esmu izredzējis! saka Tas Kungs Cebaots."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};