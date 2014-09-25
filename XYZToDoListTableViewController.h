//
//  XYZToDoListTableViewController.h
//  ToDoList
//
//  Created by huanglifeng on 14-8-24.
//  Copyright (c) 2014年 lifeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZToDoListTableViewController : UITableViewController
@property NSMutableArray *toDoItems;

-(IBAction) unwindToList:(UIStoryboardSegue *) segue;
@end
