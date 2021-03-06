
//  Created by mxt on 2017/12/5.
//  Copyright © 2017年 mxt. All rights reserved.
//

#ifndef LXAVPlayer_h
#define LXAVPlayer_h

typedef void (^GetSlideValue) (CGFloat value);

typedef void (^Panbegin) ();

typedef void (^PanEnd) (CGFloat value);

typedef void (^TapSlider) (CGFloat value);

typedef void (^BackBlock)();

#import "MTAVPlayView.h"
#import "LXAVPlayControllView.h"
#import "MTPlayModel.h"
#import "LXSlider.h"
#import "LXPlayLoadingView.h"
#import "UIImage+LXAVPlayer.h"
#import "UIViewController+LXPlayerRotation.h"
#import "UIWindow+LXCurrentViewController.h"
#import "UINavigationController+LXPlayerRotation.h"
#import "UITabBarController+LXPlayerRotation.h"
#endif /* LXAVPlayer_h */
