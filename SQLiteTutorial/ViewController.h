//
//  ViewController.h
//  SQLiteTutorial
//
//  Created by PETER ATTHEM on 2013-12-05.
//  Copyright (c) 2013 PETER ATTHEM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "sqlite3.h"

@interface ViewController : UIViewController{
    sqlite3 *contactDB;
    UITextField     *name;
    UITextField *address;
    UITextField *phone;
    UILabel *status;
    NSString        *databasePath;

}//hhj

- (IBAction) saveData;
- (IBAction) findContact;

@end
