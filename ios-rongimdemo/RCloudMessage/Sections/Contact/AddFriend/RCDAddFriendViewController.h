//
//  RCDAddFriendViewController.h
//  RCloudMessage
//
//  Created by Liv on 15/4/16.
//  Copyright (c) 2015年 RongCloud. All rights reserved.
//

#import <RongIMLib/RCUserInfo.h>
#import <UIKit/UIKit.h>
#import "RCDUserInfo.h"

@interface RCDAddFriendViewController : UITableViewController
@property (nonatomic, copy) NSString *groupId;
@property (nonatomic, copy) NSString *targetUserId;
@end
