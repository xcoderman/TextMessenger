//
//  MessageContentViewController.h
//  TextMessenger
//
//  Created by Lichard Baliuag on 28/11/12.
//  Copyright (c) 2012 Lichard Baliuag. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserMessages.h"
@interface MessageContentViewController : UIViewController

//@property int characterNumber;
//@property(nonatomic, strong) NSString *characterName;

@property (nonatomic, strong) IBOutlet UITextView *messageContent;
@property (strong, nonatomic) id detailItem;
@property (nonatomic, strong) UserMessages *userMessages;



@property (nonatomic, strong) NSString *messageGuid;

@property (strong, nonatomic) IBOutlet UILabel *msgContentDetails;
@property (strong, nonatomic) IBOutlet UILabel *dateToSend;
@property (strong, nonatomic) IBOutlet UILabel *status;
@property (strong, nonatomic) IBOutlet UILabel *contentLabel;
@property (strong, nonatomic) IBOutlet UILabel *msgContent1;
@end
