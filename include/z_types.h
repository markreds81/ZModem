#ifndef Z_TYPES_H
#define Z_TYPES_H

enum ZResult {
	ZOK,
	ZERROR,
	ZCONNECT,
	ZNOCARRIER,
	ZNOANSWER,
	ZIGNORE,
	ZIGNORE_SPECIAL
};

enum FlowControlType {
	FCT_RTSCTS = 0,
	FCT_NORMAL = 1,
	FCT_AUTOOFF = 2,
	FCT_MANUAL = 3,
	FCT_DISABLED = 4,
	FCT_INVALID = 5
};

enum BaudState {
	BS_NORMAL,
	BS_SWITCH_TEMP_NEXT,
	BS_SWITCHED_TEMP,
	BS_SWITCH_NORMAL_NEXT
};

enum ConfigOptions {
	CFG_WIFISSI = 0,
	CFG_WIFIPW = 1,
	CFG_BAUDRATE = 2,
	CFG_EOLN = 3,
	CFG_FLOWCONTROL = 4,
	CFG_ECHO = 5,
	CFG_RESP_SUPP = 6,
	CFG_RESP_NUM = 7,
	CFG_RESP_LONG = 8,
	CFG_PETSCIIMODE = 9,
	CFG_DCDMODE = 10,
	CFG_UART = 11,
	CFG_CTSMODE = 12,
	CFG_RTSMODE = 13,
	CFG_DCDPIN = 14,
	CFG_CTSPIN = 15,
	CFG_RTSPIN = 16,
	CFG_S0_RINGS = 17,
	CFG_S41_STREAM = 18,
	CFG_S60_LISTEN = 19,
	CFG_RIMODE = 20,
	CFG_DTRMODE = 21,
	CFG_DSRMODE = 22,
	CFG_RIPIN = 23,
	CFG_DTRPIN = 24,
	CFG_DSRPIN = 25,
	CFG_TIMEZONE = 26,
	CFG_TIMEFMT = 27,
	CFG_TIMEURL = 28,
	CFG_HOSTNAME = 29,
	CFG_PRINTDELAYMS = 30,
	CFG_PRINTSPEC = 31,
	CFG_TERMTYPE = 32,
	CFG_STATIC_IP = 33,
	CFG_STATIC_DNS = 34,
	CFG_STATIC_GW = 35,
	CFG_STATIC_SN = 36,
	CFG_BUSYMSG = 37,
	CFG_LAST = 37
};

#endif