//
//  BrainCloudTime.h
//  brainCloudClientObjc
//
//  Created by Hill, Bradley on 2015-08-12.
//  Copyright (c) 2016 bitHeads. All rights reserved.
//

#pragma once

#import <Foundation/Foundation.h>
#import "BrainCloudCompletionBlocks.hh"
#include "braincloud/BrainCloudClient.h"

@interface BrainCloudTime : NSObject

/**
 * Initializes the brainCloudService
 */
- (instancetype) init: (BrainCloud::BrainCloudClient*) client;

/**
* Method returns the server time in UTC. This is in UNIX millis time format.
* For instance 1396378241893 represents 2014-04-01 2:50:41.893 in GMT-4.
*
* Service Name - Time
* Service Operation - Read
*
* Server API reference: ServiceName.Time, ServiceOperation.Read
*
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)readServerTime:(BCCompletionBlock)cb
  errorCompletionBlock:(BCErrorCompletionBlock)ecb
              cbObject:(BCCallbackObject)cbObject;

@end
