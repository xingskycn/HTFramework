//
//  AbstractGenericViewController.h
//  iContractor
//
//  Created by Jeff LaMarche on 2/18/09.
//  Copyright 2009 Jeff LaMarche Consulting. All rights reserved.
//
//  Modifications by Andy Waite



@interface AbstractGenericViewController : UITableViewController 
{
	UIBarButtonItem *topLeftButton, *topRightButton;
	UIAlertView *progressAlert;
}
-(void)cancelAction;

@property (nonatomic, retain) UIBarButtonItem *topLeftButton, *topRightButton;

-(void)doneAction;

-(UIBarButtonItem*)refreshButtonItem;
-(UIBarButtonItem*)saveButtonItem;
-(UIBarButtonItem*)cancelButtonItem;
-(UIBarButtonItem*)addButtonItem;
-(UIBarButtonItem*)doneButtonItem;

-(void)showActivityAlert:(NSString*)title message:(NSString*)message;
-(void)hideActivityAlert;

@end
