//
//  AIConstants.h
//  Acronym
//
//  Created by Darshan K N on 17/05/15.
//  Copyright (c) 2015 Darshan K N. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const AIBaseURL;
extern NSString *const kAppFontName;
extern NSString *const kAppBoldFontName;

#define labelTextFont [UIFont fontWithName:kAppFontName size:15.0f]
#define labelBoldTextFont [UIFont fontWithName:kAppBoldFontName size:15.0f]
#define descriptionTextFont [UIFont fontWithName:kAppFontName size:13.0f]
#define cellVerticalPadding 10
#define cellHorizontalWaste 50
#define MAXLENGTH 30


@interface AIConstants : NSObject

@end
