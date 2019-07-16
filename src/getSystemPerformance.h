// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the GETSYSTEMPERFORMANCE_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// GETSYSTEMPERFORMANCE_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef GETSYSTEMPERFORMANCE_EXPORTS
#define GETSYSTEMPERFORMANCE_API __declspec(dllexport)
#else
#define GETSYSTEMPERFORMANCE_API __declspec(dllimport)
#endif

// This class is exported from the getSystemPerformance.dll
class GETSYSTEMPERFORMANCE_API CgetSystemPerformance {
public:
	CgetSystemPerformance(void);
	// TODO: add your methods here.
};

extern GETSYSTEMPERFORMANCE_API int ngetSystemPerformance;

GETSYSTEMPERFORMANCE_API int fngetSystemPerformance(void);
