//
//  KELPSpeechSynthesizer.h
//  KuaiErLiPei
//
//  Created by Senfor on 2018/5/3.
//  Copyright © 2018年 messcat. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

/**
 *  iOS7及以上版本可以使用 AVSpeechSynthesizer 合成语音
 *
 */
@interface KELPSpeechSynthesizer : NSObject

+ (instancetype)sharedSpeechSynthesizer;

- (BOOL)isSpeaking;

- (void)speakString:(NSString *)string;

- (void)stopSpeak;

@end
