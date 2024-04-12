// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the ATTENDANCE10REPO_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// ATTENDANCE10REPO_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ATTENDANCE10REPO_EXPORTS
#define ATTENDANCE10REPO_API __declspec(dllexport)
#else
#define ATTENDANCE10REPO_API __declspec(dllimport)
#endif

// This class is exported from the dll
class ATTENDANCE10REPO_API CAttendance10Repo {
public:
	CAttendance10Repo(void);
	// TODO: add your methods here.
};

extern ATTENDANCE10REPO_API int nAttendance10Repo;

ATTENDANCE10REPO_API int fnAttendance10Repo(void);

ATTENDANCE10REPO_API int testMe (int i);