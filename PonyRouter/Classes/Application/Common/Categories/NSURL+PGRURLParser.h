//
//  NSURL+PGRURLParser.h
//  PonyRouter
//
//  Created by 崔 明辉 on 15-3-5.
//  Copyright (c) 2015年 多玩事业部 iOS开发组 YY Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (PGRURLParser)

- (NSDictionary *)pgr_parseAsPathInfo;

- (NSDictionary *)pgr_parseAsQueryString;

@end
