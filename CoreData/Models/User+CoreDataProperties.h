//
//  User+CoreDataProperties.h
//  CoreData
//
//  Created by Harbros 10 on 15.02.2019.
//  Copyright © 2019 Harbros 10. All rights reserved.
//
//

#import "User+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface User (CoreDataProperties)

+ (NSFetchRequest<User *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *firstName;
@property (nullable, nonatomic, copy) NSString *lastName;

@end

NS_ASSUME_NONNULL_END
