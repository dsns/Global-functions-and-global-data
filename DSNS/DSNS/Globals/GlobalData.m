
#import <Cocoa/Cocoa.h>
#import <ApplicationServices/ApplicationServices.h>
#import "GlobalData.h"
@implementation GlobalData
@synthesize message;
static GlobalData *sharedGlobalData = nil;
+ (GlobalData*)sharedGlobalData {if (sharedGlobalData == nil) {sharedGlobalData = [[super allocWithZone:NULL] init];sharedGlobalData.message = @"Default Global Message";}return sharedGlobalData;}
+ (id)allocWithZone:(NSZone *)zone {@synchronized(self){if (sharedGlobalData == nil){sharedGlobalData = [super allocWithZone:zone];return sharedGlobalData;}}return nil;}
- (id)copyWithZone:(NSZone *)zone {    return self;}



- (void)myFunc { // [[GlobalData sharedGlobalData] myFunc];
    self.message = @"Some Random Text";
    NSAlert *alert = [[NSAlert alloc] init];
    [alert addButtonWithTitle:@"OK"];
    [alert setMessageText:@"myFunc"];
    [alert runModal];
}
@end
