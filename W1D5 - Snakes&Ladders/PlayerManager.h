//
//  PlayerManager.h
//  W1D5 - Snakes&Ladders
//
//  Created by Murat Ekrem Kolcalar on 11/12/17.
//  Copyright © 2017 murtilicious. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "Player.h"


@interface PlayerManager : NSObject

@property (nonatomic, strong) NSMutableArray *players;
@property (nonatomic, assign) NSInteger currentIndex;

- (void) createPlayers: (NSInteger) numberOfPlayers;
- (void) rollDice;
- (void) generateOutput;
- (Player *) currentPlayer;
- (BOOL) gameOver;

@end
