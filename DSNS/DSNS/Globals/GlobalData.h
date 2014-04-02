#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
@interface GlobalData : NSObject {
    NSString *message; // global variable
     GlobalData *sharedGlobalData;
}
@property (nonatomic, retain) NSString *message;
+ (GlobalData*)sharedGlobalData;
- (void) myFunc;
@end