//
//  AppDelegate.h
//  CoreData
//
//  Created by Harbros 10 on 15.02.2019.
//  Copyright © 2019 Harbros 10. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

