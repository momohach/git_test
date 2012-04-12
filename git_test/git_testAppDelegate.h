//
//  git_testAppDelegate.h
//  git_test
//
//  Created by Mohamed Amine HACHFI on 12/04/2012.
//  Copyright 2012 HACHFI. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface git_testAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
