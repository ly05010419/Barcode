//
//  QRCodeDecodeViewController.h
//  Barcode
//
//  Created by Stefan Hafeneger on 24.07.08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "QRCodeEngine.h"

@interface QRCodeDecodeViewController : UIViewController <UIScrollViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, QRCodeEngineDelegate> {
	QRCodeEngine *_qrCodeEngine;
	UIImage *_image;
	NSString *_result;
	UIImageView *_imageView;
	BOOL _activity, _saved;
	IBOutlet UIScrollView *scrollView;
	IBOutlet UIButton *buttonDecode, *buttonCancel;
	IBOutlet UITextView *textView;
	IBOutlet UIView *activityOverlayView;
	IBOutlet UIActivityIndicatorView *activityIndicatorView;
	IBOutlet UILabel *activityLabel;
	IBOutlet UIToolbar *toolbar;
	IBOutlet UIBarButtonItem *barButtonCamera, *barButtonLibrary, *barButtonOrganize, *barButtonAction;
}
#pragma mark IBAction
- (IBAction)decodeImage:(id)sender;
- (IBAction)cancelDecode:(id)sender;
- (IBAction)pickImageFromCamera:(id)sender;
- (IBAction)pickImageFromLibrary:(id)sender;
- (IBAction)organizeResult:(id)sender;
- (IBAction)showActionPanel:(id)sender;
@end
