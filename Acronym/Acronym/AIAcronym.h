//
//  AIAcronym.h
//  Acronym
//
//  Created by Mayuresh Rao on 3/13/17.
//  Copyright © 2017 Mayuresh Rao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AIAcronym : NSObject
    @property (nonatomic,copy) NSString *shortForm;
    @property (nonatomic,strong) NSMutableArray *meanings;
    @end
