#include <map>
#include <string>
class Bible48
{
	struct pt1	{ int val; const char *msg; };
	struct pt2	{ int val; const char *msg; };
	struct pt3	{ int val; const char *msg; };
	struct pt4	{ int val; const char *msg; };
	struct pt5	{ int val; const char *msg; };
	struct pt6	{ int val; const char *msg; };
public:
static void view1() {
struct pt1 poems[] = {
	{1, "1 Paulo, apóstolo (não da parte dos homens, nem por intermédio de homem algum, mas sim por Jesus Cristo, e por Deus Pai, que o ressuscitou dentre os mortos),"},
	{2, "2 e todos os irmãos que estão comigo, às igrejas da Galácia:"},
	{3, "3 Graça a vós, e paz da parte de Deus nosso Pai, e do Senhor Jesus Cristo,"},
	{4, "4 o qual se deu a si mesmo por nossos pecados, para nos livrar do presente século mau, segundo a vontade de nosso Deus e Pai,"},
	{5, "5 a quem seja a glória para todo o sempre. Amém."},
	{6, "6 Estou admirado de que tão depressa estejais desertando daquele que vos chamou na graça de Cristo, para outro evangelho,"},
	{7, "7 o qual não é outro; senão que há alguns que vos perturbam e querem perverter o evangelho de Cristo."},
	{8, "8 Mas, ainda que nós mesmos ou um anjo do céu vos pregasse outro evangelho além do que já vos pregamos, seja anátema."},
	{9, "9 Como antes temos dito, assim agora novamente o digo: Se alguém vos pregar outro evangelho além do que já recebestes, seja anátema."},
	{10, "10 Pois busco eu agora o favor dos homens, ou o favor de Deus? ou procuro agradar aos homens? se estivesse ainda agradando aos homens, não seria servo de Cristo."},
	{11, "11 Mas faço-vos saber, irmãos, que o evangelho que por mim foi anunciado não é segundo os homens;"},
	{12, "12 porque não o recebi de homem algum, nem me foi ensinado; mas o recebi por revelação de Jesus Cristo."},
	{13, "13 Pois já ouvistes qual foi outrora o meu procedimento no judaísmo, como sobremaneira perseguia a igreja de Deus e a assolava,"},
	{14, "14 e na minha nação excedia em judaísmo a muitos da minha idade, sendo extremamente zeloso das tradições de meus pais."},
	{15, "15 Mas, quando aprouve a Deus, que desde o ventre de minha mãe me separou, e me chamou pela sua graça,"},
	{16, "16 revelar seu Filho em mim, para que eu o pregasse entre os gentios, não consultei carne e sangue,"},
	{17, "17 nem subi a Jerusalém para estar com os que já antes de mim eram apóstolos, mas parti para a Arábia, e voltei outra vez a Damasco."},
	{18, "18 Depois, passados três anos, subi a Jerusalém para visitar a Cefas, e demorei com ele quinze dias."},
	{19, "19 Mas não vi a nenhum outro dos apóstolos, senão a Tiago, irmão do Senhor."},
	{20, "20 Ora, acerca do que vos escrevo, eis que diante de Deus testifico que não minto."},
	{21, "21 Depois fui para as regiões da Síria e da Cilícia."},
	{22, "22 Não era conhecido de vista das igrejas de Cristo na Judéia;"},
	{23, "23 mas somente tinham ouvido dizer: Aquele que outrora nos perseguia agora prega a fé que antes procurava destruir;"},
	{24, "24 e glorificavam a Deus a respeito de mim."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct pt2 poems[] = {
	{1, "1 Depois, passados catorze anos, subi outra vez a Jerusalém com Barnabé, levando também comigo a Tito."},
	{2, "2 E subi devido a uma revelação, e lhes expus o evangelho que prego entre os gentios, mas em particular aos que eram de destaque, para que de algum modo não estivesse correndo ou não tivesse corrido em vão."},
	{3, "3 Mas nem mesmo Tito, que estava comigo, embora sendo grego, foi constrangido a circuncidar-se;"},
	{4, "4 e isto por causa dos falsos irmãos intrusos, os quais furtivamente entraram a espiar a nossa liberdade, que temos em Cristo Jesus, para nos escravizar;"},
	{5, "5 aos quais nem ainda por uma hora cedemos em sujeição, para que a verdade do evangelho permanecesse entre vós."},
	{6, "6 Ora, daqueles que pareciam ser alguma coisa (quais outrora tenham sido, nada me importa; Deus não aceita a aparência do homem), esses, digo, que pareciam ser alguma coisa, nada me acrescentaram;"},
	{7, "7 antes, pelo contrário, quando viram que o evangelho da incircuncisão me fora confiado, como a Pedro o da circuncisão"},
	{8, "8 (porque aquele que operou a favor de Pedro para o apostolado da circuncisão, operou também a meu favor para com os gentios),"},
	{9, "9 e quando conheceram a graça que me fora dada, Tiago, Cefas e João, que pareciam ser as colunas, deram a mim e a Barnabé as destras de comunhão, para que nós fôssemos aos gentios, e eles à circuncisão;"},
	{10, "10 recomendando-nos somente que nos lembrássemos dos pobres; o que também procurei fazer com diligência."},
	{11, "11 Quando, porém, Cefas veio a Antioquia, resisti-lhe na cara, porque era repreensível."},
	{12, "12 Pois antes de chegarem alguns da parte de Tiago, ele comia com os gentios; mas quando eles chegaram, se foi retirando e se apartava deles, temendo os que eram da circuncisão."},
	{13, "13 E os outros judeus também dissimularam com ele, de modo que até Barnabé se deixou levar pela sua dissimulação."},
	{14, "14 Mas, quando vi que não andavam retamente conforme a verdade do evangelho, disse a Cefas perante todos: Se tu, sendo judeu, vives como os gentios, e não como os judeus, como é que obrigas os gentios a viverem como judeus?"},
	{15, "15 Nós, judeus por natureza e não pecadores dentre os gentios,"},
	{16, "16 sabendo, contudo, que o homem não é justificado por obras da lei, mas sim, pela fé em Cristo Jesus, temos também crido em Cristo Jesus para sermos justificados pela fé em Cristo, e não por obras da lei; pois por obras da lei nenhuma carne será justificada."},
	{17, "17 Mas se, procurando ser justificados em Cristo, fomos nós mesmos também achados pecadores, é porventura Cristo ministro do pecado? De modo nenhum."},
	{18, "18 Porque, se torno a edificar aquilo que destruí, constituo-me a mim mesmo transgressor."},
	{19, "19 Pois eu pela lei morri para a lei, a fim de viver para Deus."},
	{20, "20 Já estou crucificado com Cristo; e vivo, não mais eu, mas Cristo vive em mim; e a vida que agora vivo na carne, vivo-a na fé no filho de Deus, o qual me amou, e se entregou a si mesmo por mim."},
	{21, "21 Não faço nula a graça de Deus; porque, se a justiça vem mediante a lei, logo Cristo morreu em vão."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct pt3 poems[] = {
	{1, "1 ó insensatos gálatas! quem vos fascinou a vós, ante cujos olhos foi representado Jesus Cristo como crucificado?"},
	{2, "2 Só isto quero saber de vós: Foi por obras da lei que recebestes o Espírito, ou pelo ouvir com fé?"},
	{3, "3 Sois vós tão insensatos? tendo começado pelo Espírito, é pela carne que agora acabareis?"},
	{4, "4 Será que padecestes tantas coisas em vão? Se é que isso foi em vão."},
	{5, "5 Aquele pois que vos dá o Espírito, e que opera milagres entre vós, acaso o faz pelas obras da lei, ou pelo ouvir com fé?"},
	{6, "6 Assim como Abraão creu a Deus, e isso lhe foi imputado como justiça."},
	{7, "7 Sabei, pois, que os que são da fé, esses são filhos de Abraão."},
	{8, "8 Ora, a Escritura, prevendo que Deus havia de justificar pela fé os gentios, anunciou previamente a boa nova a Abraão, dizendo: Em ti serão abençoadas todas as nações."},
	{9, "9 De modo que os que são da fé são abençoados com o crente Abraão."},
	{10, "10 Pois todos quantos são das obras da lei estão debaixo da maldição; porque escrito está: Maldito todo aquele que não permanece em todas as coisas que estão escritas no livro da lei, para fazê-las."},
	{11, "11 É evidente que pela lei ninguém é justificado diante de Deus, porque: O justo viverá da fé;"},
	{12, "12 ora, a lei não é da fé, mas: O que fizer estas coisas, por elas viverá."},
	{13, "13 Cristo nos resgatou da maldição da lei, fazendo-se maldição por nós; porque está escrito: Maldito todo aquele que for pendurado no madeiro;"},
	{14, "14 para que aos gentios viesse a bênção de Abraão em Jesus Cristo, a fim de que nós recebêssemos pela fé a promessa do Espírito."},
	{15, "15 Irmãos, como homem falo. Um testamento, embora de homem, uma vez confirmado, ninguém o anula, nem lhe acrescenta coisa alguma."},
	{16, "16 Ora, a Abraão e a seu descendente foram feitas as promessas; não diz: E a seus descendentes, como falando de muitos, mas como de um só: E a teu descendente, que é Cristo."},
	{17, "17 E digo isto: Ao testamento anteriormente confirmado por Deus, a lei, que veio quatrocentos e trinta anos depois, não invalida, de forma a tornar inoperante a promessa."},
	{18, "18 Pois se da lei provém a herança, já não provém mais da promessa; mas Deus, pela promessa, a deu gratuitamente a Abraão."},
	{19, "19 Logo, para que é a lei? Foi acrescentada por causa das transgressões, até que viesse o descendente a quem a promessa tinha sido feita; e foi ordenada por meio de anjos, pela mão de um mediador."},
	{20, "20 Ora, o mediador não o é de um só, mas Deus é um só."},
	{21, "21 É a lei, então, contra as promessas de Deus? De modo nenhum; porque, se fosse dada uma lei que pudesse vivificar, a justiça, na verdade, teria sido pela lei."},
	{22, "22 Mas a Escritura encerrou tudo debaixo do pecado, para que a promessa pela fé em Jesus Cristo fosse dada aos que crêem."},
	{23, "23 Mas, antes que viesse a fé, estávamos guardados debaixo da lei, encerrados para aquela fé que se havia de revelar."},
	{24, "24 De modo que a lei se tornou nosso aio, para nos conduzir a Cristo, a fim de que pela fé fôssemos justificados."},
	{25, "25 Mas, depois que veio a fé, já não estamos debaixo de aio."},
	{26, "26 Pois todos sois filhos de Deus pela fé em Cristo Jesus."},
	{27, "27 Porque todos quantos fostes batizados em Cristo vos revestistes de Cristo."},
	{28, "28 Não há judeu nem grego; não há escravo nem livre; não há homem nem mulher; porque todos vós sois um em Cristo Jesus."},
	{29, "29 E, se sois de Cristo, então sois descendência de Abraão, e herdeiros conforme a promessa."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct pt4 poems[] = {
	{1, "1 Ora, digo que por todo o tempo em que o herdeiro é menino, em nada difere de um servo, ainda que seja senhor de tudo;"},
	{2, "2 mas está debaixo de tutores e curadores até o tempo determinado pelo pai."},
	{3, "3 Assim também nós, quando éramos meninos, estávamos reduzidos à servidão debaixo dos rudimentos do mundo;"},
	{4, "4 mas, vindo a plenitude dos tempos, Deus enviou seu Filho, nascido de mulher, nascido debaixo de lei,"},
	{5, "5 para resgatar os que estavam debaixo de lei, a fim de recebermos a adoção de filhos."},
	{6, "6 E, porque sois filhos, Deus enviou aos nossos corações o Espírito de seu Filho, que clama: Aba, Pai."},
	{7, "7 Portanto já não és mais servo, mas filho; e se és filho, és também herdeiro por Deus."},
	{8, "8 Outrora, quando não conhecíeis a Deus, servíeis aos que por natureza não são deuses;"},
	{9, "9 agora, porém, que já conheceis a Deus, ou, melhor, sendo conhecidos por Deus, como tornais outra vez a esses rudimentos fracos e pobres, aos quais de novo quereis servir?"},
	{10, "10 Guardais dias, e meses, e tempos, e anos."},
	{11, "11 Temo a vosso respeito não haja eu trabalhado em vão entre vós."},
	{12, "12 Irmãos, rogo-vos que vos torneis como eu, porque também eu me tornei como vós. Nenhum mal me fizestes;"},
	{13, "13 e vós sabeis que por causa de uma enfermidade da carne vos anunciei o evangelho a primeira vez,"},
	{14, "14 e aquilo que na minha carne era para vós uma tentação, não o desprezastes nem o repelistes, antes me recebestes como a um anjo de Deus, mesmo como a Cristo Jesus."},
	{15, "15 Onde está, pois, aquela vossa satisfação? Porque vos dou testemunho de que, se possível fora, teríeis arrancado os vossos olhos, e mos teríeis dado."},
	{16, "16 Tornei-me acaso vosso inimigo, porque vos disse a verdade?"},
	{17, "17 Eles vos procuram zelosamente não com bons motivos, mas querem vos excluir, para que zelosamente os procureis a eles."},
	{18, "18 No que é bom, é bom serdes sempre procurados, e não só quando estou presente convosco."},
	{19, "19 Meus filhinhos, por quem de novo sinto as dores de parto, até que Cristo seja formado em vós;"},
	{20, "20 eu bem quisera estar presente convosco agora, e mudar o tom da minha voz; porque estou perplexo a vosso respeito."},
	{21, "21 Dizei-me, os que quereis estar debaixo da lei, não ouvis vós a lei?"},
	{22, "22 Porque está escrito que Abraão teve dois filhos, um da escrava, e outro da livre."},
	{23, "23 Todavia o que era da escrava nasceu segundo a carne, mas, o que era da livre, por promessa."},
	{24, "24 O que se entende por alegoria: pois essas mulheres são dois pactos; um do monte Sinai, que dá à luz filhos para a servidão, e que é Agar."},
	{25, "25 Ora, esta Agar é o monte Sinai na Arábia e corresponde à Jerusalém atual, pois é escrava com seus filhos."},
	{26, "26 Mas a Jerusalém que é de cima é livre; a qual é nossa mãe."},
	{27, "27 Pois está escrito: Alegra-te, estéril, que não dás à luz; esforça-te e clama, tu que não estás de parto; porque mais são os filhos da desolada do que os da que tem marido."},
	{28, "28 Ora vós, irmãos, sois filhos da promessa, como Isaque."},
	{29, "29 Mas, como naquele tempo o que nasceu segundo a carne perseguia ao que nasceu segundo o Espírito, assim é também agora."},
	{30, "30 Que diz, porém, a Escritura? Lança fora a escrava e seu filho, porque de modo algum o filho da escrava herdará com o filho da livre."},
	{31, "31 Pelo que, irmãos, não somos filhos da escrava, mas da livre."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct pt5 poems[] = {
	{1, "1 Para a liberdade Cristo nos libertou; permanecei, pois, firmes e não vos dobreis novamente a um jogo de escravidão."},
	{2, "2 Eis que eu, Paulo, vos digo que, se vos deixardes circuncidar, Cristo de nada vos aproveitará."},
	{3, "3 E de novo testifico a todo homem que se deixa circuncidar, que está obrigado a guardar toda a lei."},
	{4, "4 Separados estais de Cristo, vós os que vos justificais pela lei; da graça decaístes."},
	{5, "5 Nós, entretanto, pelo Espírito aguardamos a esperança da justiça que provém da fé."},
	{6, "6 Porque em Cristo Jesus nem a circuncisão nem a incircuncisão vale coisa alguma; mas sim a fé que opera pelo amor."},
	{7, "7 Corríeis bem; quem vos impediu de obedecer à verdade?"},
	{8, "8 Esta persuasão não vem daquele que vos chama."},
	{9, "9 Um pouco de fermento leveda a massa toda."},
	{10, "10 Confio de vós, no Senhor, que de outro modo não haveis de pensar; mas aquele que vos perturba, seja quem for, sofrerá a condenação."},
	{11, "11 Eu, porém, irmãos, se é que prego ainda a circuncisão, por que ainda sou perseguido? Nesse caso o escândalo da cruz estaria aniquilado."},
	{12, "12 Oxalá se mutilassem aqueles que vos andam inquietando."},
	{13, "13 Porque vós, irmãos, fostes chamados à liberdade. Mas não useis da liberdade para dar ocasião à carne, antes pelo amor servi-vos uns aos outros."},
	{14, "14 Pois toda a lei se cumpre numa só palavra, a saber: Amarás ao teu próximo como a ti mesmo."},
	{15, "15 Se vós, porém, vos mordeis e devorais uns aos outros, vede não vos consumais uns aos outros."},
	{16, "16 Digo, porém: Andai pelo Espírito, e não haveis de cumprir a cobiça da carne."},
	{17, "17 Porque a carne luta contra o Espírito, e o Espírito contra a carne; e estes se opõem um ao outro, para que não façais o que quereis."},
	{18, "18 Mas, se sois guiados pelo Espírito, não estais debaixo da lei."},
	{19, "19 Ora, as obras da carne são manifestas, as quais são: a prostituição, a impureza, a lascívia,"},
	{20, "20 a idolatria, a feitiçaria, as inimizades, as contendas, os ciúmes, as iras, as facções, as dissensões, os partidos,"},
	{21, "21 as invejas, as bebedices, as orgias, e coisas semelhantes a estas, contra as quais vos previno, como já antes vos preveni, que os que tais coisas praticam não herdarão o reino de Deus."},
	{22, "22 Mas o fruto do Espírito é: o amor, o gozo, a paz, a longanimidade, a benignidade, a bondade, a fidelidade."},
	{23, "23 a mansidão, o domínio próprio; contra estas coisas não há lei."},
	{24, "24 E os que são de Cristo Jesus crucificaram a carne com as suas paixões e concupiscências."},
	{25, "25 Se vivemos pelo Espírito, andemos também pelo Espírito."},
	{26, "26 Não nos tornemos vangloriosos, provocando-nos uns aos outros, invejando-nos uns aos outros."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct pt6 poems[] = {
	{1, "1 Irmãos, se um homem chegar a ser surpreendido em algum delito, vós que sois espirituais corrigi o tal com espírito de mansidão; e olha por ti mesmo, para que também tu não sejas tentado."},
	{2, "2 Levai as cargas uns dos outros, e assim cumprireis a lei de Cristo."},
	{3, "3 Pois, se alguém pensa ser alguma coisa, não sendo nada, engana-se a si mesmo."},
	{4, "4 Mas prove cada um a sua própria obra, e então terá motivo de glória somente em si mesmo, e não em outrem;"},
	{5, "5 porque cada qual levará o seu próprio fardo."},
	{6, "6 E o que está sendo instruído na palavra, faça participante em todas as boas coisas aquele que o instrui."},
	{7, "7 Não vos enganeis; Deus não se deixa escarnecer; pois tudo o que o homem semear, isso também ceifará."},
	{8, "8 Porque quem semeia na sua carne, da carne ceifará a corrupção; mas quem semeia no Espírito, do Espírito ceifará a vida eterna."},
	{9, "9 E não nos cansemos de fazer o bem, porque a seu tempo ceifaremos, se não houvermos desfalecido."},
	{10, "10 Então, enquanto temos oportunidade, façamos bem a todos, mas principamente aos domésticos da fé."},
	{11, "11 Vede com que grandes letras vos escrevo com minha própria mão."},
	{12, "12 Todos os que querem ostentar boa aparência na carne, esses vos obrigam a circuncidar-vos, somente para não serem perseguidos por causa da cruz de Cristo."},
	{13, "13 Porque nem ainda esses mesmos que se circuncidam guardam a lei, mas querem que vos circuncideis, para se gloriarem na vossa carne."},
	{14, "14 Mas longe esteja de mim gloriar-me, a não ser na cruz de nosso Senhor Jesus Cristo, pela qual o mundo está crucificado para mim e eu para o mundo."},
	{15, "15 Pois nem a circuncisão nem a incircuncisão é coisa alguma, mas sim o ser uma nova criatura."},
	{16, "16 E a todos quantos andarem conforme esta norma, paz e misericórdia sejam sobre eles e sobre o Israel de Deus."},
	{17, "17 Daqui em diante ninguém me moleste; porque eu trago no meu corpo as marcas de Jesus."},
	{18, "18 A graça de nosso Senhor Jesus Cristo seja, irmãos, com o vosso espírito. Amém."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};