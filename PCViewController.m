//
//  PCViewController.m
//  Safe Flight
//
//  Created by Kevin McReady on 10/1/14.
//  Copyright (c) 2014 Epiphany!. All rights reserved.
//

#import "PCViewController.h"

@interface PCViewController ()

@end

@implementation PCViewController

- (void)viewDidLoad
{
    HighScoreNumber = [[NSUserDefaults standardUserDefaults] integerForKey:@"HighScoreSaved"];
    HighScore.text = [NSString stringWithFormat:@"High Score: %li", (long)HighScoreNumber];
    
    bannerView_ = [[GADBannerView alloc] initWithFrame:CGRectMake(0, 20, 320, 50)];
    
    bannerView_.adUnitID = @"ca-app-pub-3336997130086535/6407510203";
    
    bannerView_.rootViewController = self;
    
    [self.view addSubview:bannerView_];
    
    [bannerView_ loadRequest:[GADRequest request]];
    
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
