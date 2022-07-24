#define CONCAT(a,b) a ## b
#define STRINGIZE_NX(a) #a
#define STRINGIZE(a) STRINGIZE_NX(a)

#define VERSION "3.0.0"
#define COMPILER "Microsoft (R) C/C++ Optimizing Compiler " STRINGIZE(_MSC_FULL_VER)
#define ID "2d57d5ee42d74b76a442201ad1c70318d5c1d000"
#define BUILD __DATE__ " " __TIME__
