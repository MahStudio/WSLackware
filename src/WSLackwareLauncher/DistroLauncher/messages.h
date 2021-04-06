//
//  Values are 32 bit values laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// MessageId: MSG_WSL_REGISTER_DISTRIBUTION_FAILED
//
// MessageText:
//
// WslRegisterDistribution failed with error: 0x%1!x!
//
#define MSG_WSL_REGISTER_DISTRIBUTION_FAILED 0x000003E9L

//
// MessageId: MSG_WSL_CONFIGURE_DISTRIBUTION_FAILED
//
// MessageText:
//
// WslGetDistributionConfiguration failed with error: 0x%1!x!
//
#define MSG_WSL_CONFIGURE_DISTRIBUTION_FAILED 0x000003EAL

//
// MessageId: MSG_WSL_LAUNCH_INTERACTIVE_FAILED
//
// MessageText:
//
// WslLaunchInteractive %1 failed with error: 0x%2!x!
//
#define MSG_WSL_LAUNCH_INTERACTIVE_FAILED 0x000003EBL

//
// MessageId: MSG_WSL_LAUNCH_FAILED
//
// MessageText:
//
// WslLaunch %1 failed with error: 0x%2!x!
//
#define MSG_WSL_LAUNCH_FAILED            0x000003ECL

//
// MessageId: MSG_USAGE
//
// MessageText:
//
// Launches or configures a Linux distribution.
// 
// Usage: 
//     <no args> 
//         Launches the user's default shell in the user's home directory.
// 
//     install [--root]
//         Install the distribuiton and do not launch the shell when complete.
//           --root
//               Do not create a user account and leave the default user set to root.
// 
//     run <command line> 
//         Run the provided command line in the current working directory. If no
//         command line is provided, the default shell is launched.
// 
//     config [setting [value]] 
//         Configure settings for this distribution.
//         Settings:
//           --default-user <username>
//               Sets the default user to <username>. This must be an existing user.
// 
//     help 
//         Print usage information.
//
#define MSG_USAGE                        0x000003EDL

//
// MessageId: MSG_STATUS_INSTALLING
//
// MessageText:
//
// Installing WSLackware, this may take a few minutes...
//
#define MSG_STATUS_INSTALLING            0x000003EEL

//
// MessageId: MSG_INSTALL_SUCCESS
//
// MessageText:
//
// Installation successful!
//
#define MSG_INSTALL_SUCCESS              0x000003EFL

//
// MessageId: MSG_ERROR_CODE
//
// MessageText:
//
// Error: 0x%1!x! %2
//
#define MSG_ERROR_CODE                   0x000003F0L

//
// MessageId: MSG_ENTER_USERNAME
//
// MessageText:
//
// Enter new UNIX username: %0
//
#define MSG_ENTER_USERNAME               0x000003F1L

//
// MessageId: MSG_CREATE_USER_PROMPT
//
// MessageText:
//
// Please create a default UNIX user account. The username does not need to match your Windows username.
// For more information visit: https://aka.ms/wslusers
//
#define MSG_CREATE_USER_PROMPT           0x000003F2L

//
// MessageId: MSG_PRESS_A_KEY
//
// MessageText:
//
// Press any key to continue...
//
#define MSG_PRESS_A_KEY                  0x000003F3L

//
// MessageId: MSG_MISSING_OPTIONAL_COMPONENT
//
// MessageText:
//
// The Windows Subsystem for Linux optional component is not enabled. Please enable it and try again.
// See https://aka.ms/wslinstall for details.
//
#define MSG_MISSING_OPTIONAL_COMPONENT   0x000003F4L

//
// MessageId: MSG_INSTALL_ALREADY_EXISTS
//
// MessageText:
//
// The distribution installation has become corrupted.
// Please select Reset from App Settings or uninstall and reinstall the app.
//
#define MSG_INSTALL_ALREADY_EXISTS       0x000003F5L

