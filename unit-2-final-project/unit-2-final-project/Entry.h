//
//  Entry.h
//  unit-2-final-project
//
//  Created by Lauren Caponong on 10/13/15.
//  Copyright © 2015 Lauren Caponong. All rights reserved.
//

#import "PFObject.h"
#import <Parse/Parse.h>


@interface Entry : PFObject <PFSubclassing>

@property (nonatomic) NSDate *createdAt;
@property (nonatomic) NSDate *dateOfEntry;
@property (nonatomic) NSString *titleOfEntry;
@property (nonatomic) NSString *descriptionOfEntry;

@end

