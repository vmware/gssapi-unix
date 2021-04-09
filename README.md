# GSSAPI-Unix
GSSAPI-Unix (Generic Security Service Application Programming Interface) is a function interface that provides security services for applications in a mechanism-independent way. This allows different security mechanisms to be used via one standardized API.


### Dependencies
    dcerpc, openldap, krb5, python3, openssl, e2fsprogs


### Building from source
Building gssapi-unix on Photon OS

    - tdnf install -y build-essential
    - tdnf install -y copenapi-devel c-rest-engine-devel curl-devel expat-devel libsolv-devel 
    - tdnf install -y jansson-devel krb5-devel network-config-manager-devel tdnf-devel
    - tdnf install -y python3-devel dcerpc-devel openldap openssl-devel e2fsprogs-devel
    - git clone git@github.com:vmware/gssapi-unix.git
    - cd gssapi-plugins/
    - ./rebuild.sh
    - make


### Install binaries
    - make install

### Built Libraries
Currently following libraries will be built.
  1. libgssapi_unix_creds.so
  2. libgssapi_unix.so
 

### Contributing
The GSSAPI-Unix project team welcomes contributions from the community. If you wish to contribute code and you have not signed our contributor license agreement (CLA), our bot will update the issue when you open a Pull Request. For any questions about the CLA process, please refer to our [FAQ](https://cla.vmware.com/faq).


License
----
[Apache-2.0](https://spdx.org/licenses/Apache-2.0.html)



