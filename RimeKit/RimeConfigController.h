//
//  RimeConfigController.h
//  SCU
//
//  Created by Neo on 12/29/12.
//  Copyright (c) 2012 Paradigm X. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RimeConfig.h"

@interface RimeConfigController : NSObject {
    RimeConfig *_defaultConfig;
    RimeConfig *_squirrelConfig;
    RimeConfig *_lunaPinyinConfig;
    RimeConfig *_lunaPinyinFluencyConfig;
    RimeConfig *_wubi86Config;
}

// Category: General
@property (nonatomic) BOOL useUSKeyboardLayout;
@property (nonatomic) BOOL enableNotifications;
@property (nonatomic) BOOL enableBuiltinNotifications;

// Category: Style
@property (nonatomic) BOOL isHorizontal;
@property (nonatomic) NSInteger numberOfCandidates;
@property (nonatomic) NSString *fontFace;
@property (nonatomic) NSInteger fontPoint;
@property (nonatomic) NSInteger cornerRadius;
@property (nonatomic) NSInteger borderHeight;
@property (nonatomic) NSInteger borderWidth;
@property (nonatomic) float alpha;
@property (nonatomic) NSString *colorTheme;

- (id)init:(RimeConfigError **)error;

// Override property setters to do patching
- (void)setUseUSKeyboardLayout:(BOOL)value;
- (void)setShowNotificationWhen:(NSUInteger)value;

- (void)setIsHorizontal:(BOOL)value;
- (void)setNumberOfCandidates:(NSInteger)value;
- (void)setFontFace:(NSString *)value;
- (void)setFontPoint:(NSInteger)value;
- (void)setCornerRadius:(NSInteger)value;
- (void)setBorderHeight:(NSInteger)value;
- (void)setBorderWidth:(NSInteger)value;
- (void)setAlpha:(float)value;
- (void)setColorTheme:(NSString *)value;

// Class helpers
+ (NSString *)rimeFolder;
+ (BOOL)checkRimeFolder;
@end
