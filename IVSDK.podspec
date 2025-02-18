Pod::Spec.new do |s|
  s.name         = 'IVSDK'
  s.version      = '1.0.0'
  s.summary      = 'InstaVision iOS SDK.'
  s.description  = 'IVSDK is a networking and live streaming framework, likely designed to handle real-time video transmission, low-latency streaming, and network communication with InstaVision cloud'
  s.homepage     = 'https://instavision.shop'
  #s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { 'Khetaram' => 'khetaram@instaview.ai' }
  s.source = { :git => 'https://github.com/InstaViewAI/IVSDK-iOS.git'}
  s.platform     = :ios, '15.0'

  # Use the framework
  s.vendored_frameworks = ['Framework/IVSDK-iOS.xcframework/IVSDK.xcframework', 'Framework/IVSDK-iOS.xcframework/WebRTC.xcframework']

  s.requires_arc = true
  # Add dependencies
  s.dependency 'Alamofire', '~> 5.4.0'
  s.dependency 'AlamofireNetworkActivityLogger', '~> 3.4.0'
  s.dependency 'KeychainSwift', '~> 20.0.0'
  s.dependency 'ReachabilitySwift', '~> 5.2.0'
  s.dependency 'Starscream'
  s.dependency 'Firebase'
  s.dependency 'FirebaseAuth'
  s.dependency 'GoogleSignIn'
  s.dependency 'AWSCore'
  s.dependency 'AWSKinesisVideo'
  s.dependency 'AWSKinesisVideoSignaling'
  s.dependency 'AWSKinesisVideoSignaling'
end
