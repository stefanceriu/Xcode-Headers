#!/usr/bin/env ruby


xcode = ARGV[0] || "/Applications/Xcode.app/"

def xcode_folder(xcode_path, relative)
  "#{xcode_path}/Contents/#{relative}"
end

def framework_name(path)
  path.split("/")[-1].split(".")[0]
end

folders = [
  xcode_folder(xcode, 'Frameworks'),
  xcode_folder(xcode, 'OtherFrameworks'),
  xcode_folder(xcode, 'SharedFrameworks'),
  xcode_folder(xcode, 'PlugIns')
]

start_folder = Dir::pwd()

folders.each do |path|
  Dir.foreach(path) do |item|
    next if item == '.' or item == '..'

    name = framework_name(item)
    dir_name = start_folder + "/" + name
    Dir::mkdir(dir_name) unless FileTest::directory?(dir_name)
    Dir::chdir(dir_name)

    `class-dump -H #{path}/#{item}`
  end
end