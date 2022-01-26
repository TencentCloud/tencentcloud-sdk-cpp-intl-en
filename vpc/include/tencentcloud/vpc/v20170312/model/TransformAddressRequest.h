/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRANSFORMADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRANSFORMADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * TransformAddress request structure.
                */
                class TransformAddressRequest : public AbstractModel
                {
                public:
                    TransformAddressRequest();
                    ~TransformAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the instance with a common public IP to be operated on, such as `ins-11112222`. You can query the instance ID by logging into the [CVM console](https://console.cloud.tencent.com/cvm). You can also obtain the parameter value from the `InstanceId` field in the returned result of the API [DescribeInstances](https://intl.cloud.tencent.com/document/product/213/33256).
                     * @return InstanceId The ID of the instance with a common public IP to be operated on, such as `ins-11112222`. You can query the instance ID by logging into the [CVM console](https://console.cloud.tencent.com/cvm). You can also obtain the parameter value from the `InstanceId` field in the returned result of the API [DescribeInstances](https://intl.cloud.tencent.com/document/product/213/33256).
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The ID of the instance with a common public IP to be operated on, such as `ins-11112222`. You can query the instance ID by logging into the [CVM console](https://console.cloud.tencent.com/cvm). You can also obtain the parameter value from the `InstanceId` field in the returned result of the API [DescribeInstances](https://intl.cloud.tencent.com/document/product/213/33256).
                     * @param InstanceId The ID of the instance with a common public IP to be operated on, such as `ins-11112222`. You can query the instance ID by logging into the [CVM console](https://console.cloud.tencent.com/cvm). You can also obtain the parameter value from the `InstanceId` field in the returned result of the API [DescribeInstances](https://intl.cloud.tencent.com/document/product/213/33256).
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * The ID of the instance with a common public IP to be operated on, such as `ins-11112222`. You can query the instance ID by logging into the [CVM console](https://console.cloud.tencent.com/cvm). You can also obtain the parameter value from the `InstanceId` field in the returned result of the API [DescribeInstances](https://intl.cloud.tencent.com/document/product/213/33256).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRANSFORMADDRESSREQUEST_H_
