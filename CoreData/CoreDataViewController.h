//
//  CoreDataViewController.h
//  CoreData
//
//  Created by Harbros 10 on 15.02.2019.
//  Copyright © 2019 Harbros 10. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "DataManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface CoreDataViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end

NS_ASSUME_NONNULL_END
