/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiProxy.h"
#import <StoreKit/StoreKit.h>

@interface PaymentQueue : TiProxy<SKPaymentTransactionObserver> {
	SKPaymentQueue* queue;
}
-(void)addPayment:(id)arg;

-(id)_initWithPageContext:(id<TiEvaluator>)context queue:(SKPaymentQueue*)queue_;
@end
