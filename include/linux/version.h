#ifndef _LINUX_VERSION_H
#define _LINUX_VERSION_H

/*
 * Encode kernel version number
 */
#ifndef KERNEL_VERSION
#define KERNEL_VERSION(a,b,c) (((a) << 16) + ((b) << 8) + (c))
#endif

/*
 * Set kernel version code
 * VERSION = 4
 * PATCHLEVEL = 19
 * SUBLEVEL = 325
 */
#ifndef LINUX_VERSION_CODE
#define LINUX_VERSION_CODE KERNEL_VERSION(4,19,325)
#endif

#endif /* _LINUX_VERSION_H */
