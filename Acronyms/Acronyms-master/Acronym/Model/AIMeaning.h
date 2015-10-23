//
//  AIMeaning.h
//  Acronym
//
//  Created by Darshan K N on 17/05/15.
//  Copyright (c) 2015 Darshan K N. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AIMeaning : NSObject
@property (nonatomic, copy) NSString *meaning;
@property NSInteger frequency;
@property NSInteger since;
@property (nonatomic, copy) NSMutableArray *variations;

@end
