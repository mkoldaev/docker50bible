#include <map>
#include <string>
class Bible64
{
	struct bg1	{ int val; const char *msg; };
public:
static void view1() {
struct bg1 poems[] = {
	{1, "1 Старейшината до любимия Гай, когото любя в истина:"},
	{2, "2 Възлюбени, моля се да благоуспяваш във всичко и да си здрав, както благоуспява душата ти."},
	{3, "3 Защото много се зарадвах, когато дойдоха някои братя и свидетелстваха за истината, която е в теб, как ти ходиш в истината."},
	{4, "4 За мен няма по-голяма радост от това — да слушам, че моите деца ходят в истината."},
	{5, "5 Възлюбени, ти вършиш вярно всичко, което правиш за братята и за чужденците,"},
	{6, "6 които свидетелстваха за твоята любов пред църквата. Добре ще направиш да ги изпратиш по начин, който е достоен за Бога,"},
	{7, "7 защото за Христовото Име излязоха, без да вземат нещо от езичниците."},
	{8, "8 Ние обаче сме длъжни да приемаме такива, за да ставаме съработници за истината."},
	{9, "9 Писах до църквата, но Диотреф, който иска да бъде пръв между тях, не ни приема."},
	{10, "10 Затова, ако дойда, ще напомня за делата, които върши, като бръщолеви против нас лоши думи. И като не се задоволява с това, той не само че сам не приема братята, а възпира и тези, които искат да ги приемат, и ги пъди от църквата."},
	{11, "11 Възлюбени, не подражавай на злото, а на доброто. Който върши добро, е от Бога, а който върши зло, не е видял Бога."},
	{12, "12 За Димитрий се свидетелства добро от всички, и от самата истина; а още и ние свидетелстваме и ти знаеш, че нашето свидетелство е истинно."},
	{13, "13 Имах много да ти пиша, но не искам да ти пиша с мастило и перо,"},
	{14, "14 а се надявам скоро да те видя, и ще разговаряме очи в очи. Мир на теб. Поздравяват те приятелите. Поздрави приятелите по име."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};