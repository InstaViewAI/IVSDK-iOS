# IVSDK

InstaVision iOS SDK: authentication, device management, live view and event playback for InstaVision cameras. Binary XCFrameworks for iOS 15 and later, device and simulator (arm64).

Full documentation: https://ios.instavision.ai/

## Install

### Swift Package Manager

In Xcode: File, Add Package Dependencies, paste `https://github.com/InstaViewAI/IVSDK-iOS.git`, choose the latest version, and add the `IVSDK` product to your app target.

In a `Package.swift`:

```swift
.package(url: "https://github.com/InstaViewAI/IVSDK-iOS.git", from: "3.1.0")
```

The package downloads `IVSDK.xcframework.zip` and `IVWebRTC.xcframework.zip` from the GitHub release of the chosen version and verifies them against the checksums in `Package.swift`. Alamofire, Starscream, FirebaseAuth, GoogleSignIn and ZIPFoundation are declared as package dependencies, so an app that already uses them gets one copy.

### CocoaPods

```ruby
platform :ios, '15.0'
use_frameworks!

pod 'IVSDK', :git => 'https://github.com/InstaViewAI/IVSDK-iOS.git', :tag => '3.1.0'
```
