//
//  LabXTableView.h
//  FlashyTableviews
//
//  Created by Ugowe on 6/30/16.
//  Copyright © 2016 Ugowe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SWTableViewCell.h"
#import "UIScrollView+APParallaxHeader.h"



@interface LabXTableView : UITableViewController <SWTableViewCellDelegate>

- (void)swipeableTableViewCell:(SWTableViewCell *)cell didTriggerRightUtilityButtonWithIndex:(NSInteger)index;

@end
