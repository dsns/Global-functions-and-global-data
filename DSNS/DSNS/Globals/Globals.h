//
//  main.m
//  DSNS
//
//  Created by Ksenofontov Misha on 01/04/14.
//  Copyright (c) 2014 ___DSNS___. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import "DSNSAppDelegate.h"

#ifndef Globals_h
#define Globals_h
extern NSUInteger OcontrollerJSSES;
extern bool lab_TopBar_state;
extern NSString *databaseControllerAutoSyncString;
extern NSString *databaseControllerShowSyncString;
extern NSImageView *toggleImagePopUp;
extern NSImageView *toggleImageTimer;
extern NSImageView *toggleImageAI;
extern NSImageView *toggleImageJsses;
extern NSInteger *synchronizer_global_old_use;


extern int display_project_name_min;
extern int display_project_name_int;
extern bool display_project_name_bool;
extern NSString *display_project_name_string;
extern NSButton *toolbar_switch_handler_domain;

extern double sync_step;
extern double sync_double;
extern int sync_int;
extern bool sync_bool;
extern bool synchronizer_global_old_top_bar;
extern bool synchronizer_global_old_tipe;
extern NSSegmentedControl* segmentSync_mac_conf;
extern NSString *synchronizer_global_old_mac_os_x_sec;
extern NSString *synchronizer_global_old_mac_os_x_ms;
extern NSString *synchronizer_global_old_mac_os_x_ip;
extern NSString *synchronizer_global_old_mac_os_x_port;
extern NSString *synchronizer_global_old_mac_os_x_server;
extern NSString *synchronizer_global_old_mac_os_x_login;
extern NSString *synchronizer_global_old_mac_os_x_password;
extern NSInteger *synchronizer_global_new_use;
extern bool synchronizer_global_new_top_bar;
extern bool synchronizer_global_new_tipe;
extern NSString *synchronizer_global_new_mac_os_x_sec;
extern NSString *synchronizer_global_new_mac_os_x_ms;
extern NSString *synchronizer_global_new_mac_os_x_ip;
extern NSString *synchronizer_global_new_mac_os_x_port;
extern NSString *synchronizer_global_new_mac_os_x_server;
extern NSString *synchronizer_global_new_mac_os_x_login;
extern NSString *synchronizer_global_new_mac_os_x_password;
extern NSTimer *synchronizer_interval_loop;
extern double synchronizer_time_interval_loop_double;
extern double popup_bender_left_step;
extern double popup_bender_top_step;
extern NSButton *synchronizer_apply_button;
extern NSButton *synchronizer_cancel_button;
extern NSButton *synchronizer_topbar;
extern NSButton *synchronizer_button;
extern NSMutableArray*arrServer;
extern NSMutableArray*arrLogin;
extern NSMutableArray*arrIp;
extern NSMutableArray*arrPort;
extern NSMutableArray*arr;
extern NSStatusItem*self_statusItem;
extern NSComboBox* combosyncIp_mac_conf;
extern NSComboBox* combosyncPort_mac_conf;
extern NSComboBox* combosyncLogin_mac_conf;
extern NSComboBox* combosyncServer_mac_conf;
extern NSTextField* combosyncPass_mac_conf;

extern NSComboBox* combosyncIp;
extern NSComboBox* combosyncPort;
extern NSComboBox* combosyncLogin;
extern NSComboBox* combosyncServer;
extern NSButton *transparentWindowButtonA ;
extern NSButton *transparentWindowButtonB ;
extern NSButton *transparentWindowButtonC ;
extern NSButton *transparentWindowButtonD ;
extern NSButton *myButton ;
extern NSWindow* sync_window;
extern NSTextField* calc_server;
extern NSTextField* calc_back;
extern NSTextField* calc_data;
extern NSTextField* sync_ip;
extern NSTextField* sync_val;
extern NSButton* sync_button;
extern NSSearchField* sync_name;
extern NSTextField* sync_port;
extern NSTextField* sync_note;
extern NSTextField* sync_server;
extern NSTextField* sync_info;
extern NSStatusItem *statusItem;
extern NSView*statusItem_view;
extern bool boolTerminal;
extern int port;
extern NSString*dockIconSize;
extern NSView *transparentWindowView;
extern CGRect *transparentWindowBounds;
extern NSView *transparentWindowFrame;
extern NSButton *sync_erase;
extern bool syncEvent;
extern bool isBeingManipulated;
extern int synchronizer_Topbar;
extern NSString*badgeLabel;
extern NSString*ip;
extern double rOtates;
extern bool _activeBender;
extern bool _active;
extern BOOL active;
extern bool _checked;
extern NSString*host;
extern NSTimer*timer;
extern NSString*uniid;
extern NSString*lanMac;
extern NSString*router;
extern bool _reactives;
extern int panel_width;
extern bool _amyAutoRun;
extern int panel_height;
extern NSRunLoop*runner;
extern NSString*wifiMac;
extern NSString*plusMac;
extern bool _fullscreen;
extern int nspopover_int;
extern NSString*uniidName;
extern bool _checkedSetup;
extern bool _checkedJsses;
extern NSButton*popTopHide;
extern NSButton*popTopShow;
extern NSWindow*wterminal;
extern bool _hasActivePanel;
extern NSURLRequest*request;
extern NSButton*popTerminal;
extern NSButton*popupbutton;
extern NSImageView*imageView;
extern NSMenu*statusItemMenu;
extern WebView*popoverWebView;
extern NSString*uniidFullName;
extern NSStatusItem*statusBar;
extern NSStatusItem*statusBars;
extern NSStatusItem*statusItem;
extern NSStatusItem*_statusItem;
extern NSImageView*toggleImageView;
extern NSString*databaseControllerIp;
extern NSString*databaseControllerPort;
extern NSMutableArray*windowControllers;
extern NSMutableArray*tableViewContents;
extern bool separatorSyncCheckBool;
extern bool separatorSyncCheckTrue;
extern bool transmitionConnectionError;
extern int transmitionError;
extern bool displayDockPanel;
extern bool displaySeparatorPanel;
extern NSButton *showDock;
extern bool _isHighlighted;
extern NSString *globalVariable;

extern NSWindow*winJsses;
extern WebView*webJsses;
extern NSWindow*winDatabase;
extern WebView*webDatabase;
extern NSInteger defaultQuota;
extern NSInteger setQuota;
extern bool build_stepsAction__BuildTopBar_bender_bool;
extern NSImage *build_stepsAction__BuildTopBar_bender_img;
extern CAAnimation *caanimation__stage__UNIID ;
#endif


