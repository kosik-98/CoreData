//
//  User+CoreDataProperties.m
//  CoreData
//
//  Created by Harbros 10 on 15.02.2019.
//  Copyright © 2019 Harbros 10. All rights reserved.
//
//

#import "User+CoreDataProperties.h"

@implementation User (CoreDataProperties)

+ (NSFetchRequest<User *> *)fetchRequest {
	return [NSFetchRequest fetchRequestWithEntityName:@"User"];
}

@dynamic firstName;
@dynamic lastName;

@end
