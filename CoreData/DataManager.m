//
//  DataManager.m
//  CoreData
//
//  Created by Harbros 10 on 15.02.2019.
//  Copyright © 2019 Harbros 10. All rights reserved.
//

#import "DataManager.h"

@implementation DataManager

+ (DataManager*)sharedManager{
    static DataManager* manager = nil;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [[DataManager alloc] init];
    });
    
    return manager;
}

- (void)addUser{
    
}

@end
