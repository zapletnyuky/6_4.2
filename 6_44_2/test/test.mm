#include "Header.h"
#import <XCTest/XCTest.h>

@interface teest : XCTestCase

@end

@implementation teest

- (void)testLab {
    srand((unsigned)time(NULL));
    const int n = 10;
    int a[n];
    
    int res = Max(a, n, 0, 0);
    
    XCTAssertEqual(res, 0);
    
}

@end
