#include <map>
#include <string>
class Bible8
{
	struct de1	{ int val; const char *msg; };
	struct de2	{ int val; const char *msg; };
	struct de3	{ int val; const char *msg; };
	struct de4	{ int val; const char *msg; };
public:
static void view1() {
struct de1 poems[] = {
	{1, "1 Zu der Zeit, als die Richter regierten, entstand eine Hungersnot im Lande. Damals zog ein Mann von Bethlehem-Juda fort, um sich im Gefilde Moab niederzulassen samt seinem Weib und seinen beiden Söhnen."},
	{2, "2 Dieser Mann aber hieß Elimelech und sein Weib Naemi, seine beiden Söhne aber hießen Machlon und Kiljon, die waren Ephratiter von Bethlehem-Juda; und sie gelangten ins Gefilde Moab und lebten dort."},
	{3, "3 Elimelech aber, Naemis Mann, starb, und sie blieb allein mit ihren beiden Söhnen."},
	{4, "4 Diese nahmen sich moabitische Frauen, eine hieß Orpa und die andere Ruth. Und sie wohnten daselbst etwa zehn Jahre."},
	{5, "5 Darnach starben auch sie beide, Machlon und Kiljon, also daß das Weib nach dem Tode ihrer beiden Söhne und ihres Mannes allein zurückblieb."},
	{6, "6 Da machte sie sich mit ihren beiden Schwiegertöchtern auf und kehrte zurück aus dem Gefilde Moab; denn sie hatten daselbst vernommen, daß der HERR sein Volk heimgesucht und ihm Brot gegeben habe."},
	{7, "7 Und sie verließ den Ort, da sie gewesen war, und ihre beiden Schwiegertöchter mit ihr, und sie machten sich auf den Weg, um wieder ins Land Juda zurückzukehren."},
	{8, "8 Naemi aber sprach zu ihren beiden Schwiegertöchtern: Gehet hin, kehret um, eine jede zu ihrer Mutter Haus! Der HERR tue euch Gutes, wie ihr es an den Verstorbenen und an mir getan habt!"},
	{9, "9 Der HERR gebe euch, daß ihr Ruhe findet, eine jede in ihres Mannes Haus! Und sie küßte sie."},
	{10, "10 Da erhoben sie ihre Stimmen und weinten und sprachen zu ihr: Wir wollen mit dir zu deinem Volke gehen!"},
	{11, "11 Aber Naemi sprach: Kehret um, meine Töchter! Warum wollt ihr mit mir gehen? Trage ich denn noch Kinder in meinem Schoß, die eure Männer werden könnten?"},
	{12, "12 Kehret um, meine Töchter, und gehet hin! Denn ich bin zu alt, um noch eines Mannes Weib zu werden. Und wenn ich auch spräche: Es ist zu hoffen, daß ich schon diese Nacht einen Mann bekomme und Söhne gebäre, wolltet ihr auf sie warten,"},
	{13, "13 bis sie groß geworden? Wolltet ihr um ihretwillen verziehen, wieder zu heiraten? Nicht doch, meine Töchter! Denn ich bin noch viel trauriger daran als ihr, weil des HERRN Hand wider mich ausgestreckt ist!"},
	{14, "14 Da erhoben sie ihre Stimmen und weinten noch mehr; und Orpa küßte ihre Schwiegermutter. Ruth aber hing ihr an."},
	{15, "15 Sie aber sprach: Siehe, deine Schwägerin ist umgekehrt zu ihrem Volk und zu ihren Göttern; kehre du auch um, deiner Schwägerin nach!"},
	{16, "16 Ruth antwortete: Dringe nicht in mich, daß ich dich verlassen und von dir weg umkehren soll! Denn wo du hingehst, da will ich auch hingehen, und wo du bleibst, da bleibe ich auch; dein Volk ist mein Volk, und dein Gott ist mein Gott!"},
	{17, "17 Wo du stirbst, da sterbe auch ich, daselbst will auch ich begraben sein; der HERR tue mir dies und das und noch mehr, wenn nicht der Tod allein uns scheiden soll! -"},
	{18, "18 Als sie nun sah, daß sie sich fest vorgenommen hatte, mit ihr zu gehen, ließ sie ab, ihr zuzureden."},
	{19, "19 Also gingen die beiden, bis sie nach Bethlehem kamen. Und als sie zu Bethlehem einzogen, geriet die ganze Stadt ihretwegen in Bewegung, und man fragte: Ist das die Naemi?"},
	{20, "20 Sie aber sprach: Heißet mich nicht Naemi, sondern nennt mich Mara; denn der Allmächtige hat mich sehr betrübt!"},
	{21, "21 Voll zog ich aus, aber leer hat mich der HERR wieder heimgebracht. Warum heißet ihr mich denn Naemi, da doch der HERR mich gedemütigt und der Allmächtige mich betrübt hat? -"},
	{22, "22 Es war aber am Anfang der Gerstenernte, daß Naemi mit ihrer Schwiegertochter Ruth, der Moabiterin, aus dem Gefilde Moab nach Bethlehem zurückkehrte."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct de2 poems[] = {
	{1, "1 Nun hatte Naemi einen Verwandten ihres Mannes, der war ein sehr vermöglicher Mann vom Geschlecht Elimelechs, namens Boas."},
	{2, "2 Ruth aber, die Moabiterin, sprach zu Naemi: Ich will doch aufs Feld hinausgehen und Ähren auflesen bei dem, vor welchem ich Gnade finde!"},
	{3, "3 Sie ging hin, kam und las Ähren auf dem Felde hinter den Schnittern her. Es traf sich aber, daß jenes Stück Feld dem Boas gehörte, der vom Geschlechte Elimelechs war."},
	{4, "4 Und siehe, Boas kam von Bethlehem her und sprach zu den Schnittern: Der HERR sei mit euch! Sie antworteten ihm: Der HERR segne dich!"},
	{5, "5 Und Boas fragte seinen Knaben, der über die Schnitter bestellt war: Wem gehört diese Jungfrau?"},
	{6, "6 Der Knabe, der über die Schnitter bestellt war, antwortete und sprach: Das ist die moabitische Jungfrau, die mit Naemi aus dem Lande der Moabiter zurückgekommen ist."},
	{7, "7 Sie hat gesagt: Laß mich doch auflesen und sammeln zwischen den Garben hinter den Schnittern her! Und sie kam und blieb vom Morgen an bis jetzt; sie bleibt nicht lange zu Hause sitzen!"},
	{8, "8 Da sprach Boas zu Ruth: Hörst du wohl, meine Tochter? Du sollst auf keinen andern Acker gehen, um aufzulesen; und begib dich auch nicht weg von hier, sondern halte dich da zu meinen Jungfrauen."},
	{9, "9 Dein Auge sei auf das Feld gerichtet, wo sie schneiden! Habe ich nicht meinen Knaben geboten, daß dich niemand anrühre? Und wenn dich dürstet, so geh hin zu den Gefäßen und trinke von dem, was meine Knaben schöpfen!"},
	{10, "10 Da fiel sie auf ihr Angesicht und neigte sich zur Erde und sprach: Warum habe ich vor deinen Augen Gnade gefunden, daß du dich um mich kümmerst, die ich doch fremd bin?"},
	{11, "11 Boas antwortete und sprach zu ihr: Es ist mir alles angezeigt worden, was du nach deines Mannes Tod an deiner Schwiegermutter getan hast, wie du deinen Vater und deine Mutter und dein Vaterland verlassen hast und zu einem Volke gezogen bist, das du zuvor nicht kanntest."},
	{12, "12 Der HERR vergelte dir deine Tat, und dein Lohn müsse vollkommen sein von dem HERRN, dem Gott Israels, zu welchem du gekommen bist, um unter seinen Flügeln Zuflucht zu nehmen!"},
	{13, "13 Sie sprach: Mein Herr, laß mich Gnade finden vor deinen Augen; denn du hast mich getröstet und deiner Magd freundlich zugesprochen, da ich doch nicht wie eine deiner Mägde bin!"},
	{14, "14 Und zur Essenszeit sprach Boas zu ihr: Komm her und iß von dem Brot und tunke deinen Bissen in den Essig! Und sie setzte sich zur Seite der Schnitter. Er aber gab ihr geröstetes Korn, und sie aß und ward satt und ließ übrig."},
	{15, "15 Und als sie wieder aufstand, um Ähren zu lesen, gebot Boas seinen Knaben und sprach: Laßt sie auch zwischen den Garben auflesen und schmähet sie nicht!"},
	{16, "16 Laßt auch mit Fleiß etwas von den Garben für sie fallen und laßt es liegen, daß sie es auflese, und niemand schelte sie deshalb!"},
	{17, "17 Also las sie auf dem Felde bis zum Abend und klopfte aus, was sie aufgelesen hatte; und es war etwa ein Epha Gerste."},
	{18, "18 Und sie trug es in die Stadt und zeigte ihrer Schwiegermutter, was sie aufgelesen hatte; dazu zog sie hervor und gab ihr, was sie übriggelassen hatte, nachdem sie satt geworden."},
	{19, "19 Da sprach ihre Schwiegermutter zu ihr: Wo hast du heute aufgelesen, und wo hast du gearbeitet? Gesegnet sei, der sich um dich gekümmert hat! Da sagte sie ihrer Schwiegermutter, bei wem sie gearbeitet hatte, und sprach: Der Mann, bei dem ich heute gearbeitet habe, heißt Boas! Naemi sprach zu ihrer Sohnsfrau:"},
	{20, "20 Gesegnet sei er vom HERRN, daß er seine Gnade den Lebendigen und den Toten nicht entzogen hat! Weiter sprach Naemi zu ihr: Der Mann ist uns nah verwandt, er gehört zu unsern Lösern. Ruth, die Moabiterin, sprach:"},
	{21, "21 Er sagte auch das zu mir: Du sollst dich zu meinen Knaben halten, bis sie die ganze Ernte beendigt haben!"},
	{22, "22 Naemi sprach zu ihrer Sohnsfrau Ruth: Es ist gut, meine Tochter, wenn du mit seinen Jungfrauen ausgehst und man dich nicht auf einem andern Acker antrifft!"},
	{23, "23 Also hielt sie sich bei der Ährenlese zu des Boas Jungfrauen, bis die Gersten-und Weizenernte vollendet war; darnach blieb sie bei ihrer Schwiegermutter."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct de3 poems[] = {
	{1, "1 Naemi aber, ihre Schwiegermutter, sprach zu ihr: Meine Tochter, sollte ich dir nicht eine Heimat verschaffen, da es dir wohlgehen wird?"},
	{2, "2 Und nun, ist nicht Boas, bei dessen Jungfrauen du gewesen bist, unser Verwandter? Siehe, er worfelt diese Nacht auf seiner Gerstentenne."},
	{3, "3 So bade dich nun und lege deine Kleider an und geh zur Tenne hinab; aber gib dich dem Mann nicht zu erkennen, bis er genug gegessen und getrunken hat."},
	{4, "4 Wenn er sich alsdann schlafen legt, so merk dir den Ort, wo er sich niederlegt, und gehe hin und decke auf zu seinen Füßen und lege dich, so wird er dir sagen, was du tun sollst."},
	{5, "5 Sie sprach zu ihr: Alles, was du mir sagst, das will ich tun!"},
	{6, "6 Und sie ging zur Tenne hinab und machte es genau so, wie ihre Schwiegermutter befohlen hatte."},
	{7, "7 Als nun Boas gegessen und getrunken hatte und sein Herz guter Dinge war, kam er und legte sich hinter einen Garbenhaufen; da kam sie leise und deckte auf zu seinen Füßen und legte sich."},
	{8, "8 Als es nun Mitternacht war, erschrak der Mann und wandte sich, und siehe, da lag ein Weib zu seinen Füßen! Da fragte er: Wer bist du?"},
	{9, "9 Sie aber antwortete: Ich bin Ruth, deine Magd! Breite deinen Flügel über deine Magd; denn du bist der Löser!"},
	{10, "10 Er aber sprach: Gesegnet seist du vom HERRN, meine Tochter! Du hast jetzt noch edler gehandelt als zuvor, daß du nicht den Jünglingen nachgelaufen bist, weder den armen noch den reichen!"},
	{11, "11 Nun, meine Tochter, fürchte dich nicht! Alles, was du sagst, das will ich dir tun; denn jedermann im Tor meines Volkes weiß, daß du ein wackeres Weib bist."},
	{12, "12 Und nun, es ist wahr, daß ich ein Löser bin; aber es ist noch ein anderer Löser vorhanden, der näher verwandt ist als ich."},
	{13, "13 Bleibe über Nacht! Will er dich morgen lösen, wohlan, so löse er dich! Gelüstet es ihn aber nicht, dich zu lösen, so will ich dich lösen, so wahr der HERR lebt!"},
	{14, "14 Bleib bis zum Morgen liegen! So lag sie bis an den Morgen zu seinen Füßen. Dann stand sie auf, ehe noch einer den andern erkennen konnte. Er aber gedachte: Wenn nur niemand erfährt, daß ein Weib in die Tenne gekommen ist."},
	{15, "15 Und er sprach: Gib den Überwurf, den du anhast und halte ihn her! Und sie hielt ihn her. Da maß er sechs Maß Gerste und lud es ihr auf und ging in die Stadt."},
	{16, "16 Sie aber kam zu ihrer Schwiegermutter; die sprach: Wie steht's mit dir, meine Tochter? Da teilte sie ihr alles mit, was der Mann ihr getan hatte und sprach:"},
	{17, "17 Diese sechs Maß Gerste gab er mir; denn er sprach: Du sollst nicht leer zu deiner Schwiegermutter kommen!"},
	{18, "18 Sie aber sprach: Sei still, meine Tochter, bis du erfährst, wie die Sache ausfällt! Denn der Mann wird nicht säumen, sondern die Sache noch heute erledigen."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct de4 poems[] = {
	{1, "1 Boas aber war zum Tor hinaufgegangen und hatte sich daselbst niedergesetzt; und siehe, da ging der Löser vorüber, von welchem Boas geredet hatte. Da sprach er: Komm, setze dich her, du Soundso!"},
	{2, "2 Und Boas nahm zehn Männer von den Ältesten der Stadt und sprach: Setzet euch hier! Und sie setzten sich."},
	{3, "3 Da sprach er zu dem Löser: Naemi, die aus dem Gefilde Moab zurückgekommen ist, bietet das Stück Feld feil, das unserm Bruder Elimelech gehörte."},
	{4, "4 Darum gedachte ich dir den Vorschlag zu machen: Willst du es lösen, so kaufe es vor den Bürgern und vor den Ältesten meines Volkes; willst du es aber nicht lösen, so sage mir's, daß ich es wisse; denn es ist niemand, der es lösen kann, als du, und ich nach dir!"},
	{5, "5 Er sprach: Ich will es lösen! Boas sprach: An welchem Tage du das Feld von der Hand Naemis kaufst, erwirbst du es auch von Ruth, der Moabiterin, dem Weibe des Verstorbenen, um den Namen des Verstorbenen auf seinem Erbteil wieder aufzurichten."},
	{6, "6 Da sprach der Löser: Ich kann es nicht lösen, ohne mein eigenes Erbteil zu verderben! Löse du für dich, was ich lösen sollte; denn ich kann es nicht lösen!"},
	{7, "7 Es war aber von alters her Sitte in Israel, bei der Lösung und beim Verkauf die ganze Sache also gültig zu machen: es zog einer seinen Schuh aus und gab ihn dem andern. Das war die Bestätigung in Israel."},
	{8, "8 So sprach nun der Löser zu Boas: Kauf du es für dich! und zog seinen Schuh aus."},
	{9, "9 Da sprach Boas zu den Ältesten und zu allem Volk: Ihr seid heute Zeugen, daß ich von Naemis Hand alles erkauft habe, was Elimelech, und alles, was Kiljon und Machlon gehörte."},
	{10, "10 Dazu nehme ich mir Ruth zum Weibe, die Moabiterin, Machlons Weib, um den Namen des Verstorbenen auf seinem Erbteil wieder aufzurichten, damit des Verstorbenen Name nicht verschwinde aus der Mitte seiner Brüder und aus dem Tor seines Ortes. Dessen seid ihr heute Zeugen!"},
	{11, "11 Da sprach alles Volk, das im Tore stand, und die Ältesten: Wir sind Zeugen! Der HERR mache das Weib, das in dein Haus kommt, wie Rahel und Lea, die beide das Haus Israel gebaut haben! Erwirb Vermögen in Ephrata und mache dir einen Namen in Bethlehem!"},
	{12, "12 Und dein Haus werde wie das Haus des Perez, den Tamar dem Juda gebar, durch den Samen, den dir der HERR von dieser jungen Frau geben wird!"},
	{13, "13 Also nahm Boas die Ruth, und sie ward sein Weib, und er kam zu ihr. Der HERR aber verlieh ihr, daß sie empfing und einen Sohn gebar."},
	{14, "14 Da sprachen die Weiber zu Naemi: Gelobt sei der HERR, der dir zu dieser Zeit einen Löser nicht versagt hat! Sein Name werde genannt in Israel!"},
	{15, "15 Der wird nun deine Seele erquicken und dich in deinem Alter versorgen; denn deine Schwiegertochter, die dich liebt, hat ihn geboren, sie, die dir mehr wert ist als sieben Söhne!"},
	{16, "16 Und Naemi nahm das Kind und legte es an ihren Busen und ward seine Wärterin."},
	{17, "17 Und ihre Nachbarinnen gaben ihm einen Namen und sprachen: Der Naemi ist ein Sohn geboren! Und sie hießen ihn Obed. Der ist der Vater Isais, des Vaters Davids."},
	{18, "18 Und dies ist der Stammbaum des Perez:"},
	{19, "19 Perez zeugte Hezron, Hezron zeugte Ram, Ram zeugte Amminadab,"},
	{20, "20 Amminadab zeugte Nahasson, Nahasson zeugte Salmon,"},
	{21, "21 Salmon zeugte Boas, Boas zeugte Obed, Obed zeugte Isai,"},
	{22, "22 Isai zeugte David. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};