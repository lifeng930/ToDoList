//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by huanglifeng on 14-9-3.
//  Copyright (c) 2014年 lifeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject
@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;
@end
