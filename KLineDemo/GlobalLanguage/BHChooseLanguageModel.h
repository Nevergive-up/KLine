//
//  BHChooseLanguageModel.h
//  iOS
//
//  Created by iOS on 2018/8/15.
//  Copyright © 2018年 iOS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BHChooseLanguageModel : NSObject

@property (nonatomic, strong) NSString *languageName;
@property (nonatomic, strong) NSString *languageCode;

- (instancetype)initWithName:(NSString *)languageName code:(NSString *)languageCode;
@end
