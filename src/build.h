#define CONCAT(a,b) a ## b
#define STRINGIZE_NX(a) #a
#define STRINGIZE(a) STRINGIZE_NX(a)

#define VERSION "sc2022-light"
#define COMPILER "Microsoft (R) C/C++ Optimizing Compiler " STRINGIZE(_MSC_FULL_VER)
#define ID "0fbf419553c0144342a7cd0e070de25a2c1ec915"
#define BUILD __DATE__ " " __TIME__
