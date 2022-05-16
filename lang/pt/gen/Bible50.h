#include <map>
#include <string>
class Bible50
{
	struct pt1	{ int val; const char *msg; };
	struct pt2	{ int val; const char *msg; };
	struct pt3	{ int val; const char *msg; };
	struct pt4	{ int val; const char *msg; };
public:
static void view1() {
struct pt1 poems[] = {
	{1, "1 Paulo e Timóteo, servos de Cristo Jesus, a todos os santos em Cristo Jesus que estão em Filipos, com os bispos e diáconos:"},
	{2, "2 Graça a vós, e paz da parte de Deus nosso Pai, e do Senhor Jesus Cristo."},
	{3, "3 Dou graças ao meu Deus todas as vezes que me lembro de vós,"},
	{4, "4 fazendo sempre, em todas as minhas orações, súplicas por todos vós com alegria"},
	{5, "5 pela vossa cooperação a favor do evangelho desde o primeiro dia até agora;"},
	{6, "6 tendo por certo isto mesmo, que aquele que em vós começou a boa obra a aperfeiçoará até o dia de Cristo Jesus,"},
	{7, "7 como tenho por justo sentir isto a respeito de vós todos, porque vos retenho em meu coração, pois todos vós sois participantes comigo da graça, tanto nas minhas prisões como na defesa e confirmação do evangelho."},
	{8, "8 Pois Deus me é testemunha de que tenho saudades de todos vós, na terna misericórdia de Cristo Jesus."},
	{9, "9 E isto peço em oração: que o vosso amor aumente mais e mais no pleno conhecimento e em todo o discernimento,"},
	{10, "10 para que aproveis as coisas excelentes, a fim de que sejais sinceros, e sem ofensa até o dia de Cristo;"},
	{11, "11 cheios do fruto de injustiça, que vem por meio de Jesus Cristo, para glória e louvor de Deus."},
	{12, "12 E quero, irmãos, que saibais que as coisas que me aconteceram têm antes contribuido para o progresso do evangelho;"},
	{13, "13 de modo que se tem tornado manifesto a toda a guarda pretoriana e a todos os demais, que é por Cristo que estou em prisões;"},
	{14, "14 também a maior parte dos irmãos no Senhor, animados pelas minhas prisões, são muito mais corajosos para falar sem temor a palavra de Deus."},
	{15, "15 Verdade é que alguns pregam a Cristo até por inveja e contenda, mas outros o fazem de boa mente;"},
	{16, "16 estes por amor, sabendo que fui posto para defesa do evangelho;"},
	{17, "17 mas aqueles por contenda anunciam a Cristo, não sinceramente, julgando suscitar aflição às minhas prisões."},
	{18, "18 Mas que importa? contanto que, de toda maneira, ou por pretexto ou de verdade, Cristo seja anunciado, nisto me regozijo, sim, e me regozijarei;"},
	{19, "19 porque sei que isto me resultará em salvação, pela vossa súplica e pelo socorro do Espírito de Jesus Cristo,"},
	{20, "20 segundo a minha ardente expectativa e esperança, de que em nada serei confundido; antes, com toda a ousadia, Cristo será, tanto agora como sempre, engrandecido no meu corpo, seja pela vida, seja pela morte."},
	{21, "21 Porque para mim o viver é Cristo, e o morrer é lucro."},
	{22, "22 Mas, se o viver na carne resultar para mim em fruto do meu trabalho, não sei então o que hei de escolher."},
	{23, "23 Mas de ambos os lados estou em aperto, tendo desejo de partir e estar com Cristo, porque isto é ainda muito melhor;"},
	{24, "24 todavia, por causa de vós, julgo mais necessário permanecer na carne."},
	{25, "25 E, tendo esta confiança, sei que ficarei, e permanecerei com todos vós para vosso progresso e gozo na fé;"},
	{26, "26 para que o motivo de vos gloriardes cresça por mim em Cristo Jesus, pela minha presença de novo convosco."},
	{27, "27 Somente portai-vos, dum modo digno do evangelho de Cristo, para que, quer vá e vos veja, quer esteja ausente, ouça acerca de vós que permaneceis firmes num só espírito, combatendo juntamente com uma só alma pela fé do evangelho;"},
	{28, "28 e que em nada estais atemorizados pelos adversários, o que para eles é indício de perdição, mas para vós de salvação, e isso da parte de Deus;"},
	{29, "29 pois vos foi concedido, por amor de Cristo, não somente o crer nele, mas também o padecer por ele,"},
	{30, "30 tendo o mesmo combate que já em mim tendes visto e agora ouvis que está em mim."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct pt2 poems[] = {
	{1, "1 Portanto, se há alguma exortação em Cristo, se alguma consolação de amor, se alguma comunhão do Espírito, se alguns entranháveis afetos e compaixões,"},
	{2, "2 completai o meu gozo, para que tenhais o mesmo modo de pensar, tendo o mesmo amor, o mesmo ânimo, pensando a mesma coisa;"},
	{3, "3 nada façais por contenda ou por vanglória, mas com humildade cada um considere os outros superiores a si mesmo;"},
	{4, "4 não olhe cada um somente para o que é seu, mas cada qual também para o que é dos outros."},
	{5, "5 Tende em vós aquele sentimento que houve também em Cristo Jesus,"},
	{6, "6 o qual, subsistindo em forma de Deus, não considerou o ser igual a Deus coisa a que se devia aferrar,"},
	{7, "7 mas esvaziou-se a si mesmo, tomando a forma de servo, tornando-se semelhante aos homens;"},
	{8, "8 e, achado na forma de homem, humilhou-se a si mesmo, tornando-se obediente até a morte, e morte de cruz."},
	{9, "9 Pelo que também Deus o exaltou soberanamente, e lhe deu o nome que é sobre todo nome;"},
	{10, "10 para que ao nome de Jesus se dobre todo joelho dos que estão nos céus, e na terra, e debaixo da terra,"},
	{11, "11 e toda língua confesse que Jesus Cristo é Senhor, para glória de Deus Pai."},
	{12, "12 De sorte que, meus amados, do modo como sempre obedecestes, não como na minha presença somente, mas muito mais agora na minha ausência, efetuai a vossa salvação com temor e tremor;"},
	{13, "13 porque Deus é o que opera em vós tanto o querer como o efetuar, segundo a sua boa vontade."},
	{14, "14 Fazei todas as coisas sem murmurações nem contendas;"},
	{15, "15 para que vos torneis irrepreensíveis e sinceros, filhos de Deus imaculados no meio de uma geração corrupta e perversa, entre a qual resplandeceis como luminares no mundo,"},
	{16, "16 retendo a palavra da vida; para que no dia de Cristo eu tenha motivo de gloriar-me de que não foi em vão que corri nem em vão que trabalhei."},
	{17, "17 Contudo, ainda que eu seja derramado como libação sobre o sacrifício e serviço da vossa fé, folgo e me regozijo com todos vós;"},
	{18, "18 e pela mesma razão folgai vós também e regozijai-vos comigo."},
	{19, "19 Ora, espero no Senhor Jesus enviar-vos em breve Timóteo, para que também eu esteja de bom ânimo, sabendo as vossas notícias."},
	{20, "20 Porque nenhum outro tenho de igual sentimento, que sinceramente cuide do vosso bem-estar."},
	{21, "21 Pois todos buscam o que é seu, e não o que é de Cristo Jesus."},
	{22, "22 Mas sabeis que provas deu ele de si; que, como filho ao pai, serviu comigo a favor do evangelho."},
	{23, "23 A este, pois, espero enviar logo que eu tenha visto como há de ser o meu caso;"},
	{24, "24 confio, porém, no Senhor, que também eu mesmo em breve irei."},
	{25, "25 Julguei, contudo, necessário enviar-vos Epafrodito, meu irmão, e cooperador, e companheiro nas lutas, e vosso enviado para me socorrer nas minhas necessidades;"},
	{26, "26 porquanto ele tinha saudades de vós todos, e estava angustiado por terdes ouvido que estivera doente."},
	{27, "27 Pois de fato esteve doente e quase à morte; mas Deus se compadeceu dele, e não somente dele, mas também de mim, para que eu não tivesse tristeza sobre tristeza."},
	{28, "28 Por isso vo-lo envio com mais urgência, para que, vendo-o outra vez, vos regozijeis, e eu tenha menos tristeza."},
	{29, "29 Recebei-o, pois, no Senhor com todo o gozo, e tende em honra a homens tais como ele;"},
	{30, "30 porque pela obra de Cristo chegou até as portas da morte, arriscando a sua vida para suprir-me o que faltava do vosso serviço."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct pt3 poems[] = {
	{1, "1 Quanto ao mais, irmãos meus, regozijai-vos no Senhor. Não me é penoso a mim escrever-vos as mesmas coisas, e a vós vos dá segurança."},
	{2, "2 Acautelai-vos dos cães; acautelai-vos dos maus obreiros; acautelai-vos da falsa circuncisão."},
	{3, "3 Porque a circuncisão somos nós, que servimos a Deus em espírito, e nos gloriamos em Cristo Jesus, e não confiamos na carne."},
	{4, "4 Se bem que eu poderia até confiar na carne. Se algum outro julga poder confiar na carne, ainda mais eu:"},
	{5, "5 circuncidado ao oitavo dia, da linhagem de Israel, da tribo de Benjamim, hebreu de hebreus; quanto à lei fui fariseu;"},
	{6, "6 quanto ao zelo, persegui a igreja; quanto à justiça que há na lei, fui irrepreensível."},
	{7, "7 Mas o que para mim era lucro passei a considerá-lo como perda por amor de Cristo;"},
	{8, "8 sim, na verdade, tenho também como perda todas as coisas pela excelência do conhecimento de Cristo Jesus, meu Senhor; pelo qual sofri a perda de todas estas coisas, e as considero como refugo, para que possa ganhar a Cristo,"},
	{9, "9 e seja achado nele, não tendo como minha justiça a que vem da lei, mas a que vem pela fé em Cristo, a saber, a justiça que vem de Deus pela fé;"},
	{10, "10 para conhecê-lo, e o poder da sua ressurreição e a e a participação dos seus sofrimentos, conformando-me a ele na sua morte,"},
	{11, "11 para ver se de algum modo posso chegar à ressurreição dentre os mortos."},
	{12, "12 Não que já a tenha alcançado, ou que seja perfeito; mas vou prosseguindo, para ver se poderei alcançar aquilo para o que fui também alcançado por Cristo Jesus."},
	{13, "13 Irmãos, quanto a mim, não julgo que o haja alcançado; mas uma coisa faço, e é que, esquecendo-me das coisas que atrás ficam, e avançando para as que estão adiante,"},
	{14, "14 prossigo para o alvo pelo prêmio da vocação celestial de Deus em Cristo Jesus."},
	{15, "15 Pelo que todos quantos somos perfeitos tenhamos este sentimento; e, se sentis alguma coisa de modo diverso, Deus também vo-lo revelará."},
	{16, "16 Mas, naquela medida de perfeição a que já chegamos, nela prossigamos."},
	{17, "17 Irmãos, sede meus imitadores, e atentai para aqueles que andam conforme o exemplo que tendes em nós;"},
	{18, "18 porque muitos há, dos quais repetidas vezes vos disse, e agora vos digo até chorando, que são inimigos da cruz de Cristo;"},
	{19, "19 cujo fim é a perdição; cujo deus é o ventre; e cuja glória assenta no que é vergonhoso; os quais só cuidam das coisas terrenas."},
	{20, "20 Mas a nossa pátria está nos céus, donde também aguardamos um Salvador, o Senhor Jesus Cristo,"},
	{21, "21 que transformará o corpo da nossa humilhação, para ser conforme ao corpo da sua glória, segundo o seu eficaz poder de até sujeitar a si todas as coisas."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct pt4 poems[] = {
	{1, "1 Portanto, meus amados e saudosos irmãos, minha alegria e coroa, permanecei assim firmes no Senhor, amados."},
	{2, "2 Rogo a Evódia, e rogo a Síntique, que sintam o mesmo no Senhor."},
	{3, "3 E peço também a ti, meu verdadeiro companheiro, que as ajudes, porque trabalharam comigo no evangelho, e com Clemente, e com os outros meus cooperadores, cujos nomes estão no livro da vida."},
	{4, "4 Regozijai-vos sempre no Senhor; outra vez digo, regozijai- vos."},
	{5, "5 Seja a vossa moderação conhecida de todos os homens. Perto está o Senhor."},
	{6, "6 Não andeis ansiosos por coisa alguma; antes em tudo sejam os vossos pedidos conhecidos diante de Deus pela oração e súplica com ações de graças;"},
	{7, "7 e a paz de Deus, que excede todo o entendimento, guardará os vossos corações e os vossos pensamentos em Cristo Jesus."},
	{8, "8 Quanto ao mais, irmãos, tudo o que é verdadeiro, tudo o que é honesto, tudo o que é justo, tudo o que é puro, tudo o que é amável, tudo o que é de boa fama, se há alguma virtude, e se há algum louvor, nisso pensai."},
	{9, "9 O que também aprendestes, e recebestes, e ouvistes, e vistes em mim, isso praticai; e o Deus de paz será convosco."},
	{10, "10 Ora, muito me regozijo no Senhor por terdes finalmente renovado o vosso cuidado para comigo; do qual na verdade andáveis lembrados, mas vos faltava oportunidade."},
	{11, "11 Não digo isto por causa de necessidade, porque já aprendi a contentar-me com as circunstâncias em que me encontre."},
	{12, "12 Sei passar falta, e sei também ter abundância; em toda maneira e em todas as coisas estou experimentado, tanto em ter fartura, como em passar fome; tanto em ter abundância, como em padecer necessidade."},
	{13, "13 Posso todas as coisas naquele que me fortalece."},
	{14, "14 Todavia fizestes bem em tomar parte na minha aflição."},
	{15, "15 Também vós sabeis, ó filipenses, que, no princípio do evangelho, quando parti da Macedônia, nenhuma igreja comunicou comigo no sentido de dar e de receber, senão vós somente;"},
	{16, "16 porque estando eu ainda em Tessalônica, não uma só vez, mas duas, mandastes suprir-me as necessidades."},
	{17, "17 Não que procure dádivas, mas procuro o fruto que cresça para a vossa conta."},
	{18, "18 Mas tenho tudo; tenho-o até em abundância; cheio estou, depois que recebi de Epafrodito o que da vossa parte me foi enviado, como cheiro suave, como sacrifício aceitável e aprazível a Deus."},
	{19, "19 Meu Deus suprirá todas as vossas necessidades segundo as suas riquezas na glória em Cristo Jesus."},
	{20, "20 Ora, a nosso Deus e Pai seja dada glória pelos séculos dos séculos. Amém."},
	{21, "21 Saudai a cada um dos santos em Cristo Jesus. Os irmãos que estão comigo vos saúdam."},
	{22, "22 Todos os santos vos saúdam, especialmente os que são da casa de César."},
	{23, "23 A graça do Senhor Jesus Cristo seja com o vosso espírito."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};