//
//  KSgetsect.h
//
//  Copyright (c) 2019 YANDEX LLC. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall remain in place
// in this source code.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#ifndef KSgetsect_h
#define KSgetsect_h

#include <mach-o/loader.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/**
 * This routine returns the segment_command structure for the named segment
 * if it exist in the passed mach header. Otherwise it returns zero.
 * It just looks through the load commands. Since these are mapped into the text
 * segment they are read only and thus const.
 */
#ifndef __LP64__
const struct segment_command *ksgs_getsegbynamefromheader(const struct mach_header *mhp, char *segname);
#else /* defined(__LP64__) */
const struct segment_command_64 *ksgs_getsegbynamefromheader(const struct mach_header_64 *mhp, char *segname);
#endif /* defined(__LP64__) */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* KSgetsect_h */
