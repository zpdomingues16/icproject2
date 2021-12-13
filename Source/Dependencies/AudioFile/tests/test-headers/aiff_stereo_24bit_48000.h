#include <vector>

namespace aiff_stereo_24bit_48000 { 

int numSamplesPerChannel = 384000;
int bitDepth = 24;
uint32_t sampleRate = 48000;
int numChannels = 2;

std::vector<std::vector<double>> testBuffer = {{0.0, 0.0, 7.152557373046875e-07, 2.6226043701171875e-06, 6.556510925292969e-06, 1.2040138244628906e-05, 2.0742416381835938e-05, 3.2067298889160156e-05, 4.7087669372558594e-05, 6.473064422607422e-05, 8.678436279296875e-05, 0.00011146068572998047, 0.00014066696166992188, 0.00017261505126953125, 0.00020933151245117188, 0.00024831295013427734, 0.0002923011779785156, 0.0003383159637451172, 0.0003935098648071289, 0.00047397613525390625, 0.0005924701690673828, 0.0007510185241699219, 0.0009467601776123047, 0.0011757612228393555, 0.0014437437057495117, 0.0017348527908325195, 0.002057194709777832, 0.0024052858352661133, 0.00276792049407959, 0.003163456916809082, 0.0035680532455444336, 0.003991246223449707, 0.004441976547241211, 0.004886507987976074, 0.005361437797546387, 0.005846261978149414, 0.006371617317199707, 0.007035374641418457, 0.007773995399475098, 0.008626341819763184, 0.009595155715942383, 0.010571837425231934, 0.011674165725708008, 0.012801051139831543, 0.0139085054397583, 0.015142679214477539, 0.01630091667175293, 0.01747608184814453, 0.018746137619018555, 0.01986110210418701, 0.02108168601989746, 0.022292733192443848, 0.02333521842956543, 0.024582505226135254, 0.025773048400878906, 0.027095913887023926, 0.028706669807434082, 0.030106067657470703, 0.03176474571228027, 0.033440470695495605, 0.03486049175262451, 0.036620497703552246, 0.03804290294647217, 0.03943753242492676, 0.04100167751312256, 0.042027831077575684, 0.04335308074951172, 0.04441177845001221, 0.04517197608947754, 0.04625880718231201, 0.046680331230163574, 0.04720878601074219, 0.047441959381103516, 0.04705607891082764, 0.04693794250488281, 0.04610264301300049, 0.04532325267791748, 0.044411540031433105, 0.043007612228393555, 0.04193687438964844, 0.04024386405944824, 0.03873574733734131, 0.03707301616668701, 0.035071372985839844, 0.03341710567474365, 0.03115224838256836, 0.02919602394104004, 0.026967287063598633, 0.0245436429977417, 0.022371292114257812, 0.019638657569885254, 0.017338991165161133, 0.014601349830627441, 0.011943221092224121, 0.009397029876708984, 0.006356716156005859, 0.0038193464279174805, 0.0006439685821533203, -0.002169370651245117, -0.005274295806884766, -0.008595466613769531, -0.011147618293762207, -0.01512765884399414, -0.017611026763916016, -0.020638704299926758, -0.025217652320861816, -0.026407361030578613, -0.031000494956970215, -0.035413146018981934, -0.035219788551330566, -0.04285740852355957, -0.04419386386871338, -0.07065105438232422, -0.1564619541168213, -0.08552801609039307, 0.24239099025726318, 0.3864394426345825, 0.12467241287231445, -0.08393871784210205, 0.0599592924118042, 0.25836503505706787, 0.19484519958496094, 0.030383586883544922, 0.03242063522338867, 0.1321181058883667, 0.2580540180206299, 0.35796380043029785, 0.24705147743225098, 0.018767356872558594, -0.12914705276489258, -0.15051043033599854, 0.03967642784118652, 0.2507213354110718, 0.1530904769897461, -0.12343156337738037, -0.22272634506225586, -0.06961596012115479, 0.047440409660339355, -0.023664355278015137, -0.06798660755157471, -0.08156132698059082, -0.19806981086730957, -0.3167363405227661, -0.36041784286499023, -0.25601136684417725, -0.03191184997558594, -0.0019611120223999023, -0.1955111026763916, -0.2977677583694458, -0.3072565793991089, -0.35410332679748535, -0.3385869264602661, -0.3335835933685303, -0.4074738025665283, -0.30776309967041016, -0.16734051704406738, -0.2780416011810303, -0.38017547130584717, -0.3817152976989746, -0.47177445888519287, -0.4866825342178345, -0.3023874759674072, -0.17320525646209717, -0.3024212121963501, -0.4500840902328491, -0.4194523096084595, -0.45877671241760254, -0.4649801254272461, -0.2514234781265259, -0.27913451194763184, -0.4962806701660156, -0.36953091621398926, -0.18422472476959229, -0.2835296392440796, -0.3840268850326538, -0.35425662994384766, -0.34723663330078125, -0.38039541244506836, -0.3292655944824219, -0.20911633968353271, -0.2077404260635376, -0.35398340225219727, -0.4257551431655884, -0.2539527416229248, -0.06363248825073242, -0.17776715755462646, -0.33460700511932373, -0.19255638122558594, -0.04315447807312012, -0.09097802639007568, -0.1792086362838745, -0.2713695764541626, -0.22517192363739014, -0.015021204948425293, 0.019883275032043457, -0.08760619163513184, -0.0902794599533081, -0.06332087516784668, -0.05756986141204834, -0.08678078651428223, -0.08119654655456543, 0.12865030765533447, 0.2406013011932373, 0.041402578353881836, -0.015124917030334473, 0.1329936981201172, 0.08767187595367432, -0.01891481876373291, 0.06548357009887695, 0.18902921676635742, 0.2651712894439697, 0.309159517288208, 0.24167048931121826, 0.12716591358184814, 0.1285635232925415, 0.24710190296173096, 0.3353545665740967, 0.3048640489578247, 0.23640525341033936, 0.19801568984985352, 0.24145936965942383, 0.38207805156707764, 0.39572572708129883, 0.242537260055542, 0.22294330596923828, 0.3719959259033203, 0.47042763233184814, 0.43123185634613037, 0.3625662326812744, 0.383408784866333, 0.3847602605819702, 0.2966369390487671, 0.29896271228790283, 0.4360523223876953, 0.4896125793457031, 0.39724302291870117, 0.3815962076187134, 0.4534264802932739, 0.4414411783218384, 0.3999319076538086, 0.35165393352508545, 0.35485661029815674, 0.4814718961715698, 0.44379913806915283, 0.29586541652679443, 0.37749183177948, 0.4630330801010132, 0.42011332511901855, 0.4437040090560913, 0.47643351554870605, 0.435949444770813, 0.3261157274246216, 0.27746081352233887, 0.4226391315460205, 0.4980888366699219, 0.38505077362060547, 0.30010950565338135, 0.2888467311859131, 0.3689159154891968, 0.445814847946167, 0.3725932836532593, 0.2911602258682251, 0.22846055030822754, 0.22605085372924805, 0.40893709659576416, 0.42775416374206543, 0.20836222171783447, 0.2333357334136963, 0.39804911613464355, 0.3212165832519531, 0.195892333984375, 0.22362124919891357, 0.26487624645233154, 0.22749567031860352, 0.1369870901107788, 0.12077617645263672, 0.24939501285552979, 0.26789629459381104, 0.11335766315460205, 0.12515676021575928, 0.2685023546218872, 0.24835801124572754, 0.13637471199035645, 0.06915116310119629, 0.031465768814086914, 0.033051371574401855, 0.07739055156707764, 0.14928090572357178, 0.1548449993133545, 0.03806579113006592, -0.013826131820678711, 0.028536200523376465, 0.011515259742736816, 0.042510986328125, 0.1012643575668335, 0.010776638984680176, -0.06198525428771973, -0.07137572765350342, -0.1317131519317627, -0.05361461639404297, 0.06206834316253662, -0.06432950496673584, -0.12048935890197754, 0.009034037590026855, -0.0639646053314209, -0.19418513774871826, -0.11967575550079346, -0.13497543334960938, -0.24109327793121338, -0.13556921482086182, 0.01042783260345459, -0.0417020320892334, -0.1601254940032959, -0.21524441242218018, -0.21687912940979004, -0.18989944458007812, -0.22562241554260254, -0.3065894842147827, -0.21904540061950684, -0.07379841804504395, -0.15297472476959229, -0.23710381984710693, -0.16524136066436768, -0.18823754787445068, -0.2588622570037842, -0.23817908763885498, -0.2954603433609009, -0.3749955892562866, -0.2390432357788086, -0.04951882362365723, -0.10409390926361084, -0.26441144943237305, -0.2961171865463257, -0.3206024169921875, -0.37296855449676514, -0.283231258392334, -0.14088594913482666, -0.1253669261932373, -0.1848999261856079, -0.21555650234222412, -0.23587965965270996, -0.26917731761932373, -0.23497498035430908, -0.16667389869689941, -0.1993619203567505, -0.24594950675964355, -0.21152019500732422, -0.22987282276153564, -0.2938957214355469, -0.20448064804077148, -0.04813194274902344, -0.10050129890441895, -0.24380457401275635, -0.20102977752685547, -0.09385848045349121, -0.13394904136657715, -0.23743677139282227, -0.22063028812408447, -0.10554337501525879, -0.05075728893280029, -0.04014158248901367, -0.03482246398925781, -0.09469401836395264, -0.1707063913345337, -0.18545877933502197, -0.0828554630279541, 0.03270363807678223, -0.029465794563293457, -0.08564865589141846, -0.008828520774841309, 0.023022890090942383, 0.04940974712371826, 0.07871699333190918, 0.00938403606414795, -0.020748615264892578, 0.015776991844177246, -0.013007640838623047, -0.016423821449279785, 0.07607519626617432, 0.13856661319732666, 0.17144083976745605, 0.19836103916168213, 0.14312708377838135, 0.08844685554504395, 0.09385466575622559, 0.13057422637939453, 0.19418883323669434, 0.1656550168991089, 0.14820384979248047, 0.2732487916946411, 0.26032912731170654, 0.15827274322509766, 0.23128819465637207, 0.2577781677246094, 0.19526267051696777, 0.26577723026275635, 0.3350207805633545, 0.27855539321899414, 0.20366811752319336, 0.2120654582977295, 0.3471252918243408, 0.4206430912017822, 0.33420276641845703, 0.3273230791091919, 0.3509242534637451, 0.2829993963241577, 0.332008957862854, 0.404524564743042, 0.3320397138595581, 0.3025747537612915, 0.3695492744445801, 0.4585667848587036, 0.5032308101654053, 0.43179070949554443, 0.36614155769348145, 0.3820614814758301, 0.39749717712402344, 0.37503886222839355, 0.34576117992401123, 0.42437076568603516, 0.5453416109085083, 0.48537445068359375, 0.35331857204437256, 0.37486279010772705, 0.4858689308166504, 0.5147905349731445, 0.43232786655426025, 0.3892557621002197, 0.4649350643157959, 0.5095640420913696, 0.43350350856781006, 0.3718158006668091, 0.4326080083847046, 0.49584925174713135, 0.45596742630004883, 0.43474292755126953, 0.47605621814727783, 0.47333502769470215, 0.4404726028442383, 0.3915853500366211, 0.33557140827178955, 0.3999840021133423, 0.5150893926620483, 0.4970437288284302, 0.42444562911987305, 0.4048506021499634, 0.39621078968048096, 0.3801177740097046, 0.3829214572906494, 0.4082350730895996, 0.4241880178451538, 0.41378724575042725, 0.3986128568649292, 0.3851116895675659, 0.36377692222595215, 0.35513532161712646, 0.3565793037414551, 0.33568620681762695, 0.35301685333251953, 0.3977299928665161, 0.3435029983520508, 0.296980619430542, 0.3564276695251465, 0.3605707883834839, 0.30052828788757324, 0.2764015197753906, 0.28262293338775635, 0.3255685567855835, 0.3272974491119385, 0.25475525856018066, 0.25814247131347656, 0.3108431100845337, 0.2854355573654175, 0.24884772300720215, 0.2329423427581787, 0.21366536617279053, 0.24191498756408691, 0.2739831209182739, 0.2532503604888916, 0.22822248935699463, 0.1980072259902954, 0.1699124574661255, 0.19997727870941162, 0.22876441478729248, 0.18896055221557617, 0.16018569469451904, 0.19124722480773926, 0.20936596393585205, 0.17635905742645264, 0.12853789329528809, 0.12448525428771973, 0.17805540561676025, 0.1921987533569336, 0.1364384889602661, 0.11728966236114502, 0.12717628479003906, 0.1095055341720581, 0.11255598068237305, 0.11501777172088623, 0.09776890277862549}, {-1.1920928955078125e-07, -1.1920928955078125e-07, 4.76837158203125e-07, 9.5367431640625e-07, 2.9802322387695312e-06, 5.125999450683594e-06, 9.5367431640625e-06, 1.3828277587890625e-05, 2.1338462829589844e-05, 2.872943878173828e-05, 3.886222839355469e-05, 4.971027374267578e-05, 6.318092346191406e-05, 7.724761962890625e-05, 9.381771087646484e-05, 0.0001112222671508789, 0.0001310110092163086, 0.00015163421630859375, 0.0001760721206665039, 0.00021255016326904297, 0.0002651214599609375, 0.00033676624298095703, 0.0004240274429321289, 0.0005271434783935547, 0.0006465911865234375, 0.0007777214050292969, 0.0009214878082275391, 0.0010780096054077148, 0.0012400150299072266, 0.0014175176620483398, 0.0015987157821655273, 0.0017883777618408203, 0.0019905567169189453, 0.0021893978118896484, 0.002402782440185547, 0.0026192665100097656, 0.0028554201126098633, 0.003152132034301758, 0.0034835338592529297, 0.003865361213684082, 0.0042994022369384766, 0.004737257957458496, 0.005231022834777832, 0.005736231803894043, 0.006232142448425293, 0.006785392761230469, 0.0073043107986450195, 0.007830977439880371, 0.008400201797485352, 0.008899331092834473, 0.009447097778320312, 0.009988665580749512, 0.01045691967010498, 0.011014819145202637, 0.01154935359954834, 0.012141227722167969, 0.012863636016845703, 0.01349031925201416, 0.014233708381652832, 0.014984607696533203, 0.015620589256286621, 0.016409993171691895, 0.017046451568603516, 0.017672181129455566, 0.018372297286987305, 0.018832921981811523, 0.01942622661590576, 0.019900798797607422, 0.020241737365722656, 0.020727872848510742, 0.02091801166534424, 0.02115333080291748, 0.021259307861328125, 0.021084904670715332, 0.021033287048339844, 0.020658016204833984, 0.02030956745147705, 0.01990044116973877, 0.0192716121673584, 0.018791675567626953, 0.01803290843963623, 0.017357468605041504, 0.016611933708190918, 0.015715599060058594, 0.014973640441894531, 0.013959407806396484, 0.013082146644592285, 0.012084126472473145, 0.010997653007507324, 0.010024309158325195, 0.008800506591796875, 0.007768392562866211, 0.006543517112731934, 0.005352020263671875, 0.004207611083984375, 0.002852201461791992, 0.001705765724182129, 0.00028133392333984375, -0.0009337663650512695, -0.0023986101150512695, -0.0038579702377319336, -0.004896640777587891, -0.006933093070983887, -0.007810473442077637, -0.009076595306396484, -0.011730790138244629, -0.011400580406188965, -0.013871192932128906, -0.01661384105682373, -0.014528751373291016, -0.020139217376708984, -0.020017504692077637, -0.04427051544189453, -0.1284855604171753, -0.055773019790649414, 0.27432501316070557, 0.4197641611099243, 0.16023647785186768, -0.046770572662353516, 0.09858953952789307, 0.29926955699920654, 0.23687148094177246, 0.07439267635345459, 0.07832813262939453, 0.17903292179107666, 0.3071831464767456, 0.4082520008087158, 0.29867780208587646, 0.07255029678344727, -0.07463467121124268, -0.09422111511230469, 0.09741127490997314, 0.30896997451782227, 0.21336793899536133, -0.06238079071044922, -0.16082358360290527, -0.0059626102447509766, 0.11109304428100586, 0.04118692874908447, -0.001970529556274414, -0.01568758487701416, -0.1308119297027588, -0.2494492530822754, -0.29343879222869873, -0.18807709217071533, 0.035208940505981445, 0.06518185138702393, -0.12823379039764404, -0.23186469078063965, -0.241227388381958, -0.28888583183288574, -0.2745392322540283, -0.269575834274292, -0.3450504541397095, -0.24619364738464355, -0.10659360885620117, -0.2191087007522583, -0.3218768835067749, -0.32504284381866455, -0.41658055782318115, -0.43256640434265137, -0.2504643201828003, -0.12248098850250244, -0.25351500511169434, -0.4031703472137451, -0.3739124536514282, -0.41554903984069824, -0.4233818054199219, -0.2119276523590088, -0.241904616355896, -0.4607759714126587, -0.33654630184173584, -0.15313732624053955, -0.25476253032684326, -0.3576667308807373, -0.32992756366729736, -0.32559192180633545, -0.360870361328125, -0.31231582164764404, -0.1946035623550415, -0.1954578161239624, -0.3444420099258423, -0.4183681011199951, -0.24929380416870117, -0.06143510341644287, -0.1780107021331787, -0.33765077590942383, -0.19781625270843506, -0.051230788230895996, -0.10136687755584717, -0.19206678867340088, -0.28691720962524414, -0.24281489849090576, -0.03552901744842529, -0.0028706789016723633, -0.11286568641662598, -0.11816763877868652, -0.09310948848724365, -0.09014451503753662, -0.121329665184021, -0.11799275875091553, 0.08926558494567871, 0.19953036308288574, -0.0023943185806274414, -0.060732245445251465, 0.08560192584991455, 0.03772270679473877, -0.07008719444274902, 0.01198279857635498, 0.1335434913635254, 0.20849096775054932, 0.25003790855407715, 0.18151795864105225, 0.06548619270324707, 0.0647268295288086, 0.18266057968139648, 0.26894938945770264, 0.23718655109405518, 0.16832876205444336, 0.1278526782989502, 0.170754075050354, 0.3106015920639038, 0.32252490520477295, 0.16959261894226074, 0.1489201784133911, 0.2968308925628662, 0.3956648111343384, 0.3551570177078247, 0.2863428592681885, 0.3076368570327759, 0.3077211380004883, 0.22010397911071777, 0.22251105308532715, 0.35890650749206543, 0.4136618375778198, 0.32105469703674316, 0.3053661584854126, 0.37843775749206543, 0.3661247491836548, 0.3255974054336548, 0.2784233093261719, 0.2815166711807251, 0.40967857837677, 0.3726658821105957, 0.22540318965911865, 0.3089485168457031, 0.39496302604675293, 0.35351812839508057, 0.37870705127716064, 0.4121500253677368, 0.3738086223602295, 0.2652316093444824, 0.21804594993591309, 0.3653709888458252, 0.4419715404510498, 0.3310946226119995, 0.2478959560394287, 0.2383410930633545, 0.3208655118942261, 0.39932775497436523, 0.3284567594528198, 0.24911844730377197, 0.18835735321044922, 0.1885216236114502, 0.3732907772064209, 0.3946683406829834, 0.1775580644607544, 0.20476579666137695, 0.37214088439941406, 0.297365665435791, 0.17474329471588135, 0.20479297637939453, 0.24847817420959473, 0.21382462978363037, 0.12556719779968262, 0.11218321323394775, 0.24311590194702148, 0.26419734954833984, 0.11228275299072266, 0.12632155418395996, 0.272489070892334, 0.25454258918762207, 0.14522814750671387, 0.08058357238769531, 0.04517817497253418, 0.04956936836242676, 0.09593117237091064, 0.1704394817352295, 0.17833828926086426, 0.06362438201904297, 0.01445615291595459, 0.05865514278411865, 0.044203758239746094, 0.07741427421569824, 0.1379101276397705, 0.050028204917907715, -0.021233439445495605, -0.028426647186279297, -0.0866243839263916, -0.00715327262878418, 0.11104357242584229, -0.014105677604675293, -0.06869196891784668, 0.06297874450683594, -0.009259462356567383, -0.13739478588104248, -0.0614476203918457, -0.0759890079498291, -0.18007338047027588, -0.07402598857879639, 0.0731356143951416, 0.022660255432128906, -0.09563624858856201, -0.14927184581756592, -0.15022361278533936, -0.12320315837860107, -0.15738558769226074, -0.2383946180343628, -0.1504288911819458, -0.004198789596557617, -0.08409810066223145, -0.167488694190979, -0.09536778926849365, -0.11905217170715332, -0.18887794017791748, -0.16894876956939697, -0.2267364263534546, -0.30585145950317383, -0.17114698886871338, 0.018334507942199707, -0.036666154861450195, -0.19846463203430176, -0.23017489910125732, -0.25592732429504395, -0.3093768358230591, -0.22000503540039062, -0.07946312427520752, -0.06471645832061768, -0.12550139427185059, -0.15791165828704834, -0.17901134490966797, -0.21424496173858643, -0.18137967586517334, -0.11450648307800293, -0.14938223361968994, -0.19720280170440674, -0.16490375995635986, -0.18506693840026855, -0.25076162815093994, -0.16370618343353271, -0.008970379829406738, -0.06370353698730469, -0.20910346508026123, -0.1683253049850464, -0.06367373466491699, -0.10563445091247559, -0.2116776704788208, -0.19709527492523193, -0.084259033203125, -0.03211808204650879, -0.02363431453704834, -0.021051764488220215, -0.0831899642944336, -0.1616666316986084, -0.17903828620910645, -0.07862436771392822, 0.034129977226257324, -0.030289053916931152, -0.08910930156707764, -0.014927148818969727, 0.01462090015411377, 0.03817439079284668, 0.06535124778747559, -0.006643414497375488, -0.039221882820129395, -0.004878997802734375, -0.036478400230407715, -0.0419083833694458, 0.047892212867736816, 0.10803020000457764, 0.1389247179031372, 0.16310596466064453, 0.10615682601928711, 0.049030423164367676, 0.052176713943481445, 0.08721923828125, 0.14809000492095947, 0.1180877685546875, 0.09867644309997559, 0.22142601013183594, 0.20741891860961914, 0.10291719436645508, 0.1743375062942505, 0.1995682716369629, 0.13473773002624512, 0.20452332496643066, 0.272092342376709, 0.21377480030059814, 0.13840901851654053, 0.1448214054107666, 0.27900075912475586, 0.35206472873687744, 0.263651967048645, 0.256550669670105, 0.2792929410934448, 0.20995938777923584, 0.25940072536468506, 0.330751895904541, 0.2575054168701172, 0.22848761081695557, 0.2942301034927368, 0.3834885358810425, 0.42849528789520264, 0.35599660873413086, 0.29115796089172363, 0.30705058574676514, 0.32216978073120117, 0.3010164499282837, 0.27143406867980957, 0.35044872760772705, 0.47260582447052, 0.412439227104187, 0.2817457914352417, 0.3042030334472656, 0.41543304920196533, 0.4460902214050293, 0.364154577255249, 0.3222181797027588, 0.39972615242004395, 0.44491374492645264, 0.37071549892425537, 0.3104130029678345, 0.3722681999206543, 0.4377039670944214, 0.39897966384887695, 0.3796654939651489, 0.4229189157485962, 0.4215703010559082, 0.39108705520629883, 0.3437778949737549, 0.2898319959640503, 0.356526255607605, 0.47335922718048096, 0.45785844326019287, 0.38714730739593506, 0.36984479427337646, 0.36363863945007324, 0.3495290279388428, 0.3550088405609131, 0.3824489116668701, 0.40094733238220215, 0.3930283784866333, 0.3800544738769531, 0.3692972660064697, 0.3501228094100952, 0.34415674209594727, 0.34807658195495605, 0.3295656442642212, 0.3497049808502197, 0.39665985107421875, 0.34521484375, 0.301041841506958, 0.3629206418991089, 0.36975300312042236, 0.31182050704956055, 0.2904839515686035, 0.2989327907562256, 0.3443582057952881, 0.3487238883972168, 0.27816474437713623, 0.2842766046524048, 0.338948130607605, 0.3158252239227295, 0.28169405460357666, 0.26747190952301025, 0.25088953971862793, 0.28097569942474365, 0.31500864028930664, 0.2966419458389282, 0.27289509773254395, 0.24506640434265137, 0.21863305568695068, 0.2501581907272339, 0.2813589572906494, 0.24244964122772217, 0.21546220779418945, 0.24827325344085693, 0.2670714855194092, 0.2362205982208252, 0.18936467170715332, 0.18621742725372314, 0.24160587787628174, 0.25594615936279297, 0.2015317678451538, 0.18361639976501465, 0.19353771209716797, 0.1773679256439209, 0.1806330680847168, 0.18324732780456543, 0.16733908653259277}};

}; // end namespace