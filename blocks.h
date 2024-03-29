//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
/*	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},*/
/*	{"",	"sb-tasks",	10,	26},*/
//	{"",	"~/.local/bin/sb-music",	0,	11},
/*	{"",	"sb-pacpackages",	0,	8},*/
	/*{"",	"sb-news",		0,	6},*/
	/* {"",	"sb-price lbc \"LBRY Token\" 📚",			9000,	22}, */
	/* {"",	"sb-price bat \"Basic Attention Token\" 🦁",	9000,	20}, */
	/* {"",	"sb-price link \"Chainlink\" 🔗",			300,	25}, */
	/* {"",	"sb-price xmr \"Monero\" 🔒",			9000,	24}, */
	/* {"",	"sb-price eth Ethereum 🍸",	9000,	23}, */
	/* {"",	"sb-price btc Bitcoin 💰",				9000,	21}, */
/*	{"",	"sb-torrent",	20,	7},*/
	/* {"",	"sb-memory",	10,	14}, */
	/* {"",	"sb-cpu",		10,	18}, */
	/* {"",	"sb-moonphase",	18000,	17}, */
/*	{"",	"sb-forecast",	18000,	5},*/
/*	{"",	"sb-mailbox",	180,	12},*/
	{"",	"~/.local/bin/sb-nettraf",	1,	16},
	{"",	"~/.local/bin/sb-volume",	0,	10},
	{"",	"~/.local/bin/sb-battery",	5,	3},
	{"",	"~/.local/bin/sb-brightness",	0,	10},
	{"",	"~/.local/bin/sb-clock",	60,	1},
/*	{"",	"sb-internet",	5,	4},*/
	{"",	"~/.local/bin/sb-iplocate",	0,	0},
/*	{"",	"sb-help-icon",	0,	15},*/
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
