#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CSSCurrentWeather, CSSKotlinArray<T>, CSSKotlinEnum<E>, CSSKotlinEnumCompanion, CSSKotlinException, CSSKotlinIllegalStateException, CSSKotlinNothing, CSSKotlinRuntimeException, CSSKotlinThrowable, CSSKotlinx_serialization_coreSerialKind, CSSKotlinx_serialization_coreSerializersModule, CSSRemoteKeys, CSSRemoteResult<__covariant T>, CSSRemoteResultError, CSSRemoteResultSuccess<T>, CSSSearchCityResult, CSSSharedCity, CSSSharedCityCompanion, CSSSharedCityScoutRemoteError, CSSSharedCityScoutRemoteResult<__covariant T>, CSSSharedCityScoutRemoteResultFailure, CSSSharedCondition, CSSSharedConditionCompanion, CSSSharedCurrent, CSSSharedCurrentCompanion, CSSSharedForecast, CSSSharedForecastCompanion, CSSSharedLocation, CSSSharedLocationCompanion, CSSSharedWeather, CSSSharedWeatherCompanion, CSSWeatherAndForecast, CSSWeatherCondition, CSSWeatherDay, CSSWeatherForecast, CSSWeatherResult;

@protocol CSSCityScoutLocal, CSSCityWeatherViewModel, CSSDateLocaleProvider, CSSDateUtility, CSSKotlinAnnotation, CSSKotlinComparable, CSSKotlinIterator, CSSKotlinKAnnotatedElement, CSSKotlinKClass, CSSKotlinKClassifier, CSSKotlinKDeclarationContainer, CSSKotlinx_coroutines_coreFlow, CSSKotlinx_coroutines_coreFlowCollector, CSSKotlinx_coroutines_coreSharedFlow, CSSKotlinx_coroutines_coreStateFlow, CSSKotlinx_serialization_coreCompositeDecoder, CSSKotlinx_serialization_coreCompositeEncoder, CSSKotlinx_serialization_coreDecoder, CSSKotlinx_serialization_coreDeserializationStrategy, CSSKotlinx_serialization_coreEncoder, CSSKotlinx_serialization_coreKSerializer, CSSKotlinx_serialization_coreSerialDescriptor, CSSKotlinx_serialization_coreSerializationStrategy, CSSKotlinx_serialization_coreSerializersModuleCollector, CSSPlatform, CSSRemote, CSSSearchCityViewModel, CSSSharedCityScoutRemote;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface CSSBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface CSSBase (CSSBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface CSSMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CSSMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorCSSKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface CSSNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface CSSByte : CSSNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface CSSUByte : CSSNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface CSSShort : CSSNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface CSSUShort : CSSNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface CSSInt : CSSNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface CSSUInt : CSSNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface CSSLong : CSSNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface CSSULong : CSSNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface CSSFloat : CSSNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface CSSDouble : CSSNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface CSSBoolean : CSSNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("CityScoutLocal")))
@protocol CSSCityScoutLocal
@required
@property (readonly) id<CSSDateUtility> dateUtility __attribute__((swift_name("dateUtility")));
@property (readonly) BOOL isImperialLocale __attribute__((swift_name("isImperialLocale")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CityScoutLocalImp")))
@interface CSSCityScoutLocalImp : CSSBase <CSSCityScoutLocal>
- (instancetype)initWithIsImperialLocale:(BOOL)isImperialLocale dateUtility:(id<CSSDateUtility>)dateUtility __attribute__((swift_name("init(isImperialLocale:dateUtility:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CSSDateUtility> dateUtility __attribute__((swift_name("dateUtility")));
@property (readonly) BOOL isImperialLocale __attribute__((swift_name("isImperialLocale")));
@end

__attribute__((swift_name("CityWeatherViewModel")))
@protocol CSSCityWeatherViewModel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkWeatherCity:(CSSSearchCityResult *)city completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("checkWeather(city:completionHandler:)")));
- (void)toggleTemperatureFormat __attribute__((swift_name("toggleTemperatureFormat()")));
@property (readonly) id<CSSCityScoutLocal> cityScoutLocal __attribute__((swift_name("cityScoutLocal")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> country __attribute__((swift_name("country")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> forecasts __attribute__((swift_name("forecasts")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> isCelsius __attribute__((swift_name("isCelsius")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> loading __attribute__((swift_name("loading")));
@property (readonly) id<CSSRemote> remote __attribute__((swift_name("remote")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> title __attribute__((swift_name("title")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherConditionIcon __attribute__((swift_name("weatherConditionIcon")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherConditionText __attribute__((swift_name("weatherConditionText")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherError __attribute__((swift_name("weatherError")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherFeelsLike __attribute__((swift_name("weatherFeelsLike")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherHumidity __attribute__((swift_name("weatherHumidity")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherTemp __attribute__((swift_name("weatherTemp")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherVisibility __attribute__((swift_name("weatherVisibility")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherWindSpeed __attribute__((swift_name("weatherWindSpeed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CityWeatherViewModelImp")))
@interface CSSCityWeatherViewModelImp : CSSBase <CSSCityWeatherViewModel>
- (instancetype)initWithRemote:(id<CSSRemote>)remote cityScoutLocal:(id<CSSCityScoutLocal>)cityScoutLocal __attribute__((swift_name("init(remote:cityScoutLocal:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkWeatherCity:(CSSSearchCityResult *)city completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("checkWeather(city:completionHandler:)")));
- (void)toggleTemperatureFormat __attribute__((swift_name("toggleTemperatureFormat()")));
@property (readonly) id<CSSCityScoutLocal> cityScoutLocal __attribute__((swift_name("cityScoutLocal")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> country __attribute__((swift_name("country")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> forecasts __attribute__((swift_name("forecasts")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> isCelsius __attribute__((swift_name("isCelsius")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> loading __attribute__((swift_name("loading")));
@property (readonly) id<CSSRemote> remote __attribute__((swift_name("remote")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> title __attribute__((swift_name("title")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherConditionIcon __attribute__((swift_name("weatherConditionIcon")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherConditionText __attribute__((swift_name("weatherConditionText")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherError __attribute__((swift_name("weatherError")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherFeelsLike __attribute__((swift_name("weatherFeelsLike")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherHumidity __attribute__((swift_name("weatherHumidity")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherTemp __attribute__((swift_name("weatherTemp")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherVisibility __attribute__((swift_name("weatherVisibility")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherWindSpeed __attribute__((swift_name("weatherWindSpeed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentWeather")))
@interface CSSCurrentWeather : CSSBase
- (instancetype)initWithCondition:(CSSWeatherCondition * _Nullable)condition tempC:(CSSDouble * _Nullable)tempC tempF:(CSSDouble * _Nullable)tempF humidity:(CSSInt * _Nullable)humidity windMph:(CSSDouble * _Nullable)windMph windKph:(CSSDouble * _Nullable)windKph windDir:(NSString * _Nullable)windDir feelslikeC:(CSSDouble * _Nullable)feelslikeC feelslikeF:(CSSDouble * _Nullable)feelslikeF visiMiles:(CSSDouble * _Nullable)visiMiles visiKm:(CSSDouble * _Nullable)visiKm isDay:(CSSInt * _Nullable)isDay cloud:(CSSInt * _Nullable)cloud __attribute__((swift_name("init(condition:tempC:tempF:humidity:windMph:windKph:windDir:feelslikeC:feelslikeF:visiMiles:visiKm:isDay:cloud:)"))) __attribute__((objc_designated_initializer));
- (CSSCurrentWeather *)doCopyCondition:(CSSWeatherCondition * _Nullable)condition tempC:(CSSDouble * _Nullable)tempC tempF:(CSSDouble * _Nullable)tempF humidity:(CSSInt * _Nullable)humidity windMph:(CSSDouble * _Nullable)windMph windKph:(CSSDouble * _Nullable)windKph windDir:(NSString * _Nullable)windDir feelslikeC:(CSSDouble * _Nullable)feelslikeC feelslikeF:(CSSDouble * _Nullable)feelslikeF visiMiles:(CSSDouble * _Nullable)visiMiles visiKm:(CSSDouble * _Nullable)visiKm isDay:(CSSInt * _Nullable)isDay cloud:(CSSInt * _Nullable)cloud __attribute__((swift_name("doCopy(condition:tempC:tempF:humidity:windMph:windKph:windDir:feelslikeC:feelslikeF:visiMiles:visiKm:isDay:cloud:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSSInt * _Nullable cloud __attribute__((swift_name("cloud")));
@property (readonly) CSSWeatherCondition * _Nullable condition __attribute__((swift_name("condition")));
@property (readonly) CSSDouble * _Nullable feelslikeC __attribute__((swift_name("feelslikeC")));
@property (readonly) CSSDouble * _Nullable feelslikeF __attribute__((swift_name("feelslikeF")));
@property (readonly) CSSInt * _Nullable humidity __attribute__((swift_name("humidity")));
@property (readonly) CSSInt * _Nullable isDay __attribute__((swift_name("isDay")));
@property (readonly) CSSDouble * _Nullable tempC __attribute__((swift_name("tempC")));
@property (readonly) CSSDouble * _Nullable tempF __attribute__((swift_name("tempF")));
@property (readonly) CSSDouble * _Nullable visiKm __attribute__((swift_name("visiKm")));
@property (readonly) CSSDouble * _Nullable visiMiles __attribute__((swift_name("visiMiles")));
@property (readonly) NSString * _Nullable windDir __attribute__((swift_name("windDir")));
@property (readonly) CSSDouble * _Nullable windKph __attribute__((swift_name("windKph")));
@property (readonly) CSSDouble * _Nullable windMph __attribute__((swift_name("windMph")));
@end

__attribute__((swift_name("DateLocaleProvider")))
@protocol CSSDateLocaleProvider
@required
- (NSString *)shortWeekDayNameEpochSeconds:(int32_t)epochSeconds __attribute__((swift_name("shortWeekDayName(epochSeconds:)")));
@property (readonly) NSString *localeCode __attribute__((swift_name("localeCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateLocaleProviderImp")))
@interface CSSDateLocaleProviderImp : CSSBase <CSSDateLocaleProvider>
- (instancetype)initWithLocaleCode:(NSString *)localeCode __attribute__((swift_name("init(localeCode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)shortWeekDayNameEpochSeconds:(int32_t)epochSeconds __attribute__((swift_name("shortWeekDayName(epochSeconds:)")));
@property (readonly) NSString *localeCode __attribute__((swift_name("localeCode")));
@end

__attribute__((swift_name("DateUtility")))
@protocol CSSDateUtility
@required
- (NSString *)dayOfWeekFromEpochEpochSeconds:(CSSInt * _Nullable)epochSeconds __attribute__((swift_name("dayOfWeekFromEpoch(epochSeconds:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateUtilityImp")))
@interface CSSDateUtilityImp : CSSBase <CSSDateUtility>
- (instancetype)initWithDateLocaleProvider:(id<CSSDateLocaleProvider>)dateLocaleProvider __attribute__((swift_name("init(dateLocaleProvider:)"))) __attribute__((objc_designated_initializer));
- (NSString *)dayOfWeekFromEpochEpochSeconds:(CSSInt * _Nullable)epochSeconds __attribute__((swift_name("dayOfWeekFromEpoch(epochSeconds:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface CSSGreeting : CSSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol CSSPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface CSSIOSPlatform : CSSBase <CSSPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Remote")))
@protocol CSSRemote
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkWeatherForCityCity:(CSSSearchCityResult *)city completionHandler:(void (^)(CSSRemoteResult<CSSWeatherResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkWeatherForCity(city:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchForCityCity:(NSString *)city completionHandler:(void (^)(CSSRemoteResult<NSArray<CSSSearchCityResult *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchForCity(city:completionHandler:)")));
@property (readonly) CSSRemoteKeys *remoteKeys __attribute__((swift_name("remoteKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteImp")))
@interface CSSRemoteImp : CSSBase <CSSRemote>
- (instancetype)initWithRemoteKeys:(CSSRemoteKeys *)remoteKeys cityRemote:(id<CSSSharedCityScoutRemote>)cityRemote __attribute__((swift_name("init(remoteKeys:cityRemote:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkWeatherForCityCity:(CSSSearchCityResult *)city completionHandler:(void (^)(CSSRemoteResult<CSSWeatherResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkWeatherForCity(city:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchForCityCity:(NSString *)city completionHandler:(void (^)(CSSRemoteResult<NSArray<CSSSearchCityResult *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchForCity(city:completionHandler:)")));
@property (readonly) CSSRemoteKeys *remoteKeys __attribute__((swift_name("remoteKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteKeys")))
@interface CSSRemoteKeys : CSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)remoteKeys __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSSRemoteKeys *shared __attribute__((swift_name("shared")));
@property NSString *rapidApiKey __attribute__((swift_name("rapidApiKey")));
@property NSString *weatherApiKey __attribute__((swift_name("weatherApiKey")));
@end

__attribute__((swift_name("RemoteResult")))
@interface CSSRemoteResult<__covariant T> : CSSBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteResultError")))
@interface CSSRemoteResultError : CSSRemoteResult<CSSKotlinNothing *>
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (CSSRemoteResultError *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteResultSuccess")))
@interface CSSRemoteResultSuccess<T> : CSSRemoteResult<T>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (CSSRemoteResultSuccess<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchCityResult")))
@interface CSSSearchCityResult : CSSBase
- (instancetype)initWithName:(NSString *)name country:(NSString *)country lat:(double)lat lon:(double)lon __attribute__((swift_name("init(name:country:lat:lon:)"))) __attribute__((objc_designated_initializer));
- (CSSSearchCityResult *)doCopyName:(NSString *)name country:(NSString *)country lat:(double)lat lon:(double)lon __attribute__((swift_name("doCopy(name:country:lat:lon:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) double lat __attribute__((swift_name("lat")));
@property (readonly) double lon __attribute__((swift_name("lon")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("SearchCityViewModel")))
@protocol CSSSearchCityViewModel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchCityCity:(NSString *)city completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("searchCity(city:completionHandler:)")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> loading __attribute__((swift_name("loading")));
@property (readonly) id<CSSRemote> remote __attribute__((swift_name("remote")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> searchCityResult __attribute__((swift_name("searchCityResult")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> searchError __attribute__((swift_name("searchError")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchCityViewModelImp")))
@interface CSSSearchCityViewModelImp : CSSBase <CSSSearchCityViewModel>
- (instancetype)initWithRemote:(id<CSSRemote>)remote __attribute__((swift_name("init(remote:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchCityCity:(NSString *)city completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("searchCity(city:completionHandler:)")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> loading __attribute__((swift_name("loading")));
@property (readonly) id<CSSRemote> remote __attribute__((swift_name("remote")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> searchCityResult __attribute__((swift_name("searchCityResult")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> searchError __attribute__((swift_name("searchError")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherAndForecast")))
@interface CSSWeatherAndForecast : CSSBase
- (instancetype)initWithCurrent:(CSSCurrentWeather * _Nullable)current forecast:(CSSWeatherForecast * _Nullable)forecast __attribute__((swift_name("init(current:forecast:)"))) __attribute__((objc_designated_initializer));
- (CSSWeatherAndForecast *)doCopyCurrent:(CSSCurrentWeather * _Nullable)current forecast:(CSSWeatherForecast * _Nullable)forecast __attribute__((swift_name("doCopy(current:forecast:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSSCurrentWeather * _Nullable current __attribute__((swift_name("current")));
@property (readonly) CSSWeatherForecast * _Nullable forecast __attribute__((swift_name("forecast")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherCondition")))
@interface CSSWeatherCondition : CSSBase
- (instancetype)initWithText:(NSString * _Nullable)text icon:(NSString * _Nullable)icon code:(CSSInt * _Nullable)code __attribute__((swift_name("init(text:icon:code:)"))) __attribute__((objc_designated_initializer));
- (CSSWeatherCondition *)doCopyText:(NSString * _Nullable)text icon:(NSString * _Nullable)icon code:(CSSInt * _Nullable)code __attribute__((swift_name("doCopy(text:icon:code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSSInt * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable icon __attribute__((swift_name("icon")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherDay")))
@interface CSSWeatherDay : CSSBase
- (instancetype)initWithDate:(CSSInt * _Nullable)date maxtempC:(CSSDouble * _Nullable)maxtempC maxtempF:(CSSDouble * _Nullable)maxtempF mintempC:(CSSDouble * _Nullable)mintempC mintempF:(CSSDouble * _Nullable)mintempF humidity:(CSSInt * _Nullable)humidity windMph:(CSSDouble * _Nullable)windMph windKph:(CSSDouble * _Nullable)windKph windDir:(NSString * _Nullable)windDir condition:(CSSWeatherCondition * _Nullable)condition __attribute__((swift_name("init(date:maxtempC:maxtempF:mintempC:mintempF:humidity:windMph:windKph:windDir:condition:)"))) __attribute__((objc_designated_initializer));
- (CSSWeatherDay *)doCopyDate:(CSSInt * _Nullable)date maxtempC:(CSSDouble * _Nullable)maxtempC maxtempF:(CSSDouble * _Nullable)maxtempF mintempC:(CSSDouble * _Nullable)mintempC mintempF:(CSSDouble * _Nullable)mintempF humidity:(CSSInt * _Nullable)humidity windMph:(CSSDouble * _Nullable)windMph windKph:(CSSDouble * _Nullable)windKph windDir:(NSString * _Nullable)windDir condition:(CSSWeatherCondition * _Nullable)condition __attribute__((swift_name("doCopy(date:maxtempC:maxtempF:mintempC:mintempF:humidity:windMph:windKph:windDir:condition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSSWeatherCondition * _Nullable condition __attribute__((swift_name("condition")));
@property (readonly) CSSInt * _Nullable date __attribute__((swift_name("date")));
@property (readonly) CSSInt * _Nullable humidity __attribute__((swift_name("humidity")));
@property (readonly) CSSDouble * _Nullable maxtempC __attribute__((swift_name("maxtempC")));
@property (readonly) CSSDouble * _Nullable maxtempF __attribute__((swift_name("maxtempF")));
@property (readonly) CSSDouble * _Nullable mintempC __attribute__((swift_name("mintempC")));
@property (readonly) CSSDouble * _Nullable mintempF __attribute__((swift_name("mintempF")));
@property (readonly) NSString * _Nullable windDir __attribute__((swift_name("windDir")));
@property (readonly) CSSDouble * _Nullable windKph __attribute__((swift_name("windKph")));
@property (readonly) CSSDouble * _Nullable windMph __attribute__((swift_name("windMph")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherForecast")))
@interface CSSWeatherForecast : CSSBase
- (instancetype)initWithForecastday:(NSArray<id> *)forecastday __attribute__((swift_name("init(forecastday:)"))) __attribute__((objc_designated_initializer));
- (CSSWeatherForecast *)doCopyForecastday:(NSArray<id> *)forecastday __attribute__((swift_name("doCopy(forecastday:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *forecastday __attribute__((swift_name("forecastday")));
@end

__attribute__((swift_name("WeatherForecastViewModel")))
@protocol CSSWeatherForecastViewModel
@required
@property (readonly) NSString *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherConditionIcon __attribute__((swift_name("weatherConditionIcon")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherConditionText __attribute__((swift_name("weatherConditionText")));
@property (readonly) CSSWeatherAndForecast * _Nullable weatherForecast __attribute__((swift_name("weatherForecast")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherHumidity __attribute__((swift_name("weatherHumidity")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherMaxTemp __attribute__((swift_name("weatherMaxTemp")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherMinTemp __attribute__((swift_name("weatherMinTemp")));
@property (readonly) id<CSSKotlinx_coroutines_coreStateFlow> weatherWindSpeed __attribute__((swift_name("weatherWindSpeed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherResult")))
@interface CSSWeatherResult : CSSBase
- (instancetype)initWithCity:(NSString *)city country:(NSString *)country lat:(double)lat lon:(double)lon weather:(CSSWeatherAndForecast * _Nullable)weather __attribute__((swift_name("init(city:country:lat:lon:weather:)"))) __attribute__((objc_designated_initializer));
- (CSSWeatherResult *)doCopyCity:(NSString *)city country:(NSString *)country lat:(double)lat lon:(double)lon weather:(CSSWeatherAndForecast * _Nullable)weather __attribute__((swift_name("doCopy(city:country:lat:lon:weather:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) double lat __attribute__((swift_name("lat")));
@property (readonly) double lon __attribute__((swift_name("lon")));
@property (readonly) CSSWeatherAndForecast * _Nullable weather __attribute__((swift_name("weather")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateLocale_iosKt")))
@interface CSSDateLocale_iosKt : CSSBase
+ (NSString *)deviceLocaleTag __attribute__((swift_name("deviceLocaleTag()")));
+ (NSString *)localizedShortWeekDayNameEpochSeconds:(int32_t)epochSeconds localeCode:(NSString *)localeCode __attribute__((swift_name("localizedShortWeekDayName(epochSeconds:localeCode:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceLocale_iosKt")))
@interface CSSDeviceLocale_iosKt : CSSBase
+ (BOOL)isImperialLocale __attribute__((swift_name("isImperialLocale()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface CSSPlatform_iosKt : CSSBase
+ (id<CSSPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface CSSKotlinThrowable : CSSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (CSSKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSSKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface CSSKotlinException : CSSKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface CSSKotlinRuntimeException : CSSKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CSSKotlinIllegalStateException : CSSKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface CSSKotlinCancellationException : CSSKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol CSSKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<CSSKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol CSSKotlinx_coroutines_coreSharedFlow <CSSKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol CSSKotlinx_coroutines_coreStateFlow <CSSKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("SharedCityScoutRemote")))
@protocol CSSSharedCityScoutRemote
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCityWeatherCity:(CSSSharedCity *)city completionHandler:(void (^)(CSSSharedCityScoutRemoteResult<CSSSharedWeather *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCityWeather(city:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchForCityQuery:(NSString *)query completionHandler:(void (^)(CSSSharedCityScoutRemoteResult<NSArray<CSSSharedCity *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchForCity(query:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CSSKotlinNothing : CSSBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CSSKotlinArray<T> : CSSBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CSSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CSSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol CSSKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedCity")))
@interface CSSSharedCity : CSSBase
- (instancetype)initWithId:(CSSInt * _Nullable)id wikiDataId:(NSString * _Nullable)wikiDataId type:(NSString * _Nullable)type city:(NSString * _Nullable)city name:(NSString * _Nullable)name country:(NSString * _Nullable)country countryCode:(NSString * _Nullable)countryCode region:(NSString * _Nullable)region regionCode:(NSString * _Nullable)regionCode regionWdId:(NSString * _Nullable)regionWdId latitude:(CSSDouble * _Nullable)latitude longitude:(CSSDouble * _Nullable)longitude population:(CSSInt * _Nullable)population __attribute__((swift_name("init(id:wikiDataId:type:city:name:country:countryCode:region:regionCode:regionWdId:latitude:longitude:population:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSSSharedCityCompanion *companion __attribute__((swift_name("companion")));
- (CSSSharedCity *)doCopyId:(CSSInt * _Nullable)id wikiDataId:(NSString * _Nullable)wikiDataId type:(NSString * _Nullable)type city:(NSString * _Nullable)city name:(NSString * _Nullable)name country:(NSString * _Nullable)country countryCode:(NSString * _Nullable)countryCode region:(NSString * _Nullable)region regionCode:(NSString * _Nullable)regionCode regionWdId:(NSString * _Nullable)regionWdId latitude:(CSSDouble * _Nullable)latitude longitude:(CSSDouble * _Nullable)longitude population:(CSSInt * _Nullable)population __attribute__((swift_name("doCopy(id:wikiDataId:type:city:name:country:countryCode:region:regionCode:regionWdId:latitude:longitude:population:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable city __attribute__((swift_name("city")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));
@property (readonly) CSSInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) CSSDouble * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) CSSDouble * _Nullable longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) CSSInt * _Nullable population __attribute__((swift_name("population")));
@property (readonly) NSString * _Nullable region __attribute__((swift_name("region")));
@property (readonly) NSString * _Nullable regionCode __attribute__((swift_name("regionCode")));
@property (readonly) NSString * _Nullable regionWdId __attribute__((swift_name("regionWdId")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable wikiDataId __attribute__((swift_name("wikiDataId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedWeather")))
@interface CSSSharedWeather : CSSBase
- (instancetype)initWithLocation:(CSSSharedLocation * _Nullable)location current:(CSSSharedCurrent * _Nullable)current forecast:(CSSSharedForecast * _Nullable)forecast __attribute__((swift_name("init(location:current:forecast:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSSSharedWeatherCompanion *companion __attribute__((swift_name("companion")));
- (CSSSharedWeather *)doCopyLocation:(CSSSharedLocation * _Nullable)location current:(CSSSharedCurrent * _Nullable)current forecast:(CSSSharedForecast * _Nullable)forecast __attribute__((swift_name("doCopy(location:current:forecast:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSSSharedCurrent * _Nullable current __attribute__((swift_name("current")));
@property (readonly) CSSSharedForecast * _Nullable forecast __attribute__((swift_name("forecast")));
@property (readonly) CSSSharedLocation * _Nullable location __attribute__((swift_name("location")));
@end


/**
 * Outcome of [CityScoutRemote] operations: [Success] with payload [T], or [Failure] with [CityScoutRemoteError].
 */
__attribute__((swift_name("SharedCityScoutRemoteResult")))
@interface CSSSharedCityScoutRemoteResult<__covariant T> : CSSBase
- (CSSSharedCityScoutRemoteResultFailure * _Nullable)failureOrNull __attribute__((swift_name("failureOrNull()")));
- (T _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (CSSSharedCityScoutRemoteResult<T> *)onFailureAction:(void (^)(CSSSharedCityScoutRemoteResultFailure *))action __attribute__((swift_name("onFailure(action:)")));
- (CSSSharedCityScoutRemoteResult<T> *)onSuccessAction:(void (^)(T _Nullable))action __attribute__((swift_name("onSuccess(action:)")));
@property (readonly) BOOL isFailure __attribute__((swift_name("isFailure")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol CSSKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedCity.Companion")))
@interface CSSSharedCityCompanion : CSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSSSharedCityCompanion *shared __attribute__((swift_name("shared")));
- (id<CSSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedLocation")))
@interface CSSSharedLocation : CSSBase
- (instancetype)initWithName:(NSString * _Nullable)name region:(NSString * _Nullable)region country:(NSString * _Nullable)country lat:(CSSDouble * _Nullable)lat lon:(CSSDouble * _Nullable)lon tzId:(NSString * _Nullable)tzId localtimeEpoch:(CSSInt * _Nullable)localtimeEpoch localtime:(NSString * _Nullable)localtime __attribute__((swift_name("init(name:region:country:lat:lon:tzId:localtimeEpoch:localtime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSSSharedLocationCompanion *companion __attribute__((swift_name("companion")));
- (CSSSharedLocation *)doCopyName:(NSString * _Nullable)name region:(NSString * _Nullable)region country:(NSString * _Nullable)country lat:(CSSDouble * _Nullable)lat lon:(CSSDouble * _Nullable)lon tzId:(NSString * _Nullable)tzId localtimeEpoch:(CSSInt * _Nullable)localtimeEpoch localtime:(NSString * _Nullable)localtime __attribute__((swift_name("doCopy(name:region:country:lat:lon:tzId:localtimeEpoch:localtime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) CSSDouble * _Nullable lat __attribute__((swift_name("lat")));
@property (readonly) NSString * _Nullable localtime __attribute__((swift_name("localtime")));
@property (readonly) CSSInt * _Nullable localtimeEpoch __attribute__((swift_name("localtimeEpoch")));
@property (readonly) CSSDouble * _Nullable lon __attribute__((swift_name("lon")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable region __attribute__((swift_name("region")));
@property (readonly) NSString * _Nullable tzId __attribute__((swift_name("tzId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedCurrent")))
@interface CSSSharedCurrent : CSSBase
- (instancetype)initWithLastUpdatedEpoch:(CSSInt * _Nullable)lastUpdatedEpoch lastUpdated:(NSString * _Nullable)lastUpdated tempC:(CSSDouble * _Nullable)tempC tempF:(CSSDouble * _Nullable)tempF isDay:(CSSInt * _Nullable)isDay condition:(CSSSharedCondition * _Nullable)condition windMph:(CSSDouble * _Nullable)windMph windKph:(CSSDouble * _Nullable)windKph windDegree:(CSSInt * _Nullable)windDegree windDir:(NSString * _Nullable)windDir pressureMb:(CSSDouble * _Nullable)pressureMb pressureIn:(CSSDouble * _Nullable)pressureIn precipMm:(CSSDouble * _Nullable)precipMm precipIn:(CSSDouble * _Nullable)precipIn humidity:(CSSInt * _Nullable)humidity cloud:(CSSInt * _Nullable)cloud feelslikeC:(CSSDouble * _Nullable)feelslikeC feelslikeF:(CSSDouble * _Nullable)feelslikeF windchillC:(CSSDouble * _Nullable)windchillC windchillF:(CSSDouble * _Nullable)windchillF heatindexC:(CSSDouble * _Nullable)heatindexC heatindexF:(CSSDouble * _Nullable)heatindexF dewpointC:(CSSDouble * _Nullable)dewpointC dewpointF:(CSSDouble * _Nullable)dewpointF visKm:(CSSDouble * _Nullable)visKm visMiles:(CSSDouble * _Nullable)visMiles uv:(CSSDouble * _Nullable)uv gustMph:(CSSDouble * _Nullable)gustMph gustKph:(CSSDouble * _Nullable)gustKph shortRad:(CSSDouble * _Nullable)shortRad diffRad:(CSSDouble * _Nullable)diffRad dni:(CSSDouble * _Nullable)dni gti:(CSSDouble * _Nullable)gti __attribute__((swift_name("init(lastUpdatedEpoch:lastUpdated:tempC:tempF:isDay:condition:windMph:windKph:windDegree:windDir:pressureMb:pressureIn:precipMm:precipIn:humidity:cloud:feelslikeC:feelslikeF:windchillC:windchillF:heatindexC:heatindexF:dewpointC:dewpointF:visKm:visMiles:uv:gustMph:gustKph:shortRad:diffRad:dni:gti:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSSSharedCurrentCompanion *companion __attribute__((swift_name("companion")));
- (CSSSharedCurrent *)doCopyLastUpdatedEpoch:(CSSInt * _Nullable)lastUpdatedEpoch lastUpdated:(NSString * _Nullable)lastUpdated tempC:(CSSDouble * _Nullable)tempC tempF:(CSSDouble * _Nullable)tempF isDay:(CSSInt * _Nullable)isDay condition:(CSSSharedCondition * _Nullable)condition windMph:(CSSDouble * _Nullable)windMph windKph:(CSSDouble * _Nullable)windKph windDegree:(CSSInt * _Nullable)windDegree windDir:(NSString * _Nullable)windDir pressureMb:(CSSDouble * _Nullable)pressureMb pressureIn:(CSSDouble * _Nullable)pressureIn precipMm:(CSSDouble * _Nullable)precipMm precipIn:(CSSDouble * _Nullable)precipIn humidity:(CSSInt * _Nullable)humidity cloud:(CSSInt * _Nullable)cloud feelslikeC:(CSSDouble * _Nullable)feelslikeC feelslikeF:(CSSDouble * _Nullable)feelslikeF windchillC:(CSSDouble * _Nullable)windchillC windchillF:(CSSDouble * _Nullable)windchillF heatindexC:(CSSDouble * _Nullable)heatindexC heatindexF:(CSSDouble * _Nullable)heatindexF dewpointC:(CSSDouble * _Nullable)dewpointC dewpointF:(CSSDouble * _Nullable)dewpointF visKm:(CSSDouble * _Nullable)visKm visMiles:(CSSDouble * _Nullable)visMiles uv:(CSSDouble * _Nullable)uv gustMph:(CSSDouble * _Nullable)gustMph gustKph:(CSSDouble * _Nullable)gustKph shortRad:(CSSDouble * _Nullable)shortRad diffRad:(CSSDouble * _Nullable)diffRad dni:(CSSDouble * _Nullable)dni gti:(CSSDouble * _Nullable)gti __attribute__((swift_name("doCopy(lastUpdatedEpoch:lastUpdated:tempC:tempF:isDay:condition:windMph:windKph:windDegree:windDir:pressureMb:pressureIn:precipMm:precipIn:humidity:cloud:feelslikeC:feelslikeF:windchillC:windchillF:heatindexC:heatindexF:dewpointC:dewpointF:visKm:visMiles:uv:gustMph:gustKph:shortRad:diffRad:dni:gti:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSSInt * _Nullable cloud __attribute__((swift_name("cloud")));
@property (readonly) CSSSharedCondition * _Nullable condition __attribute__((swift_name("condition")));
@property (readonly) CSSDouble * _Nullable dewpointC __attribute__((swift_name("dewpointC")));
@property (readonly) CSSDouble * _Nullable dewpointF __attribute__((swift_name("dewpointF")));
@property (readonly) CSSDouble * _Nullable diffRad __attribute__((swift_name("diffRad")));
@property (readonly) CSSDouble * _Nullable dni __attribute__((swift_name("dni")));
@property (readonly) CSSDouble * _Nullable feelslikeC __attribute__((swift_name("feelslikeC")));
@property (readonly) CSSDouble * _Nullable feelslikeF __attribute__((swift_name("feelslikeF")));
@property (readonly) CSSDouble * _Nullable gti __attribute__((swift_name("gti")));
@property (readonly) CSSDouble * _Nullable gustKph __attribute__((swift_name("gustKph")));
@property (readonly) CSSDouble * _Nullable gustMph __attribute__((swift_name("gustMph")));
@property (readonly) CSSDouble * _Nullable heatindexC __attribute__((swift_name("heatindexC")));
@property (readonly) CSSDouble * _Nullable heatindexF __attribute__((swift_name("heatindexF")));
@property (readonly) CSSInt * _Nullable humidity __attribute__((swift_name("humidity")));
@property (readonly) CSSInt * _Nullable isDay __attribute__((swift_name("isDay")));
@property (readonly) NSString * _Nullable lastUpdated __attribute__((swift_name("lastUpdated")));
@property (readonly) CSSInt * _Nullable lastUpdatedEpoch __attribute__((swift_name("lastUpdatedEpoch")));
@property (readonly) CSSDouble * _Nullable precipIn __attribute__((swift_name("precipIn")));
@property (readonly) CSSDouble * _Nullable precipMm __attribute__((swift_name("precipMm")));
@property (readonly) CSSDouble * _Nullable pressureIn __attribute__((swift_name("pressureIn")));
@property (readonly) CSSDouble * _Nullable pressureMb __attribute__((swift_name("pressureMb")));
@property (readonly) CSSDouble * _Nullable shortRad __attribute__((swift_name("shortRad")));
@property (readonly) CSSDouble * _Nullable tempC __attribute__((swift_name("tempC")));
@property (readonly) CSSDouble * _Nullable tempF __attribute__((swift_name("tempF")));
@property (readonly) CSSDouble * _Nullable uv __attribute__((swift_name("uv")));
@property (readonly) CSSDouble * _Nullable visKm __attribute__((swift_name("visKm")));
@property (readonly) CSSDouble * _Nullable visMiles __attribute__((swift_name("visMiles")));
@property (readonly) CSSInt * _Nullable windDegree __attribute__((swift_name("windDegree")));
@property (readonly) NSString * _Nullable windDir __attribute__((swift_name("windDir")));
@property (readonly) CSSDouble * _Nullable windKph __attribute__((swift_name("windKph")));
@property (readonly) CSSDouble * _Nullable windMph __attribute__((swift_name("windMph")));
@property (readonly) CSSDouble * _Nullable windchillC __attribute__((swift_name("windchillC")));
@property (readonly) CSSDouble * _Nullable windchillF __attribute__((swift_name("windchillF")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedForecast")))
@interface CSSSharedForecast : CSSBase
- (instancetype)initWithForecastday:(NSArray<id> *)forecastday __attribute__((swift_name("init(forecastday:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSSSharedForecastCompanion *companion __attribute__((swift_name("companion")));
- (CSSSharedForecast *)doCopyForecastday:(NSArray<id> *)forecastday __attribute__((swift_name("doCopy(forecastday:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *forecastday __attribute__((swift_name("forecastday")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedWeather.Companion")))
@interface CSSSharedWeatherCompanion : CSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSSSharedWeatherCompanion *shared __attribute__((swift_name("shared")));
- (id<CSSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedCityScoutRemoteResultFailure")))
@interface CSSSharedCityScoutRemoteResultFailure : CSSSharedCityScoutRemoteResult<CSSKotlinNothing *>
- (instancetype)initWithError:(CSSSharedCityScoutRemoteError *)error cause:(CSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(error:cause:)"))) __attribute__((objc_designated_initializer));
- (CSSSharedCityScoutRemoteResultFailure *)doCopyError:(CSSSharedCityScoutRemoteError *)error cause:(CSSKotlinThrowable * _Nullable)cause __attribute__((swift_name("doCopy(error:cause:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSSKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) CSSSharedCityScoutRemoteError *error __attribute__((swift_name("error")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol CSSKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<CSSKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CSSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol CSSKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CSSKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<CSSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol CSSKotlinx_serialization_coreKSerializer <CSSKotlinx_serialization_coreSerializationStrategy, CSSKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedLocation.Companion")))
@interface CSSSharedLocationCompanion : CSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSSSharedLocationCompanion *shared __attribute__((swift_name("shared")));
- (id<CSSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedCondition")))
@interface CSSSharedCondition : CSSBase
- (instancetype)initWithText:(NSString * _Nullable)text icon:(NSString * _Nullable)icon code:(CSSInt * _Nullable)code __attribute__((swift_name("init(text:icon:code:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSSSharedConditionCompanion *companion __attribute__((swift_name("companion")));
- (CSSSharedCondition *)doCopyText:(NSString * _Nullable)text icon:(NSString * _Nullable)icon code:(CSSInt * _Nullable)code __attribute__((swift_name("doCopy(text:icon:code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSSInt * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable icon __attribute__((swift_name("icon")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedCurrent.Companion")))
@interface CSSSharedCurrentCompanion : CSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSSSharedCurrentCompanion *shared __attribute__((swift_name("shared")));
- (id<CSSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedForecast.Companion")))
@interface CSSSharedForecastCompanion : CSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSSSharedForecastCompanion *shared __attribute__((swift_name("shared")));
- (id<CSSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol CSSKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface CSSKotlinEnum<E> : CSSBase <CSSKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSSKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedCityScoutRemoteError")))
@interface CSSSharedCityScoutRemoteError : CSSKotlinEnum<CSSSharedCityScoutRemoteError *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSSSharedCityScoutRemoteError *blankquery __attribute__((swift_name("blankquery")));
@property (class, readonly) CSSSharedCityScoutRemoteError *missinglocationquery __attribute__((swift_name("missinglocationquery")));
@property (class, readonly) CSSSharedCityScoutRemoteError *unauthorized __attribute__((swift_name("unauthorized")));
@property (class, readonly) CSSSharedCityScoutRemoteError *forbidden __attribute__((swift_name("forbidden")));
@property (class, readonly) CSSSharedCityScoutRemoteError *notfound __attribute__((swift_name("notfound")));
@property (class, readonly) CSSSharedCityScoutRemoteError *ratelimited __attribute__((swift_name("ratelimited")));
@property (class, readonly) CSSSharedCityScoutRemoteError *badrequest __attribute__((swift_name("badrequest")));
@property (class, readonly) CSSSharedCityScoutRemoteError *servererror __attribute__((swift_name("servererror")));
@property (class, readonly) CSSSharedCityScoutRemoteError *httperror __attribute__((swift_name("httperror")));
@property (class, readonly) CSSSharedCityScoutRemoteError *deserializationerror __attribute__((swift_name("deserializationerror")));
@property (class, readonly) CSSSharedCityScoutRemoteError *networkerror __attribute__((swift_name("networkerror")));
@property (class, readonly) CSSSharedCityScoutRemoteError *timeout __attribute__((swift_name("timeout")));
@property (class, readonly) CSSSharedCityScoutRemoteError *unknownerror __attribute__((swift_name("unknownerror")));
+ (CSSKotlinArray<CSSSharedCityScoutRemoteError *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSSSharedCityScoutRemoteError *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol CSSKotlinx_serialization_coreEncoder
@required
- (id<CSSKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<CSSKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<CSSKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<CSSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CSSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) CSSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol CSSKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<CSSKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CSSKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<CSSKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) CSSKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol CSSKotlinx_serialization_coreDecoder
@required
- (id<CSSKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<CSSKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (CSSKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CSSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CSSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) CSSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedCondition.Companion")))
@interface CSSSharedConditionCompanion : CSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSSSharedConditionCompanion *shared __attribute__((swift_name("shared")));
- (id<CSSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface CSSKotlinEnumCompanion : CSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSSKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol CSSKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<CSSKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CSSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CSSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) CSSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface CSSKotlinx_serialization_coreSerializersModule : CSSBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<CSSKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CSSKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<CSSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<CSSKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CSSKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CSSKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CSSKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CSSKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol CSSKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface CSSKotlinx_serialization_coreSerialKind : CSSBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol CSSKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<CSSKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CSSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CSSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<CSSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) CSSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol CSSKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<CSSKotlinKClass>)kClass provider:(id<CSSKotlinx_serialization_coreKSerializer> (^)(NSArray<id<CSSKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<CSSKotlinKClass>)kClass serializer:(id<CSSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CSSKotlinKClass>)baseClass actualClass:(id<CSSKotlinKClass>)actualClass actualSerializer:(id<CSSKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<CSSKotlinKClass>)baseClass defaultDeserializerProvider:(id<CSSKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<CSSKotlinKClass>)baseClass defaultDeserializerProvider:(id<CSSKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<CSSKotlinKClass>)baseClass defaultSerializerProvider:(id<CSSKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CSSKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CSSKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol CSSKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol CSSKotlinKClass <CSSKotlinKDeclarationContainer, CSSKotlinKAnnotatedElement, CSSKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
