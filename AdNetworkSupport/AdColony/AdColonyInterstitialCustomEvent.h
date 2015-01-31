//
//  AdColonyInterstitialCustomEvent.h
//  MoPub
//
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#if __has_include(<MoPub/MoPub.h>)
    #import <MoPub/MoPub.h>
#else
    #import "MPInterstitialCustomEvent.h"
#endif

/*
 * Certified with version 2.4.12 of the AdColony SDK.
 *
 * The AdColony SDK does not provide an ad clicked callback. As a result, this custom event will not invoke delegate methods
 * interstitialCustomEventDidReceiveTapEvent: and interstitialCustomEventWillLeaveApplication:
 */

@interface AdColonyInterstitialCustomEvent : MPInterstitialCustomEvent

/**
 * Registers an AdColony app ID to be used when initializing the AdColony SDK.
 *
 * At initialization, the AdColony SDK requires you to provide your AdColony app ID. When
 * integrating AdColony using a MoPub custom event, this ID is typically configured via your
 * AdColony network settings on the MoPub website. However, if you wish, you may use this method to
 * manually provide the custom event with your app ID.
 *
 * IMPORTANT: If you choose to use this method, be sure to call it before making any ad requests,
 * and avoid calling it more than once. Otherwise, the AdColony SDK may be initialized improperly.
 */
+ (void)setAppId:(NSString *)appId;

/**
 * Registers an array of AdColony zone IDs to be used when initializing the AdColony SDK.
 *
 * At initialization, the AdColony SDK requires a list of all the zone IDs you wish to use within
 * your application. When integrating AdColony using a MoPub custom event, this list is typically
 * configured via your AdColony network settings on the MoPub website. However, if you wish, you
 * may use this method to manually provide the custom event with a fall-back list of IDs.
 *
 * IMPORTANT: If you choose to use this method, be sure to call it before making any ad requests,
 * and avoid calling it more than once. Otherwise, the AdColony SDK may be initialized improperly.
 */
+ (void)setAllZoneIds:(NSArray *)zoneIds;

/**
 * Registers an AdColony zone ID that should be used as a default value for ad requests.
 *
 * When integrating AdColony using a MoPub custom event, the custom event typically consults your
 * AdColony network settings, configured on the MoPub website, to determine which zone ID to use for
 * a given ad request. If you wish, you may use this method to assign a fall-back ID that should be
 * used.
 *
 * IMPORTANT: If you choose to use this method, be sure to call it before making any ad requests,
 * and avoid calling it more than once. Otherwise, the default zone ID may vary unexpectedly between
 * different ad requests.
 */
+ (void)setDefaultZoneId:(NSString *)defaultZoneId;

@end
