////////////////////////////////////////////////////////////////////////////
//
// Copyright 2014 Realm Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////////

#import <Cocoa/Cocoa.h>

#import "RLMDocument.h"
#import "RLMTypeOutlineViewController.h"
#import "RLMInstanceTableViewController.h"

extern const NSUInteger kMaxNumberOfArrayEntriesInToolTip;

@interface RLMRealmBrowserWindowController : NSWindowController

@property (nonatomic, weak) RLMDocument *modelDocument;

@property (nonatomic, strong) RLMTypeNode *selectedTypeNode;

@property (nonatomic, strong) IBOutlet RLMTypeOutlineViewController *outlineViewController;
@property (nonatomic, strong) IBOutlet RLMInstanceTableViewController *tableViewController;

- (void)updateSelectedTypeNode:(RLMTypeNode *)typeNode;

- (void)updateSelectedTypeNode:(RLMTypeNode *)typeNode withSelectionAtIndex:(NSUInteger)selectionIndex;

- (void)addArray:(RLMArray *)array fromProperty:(RLMProperty *)property object:(RLMObject *)object;

@end
