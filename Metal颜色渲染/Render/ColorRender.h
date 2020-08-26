//
//  ColorRender.h
//  Metal颜色渲染
//
//  Created by nucarf on 2020/8/25.
//  Copyright © 2020 zhaixingxing. All rights reserved.
//

#import <Foundation/Foundation.h>

@import MetalKit;

/*
 分开你的渲染循环:
    在我们开发Metal 程序时,将渲染循环分为自己创建的类,是非常有用的一种方式,使用单独的类,我们可以更好管理初始化Metal,以及Metal视图委托.
 
 在MTKViewDelegate 协议中有2个方法.
 - (void)mtkView:(nonnull MTKView *)view drawableSizeWillChange:(CGSize)size;
 
    1.每当窗口大小变化或者重新布局(设备方向更改)时,视图就会调用此方法.
    2.视图可以根据视图属性上设置View.preferredFramesPerSecond帧速率(指定时间来调用drawInMTKView方法),
 
- (void)drawInMTKView:(nonnull MTKView *)view;
    以上的方法,每当视图需要渲染时调用
 */

NS_ASSUME_NONNULL_BEGIN

@interface ColorRender : NSObject<MTKViewDelegate>



- (instancetype)initWithMTKView:(MTKView *)mtkView;

@end

NS_ASSUME_NONNULL_END
