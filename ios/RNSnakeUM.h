#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNSnakeUM : NSObject

+ (instancetype)shared;
- (void)setUMengKey:(NSString *)umkey umChannel:(NSString *)umChannel withOptions:(NSDictionary *)launchOptions;

@end

NS_ASSUME_NONNULL_END
