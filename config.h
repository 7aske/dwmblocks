#define PREFIX "$HOME/.local/bin/statusbar/"
#define SBCMD(cmd) PREFIX cmd
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{""  , SBCMD("music")         , 10 , 0} ,
	{"" , SBCMD("cpu")           , 2  , 0} ,
	{"" , SBCMD("temp")          , 5  , 0} ,
	{"" , SBCMD("memory")        , 5  , 0} ,
	{""  , SBCMD("bandwidth")     , 1  , 0} ,
	{""  , SBCMD("disk / ")      , 60 , 0} ,
	{""  , SBCMD("disk /home ")  , 60 , 0} ,
	{""  , SBCMD("launch")        , 60 , 0} ,
	{""  , SBCMD("weather")       , 60 , 0} ,
	{""  , SBCMD("battery BAT1")  , 60 , 0} ,
	{"" , SBCMD("tasks")         , 60 , 0} ,
	{"" , SBCMD("cgs")           , 60 , 0} ,
	{""  , SBCMD("packages")      , 60 , 0} ,
	{""  , SBCMD("services")      , 10 , 0} ,
	{""  , SBCMD("notify-status") , 5  , 0} ,
	{""  , SBCMD("rec-status")    , 5  , 0} ,
	{""  , SBCMD("mic-status")    , 5  , 0} ,
	{""  , SBCMD("layout")        , 60 , 0} ,
	{""  , SBCMD("clock")         , 1  , 0} ,
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "|";
