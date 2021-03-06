#include <utime.h>
#include <errno.h>
#include <Kernel/Syscall.h>

extern "C" {

int utime(const char* pathname, const struct utimbuf* buf)
{
    int rc = syscall(SC_utime, (dword)pathname, (dword)buf);
    __RETURN_WITH_ERRNO(rc, rc, -1);
}

}

