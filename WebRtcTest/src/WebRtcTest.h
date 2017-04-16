//
//  WebRtcTest.h
//  WebRtcTest
//
//  Created by liuyao on 2017/4/16.
//  Copyright © 2017年 liuyao. All rights reserved.
//

#ifndef WebRtcTest_h
#define WebRtcTest_h

#include <string.h>

void NoiseSuppression32(const char *szFileIn, const char *szFileOut, int nSample, int nMode);
void NoiseSuppressionX32(const char *szFileIn, const char *szFileOut, int nSample, int nMode);
void WebRtcAgcTest(const char *filename, const char *outfilename,int fs);

#endif /* WebRtcTest_h */
