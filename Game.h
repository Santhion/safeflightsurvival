//
//  Game.h
//  Safe Flight
//
//  Created by Kevin McReady on 10/1/14.
//  Copyright (c) 2014 Epiphany!. All rights reserved.
//

#import <UIKit/UIKit.h>

int ShipFlight;
int RandomTopTunnelPosition;
int RandomBottomTunnelPosition;
int ScoreNumber;
NSInteger HighScoreNumber;

@interface Game : UIViewController
{
    
    IBOutlet UIImageView *Ship;
    IBOutlet UIButton *StartGame;
    IBOutlet UIImageView *TunnelTop;
    IBOutlet UIImageView *TunnelBottom;
    IBOutlet UIImageView *Top;
    IBOutlet UIImageView *Bottom;
    IBOutlet UIButton *Exit;
    IBOutlet UILabel *ScoreLabel;
    
    NSTimer *ShipMovement;
    NSTimer *TunnelMovement;
    
    
}

-(IBAction)StartGame:(id)sender;
-(void)ShipMoving;
-(void)TunnelMoving;
-(void)PlaceTunnels;
-(void)Score;
-(void)GameOver;


@end
