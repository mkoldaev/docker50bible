#include <map>
#include <string>
class Bible8
{
	struct gr1	{ int val; const char *msg; };
	struct gr2	{ int val; const char *msg; };
	struct gr3	{ int val; const char *msg; };
	struct gr4	{ int val; const char *msg; };
public:
static void view1() {
struct gr1 poems[] = {
	{1, "1 Και εν ταις ημέραις καθ' ας οι κριταί έκρινον, έγεινε πείνα εν τη γη. Και υπήγεν άνθρωπός τις από Βηθλεέμ Ιούδα να παροικήση εν γη Μωάβ, αυτός και η γυνή αυτού και οι δύο υιοί αυτού."},
	{2, "2 Το δε όνομα του ανθρώπου ήτο Ελιμέλεχ, και το όνομα της γυναικός αυτού Ναομί, και το όνομα των δύο υιών αυτού Μααλών και Χελαιών, Εφραθαίοι εκ Βηθλεέμ Ιούδα. Και ήλθον εις γην Μωάβ και ήσαν εκεί."},
	{3, "3 Και απέθανεν Ελιμέλεχ ο ανήρ της Ναομί· και έμεινεν αυτή και οι δύο υιοί αυτής."},
	{4, "4 Και ούτοι έλαβον εις εαυτούς γυναίκας Μωαβίτιδας· το όνομα της μιας Ορφά και το όνομα της άλλης Ρούθ· και κατώκησαν εκεί έως δέκα έτη."},
	{5, "5 Απέθανον δε αμφότεροι, ο Μααλών και ο Χελαιών· και εστερήθη η γυνή των δύο υιών αυτής και του ανδρός αυτής."},
	{6, "6 Τότε εσηκώθη αυτή και αι νύμφαι αυτής και επέστρεψαν εκ της γης Μωάβ· διότι ήκουσεν εν γη Μωάβ, ότι επεσκέφθη ο Κύριος τον λαόν αυτού δίδων εις αυτούς άρτον."},
	{7, "7 Και εξήλθεν εκ του τόπου όπου ήτο, και αι δύο νύμφαι αυτής μετ' αυτής και επορεύοντο την οδόν διά να επιστρέψωσιν εις γην Ιούδα."},
	{8, "8 Είπε δε η Ναομί προς τας δύο νύμφας αυτής, Υπάγετε, επιστρέψατε εκάστη εις τον οίκον της μητρός αυτής. Ο Κύριος να κάμη έλεος εις εσάς, καθώς σεις εκάμετε εις τους αποθανόντας και εις εμέ·"},
	{9, "9 ο Κύριος να σας δώση να εύρητε ανάπαυσιν, εκάστη εν τω οίκω του ανδρός αυτής. Και εφίλησεν αυτάς· και αυταί ύψωσαν την φωνήν αυτών και έκλαυσαν."},
	{10, "10 Και είπον προς αυτήν, Ουχί· αλλά μετά σου θέλομεν επιστρέψει εις τον λαόν σου."},
	{11, "11 Και είπεν η Ναομί, Επιστρέψατε, θυγατέρες μου· διά τι να έλθητε μετ' εμού; μήπως έχω έτι υιούς εν τη κοιλία μου, διά να γείνωσιν άνδρες σας;"},
	{12, "12 επιστρέψατε, θυγατέρες μου, υπάγετε· διότι εγήρασα και δεν είμαι διά άνδρα· εάν έλεγον, Έχω ελπίδα, εάν μάλιστα υπανδρευόμην ταύτην την νύκτα και εγέννων έτι υιούς,"},
	{13, "13 σεις ηθέλετε προσμένει αυτούς εωσού μεγαλώσωσιν; ηθέλετε δι' αυτούς αναβάλει το να υπανδρευθήτε; μη, θυγατέρες μου· επειδή επικράνθην πολύ πλέον παρά σεις, ότι η χειρ του Κυρίου εξήλθε κατ' εμού."},
	{14, "14 Εκείναι δε ύψωσαν την φωνήν αυτών και έκλαυσαν πάλιν· και κατεφίλησεν η Ορφά την πενθεράν αυτής· η δε Ρούθ επροσκολλήθη εις αυτήν."},
	{15, "15 Και είπεν η Ναομί, Ιδού, η σύννυμφός σου επέστρεψε προς τον λαόν αυτής και προς τους θεούς αυτής· επίστρεψον και συ κατόπιν της συννύμφου σου."},
	{16, "16 Αλλ' η Ρούθ είπε, Μη με ανάγκαζε να σε αφήσω, διά να αναχωρήσω απ' όπισθέν σου· διότι όπου αν συ υπάγης, και εγώ θέλω υπάγει· και όπου αν συ παραμείνης, και εγώ θέλω παραμείνει· ο λαός σου, λαός μου, και ο Θεός σου, Θεός μου·"},
	{17, "17 όπου αν αποθάνης, θέλω αποθάνει και εκεί θέλω ταφή· ούτω να κάμη ο Κύριος εις εμέ και ούτω να προσθέση, εάν άλλο τι παρά τον θάνατον χωρίση εμέ από σου."},
	{18, "18 Ιδούσα δε η Ναομί ότι αυτή διϊσχυρίζετο να υπάγη μετ' αυτής, έπαυσε να λαλή προς αυτήν."},
	{19, "19 Περιεπάτησαν δε αμφότεραι, εωσού έφθασαν εις Βηθλεέμ. Και ότε έφθασαν εις Βηθλεέμ, πάσα η πόλις συνεκινήθη δι' αυτάς, και αι γυναίκες έλεγον, Αύτη είναι η Ναομί;"},
	{20, "20 Και αυτή είπε προς αυτάς, Μη με ονομάζετε Ναομί· ονομάζετέ με Μαρά· διότι ο Παντοδύναμος με επίκρανε σφόδρα·"},
	{21, "21 εγώ πλήρης ανεχώρησα, και κενήν επανήγαγέ με ο Κύριος· διά τι με ονομάζετε Ναομί, αφού ο Κύριος εμαρτύρησε κατ' εμού και ο Παντοδύναμος με κατέθλιψεν;"},
	{22, "22 Επέστρεψε λοιπόν η Ναομί, και μετ' αυτής Ρούθ η Μωαβίτις η νύμφη αυτής ελθούσα εκ γης Μωάβ· και αύται έφθασαν εις Βηθλεέμ εν τη αρχή του θερισμού των κριθών."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct gr2 poems[] = {
	{1, "1 Είχε δε η Ναομί συγγενή τινά του ανδρός αυτής, άνθρωπον δυνατόν εν ισχύϊ, εκ της συγγενείας του Ελιμέλεχ· και το όνομα αυτού Βοόζ."},
	{2, "2 Και είπεν η Ρούθ η Μωαβίτις προς την Ναομί, Ας υπάγω, παρακαλώ, εις τον αγρόν διά να συνάξω αστάχυα κατόπιν ούτινος εύρω χάριν εις τους οφθαλμούς· και είπε προς αυτήν, Ύπαγε, θυγάτηρ μου."},
	{3, "3 Και υπήγε και ελθούσα εσταχυολόγει εν τω αγρώ κατόπιν των θεριστών· και έτυχεν εν μέρει του αγρού του Βοόζ, όστις ήτο εκ της συγγενείας του Ελιμέλεχ."},
	{4, "4 Και ιδού, ο Βοόζ ήλθεν εκ Βηθλεέμ και είπε προς τους θεριστάς, Κύριος μεθ' υμών. Και απεκρίθησαν προς αυτόν, Κύριος να σε ευλογήση."},
	{5, "5 Τότε είπεν ο Βοόζ προς τον υπηρέτην αυτού, τον επιστάτην των θεριστών, Τίνος είναι η νέα αύτη;"},
	{6, "6 Και ο υπηρέτης ο επιστάτης των θεριστών απεκρίθη και είπεν, είναι η νέα η Μωαβίτις, η επιστρέψασα μετά της Ναομί εκ γης Μωάβ·"},
	{7, "7 και είπεν, Ας σταχυολογήσω, παρακαλώ, και ας συνάξω τι μεταξύ των δεματίων κατόπιν των θεριστών· και ήλθε και εστάθη από πρωΐας έως ταύτης της ώρας· ολίγον μόνον ανεπαύθη εν τη οικία."},
	{8, "8 Και είπεν ο Βοόζ προς την Ρούθ, Δεν ακούεις, θυγάτηρ μου; μη υπάγης να σταχυολογήσης εν άλλω αγρώ, μηδέ να αναχωρήσης εντεύθεν, αλλά μένε ενταύθα μετά των κορασίων μου·"},
	{9, "9 ας ήναι οι οφθαλμοί σου επί τον αγρόν όπου θερίζουσι, και ύπαγε κατόπιν αυτών· δεν προσέταξα εγώ εις τους νέους να μη σε εγγίσωσι; και όταν διψήσης ύπαγε εις τα αγγεία και πίνε από ό,τι αντλήσωσιν οι νέοι."},
	{10, "10 Η δε έπεσε κατά πρόσωπον και προσεκύνησεν έως εδάφους και είπε προς αυτόν, Πως εγώ εύρηκα χάριν εις τους οφθαλμούς σου, ώστε να λάβης πρόνοιαν περί εμού, ενώ είμαι ξένη;"},
	{11, "11 Και ο Βοόζ απεκρίθη και είπε προς αυτήν, Ανηγγέλθησαν προς εμέ ακριβώς πάντα όσα έκαμες εις την πενθεράν σου μετά τον θάνατον του ανδρός σου· και ότι αφήκας τον πατέρα σου και την μητέρα σου και την γην της γεννήσεώς σου, και ήλθες προς λαόν, τον οποίον δεν εγνώριζες πρότερον·"},
	{12, "12 ο Κύριος να ανταμείψη το έργον σου, και ο μισθός σου να ήναι πλήρης παρά Κυρίου του Θεού του Ισραήλ, υπό τας πτέρυγας του οποίου ήλθες να σκεπασθής."},
	{13, "13 Η δε είπεν, Ας εύρω χάριν εις τους οφθαλμούς σου, κύριέ μου· επειδή με παρηγόρησας και επειδή ελάλησας ευμενώς προς την δούλην σου, αν και εγώ δεν είμαι ουδέ ως μία των θεραπαινίδων σου."},
	{14, "14 Και είπε προς αυτήν ο Βοόζ την ώραν του φαγητού, Ελθέ και φάγε εκ του άρτου και βρέξον το ψωμίον σου εις το όξος. Και αυτή εκάθισεν εις τα πλάγια των θεριστών· εκείνος δε έδωκεν εις αυτήν σίτον πεφρυγανισμένον, και έφαγε και εχορτάσθη και επερίσσευσε."},
	{15, "15 Και εσηκώθη να σταχυολογήση, και προσέταξεν ο Βοόζ εις τους νέους αυτού, λέγων, Και μεταξύ των δεματίων ας σταχυολογή, και μη επιπλήττετε αυτήν·"},
	{16, "16 και μάλιστα αφίνετε να πίπτη τι από των χειροβόλων διά αυτήν και αφίνετε να συλλέγη και μη ελέγχετε αυτήν."},
	{17, "17 Και εσταχυολόγησεν εν τω αγρώ έως εσπέρας και εκοπάνισεν όσον εσταχυολόγησε· και ήτο έως εν εφά κριθής."},
	{18, "18 Και εσήκωσεν αυτό και εισήλθεν εις την πόλιν· και είδεν η πενθερά αυτής όσον εσταχυολόγησε· και εκβαλούσα η Ρούθ, έδωκεν εις αυτήν ό,τι είχε περισσεύσει αφού εχορτάσθη."},
	{19, "19 Και είπε προς αυτήν η πενθερά αυτής, Που εσταχυολόγησας σήμερον; και που εδούλευσας; ευλογημένος να ήναι εκείνος όστις έλαβε πρόνοιαν περί σου. Και εκείνη εφανέρωσε προς την πενθεράν αυτής εις τίνος αγρόν εδούλευσε και είπε, το όνομα του ανθρώπου, εις τον οποίον εδούλευσα σήμερον, είναι Βοόζ."},
	{20, "20 Και είπεν η Ναομί προς την νύμφην αυτής, Ευλογημένος παρά Κυρίου εκείνος όστις δεν αφήκε το έλεος αυτού προς τους ζώντας και προς τους τεθνεώτας. Και είπε προς αυτήν η Ναομί, Συγγενής ημών είναι ο άνθρωπος ούτος εκ των πλησίον συγγενών ημών."},
	{21, "21 Και είπεν η Ρούθ η Μωαβίτις, Αυτός με είπε προσέτι, Συ θέλεις μένει μετά των ανθρώπων μου, εωσού τελειώσωσιν όλον τον θερισμόν μου."},
	{22, "22 Και είπεν η Ναομί προς την Ρούθ την νύμφην αυτής, Είναι καλόν, θυγάτηρ μου, να εκβαίνης μετά των κορασίων αυτού, και να μη σε απαντήσωσιν εν άλλω αγρώ."},
	{23, "23 Και προσεκολλήθη εις τα κοράσια του Βοόζ διά να σταχυολογή, εωσού τελειώση ο θερισμός των κριθών και ο θερισμός του σίτου· και εκάθητο μετά της πενθεράς αυτής."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct gr3 poems[] = {
	{1, "1 Και είπε προς αυτήν η Ναομί η πενθερά αυτής, Θυγάτηρ μου, να μη ζητήσω ανάπαυσιν εις σε διά να ευημερήσης;"},
	{2, "2 και τώρα, μήπως δεν είναι Βοόζ εκ της συγγενείας ημών, μετά των κορασίων του οποίου ήσο; ιδού, αυτός λικμίζει ταύτην την νύκτα το αλώνιον των κριθών·"},
	{3, "3 λούσθητι λοιπόν και αλείφθητι και ενδύθητι την στολήν σου και κατάβα εις το αλώνιον· μη γνωρισθής εις τον άνθρωπον, εωσού τελειώση από του να φάγη και να πίη·"},
	{4, "4 και ενώ πλαγιάζει, παρατήρησον τον τόπον όπου πλαγιάζει, και ελθούσα σήκωσον το σκέπασμα από των ποδών αυτού, και πλαγίασον· και εκείνος θέλει σοι ειπεί τι να κάμης."},
	{5, "5 Η δε είπε προς αυτήν, Πάντα όσα λέγεις εις εμέ, θέλω κάμει."},
	{6, "6 Και κατέβη εις το αλώνιον και έκαμε πάντα όσα προσέταξεν εις αυτήν η πενθερά αυτής."},
	{7, "7 Και αφού ο Βοόζ έφαγε και έπιε, και ευφράνη η καρδία αυτού, υπήγε να πλαγιάση εις την άκραν του σωρού του σίτου· εκείνη δε ήλθε κρυφίως και εσήκωσε ο σκέπασμα από των ποδών αυτού και επλαγίασε."},
	{8, "8 Και προς το μεσονύκτιον εξέστη ο άνθρωπος και συνεταράχθη· και ιδού, γυνή εκοιμάτο παρά τους πόδας αυτού."},
	{9, "9 Και είπε, Ποία είσαι συ; Εκείνη δε απεκρίθη, Εγώ η Ρούθ η δούλη σου· άπλωσον λοιπόν την πτέρυγά σου επί την δούλην σου· διότι είσαι ο πλησιέστερος συγγενής μου."},
	{10, "10 Ο δε είπεν, Ευλογημένη να ήσαι παρά Κυρίου, θύγατερ· διότι έδειξας περισσοτέραν αγαθωσύνην εσχάτως παρά πρότερον, μη υπάγουσα κατόπιν νέων, είτε πτωχών είτε πλουσίων·"},
	{11, "11 και τώρα, θύγατερ, μη φοβού· θέλω κάμει εις σε παν ό,τι είπης· διότι πάσα η πόλις του λαού μου εξεύρει ότι είσαι γυνή ενάρετος·"},
	{12, "12 και τώρα είναι αληθές ότι εγώ είμαι στενός συγγενής· είναι όμως άλλος συγγενής πλησιέστερος εμού·"},
	{13, "13 μείνον ταύτην την νύκτα· και το πρωΐ εάν αυτός θέλη να εκπληρώση προς σε το χρέος το συγγενικόν, καλόν· ας το εκπληρώση· αλλ' εάν δεν θέλη να εκπληρώση προς σε το χρέος το συγγενικόν, τότε εγώ θέλω εκπληρώσει τούτο προς σε, ζη Κύριος· κοιμήθητι έως πρωΐ."},
	{14, "14 Και εκοιμήθη παρά τους πόδας αυτού έως πρωΐ· και εσηκώθη πριν διακρίνη άνθρωπος άνθρωπον. Και εκείνος είπεν, Ας μη γνωρισθή ότι ήλθεν η γυνή εις το αλώνιον."},
	{15, "15 Είπε προσέτι, Φέρε το περικάλυμμα το επάνω σου και κράτει αυτό. Και εκείνη εκράτει αυτό, και αυτός εμέτρησεν εξ μέτρα κριθής και έβαλεν επ' αυτήν· και υπήγεν εις την πόλιν."},
	{16, "16 Και ότε ήλθε προς την πενθεράν αυτής, εκείνη είπε, Τι έγεινεν εις σε, θυγάτηρ μου; Και αυτή ανήγγειλε προς αυτήν πάντα όσα έκαμεν εις αυτήν ο άνθρωπος·"},
	{17, "17 και είπεν, Έδωκεν εις εμέ ταύτα τα εξ μέτρα της κριθής· διότι, Δεν θέλεις υπάγει, μοι είπε, κενή προς την πενθεράν σου."},
	{18, "18 Η δε είπε, Κάθου, θυγάτηρ μου, εωσού ίδης πως θέλει τελειώσει το πράγμα· διότι ο άνθρωπος δεν θέλει ησυχάσει, εωσού τελειώση το πράγμα σήμερον."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct gr4 poems[] = {
	{1, "1 Και ανέβη ο Βοόζ εις την πύλην και εκάθισεν εκεί· και ιδού, διέβαινεν ο συγγενής, περί του οποίου ώμίλησεν ο Βοόζ. Και είπεν, Ω συ, στρέψον, κάθισον ενταύθα. Και εστράφη και εκάθισε."},
	{2, "2 Και έλαβεν ο Βοόζ δέκα άνδρας εκ των πρεσβυτέρων της πόλεως, και είπε, Καθίσατε ενταύθα. Και εκάθισαν."},
	{3, "3 Και είπε προς τον συγγενή, Η Ναομί, η επιστρέψασα εκ γης Μωάβ, πωλεί το μερίδιον του αγρού, το οποίον ήτο του αδελφού ημών Ελιμέλεχ·"},
	{4, "4 και εγώ είπα να σε ειδοποιήσω, λέγων, Αγόρασον αυτό έμπροσθεν των κατοίκων και έμπροσθεν των πρεσβυτέρων του λαού μου· εάν θέλης να εξαγοράσης αυτό ως συγγενής, εξαγόρασον· αλλ' εάν δεν θέλης να εξαγοράσης αυτό, ειπέ προς εμέ, διά να εξεύρω· διότι δεν είναι άλλος να εξαγοράση αυτό ως συγγενής παρά σύ· και εγώ είμαι μετά σε. Ο δε είπεν, Εγώ θέλω εξαγοράσει αυτό."},
	{5, "5 Και είπεν ο Βοόζ, Καθ' ην ημέραν αγοράσης τον αγρόν εκ της χειρός της Ναομί, πρέπει να λάβης και την Ρούθ την Μωαβίτιν, γυναίκα του αποθανόντος, διά να αναστήσης το όνομα του αποθανόντος επί της κληρονομίας αυτού."},
	{6, "6 Και είπεν ο συγγενής, Δεν δύναμαι να εκπληρώσω το χρέος το συγγενικόν, μήποτε φθείρω την κληρονομίαν μου· εκπλήρωσον συ το χρέος μου το συγγενικόν, διότι δεν δύναμαι εγώ να εκπληρώσω αυτό."},
	{7, "7 Ούτος δε ήτο ο τρόπος το πάλαι εν τω Ισραήλ περί του δικαιώματος της συγγενείας και περί της απαλλοτριώσεως, διά να βεβαιούται πας λόγος· ο άνθρωπος λύων το υπόδημα αυτού, έδιδεν εις τον πλησίον αυτού· και τούτο ήτο μαρτυρία εν τω Ισραήλ."},
	{8, "8 Διά τούτο είπεν ο συγγενής προς τον Βοόζ, Αγόρασον αυτό εις σεαυτόν. Και έλυσε το υπόδημα αυτού."},
	{9, "9 Τότε είπεν ο Βοόζ προς τους πρεσβυτέρους και πάντα τον λαόν, Μάρτυρες είσθε σήμερον, ότι ηγόρασα πάντα τα του Ελιμέλεχ και πάντα τα του Χελαιών και Μααλών, εκ της χειρός της Ναομί·"},
	{10, "10 και προσέτι, την Ρούθ την Μωαβίτιν την γυναίκα του Μααλών, έλαβον εις εμαυτόν διά γυναίκα, διά να αναστήσω το όνομα του αποθανόντος επί της κληρονομίας αυτού, διά να μη εξαλειφθή το όνομα του αποθανόντος εκ των αδελφών αυτού και εκ της πόλεως της κατοικίας αυτού· μάρτυρες είσθε σήμερον."},
	{11, "11 Και πας ο λαός ο εν τη πύλη και οι πρεσβύτεροι είπαν, Μάρτυρες· ο Κύριος να κάμη την γυναίκα, ήτις εισέρχεται εις τον οίκόν σου, ως την Ραχήλ και ως την Λείαν, αίτινες ωκοδόμησαν αμφότεραι τον οίκον Ισραήλ· και ίσχυε εν Εφραθά και έσο περίφημος εν Βηθλεέμ·"},
	{12, "12 και ας γείνη ο οίκός σου ως ο οίκος του Φαρές, τον οποίον εγέννησεν η Θάμαρ εις τον Ιούδαν, εκ του σπέρματος το οποίον ο Κύριος θέλει δώσει εις σε εκ της νέας ταύτης."},
	{13, "13 Και έλαβεν ο Βοόζ την Ρούθ, και έγεινε γυνή αυτού· και ότε εισήλθε προς αυτήν, ο Κύριος έδωκεν εις αυτήν σύλληψιν, και εγέννησεν υιόν."},
	{14, "14 Και είπαν αι γυναίκες προς την Ναομί, Ευλογητός ο Κύριος, όστις σήμερον δεν σε απεστέρησε συγγενούς, ώστε το όνομα αυτού να καλήται εν τω Ισραήλ·"},
	{15, "15 και ούτος θέλει είσθαι εις σε αναψυχωτής της ζωής και θέλει θρέψει την πολιάν σου· διότι εγέννησεν αυτόν η νύμφη σου, ήτις σε αγαπά, ήτις είναι εις σε καλητέρα παρά επτά υιούς."},
	{16, "16 Τότε έλαβεν η Ναομί το παιδίον και έθεσεν αυτό εις τον κόλπον αυτής και έγεινεν εις αυτό τροφός."},
	{17, "17 Και αι γείτονες έδωκαν εις αυτό όνομα, λέγουσαι, Υιός εγεννήθη εις την Ναομί· και εκάλεσαν το όνομα αυτού Ωβήδ· ούτος είναι ο πατήρ του Ιεσσαί πατρός του Δαβίδ."},
	{18, "18 Και αύτη είναι η γενεαλογία του Φαρές· ο Φαρές εγέννησε τον Εσρών,"},
	{19, "19 Εσρών δε εγέννησε τον Αράμ, Αράμ δε εγέννησε τον Αμιναδάβ,"},
	{20, "20 Αμιναδάβ δε εγέννησε τον Ναασσών, Ναασσών δε εγέννησε τον Σαλμών,"},
	{21, "21 Σαλμών δε εγέννησε τον Βοόζ, Βοόζ δε εγέννησε τον Ωβήδ,"},
	{22, "22 Ωβήδ δε εγέννησε τον Ιεσσαί, και ο Ιεσσαί εγέννησε τον Δαβίδ."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};