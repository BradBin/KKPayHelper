//
//  KKPayManager.m
//  KKPayHelper
//
//  Created by 尤彬 on 2019/5/15.
//

#import "KKPayManager.h"

@interface KKPayManager ()
@property (nonatomic,assign) BOOL isDebug;
@property (nonatomic,strong) KKPayMent *payMent;

@end

@implementation KKPayManager
- (instancetype)init
{
    self = [super init];
    if (self) {
        _isDebug = false;
    }
    return self;
}

+(instancetype)shared{
    static KKPayManager *_instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _instance = [[[self class] alloc] init];
    });
    return _instance;
}

-(void)setDebugEnabled:(BOOL)enable{
      _isDebug = enable;
}

-(BOOL)handleOpenURL:(NSURL *)url{
    return true;
}

-(BOOL)handleOpenURL:(NSURL *)url sourceApplication:(NSString *)application{
    return true;
}

@end
