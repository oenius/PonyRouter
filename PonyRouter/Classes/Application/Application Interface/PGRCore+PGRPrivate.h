//
//  PGRCore+PGRPrivate.h
//  PonyRouter
//
//  Created by 崔 明辉 on 15/3/5.
//  Copyright (c) 2015年 多玩事业部 iOS开发组 YY Inc. All rights reserved.
//

#import "PGRCore.h"
#import "PGRNodeManager.h"
#import "PGRConfigurationManager.h"

@interface PGRCore (PGRPrivate)

@property (nonatomic, readonly) PGRNodeManager *nodeManager;

@property (nonatomic, readonly) PGRConfigurationManager *configurationManager;

@end
