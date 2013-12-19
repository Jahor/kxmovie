//
//  KxDDLog.h
//  kxmovie
//
//  Created by Egor Leonenko on 19/12/13.
//
//
#import "DDLog.h"

#define KxLoggingContext                     0x706A9368

extern const int ddLogLevel;

#define KxDDLogError(frmt, ...)   LOG_OBJC_MAYBE(LOG_ASYNC_ERROR,   LOG_LEVEL_DEF, LOG_FLAG_ERROR,   KxLoggingContext, frmt, ##__VA_ARGS__)
#define KxDDLogWarn(frmt, ...)    LOG_OBJC_MAYBE(LOG_ASYNC_WARN,    LOG_LEVEL_DEF, LOG_FLAG_WARN,    KxLoggingContext, frmt, ##__VA_ARGS__)
#define KxDDLogInfo(frmt, ...)    LOG_OBJC_MAYBE(LOG_ASYNC_INFO,    LOG_LEVEL_DEF, LOG_FLAG_INFO,    KxLoggingContext, frmt, ##__VA_ARGS__)
#define KxDDLogDebug(frmt, ...)   LOG_OBJC_MAYBE(LOG_ASYNC_DEBUG,   LOG_LEVEL_DEF, LOG_FLAG_DEBUG,   KxLoggingContext, frmt, ##__VA_ARGS__)
#define KxDDLogVerbose(frmt, ...) LOG_OBJC_MAYBE(LOG_ASYNC_VERBOSE, LOG_LEVEL_DEF, LOG_FLAG_VERBOSE, KxLoggingContext, frmt, ##__VA_ARGS__)

#define KxDDLogCError(frmt, ...)   LOG_C_MAYBE(LOG_ASYNC_ERROR,   LOG_LEVEL_DEF, LOG_FLAG_ERROR,   KxLoggingContext, frmt, ##__VA_ARGS__)
#define KxDDLogCWarn(frmt, ...)    LOG_C_MAYBE(LOG_ASYNC_WARN,    LOG_LEVEL_DEF, LOG_FLAG_WARN,    KxLoggingContext, frmt, ##__VA_ARGS__)
#define KxDDLogCInfo(frmt, ...)    LOG_C_MAYBE(LOG_ASYNC_INFO,    LOG_LEVEL_DEF, LOG_FLAG_INFO,    KxLoggingContext, frmt, ##__VA_ARGS__)
#define KxDDLogCDebug(frmt, ...)   LOG_C_MAYBE(LOG_ASYNC_DEBUG,   LOG_LEVEL_DEF, LOG_FLAG_DEBUG,   KxLoggingContext, frmt, ##__VA_ARGS__)
#define KxDDLogCVerbose(frmt, ...) LOG_C_MAYBE(LOG_ASYNC_VERBOSE, LOG_LEVEL_DEF, LOG_FLAG_VERBOSE, KxLoggingContext, frmt, ##__VA_ARGS__)