//
//  UVForum.h
//  UserVoice
//
//  Created by UserVoice on 11/23/09.
//  Copyright 2009 UserVoice Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UVBaseModel.h"

@interface UVForum : UVBaseModel {
    NSInteger forumId;
    BOOL isPrivate;
    NSString *name;
    NSString *example;
    NSString *prompt;
    NSInteger votesAllowed;
    NSInteger suggestionsCount;
    NSMutableArray *categories;
    NSMutableArray *suggestions;
    BOOL suggestionsNeedReload;
}

@property (nonatomic, assign) NSInteger forumId;
@property (nonatomic, assign) BOOL isPrivate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *example;
@property (nonatomic, retain) NSString *prompt;
@property (nonatomic, assign) NSInteger votesAllowed;
@property (nonatomic, assign) NSInteger suggestionsCount;
@property (nonatomic, assign) BOOL suggestionsNeedReload;
@property (nonatomic, retain) NSMutableArray *categories;
@property (nonatomic, retain) NSMutableArray *suggestions;

+ (id)getWithId:(int)forumId delegate:(id)delegate;

@end
