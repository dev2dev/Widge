/*
Copyright (C) 2010-2011 Peter Hajas, Dustin Howett

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#import <UIKit/UIKit.h>
#import <WidgeKit/WGWidgetViewController.h>

#define kDeviceWidgetWidth 4
#define kDeviceWidgetHeight 4
#define kIconPixelDimensions 80

@interface WGRootController : NSObject
{
	NSMutableArray* widgetViewControllers;
    NSMutableArray* widgetObjects;
	UIView* widgetView;
}

-(void)loadWidgetBundles;
-(void)layOutWidgets;
-(UIView*)viewForLaidOutWidgets;
-(WGWidgetViewController *)initDemoWidget;

@end