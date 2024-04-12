// Attendance10Repo.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Attendance10Repo.h"


// This is an example of an exported variable
ATTENDANCE10REPO_API int nAttendance10Repo=0;

// This is an example of an exported function.
ATTENDANCE10REPO_API int fnAttendance10Repo(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CAttendance10Repo::CAttendance10Repo()
{
    return;
}

ATTENDANCE10REPO_API int testMe(int i)
{
    return i + i;
}