Pod::Spec.new do |s|
  s.name         = 'IVSDK'
  s.version      = '2.0.2'
  s.summary      = 'InstaVision iOS SDK.'
  s.description  = 'IVSDK is a networking and live streaming framework, likely designed to handle real-time video transmission, low-latency streaming, and network communication with InstaVision cloud'
  s.homepage     = 'https://instavision.shop'
  #s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { 'Khetaram' => 'khetaram@instaview.ai' }
  s.source = { :git => 'https://github.com/InstaViewAI/IVSDK-iOS.git', :tag => s.version.to_s }
  s.platform     = :ios, '15.0'

  # Use the framework
  s.vendored_frameworks = ['Framework/IVSDK-iOS.xcframework/IVSDK.xcframework', 'Framework/IVSDK-iOS.xcframework/WebRTC.xcframework']

  s.requires_arc = true
  # Add dependencies
  s.dependency 'Alamofire', '~> 5.10.2'
  s.dependency 'Starscream', '~> 4.0.8'
  s.dependency 'Firebase', '~> 11.3.0'
  s.dependency 'FirebaseAuth', '~> 11.3.0'
  s.dependency 'GoogleSignIn', '~> 8.0.0' 
end
