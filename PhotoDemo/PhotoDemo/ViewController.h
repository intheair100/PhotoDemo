//
//  ViewController.h
//  PhotoDemo
//
//  Created by zp on 15/5/8.
//  Copyright (c) 2015年 zp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate>
@property (weak, nonatomic) IBOutlet UIImageView *photoImage;
- (IBAction)photoFromCamera:(id)sender;
- (IBAction)photoFromAlbum:(id)sender;

@end
