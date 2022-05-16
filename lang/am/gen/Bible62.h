#include <map>
#include <string>
class Bible62
{
	struct am1	{ int val; const char *msg; };
	struct am2	{ int val; const char *msg; };
	struct am3	{ int val; const char *msg; };
	struct am4	{ int val; const char *msg; };
	struct am5	{ int val; const char *msg; };
public:
static void view1() {
struct am1 poems[] = {
	{1, "1 ስለ ሕይወት ቃል ከመጀመሪያው የነበረውንና የሰማነውን በዓይኖቻችንም ያየነውን የተመለከትነውንም እጆቻችንም የዳሰሱትን እናወራለን፤ "},
	{2, "2 ሕይወትም ተገለጠ አይተንማል እንመሰክርማለን፥ ከአብ ዘንድ የነበረውንም ለእኛም የተገለጠውን የዘላለምን ሕይወት እናወራላችኋለን፤ "},
	{3, "3 እናንተ ደግሞ ከእኛ ጋር ኅብረት እንዲኖራችሁ ያየነውንና የሰማነውን ለእናንተ ደግሞ እናወራላችኋለን። ኅብረታችንም ከአባት ጋር ከልጁም ከኢየሱስ ክርስቶስ ጋር ነው። "},
	{4, "4 ደስታችሁም እንዲፈጸም ይህን እንጽፍላችኋለን። "},
	{5, "5 ከእርሱም የሰማናት ለእናንተም የምናወራላችሁ መልእክት። እግዚአብሔር ብርሃን ነው ጨለማም በእርሱ ዘንድ ከቶ የለም የምትል ይህች ናት። "},
	{6, "6 ከእርሱ ጋር ኅብረት አለን ብንል በጨለማም ብንመላለስ እንዋሻለን እውነትንም አናደርግም፤ "},
	{7, "7 ነገር ግን እርሱ በብርሃን እንዳለ በብርሃን ብንመላለስ ለእያንዳንዳችን ኅብረት አለን፥ የልጁም የኢየሱስ ክርስቶስ ደም ከኃጢአት ሁሉ ያነጻናል። "},
	{8, "8 ኃጢአት የለብንም ብንል ራሳችንን እናስታለን፥ እውነትም በእኛ ውስጥ የለም። "},
	{9, "9 በኃጢአታችን ብንናዘዝ ኃጢአታችንን ይቅር ሊለን ከዓመፃም ሁሉ ሊያነጻን የታመነና ጻድቅ ነው። "},
	{10, "10 ኃጢአትን አላደረግንም ብንል ሐሰተኛ እናደርገዋለን ቃሉም በእኛ ውስጥ የለም። "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct am2 poems[] = {
	{1, "1 ልጆቼ ሆይ፥ ኃጢአትን እንዳታደርጉ ይህን እጽፍላችኋለሁ። ማንም ኃጢአትን ቢያደርግ ከአብ ዘንድ ጠበቃ አለን እርሱም ጻድቅ የሆነ ኢየሱስ ክርስቶስ ነው። "},
	{2, "2 እርሱም የኃጢአታችን ማስተስሪያ ነው፥ ለኃጢአታችንም ብቻ አይደለም፥ ነገር ግን ለዓለሙ ሁሉ ኃጢአት እንጂ። "},
	{3, "3 ትእዛዛቱንም ብንጠብቅ በዚህ እንዳወቅነው እናውቃለን። "},
	{4, "4 አውቄዋለሁ የሚል ትእዛዛቱንም የማይጠብቅ ውሸተኛ ነው እውነትም በእርሱ ውስጥ የለም። "},
	{5, "5 ቃሉን ግን የሚጠብቅ ሁሉ በእርሱ የእግዚአብሔር ፍቅር በእውነት ተፈጽሞአል። በእርሱ እንዳለን በዚህ እናውቃለን፤ "},
	{6, "6 በእርሱ እኖራለሁ የሚል እርሱ እንደ ተመላለሰ ራሱ ደግሞ ሊመላለስ ይገባዋል። "},
	{7, "7 ወንድሞች ሆይ፥ ከመጀመሪያ የነበረቻችሁ አሮጌ ትእዛዝ እንጂ የምጽፍላችሁ አዲስ ትእዛዝ አይደለችም፤ አሮጌይቱ ትእዛዝ የሰማችኋት ቃል ናት። "},
	{8, "8 ዳግመኛ አዲስ ትእዛዝን እጽፍላችኋለሁ፥ ይህም ነገር በእርሱ በእናንተም እውነተኛ ነው፤ ጨለማው ያልፋልና እውነተኛውም ብርሃን አሁን ይበራል። "},
	{9, "9 በብርሃን አለሁ የሚል ወንድሙንም የሚጠላ እስከ አሁን በጨለማ አለ። "},
	{10, "10 ወንድሙንም የሚወድ በብርሃን ይኖራል ማሰናከያም የለበትም፤ "},
	{11, "11 ወንድሙን የሚጠላ ግን በጨለማ አለ፥ በጨለማም ይመላለሳል፥ የሚሄድበትንም አያውቅም፥ ጨለማው ዓይኖቹን አሳውሮታልና። "},
	{12, "12 ልጆች ሆይ፥ ኃጢአታችሁ ስለ ስሙ ተሰርዮላችኋልና እጽፍላችኋለሁ። "},
	{13, "13 አባቶች ሆይ፥ ከመጀመሪያ የነበረውን አውቃችኋልና እጽፍላችኋለሁ። ጎበዞች ሆይ፥ ክፉውን አሸንፋችኋልና እጽፍላችኋለሁ። ልጆች ሆይ፥ አብን አውቃችኋልና እጽፍላችኋለሁ። "},
	{14, "14 አባቶች ሆይ፥ ከመጀመሪያ የነበረውን አውቃችኋልና እጽፍላችኋለሁ። ጐበዞች ሆይ፥ ብርቱዎች ስለ ሆናችሁ የእግዚአብሔርም ቃል በእናንተ ስለሚኖር ክፉውንም ስለ አሸነፋችሁ እጽፍላችኋለሁ። "},
	{15, "16 ዓለምን ወይም በዓለም ያሉትን አትውደዱ፤ በዓለም ያለው ሁሉ እርሱም የሥጋ ምኞትና የዓይን አምሮት ስለ ገንዘብም መመካት ከዓለም ስለ ሆነ እንጂ ከአባት ስላልሆነ፥ ማንም ዓለምን ቢወድ የአባት ፍቅር በእርሱ ውስጥ የለም። "},
	{16, "17 ዓለሙም ምኞቱም ያልፋሉ፤ የእግዚአብሔርን ፈቃድ የሚያደርግ ግን ለዘላለም ይኖራል። "},
	{17, "18 ልጆች ሆይ፥ መጨረሻው ሰዓት ነው፥ የክርስቶስም ተቃዋሚ ይመጣ ዘንድ እንደ ሰማችሁ አሁን እንኳ ብዙዎች የክርስቶስ ተቃዋሚዎች ተነሥተዋል፤ ስለዚህም መጨረሻው ሰዓት እንደ ሆነ እናውቃለን። "},
	{18, "19 ከእኛ ዘንድ ወጡ፥ ዳሩ ግን ከእኛ ወገን አልነበሩም፤ ከእኛ ወገንስ ቢሆኑ ከእኛ ጋር ጸንተው በኖሩ ነበር፤ ነገር ግን ሁሉ ከእኛ ወገን እንዳልሆኑ ይገለጡ ዘንድ ወጡ። "},
	{19, "20 እናንተም ከቅዱሱ ቅባት ተቀብላችኋል፥ ሁሉንም ታውቃላችሁ። "},
	{20, "21 እውነትን የምታውቁ ስለ ሆናችሁ፥ ውሸትም ሁሉ ከእውነት እንዳልሆነ ስለምታውቁ እንጂ እውነትን ስለማታውቁ አልጽፍላችሁም። "},
	{21, "22 ክርስቶስ አይደለም ብሎ ኢየሱስን ከሚክድ በቀር ውሸተኛው ማን ነው? አብንና ወልድን የሚክድ ይህ የክርስቶስ ተቃዋሚ ነው። "},
	{22, "23 ወልድን የሚክድ ሁሉ አብ እንኳ የለውም፤ በወልድ የሚታመን አብ ደግሞ አለው። "},
	{23, "24 እናንተስ ከመጀመሪያ የሰማችሁት በእናንተ ጸንቶ ይኑር። ከመጀመሪያ የሰማችሁት በእናንተ ቢኖር፥ እናንተ ደግሞ በወልድና በአብ ትኖራላችሁ። "},
	{24, "25 እርሱም የሰጠን ተስፋ ይህ የዘላለም ሕይወት ነው። "},
	{25, "26 ስለሚያስቱአችሁ ሰዎች ይህን ጽፌላችኋለሁ። "},
	{26, "27 እናንተስ ከእርሱ የተቀበላችሁት ቅባት በእናንተ ይኖራል፥ ማንም ሊያስተምራችሁ አያስፈልጋችሁም፤ ነገር ግን የእርሱ ቅባት ስለ ሁሉ እንደሚያስተምራችሁ፥ እውነተኛም እንደ ሆነ ውሸትም እንዳልሆነ፥ እናንተንም እንዳስተማራችሁ፥ በእርሱ ኑሩ። "},
	{27, "28 አሁንም፥ ልጆች ሆይ፥ በሚገለጥበት ጊዜ እምነት እንዲሆንልን በመምጣቱም በእርሱ ፊት እንዳናፍር በእርሱ ኑሩ። "},
	{28, "29 ጻድቅ እንደ ሆነ ካወቃችሁ ጽድቅን የሚያደርግ ሁሉ ከእርሱ እንደ ተወለደ እወቁ። "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct am3 poems[] = {
	{1, "1 የእግዚአብሔር ልጆች ተብለን ልንጠራ አብ እንዴት ያለውን ፍቅር እንደ ሰጠን እዩ፥ እንዲሁም ነን። ስለዚህ ምክንያት ዓለም እርሱን ስላላወቀው እኛን አያውቀንም። "},
	{2, "2 ወዳጆች ሆይ፥ አሁን የእግዚአብሔር ልጆች ነን፥ ምንም እንደምንሆን ገና አልተገለጠም። ዳሩ ግን ቢገለጥ እርሱ እንዳለ እናየዋለንና እርሱን እንድንመስል እናውቃለን። "},
	{3, "3 በእርሱም ይህን ተስፋ የሚያደርግ ሁሉ እርሱ ንጹሕ እንደ ሆነ ራሱን ያነጻል። "},
	{4, "4 ኃጢአትን የሚያደርግ ሁሉ ዓመፅን ደግሞ ያደርጋል፥ ኃጢአትም ዓመፅ ነው። "},
	{5, "5 እርሱም ኃጢአትን ሊያስወግድ እንደ ተገለጠ ታውቃላችሁ፥ በእርሱም ኃጢአት የለም። "},
	{6, "6 በእርሱ የሚኖር ሁሉ ኃጢአትን አያደርግም፤ ኃጢአትን የሚያደርግ ሁሉ አላየውም አላወቀውምም። "},
	{7, "7 ልጆች ሆይ፥ ማንም አያስታችሁ፤ እርሱ ጻድቅ እንደ ሆነ ጽድቅን የሚያደርግ ጻድቅ ነው። "},
	{8, "8 ኃጢአትን የሚያደርግ ከዲያብሎስ ነው፥ ዲያብሎስ ከመጀመሪያ ኃጢአትን ያደርጋልና። "},
	{9, "9 ስለዚህ የዲያብሎስን ሥራ እንዲያፈርስ የእግዚአብሔር ልጅ ተገለጠ። ከእግዚአብሔር የተወለደ ሁሉ ኃጢአትን አያደርግም፥ ዘሩ በእርሱ ይኖራልና፤ ከእግዚአብሔርም ተወልዶአልና ኃጢአትን ሊያደርግ አይችልም። "},
	{10, "10 የእግዚአብሔር ልጆችና የዲያብሎስ ልጆች በዚህ የተገለጡ ናቸው፤ ጽድቅን የማያደርግና ወንድሙን የማይወድ ሁሉ ከእግዚአብሔር አይደለም። "},
	{11, "11 ከመጀመሪያ የሰማችኋት መልእክት። እርስ በርሳችን እንዋደድ የምትል ይህች ናትና፤ "},
	{12, "12 ከክፉው እንደ ነበረ ወንድሙንም እንደ ገደለ እንደ ቃየል አይደለም፤ ስለ ምንስ ገደለው? የገዛ ሥራው ክፉ፥ የወንድሙም ሥራ ጽድቅ ስለ ነበረ ነው። "},
	{13, "13 ወንድሞች ሆይ፥ ዓለም ቢጠላችሁ አትደነቁ። "},
	{14, "14 እኛ ወንድሞችን የምንወድ ስለ ሆንን ከሞት ወደ ሕይወት እንደ ተሻገርን እናውቃለን፤ ወንድሙን የማይወድ በሞት ይኖራል። "},
	{15, "15 ወንድሙን የሚጠላ ሁሉ ነፍሰ ገዳይ ነው፥ ነፍሰ ገዳይም የሆነ ሁሉ የዘላለም ሕይወት በእርሱ እንዳይኖር ታውቃላችሁ። "},
	{16, "16 እርሱ ስለ እኛ ነፍሱን አሳልፎ ሰጥቶአልና በዚህ ፍቅርን አውቀናል፤ እኛም ስለ ወንድሞቻችን ነፍሳችንን አሳልፈን እንድንሰጥ ይገባናል። "},
	{17, "17 ነገር ግን የዚህ ዓለም ገንዘብ ያለው፥ ወንድሙም የሚያስፈልገው ሲያጣ አይቶ ያልራራለት ማንም ቢሆን፥ የእግዚአብሔር ፍቅር በእርሱ እንዴት ይኖራል? "},
	{18, "18 ልጆቼ ሆይ፥ በሥራና በእውነት እንጂ በቃልና በአንደበት አንዋደድ። "},
	{19, "20 ልባችንም በእኛ ላይ በሚፈርድበት ሁሉ፥ ከእውነት እንደ ሆንን በዚህ እናውቃለን በፊቱም ልባችንን እናሳርፋለን፥ እግዚአብሔር ከልባችን ይልቅ ታላቅ ነውና ሁሉንም ያውቃል። "},
	{20, "21 ወዳጆች ሆይ፥ ልባችንስ ባይፈርድብን በእግዚአብሔር ዘንድ ድፍረት አለን፥ "},
	{21, "22 ትእዛዙንም የምንጠብቅና በፊቱ ደስ የሚያሰኘውን የምናደርግ ስለሆንን የምንለምነውን ሁሉ ከእርሱ እናገኛለን። "},
	{22, "23 ትእዛዚቱም ይህች ናት፥ በልጁ በኢየሱስ ክርስቶስ ስም እናምን ዘንድ፥ ትእዛዝንም እንደ ሰጠን እርስ በርሳችን እንዋደድ ዘንድ። "},
	{23, "24 ትእዛዙንም የሚጠብቅ በእርሱ ይኖራል እርሱም ይኖርበታል፤ በዚህም በእኛ እንዲኖር ከሰጠን ከመንፈሱ እናውቃለን። "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct am4 poems[] = {
	{1, "1 ወዳጆች ሆይ፥ መንፈስን ሁሉ አትመኑ፥ ነገር ግን መናፍስት ከእግዚአብሔር ሆነው እንደ ሆነ መርምሩ፤ ብዙዎች ሐሰተኞች ነቢያት ወደ ዓለም ወጥተዋልና። "},
	{2, "2 የእግዚአብሔርን መንፈስ በዚህ ታውቃላችሁ፤ ኢየሱስ ክርስቶስ በሥጋ እንደ መጣ የሚታመን መንፈስ ሁሉ ከእግዚአብሔር ነው፥ "},
	{3, "3 ኢየሱስ ክርስቶስም በሥጋ እንደ መጣ የማይታመን መንፈስ ሁሉ ከእግዚአብሔር አይደለም፤ ይህም የክርስቶስ ተቃዋሚው መንፈስ ነው፤ ይህም እንዲመጣ ሰምታችኋል፥ አሁንም እንኳ በዓለም አለ። "},
	{4, "4 ልጆች ሆይ፥ እናንተ ከእግዚአብሔር ናችሁ አሸንፋችኋቸውማል፥ በዓለም ካለው ይልቅ በእናንተ ያለው ታላቅ ነውና። "},
	{5, "5 እነርሱ ከዓለም ናቸው፤ ስለዚህ ከዓለም የሆነውን ይናገራሉ ዓለሙም ይሰማቸዋል። "},
	{6, "6 እኛ ከእግዚአብሔር ነን፤ እግዚአብሔርን የሚያውቅ ይሰማናል፤ ከእግዚአብሔር ያልሆነ አይሰማንም። የእውነትን መንፈስና የስሕተትን መንፈስ በዚህ እናውቃለን። "},
	{7, "7 ወዳጆች ሆይ፥ ፍቅር ከእግዚአብሔር ስለ ሆነ፥ የሚወደውም ሁሉ ከእግዚአብሔር ስለ ተወለደ እግዚአብሔርንም ስለሚያውቅ፥ እርስ በርሳችን እንዋደድ። "},
	{8, "8 ፍቅር የሌለው እግዚአብሔርን አያውቅም፥ እግዚአብሔር ፍቅር ነውና። "},
	{9, "9 በዚህ የእግዚአብሔር ፍቅር በእኛ ዘንድ ተገለጠ፥ በእርሱ በኩል በሕይወት እንኖር ዘንድ እግዚአብሔር አንድ ልጁን ወደ ዓለም ልኮታልና። "},
	{10, "10 ፍቅርም እንደዚህ ነው፤ እግዚአብሔር እርሱ ራሱ እንደ ወደደን ስለ ኃጢአታችንም ማስተስሪያ ይሆን ዘንድ ልጁን እንደ ላከ እንጂ እኛ እግዚአብሔርን እንደ ወደድነው አይደለም። "},
	{11, "11 ወዳጆች ሆይ፥ እግዚአብሔር እንዲህ አድርጎ ከወደደን እኛ ደግሞ እርስ በርሳችን ልንዋደድ ይገባናል። "},
	{12, "12 እግዚአብሔርን ማንም ከቶ አላየውም፤ እርስ በርሳችን ብንዋደድ እግዚአብሔር በእኛ ይኖራል ፍቅሩም በእኛ ፍጹም ሆኖአል። "},
	{13, "13 ከመንፈሱ ስለ ሰጠን፥ በእርሱ እንድንኖር እርሱም በእኛ እንዲኖር በዚህ እናውቃለን። "},
	{14, "14 እኛም አይተናል አባትም ልጁን የዓለም መድኃኒት ሊሆን እንደ ላከው እንመሰክራለን። "},
	{15, "15 ኢየሱስ የእግዚአብሔር ልጅ እንደ ሆነ በሚታመን ሁሉ እግዚአብሔር በእርሱ ይኖራል እርሱም በእግዚአብሔር ይኖራል። "},
	{16, "16 እኛም እግዚአብሔር ለእኛ ያለውን ፍቅር አውቀናል አምነንማል። እግዚአብሔር ፍቅር ነው፥ በፍቅርም የሚኖር በእግዚአብሔር ይኖራል እግዚአብሔርም በእርሱ ይኖራል። "},
	{17, "17 በፍርድ ቀን ድፍረት ይሆንልን ዘንድ ፍቅር በዚህ ከእኛ ጋር ተፈጽሞአል፤ እርሱ እንዳለ እኛ ደግሞ እንዲሁ በዚህ ዓለም ነንና። "},
	{18, "18 ፍጹም ፍቅር ፍርሃትን አውጥቶ ይጥላል እንጂ በፍቅር ፍርሃት የለም፥ ፍርሃት ቅጣት አለውና፤ የሚፈራም ሰው ፍቅሩ ፍጹም አይደለም። "},
	{19, "19 እርሱ አስቀድሞ ወዶናልና እኛ እንወደዋለን። "},
	{20, "20 ማንም። እግዚአብሔርን እወዳለሁ እያለ ወንድሙን ቢጠላ ሐሰተኛ ነው፤ ያየውን ወንድሙን የማይወድ ያላየውን እግዚአብሔርን ሊወደው እንዴት ይችላል? "},
	{21, "21 እግዚአብሔርንም የሚወድ ወንድሙን ደግሞ እንዲወድ ይህች ትእዛዝ ከእርሱ አለችን። "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct am5 poems[] = {
	{1, "1 ክርስቶስ ነው ብሎ በኢየሱስ የሚያምን ሁሉ ከእግዚአብሔር ተወልዶአል፥ ወላጁንም የሚወድ ሁሉ ከእርሱ የተወለደውን ደግሞ ይወዳል። "},
	{2, "2 እግዚአብሔርን ስንወድ ትእዛዛቱንም ስናደርግ የእግዚአብሔርን ልጆች እንድንወድ በዚህ እናውቃለን። "},
	{3, "3 ትእዛዛቱን ልንጠብቅ የእግዚአብሔር ፍቅር ይህ ነውና፤ ትእዛዛቱም ከባዶች አይደሉም። "},
	{4, "4 ከእግዚአብሔር የተወለደ ሁሉ ዓለምን ያሸንፋልና፤ ዓለምንም የሚያሸንፈው እምነታችን ነው። "},
	{5, "5 ኢየሱስም የእግዚአብሔር ልጅ እንደ ሆነ ከሚያምን በቀር ዓለምን የሚያሸንፍ ማን ነው? "},
	{6, "6 በውኃና በደም የመጣ ይህ ነው እርሱም ኢየሱስ ክርስቶስ፤ በውኃውና በደሙ እንጂ በውኃው ብቻ አይደለም። "},
	{7, "7 መንፈስም እውነት ነውና የሚመሰክረው መንፈስ ነው። "},
	{8, "8 የሚመሰክሩት መንፈሱና ውኃው ደሙም ሦስት ናቸውና፤ ሦስቱም በአንድ ይስማማሉ። "},
	{9, "9 የሰውን ምስክር ብንቀበል የእግዚአብሔር ምስክር ከእርሱ ይልቅ ይበልጣል፤ ስለ ልጁ የመሰከረው የእግዚአብሔር ምስክር ይህ ነውና። "},
	{10, "10 በእግዚአብሔር ልጅ የሚያምን በነፍሱ ምስክር አለው፤ በእግዚአብሔር የማያምን እግዚአብሔር ስለ ልጁ የመሰከረውን ምስክር ስላላመነ ሐሰተኛ አድርጎታል። "},
	{11, "11 እግዚአብሔርም የዘላለምን ሕይወት እንደ ሰጠን ይህም ሕይወት በልጁ እንዳለ ምስክሩ ይህ ነው። "},
	{12, "12 ልጁ ያለው ሕይወት አለው፤ የእግዚአብሔር ልጅ የሌለው ሕይወት የለውም። "},
	{13, "13 የዘላለም ሕይወት እንዳላችሁ ታውቁ ዘንድ በእግዚአብሔር ልጅ ስም ለምታምኑ ይህን ጽፌላችኋለሁ። "},
	{14, "14 በእርሱ ዘንድ ያለን ድፍረት ይህ ነው፤ እንደ ፈቃዱ አንዳች ብንለምን ይሰማናል። "},
	{15, "15 የምንለምነውንም ሁሉ እንዲሰማልን ብናውቅ ከእርሱ የለመነውን ልመና እንደ ተቀበልን እናውቃለን። "},
	{16, "16 ማንም ወንድሙን ሞት የማይገባውን ኃጢአት ሲያደርግ ቢያየው ይለምን፥ ሞትም የማይገባውን ኃጢአት ላደረጉት ሕይወት ይሰጥለታል። ሞት የሚገባው ኃጢአት አለ፤ ስለዚያ እንዲጠይቅ አልልም። "},
	{17, "17 ዓመፃ ሁሉ ኃጢአት ነው፥ ሞትም የማይገባው ኃጢአት አለ። "},
	{18, "18 ከእግዚአብሔር የተወለደ ሁሉ ኃጢአትን እንዳያደርግ፥ ነገር ግን ከእግዚአብሔር የተወለደው ራሱን እንዲጠብቅ ክፉውም እንዳይነካው እናውቃለን። "},
	{19, "19 ከእግዚአብሔር እንደ ሆንን ዓለምም በሞላው በክፉው እንደ ተያዘ እናውቃለን። "},
	{20, "20 የእግዚአብሔርም ልጅ እንደ መጣ፥ እውነተኛም የሆነውን እናውቅ ዘንድ ልቡናን እንደ ሰጠን እናውቃለን፤ እውነተኛም በሆነው በእርሱ አለን፥ እርሱም ልጁ ኢየሱስ ክርስቶስ ነው። እርሱ እውነተኛ አምላክና የዘላለም ሕይወት ነው። "},
	{21, "21 ልጆች ሆይ፥ ከጣዖታት ራሳችሁን ጠብቁ። "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};