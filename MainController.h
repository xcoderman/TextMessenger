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

@property (nonatomic, strong) NSString *isFromNotification;
@property (nonatomic, strong) NSString *notificationID;
@property (nonatomic, strong) NSString *test;


@property (nonatomic, strong) NSString *msgGUID;
//@property (nonatomic, strong) NSString *resName;
//@property (nonatomic, strong) NSString *msgContent1;

//@property (nonatomic, strong) UserProfile *userProfile;
@property (nonatomic, strong) UserMessages *userMessages;       // Entity

-(void)CallOtherView;

@end
