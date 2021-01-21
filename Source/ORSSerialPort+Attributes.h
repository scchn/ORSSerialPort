//
//  ORSSerialPort+Attributes.h
//  ORSSerial
//
//  Created by scchn on 2021/1/21.
//  Copyright © 2021 Open Reel Software. All rights reserved.
//

#import "ORSSerialPort.h"

NS_ASSUME_NONNULL_BEGIN

@interface ORSSerialPort (Attributes)
@property (nonatomic, readonly) NSDictionary *ioDeviceAttributes;
@property (nullable, nonatomic, readonly) NSString *bundleID;
@property (nullable, nonatomic, readonly) NSNumber *vendorID;
@property (nullable, nonatomic, readonly) NSNumber *productID;
@end

NS_ASSUME_NONNULL_END
