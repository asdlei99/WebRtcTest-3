//
//  main.m
//  WebRtcTest
//
//  Created by liuyao on 2017/4/16.
//  Copyright © 2017年 liuyao. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "src/WebRtcTest.h"
#include <string.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        if (1 == argc) {
            NSLog(@"参数不足,运行测试例子");
            WebRtcAgcTest("byby_8K_1C_16bit.pcm","byby_8K_1C_16bit_agc.pcm",8000);
            NoiseSuppression32("lhydd_1C_16bit_32K.PCM","lhydd_1C_16bit_32K_ns.pcm",32000,1);
            NoiseSuppressionX32("lhydd_1C_16bit_32K.PCM","lhydd_1C_16bit_32K_nsx.pcm",32000,1);
        } else {
            //可以通过配置文件处理
//            WebRtcAgcTest(argv[1], argv[2],8000);
//            NoiseSuppression32(argv[1], argv[2], 32000, 1);
//            NoiseSuppressionX32(argv[1], argv[2], 32000, 1);
        }
        
        NSLog(@"声音增益,降噪结束...");

        //NSLog(@"Hello, World!");
    }
    return 0;
}
