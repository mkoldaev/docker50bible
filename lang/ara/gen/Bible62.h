#include <map>
#include <string>
class Bible62
{
	struct ara1	{ int val; const char *msg; };
	struct ara2	{ int val; const char *msg; };
	struct ara3	{ int val; const char *msg; };
	struct ara4	{ int val; const char *msg; };
	struct ara5	{ int val; const char *msg; };
public:
static void view1() {
struct ara1 poems[] = {
	{1, "1 الذي كان من البدء الذي سمعناه الذي رأيناه بعيوننا الذي شاهدناه ولمسته ايدينا من جهة كلمة الحياة"},
	{2, "2 فان الحياة أظهرت وقد رأينا ونشهد ونخبركم بالحياة الابدية التي كانت عند الآب وأظهرت لنا"},
	{3, "3 الذي رأيناه وسمعناه نخبركم به لكي يكون لكم ايضا شركة معنا. واما شركتنا نحن فهي مع الآب ومع ابنه يسوع المسيح"},
	{4, "4 ونكتب اليكم هذا لكي يكون فرحكم كاملا"},
	{5, "5 وهذا هو الخبر الذي سمعناه منه ونخبركم به ان الله نور وليس فيه ظلمة البتة"},
	{6, "6 ان قلنا ان لنا شركة معه وسلكنا في الظلمة نكذب ولسنا نعمل الحق"},
	{7, "7 ولكن ان سلكنا في النور كما هو في النور فلنا شركة بعضنا مع بعض ودم يسوع المسيح ابنه يطهرنا من كل خطية"},
	{8, "8 ان قلنا انه ليس لنا خطية نضل انفسنا وليس الحق فينا"},
	{9, "9 ان اعترفنا بخطايانا فهو امين وعادل حتى يغفر لنا خطايانا ويطهرنا من كل اثم"},
	{10, "10 ان قلنا اننا لم نخطئ نجعله كاذبا وكلمته ليست فينا"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct ara2 poems[] = {
	{1, "1 يا اولادي اكتب اليكم هذا لكي لا تخطئوا. وان اخطأ احد فلنا شفيع عند الآب يسوع المسيح البار"},
	{2, "2 وهو كفارة لخطايانا. ليس لخطايانا فقط بل لخطايا كل العالم ايضا"},
	{3, "3 وبهذا نعرف اننا قد عرفناه ان حفظنا وصاياه"},
	{4, "4 من قال قد عرفته وهو لا يحفظ وصاياه فهو كاذب وليس الحق فيه"},
	{5, "5 واما من حفظ كلمته فحقا في هذا قد تكملت محبة الله. بهذا نعرف اننا فيه"},
	{6, "6 من قال انه ثابت فيه ينبغي انه كما سلك ذاك هكذا يسلك هو ايضا"},
	{7, "7 ايها الاخوة لست اكتب اليكم وصية جديدة بل وصية قديمة كانت عندكم من البدء. الوصية القديمة هي الكلمة التي سمعتموها من البدء"},
	{8, "8 ايضا وصية جديدة اكتب اليكم ما هو حق فيه وفيكم ان الظلمة قد مضت والنور الحقيقي الآن يضيء"},
	{9, "9 من قال انه في النور وهو يبغض اخاه فهو الى الآن في الظلمة"},
	{10, "10 من يحب اخاه يثبت في النور وليس فيه عثرة"},
	{11, "11 واما من يبغض اخاه فهو في الظلمة وفي الظلمة يسلك ولا يعلم اين يمضي لان الظلمة اعمت عينيه"},
	{12, "12 اكتب اليكم ايها الاولاد لانه قد غفرت لكم الخطايا من اجل اسمه"},
	{13, "13 اكتب اليكم ايها الآباء لانكم قد عرفتم الذي من البدء. اكتب اليكم ايها الاحداث لانكم قد غلبتم الشرير. اكتب اليكم ايها الاولاد لانكم قد عرفتم الآب"},
	{14, "14 كتبت اليكم ايها الآباء لانكم قد عرفتم الذي من البدء. كتبت اليكم ايها الاحداث لانكم اقوياء وكلمة الله ثابتة فيكم وقد غلبتم الشرير"},
	{15, "15 لا تحبوا العالم ولا الاشياء التي في العالم. ان احب احد العالم فليست فيه محبة الآب"},
	{16, "16 لان كل ما في العالم شهوة الجسد وشهوة العيون وتعظم المعيشة ليس من الآب بل من العالم"},
	{17, "17 والعالم يمضي وشهوته واما الذي يصنع مشيئة الله فيثبت الى الابد"},
	{18, "18 ايها الاولاد هي الساعة الاخيرة. وكما سمعتم ان ضد المسيح يأتي قد صار الآن اضداد للمسيح كثيرون. من هنا نعلم انها الساعة الاخيرة"},
	{19, "19 منا خرجوا لكنهم لم يكونوا منا لانهم لو كانوا منا لبقوا معنا لكن ليظهروا انهم ليسوا جميعهم منا"},
	{20, "20 واما انتم فلكم مسحة من القدوس وتعلمون كل شيء"},
	{21, "21 لم اكتب اليكم لانكم لستم تعلمون الحق بل لانكم تعلمونه وان كل كذب ليس من الحق"},
	{22, "22 من هو الكذاب الا الذي ينكر ان يسوع هو المسيح. هذا هو ضد المسيح الذي ينكر الآب والابن"},
	{23, "23 كل من ينكر الابن ليس له الآب ايضا ومن يعترف بالابن فله الآب ايضا"},
	{24, "24 اما انتم فما سمعتموه من البدء فليثبت اذا فيكم. ان ثبت فيكم ما سمعتموه من البدء فانتم ايضا تثبتون في الابن وفي الآب"},
	{25, "25 وهذا هو الوعد الذي وعدنا هو به الحياة الابدية"},
	{26, "26 كتبت اليكم هذا عن الذين يضلونكم"},
	{27, "27 واما انتم فالمسحة التي اخذتموها منه ثابتة فيكم ولا حاجة بكم الى ان يعلّمكم احد بل كما تعلّمكم هذه المسحة عينها عن كل شيء وهي حق وليست كذبا. كما علّمتكم تثبتون فيه"},
	{28, "28 والآن ايها الاولاد اثبتوا فيه حتى اذا أظهر يكون لنا ثقة ولا نخجل منه في مجيئه"},
	{29, "29 ان علمتم انه بار هو فاعلموا ان كل من يصنع البر مولود منه"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct ara3 poems[] = {
	{1, "1 انظروا اية محبة اعطانا الآب حتى ندعى اولاد الله. من اجل هذا لا يعرفنا العالم لانه لا يعرفه"},
	{2, "2 ايها الاحباء الآن نحن اولاد الله ولم يظهر بعد ماذا سنكون. ولكن نعلم انه اذا أظهر نكون مثله لاننا سنراه كما هو"},
	{3, "3 وكل من عنده هذا الرجاء به يطهر نفسه كما هو طاهر"},
	{4, "4 كل من يفعل الخطية يفعل التعدي ايضا. والخطية هي التعدي"},
	{5, "5 وتعلمون ان ذاك أظهر لكي يرفع خطايانا وليس فيه خطية"},
	{6, "6 كل من يثبت فيه لا يخطئ. كل من يخطئ لم يبصره ولا عرفه"},
	{7, "7 ايها الاولاد لا يضلّكم احد. من يفعل البر فهو بار كما ان ذاك بار"},
	{8, "8 من يفعل الخطية فهو من ابليس لان ابليس من البدء يخطئ. لاجل هذا أظهر ابن الله لكي ينقض اعمال ابليس"},
	{9, "9 كل من هو مولود من الله لا يفعل خطية لان زرعه يثبت فيه ولا يستطيع ان يخطئ لانه مولود من الله"},
	{10, "10 بهذا اولاد الله ظاهرون واولاد ابليس. كل من لا يفعل البر فليس من الله وكذا من لا يحب اخاه"},
	{11, "11 لان هذا هو الخبر الذي سمعتموه من البدء ان يحب بعضنا بعضا"},
	{12, "12 ليس كما كان قايين من الشرير وذبح اخاه. ولماذا ذبحه. لان اعماله كانت شريرة واعمال اخيه بارة"},
	{13, "13 لا تتعجبوا يا اخوتي ان كان العالم يبغضكم"},
	{14, "14 نحن نعلم اننا قد انتقلنا من الموت الى الحياة لاننا نحب الاخوة. من لا يحب اخاه يبق في الموت"},
	{15, "15 كل من يبغض اخاه فهو قاتل نفس. وانتم تعلمون ان كل قاتل نفس ليس له حياة ابدية ثابتة فيه"},
	{16, "16 بهذا قد عرفنا المحبة ان ذاك وضع نفسه لاجلنا فنحن ينبغي لنا ان نضع نفوسنا لاجل الاخوة"},
	{17, "17 واما من كان له معيشة العالم ونظر اخاه محتاجا واغلق احشاءه عنه فكيف تثبت محبة الله فيه"},
	{18, "18 يا اولادي لا نحب بالكلام ولا باللسان بل بالعمل والحق"},
	{19, "19 وبهذا نعرف اننا من الحق ونسكن قلوبنا قدامه"},
	{20, "20 لانه ان لامتنا قلوبنا فالله اعظم من قلوبنا ويعلم كل شيء"},
	{21, "21 ايها الاحباء ان لم تلمنا قلوبنا فلنا ثقة من نحو الله"},
	{22, "22 ومهما سألنا ننال منه لاننا نحفظ وصاياه ونعمل الاعمال المرضية امامه"},
	{23, "23 وهذه هي وصيته ان نؤمن باسم ابنه يسوع المسيح ونحب بعضنا بعضا كما اعطانا وصية"},
	{24, "24 ومن يحفظ وصاياه يثبت فيه وهو فيه. وبهذا نعرف انه يثبت فينا من الروح الذي اعطانا"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct ara4 poems[] = {
	{1, "1 ايها الاحباء لا تصدقوا كل روح بل امتحنوا الارواح هل هي من الله لان انبياء كذبة كثيرين قد خرجوا الى العالم"},
	{2, "2 بهذا تعرفون روح الله. كل روح يعترف بيسوع المسيح انه قد جاء في الجسد فهو من الله"},
	{3, "3 وكل روح لا يعترف بيسوع المسيح انه قد جاء في الجسد فليس من الله. وهذا هو روح ضد المسيح الذي سمعتم انه يأتي والآن هو في العالم"},
	{4, "4 انتم من الله ايها الاولاد وقد غلبتموهم لان الذي فيكم اعظم من الذي في العالم"},
	{5, "5 هم من العالم. من اجل ذلك يتكلمون من العالم والعالم يسمع لهم"},
	{6, "6 نحن من الله فمن يعرف الله يسمع لنا ومن ليس من الله لا يسمع لنا. من هذا نعرف روح الحق وروح الضلال"},
	{7, "7 ايها الاحباء لنحب بعضنا بعضا لان المحبة هي من الله وكل من يحب فقد ولد من الله ويعرف الله"},
	{8, "8 ومن لا يحب لم يعرف الله لان الله محبة"},
	{9, "9 بهذا أظهرت محبة الله فينا ان الله قد ارسل ابنه الوحيد الى العالم لكي نحيا به"},
	{10, "10 في هذه هي المحبة ليس اننا نحن احببنا الله بل انه هو احبنا وارسل ابنه كفارة لخطايانا"},
	{11, "11 ايها الاحباء ان كان الله قد احبنا هكذا ينبغي لنا ايضا ان يحب بعضنا بعضا"},
	{12, "12 الله لم ينظره احد قط. ان احب بعضنا بعضا فالله يثبت فينا ومحبته قد تكملت فينا"},
	{13, "13 بهذا نعرف اننا نثبت فيه وهو فينا انه قد اعطانا من روحه"},
	{14, "14 ونحن قد نظرنا ونشهد ان الآب قد ارسل الابن مخلّصا للعالم"},
	{15, "15 من اعترف ان يسوع هو ابن الله فالله يثبت فيه وهو في الله"},
	{16, "16 ونحن قد عرفنا وصدقنا المحبة التي للّه فينا. الله محبة ومن يثبت في المحبة يثبت في الله والله فيه"},
	{17, "17 بهذا تكملت المحبة فينا ان يكون لنا ثقة في يوم الدين لانه كما هو في هذا العالم هكذا نحن ايضا"},
	{18, "18 لا خوف في المحبة بل المحبة الكاملة تطرح الخوف الى خارج لان الخوف له عذاب واما من خاف فلم يتكمل في المحبة"},
	{19, "19 نحن نحبه لانه هو احبنا اولا"},
	{20, "20 ان قال احد اني احب الله وابغض اخاه فهو كاذب. لان من لا يحب اخاه الذي ابصره كيف يقدر ان يحب الله الذي لم يبصره"},
	{21, "21 ولنا هذه الوصية منه ان من يحب الله يحب اخاه ايضا"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct ara5 poems[] = {
	{1, "1 كل من يؤمن ان يسوع هو المسيح فقد ولد من الله. وكل من يحب الوالد يحب المولود منه ايضا"},
	{2, "2 بهذا نعرف اننا نحب اولاد الله اذا احببنا الله وحفظنا وصاياه"},
	{3, "3 فان هذه هي محبة الله ان نحفظ وصاياه. ووصاياه ليست ثقيلة"},
	{4, "4 لان كل من ولد من الله يغلب العالم. وهذه هي الغلبة التي تغلب العالم ايماننا"},
	{5, "5 من هو الذي يغلب العالم الا الذي يؤمن ان يسوع هو ابن الله"},
	{6, "6 هذا هو الذي أتى بماء ودم يسوع المسيح. لا بالماء فقط بل بالماء والدم. والروح هو الذي يشهد لان الروح هو الحق"},
	{7, "7 فان الذين يشهدون في السماء هم ثلاثة الآب والكلمة والروح القدس وهؤلاء الثلاثة هم واحد"},
	{8, "8 والذين يشهدون في الارض هم ثلاثة الروح والماء والدم والثلاثة هم في الواحد"},
	{9, "9 ان كنا نقبل شهادة الناس فشهادة الله اعظم لان هذه هي شهادة الله التي قد شهد بها عن ابنه"},
	{10, "10 من يؤمن بابن الله فعنده الشهادة في نفسه. من لا يصدق الله فقد جعله كاذبا لانه لم يؤمن بالشهادة التي قد شهد بها الله عن ابنه"},
	{11, "11 وهذه هي الشهادة ان الله اعطانا حياة ابدية وهذه الحياة هي في ابنه"},
	{12, "12 من له الابن فله الحياة ومن ليس له ابن الله فليست له الحياة"},
	{13, "13 كتبت هذا اليكم انتم المؤمنين باسم ابن الله لكي تعلموا ان لكم حياة ابدية ولكي تؤمنوا باسم ابن الله"},
	{14, "14 وهذه هي الثقة التي لنا عنده انه ان طلبنا شيئا حسب مشيئته يسمع لنا"},
	{15, "15 وان كنا نعلم انه مهما طلبنا يسمع لنا نعلم ان لنا الطلبات التي طلبناها منه"},
	{16, "16 ان رأى احد اخاه يخطئ خطية ليست للموت يطلب فيعطيه حياة للذين يخطئون ليس للموت. توجد خطية للموت. ليس لاجل هذه اقول ان يطلب"},
	{17, "17 كل اثم هو خطية وتوجد خطية ليست للموت"},
	{18, "18 نعلم ان كل من ولد من الله لا يخطئ بل المولود من الله يحفظ نفسه والشرير لا يمسه"},
	{19, "19 نعلم اننا نحن من الله والعالم كله قد وضع في الشرير"},
	{20, "20 ونعلم ان ابن الله قد جاء واعطانا بصيرة لنعرف الحق. ونحن في الحق في ابنه يسوع المسيح. هذا هو الاله الحق والحياة الابدية"},
	{21, "21 ايها الاولاد احفظوا انفسكم من الاصنام. آمين"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};