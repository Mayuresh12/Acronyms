//
//  AIAcronym.h
//  Acronym
//
//  Created by Darshan K N on 17/05/15.
//  Copyright (c) 2015 Darshan K N. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AIAcronym : NSObject

@property (nonatomic,copy) NSString *shortForm;
@property (nonatomic,strong) NSMutableArray *meanings;
@end
