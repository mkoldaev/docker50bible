#include <map>
#include <string>
class Bible64
{
	struct it1	{ int val; const char *msg; };
public:
static void view1() {
struct it1 poems[] = {
	{1, "1 L’anziano al diletto Gaio, che io amo nella verità."},
	{2, "2 Diletto, io faccio voti che tu prosperi in ogni cosa e stii sano, come prospera l’anima tua."},
	{3, "3 Perché mi sono grandemente rallegrato quando son venuti dei fratelli che hanno reso testimonianza della tua verità, del modo nel quale tu cammini in verità."},
	{4, "4 Io non ho maggiore allegrezza di questa, d’udire che i miei figliuoli camminano nella verità."},
	{5, "5 Diletto, tu operi fedelmente in quel che fai a pro dei fratelli che sono, per di più, forestieri."},
	{6, "6 Essi hanno reso testimonianza del tuo amore, dinanzi alla chiesa; e farai bene a provvedere al loro viaggio in modo degno di Dio;"},
	{7, "7 perché sono partiti per amor del nome di Cristo, senza prendere alcun che dai pagani."},
	{8, "8 Noi dunque dobbiamo accogliere tali uomini, per essere cooperatori con la verità."},
	{9, "9 Ho scritto qualcosa alla chiesa; ma Diotrefe che cerca d’avere il primato fra loro, non ci riceve."},
	{10, "10 Perciò, se vengo, io ricorderò le opere che fa, cianciando contro di noi con male parole; e non contento di questo, non solo non riceve egli stesso i fratelli, ma a quelli che vorrebbero riceverli impedisce di farlo, e li caccia fuori dalla chiesa."},
	{11, "11 Diletto, non imitare il male, ma il bene. Chi fa il bene è da Dio; chi fa il male non ha veduto Iddio."},
	{12, "12 A Demetrio è resa testimonianza da tutti e dalla verità stessa; e anche noi ne testimoniamo; e tu sai che la nostra testimonianza è vera."},
	{13, "13 Avevo molte cose da scriverti, ma non voglio scrivertele con inchiostro e penna."},
	{14, "14 Ma spero vederti tosto, e ci parleremo a voce. (G1-15) La pace sia teco. Gli amici ti salutano. Saluta gli amici ad uno ad uno."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};