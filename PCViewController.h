#import <UIKit/UIKit.h>
#import <iAd/iAd.h>
#import "GADBannerView.h"

NSInteger HighScoreNumber;

@interface PCViewController : UIViewController <ADBannerViewDelegate>
{
    GADBannerView *bannerView_;
    IBOutlet UILabel *HighScore;
}

@end
