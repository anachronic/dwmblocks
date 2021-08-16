//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	{" ", "/home/nsalas/dotfiles/scripts/dwm/dwm-bluetooth-headphones", 0, 8},
	{"", "/home/nsalas/dotfiles/scripts/dwm/dwm-keyboard", 0, 5},
	{"", "/home/nsalas/dotfiles/scripts/dwm/dwm-volume", 0, 3},
	{"", "/home/nsalas/dotfiles/scripts/dwm/dwm-cpuusage", 20, 6},
	{"", "/home/nsalas/dotfiles/scripts/dwm/dwm-cputemp", 20, 2},
	{"", "/home/nsalas/dotfiles/scripts/dwm/dwm-memory", 30, 1},
	{"", "/home/nsalas/dotfiles/scripts/dwm/dwm-internet", 0, 9},
	{"", "/home/nsalas/dotfiles/scripts/dwm/dwm-dunst", 0, 7},

    // This one could be triggered by cron
	{"", "/home/nsalas/dotfiles/scripts/dwm/dwm-date", 20, 4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " │ ";
static unsigned int delimLen = 5;
