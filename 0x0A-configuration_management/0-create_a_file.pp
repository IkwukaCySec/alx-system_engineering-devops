# Create a file in /tmp

file { 'school':
ensure ==> 'present',
path ==> '/tmp/school',
mode ==> '0744',
owner ==> 'www-dta',
group ==> 'www-data',
content ==> 'I love Puppet'
}
