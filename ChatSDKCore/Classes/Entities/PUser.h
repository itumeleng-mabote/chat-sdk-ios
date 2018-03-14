//
//  PUser.h
//  Chat SDK
//
//  Created by Benjamin Smiley-andrews on 09/04/2014.
//  Copyright (c) 2014 deluge. All rights reserved.
//

#import "BAccountTypes.h"

#import <ChatSDK/BUserConnectionType.h>

@class RXPromise;
@protocol PUserConnection;
@protocol PThread;
@protocol PUserAccount;
@protocol PEntity;
@protocol PHasMeta;
@protocol PElmUser;

@protocol PUser <PEntity, PHasMeta, PElmUser>

/**
 * @brief Sets the user's online status
 * @param online NSNumber(BOOL) is the user online or not
 */
-(void) setOnline: (NSNumber *) online;

/**
 * @brief Is the user currently connected to Firebase?
 * @return NSNumber(BOOL) user's online status
 */
-(NSNumber *) online;

/**
 * @brief User's large image - only ever seen by user
 * @para NSData Image in binary format
 */
-(void) setImage: (NSData *) image;

/**
 * @brief User's main image
 * @return NSData Image in binary format
 */
-(NSData *) image;
-(UIImage *) imageAsImage;
-(UIImage *) defaultImage;
-(NSString *) imageURL;
-(void) setImageURL: (NSString *) url;

-(void) setThumbnail: (NSData *) image;
-(NSData *) thumbnail;
-(UIImage *) thumbnailAsImage;
-(void) setName: (NSString *) name;
-(NSString *) name;

-(void) setStatusDictionary: (NSDictionary *) dictionary;
-(NSDictionary *) getStatusDictionary;

-(void) setState: (NSString *) state;
-(NSString *) state;

-(void) setStatusText: (NSString *) statusText;
-(NSString *) statusText;

//-(void) addContact: (id<PUser>) user;
-(NSArray *) getContacts;

-(void) setMessageColor: (NSString *) color;
-(NSString *) messageColor;

-(void) setAuthenticationType: (NSString *) type;
-(NSString *) authenticationType;

-(RXPromise *) loadProfileImage: (BOOL) force;
-(RXPromise *) loadProfileThumbnail: (BOOL) force;

-(void) addLinkedAccountsObject: (id<PUserAccount>) account;

-(void) setEmail: (NSString *) email;
-(NSString *) email;

-(void) setPhoneNumber: (NSString *) phoneNumber;
-(NSString *) phoneNumber;

-(NSArray *) threads;

-(int) unreadMessageCount;

-(NSString *) pushChannel;

-(id<PUserAccount>) accountWithType: (bAccountType) type;

-(id<PUser>) model;

-(NSArray *) contactsWithType: (bUserConnectionType) type;
-(void) addConnection: (id<PUserConnection>) connection;
-(void) removeConnection: (id<PUserConnection>) connection;

-(NSArray *) connectionsWithType: (bUserConnectionType) type;

-(BOOL) isMe;

// Needed for CocoaPods install
-(NSDictionary *) metaDictionary;
-(void) setMetaDictionary: (NSDictionary *) meta;

@end


