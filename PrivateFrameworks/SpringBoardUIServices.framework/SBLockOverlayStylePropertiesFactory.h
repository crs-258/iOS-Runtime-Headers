/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBLockOverlayStylePropertiesFactory : NSObject {
    NSMutableDictionary * _deviceQualityToProperties;
    unsigned int  _style;
}

@property (nonatomic, readonly) unsigned int style;

+ (id)overlayPropertiesFactoryWithStyle:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)_fetchAndCachePropsForDeviceQuality:(int)arg1;
- (id)initWithStyle:(unsigned int)arg1;
- (id)propertiesWithDeviceDefaultGraphicsQuality;
- (id)propertiesWithGraphicsQuality:(int)arg1;
- (unsigned int)style;

@end
