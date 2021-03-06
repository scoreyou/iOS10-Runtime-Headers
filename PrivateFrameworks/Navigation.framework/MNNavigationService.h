/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationService : NSObject <MNNavigationServiceClientInterface, MNNavigationServiceRemoteProxyDelegate> {
    NSArray * _audioSettings;
    MNSettings * _cachedSettings;
    MNAudioOutputSetting * _currentAudioOutputSetting;
    MNAudioOutputSetting * _currentSettingForVoicePrompt;
    MNNavigationDetails * _details;
    double  _distanceUntilManeuver;
    MNObserverHashTable * _navigationObservers;
    <MNNavigationServiceDaemonInterface> * _proxy;
    unsigned long long  _routeSelection;
    NSMutableDictionary * _trafficIncidentAlerts;
}

@property (nonatomic, readonly) NSArray *audioSettings;
@property (nonatomic, readonly) MNAudioOutputSetting *currentAudioOutputSetting;
@property (nonatomic, readonly) GEODirectionsRequest *currentRequest;
@property (nonatomic, readonly) GEODirectionsResponse *currentResponse;
@property (nonatomic, readonly) MNAudioOutputSetting *currentSettingForVoicePrompt;
@property (nonatomic, readonly) NSString *currentVoiceLanguage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *destinationName;
@property (nonatomic, readonly) double distanceUntilManeuver;
@property (nonatomic, readonly) double distanceUntilSign;
@property (nonatomic, readonly) int guidanceLevel;
@property (nonatomic, readonly) int guidanceLevelIgnoringTime;
@property (nonatomic) bool guidancePromptsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) int headingOrientation;
@property (nonatomic, readonly) bool isDetour;
@property (nonatomic, readonly) bool isNavigating;
@property (nonatomic, readonly) MNLocation *lastLocation;
@property (nonatomic, readonly) int navigationState;
@property (nonatomic, readonly) int navigationTransportType;
@property (nonatomic, readonly) int navigationType;
@property (nonatomic, readonly) GEOComposedWaypoint *originalDestination;
@property (nonatomic, readonly) NSString *originalDestinationName;
@property (nonatomic, readonly) unsigned long long reconnectionRouteIndex;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) unsigned long long routeIndex;
@property (nonatomic, readonly) unsigned long long routeSelection;
@property (nonatomic, readonly) bool runLegacyNavigation;
@property (nonatomic, readonly) bool speechMuted;
@property (nonatomic, readonly) unsigned long long stepIndex;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *traceBookmarks;
@property (nonatomic, readonly) double traceDuration;
@property (nonatomic) bool traceIsPlaying;
@property (nonatomic, readonly) NSString *tracePath;
@property (nonatomic) double tracePosition;

+ (id)sharedService;

- (void).cxx_destruct;
- (void)_reset;
- (void)addObserver:(id)arg1;
- (id)audioSettings;
- (void)changeSettings:(id)arg1;
- (id)currentAudioOutputSetting;
- (id)currentRequest;
- (id)currentResponse;
- (id)currentSettingForVoicePrompt;
- (id)currentVoiceLanguage;
- (id)destinationName;
- (void)didActivateAudioSession:(bool)arg1;
- (void)didArrive;
- (void)didCancelReroute;
- (void)didChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)didChangeGuidanceLevel:(int)arg1;
- (void)didChangeGuidanceState:(id)arg1;
- (void)didChangeNavigationState:(int)arg1;
- (void)didEnableGuidancePrompts:(bool)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didInvalidateTrafficIncidentAlert:(id)arg1;
- (void)didReceiveTrafficIncidentAlert:(id)arg1;
- (void)didRerouteWithDetails:(id)arg1 withLocationDetails:(id)arg2;
- (void)didSignalAlightForStepAtIndex:(unsigned long long)arg1;
- (void)didStartSpeakingPrompt:(id)arg1;
- (void)didStartUsingVoiceLanguage:(id)arg1;
- (void)didSwitchToNewTransportType:(int)arg1 newRoute:(id)arg2;
- (void)didUpdateActiveRouteDetails:(id)arg1;
- (void)didUpdateAudioOutputCurrentSetting:(id)arg1;
- (void)didUpdateAudioOutputCurrentSettingForVoicePrompt:(id)arg1;
- (void)didUpdateAudioOutputRouteSelection:(unsigned long long)arg1;
- (void)didUpdateAudioOutputSettings:(id)arg1;
- (void)didUpdateDistanceUntilManeuver:(double)arg1 timeUntilManeuver:(double)arg2 forStepIndex:(unsigned long long)arg3;
- (void)didUpdateDistanceUntilSign:(double)arg1 timeUntilSign:(double)arg2 forStepIndex:(unsigned long long)arg3;
- (void)didUpdateFeedback:(id)arg1 forAlightingStepAtIndex:(unsigned long long)arg2;
- (void)didUpdateHeading:(double)arg1 accuracy:(double)arg2;
- (void)didUpdateMatchedLocation:(id)arg1;
- (void)didUpdateProceedToRouteDistance:(double)arg1 displayString:(id)arg2 closestStepIndex:(unsigned long long)arg3;
- (void)didUpdateRemainingTime:(double)arg1 remainingDistance:(double)arg2;
- (void)didUpdateStepIndex:(unsigned long long)arg1 legIndex:(unsigned long long)arg2;
- (void)didUpdateTracePlaybackDetails:(id)arg1;
- (void)didUpdateTrafficForETARoute:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 withRouteDetails:(id)arg4;
- (void)didUpdateTrafficIncidentAlert:(id)arg1;
- (void)displayManeuverAlertForAnnouncementStage:(unsigned long long)arg1;
- (void)displayPrimaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5 maneuverStepIndex:(unsigned long long)arg6 isSynthetic:(bool)arg7;
- (void)displaySecondaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5;
- (double)distanceUntilManeuver;
- (double)distanceUntilSign;
- (void)failedRerouteWithErrorCode:(long long)arg1;
- (int)guidanceLevel;
- (int)guidanceLevelIgnoringTime;
- (bool)guidancePromptsEnabled;
- (int)headingOrientation;
- (void)hideSecondaryStep;
- (id)init;
- (bool)isDetour;
- (bool)isNavigating;
- (id)lastLocation;
- (int)navigationState;
- (int)navigationTransportType;
- (int)navigationType;
- (id)originalDestination;
- (id)originalDestinationName;
- (void)pauseGuidanceLevelUpdates;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (unsigned long long)reconnectionRouteIndex;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (double)remainingTime;
- (void)remoteProxyDidFinishReconnecting:(id)arg1;
- (void)removeObserver:(id)arg1;
- (bool)repeatCurrentGuidance;
- (bool)repeatCurrentTrafficAlert;
- (void)resumeGuidanceLevelUpdates;
- (void)resumeOriginalDestination;
- (id)route;
- (unsigned long long)routeIndex;
- (unsigned long long)routeSelection;
- (bool)runLegacyNavigation;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setHFPPreference:(bool)arg1 forSetting:(id)arg2;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (id)settings;
- (bool)speechMuted;
- (void)startNavigationForRouteDetails:(id)arg1;
- (unsigned long long)stepIndex;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (id)traceBookmarks;
- (double)traceDuration;
- (bool)traceIsPlaying;
- (id)tracePath;
- (double)tracePosition;
- (void)updateDestination:(id)arg1;
- (bool)vibrateForPrompt:(unsigned long long)arg1;
- (void)willChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)willPauseNavigation;
- (void)willReroute;
- (void)willResumeFromPauseNavigation;

@end
