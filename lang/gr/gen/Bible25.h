#include <map>
#include <string>
class Bible25
{
	struct gr1	{ int val; const char *msg; };
	struct gr2	{ int val; const char *msg; };
	struct gr3	{ int val; const char *msg; };
	struct gr4	{ int val; const char *msg; };
	struct gr5	{ int val; const char *msg; };
public:
static void view1() {
struct gr1 poems[] = {
	{1, "1 Πως εκάθησε μόνη η πόλις η πεπληθυμμένη λαών. Κατέστη ως χήρα η πεπληθυμμένη εν έθνεσιν, η άρχουσα εν ταις επαρχίαις· έγεινεν υποτελής."},
	{2, "2 Ακαταπαύστως κλαίει την νύκτα και τα δάκρυα αυτής καταρρέουσιν επί τας σιαγόνας αυτής· εκ πάντων των αγαπώντων αυτήν δεν υπάρχει ο παρηγορών αυτήν· πάντες οι φίλοι αυτής εφέρθησαν προς αυτήν απίστως· εχθροί έγειναν εις αυτήν."},
	{3, "3 Ηχμαλωτίσθη ο Ιούδας υπό θλίψεως και υπό βαρείας δουλείας· κάθηται εν τοις έθνεσι· δεν ευρίσκει ανάπαυσιν· πάντες οι διώκται αυτού κατέλαβον αυτόν εν μέσω των στενών."},
	{4, "4 Αι οδοί της Σιών πενθούσι, διότι ουδείς έρχεται εις τας εορτάς· πάσαι αι πύλαι αυτής είναι έρημοι οι ιερείς αυτής αναστενάζουσιν· αι παρθένοι αυτής είναι περίλυποι και αυτή πλήρης πικρίας."},
	{5, "5 Οι εναντίοι αυτής έγειναν κεφαλή, οι εχθροί αυτής ευημερούσι· διότι ο Κύριος κατέθλιψεν αυτήν διά το πλήθος των ανομιών αυτής· τα νήπια αυτής επορεύθησαν εις αιχμαλωσίαν έμπροσθεν του εχθρού."},
	{6, "6 Και έφυγεν από της θυγατρός Σιών πάσα η δόξα αυτής· οι άρχοντες αυτής έγειναν ως έλαφοι μη ευρίσκουσαι βοσκήν, και εβάδιζον χωρίς δυνάμεως έμπροσθεν του διώκοντος."},
	{7, "7 Ενεθυμήθη η Ιερουσαλήμ εν ταις ημέραις της θλίψεως αυτής και της εξώσεως αυτής πάντα τα επιθυμητά αυτής, τα οποία είχεν από χρόνων αρχαίων, ότε έπεσεν ο λαός αυτής εις την χείρα του εχθρού και δεν υπήρχεν ο βοηθών αυτήν· είδον αυτήν οι εχθροί, εγέλασαν επί τη καταπαύσει αυτής."},
	{8, "8 Αμαρτίαν ημάρτησεν η Ιερουσαλήμ· διά τούτο έγεινεν ως ακάθαρτος· πάντες οι δοξάζοντες αυτήν κατεφρόνησαν αυτήν, διότι είδον την ασχημοσύνην αυτής· αυτή δε ανεστέναζε και απεστράφη εις τα οπίσω."},
	{9, "9 Η ακαθαρσία αυτής ήτο εις τα κράσπεδα αυτής· δεν ενεθυμήθη τα τέλη αυτής· όθεν εταπεινώθη εξαισίως· δεν υπήρχεν ο παρηγορών αυτήν. Ιδέ, Κύριε, την θλίψιν μου, διότι εμεγαλύνθη ο εχθρός."},
	{10, "10 Ο εχθρός εξήπλωσε την χείρα αυτού επί πάντα τα επιθυμητά αυτής· διότι αυτή είδε τα έθνη εισερχόμενα εις το αγιαστήριον αυτής, τα οποία προσέταξας να μη εισέλθωσιν εις την συναγωγήν σου."},
	{11, "11 Πας ο λαός αυτής καταστενάζει, ζητών άρτον· έδωκαν τα επιθυμητά αυτών αντί τροφής, διά να επανέλθη η ψυχή αυτών. Ιδέ, Κύριε, και επίβλεψον· διότι έγεινα εξουθενημένη."},
	{12, "12 Ω, προς υμάς, πάντες οι διαβαίνοντες την οδόν· επιβλέψατε και ιδέτε, αν ήναι πόνος κατά τον πόνον μου, όστις έγεινεν εις εμέ, με τον οποίον με έθλιψεν ο Κύριος εν τη ημέρα της οργής του θυμού αυτού."},
	{13, "13 Εξαπέστειλεν εξ ύψους πυρ επί τα οστά μου και κατεκράτησεν αυτά· ήπλωσε δίκτυον εις τους πόδας μου· με έστρεψεν εις τα οπίσω· με κατέστησεν ηφανισμένην, όλην την ημέραν οδυνωμένην."},
	{14, "14 Ο ζυγός των ασεβημάτων μου συνεσφίγχθη διά της χειρός αυτού· περιεπλέχθησαν, ανέβησαν επί τον τράχηλόν μου, κατέλυσε την δύναμίν μου· ο Κύριος με παρέδωκεν εις χείρας, εξ ων δεν δύναμαι να εγερθώ."},
	{15, "15 Ο Κύριος κατέστρωσε πάντας τους δυνατούς μου εν τω μέσω μου· εκάλεσεν επ' εμέ ωρισμένον καιρόν διά να συντρίψη τους εκλεκτούς μου· ο Κύριος επάτησεν εν ληνώ την παρθένον, την θυγατέρα Ιούδα."},
	{16, "16 Διά ταύτα εγώ θρηνώ· οι οφθαλμοί μου, οι οφθαλμοί μου καταρρέουσιν ύδατα· διότι απεμακρύνθη απ' εμού ο παρηγορητής ο αναζωοποιών την ψυχήν μου· οι υιοί μου ηφανίσθησαν, διότι υπερίσχυσεν ο εχθρός."},
	{17, "17 Η Σιών εκτείνει τας χείρας αυτής, δεν υπάρχει ο παρηγορών αυτήν· ο Κύριος προσέταξε περί του Ιακώβ· οι εχθροί αυτού περιεκύκλωσαν αυτόν· η Ιερουσαλήμ έγεινε μεταξύ αυτών ως ακάθαρτος."},
	{18, "18 Δίκαιος είναι ο Κύριος διότι απεστάτησα από του λόγου αυτού. Ακούσατε, παρακαλώ, πάντες οι λαοί, και ιδέτε τον πόνον μου· αι παρθένοι μου και οι νεανίσκοι μου επορεύθησαν εις αιχμαλωσίαν."},
	{19, "19 Εκάλεσα τους αγαπώντάς με, αλλ' αυτοί με ηπάτησαν· οι ιερείς μου και οι πρεσβύτεροί μου εξέπνευσαν εν τη πόλει, διότι εζήτησαν τροφήν υπέρ εαυτών διά να επανέλθη η ψυχή αυτών."},
	{20, "20 Ιδέ, Κύριε, διότι θλίβομαι· τα εντόσθιά μου ταράττονται, η καρδία μου αναστρέφεται εντός μου, διότι μεγάλως απεστάτησα· έξωθεν ητέκνωσεν η μάχαιρα· εν τω οίκω ο θάνατος."},
	{21, "21 Ήκουσαν, διότι στενάζω· δεν υπάρχει ο παρηγορών με· πάντες οι εχθροί μου ήκουσαν την συμφοράν μου· εχάρησαν ότι συ έκαμες τούτο · όταν φέρης την ημέραν, την οποίαν εκάλεσας, αυτοί θέλουσι γείνει ως εγώ."},
	{22, "22 Ας έλθη ενώπιόν σου πάσα η κακία αυτών· και κάμε εις αυτούς ως έκαμες εις εμέ διά πάντα τα αμαρτήματά μου· διότι πολλοί είναι οι στεναγμοί μου και η καρδία μου εξέλιπε."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct gr2 poems[] = {
	{1, "1 Πως περιεκάλυψεν ο Κύριος με νέφος την θυγατέρα Σιών εν τη οργή αυτού, κατέρριψεν από του ουρανού εις την γην την δόξαν του Ισραήλ, και δεν ενεθυμήθη εν τη ημέρα της οργής αυτού το υποπόδιον των ποδών αυτού"},
	{2, "2 Ο Κύριος κατεπόντισε πάσας τας κατοικίας του Ιακώβ και δεν εφείσθη· κατέστρεψεν εν τω θυμώ αυτού τα οχυρώματα της θυγατρός Ιούδα· κατηδάφισεν αυτά· εβεβήλωσε το βασίλειον και τους άρχοντας αυτού."},
	{3, "3 Συνέθλασεν εν τη εξάψει του θυμού αυτού παν το κέρας του Ισραήλ· έστρεψεν οπίσω την δεξιάν αυτού απ' έμπροσθεν του εχθρού· και εξήφθη κατά του Ιακώβ ως πυρ φλογερόν, κατατρώγον τα πέριξ."},
	{4, "4 Ενέτεινε το τόξον αυτού ως εχθρός, έστησε την δεξιάν αυτού ως υπεναντίος, και εφόνευσε παν το αρεστόν εις τους οφθαλμούς εν τη σκηνή της θυγατρός Σιών· εξέχεεν ως πυρ τον θυμόν αυτού."},
	{5, "5 Ο Κύριος έγεινεν ως εχθρός, κατεπόντισε τον Ισραήλ· κατεπόντισε πάντα τα παλάτια αυτού· ηφάνισε τα οχυρώματα αυτού· και επλήθυνεν εις την θυγατέρα Ιούδα το πένθος και την θλίψιν."},
	{6, "6 Και εξέσπασε την σκηνήν αυτού ως καλύβην κήπου· κατηφάνισε τον τόπον των συνάξεων αυτού· ο Κύριος έκαμε να λησμονηθή εν Σιών η εορτή και το σάββατον, και εν τη αγανακτήσει της οργής αυτού απέρριψε βασιλέα και ιερέα."},
	{7, "7 Ο Κύριος απέβαλε το θυσιαστήριον αυτού, εβδελύχθη το αγιαστήριον αυτού· συνέκλεισεν εν τη χειρί των εχθρών τα τείχη των παλατίων αυτής· ηλάλαξαν εν τω οίκω του Κυρίου ως εν ημέρα εορτής."},
	{8, "8 Ο Κύριος εβουλεύθη να αφανίση το τείχος της θυγατρός Σιών· εξέτεινε την στάθμην, δεν απέστρεψε την χείρα αυτού από του να καταποντίζη, και έκαμε να πενθήση το περιτείχισμα και το τείχος· τα πάντα ητόνησαν ομού."},
	{9, "9 Αι πύλαι αυτής ενεπήχθησαν εις την γήν· ηφάνισε και κατεσύντριψε τους μοχλούς αυτής· ο βασιλεύς αυτής και οι άρχοντες αυτής είναι εν τοις έθνεσι· νόμος δεν υπάρχει· ουδέ οι προφήται αυτής ευρίσκουσιν όρασιν παρά Κυρίου."},
	{10, "10 Οι πρεσβύτεροι της θυγατρός Σιών, κάθηνται κατά γης, σιωπώντες· ανεβίβασαν χώμα επί την κεφαλήν αυτών, εζώσθησαν σάκκους· αι παρθένοι της Ιερουσαλήμ κατεβίβασαν τας κεφαλάς αυτών προς την γην."},
	{11, "11 Οι οφθαλμοί μου εμαράνθησαν υπό των δακρύων, τα εντόσθιά μου ταράττονται, η χολή μου εξεχύθη εις την γην, διά τον συντριμμόν της θυγατρός του λαού μου, επειδή τα νήπια και τα θηλάζοντα ελιποψύχουν εν ταις πλατείαις της πόλεως."},
	{12, "12 Είπον προς τας μητέρας αυτών, Που είναι σίτος και οίνος; Οπότε ελιποθύμουν εν ταις πλατείαις της πόλεως ως ο τραυματίας, οπότε η ψυχή αυτών εξεχέετο εις τον κόλπον των μητέρων αυτών."},
	{13, "13 Τίνα να λάβω μάρτυρα εις σε; με τι να σε συγκρίνω, θυγάτηρ της Ιερουσαλήμ; Με ποίον να σε εξομοιώσω διά να σε παρηγορήσω, παρθένε, θυγάτηρ Σιών; Διότι ο συντριμμός σου είναι μέγας ως η θάλασσα· τις δύναται να σε ιατρεύση;"},
	{14, "14 Οι προφήταί σου είδον περί σου μάταια και αφροσύνην, και δεν εφανέρωσαν την ανομίαν σου, διά να αποστρέψωσι την αιχμαλωσίαν σου· αλλ' είδον περί σου φορτία μάταια και πρόξενα εξώσεως."},
	{15, "15 Πάντες οι διαβαίνοντες την οδόν εκρότησαν επί σε χείρας· εσύριξαν και έσεισαν τας κεφαλάς αυτών εις την θυγατέρα της Ιερουσαλήμ, λέγοντες, Αύτη είναι η πόλις, περί της οποίας ελέγετο, Η εντέλεια της ώραιότητος, η χαρά πάσης της γης;"},
	{16, "16 Πάντες οι εχθροί σου ήνοιξαν επί σε το στόμα αυτών· εσύριξαν και έτριξαν τους οδόντας λέγοντες, Κατεπίομεν αυτήν· αύτη τωόντι είναι η ημέρα, την οποίαν περιεμένομεν· εύρομεν, είδομεν."},
	{17, "17 Ο Κύριος έκαμεν ό,τι εβουλεύθη· εξεπλήρωσε τον λόγον αυτού, τον οποίον διώρισεν από ημερών αρχαίων· Κατέστρεψε και δεν εφείσθη, και εύφρανεν επί σε τον εχθρόν· ύψωσε το κέρας των εναντίων σου."},
	{18, "18 Η καρδία αυτών εβόησε προς τον Κύριον, Τείχος της θυγατρός Σιών, καταβίβαζε ως χείμαρρον δάκρυα ημέραν και νύκτα· μη δώσης παύσιν εις σεαυτόν· ας μη σιωπήση η κόρη των οφθαλμών σου."},
	{19, "19 Σηκώθητι, βόησον την νύκτα, όταν αρχίζωσιν αι φυλακαί· έκχεον την καρδίαν σου ως ύδωρ έμπροσθεν του προσώπου του Κυρίου· ύψωσον προς αυτόν τας χείρας σου, διά την ζωήν των νηπίων σου, τα οποία λιποθυμούσιν από της πείνης επί των άκρων πασών των οδών."},
	{20, "20 Ιδέ, Κύριε, και επίβλεψον, εις τίνα ποτέ έκαμες ούτω; Να φάγωσιν αι γυναίκες τον καρπόν της κοιλίας αυτών, τα νήπια εν τοις σπαργάνοις αυτών; Να φονευθώσιν εν τω αγιαστηρίω του Κυρίου ιερεύς και προφήτης;"},
	{21, "21 Το παιδίον και ο γέρων κοίτονται κατά γης εν ταις οδοίς· αι παρθένοι μου και οι νεανίσκοι μου έπεσον εν μαχαίρα· εφόνευσας εν τη ημέρα της οργής σου, κατέσφαξας, δεν εφείσθης."},
	{22, "22 Προσεκάλεσας πανταχόθεν, ως εν ημέρα πανηγύρεως, τους τρόμους μου, και ουδείς εσώθη ουδέ υπελείφθη εν τη ημέρα της οργής του Κυρίου· εκείνους, τους οποίους εσπαργάνωσα και ηύξησα, ο εχθρός μου συνετέλεσεν αυτούς."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct gr3 poems[] = {
	{1, "1 Εγώ είμαι ο άνθρωπος, όστις είδον θλίψιν από της ράβδου του θυμού αυτού."},
	{2, "2 Με ώδήγησε και έφερεν εις σκότος και ουχί εις φως."},
	{3, "3 Ναι, κατ' εμού εστράφη· κατ' εμού έστρεψε την χείρα αυτού όλην την ημέραν."},
	{4, "4 Επαλαίωσε την σάρκα μου και το δέρμα μου· συνέτριψε τα οστά μου."},
	{5, "5 Ωικοδόμησε κατ' εμού και με περιεκύκλωσε χολήν και μόχθον."},
	{6, "6 Με εκάθισεν εν σκοτεινοίς ως νεκρούς αιωνίους."},
	{7, "7 Με περιέφραξε, διά να μη εξέλθω· εβάρυνε τας αλύσεις μου."},
	{8, "8 Έτι και όταν κράζω και αναβοώ, αποκλείει την προσευχήν μου."},
	{9, "9 Περιέφραξε με πελεκητούς λίθους τας οδούς μου, εστρέβλωσε τας τρίβους μου."},
	{10, "10 Έγεινεν εις εμέ άρκτος ενεδρεύουσα, λέων εν αποκρύφοις."},
	{11, "11 Παρέτρεψε τας οδούς μου και με κατεσπάραξε, με κατέστηαεν ηφανισμένην."},
	{12, "12 Ενέτεινε το τόξον αυτού και με έστησεν ως σκοπόν εις βέλος."},
	{13, "13 Ενέπηξεν εις τα νεφρά μου τα βέλη της φαρέτρας αυτού."},
	{14, "14 Έγεινα γέλως εις πάντα τον λαόν μου, άσμα αυτών όλην την ημέραν."},
	{15, "15 Με εχόρτασε πικρίαν· με εμέθυσεν αψίνθιον."},
	{16, "16 Και συνέτριψε τους οδόντας μου με χάλικας· με εκάλυψε με σποδόν."},
	{17, "17 Και απέσπρωξα, από ειρήνης την ψυχήν μου· ελησμόνησα το αγαθόν."},
	{18, "18 Και είπα, Απωλέσθη η δύναμίς μου και η ελπίς μου υπό του Κυρίου."},
	{19, "19 Ενθυμήθητι την θλίψιν μου και την έξωσίν μου, το αψίνθιον και την χολήν."},
	{20, "20 Η ψυχή μου ενθυμείται ταύτα ακαταπαύστως και είναι τεταπεινωμένη εν εμοί."},
	{21, "21 Τούτο ανακαλώ εις την καρδίαν μου, όθεν έχω ελπίδα·"},
	{22, "22 Έλεος του Κυρίου είναι, ότι δεν συνετελέσθημεν, επειδή δεν εξέλιπον οι οικτιρμοί αυτού."},
	{23, "23 Ανανεόνονται εν ταις πρωΐαις· μεγάλη είναι η πιστότης σου."},
	{24, "24 Ο Κύριος είναι η μερίς μου, είπεν η ψυχή μου· διά τούτο θέλω ελπίζει επ' αυτόν."},
	{25, "25 Αγαθός ο Κύριος εις τους προσμένοντας αυτόν, εις την ψυχήν την εκζητούσαν αυτόν."},
	{26, "26 Καλόν είναι και να ελπίζη τις και να εφησυχάζη εις την σωτηρίαν του Κυρίου."},
	{27, "27 Καλόν εις τον άνθρωπον να βαστάζη ζυγόν εν τη νεότητι αυτού."},
	{28, "28 Θέλει κάθησθαι κατά μόνας και σιωπά, επειδή ο Θεός επέβαλε φορτίον επ' αυτόν."},
	{29, "29 Θέλει βάλει το στόμα αυτού εις το χώμα, ίσως ήναι ελπίς."},
	{30, "30 Θέλει δώσει την σιαγόνα εις τον ραπίζοντα αυτόν· θέλει χορτασθή από ονειδισμού."},
	{31, "31 Διότι ο Κύριος δεν απορρίπτει εις τον αιώνα·"},
	{32, "32 Αλλ' εάν και θλίψη, θέλει όμως και οικτειρήσει κατά το πλήθος του ελέους αυτού."},
	{33, "33 Διότι δεν θλίβει εκ καρδίας αυτού ουδέ καταθλίβει τους υιούς των ανθρώπων."},
	{34, "34 Το να καταπατή τις υπό τους πόδας αυτού πάντας τους δεσμίους της γης."},
	{35, "35 Το να διαστρέφη κρίσιν ανθρώπου κατέναντι του προσώπου του Υψίστου·"},
	{36, "36 Το να αδική άνθρωπον εν τη δίκη αυτού· ο Κύριος δεν βλέπει ταύτα."},
	{37, "37 Τις λέγει τι και γίνεται, χωρίς να προστάξη αυτό ο Κύριος;"},
	{38, "38 Εκ του στόματος του Υψίστου δεν εξέρχονται τα κακά και τα αγαθά;"},
	{39, "39 Διά τι ήθελε γογγύσει άνθρωπος ζων, άνθρωπος, διά την ποινήν της αμαρτίας αυτού;"},
	{40, "40 Ας ερευνήσωμεν τας οδούς ημών και ας εξετάσωμεν και ας επιστρέψωμεν εις τον Κύριον."},
	{41, "41 Ας υψώσωμεν τας καρδίας ημών και τας χείρας προς τον Θεόν τον εν τοις ουρανοίς, λέγοντες,"},
	{42, "42 Ημαρτήσαμεν και απεστατήσαμεν· συ δεν μας συνεχώρησας."},
	{43, "43 Περιεκάλυψας με θυμόν και κατεδίωξας ημάς· εφόνευσας, δεν εφείσθης."},
	{44, "44 Εκάλυψας σεαυτόν με νέφος, διά να μη διαβαίνη η προσευχή ημών."},
	{45, "45 Μας έκαμες σκύβαλον και βδέλυγμα εν μέσω των λαών."},
	{46, "46 Πάντες οι εχθροί ημών ήνοιξαν το στόμα αυτών εφ' ημάς."},
	{47, "47 Φόβος και λάκκος ήλθον εφ' ημάς, ερήμωσις και συντριμμός."},
	{48, "48 Ρύακας υδάτων καταβιβάζει ο οφθαλμός μου διά τον συντριμμόν της θυγατρός του λαού μου."},
	{49, "49 Ο οφθαλμός μου σταλάζει και δεν σιωπά, διότι δεν έχει άνεσιν,"},
	{50, "50 Εωσού ο Κύριος διακύψη και ίδη εξ ουρανού."},
	{51, "51 Ο οφθαλμός μου καταθλίβει την ψυχήν μου, εκ πασών των θυγατέρων της πόλεώς μου."},
	{52, "52 Οι εχθρευόμενοί με αναιτίως με εκυνήγησαν ακαταπαύστως ως στρουθίον."},
	{53, "53 Έκοψαν την ζωήν μου εν τω λάκκω και έρριψαν λίθον επ' εμέ."},
	{54, "54 Τα ύδατα επλημμύρησαν υπεράνω της κεφαλής μου· είπα, Απερρίφθην."},
	{55, "55 Επεκαλέσθην το όνομά σου, Κύριε, εκ λάκκου κατωτάτου."},
	{56, "56 Ήκουσαν την φωνήν μου· μη κλείσης το ωτίον σου εις τον στεναγμόν μου, εις την κραυγήν μου."},
	{57, "57 Επλησίασας καθ' ην ημέραν σε επεκαλέσθην· είπας, Μη φοβού."},
	{58, "58 Εδίκασας, Κύριε, την δίκην της ψυχής μου· ελύτρωσας την ζωήν μου."},
	{59, "59 Είδες, Κύριε, το προς εμέ άδικον· κρίνον την κρίσιν μου."},
	{60, "60 Είδες πάσας τας εκδικήσεις αυτών, πάντας τους διαλογισμούς αυτών κατ' εμού."},
	{61, "61 Ήκουσαν, Κύριε, τον ονειδισμόν αυτών, πάντας τους διαλογισμούς αυτών κατ' εμού·"},
	{62, "62 Τους λόγους των επανισταμένων επ' εμέ και τας μελέτας αυτών κατ' εμού όλην την ημέραν."},
	{63, "63 Ιδέ, όταν κάθηνται και όταν σηκόνωνται· εγώ είμαι το άσμα αυτών."},
	{64, "64 Κάμε, Κύριε, εις αυτούς ανταπόδοσιν κατά τα έργα των χειρών αυτών."},
	{65, "65 Δος εις αυτούς πώρωσιν καρδίας, την κατάραν· σου επ' αυτούς."},
	{66, "66 Καταδίωξον εν οργή και αφάνισον αυτούς υποκάτωθεν των ουρανών του Κυρίου."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct gr4 poems[] = {
	{1, "1 Πως ημαυρώθη το χρυσίον, ηλλοιώθη το χρυσίον το καθαρώτατον, οι λίθοι του αγιαστηρίου διεσπάρησαν εις τα άκρα πασών των οδών."},
	{2, "2 Οι ένδοξοι υιοί της Σιών, οι εκτιμώμενοι ως το καθαρόν χρυσίον, πως ελογίσθησαν ως αγγεία πήλινα, έργον χειρός κεραμέως."},
	{3, "3 Έτι και τα κήτη προσφέρουσι μαστούς και θηλάζουσι τα τέκνα αυτών· η δε θυγάτηρ του λαού μου εσκληρύνθη ως αι στρουθοκάμηλοι εν ερήμω."},
	{4, "4 Η γλώσσα του θηλάζοντος εκολλήθη εις τον ουρανίσκον αυτού υπό της δίψης· τα παιδία εζήτησαν άρτον και δεν υπάρχει ο κόπτων εις αυτά."},
	{5, "5 Οι τρώγοντες φαγητά τρυφερά κοίτονται εν ταις οδοίς ηφανισμένοι· οι ανατεθραμμένοι εν πορφύρα ενηγκαλίσθησαν την κοπρίαν."},
	{6, "6 Και η ποινή της ανομίας της θυγατρός του λαού μου έγεινε μεγαλητέρα παρά την ποινήν της αμαρτίας των Σοδόμων, τα οποία κατεστράφησαν ως εν ριπή, και δεν ενήργησαν επ' αυτών χείρες."},
	{7, "7 Οι Ναζηραίοι αυτής ήσαν καθαρώτεροι χιόνος, λευκότεροι γάλακτος, ερυθρότεροι την όψιν υπέρ τους πολυτίμους λίθους, στιλπνοί ως ο σάπφειρος·"},
	{8, "8 Η όψις αυτών κατημαυρώθη υπέρ την ασβόλην· δεν εγνωρίζοντο εν ταις οδοίς· το δέρμα αυτών εκολλήθη επί των οστέων αυτών· εξηράνθη, έγεινεν ως ξύλον."},
	{9, "9 Ευτυχέστεροι εστάθησαν οι θανατωθέντες υπό της ρομφαίας, παρά οι θανατωθέντες υπό της πείνης· διότι ούτοι κατατήκονται, τετραυματισμένοι δι' έλλειψιν γεννημάτων του αγρού."},
	{10, "10 Αι χείρες των ευσπλάγχνων γυναικών έψησαν τα τέκνα αυτών· έγειναν εις αυτάς τροφή εν τω συντριμμώ της θυγατρός του λαού μου."},
	{11, "11 Ο Κύριος συνετέλεσε τον θυμόν αυτού, εξέχεε την φλόγα της οργής αυτού, και εξήψε πυρ εν Σιών, το οποίον κατέφαγε τα θεμέλια αυτής."},
	{12, "12 Δεν επίστευον οι βασιλείς της γης και πάντες οι κατοικούντες την οικουμένην, ότι ήθελεν εισέλθει εχθρός και πολέμιος εις τας πύλας της Ιερουσαλήμ."},
	{13, "13 Τούτο έγεινε διά τας αμαρτίας των προφητών αυτής και τας ανομίας των ιερέων αυτής, οίτινες έχυνον το αίμα των δικαίων εν μέσω αυτής."},
	{14, "14 Περιεπλανήθησαν ως τυφλοί εν ταις οδοίς, εμολύνθησαν εν τω αίματι, ώστε οι άνθρωποι δεν ηδύναντο να εγγίσωσι τα ενδύματα αυτών."},
	{15, "15 Απόστητε, ακάθαρτοι, έκραζον προς αυτούς· απόστητε, απόστητε, μη εγγίσητε· ενώ έφευγον και περιεπλανώντο, ελέγετο μεταξύ των εθνών, Δεν θέλουσι παροικεί πλέον μεθ' ημών."},
	{16, "16 Το πρόσωπον του Κυρίου διεμέρισεν αυτούς, δεν θέλει πλέον επιβλέπει επ' αυτούς· πρόσωπον ιερέων δεν εσεβάσθησαν, γέροντας δεν ηλέησαν."},
	{17, "17 Ενώ έτι υπήρχομεν, οι οφθαλμοί ημών απέκαμον, προσμένοντες την ματαίαν βοήθειαν ημών· απεβλέψαμεν κεχηνότες προς έθνος μη δυνάμενον να σώζη."},
	{18, "18 Παραμονεύουσι τα ίχνη ημών, διά να μη περιπατώμεν εν ταις πλατείαις ημών· επλησίασε το τέλος ημών, αι ημέραι ημών επληρώθησαν, διότι ήλθε το τέλος ημών."},
	{19, "19 Οι καταδιώκοντες ημάς έγειναν ελαφρότεροι των αετών του ουρανού· εκυνήγησαν ημάς επί τα όρη, ενήδρευσαν ημάς εν τη ερήμω."},
	{20, "20 Η πνοή των μυκτήρων ημών, ο χριστός του Κυρίου, επιάσθη εν ταις παγίσιν αυτών, υπό την σκιάν του οποίου, ελέγομεν, θέλομεν ζη μεταξύ των εθνών."},
	{21, "21 Χαίρε και ευφραίνου, θυγάτηρ Εδώμ, η κατοικούσα εν γη Ούζ· έτι και προς σε θέλει περάσει το ποτήριον· θέλεις μεθυσθή και θέλεις γυμνωθή."},
	{22, "22 Ετελείωσεν η ποινή της ανομίας σου, θυγάτηρ Σιών· δεν θέλει σε φέρει πλέον εις αιχμαλωσίαν· θέλει επισκεφθή την ανομίαν σου, θυγάτηρ Εδώμ· θέλει αποκαλύψει τα αμαρτήματά σου."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct gr5 poems[] = {
	{1, "1 Ενθυμήθητι, Κύριε, τι έγεινεν εις ημάς· επίβλεψον, και ιδέ τον ονειδισμόν ημών."},
	{2, "2 Η κληρονομία ημών μετεστράφη εις αλλοτρίους, αι οικίαι ημών εις ξένους."},
	{3, "3 Εγείναμεν ορφανοί άνευ πατρός, αι μητέρες ημών ως χήραι."},
	{4, "4 Με αργύριον επίομεν το ύδωρ ημών· τα ξύλα ημών επωλήθησαν εις ημάς."},
	{5, "5 Επί τον τράχηλον ημών είναι διωγμός· εμοχθήσαμεν, ανάπαυσιν δεν έχομεν."},
	{6, "6 Ηπλώσαμεν χείρα προς τους Αιγυπτίους, προς τους Ασσυρίους, διά να χορτασθώμεν άρτον."},
	{7, "7 Οι πατέρες ημών ημάρτησαν, εκείνοι δεν υπάρχουσι· και ημείς φέρομεν τας ανομίας αυτών."},
	{8, "8 Δούλοι εξουσιάζουσιν εφ' ημάς· δεν υπάρχει ο λυτρόνων εκ της χειρός αυτών."},
	{9, "9 Φέρομεν τον άρτον ημών μετά κινδύνου της ζωής ημών, απ' έμπροσθεν της ρομφαίας της ερήμου."},
	{10, "10 Το δέρμα ημών ημαυρώθη ως κλίβανος, από της καύσεως της πείνης."},
	{11, "11 Εταπείνωσαν τας γυναίκας εν Σιών, τας παρθένους εν ταις πόλεσιν Ιούδα."},
	{12, "12 Οι άρχοντες εκρεμάσθησαν υπό των χειρών αυτών· τα πρόσωπα των πρεσβυτέρων δεν ετιμήθησαν."},
	{13, "13 Οι νέοι υπεβλήθησαν εις το άλεσμα, και τα παιδία έπεσον υπό τα ξύλα."},
	{14, "14 Οι πρεσβύτεροι έπαυσαν από των πυλών, οι νέοι από των ασμάτων αυτών."},
	{15, "15 Έπαυσεν η χαρά της καρδίας ημών, ο χορός ημών εστράφη εις πένθος."},
	{16, "16 Ο στέφανος της κεφαλής ημών έπεσεν· ουαί δε εις ημάς, διότι ημαρτήσαμεν."},
	{17, "17 Διά τούτο εξέλιπεν η καρδία ημών, διά ταύτα εσκοτοδινίασαν οι οφθαλμοί ημών."},
	{18, "18 Διά την ερήμωσιν του όρους Σιών, αι αλώπεκες περιπατούσιν εν αυτώ."},
	{19, "19 Συ, Κύριε, κατοικείς εις τον αιώνα· ο θρόνος σου διαμένει εις γενεάν και γενεάν."},
	{20, "20 Διά τι θέλεις μας λησμονήσει διά παντός; θέλεις μας εγκαταλείψει εις μακρότητα ημερών;"},
	{21, "21 Επίστρεψον ημάς, Κύριε, προς σε και θέλομεν επιστραφή. Ανανέωσον τας ημέρας ημών ως το πρότερον."},
	{22, "22 Διατί απέρριψας ημάς ολοτελώς, ωργίσθης εναντίον ημών έως σφόδρα;"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};