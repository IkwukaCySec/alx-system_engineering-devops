# Kills a progress named killmenow

exec{'pkill -f killmenow':
path => '/usr/bin/:/usr/local/bin/:/bin/'
}
