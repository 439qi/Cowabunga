#pragma once
#import <Foundation/Foundation.h>

@interface StatusManager : NSObject

+ (StatusManager *)sharedInstance;
- (bool)isMDCMode;
- (void)setIsMDCMode:(bool)mode;
- (bool) isCarrierOverridden;
- (NSString*) getCarrierOverride;
- (void) setCarrier:(NSString*)text;
- (void) unsetCarrier;
- (bool) isSecondaryCarrierOverridden;
- (NSString*) getSecondaryCarrierOverride;
- (void) setSecondaryCarrier:(NSString*)text;
- (void) unsetSecondaryCarrier;
- (bool) isTimeOverridden;
- (NSString*) getTimeOverride;
- (void) setTime:(NSString*)text;
- (void) unsetTime;
- (bool) isBatteryDetailOverridden;
- (NSString*) getBatteryDetailOverride;
- (void) setBatteryDetail:(NSString*)text;
- (void) unsetBatteryDetail;
- (bool) isCrumbOverridden;
- (NSString*) getCrumbOverride;
- (void) setCrumb:(NSString*)text;
- (void) unsetCrumb;
- (bool) isBatteryCapacityOverridden;
- (int) getBatteryCapacityOverride;
- (void) setBatteryCapacity:(int)capacity;
- (void) unsetBatteryCapacity;
- (bool) isWiFiSignalStrengthBarsOverridden;
- (int) getWiFiSignalStrengthBarsOverride;
- (void) setWiFiSignalStrengthBars:(int)strength;
- (void) unsetWiFiSignalStrengthBars;
- (bool) isGsmSignalStrengthBarsOverridden;
- (int) getGsmSignalStrengthBarsOverride;
- (void) setGsmSignalStrengthBars:(int)strength;
- (void) unsetGsmSignalStrengthBars;
- (bool) isDisplayingRawWiFiSignal;
- (void) displayRawWifiSignal:(bool)displaying;
- (bool) isDisplayingRawGSMSignal;
- (void) displayRawGSMSignal:(bool)displaying;
- (bool) isClockHidden;
- (void) hideClock:(bool)hidden;
- (bool) isDNDHidden;
- (void) hideDND:(bool)hidden;
- (bool) isAirplaneHidden;
- (void) hideAirplane:(bool)hidden;
- (bool) isCellHidden;
- (void) hideCell:(bool)hidden;
- (bool) isWiFiHidden;
- (void) hideWiFi:(bool)hidden;
- (bool) isBatteryHidden;
- (void) hideBattery:(bool)hidden;
- (bool) isBluetoothHidden;
- (void) hideBluetooth:(bool)hidden;
- (bool) isAlarmHidden;
- (void) hideAlarm:(bool)hidden;
- (bool) isLocationHidden;
- (void) hideLocation:(bool)hidden;
- (bool) isRotationHidden;
- (void) hideRotation:(bool)hidden;
- (bool) isAirPlayHidden;
- (void) hideAirPlay:(bool)hidden;
- (bool) isCarPlayHidden;
- (void) hideCarPlay:(bool)hidden;
- (bool) isVPNHidden;
- (void) hideVPN:(bool)hidden;
- (bool) isMicrophoneUseHidden;
- (void) hideMicrophoneUse:(bool)hidden;
- (bool) isCameraUseHidden;
- (void) hideCameraUse:(bool)hidden;

@end
