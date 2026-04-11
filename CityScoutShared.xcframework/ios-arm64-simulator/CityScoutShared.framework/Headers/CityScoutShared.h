#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CSSCityScoutFactory, CSSCurrentWeather, CSSKotlinArray<T>, CSSKotlinException, CSSKotlinIllegalStateException, CSSKotlinNothing, CSSKotlinRuntimeException, CSSKotlinThrowable, CSSRemoteKeys, CSSRemoteResult<__covariant T>, CSSRemoteResultError, CSSRemoteResultSuccess<T>, CSSSearchCityResult, CSSWeatherAndForecast, CSSWeatherCondition, CSSWeatherDay, CSSWeatherForecast, CSSWeatherResult;

@protocol CSSCityWeatherViewModel, CSSKotlinIterator, CSSKotlinx_coroutines_coreFlow, CSSKotlinx_coroutines_coreFlowCollector, CSSKotlinx_coroutines_coreSharedFlow, CSSKotlinx_coroutines_coreStateFlow, CSSPlatform, CSSRemote, CSSSearchCityViewModel;

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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CityScoutFactory")))
@interface CSSCityScoutFactory : CSSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cityScoutFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSSCityScoutFactory *shared __attribute__((swift_name("shared")));
- (id<CSSSearchCityViewModel>)creatSearchCityViewModelRemote:(id<CSSRemote>)remote __attribute__((swift_name("creatSearchCityViewModel(remote:)")));
- (id<CSSRemote>)createRemoteRemoteKeys:(CSSRemoteKeys *)remoteKeys __attribute__((swift_name("createRemote(remoteKeys:)")));
- (id<CSSCityWeatherViewModel>)createWeatherViewModelRemote:(id<CSSRemote>)remote __attribute__((swift_name("createWeatherViewModel(remote:)")));
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

__attribute__((swift_name("DateUtility")))
@protocol CSSDateUtility
@required
- (NSString *)dayOfWeekFromEpochEpochSeconds:(CSSInt * _Nullable)epochSeconds __attribute__((swift_name("dayOfWeekFromEpoch(epochSeconds:)")));
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

__attribute__((swift_name("KotlinIterator")))
@protocol CSSKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
