//
//  BNRDocument.h
//  Doodler
//
//  Created by Chetan Shenoy on 6/16/13.
//  Copyright (c) 2013 Chetan Shenoy. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface BNRDocument : NSDocument <NSTableViewDataSource>
{
    NSMutableArray *todoItems;
    IBOutlet NSTableView *itemTableView;
}

- (IBAction)createNewItem:(id)sender;
- (IBAction)deleteItem:(id)sender;

@end
