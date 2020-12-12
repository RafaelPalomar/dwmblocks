//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "checkmail.sh",                                                        600,     2},
	{"", "wifi.sh",                                                              30,     0},
	{"", "audio.sh",                                                             30,     1},
	{"", "battery.sh",                                                           30,     0},
	{" ", "memory.sh",	                                                     30,  	 0},
	{" ", "df -h |grep /$|tr -s ' '| cut -d' ' -f 4",	                         30,	 0},
	{"", "date '+%b %d (%a) %I:%M%p'",					                          5,     0},
	{"", "keyboard_map.sh",          					                          5,     3},
	{"", "",                       					                          5,	 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
