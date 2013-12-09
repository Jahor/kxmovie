//
//  ViewController.h
//  kxmovieapp
//
//  Created by Kolyvan on 11.10.12.
//  Copyright (c) 2012 Konstantin Boukreev . All rights reserved.
//
//  https://github.com/kolyvan/kxmovie
//  this file is part of KxMovie
//  KxMovie is licenced under the LGPL v3, see lgpl-3.0.txt

#import <UIKit/UIKit.h>

@class KxMovieDecoder;

extern NSString * const KxMovieParameterMinBufferedDuration;    // Float
extern NSString * const KxMovieParameterMaxBufferedDuration;    // Float
extern NSString * const KxMovieParameterDisableDeinterlacing;   // BOOL

@class KxMovieEmbeddedViewController;
@protocol KxMovieEmbeddedViewControllerDelegate

-(void) kxMovieEmbeddedViewControllerDidOpenedStream:(KxMovieEmbeddedViewController*) controller;
-(void) kxMovieEmbeddedViewController:(KxMovieEmbeddedViewController*) controller didFailedToOpenedStreamWithError:(NSError*) error;

@end

@interface KxMovieEmbeddedViewController : UIViewController

-(void) open: (NSString *) path
  parameters: (NSDictionary *) parameters;

@property (readonly) BOOL playing;
@property (nonatomic, weak) NSObject<KxMovieEmbeddedViewControllerDelegate>* delegate;

- (void) play;
- (void) pause;
- (void) stop;
@end
