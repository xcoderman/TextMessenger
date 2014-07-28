//
//  MainController.h
//  TextMessenger
//
//  Created by Lichard Baliuag on 25/11/12.
//  Copyright (c) 2012 Lichard Baliuag. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import <CoreData/CoreData.h>
#import "UserMessages.h"


@interface MainController : UITableViewController <UINavigationControllerDelegate, NSFetchedResultsControllerDelegate>
{
    //NSMutableArray *myArray;
}
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) NSString *isFromNotification;
@property (nonatomic,strong) NSString *notificationID;
@property (nonatomic, strong)NSString *test;

//@property (nonatomic, strong) UserProfile *userProfile;
@property (nonatomic, strong) UserMessages *userMessages;

-(void)CallOtherView;

@end
