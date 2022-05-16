#include <map>
#include <string>
class Bible8
{
	struct pt1	{ int val; const char *msg; };
	struct pt2	{ int val; const char *msg; };
	struct pt3	{ int val; const char *msg; };
	struct pt4	{ int val; const char *msg; };
public:
static void view1() {
struct pt1 poems[] = {
	{1, "1 Nos dias em que os juízes governavam, houve uma fome na terra; pelo que um homem de Belém de Judá saiu a peregrinar no país de Moabe, ele, sua mulher, e seus dois filhos."},
	{2, "2 Chamava-se este homem Elimeleque, e sua mulher Noêmi, e seus dois filhos se chamavam Malom e Quiliom; eram efrateus, de Belém de Judá. Tendo entrado no país de Moabe, ficaram ali."},
	{3, "3 E morreu Elimeleque, marido de Noêmi; e ficou ela com os seus dois filhos,"},
	{4, "4 os quais se casaram com mulheres moabitas; uma destas se chamava Orfa, e a outra Rute; e moraram ali quase dez anos."},
	{5, "5 E morreram também os dois, Malom e Quiliom, ficando assim a mulher desamparada de seus dois filhos e de seu marido."},
	{6, "6 Então se levantou ela com as suas noras, para voltar do país de Moabe, porquanto nessa terra tinha ouvido que e Senhor havia visitado o seu povo, dando-lhe pão."},
	{7, "7 Pelo que saiu de lugar onde estava, e com ela as duas noras. Indo elas caminhando para voltarem para a terra de Judá,"},
	{8, "8 disse Noêmi às suas noras: Ide, voltai, cada uma para a casa de sua mãe; e o Senhor use convosco de benevolência, como vós o fizestes com os falecidos e comigo."},
	{9, "9 O Senhor vos dê que acheis descanso cada uma em casa de seu marido. Quando as beijou, porém, levantaram a vóz e choraram."},
	{10, "10 E disseram-lhe: Certamente voltaremos contigo para o teu povo."},
	{11, "11 Noêmi, porém, respondeu: Voltai, minhas filhas; porque ireis comigo? Tenho eu ainda filhos no meu ventre, para que vos viessem a ser maridos?"},
	{12, "12 Voltai, filhas minhas; ide-vos, porque já sou velha demais para me casar. Ainda quando eu dissesse: Tenho esperança; ainda que esta noite tivesse marido e ainda viesse a ter filhos."},
	{13, "13 esperá-los-íeis até que viessem a ser grandes? deter-vos-íeis por eles, sem tomardes marido? Não, filhas minhas, porque mais amargo me é a mim do que a vós mesmas; porquanto a mão do Senhor se descarregou contra mim."},
	{14, "14 Então levantaram a voz, e tornaram a chorar; e Orfa beijou a sua sogra, porém Rute se apegou a ela."},
	{15, "15 Pelo que disse Noêmi: Eis que tua concunhada voltou para o seu povo e para os seus deuses; volta também tu após a tua concunhada."},
	{16, "16 Respondeu, porém, Rute: Não me instes a que te abandone e deixe de seguir-te. Porque aonde quer que tu fores, irei eu; e onde quer que pousares, ali pousarei eu; o teu povo será o meu povo, o teu Deus será o meu Deus."},
	{17, "17 Onde quer que morreres, morrerei eu, e ali serei sepultada. Assim me faça o Senhor, e outro tanto, se outra coisa que não seja a morte me separar de ti."},
	{18, "18 Vendo Noêmi que de todo estava resolvida a ir com ela, deixou de lhe falar nisso."},
	{19, "19 Assim, pois, foram-se ambas, até que chegaram a Belém. E sucedeu que, ao entrarem em Belém, toda a cidade se comoveu por causa delas, e as mulheres perguntavam: É esta, porventura, Noêmi?"},
	{20, "20 Ela, porém, lhes respondeu: Não me chameis Noêmi; chamai-me Mara, porque o Todo-Poderoso me encheu de amargura."},
	{21, "21 Cheia parti, porém vazia o Senhor me fez tornar. Por que, pois, me chamais Noêmi, visto que o Senhor testemunhou contra mim, e o Todo-Poderoso me afligiu?"},
	{22, "22 Assim Noêmi voltou, e com ela Rute, a moabita, sua nora, que veio do país de Moabe; e chegaram a Belém no principio da sega da cevada."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct pt2 poems[] = {
	{1, "1 Ora, tinha Noêmi um parente de seu marido, homem poderoso e rico, da família de Elimeleque; e ele se chamava Boaz."},
	{2, "2 Rute, a moabita, disse a Noêmi: Deixa-me ir ao campo a apanhar espigas atrás daquele a cujos olhos eu achar graça. E ela lhe respondeu: Vai, minha filha."},
	{3, "3 Foi, pois, e chegando ao campo respigava após os segadores; e caiu-lhe em sorte uma parte do campo de Boaz, que era da família de Elimeleque."},
	{4, "4 E eis que Boaz veio de Belém, e disse aos segadores: O Senhor seja convosco. Responderam-lhe eles: O Senhor te abençoe."},
	{5, "5 Depois perguntou Boaz ao moço que estava posto sobre os segadores: De quem é esta moça?"},
	{6, "6 Respondeu-lhe o moço: Esta é a moça moabita que voltou com Noêmi do país de Moabe."},
	{7, "7 Disse-me ela: Deixa-me colher e ajuntar espigas por entre os molhos após os segadores: Assim ela veio, e está aqui desde pela manhã até agora, sem descansar nem sequer um pouco."},
	{8, "8 Então disse Boaz a Rute: Escuta filha minha; não vás colher em outro campo, nem tampouco passes daqui, mas ajunta-te às minhas moças."},
	{9, "9 Os teus olhos estarão atentos no campo que segarem, e irás após elas; não dei eu ordem aos moços, que não te molestem? Quando tiveres sede, vai aos vasos, e bebe do que os moços tiverem tirado."},
	{10, "10 Então ela, inclinando-se e prostrando-se com o rosto em terra, perguntou-lhe: Por que achei eu graça aos teus olhos, para que faças caso de mim, sendo eu estrangeira?"},
	{11, "11 Ao que lhe respondeu Boaz: Bem se me contou tudo quanto tens feito para com tua sogra depois da morte de teu marido; como deixaste a teu pai e a tua mãe, e a terra onde nasceste, e vieste para um povo que dantes não conhecias."},
	{12, "12 O Senhor recompense o que fizeste, e te seja concedido pleno galardão da parte do Senhor Deus de Israel, sob cujas asas te vieste abrigar."},
	{13, "13 E disse ela: Ache eu graça aos teus olhos, senhor meu, pois me consolaste, e falaste bondosamente a tua serva, não sendo eu nem mesmo como uma das tuas criadas."},
	{14, "14 Também à hora de comer, disse-lhe Boaz: Achega-te, come do pão e molha o teu bocado no vinagre. E, sentando-se ela ao lado dos segadores, ele lhe ofereceu grão tostado, e ela comeu e ficou satisfeita, e ainda lhe sobejou."},
	{15, "15 Quando ela se levantou para respigar, Boaz deu ordem aos seus moços, dizendo: Até entre os molhos deixai-a respirar, e não a censureis."},
	{16, "16 Também, tirai dos molhos algumas espigas e deixai-as ficar, para que as colha, e não a repreendais."},
	{17, "17 Assim ela respigou naquele campo até a tarde; e debulhou o que havia apanhado e foi quase uma efa de cevada."},
	{18, "18 Então, carregando com a cevada, veio à cidade; e viu sua sogra o que ela havia apanhado. Também Rute tirou e deu-lhe o que lhe sobejara depois de fartar-se."},
	{19, "19 Ao que lhe perguntou sua sogra: Onde respigaste hoje, e onde trabalhaste? Bendito seja aquele que fez caso de ti. E ela relatou à sua sogra com quem tinha trabalhado, e disse: O nome do homem com quem hoje trabalhei é Boaz."},
	{20, "20 Disse Noêmi a sua nora: Bendito seja ele do Senhor, que não tem deixado de misturar a sua beneficência nem para com os vivos nem para com os mortos. Disse-lhe mais Noêmi: Esse homem é parente nosso, um dos nossos remidores."},
	{21, "21 Respondeu Rute, a moabita: Ele me disse ainda: Seguirás de perto os meus moços até que tenham acabado toda a minha sega."},
	{22, "22 Então disse Noêmi a sua nora, Rute: Bom é, filha minha, que saias com as suas moças, e que não te encontrem noutro campo."},
	{23, "23 Assim se ajuntou com as moças de Boaz, para respigar até e fim da sega da cevada e do trigo; e morava com a sua sogra."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct pt3 poems[] = {
	{1, "1 Depois lhe disse Noêmi, sua sogra: Minha filha, não te hei de buscar descanso, para que fiques bem?"},
	{2, "2 Ora pois, não é Boaz, com cujas moças estiveste, de nossa parentela. Eis que esta noite ele vai joeirar a cevada na eira."},
	{3, "3 Lava-te pois, unge-te, veste os teus melhores vestidos, e desce à eira; porém não te dês a conhecer ao homem, até que tenha acabado de comer e beber."},
	{4, "4 E quando ele se deitar, notarás o lugar em que se deita; então entrarás, descobrir-lhe-ás os pés e te deitarás, e ele te dirá o que deves fazer."},
	{5, "5 Respondeu-lhe Rute: Tudo quanto me disseres, farei."},
	{6, "6 Então desceu à eira, e fez conforme tudo o que sua sogra lhe tinha ordenado."},
	{7, "7 Havendo, pois, Boaz comido e bebido, e estando já o seu coração alegre, veio deitar-se ao pé de uma meda; e vindo ela de mansinho, descobriu-lhe os pés, e se deitou."},
	{8, "8 Ora, pela meia-noite, o homem estremeceu, voltou-se, e viu uma mulher deitada aos seus pes."},
	{9, "9 E perguntou ele: Quem és tu? Ao que ela respondeu: Sou Rute, tua serva; estende a tua capa sobre a tua serva, porque tu és o remidor."},
	{10, "10 Então disse ele: Bendita sejas tu do Senhor, minha filha; mostraste agora mais bondade do que dantes, visto que após nenhum mancebo foste, quer pobre quer rico."},
	{11, "11 Agora, pois, minha filha, não temas; tudo quanto disseres te farei, pois toda a cidade do meu povo sabe que és mulher virtuosa."},
	{12, "12 Ora, é bem verdade que eu sou remidor, porém há ainda outro mais chegado do que eu."},
	{13, "13 Fica-te aqui esta noite, e será que pela manhã, se ele cumprir para contigo os deveres de remidor, que o faça; mas se não os quiser cumprir, então eu o farei tão certamente como vive o Senhor; deita-te até pela manhã."},
	{14, "14 Ficou, pois, deitada a seus pés até pela manhã, e levantou-se antes que fosse possível a uma pessoa reconhecer outra; porquanto ele disse: Não se saiba que uma mulher veio à eira."},
	{15, "15 Disse mais: Traze aqui a capa com que te cobres, e segura-a. Segurou-a, pois, e ele as mediu seis medidas de cevada, e lhas pôs no ombro. Então ela foi para a cidade."},
	{16, "16 Quando chegou à sua sogra, esta lhe perguntou: Como te houveste, minha filha? E ela lhe contou tudo quanto aquele homem lhe fizera."},
	{17, "17 Disse mais: Estas seis medidas de cevada ele mas deu, dizendo: Não voltarás vazia para tua sogra."},
	{18, "18 Então disse Noêmi: Espera, minha filha, até que saibas como irá terminar o caso; porque aquele homem não descansará enquanto não tiver concluído hoje este negócio."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct pt4 poems[] = {
	{1, "1 Boaz subiu à porta, e sentou-se ali; e eis que o remidor de quem ar de jumentos. Ela o levou à casa de seu pai, o qual, vendo-o, ele, desviando-se para ali, sentou-se."},
	{2, "2 Então Boaz tomou dez homens dentre os anciãos da cidade, e lhes disse: Sentai-vos aqui. E eles se sentaram."},
	{3, "3 Disse Boaz ao remidor: Noêmi, que voltou da terra dos moabitas, vendeu a parte da terra que pertencia a Elimeleque; nosso irmão."},
	{4, "4 Resolvi informar-te disto, e dizer-te: Compra-a na presença dos que estão sentados aqui, na presença dos anciãos do meu povo; se hás de redimi-la, redime-a, e se não, declara-mo, para que o saiba, pois outro não há, senão tu, que a redima, e eu depois de ti. Então disse ele: Eu a redimirei."},
	{5, "5 Disse, porém, Boaz: No dia em que comprares o campo da mão de Noêmi, também tomarás a Rute, a moabita, que foi mulher do falecido, para suscitar o nome dele na sua herança."},
	{6, "6 Então disse o remidor: Não poderei redimi-lo para mim, para que não prejudique a minha própria herança; toma para ti o meu direito de remissão, porque eu não o posso fazer."},
	{7, "7 Outrora em Israel, para confirmar qualquer negócio relativo à remissão e à permuta, o homem descalçava o sapato e o dava ao seu próximo; e isto era por testemunho em Israel."},
	{8, "8 Dizendo, pois, o remidor a Boaz: Compra-a para ti, descalçou o sapato."},
	{9, "9 Então Boaz disse aos anciãos e a todo o povo: Sois hoje testemunhas de que comprei tudo quanto foi de Elimeleque, e de Quiliom, e de Malom, da mão de Noêmi,"},
	{10, "10 e de que também tomei por mulher a Rute, a moabita, que foi mulher de Malom, para suscitar o nome do falecido na sua herança, para que a nome dele não seja desarraigado dentre seus irmãos e da porta do seu lugar; disto sois hoje testemunhas."},
	{11, "11 Ao que todo o povo que estava na porta e os anciãos responderam: Somos testemunhas. O Senhor faça a esta mulher, que entra na tua casa, como a Raquel e a Léia, que juntas edificaram a casa de Israel. Porta-te valorosamente em Efrata, e faze-te nome afamado em Belém."},
	{12, "12 Também seja a tua casa como a casa de Pérez, que Tamar deu a Judá, pela posteridade que o Senhor te der desta moça."},
	{13, "13 Assim tomou Boaz a Rute, e ela lhe foi por mulher; ele a conheceu, e o Senhor permitiu a Rute conceber, e ela teve um filho."},
	{14, "14 Disseram então as mulheres a Noêmi: Bendito seja o Senhor, que não te deixou hoje sem remidor; e torne-se o seu nome afamado em Israel."},
	{15, "15 Ele será restaurador da tua vida, e consolador da tua velhice, pois tua nora, que te ama, o deu à luz; ela te é melhor do que sete filhos."},
	{16, "16 E Noêmi tomou o menino, pô-lo no seu regaço, e foi sua ama."},
	{17, "17 E as vizinhas deram-lhe nome, dizendo: A Noêmi nasceu um filho, E chamaram ao menino Obede. Este é o pai de Jessé, pai de Davi."},
	{18, "18 São estas as gerações de Pérez: Pérez gerou a Hezrom,"},
	{19, "19 Hezrom gerou a Rão, Rão gerou a Aminadabe,"},
	{20, "20 Aminadabe gereu a Nasom, Nasom gerou a Salmom,"},
	{21, "21 Salmom gerou a Boaz, Boaz gerou a Obede,"},
	{22, "22 Obede gerou a Jessé, e Jessé gerou a Davi."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};