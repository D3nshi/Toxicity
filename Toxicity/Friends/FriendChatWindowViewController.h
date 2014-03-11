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
#import "Singleton.h"
#import "AppDelegate.h"

@interface FriendChatWindowViewController : JSMessagesViewController <JSMessagesViewDataSource, JSMessagesViewDelegate>

- (id)initWithFriendIndex:(NSIndexPath *)friendIndex;

@end
