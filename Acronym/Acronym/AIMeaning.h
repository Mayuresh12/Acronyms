//
//  AIMeaning.h
//  Acronym
//
//  Created by Mayuresh Rao on 3/13/17.
//  Copyright © 2017 Mayuresh Rao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AIMeaning : NSObject
    @property (nonatomic, copy) NSString *meaning;
    @property NSInteger frequency;
    @property NSInteger since;
    @property (nonatomic, copy) NSMutableArray *variations;
    

@end
