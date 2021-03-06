//
//  UINavigationBar+Helper.m
//  AFNetworking
//
//  Created by Itumeleng Mabote on 2018/06/01.
//

#import "UINavigationBar+Helper.h"

@implementation UINavigationBar (Helper)

- (void)setBottomBorderColor:(UIColor *)color height:(CGFloat)height {
    CGRect bottomBorderRect = CGRectMake(0, CGRectGetHeight(self.frame), CGRectGetWidth(self.frame), height);
    UIView *bottomBorder = [[UIView alloc] initWithFrame:bottomBorderRect];
    [bottomBorder setBackgroundColor:color];
    bottomBorder.tag = 576;
    [self addSubview:bottomBorder];
}

- (void)removeBottomBorder {
    [[self viewWithTag:576] removeFromSuperview];
}
@end
