//
//  CSColorSpace.h
//  CSIconView
//
//  Created by Alastair Houghton on 24/08/2005.
//  Copyright (c) 2005-2010 Coriolis Systems Limited
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import <Cocoa/Cocoa.h>
#import <ApplicationServices/ApplicationServices.h>

@interface CSColorSpace : NSObject
{
  CGColorSpaceRef colorSpace;
}

+ (CSColorSpace *)deviceRGBColorSpace;
+ (CSColorSpace *)deviceCMYKColorSpace;
+ (CSColorSpace *)deviceGrayColorSpace;

+ (CSColorSpace *)genericRGBColorSpace;
+ (CSColorSpace *)genericCMYKColorSpace;
+ (CSColorSpace *)genericGrayColorSpace;

- (id)initWithColorSpaceRef:(CGColorSpaceRef)colorSpaceRef;
- (id)initWithColorSpaceName:(NSString *)name;

- (CGColorSpaceRef)cgColorSpaceRef;

- (unsigned)numberOfComponents;

@end

/*
 * Local Variables:
 * mode: ObjC
 * End:
 *
 */
