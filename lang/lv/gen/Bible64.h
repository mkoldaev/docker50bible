#include <map>
#include <string>
class Bible64
{
	struct lv1	{ int val; const char *msg; };
public:
static void view1() {
struct lv1 poems[] = {
	{1, "1 Es, presbiteris, savam mīļotajam Gajam, ko es mīlu patiesībā. "},
	{2, "2 Mīļais, es tev novēlu visās lietās tādu labklājību un veselību, kāda jau ir tavai dvēselei. "},
	{3, "3 Jo es ļoti priecājos, kad atnāca brāļi un liecināja par tavu patiesību, ka tu dzīvo jau patiesībā. "},
	{4, "4 Man nav lielāka prieka kā dzirdēt, ka mani bērni dzīvo patiesībā. "},
	{5, "5 Mīļais, ar uzticību tu visu esi darījis brāļiem un turklāt vēl svešiniekiem, "},
	{6, "6 kas liecinājuši par tavu mīlestību draudzes priekšā. Tu darīsi labi, tos izvadīdams tā, kā tas ir cienīgi Dieva priekšā. "},
	{7, "7 Jo Viņa Vārda dēļ viņi ir izgājuši, neņemdami neko no pagāniem. "},
	{8, "8 Tad nu mums pienākas tādus uzņemt, lai mēs kļūtu patiesības līdzdarbinieki. "},
	{9, "9 Es draudzei esmu rakstījis, bet Diotrefs, kas labprāt grib būt pirmais viņu vidū, neuzņem mūs. "},
	{10, "10 Tāpēc, kad nākšu, es pieminēšu viņa darbus, ko viņš dara, ļauniem vārdiem aprunādams mūs, un ar to viņam nepietiek, viņš pats neuzņem brāļus un neļauj to darīt tiem, kas to grib, un izstumj tos no draudzes. "},
	{11, "11 Mīļais, neseko ļaunajam, bet labajam. Kas dara labu, ir no Dieva; kas dara ļaunu, nav Dieva redzējis. "},
	{12, "12 Demētrijam par labu ir liecinājuši visi, arī pati patiesība. Arī mēs dodam viņam labu liecību, un to zini, ka mūsu liecība ir patiesīga. "},
	{13, "13 Man būtu tev daudz ko rakstīt, bet es negribu tev rakstīt ar tinti un spalvu, "},
	{14, "14 bet ceru it drīz tevi redzēt, tad mēs runāsim no mutes uz muti. "},
	{15, "15 Miers lai ir ar tevi. Draugi tevi sveicina. Sveicini draugus, katru atsevišķi."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};