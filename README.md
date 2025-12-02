## Introduction
* Welcome to Tencent Cloud Software Development Kit (SDK) 3.0, a companion tool for TencentCloud API 3.0.
* This document introduces Tencent Cloud SDK for C++ to help C++ developers debug and integrate TencentCloud APIs. If you are using Tencent Cloud SDK for C++ for the first time, you can follow the sample code provided in this document.

## Environmental Dependencies

### Preparation
1. Activate a desired product in the Tencent Cloud Console.
2. Get the SecretID, SecretKey, and endpoint for calling the API of the product. An endpoint is typically in the format of \*.intl.tencentcloudapi.com. For example, the endpoint for calling the API of CVM is cvm.intl.tencentcloudapi.com. For more information, please see the documentation of the specified product.

### Compiler
* Supports C++ 11 or later versions: GCC 4.8 or later.
* Only supports the Linux operating system, not Windows.

### Compilation tool
- [cmake](https://cmake.org/)

Install CMake 3.0 or later. Examples:

```
In Ubuntu, run the following command:
sudo apt-get install cmake

In CentOS, run the following command:
yum install cmake3
```

### Dependent library

- [libcurl](https://curl.haxx.se/libcurl/)

Samples:

```
In Ubuntu, run the following command:
sudo apt-get install libcurl4-openssl-dev

In CentOS, run the following command:
yum install libcurl-devel
```

Note: we recommend that you install the latest version of the libcurl library to avoid memory leaks in the libcurl library.

- [openssl](https://www.openssl.org/)

Samples:

```
In Ubuntu, run the following command:
sudo apt-get install libssl-dev

In CentOS, run the following command:
yum install openssl-devel
```

- libuuid

Samples:

```
In Ubuntu, run the following command:
sudo apt-get install uuid-dev

In CentOS, run the following command:
yum install libuuid-devel
```

## SDK build from source code
1. Go to the [GitHub code hosting page](https://github.com/tencentcloud/tencentcloud-sdk-cpp-intl-en) to download the latest source code package.

2. Go to the directory where the SDK package is stored and create necessary build files.

```
cd <path/to/tencentcloud-sdk-cpp-intl-en>
mkdir sdk_build
cd sdk_build
cmake ..
make
sudo make install
```

## Samples of Using Tencent Cloud SDK for C++
The following code samples describe how to call the `DescribeInstances` API of CVM.

### Simplified code

```c++
#include <tencentcloud/core/TencentCloud.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/cvm/v20170312/CvmClient.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/Instance.h>

#include <iostream>
#include <string>

using namespace TencentCloud;
using namespace TencentCloud::Cvm::V20170312;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

int main()
{
    TencentCloud::InitAPI();

    string secretId = "<your secret id>";
    string secretKey = "<your secret key>";
    Credential cred = Credential(secretId, secretKey);

    DescribeInstancesRequest req = DescribeInstancesRequest();

    CvmClient cvm_client = CvmClient(cred, "ap-guangzhou");

    auto outcome = cvm_client.DescribeInstances(req);
    if (!outcome.IsSuccess())
    {
        cout << outcome.GetError().PrintAll() << endl;
        TencentCloud::ShutdownAPI();
        return -1;
    }
    DescribeInstancesResponse rsp = outcome.GetResult();
    cout<<"RequestId="<<rsp.GetRequestId()<<endl;
    cout<<"TotalCount="<<rsp.GetTotalCount()<<endl;
    if (rsp.InstanceSetHasBeenSet())
    {
        vector<Instance> instanceSet = rsp.GetInstanceSet();
        for (auto itr=instanceSet.begin(); itr!=instanceSet.end(); ++itr)
        {
            cout<<(*itr).GetPlacement().GetZone()<<endl;
        }
    }

    TencentCloud::ShutdownAPI();

    return 0;
}
```

### Detailed code

```C++
#include <tencentcloud/core/TencentCloud.h>
#include <tencentcloud/core/profile/HttpProfile.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/NetworkProxy.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cvm/v20170312/CvmClient.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/Instance.h>

#include <iostream>
#include <string>

using namespace TencentCloud;
using namespace TencentCloud::Cvm::V20170312;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

int main()
{
    TencentCloud::InitAPI();

    // Use the SDK.
    // Instantiate an authentication object. Pass in secretID and secretKey of your Tencent Cloud account as the input parameters and keep them confidential.
    string secretId = "<your secret id>";
    string secretKey = "<your secret key>";
    Credential cred = Credential(secretId, secretKey);

    // (Optional) Instantiate an HTTP option.
    HttpProfile httpProfile = HttpProfile();
    httpProfile.SetKeepAlive(true);  // Specify whether to enable the keepalive feature. The default value is false.
    httpProfile.SetEndpoint("cvm.intl.tencentcloudapi.com"); 
    httpProfile.SetReqTimeout(30);  // Specify the request timeout value, in seconds. The default value is 60s.
    httpProfile.SetConnectTimeout(30); // Specify the response timeout value, in seconds. The default value is 60s.

    ClientProfile clientProfile = ClientProfile(httpProfile);

    DescribeInstancesRequest req = DescribeInstancesRequest();
    req.SetOffset(0);
    req.SetLimit(5);

    CvmClient cvm_client = CvmClient(cred, "ap-guangzhou", clientProfile);

    // set proxy.
    // NetworkProxy proxy = NetworkProxy(NetworkProxy::Type::HTTP, "localhost.proxy.com", 8080);
    // cvm_client.SetNetworkProxy(proxy);

    auto outcome = cvm_client.DescribeInstances(req);
    if (!outcome.IsSuccess())
    {
        cout << outcome.GetError().PrintAll() << endl;
        TencentCloud::ShutdownAPI();
        return -1;
    }
    DescribeInstancesResponse rsp = outcome.GetResult();
    cout<<"RequestId="<<rsp.GetRequestId()<<endl;
    cout<<"TotalCount="<<rsp.GetTotalCount()<<endl;
    if (rsp.InstanceSetHasBeenSet())
    {
        vector<Instance> instanceSet = rsp.GetInstanceSet();
        for (auto itr=instanceSet.begin(); itr!=instanceSet.end(); ++itr)
        {
            cout<<(*itr).GetPlacement().GetZone()<<endl;
        }
    }

    TencentCloud::ShutdownAPI();

    return 0;
}
```

Compile and run the demo code.

```
cd example/cvm/v20170312
mkdir build
cd build
cmake ..
make
./DescribeInstances
```

If the system returns an error indicating that a dynamic library is not found, you can specify the path to the dynamic library. Assume that the libtencentcloud-sdk-cpp-intl-en-core.so library is installed in /usr/local/lib. Then add the following line:

```
export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH
./DescribeInstances
```

For more samples, please see the `example` directory.

## Unit Testing
### Creating the dependent library for gtest

Run the following commands:

```
git clone https://github.com/google/googletest
cd googletest
cmake CMakeLists.txt
make
```

Copy the generated `libgtest.a libgtest_main.a` static library and the header file of gtest to the system directory.

### Setting environment variables
- ENV_SecretId: enter your secret ID.
- ENV_SecretKey: enter your secret key.

### Running the test
Run the following script:

```
sh function_test.sh
```

## Compliance Notice

Please prioritize using the ​default domain names configured in the SDK for each product. If using other domains, note that ​overseas domains may pose ​data compliance risks.

