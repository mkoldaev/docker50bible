#include <map>
#include <string>
class Bible51
{
	struct pt1	{ int val; const char *msg; };
	struct pt2	{ int val; const char *msg; };
	struct pt3	{ int val; const char *msg; };
	struct pt4	{ int val; const char *msg; };
public:
static void view1() {
struct pt1 poems[] = {
	{1, "1 Paulo, apóstolo de Cristo Jesus pela vontade de Deus, e o irmão Timóteo,"},
	{2, "2 aos santos e fiéis irmãos em Cristo que estão em Colossos: Graças a vós, e paz da parte de Deus nosso Pai."},
	{3, "3 Graças damos a Deus, Pai de nosso Senhor Jesus Cristo, orando sempre por vós,"},
	{4, "4 desde que ouvimos falar da vossa fé em Cristo Jesus, e do amor que tendes a todos os santos,"},
	{5, "5 por causa da esperança que vos está reservada nos céus, da qual antes ouvistes pela palavra da verdade do evangelho,"},
	{6, "6 que já chegou a vós, como também está em todo o mundo, frutificando e crescendo, assim como entre vós desde o dia em que ouvistes e conhecestes a graça de Deus em verdade,"},
	{7, "7 segundo aprendestes de Epafras, nosso amado conservo, que por nós é fiel ministro de Cristo."},
	{8, "8 O qual também nos declarou o vosso amor no Espírito."},
	{9, "9 Por esta razão, nós também, desde o dia em que ouvimos, não cessamos de orar por vós, e de pedir que sejais cheios do pleno conhecimento da sua vontade, em toda a sabedoria e entendimento espiritual;"},
	{10, "10 para que possais andar de maneira digna do Senhor, agradando-lhe em tudo, frutificando em toda boa obra, e crescendo no conhecimento de Deus,"},
	{11, "11 corroborados com toda a fortaleza, segundo o poder da sua glória, para toda a perseverança e longanimidade com gozo;"},
	{12, "12 dando graças ao Pai que vos fez idôneos para participar da herança dos santos na luz,"},
	{13, "13 e que nos tirou do poder das trevas, e nos transportou para o reino do seu Filho amado;"},
	{14, "14 em quem temos a redenção, a saber, a remissão dos pecados;"},
	{15, "15 o qual é imagem do Deus invisível, o primogênito de toda a criação;"},
	{16, "16 porque nele foram criadas todas as coisas nos céus e na terra, as visíveis e as invisíveis, sejam tronos, sejam dominações, sejam principados, sejam potestades; tudo foi criado por ele e para ele."},
	{17, "17 Ele é antes de todas as coisas, e nele subsistem todas as coisas;"},
	{18, "18 também ele é a cabeça do corpo, da igreja; é o princípio, o primogênito dentre os mortos, para que em tudo tenha a preeminência,"},
	{19, "19 porque aprouve a Deus que nele habitasse toda a plenitude,"},
	{20, "20 e que, havendo por ele feito a paz pelo sangue da sua cruz, por meio dele reconciliasse consigo mesmo todas as coisas, tanto as que estão na terra como as que estão nos céus."},
	{21, "21 A vós também, que outrora éreis estranhos, e inimigos no entendimento pelas vossas obras más,"},
	{22, "22 agora contudo vos reconciliou no corpo da sua carne, pela morte, a fim de perante ele vos apresentar santos, sem defeito e irrepreensíveis,"},
	{23, "23 se é que permaneceis na fé, fundados e firmes, não vos deixando apartar da esperança do evangelho que ouvistes, e que foi pregado a toda criatura que há debaixo do céu, e do qual eu, Paulo, fui constituído ministro."},
	{24, "24 Agora me regozijo no meio dos meus sofrimentos por vós, e cumpro na minha carne o que resta das aflições de Cristo, por amor do seu corpo, que é a igreja;"},
	{25, "25 da qual eu fui constituído ministro segundo a dispensação de Deus, que me foi concedida para convosco, a fim de cumprir a palavra de Deus,"},
	{26, "26 o mistério que esteve oculto dos séculos, e das gerações; mas agora foi manifesto aos seus santos,"},
	{27, "27 a quem Deus quis fazer conhecer quais são as riquezas da glória deste mistério entre os gentios, que é Cristo em vós, a esperança da glória;"},
	{28, "28 o qual nós anunciamos, admoestando a todo homem, e ensinando a todo homem em toda a sabedoria, para que apresentemos todo homem perfeito em Cristo;"},
	{29, "29 para isso também trabalho, lutando segundo a sua eficácia, que opera em mim poderosamente."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct pt2 poems[] = {
	{1, "1 Pois quero que saibais quão grande luta tenho por vós, e pelos que estão em Laodicéia, e por quantos não viram a minha pessoa;"},
	{2, "2 para que os seus corações sejam animados, estando unidos em amor, e enriquecidos da plenitude do entendimento para o pleno conhecimento do mistério de Deus - Cristo,"},
	{3, "3 no qual estão escondidos todos os tesouros da sabedoria e da ciência."},
	{4, "4 Digo isto, para que ninguém vos engane com palavras persuasivas."},
	{5, "5 Porque ainda que eu esteja ausente quanto ao corpo, contudo em espírito estou convosco, regozijando-me, e vendo a vossa ordem e a firmeza da vossa fé em Cristo."},
	{6, "6 Portanto, assim como recebestes a Cristo Jesus, o Senhor, assim também nele andai,"},
	{7, "7 arraigados e edificados nele, e confirmados na fé, assim como fostes ensinados, abundando em ação de graças."},
	{8, "8 Tendo cuidado para que ninguém vos faça presa sua, por meio de filosofias e vãs sutilezas, segundo a tradição dos homens, segundo os rudimentos do mundo, e não segundo Cristo;"},
	{9, "9 porque nele habita corporalmente toda a plenitude da divindade,"},
	{10, "10 e tendes a vossa plenitude nele, que é a cabeça de todo principado e potestade,"},
	{11, "11 no qual também fostes circuncidados com a circuncisão não feita por mãos no despojar do corpo da carne, a saber, a circuncisão de Cristo;"},
	{12, "12 tendo sido sepultados com ele no batismo, no qual também fostes ressuscitados pela fé no poder de Deus, que o ressuscitou dentre os mortos;"},
	{13, "13 e a vós, quando estáveis mortos nos vossos delitos e na incircuncisão da vossa carne, vos vivificou juntamente com ele, perdoando-nos todos os delitos;"},
	{14, "14 e havendo riscado o escrito de dívida que havia contra nós nas suas ordenanças, o qual nos era contrário, removeu-o do meio de nós, cravando-o na cruz;"},
	{15, "15 e, tendo despojado os principados e potestades, os exibiu publicamente e deles triunfou na mesma cruz."},
	{16, "16 Ninguém, pois, vos julgue pelo comer, ou pelo beber, ou por causa de dias de festa, ou de lua nova, ou de sábados,"},
	{17, "17 que são sombras das coisas vindouras; mas o corpo é de Cristo."},
	{18, "18 Ninguém atue como árbitro contra vós, afetando humildade ou culto aos anjos, firmando-se em coisas que tenha visto, inchado vãmente pelo seu entendimento carnal,"},
	{19, "19 e não retendo a Cabeça, da qual todo o corpo, provido e organizado pelas juntas e ligaduras, vai crescendo com o aumento concedido por Deus."},
	{20, "20 Se morrestes com Cristo quanto aos rudimentos do mundo, por que vos sujeitais ainda a ordenanças, como se vivêsseis no mundo,"},
	{21, "21 tais como: não toques, não proves, não manuseies"},
	{22, "22 (as quais coisas todas hão de perecer pelo uso), segundo os preceitos e doutrinas dos homens?"},
	{23, "23 As quais têm, na verdade, alguma aparência de sabedoria em culto voluntário, humildade fingida, e severidade para com o corpo, mas não têm valor algum no combate contra a satisfação da carne."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct pt3 poems[] = {
	{1, "1 Se, pois, fostes ressuscitados juntamente com Cristo, buscai as coisas que são de cima, onde Cristo está assentado à destra de Deus."},
	{2, "2 Pensai nas coisas que são de cima, e não nas que são da terra;"},
	{3, "3 porque morrestes, e a vossa vida está escondida com Cristo em Deus."},
	{4, "4 Quando Cristo, que é a nossa vida, se manifestar, então também vós vos manifestareis com ele em glória."},
	{5, "5 Exterminai, pois, as vossas inclinações carnais; a prostituição, a impureza, a paixão, a vil concupiscência, e a avareza, que é idolatria;"},
	{6, "6 pelas quais coisas vem a ira de Deus sobre os filhos da desobediência;"},
	{7, "7 nas quais também em outro tempo andastes, quando vivíeis nelas;"},
	{8, "8 mas agora despojai-vos também de tudo isto: da ira, da cólera, da malícia, da maledicência, das palavras torpes da vossa boca;"},
	{9, "9 não mintais uns aos outros, pois que já vos despistes do homem velho com os seus feitos,"},
	{10, "10 e vos vestistes do novo, que se renova para o pleno conhecimento, segundo a imagem daquele que o criou;"},
	{11, "11 onde não há grego nem judeu, circuncisão nem incircuncisão, bárbaro, cita, escravo ou livre, mas Cristo é tudo em todos."},
	{12, "12 Revestí-vos, pois, como eleitos de Deus, santos e amados, de coração compassivo, de benignidade, humildade, mansidão, longanimidade,"},
	{13, "13 suportando-vos e perdoando-vos uns aos outros, se alguém tiver queixa contra outro; assim como o Senhor vos perdoou, assim fazei vós também."},
	{14, "14 E, sobre tudo isto, revestí-vos do amor, que é o vínculo da perfeição."},
	{15, "15 E a paz de Cristo, para a qual também fostes chamados em um corpo, domine em vossos corações; e sede agradecidos."},
	{16, "16 A palavra de Cristo habite em vós ricamente, em toda a sabedoria; ensinai-vos e admoestai-vos uns aos outros, com salmos, hinos e cânticos espirituais, louvando a Deus com gratidão em vossos corações."},
	{17, "17 E tudo quanto fizerdes por palavras ou por obras, fazei-o em nome do Senhor Jesus, dando por ele graças a Deus Pai."},
	{18, "18 Vós, mulheres, sede submissas a vossos maridos, como convém no Senhor."},
	{19, "19 Vós, maridos, amai a vossas mulheres, e não as trateis asperamente."},
	{20, "20 Vós, filhos, obedecei em tudo a vossos pais; porque isto é agradável ao Senhor."},
	{21, "21 Vós, pais, não irriteis a vossos filhos, para que não fiquem desanimados."},
	{22, "22 Vós, servos, obedecei em tudo a vossos senhores segundo a carne, não servindo somente à vista como para agradar aos homens, mas em singeleza de coração, temendo ao Senhor."},
	{23, "23 E tudo quanto fizerdes, fazei-o de coração, como ao Senhor, e não aos homens,"},
	{24, "24 sabendo que do Senhor recebereis como recompensa a herança; servi a Cristo, o Senhor."},
	{25, "25 Pois quem faz injustiça receberá a paga da injustiça que fez; e não há acepção de pessoas."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct pt4 poems[] = {
	{1, "1 Vós, senhores, dai a vossos servos o que é de justiça e eqüidade, sabendo que também vós tendes um Senhor no céu."},
	{2, "2 Perseverai na oração, velando nela com ações de graças,"},
	{3, "3 orando ao mesmo tempo também por nós, para que Deus nos abra uma porta à palavra, a fim de falarmos o mistério de Cristo, pelo qual também estou preso,"},
	{4, "4 para que eu o manifeste como devo falar."},
	{5, "5 Andai em sabedoria para com os que estão de fora, usando bem cada oportunidade."},
	{6, "6 A vossa palavra seja sempre com graça, temperada com sal, para saberdes como deveis responder a cada um."},
	{7, "7 Tíquico, o irmão amado, fiel ministro e conservo no Senhor, vos fará conhecer a minha situação;"},
	{8, "8 o qual vos envio para este mesmo fim, para que saibais o nosso estado e ele conforte os vossos corações,"},
	{9, "9 juntamente com Onésimo, fiel e amado irmão, que é um de vós; eles vos farão saber tudo o que aqui se passa."},
	{10, "10 Saúda-vos Aristarco, meu companheiro de prisão, e Marcos, o primo de Barnabé (a respeito do qual recebestes instruções; se for ter convosco, recebei-o),"},
	{11, "11 e Jesus, que se chama Justo, sendo unicamente estes, dentre a circuncisão, os meus cooperadores no reino de Deus; os quais têm sido para mim uma consolação."},
	{12, "12 Saúda-vos Epafras, que é um de vós, servo de Cristo Jesus, e que sempre luta por vós nas suas orações, para que permaneçais perfeitos e plenamente seguros em toda a vontade de Deus."},
	{13, "13 Pois dou-lhe testemunho de que tem grande zelo por vós, como também pelos que estão em Laodicéia, e pelos que estão em Hierápolis."},
	{14, "14 Saúda-vos Lucas, o médico amado, e Demas."},
	{15, "15 Saudai aos irmãos que estão em Laodicéia, e a Ninfas e a igreja que está em sua casa."},
	{16, "16 Depois que for lida esta carta entre vós, fazei que o seja também na igreja dos laodicenses; e a de Laodicéia lede-a vós também."},
	{17, "17 E dizei a Arquipo: Cuida do ministério que recebestes no Senhor, para o cumprires."},
	{18, "18 Esta saudação é de próprio punho, de Paulo. Lembrai-vos das minhas cadeias. A graça seja convosco."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};