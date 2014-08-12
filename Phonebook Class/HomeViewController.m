//
//  HomeViewController.m
//  TestPhoneBook
//
//  Created by pachie on 11/8/14.
//  Copyright (c) 2014 Private. All rights reserved.
//

#import "HomeViewController.h"
#import "PhoneBookTableViewController.h"

@interface HomeViewController ()

@end

@implementation HomeViewController

-(void)GetSelectedPerson:(EntityPerson *)selectedPerson
{
    self.labelSelectedContact.text = selectedPerson.Name;
    
}


//-(void)performSegueWithIdentifier:(NSString *)identifier sender:(id)sender
//{
//    
//    UIStoryboard *storyboard = [UIStoryboard storyboardWithName:@"Storyboard" bundle:nil];
//    
//    PhoneBookTableViewController *vc = [storyboard instantiateViewControllerWithIdentifier:@"selectContact"];
//    [vc setModalPresentationStyle:UIModalPresentationFullScreen];
//    
//    vc.Xdelexgate = self;
//    
//    [self presentViewController:vc animated:YES completion:nil];
//
//}

//-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
//{
//    if ([[segue identifier] isEqualToString:@"selectContact"]) {
//    
//        PhoneBookTableViewController *add = (PhoneBookTableViewController *) segue.destinationViewController;
//        
//        
//        add.Xdelexgate = self ;// = self;
//        
//        
//        
//    }
//}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)showmodal:(id)sender {
    
    UIStoryboard *storyboard = [UIStoryboard storyboardWithName:@"Storyboard" bundle:nil];
    
    PhoneBookTableViewController *vc = [storyboard instantiateViewControllerWithIdentifier:@"ModalContact"];
   
    vc.Xdelexgate = self;
    
    

    //show push
    [self.navigationController pushViewController:vc animated:YES];
   
    //show modal
    //[self presentViewController:vc animated:YES completion:nil];
   
}
@end
