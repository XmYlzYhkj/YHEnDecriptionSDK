
Pod::Spec.new do |s|

  s.name         = "YHEnDecriptionSDK"
  s.version      = "2.0.8"
  s.summary      = "公司基础SDK之一"

  s.description  = "基础SDK之一，提供加密、解密、签名、验证签名。"

  s.homepage     = "https://github.com/XmYlzYhkj/YHEnDecriptionSDK"

  s.license      = "MIT"

  s.author       = { "XmYhkj" => "yhkj_xm@163.com" }

  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHEnDecriptionSDK.git", :tag => s.version.to_s }

  s.requires_arc = true
  
  s.xcconfig = { 'OTHER_LDFLAGS' => '-lstdc++' }
  
  s.vendored_frameworks = ["Frameworks/YHEnDecriptionSDK.framework"]
  
end
