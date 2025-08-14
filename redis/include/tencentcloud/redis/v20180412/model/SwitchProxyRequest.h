/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_SWITCHPROXYREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_SWITCHPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * SwitchProxy request structure.
                */
                class SwitchProxyRequest : public AbstractModel
                {
                public:
                    SwitchProxyRequest();
                    ~SwitchProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @return InstanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @param _instanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Proxy ID of an instance, which can be obtained through NodeId of the response parameter **Proxy** of the API [DescribeInstanceNodeInfo](https://intl.cloud.tencent.com/document/product/239/48603?from_cn_redirect=1).
                     * @return ProxyID Proxy ID of an instance, which can be obtained through NodeId of the response parameter **Proxy** of the API [DescribeInstanceNodeInfo](https://intl.cloud.tencent.com/document/product/239/48603?from_cn_redirect=1).
                     * 
                     */
                    std::string GetProxyID() const;

                    /**
                     * 设置Proxy ID of an instance, which can be obtained through NodeId of the response parameter **Proxy** of the API [DescribeInstanceNodeInfo](https://intl.cloud.tencent.com/document/product/239/48603?from_cn_redirect=1).
                     * @param _proxyID Proxy ID of an instance, which can be obtained through NodeId of the response parameter **Proxy** of the API [DescribeInstanceNodeInfo](https://intl.cloud.tencent.com/document/product/239/48603?from_cn_redirect=1).
                     * 
                     */
                    void SetProxyID(const std::string& _proxyID);

                    /**
                     * 判断参数 ProxyID 是否已赋值
                     * @return ProxyID 是否已赋值
                     * 
                     */
                    bool ProxyIDHasBeenSet() const;

                    /**
                     * 获取Instance proxy ID list. Call the API [DescribeInstanceNodeInfo](https://www.tencentcloud.comom/document/product/239/48603?from_cn_redirect=1) to obtain IDs from **NodeId** in the **Proxy** response parameter.
                     * @return ProxyIDList Instance proxy ID list. Call the API [DescribeInstanceNodeInfo](https://www.tencentcloud.comom/document/product/239/48603?from_cn_redirect=1) to obtain IDs from **NodeId** in the **Proxy** response parameter.
                     * 
                     */
                    std::vector<std::string> GetProxyIDList() const;

                    /**
                     * 设置Instance proxy ID list. Call the API [DescribeInstanceNodeInfo](https://www.tencentcloud.comom/document/product/239/48603?from_cn_redirect=1) to obtain IDs from **NodeId** in the **Proxy** response parameter.
                     * @param _proxyIDList Instance proxy ID list. Call the API [DescribeInstanceNodeInfo](https://www.tencentcloud.comom/document/product/239/48603?from_cn_redirect=1) to obtain IDs from **NodeId** in the **Proxy** response parameter.
                     * 
                     */
                    void SetProxyIDList(const std::vector<std::string>& _proxyIDList);

                    /**
                     * 判断参数 ProxyIDList 是否已赋值
                     * @return ProxyIDList 是否已赋值
                     * 
                     */
                    bool ProxyIDListHasBeenSet() const;

                private:

                    /**
                     * Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Proxy ID of an instance, which can be obtained through NodeId of the response parameter **Proxy** of the API [DescribeInstanceNodeInfo](https://intl.cloud.tencent.com/document/product/239/48603?from_cn_redirect=1).
                     */
                    std::string m_proxyID;
                    bool m_proxyIDHasBeenSet;

                    /**
                     * Instance proxy ID list. Call the API [DescribeInstanceNodeInfo](https://www.tencentcloud.comom/document/product/239/48603?from_cn_redirect=1) to obtain IDs from **NodeId** in the **Proxy** response parameter.
                     */
                    std::vector<std::string> m_proxyIDList;
                    bool m_proxyIDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_SWITCHPROXYREQUEST_H_
