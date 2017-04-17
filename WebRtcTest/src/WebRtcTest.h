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

// 浮点降噪(处理效果最好，精度较高，计算较慢)
void NoiseSuppression32(const char *szFileIn, const char *szFileOut, int nSample, int nMode);
// 定点降噪
void NoiseSuppressionX32(const char *szFileIn, const char *szFileOut, int nSample, int nMode);
//自动增益
void WebRtcAgcTest(const char *filename, const char *outfilename,int fs);

#endif /* WebRtcTest_h */
