//
//  ChatWindowViewController.h
//  Toxicity
//
//  Created by James Linnell on 8/8/13.
//  Copyright (c) 2013 JamesTech. All rights reserved.
//

#import "JSMessagesViewController.h"
#import "JSMessage.h"
#import "JSBubbleImageViewFactory.h"
#import "TXCSingleton.h"
#import "TXCAppDelegate.h"

@interface TXCGroupChatWindowViewController : JSMessagesViewController <JSMessagesViewDataSource, JSMessagesViewDelegate>
{
    NSMutableArray      *_mainGroupList;
    NSMutableArray      *_mainGroupMessages;
    TXCGroupObject *_groupInfo;
    
    NSMutableArray      *messages;
    
    NSIndexPath         *friendIndex;
    
    UIImageView         *statusNavBarImageView;
}

- (id)initWithFriendIndex:(NSIndexPath *)friendIndex;

@end
