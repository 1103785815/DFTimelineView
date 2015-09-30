//
//  DFLikeCommentView.h
//  DFTimelineView
//
//  Created by Allen Zhong on 15/9/28.
//  Copyright (c) 2015年 Datafans, Inc. All rights reserved.
//

#import "DFBaseLineItem.h"

@protocol DFLikeCommentViewDelegate <NSObject>

@required
-(void) onClickUser:(NSUInteger) userId;

@end



@interface DFLikeCommentView : UIView


@property (nonatomic, assign) id<DFLikeCommentViewDelegate> delegate;


-(void) updateWithItem:(DFBaseLineItem *) item;

+(CGFloat) getHeight:(DFBaseLineItem *) item maxWidth:(CGFloat)maxWidth;

@end
