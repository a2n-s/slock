/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#002233",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] = "red",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time to cancel lock with mouse movement in seconds */
static const int timetocancel = 3;

/* number of failed password attempts until failcommand is executed.
   Set to 0 to disable */
static const int failcount = 3;

/* command to be executed after [failcount] failed password attempts */
static const char *failcommand = "echo 'such a noob!'";

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 1;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "6x13";
