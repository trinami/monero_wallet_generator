#pragma once

#include <Arduino.h>

#define MNEMONIC_WORDS_SIZE 11468
#define WORD_COUNT 1626
#define LONGEST_WORD 12

const char mnemonic_words[] PROGMEM = "abbey\0abducts\0ability\0ablaze\0abnormal\0abort\0abrasive\0absorb\0abyss\0academy\0aces\0aching\0acidic\0acoustic\0acquire\0across\0actress\0acumen\0adapt\0addicted\0adept\0adhesive\0adjust\0adopt\0adrenalin\0adult\0adventure\0aerial\0afar\0affair\0afield\0afloat\0afoot\0afraid\0after\0against\0agenda\0aggravate\0agile\0aglow\0agnostic\0agony\0agreed\0ahead\0aided\0ailments\0aimless\0airport\0aisle\0ajar\0akin\0alarms\0album\0alchemy\0alerts\0algebra\0alkaline\0alley\0almost\0aloof\0alpine\0already\0also\0altitude\0alumni\0always\0amaze\0ambush\0amended\0amidst\0ammo\0amnesty\0among\0amply\0amused\0anchor\0android\0anecdote\0angled\0ankle\0annoyed\0answers\0antics\0anvil\0anxiety\0anybody\0apart\0apex\0aphid\0aplomb\0apology\0apply\0apricot\0aptitude\0aquarium\0arbitrary\0archer\0ardent\0arena\0argue\0arises\0army\0around\0arrow\0arsenic\0artistic\0ascend\0ashtray\0aside\0asked\0asleep\0aspire\0assorted\0asylum\0athlete\0atlas\0atom\0atrium\0attire\0auburn\0auctions\0audio\0august\0aunt\0austere\0autumn\0avatar\0avidly\0avoid\0awakened\0awesome\0awful\0awkward\0awning\0awoken\0axes\0axis\0axle\0aztec\0azure\0baby\0bacon\0badge\0baffles\0bagpipe\0bailed\0bakery\0balding\0bamboo\0banjo\0baptism\0basin\0batch\0bawled\0bays\0because\0beer\0befit\0begun\0behind\0being\0below\0bemused\0benches\0berries\0bested\0betting\0bevel\0beware\0beyond\0bias\0bicycle\0bids\0bifocals\0biggest\0bikini\0bimonthly\0binocular\0biology\0biplane\0birth\0biscuit\0bite\0biweekly\0blender\0blip\0bluntly\0boat\0bobsled\0bodies\0bogeys\0boil\0boldly\0bomb\0border\0boss\0both\0bounced\0bovine\0bowling\0boxes\0boyfriend\0broken\0brunt\0bubble\0buckets\0budget\0buffet\0bugs\0building\0bulb\0bumper\0bunch\0business\0butter\0buying\0buzzer\0bygones\0byline\0bypass\0cabin\0cactus\0cadets\0cafe\0cage\0cajun\0cake\0calamity\0camp\0candy\0casket\0catch\0cause\0cavernous\0cease\0cedar\0ceiling\0cell\0cement\0cent\0certain\0chlorine\0chrome\0cider\0cigar\0cinema\0circle\0cistern\0citadel\0civilian\0claim\0click\0clue\0coal\0cobra\0cocoa\0code\0coexist\0coffee\0cogs\0cohesive\0coils\0colony\0comb\0cool\0copy\0corrode\0costume\0cottage\0cousin\0cowl\0criminal\0cube\0cucumber\0cuddled\0cuffs\0cuisine\0cunning\0cupcake\0custom\0cycling\0cylinder\0cynical\0dabbing\0dads\0daft\0dagger\0daily\0damp\0dangerous\0dapper\0darted\0dash\0dating\0dauntless\0dawn\0daytime\0dazed\0debut\0decay\0dedicated\0deepest\0deftly\0degrees\0dehydrate\0deity\0dejected\0delayed\0demonstrate\0dented\0deodorant\0depth\0desk\0devoid\0dewdrop\0dexterity\0dialect\0dice\0diet\0different\0digit\0dilute\0dime\0dinner\0diode\0diplomat\0directed\0distance\0ditch\0divers\0dizzy\0doctor\0dodge\0does\0dogs\0doing\0dolphin\0domestic\0donuts\0doorway\0dormant\0dosage\0dotted\0double\0dove\0down\0dozen\0dreams\0drinks\0drowning\0drunk\0drying\0dual\0dubbed\0duckling\0dude\0duets\0duke\0dullness\0dummy\0dunes\0duplex\0duration\0dusted\0duties\0dwarf\0dwelt\0dwindling\0dying\0dynamite\0dyslexic\0each\0eagle\0earth\0easy\0eating\0eavesdrop\0eccentric\0echo\0eclipse\0economics\0ecstatic\0eden\0edgy\0edited\0educated\0eels\0efficient\0eggs\0egotistic\0eight\0either\0eject\0elapse\0elbow\0eldest\0eleven\0elite\0elope\0else\0eluded\0emails\0ember\0emerge\0emit\0emotion\0empty\0emulate\0energy\0enforce\0enhanced\0enigma\0enjoy\0enlist\0enmity\0enough\0enraged\0ensign\0entrance\0envy\0epoxy\0equip\0erase\0erected\0erosion\0error\0eskimos\0espionage\0essential\0estate\0etched\0eternal\0ethics\0etiquette\0evaluate\0evenings\0evicted\0evolved\0examine\0excess\0exhale\0exit\0exotic\0exquisite\0extra\0exult\0fabrics\0factual\0fading\0fainted\0faked\0fall\0family\0fancy\0farming\0fatal\0faulty\0fawns\0faxed\0fazed\0feast\0february\0federal\0feel\0feline\0females\0fences\0ferry\0festival\0fetches\0fever\0fewest\0fiat\0fibula\0fictional\0fidget\0fierce\0fifteen\0fight\0films\0firm\0fishing\0fitting\0five\0fixate\0fizzle\0fleet\0flippant\0flying\0foamy\0focus\0foes\0foggy\0foiled\0folding\0fonts\0foolish\0fossil\0fountain\0fowls\0foxes\0foyer\0framed\0friendly\0frown\0fruit\0frying\0fudge\0fuel\0fugitive\0fully\0fuming\0fungal\0furnished\0fuselage\0future\0fuzzy\0gables\0gadget\0gags\0gained\0galaxy\0gambit\0gang\0gasp\0gather\0gauze\0gave\0gawk\0gaze\0gearbox\0gecko\0geek\0gels\0gemstone\0general\0geometry\0germs\0gesture\0getting\0geyser\0ghetto\0ghost\0giant\0giddy\0gifts\0gigantic\0gills\0gimmick\0ginger\0girth\0giving\0glass\0gleeful\0glide\0gnaw\0gnome\0goat\0goblet\0godfather\0goes\0goggles\0going\0goldfish\0gone\0goodbye\0gopher\0gorilla\0gossip\0gotten\0gourmet\0governing\0gown\0greater\0grunt\0guarded\0guest\0guide\0gulp\0gumball\0guru\0gusts\0gutter\0guys\0gymnast\0gypsy\0gyrate\0habitat\0hacksaw\0haggled\0hairy\0hamburger\0happens\0hashing\0hatchet\0haunted\0having\0hawk\0haystack\0hazard\0hectare\0hedgehog\0heels\0hefty\0height\0hemlock\0hence\0heron\0hesitate\0hexagon\0hickory\0hiding\0highway\0hijack\0hiker\0hills\0himself\0hinder\0hippo\0hire\0history\0hitched\0hive\0hoax\0hobby\0hockey\0hoisting\0hold\0honked\0hookup\0hope\0hornet\0hospital\0hotel\0hounded\0hover\0howls\0hubcaps\0huddle\0huge\0hull\0humid\0hunter\0hurried\0husband\0huts\0hybrid\0hydrogen\0hyper\0iceberg\0icing\0icon\0identity\0idiom\0idled\0idols\0igloo\0ignore\0iguana\0illness\0imagine\0imbalance\0imitate\0impel\0inactive\0inbound\0incur\0industrial\0inexact\0inflamed\0ingested\0initiate\0injury\0inkling\0inline\0inmate\0innocent\0inorganic\0input\0inquest\0inroads\0insult\0intended\0inundate\0invoke\0inwardly\0ionic\0irate\0iris\0irony\0irritate\0island\0isolated\0issued\0italics\0itches\0items\0itinerary\0itself\0ivory\0jabbed\0jackets\0jaded\0jagged\0jailed\0jamming\0january\0jargon\0jaunt\0javelin\0jaws\0jazz\0jeans\0jeers\0jellyfish\0jeopardy\0jerseys\0jester\0jetting\0jewels\0jigsaw\0jingle\0jittery\0jive\0jobs\0jockey\0jogger\0joining\0joking\0jolted\0jostle\0journal\0joyous\0jubilee\0judge\0juggled\0juicy\0jukebox\0july\0jump\0junk\0jury\0justice\0juvenile\0kangaroo\0karate\0keep\0kennel\0kept\0kernels\0kettle\0keyboard\0kickoff\0kidneys\0king\0kiosk\0kisses\0kitchens\0kiwi\0knapsack\0knee\0knife\0knowledge\0knuckle\0koala\0laboratory\0ladder\0lagoon\0lair\0lakes\0lamb\0language\0laptop\0large\0last\0later\0launching\0lava\0lawsuit\0layout\0lazy\0lectures\0ledge\0leech\0left\0legion\0leisure\0lemon\0lending\0leopard\0lesson\0lettuce\0lexicon\0liar\0library\0licks\0lids\0lied\0lifestyle\0light\0likewise\0lilac\0limits\0linen\0lion\0lipstick\0liquid\0listen\0lively\0loaded\0lobster\0locker\0lodge\0lofty\0logic\0loincloth\0long\0looking\0lopped\0lordship\0losing\0lottery\0loudly\0love\0lower\0loyal\0lucky\0luggage\0lukewarm\0lullaby\0lumber\0lunar\0lurk\0lush\0luxury\0lymph\0lynx\0lyrics\0macro\0madness\0magically\0mailed\0major\0makeup\0malady\0mammal\0maps\0masterful\0match\0maul\0maverick\0maximum\0mayor\0maze\0meant\0mechanic\0medicate\0meeting\0megabyte\0melting\0memoir\0menu\0merger\0mesh\0metro\0mews\0mice\0midst\0mighty\0mime\0mirror\0misery\0mittens\0mixture\0moat\0mobile\0mocked\0mohawk\0moisture\0molten\0moment\0money\0moon\0mops\0morsel\0mostly\0motherly\0mouth\0movement\0mowing\0much\0muddy\0muffin\0mugged\0mullet\0mumble\0mundane\0muppet\0mural\0musical\0muzzle\0myriad\0mystery\0myth\0nabbing\0nagged\0nail\0names\0nanny\0napkin\0narrate\0nasty\0natural\0nautical\0navy\0nearby\0necklace\0needed\0negative\0neither\0neon\0nephew\0nerves\0nestle\0network\0neutral\0never\0newt\0nexus\0nibs\0niche\0niece\0nifty\0nightly\0nimbly\0nineteen\0nirvana\0nitrogen\0nobody\0nocturnal\0nodes\0noises\0nomad\0noodles\0northern\0nostril\0noted\0nouns\0novelty\0nowhere\0nozzle\0nuance\0nucleus\0nudged\0nugget\0nuisance\0null\0number\0nuns\0nurse\0nutshell\0nylon\0oaks\0oars\0oasis\0oatmeal\0obedient\0object\0obliged\0obnoxious\0observant\0obtains\0obvious\0occur\0ocean\0october\0odds\0odometer\0offend\0often\0oilfield\0ointment\0okay\0older\0olive\0olympics\0omega\0omission\0omnibus\0onboard\0oncoming\0oneself\0ongoing\0onion\0online\0onslaught\0onto\0onward\0oozed\0opacity\0opened\0opposite\0optical\0opus\0orange\0orbit\0orchid\0orders\0organs\0origin\0ornament\0orphans\0oscar\0ostrich\0otherwise\0otter\0ouch\0ought\0ounce\0ourselves\0oust\0outbreak\0oval\0oven\0owed\0owls\0owner\0oxidant\0oxygen\0oyster\0ozone\0pact\0paddles\0pager\0pairing\0palace\0pamphlet\0pancakes\0paper\0paradise\0pastry\0patio\0pause\0pavements\0pawnshop\0payment\0peaches\0pebbles\0peculiar\0pedantic\0peeled\0pegs\0pelican\0pencil\0people\0pepper\0perfect\0pests\0petals\0phase\0pheasants\0phone\0phrases\0physics\0piano\0picked\0pierce\0pigment\0piloted\0pimple\0pinched\0pioneer\0pipeline\0pirate\0pistons\0pitched\0pivot\0pixels\0pizza\0playful\0pledge\0pliers\0plotting\0plus\0plywood\0poaching\0pockets\0podcast\0poetry\0point\0poker\0polar\0ponies\0pool\0popular\0portents\0possible\0potato\0pouch\0poverty\0powder\0pram\0present\0pride\0problems\0pruned\0prying\0psychic\0public\0puck\0puddle\0puffin\0pulp\0pumpkins\0punch\0puppy\0purged\0push\0putty\0puzzled\0pylons\0pyramid\0python\0queen\0quick\0quote\0rabbits\0racetrack\0radar\0rafts\0rage\0railway\0raking\0rally\0ramped\0randomly\0rapid\0rarest\0rash\0rated\0ravine\0rays\0razor\0react\0rebel\0recipe\0reduce\0reef\0refer\0regular\0reheat\0reinvest\0rejoices\0rekindle\0relic\0remedy\0renting\0reorder\0repent\0request\0reruns\0rest\0return\0reunion\0revamp\0rewind\0rhino\0rhythm\0ribbon\0richly\0ridges\0rift\0rigid\0rims\0ringing\0riots\0ripped\0rising\0ritual\0river\0roared\0robot\0rockets\0rodent\0rogue\0roles\0romance\0roomy\0roped\0roster\0rotate\0rounded\0rover\0rowboat\0royal\0ruby\0rudely\0ruffled\0rugged\0ruined\0ruling\0rumble\0runway\0rural\0rustled\0ruthless\0sabotage\0sack\0sadness\0safety\0saga\0sailor\0sake\0salads\0sample\0sanity\0sapling\0sarcasm\0sash\0satin\0saucepan\0saved\0sawmill\0saxophone\0sayings\0scamper\0scenic\0school\0science\0scoop\0scrub\0scuba\0seasons\0second\0sedan\0seeded\0segments\0seismic\0selfish\0semifinal\0sensible\0september\0sequence\0serving\0session\0setup\0seventh\0sewage\0shackles\0shelter\0shipped\0shocking\0shrugged\0shuffled\0shyness\0siblings\0sickness\0sidekick\0sieve\0sifting\0sighting\0silk\0simplest\0sincerely\0sipped\0siren\0situated\0sixteen\0sizes\0skater\0skew\0skirting\0skulls\0skydive\0slackens\0sleepless\0slid\0slower\0slug\0smash\0smelting\0smidgen\0smog\0smuggled\0snake\0sneeze\0sniff\0snout\0snug\0soapy\0sober\0soccer\0soda\0software\0soggy\0soil\0solved\0somewhere\0sonic\0soothe\0soprano\0sorry\0southern\0sovereign\0sowed\0soya\0space\0speedy\0sphere\0spiders\0splendid\0spout\0sprig\0spud\0spying\0square\0stacking\0stellar\0stick\0stockpile\0strained\0stunning\0stylishly\0subtly\0succeed\0suddenly\0suede\0suffice\0sugar\0suitcase\0sulking\0summon\0sunken\0superior\0surfer\0sushi\0suture\0swagger\0swept\0swiftly\0sword\0swung\0syllabus\0symptoms\0syndrome\0syringe\0system\0taboo\0tacit\0tadpoles\0tagged\0tail\0taken\0talent\0tamper\0tanks\0tapestry\0tarnished\0tasked\0tattoo\0taunts\0tavern\0tawny\0taxi\0teardrop\0technical\0tedious\0teeming\0tell\0template\0tender\0tepid\0tequila\0terminal\0testing\0tether\0textbook\0thaw\0theatrics\0thirsty\0thorn\0threaten\0thumbs\0thwart\0ticket\0tidy\0tiers\0tiger\0tilt\0timber\0tinted\0tipsy\0tirade\0tissue\0titans\0toaster\0tobacco\0today\0toenail\0toffee\0together\0toilet\0token\0tolerant\0tomorrow\0tonic\0toolbox\0topic\0torch\0tossed\0total\0touchy\0towel\0toxic\0toyed\0trash\0trendy\0tribal\0trolling\0truth\0trying\0tsunami\0tubes\0tucks\0tudor\0tuesday\0tufts\0tugs\0tuition\0tulips\0tumbling\0tunnel\0turnip\0tusks\0tutor\0tuxedo\0twang\0tweezers\0twice\0twofold\0tycoon\0typist\0tyrant\0ugly\0ulcers\0ultimate\0umbrella\0umpire\0unafraid\0unbending\0uncle\0under\0uneven\0unfit\0ungainly\0unhappy\0union\0unjustly\0unknown\0unlikely\0unmask\0unnoticed\0unopened\0unplugs\0unquoted\0unrest\0unsafe\0until\0unusual\0unveil\0unwind\0unzip\0upbeat\0upcoming\0update\0upgrade\0uphill\0upkeep\0upload\0upon\0upper\0upright\0upstairs\0uptight\0upwards\0urban\0urchins\0urgent\0usage\0useful\0usher\0using\0usual\0utensils\0utility\0utmost\0utopia\0uttered\0vacation\0vague\0vain\0value\0vampire\0vane\0vapidly\0vary\0vastness\0vats\0vaults\0vector\0veered\0vegan\0vehicle\0vein\0velvet\0venomous\0verification\0vessel\0veteran\0vexed\0vials\0vibrate\0victim\0video\0viewpoint\0vigilant\0viking\0village\0vinegar\0violin\0vipers\0virtual\0visited\0vitals\0vivid\0vixen\0vocal\0vogue\0voice\0volcano\0vortex\0voted\0voucher\0vowels\0voyage\0vulture\0wade\0waffle\0wagtail\0waist\0waking\0wallets\0wanted\0warped\0washing\0water\0waveform\0waxing\0wayside\0weavers\0website\0wedge\0weekday\0weird\0welders\0went\0wept\0were\0western\0wetsuit\0whale\0when\0whipped\0whole\0wickets\0width\0wield\0wife\0wiggle\0wildly\0winter\0wipeout\0wiring\0wise\0withdrawn\0wives\0wizard\0wobbly\0woes\0woken\0wolf\0womanly\0wonders\0woozy\0worry\0wounded\0woven\0wrap\0wrist\0wrong\0yacht\0yahoo\0yanks\0yard\0yawning\0yearbook\0yellow\0yesterday\0yeti\0yields\0yodel\0yoga\0younger\0yoyo\0zapped\0zeal\0zebra\0zero\0zesty\0zigzags\0zinger\0zippers\0zodiac\0zombie\0zones\0zoom\0";
