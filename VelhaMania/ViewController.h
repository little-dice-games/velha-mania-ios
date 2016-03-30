//
//  ViewController.h
//  VelhaMania
//
//  Created by Leonardo Tegon on 3/29/16.
//  Copyright © 2016 LittleDiceGames. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIWebViewDelegate>
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;

@end

