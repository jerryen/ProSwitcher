#import <UIKit/UIKit.h>

@interface PSWPageScrollView : UIScrollView {
@private
	BOOL _shouldScrollOnUp;
	BOOL _doubleTapped;
}

@property (nonatomic, readwrite) BOOL doubleTapped;

@end
