//
//  XYZAddToDoItemViewController.h
//  ToDoList
//
//  Created by huanglifeng on 14-8-24.
//  Copyright (c) 2014年 lifeng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XYZToDoItem.h"

@interface XYZAddToDoItemViewController : UIViewController
@property XYZToDoItem *toDoItem;
-(void) touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event;
@end
