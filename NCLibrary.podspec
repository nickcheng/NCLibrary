Pod::Spec.new do |s|
  s.name         = "NCLibrary"
  s.version      = "0.0.1"
  s.summary      = "Categories and macros for convenience."
  s.homepage     = 'https://github.com/nickcheng/NCLibrary'
  s.license      = { :type => 'MIT', :file => "LICENSE" }
  s.author       = { "nickcheng" => "n@nickcheng.com" }

  s.source       = { :git => "https://github.com/nickcheng/NCLibrary.git", :tag => "0.0.1" }
  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'NCLibrary/**/*.{h,m}'
  s.public_header_files = 'NCLibrary/**/*.h'

end
