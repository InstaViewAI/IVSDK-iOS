Pod::Spec.new do |s|
  s.name         = 'IVSDK'
  s.version      = '3.1.1'
  s.summary      = 'InstaVision iOS SDK.'
  s.description  = 'IVSDK is a networking and live streaming framework, likely designed to handle real-time video transmission, low-latency streaming, and network communication with InstaVision cloud'
  s.homepage     = 'https://instavision.shop'
  #s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { 'Khetaram' => 'khetaram@instaview.ai' }
  s.source = { :git => 'https://github.com/InstaViewAI/IVSDK-iOS.git', :tag => s.version.to_s }
  s.platform     = :ios, '15.0'

  # Use the framework
  # IVSDK is a static framework with only the SDK's own code; its dependencies below are linked
  # once by the app. IVWebRTC is dynamic and gets embedded.
  s.vendored_frameworks = ['Framework/IVSDK-iOS.xcframework/IVSDK.xcframework', 'Framework/IVSDK-iOS.xcframework/IVWebRTC.xcframework']
  s.static_framework = true

  s.requires_arc = true
  # Add dependencies
  s.dependency 'Alamofire', '~> 5.11'
  s.dependency 'Starscream', '~> 4.0.8'
  s.dependency 'FirebaseAuth', '~> 13.0'
  s.dependency 'GoogleSignIn', '~> 10.0'
  s.dependency 'ZIPFoundation', '~> 0.9.20'
end
