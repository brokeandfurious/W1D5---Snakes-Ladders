//
//  Player.h
//  W1D5 - Snakes&Ladders
//
//  Created by Murat Ekrem Kolcalar on 11/12/17.
//  Copyright © 2017 murtilicious. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, assign) NSInteger currentSquare;
@property (nonatomic, strong) NSDictionary *gameLogic;
@property (nonatomic, strong) NSString *output;
@property (nonatomic, assign) BOOL gameOver;
@property (nonatomic, strong) NSString *playerName;

- (void) rollDice;

@end
