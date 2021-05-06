//
//  MacPlatform.h
//  Boxedwine
//
//  Created by James Bryant on 4/19/20.
//  Copyright © 2020 Boxedwine. All rights reserved.
//

#import <Foundation/Foundation.h>

void MacPlatformOpenFileLocation(const char* str);
const char* MacPlatformGetResourcePath(const char* pName);
void MacPlatormSetThreadPriority(void);
