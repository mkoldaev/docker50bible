#include <map>
#include <string>
class Bible32
{
	struct ka1	{ int val; const char *msg; };
	struct ka2	{ int val; const char *msg; };
	struct ka3	{ int val; const char *msg; };
	struct ka4	{ int val; const char *msg; };
public:
static void view1() {
struct ka1 poems[] = {
	{1, "1 იყო უფლის სიტყვა იონაზე, ამითაის ძეზე: "},
	{2, "2 ადექი, წადი ნინევეში, დიდ ქალაქში, და ამცნე, რომ მომწვდა მისი ბოროტების ამბავი. "},
	{3, "3 ადგა იონა, რომ თარშიშში გაქცეულიყო უფლის პირისგან. ჩავიდა იაფოში, მონახა თარშიშს მიმავალი ხომალდი, გადაიხადა საფასური, ჩაჯდა შიგ და მათთან ერთად გაემგზავრა თარშიშისკენ, რომ უფლის პირისგან გადახვეწილიყო. "},
	{4, "4 ამოაგდო უფალმა ძლიერი ქარი ზღვაზე. დიდმა ქარიშხალმა ააბობოქრა ზღვა; ცოტაც და, უნდა დალეწიღიეო ხომალდი. "},
	{5, "5 შეშინდნენ მეზღვაურები, ყველამ თავ-თავის ღმერთს შეჰღაღადა; ზღვაში გადაყარეს, რაც რამ საქონელი ჰქონდათ ხომალდზე, რომ შეემსუბუქებინათ იგი. იონა კი ხომალდის ბანქვეშ ჩასულიყო, იწვა და ეძინა. "},
	{6, "6 მივიდა მასთან ხომალდის უფროსი და უთხრა: რას დაგიძინია? ადექი, შენც შეჰღაღადე შენს ღმერთს, ვინძლო შეგვიწყალოს ღმერთმა და არ დავიღუპოთ. "},
	{7, "7 თქვა ერთმანეთში ხალხმა: მოდით, წილი ვყაროთ და გავიგოთ, ვის გამო ჩავცვივდით ამ განსაცდელში. ყარეს წილი და შეხვდა წილი იონას. "},
	{8, "8 ჰკითხეს: გვითხარი, ვის გამო ჩავცვივდით ამ განსაცდელში; რა ხელობის კაცი ხარ, საიდან მოდიხარ, სადაური ხარ, რა რჯულისა? "},
	{9, "9 მიუგო: ებრაელი ვარ, მოშიშარი უფლისა, ცათა ღმერთისა, რომელმაც ზღვა და ხმელეთი შექმნა. "},
	{10, "10 დიდად შეეშინდათ ამ კაცებს, უთხრეს: ეს რა ჩაგიდენიაო, როცა გაიგეს, რომ უფლის პირისგან იყო გაქცეული; რადგან თვითონვე გამოუტყდა. "},
	{11, "11 ჰკითხეს: რა უნდა გიყოთ, რომ ზღვა დაგვიწყნარდესო? რადგან ზღვა კვლავინდებურად ღელავდა. "},
	{12, "12 მიუგო: ამიღეთ, გადამაგდეთ ზღვაში და ზღვა დაგიწყნარდებათ, რადგან ვიცი, ეს დიდი ქარიშხალი ჩემს გამო დაგატყდათ თავს. "},
	{13, "13 მოუსვეს ნიჩბები, რომ ხმელეთს მისდგომოდნდნ, მაგრამ ვერაფერს გახდნენ, რადგან ზღვა კიდევ უფრო აუბობოქრდათ. "},
	{14, "14 მაშინ შეჰღაღადეს უფალს და უთხრეს: ჰე, უფალო, ნუ დაგვღუპავ ამ კაცის გამო, მაგრამ ნურც მართალ სისხლს მოგვკითხავ. რადგან ისე მოაწყვე, უფალო, როგორც გინდოდა. "},
	{15, "15 აიღეს და ზღვაში გადააგდეს იონა და ზღვამ შეწყვიტა ღელვა. "},
	{16, "16 დიდად შეეშინდათ ამ კაცებს უფლისა; მსხვერპლი შესწირეს და აღთქმები დაუდეს. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct ka2 poems[] = {
	{1, "1 მოავლინა უფალმა დიდი თევზი და შთაანთქმევინა იონა. სამი დღე და სამი ღამე დაჰყო იონამ თევზის სტომაქში. "},
	{2, "2 ლოცვა აღუვლინა იონამ უფალს, თავის ღმერთს, თევზის სტომაქიდან. "},
	{3, "3 თქვა: ჭირში მყოფმა შევღაღადე უფალს და მან ხმა გამცა. ქვესკნელის მუცლიდან შველა ვითხოვე და შენ ისმინე ჩემი ვედრება. "},
	{4, "4 როცა ღურღუმელში, ზღვის გულში ჩამაქანე, როცა მორევმა ჩამითრია, თავზე შენი ტალღა და ღვარი გადამდიოდა, "},
	{5, "5 ვთქვი: გაგდებული ვარ შენი პირისგან, ნუთუ ოდესმე მეღირსება-მეთქი შენი წმიდა ტაძრის ხილვა? "},
	{6, "6 სულამდე მიწია წყალმა, უფსკრულმა მომიცვა, თავზე ლელი შემომეწნა, "},
	{7, "7 მთების ფესვებამდე ჩავედი; მიწა სამუდამოდ ჩაირაზა ჩემს უკან, მაგრამ შენ ქვესკნელს გამოსტაცე ჩემი სიცოცხლე, უფალო, ღმერთო ჩემო! "},
	{8, "8 როცა სულს ვღაფავდი, ვახსენე უფალი და ჩემმა ვედრებამ შენამდე შეაღწია შენს წმიდა ტაძარში. "},
	{9, "9 ამაოებათა მსახურნი ვერ ეღირსებიან წყალობას! "},
	{10, "10 მე კი მსხვერპლს შემოგწირავ სამადლობელი სიტყვით; შევასრულებ, რაც აღთქმული მაქვს. უფლისგან არის ხსნა! "},
	{11, "11 უბრძანა უფალმა თევზს და მან ხმელეთზე გადმოანთხია იონა. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct ka3 poems[] = {
	{1, "1 იყო მეორედ უფლის სიტყვა იონაზე. "},
	{2, "2 ადექი, წადი ნინევეში, დიდ ქალაქში, და იქადაგე საქადაგებელი, რასაც მე გეტყვი. "},
	{3, "3 ადგა იონა და წავიდა ნინევეში, როგორც უფალმა უბრძანა. დიდი ქალაქი იყო ღვთის წინაშე ნინევე, სამი დღის სავალი. "},
	{4, "4 იარა იონამ ერთი დღე ქალაქში, ქადაგებდა და ამბობდა: კიდევ ორმოცი დღე და დაიქცევა ნინევე. "},
	{5, "5 იწამეს ნინეველებმა ღმერთი, გამოაცხადეს მარხვა და დიდიან-პატარიანად ჯვალოთი შეიმოსნენ. "},
	{6, "6 შეიტყო ეს ამბავი ნინევის მეფემ, ტახტიდან ჩამოვიდა, შემოიძარცვა სამოსელი; ჯვალო ჩაიცვა და ნაცარზე დაჯდა. "},
	{7, "7 გამოაცხადებინა ნინევეში მეფისა და მისი კარისკაცების ბრძანება: არც კაცმა, არც პირუტყვმა, ძროხამ თუ ცხვარმა, არ ჭამოს, არ მოძოვოს, არც წყალი დალიოს. "},
	{8, "8 ჯვალო ატაროს კაცმაც და პირუტყვმაც, მთელი ძალით შეჰღაღადონ ღმერთს, დააგდონ ბოროტების გზა და ყველა ავი საქმე, რაშიც კი ხელი აქვთ გარეული. "},
	{9, "9 ვინძლო კიდევ შეინანოს ღმერთმა, დაუცხრეს რისხვა და აღარ დავიღუპოთ! "},
	{10, "10 შეხედა ღმერთმა მათ საქციელს, რომ დააგდეს ბოროტების გზა და შეინანა ღმერთმა, ბოროტის ყოფას რომ უპირებდა მათ, და აღარ უყო. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct ka4 poems[] = {
	{1, "1 ძალზე განაწყენდა და გამწარდა იონა. "},
	{2, "2 ილოცა უფლის მიმართ და უთხრა: ჰე, უფალო, განა ამას არ ვამბობდი, როცა ჯერ კიდევ ჩემს მიწაზე ვიყავი? თავიდანაც იმიტომ გავრბოდი თარშიშში, რომ ვიცოდი, მონანიე და ლმობიერი ღმერთი ხარ, რისხვაგვიანი და მრავალმოწყალე; ნანობ ხოლმე ბოროტისყოფას. "},
	{3, "2 ახლა ბარემ ამომხადე სული, რადგან ამ სიცოცხლეს სიკვდილი მირჩევნია. "},
	{4, "4 უთხრა უფალმა: მაგრად გამწარდი? "},
	{5, "5 გავიდა ქალაქიდან იონა და ქალაქის აღმოსავლეთით გაჩერდა; იქ ერთი ჩარდახი გაიკეთა, დაჯდა მის ქვეშ, ჩრდილში, და დაელოდა, რა მოუვიდოდა ქალაქს. "},
	{6, "6 მოავლინა უფალმა ღმერთმა აყირო და იგი იონას თავსზემოთ აიზარდა, რომ დაეჩრდილებინა მისთვის და წყენა გაექარვებინა. დიდად გაახარა ამ აყირომ იონა. "},
	{7, "7 მოავლინა ღმერთმა მეორე დღეს, განთიადისას, მატლი, გამოაჭმევინა აყირო და გახმა იგი. "},
	{8, "8 მზე რომ ამოვიდა, მოავლინა ღმერთმა აღმოსავლეთის ცხელი ქარი; მზემ ისე დააცხუნა თავზე იონას, რომ მან, ღონემიხდილმა, სიკვდილი ინატრა, თქვა: ამ სიცოცხლეს სიკვდილი მირჩევნია. "},
	{9, "9 უთხრა ღმერთმა იონას: მაგრად გამწარდი იმ აყიროს გამო? მიუგო: მაგრად გავმწარდი, ლამის მოვკვდე. "},
	{10, "10 უთხრა უფალმა: შენ ერთი აყირო დაგენანა, თუმცა შენ არ დაგირგავს და არც გაგიზრდია. ერთი ღამის შვილი იყო და ერთ ღამეში გახმა. "},
	{11, "11 აბა, მე როგორ არ დამენანოს დიდი ქალაქი ნინევე, სადაც ასოციათასზე მეტი კაცია, ერთმანეთისგან რომ ვერ გაურჩევია მარჯვენა და მარცხენა, და სადაც უთვალავი პირუტყვია. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};