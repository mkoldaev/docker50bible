#include <map>
#include <string>
class Bible62
{
	struct tam1	{ int val; const char *msg; };
	struct tam2	{ int val; const char *msg; };
	struct tam3	{ int val; const char *msg; };
	struct tam4	{ int val; const char *msg; };
	struct tam5	{ int val; const char *msg; };
public:
static void view1() {
struct tam1 poems[] = {
	{1, "1 ஆதிமுதல் இருந்ததும், நாங்கள் கேட்டதும், எங்கள் கண்களினாலே கண்டதும், நாங்கள் நோக்கிப்பார்த்ததும், எங்கள் கைகளினாலே தொட்டதுமாயிருக்கிற ஜீவவார்த்தையைக்குறித்து உங்களுக்கு அறிவிக்கிறோம்."},
	{2, "2 அந்த ஜீவன் வெளிப்பட்டது; பிதாவினிடத்திலிருந்ததும், எங்களுக்கு வெளிப்பட்டதுமான நித்தியமாயிருக்கிற அந்த ஜீவனை நாங்கள் கண்டு, அதைக் குறித்துச் சாட்சிகொடுத்து, அதை உங்களுக்கு அறிவிக்கிறோம்."},
	{3, "3 நீங்கள் எங்களோடே ஐக்கியமுள்ளவர்களாகும்படி, நாங்கள் கண்டும் கேட்டும் இருக்கிறதை உங்களுக்கும் அறிவிக்கிறோம்; எங்களுடைய ஐக்கியம் பிதாவோடும் அவருடைய குமாரனாகிய இயேசுகிறிஸ்துவோடும் இருக்கிறது."},
	{4, "4 உங்கள் சந்தோஷம் நிறைவாயிருக்கும்படி இவைகளை உங்களுக்கு எழுதுகிறோம்."},
	{5, "5 தேவன் ஒளியாயிருக்கிறார், அவரில் எவ்வளவேனும் இருளில்லை; இது நாங்கள் அவரிடத்தில் கேட்டு உங்களுக்கு அறிவிக்கிற விசேஷமாயிருக்கிறது."},
	{6, "6 நாம் அவரோடே ஐக்கியப்பட்டவர்களென்று சொல்லியும், இருளிலே நடக்கிறவர்களாயிருந்தால், சத்தியத்தின்படி நடவாமல் பொய்சொல்லுகிறவர்களாயிருப்போம்."},
	{7, "7 அவர் ஒளியிலிருக்கிறதுபோல நாமும் ஒளியிலே நடந்தால் ஒருவரோடொருவர் ஐக்கியப்பட்டிருப்போம்; அவருடைய குமாரனாகிய இயேசுகிறிஸ்துவின் இரத்தம் சகல பாவங்களையும் நீக்கி, நம்மைச் சுத்திகரிக்கும்."},
	{8, "8 நமக்குப் பாவமில்லையென்போமானால், நம்மை நாமே வஞ்சிக்கிறவர்களாயிருப்போம், சத்தியம் நமக்குள் இராது."},
	{9, "9 நம்முடைய பாவங்களை நாம் அறிக்கையிட்டால், பாவங்களை நமக்கு மன்னித்து எல்லா அநியாயத்தையும் நீக்கி நம்மைச் சுத்திகரிப்பதற்கு அவர் உண்மையும் நீதியும் உள்ளவராயிருக்கிறார்."},
	{10, "10 நாம் பாவஞ்செய்யவில்லையென்போமானால், நாம் அவரைப் பொய்யராக்குகிறவர்களாயிருப்போம், அவருடைய வார்த்தை நமக்குள் இராது."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct tam2 poems[] = {
	{1, "1 என் பிள்ளைகளே, நீங்கள் பாவஞ்செய்யாதபடிக்கு இவைகளை உங்களுக்கு எழுதுகிறேன்; ஒருவன் பாவஞ்செய்வானானால் நீதிபரராயிருக்கிற இயேசுகிறிஸ்து நமக்காகப் பிதாவினிடத்தில் பரிந்து பேசுகிறவராயிருக்கிறார்."},
	{2, "2 நம்முடைய பாவங்களை நிவிர்த்தி செய்கிற கிருபாதாரபலி அவரே; நம்முடைய பாவங்களை மாத்திரம் அல்ல, சர்வலோகத்தின் பாவங்களையும் நிவிர்த்தி செய்கிற பலியாயிருக்கிறார்."},
	{3, "3 அவருடைய கற்பனைகளை நாம் கைக்கொள்ளுகிறவர்களானால், அவரை அறிந்திருக்கிறோமென்பதை அதினால் அறிவோம்."},
	{4, "4 அவரை அறிந்திருக்கிறேனென்று சொல்லியும், அவருடைய கற்பனைகளைக் கைக்கொள்ளாதவன் பொய்யனாயிருக்கிறான், அவனுக்குள் சத்தியமில்லை."},
	{5, "5 அவருடைய வசனத்தைக் கைக்கொள்ளுகிறவனிடத்தில் தேவ அன்பு மெய்யாகப் பூரணப்பட்டிருக்கும்; நாம் அவருக்குள் இருக்கிறோமென்பதை அதினாலே அறிந்திருக்கிறோம்."},
	{6, "6 அவருக்குள்  நிலைத்திருக்கிறேனென்று சொல்லுகிறவன், அவர் நடந்தபடியே தானும் நடக்கவேண்டும்."},
	{7, "7 சகோதரரே, நான் உங்களுக்குப் புதிய கற்பனையை அல்ல,  ஆதிமுதல் நீங்கள் பெற்றிருக்கிற பழைய கற்பனையையே எழுதுகிறேன்; அந்தப் பழைய கற்பனை நீங்கள் ஆதிமுதல் கேட்டிருக்கிற வசனந்தானே."},
	{8, "8 மேலும், நான் புதிய கற்பனையையும் உங்களுக்கு எழுதுகிறேன், இது அவருக்குள்ளும் உங்களுக்குள்ளும் மெய்யாயிருக்கிறது; ஏனென்றால், இருள் நீங்கிப்போகிறது, மெய்யான ஒளி இப்பொழுது பிரகாசிக்கிறது."},
	{9, "9 ஒளியிலே இருக்கிறேன் என்று சொல்லியும் தன் சகோதரனைப் பகைக்கிறவன் இதுவரைக்கும் இருளிலே இருக்கிறான்."},
	{10, "10 தன் சகோதரனிடத்தில் அன்புகூருகிறவன் ஒளியிலே நிலைகொண்டிருக்கிறான்; அவனிடத்தில் இடறல் ஒன்றுமில்லை."},
	{11, "11 தன் சகோதரனைப் பகைக்கிறவன் இருளிலே இருந்து இருளிலே நடக்கிறான்; இருளானது அவன் கண்களைக் குருடாக்கினபடியால் தான் போகும் இடம் இன்னதென்று அறியாதிருக்கிறான்."},
	{12, "12 பிள்ளைகளே, அவருடைய நாமத்தினிமித்தம் உங்கள் பாவங்கள் மன்னிக்கப்பட்டிருக்கிறதினால் உங்களுக்கு எழுதுகிறேன்."},
	{13, "13 பிதாக்களே, ஆதிமுதலிருக்கிறவரை நீங்கள் அறிந்திருக்கிறதினால் உங்களுக்கு எழுதுகிறேன். வாலிபரே, பொல்லாங்கனை நீங்கள் ஜெயித்ததினால் உங்களுக்கு எழுதுகிறேன். பிள்ளைகளே, நீங்கள் பிதாவை அறிந்திருக்கிறதினால் உங்களுக்கு எழுதுகிறேன்."},
	{14, "14 பிதாக்களே, ஆதிமுதலிருக்கிறவரை நீங்கள் அறிந்திருக்கிறதினால் உங்களுக்கு எழுதியிருக்கிறேன். வாலிபரே, நீங்கள் பலவான்களாயிருக்கிறதினாலும், தேவவசனம் உங்களில் நிலைத்திருக்கிறதினாலும், நீங்கள் பொல்லாங்கனை ஜெயித்ததினாலும், உங்களுக்கு எழுதியிருக்கிறேன்."},
	{15, "15 உலகத்திலும் உலகத்திலுள்ளவைகளிலும் அன்புகூராதிருங்கள்; ஒருவன் உலகத்தில் அன்புகூர்ந்தால் அவனிடத்தில் பிதாவின் அன்பில்லை."},
	{16, "16 ஏனெனில், மாம்சத்தின் இச்சையும், கண்களின் இச்சையும், ஜீவனத்தின் பெருமையுமாகிய உலகத்திலுள்ளவைகளெல்லாம் பிதாவினாலுண்டானவைகளல்ல, அவைகள் உலகத்தினாலுண்டானவைகள்."},
	{17, "17 உலகமும் அதின் இச்சையும் ஒழிந்துபோம்; தேவனுடைய சித்தத்தின்படி செய்கிறவனோ என்றென்றைக்கும் நிலைத்திருப்பான்."},
	{18, "18 பிள்ளைகளே, இது கடைசிக்காலமாயிருக்கிறது; அந்திக்கிறிஸ்து வருகிறானென்று நீங்கள் கேள்விப்பட்டபடி இப்பொழுதும் அநேக அந்திக்கிறிஸ்துகள் இருக்கிறார்கள்; அதினாலே இது கடைசிக்காலமென்று அறிகிறோம்."},
	{19, "19 அவர்கள் நம்மைவிட்டுப் பிரிந்து போனார்கள், ஆகிலும் அவர்கள் நம்முடையவர்களாயிருக்கவில்லை; நம்முடையவர்களாயிருந்தார்களானால் நம்முடனே நிலைத்திருப்பார்களே; எல்லாரும் நம்முடையவர்களல்லவென்று வெளியாகும்படிக்கே பிரிந்துபோனார்கள்."},
	{20, "20 நீங்கள் பரிசுத்தராலே அபிஷேகம் பெற்றுச் சகலத்தையும் அறிந்திருக்கிறீர்கள்."},
	{21, "21 சத்தியத்தை நீங்கள் அறியாததினாலல்ல, நீங்கள் சத்தியத்தை அறிந்திருக்கிறதினாலும், சத்தியத்தினால் ஒரு பொய்யுமுண்டாயிராதென்பதை நீங்கள் அறிந்திருக்கிறதினாலும், உங்களுக்கு எழுதியிருக்கிறேன்."},
	{22, "22 இயேசுவைக் கிறிஸ்து அல்ல என்று மறுதலிக்கிறவனேயல்லாமல் வேறே யார் பொய்யன்? பிதாவையும் குமாரனையும் மறுதலிக்கிறவனே அந்திக்கிறிஸ்து."},
	{23, "23 குமாரனை மறுதலிக்கிறவன் பிதாவையுடையவனல்ல, குமாரனை அறிக்கையிடுகிறவன் பிதாவையும் உடையவனாயிருக்கிறான்."},
	{24, "24 ஆகையால் ஆதிமுதல் நீங்கள் கேள்விப்பட்டது உங்களில் நிலைத்திருக்கக்கடவது; ஆதிமுதல் நீங்கள் கேள்விப்பட்டது உங்களில் நிலைத்திருந்தால், நீங்களும் குமாரனிலும் பிதாவிலும் நிலைத்திருப்பீர்கள்."},
	{25, "25 நித்தியஜீவனை அளிப்பேன் என்பதே அவர் நமக்குச் செய்த வாக்குத்தத்தம்."},
	{26, "26 உங்களை வஞ்சிக்கிறவர்களைக்குறித்து இவைகளை உங்களுக்கு எழுதியிருக்கிறேன்."},
	{27, "27 நீங்கள் அவராலே பெற்ற அபிஷேகம் உங்களில் நிலைத்திருக்கிறது, ஒருவரும் உங்களுக்குப் போதிக்கவேண்டுவதில்லை; அந்த அபிஷேகம் சகலத்தையுங்குறித்து உங்களுக்குப் போதிக்கிறது; அது சத்தியமாயிருக்கிறது, பொய்யல்ல, அது உங்களுக்குப் போதித்தபடியே அவரில் நிலைத்திருப்பீர்களாக."},
	{28, "28 இப்படியிருக்க, பிள்ளைகளே, அவர் வெளிப்படும்போது நாம் அவர் வருகையில் அவருக்கு முன்பாக வெட்கப்பட்டுப்போகாமல் தைரியமுள்ளவர்களாயிருக்கும்படிக்கு அவரில் நிலைத்திருங்கள்."},
	{29, "29 அவர் நீதியுள்ளவராயிருக்கிறாரென்று உங்களுக்குத் தெரிந்திருப்பதினால், நீதியைச் செய்கிறவனெவனும் அவரில் பிறந்தவனென்று அறிந்திருக்கிறீர்கள்."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct tam3 poems[] = {
	{1, "1 நாம் தேவனுடைய பிள்ளைகளென்று அழைக்கப்படுவதினாலே பிதாவானவர் நமக்குப் பாராட்டின அன்பு எவ்வளவு பெரிதென்று பாருங்கள்; உலகம் அவரை அறியாதபடியினாலே நம்மையும் அறியவில்லை."},
	{2, "2 பிரியமானவர்களே, இப்பொழுது தேவனுடைய பிள்ளைகளாயிருக்கிறோம், இனி எவ்விதமாயிருப்போமென்று இன்னும் வெளிப்படவில்லை; ஆகிலும் அவர் வெளிப்படும்போது அவர் இருக்கிறவண்ணமாகவே நாம் அவரைத் தரிசிப்பதினால், அவருக்கு ஒப்பாயிருப்போமென்று அறிந்திருக்கிறோம்."},
	{3, "3 அவர்மேல் இப்படிப்பட்ட நம்பிக்கை வைத்திருக்கிறவனெவனும், அவர் சுத்தமுள்ளவராயிருக்கிறதுபோல தன்னையும் சுத்திகரித்துக்கொள்ளுகிறான்."},
	{4, "4 பாவஞ்செய்கிற எவனும் நியாயப்பிரமாணத்தை மீறுகிறான்; நியாயப்பிரமாணத்தை மீறுகிறதே பாவம்."},
	{5, "5 அவர் நம்முடைய பாவங்களைச் சுமந்து தீர்க்க வெளிப்பட்டாரென்று அறிவீர்கள்; அவரிடத்தில் பாவமில்லை."},
	{6, "6 அவரில் நிலைத்திருக்கிற எவனும் பாவஞ்செய்கிறதில்லை; பாவஞ்செய்கிற எவனும் அவரைக் காணவுமில்லை, அவரை அறியவுமில்லை."},
	{7, "7 பிள்ளைகளே, நீங்கள் ஒருவராலும் வஞ்சிக்கப்படாதிருங்கள்; நீதியைச் செய்கிறவன் அவர் நீதியுள்ளவராயிருக்கிறதுபோலத் தானும் நீதியுள்ளவனாயிருக்கிறான்."},
	{8, "8 பாவஞ்செய்கிறவன் பிசாசினாலுண்டாயிருக்கிறான்; ஏனெனில் பிசாசானவன் ஆதிமுதல் பாவஞ்செய்கிறான்; பிசாசினுடைய கிரியைகளை அழிக்கும்படிக்கே தேவனுடைய குமாரன் வெளிப்பட்டார்."},
	{9, "9 தேவனால் பிறந்த எவனும் பாவஞ்செய்யான், எனெனில் அவருடைய வித்து அவனுக்குள் தரித்திருக்கிறது; அவன் தேவனால் பிறந்தபடியினால் பாவஞ்செய்யமாட்டான்."},
	{10, "10 இதினாலே தேவனுடைய பிள்ளைகள் இன்னாரென்றும், பிசாசின் பிள்ளைகள் இன்னாரென்றும் வெளிப்படும்; நீதியைச் செய்யாமலும் தன் சகோதரனில் அன்புகூராமலும் இருக்கிற எவனும் தேவனால் உண்டானவனல்ல."},
	{11, "11 நாம் ஒருவரிலொருவர் அன்புகூரவேண்டுமென்பதே நீங்கள் ஆதிமுதல் கேள்விப்பட்ட விசேஷமாயிருக்கிறது."},
	{12, "12 பொல்லாங்கனால் உண்டாயிருந்து தன் சகோதரனைக் கொலைசெய்த காயீனைப்போலிருக்கவேண்டாம்; அவன் எதினிமித்தம் அவனைக் கொலைசெய்தான்? தன் கிரியைகள் பொல்லாதவைகளும், தன் சகோதரனுடைய கிரியைகள் நீதியுள்ளவைகளுமாயிருந்ததினிமித்தந்தானே."},
	{13, "13 என் சகோதரரே, உலகம் உங்களைப் பகைத்தால் ஆச்சரியப்படாதிருங்கள்."},
	{14, "14 நாம் சகோதரரிடத்தில் அன்புகூருகிறபடியால், மரணத்தைவிட்டு நீங்கி ஜீவனுக்குட்பட்டிருக்கிறோமென்று அறிந்திருக்கிறோம்; சகோதரனிடத்தில் அன்புகூராதவன் மரணத்திலே நிலைகொண்டிருக்கிறான்."},
	{15, "15 தன் சகோதரனைப் பகைக்கிற எவனும் மனுஷ கொலைபாதகனாயிருக்கிறான்; மனுஷ கொலைபாதகனெவனோ அவனுக்குள் நித்தியஜீவன் நிலைத்திராது என்று அறிவீர்கள்."},
	{16, "16 அவர் தம்முடைய ஜீவனை நமக்காகக் கொடுத்ததினாலே அன்பு இன்னதென்று அறிந்திருக்கிறோம்; நாமும் சகோதரருக்காக ஜீவனைக்கொடுக்கக் கடனாளிகளாயிருக்கிறோம்."},
	{17, "17 ஒருவன் இவ்வுலக ஆஸ்தி உடையவனாயிருந்து, தன் சகோதரனுக்குக் குறைச்சலுண்டென்று கண்டு, தன் இருதயத்தை அவனுக்கு அடைத்துக்கொண்டால், அவனுக்குள் தேவ அன்பு நிலைகொள்ளுகிறதெப்படி?"},
	{18, "18 என் பிள்ளைகளே, வசனத்தினாலும் நாவினாலுமல்ல, கிரியையினாலும் உண்மையினாலும் அன்புகூரக்கடவோம்."},
	{19, "19 இதினாலே நாம் நம்மைச் சத்தியத்திற்குரியவர்களென்று அறிந்து, நம்முடைய இருதயத்தை அவருக்குமுன்பாக நிச்சயப்படுத்திக்கொள்ளலாம்."},
	{20, "20 நம்முடைய இருதயமே நம்மைக் குற்றவாளிகளாகத் தீர்க்குமானால், தேவன் நம்முடைய இருதயத்திலும் பெரியவராயிருந்து சகலத்தையும் அறிந்திருக்கிறார்."},
	{21, "21 பிரியமானவர்களே, நம்முடைய இருதயம் நம்மைக் குற்றவாளிகளென்று தீர்க்காதிருந்தால், நாம் தேவனிடத்தில் தைரியங்கொண்டிருந்து,"},
	{22, "22 அவருடைய கற்பனைகளை நாம் கைக்கொண்டு அவருக்குமுன்பாகப் பிரியமானவைகளைச் செய்கிறபடியினால் நாம் வேண்டிக்கொள்ளுகிறதெதுவோ அதை அவராலே பெற்றுக்கொள்ளுகிறோம்."},
	{23, "23 நாம் அவருடைய குமாரனாகிய இயேசுகிறிஸ்துவின் நாமத்தின்மேல் விசுவாசமாயிருந்து, அவர் நமக்குக் கட்டளையிட்டபடி ஒருவரிலொருவர் அன்பாயிருக்கவேண்டுமென்பதே அவருடைய கற்பனையாயிருக்கிறது."},
	{24, "24 அவருடைய கட்டளைகளைக் கைக்கொள்ளுகிறவன் அவரில் நிலைத்திருக்கிறான், அவரும் அவனில் நிலைத்திருக்கிறார்; அவர் நம்மில் நிலைத்திருக்கிறதை அவர் நமக்குத் தந்தருளின ஆவியினாலே அறிந்திருக்கிறோம்."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct tam4 poems[] = {
	{1, "1 பிரியமானவர்களே, உலகத்தில் அநேகங் கள்ளத்தீர்க்கதரிசிகள் தோன்றியிருப்பதினால், நீங்கள் எல்லா ஆவிகளையும் நம்பாமல், அந்த ஆவிகள் தேவனால் உண்டானவைகளோ என்று சோதித்தறியுங்கள்."},
	{2, "2 தேவஆவியை நீங்கள் எதினால் அறியலாமென்றால்: மாம்சத்தில் வந்த இயேசுகிறிஸ்துவை அறிக்கைபண்ணுகிற எந்த ஆவியும் தேவனால் உண்டாயிருக்கிறது."},
	{3, "3 மாம்சத்தில் வந்த இயேசுகிறிஸ்துவை அறிக்கைபண்ணாத எந்த ஆவியும் தேவனால் உண்டானதல்ல; வருமென்று நீங்கள் கேள்விப்பட்ட அந்திகிறிஸ்துவினுடைய ஆவி அதுவே, அது இப்பொழுதும் உலகத்தில் இருக்கிறது."},
	{4, "4 பிள்ளைகளே, நீங்கள் தேவனால் உண்டாயிருந்து, அவர்களை ஜெயித்தீர்கள்; ஏனெனில் உலகத்திலிருக்கிறவனிலும் உங்களிலிருக்கிறவர் பெரியவர்."},
	{5, "5 அவர்கள் உலகத்துக்குரியவர்கள், ஆகையால் உலகத்துக்குரியவைகளைப் பேசுகிறார்கள், உலகமும் அவர்களுக்குச் செவிகொடுக்கும்."},
	{6, "6 நாங்கள் தேவனால் உண்டானவர்கள்; தேவனை அறிந்தவன் எங்களுக்குச் செவிகொடுக்கிறான்; தேவனால் உண்டாயிராதவன் எங்களுக்குச் செவிகொடுக்கிறதில்லை; இதினாலே சத்திய ஆவி இன்னதென்றும், வஞ்சகஆவி இன்னதென்றும் அறிந்திருக்கிறோம்."},
	{7, "7 பிரியமானவர்களே, ஒருவரிலொருவர் அன்பாயிருக்கக்கடவோம்; ஏனெனில் அன்பு தேவனால் உண்டாயிருக்கிறது; அன்புள்ள எவனும் தேவனால் பிறந்து, அவரை அறிந்திருக்கிறான்."},
	{8, "8 அன்பில்லாதவன் தேவனை அறியான்; தேவன் அன்பாகவே இருக்கிறார்."},
	{9, "9 தம்முடைய ஒரேபேறான குமாரனாலே நாம் பிழைக்கும்படிக்குத் தேவன் அவரை இவ்வுலகத்திலே அனுப்பினதினால் தேவன் நம்மேல் வைத்த அன்பு வெளிப்பட்டது."},
	{10, "10 நாம் தேவனிடத்தில் அன்புகூர்ந்ததினால் அல்ல, அவர் நம்மிடத்தில் அன்புகூர்ந்து, நம்முடைய பாவங்களை நிவிர்த்தி செய்கிற கிருபாதாரபலியாகத் தம்முடைய குமாரனை அனுப்பினதினாலே அன்பு உண்டாயிருக்கிறது."},
	{11, "11 பிரியமானவர்களே, தேவன் இவ்விதமாய் நம்மிடத்தில் அன்புகூர்ந்திருக்க, நாமும் ஒருவரிடத்தில் ஒருவர் அன்புகூரக் கடனாளிகளாயிருக்கிறோம்."},
	{12, "12 தேவனை ஒருவரும் ஒருபோதும் கண்டதில்லை; நாம் ஒருவரிடத்தில் ஒருவர் அன்புகூர்ந்தால் தேவன் நமக்குள் நிலைத்திருக்கிறார்; அவருடைய அன்பும் நமக்குள் பூரணப்படும்."},
	{13, "13 அவர் தம்முடைய ஆவியில் நமக்குத் தந்தருளினதினாலே நாம் அவரிலும் அவர் நம்மிலும் நிலைத்திருக்கிறதை அறிந்திருக்கிறோம்."},
	{14, "14 பிதாவானவர் குமாரனை உலகரட்சகராக அனுப்பினாரென்று நாங்கள் கண்டு சாட்சியிடுகிறோம்."},
	{15, "15 இயேசுவானவர் தேவனுடைய குமாரனென்று அறிக்கைபண்ணுகிறவன் எவனோ அவனில் தேவன் நிலைத்திருக்கிறார், அவனும் தேவனில் நிலைத்திருக்கிறான்."},
	{16, "16 தேவன் நம்மேல் வைத்திருக்கிற அன்பை நாம் அறிந்து விசுவாசித்திருக்கிறோம். தேவன் அன்பாகவே இருக்கிறார்; அன்பில்  நிலைத்திருக்கிறவன் தேவனில் நிலைத்திருக்கிறான், தேவனும் அவனில் நிலைத்திருக்கிறார்."},
	{17, "17 நியாயத்தீர்ப்புநாளிலே நமக்குத் தைரியமுண்டாயிருக்கத்தக்கதாக அன்பு நம்மிடத்தில் பூரணப்படுகிறது; ஏனென்றால், அவர் இருக்கிறபிரகாரமாக நாமும் இவ்வுலகத்தில் இருக்கிறோம்."},
	{18, "18 அன்பிலே பயமில்லை; பூரண அன்பு பயத்தைப் புறம்பே தள்ளும்; பயமானது வேதனையுள்ளது, பயப்படுகிறவன் அன்பில் பூரணப்பட்டவன் அல்ல."},
	{19, "19 அவர் முந்தி நம்மிடத்தில் அன்பு கூர்ந்தபடியால் நாமும் அவரிடத்தில் அன்புகூருகிறோம்."},
	{20, "20 தேவனிடத்தில் அன்புகூருகிறேனென்று ஒருவன் சொல்லியும், தன் சகோதரனைப் பகைத்தால், அவன் பொய்யன்; தான் கண்ட சகோதரனிடத்தில் அன்புகூராமலிருக்கிறவன், தான் காணாத தேவனிடத்தில் எப்படி அன்புகூருவான்?"},
	{21, "21 தேவனிடத்தில் அன்புகூருகிறவன் தன் சகோதரனிடத்திலும் அன்புகூரவேண்டுமென்கிற இந்தக் கற்பனையை அவராலே பெற்றிருக்கிறோம்."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct tam5 poems[] = {
	{1, "1 இயேசுவானவரே கிறிஸ்து என்று விசுவாசிக்கிற எவனும் தேவனால் பிறந்திருக்கிறான்; பிறப்பித்தவரிடத்தில் அன்புகூருகிற எவனும் அவரால் பிறப்பிக்கப்பட்டவனிடத்திலும் அன்புகூருகிறான்."},
	{2, "2 நாம் தேவனிடத்தில் அன்புகூர்ந்து அவருடைய கற்பனைகளைக் கைக்கொள்ளும்போது, தேவனுடைய பிள்ளைகளிடத்தில் அன்புகூருகிறோமென்று அறிந்துகொள்ளுகிறோம்."},
	{3, "3 நாம் தேவனுடைய கற்பனைகளைக் கைக்கொள்வதே அவரிடத்தில் அன்புகூருவதாம்; அவருடைய கற்பனைகள் பாரமானவைகளுமல்ல."},
	{4, "4 தேவனால் பிறப்பதெல்லாம் உலகத்தை ஜெயிக்கும்; நம்முடைய விசுவாசமே உலகத்தை ஜெயிக்கிற  ஜெயம்."},
	{5, "5 இயேசுவானவர் தேவனுடைய குமாரனென்று விசுவாசிக்கிறவனேயன்றி உலகத்தை ஜெயிக்கிறவன் யார்?"},
	{6, "6 இயேசுகிறிஸ்துவாகிய இவரே ஜலத்தினாலும் இரத்தத்தினாலும் வந்தவர்; ஜலத்தினாலே மாத்திரமல்ல, ஜலத்தினாலும் இரத்தத்தினாலும் வந்தவர். ஆவியானவர் சத்தியமாகையால், ஆவியானவரே சாட்சிகொடுக்கிறவர்."},
	{7, "7 (பரலோகத்தில் சாட்சியிடுகிறவர்கள் மூவர், பிதா, வார்த்தை, பரிசுத்தஆவி என்பவர்களே, இம்மூவரும் ஒன்றாயிருக்கிறார்கள்;"},
	{8, "8 பூலோகத்திலே) சாட்சியிடுகிறவைகள் மூன்று, ஆவி, ஜலம், இரத்தம் என்பவைகளே, இம்மூன்றும் ஒருமைப்பட்டிருக்கிறது."},
	{9, "9 நாம் மனுஷருடைய சாட்சியை ஏற்றுக்கொண்டால், அதைப்பார்க்கிலும் தேவனுடைய சாட்சி அதிகமாயிருக்கிறது; தேவன் தமது குமாரனைக்குறித்துக் கொடுத்த சாட்சி இதுவே."},
	{10, "10 தேவனுடைய குமாரனிடத்தில் விசுவாசமாயிருக்கிறவன் அந்தச் சாட்சியைத் தனக்குள்ளே கொண்டிருக்கிறான்; தேவனை விசுவாசியாதவனோ, தேவன் தம்முடைய குமாரனைக்குறித்துக் கொடுத்த சாட்சியை விசுவாசியாததினால், அவரைப் பொய்யராக்குகிறான்."},
	{11, "11 தேவன் நமக்கு நித்தியஜீவனைத் தந்திருக்கிறார், அந்த ஜீவன் அவருடைய குமாரனில் இருக்கிறதென்பதே அந்தச் சாட்சியாம்."},
	{12, "12 குமாரனை உடையவன் ஜீவனை உடையவன், தேவனுடைய குமாரன் இல்லாதவன் ஜீவன் இல்லாதவன்."},
	{13, "13 உங்களுக்கு நித்தியஜீவன் உண்டென்று நீங்கள் அறியவும், தேவகுமாரனுடைய நாமத்தின்மேல் நீங்கள் விசுவாசமாயிருக்கவும், தேவகுமாரனுடைய நாமத்தின்மேல் விசுவாசமாயிருக்கிற உங்களுக்கு இவைகளை எழுதியிருக்கிறேன்."},
	{14, "14 நாம் எதையாகிலும் அவருடைய சித்தத்தின்படி கேட்டால், அவர் நமக்குச் செவிகொடுக்கிறாரென்பதே அவரைப் பற்றி நாம் கொண்டிருக்கிற தைரியம்."},
	{15, "15 நாம் எதைக் கேட்டாலும், அவர் நமக்குச் செவிகொடுக்கிறாரென்று நாம் அறிந்திருந்தோமானால், அவரிடத்தில் நாம் கேட்டவைகளைப் பெற்றுக்கொண்டோமென்றும் அறிந்திருக்கிறோம்."},
	{16, "16 மரணத்துக்கு ஏதுவல்லாத பாவத்தைத் தன் சகோதரன் செய்ய ஒருவன் கண்டால், அவன் வேண்டுதல்செய்யக்கடவன், அப்பொழுது அவனுக்கு ஜீவனைக் கொடுப்பார்; யாருக்கென்றால், மரணத்துக்கு ஏதுவல்லாத பாவத்தைச் செய்தவர்களுக்கே; மரணத்துக்கு ஏதுவான பாவமுண்டு, அதைக்குறித்து வேண்டுதல்செய்ய நான் சொல்லேன்."},
	{17, "17 அநீதியெல்லாம் பாவந்தான்; என்றாலும் மரணத்துக்கு ஏதுவல்லாத பாவமுமுண்டு."},
	{18, "18 தேவனால் பிறந்த எவனும் பாவஞ்செய்யானென்று அறிந்திருக்கிறோம்; தேவனால் பிறந்தவன் தன்னைக் காக்கிறான், பொல்லாங்கன் அவனைத் தொடான்."},
	{19, "19 நாம் தேவனால் உண்டாயிருக்கிறோமென்றும், உலகமுழுவதும் பொல்லாங்கனுக்குள் கிடக்கிறதென்றும் அறிந்திருக்கிறோம்."},
	{20, "20 அன்றியும், நாம் சத்தியமுள்ளவரை அறிந்துகொள்வதற்குத் தேவனுடைய குமாரன் வந்து நமக்குப் புத்தியைத் தந்திருக்கிறாரென்றும் அறிவோம்; அவருடைய குமாரனாகிய இயேசு கிறிஸ்து என்னப்பட்ட சத்தியமுள்ளவருக்குள்ளும் இருக்கிறோம்; இவரே மெய்யான தேவனும் நித்தியஜீவனுமாயிருக்கிறார்."},
	{21, "21 பிள்ளைகளே, நீங்கள் விக்கிரகங்களுக்கு விலகி, உங்களைக் காத்துக்கொள்வீர்களாக. ஆமென்."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};