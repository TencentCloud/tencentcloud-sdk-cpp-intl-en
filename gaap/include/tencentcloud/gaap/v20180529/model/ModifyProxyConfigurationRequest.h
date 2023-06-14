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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYPROXYCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYPROXYCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * ModifyProxyConfiguration request structure.
                */
                class ModifyProxyConfigurationRequest : public AbstractModel
                {
                public:
                    ModifyProxyConfigurationRequest();
                    ~ModifyProxyConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Connection instance ID; It's an old parameter, please switch to ProxyId.
                     * @return InstanceId Connection instance ID; It's an old parameter, please switch to ProxyId.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Connection instance ID; It's an old parameter, please switch to ProxyId.
                     * @param _instanceId Connection instance ID; It's an old parameter, please switch to ProxyId.
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
                     * 获取Target bandwidth. Unit: Mbps.
Bandwidth or Concurrent must be set. Use the DescribeAccessRegionsByDestRegion API to obtain the value range.
                     * @return Bandwidth Target bandwidth. Unit: Mbps.
Bandwidth or Concurrent must be set. Use the DescribeAccessRegionsByDestRegion API to obtain the value range.
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置Target bandwidth. Unit: Mbps.
Bandwidth or Concurrent must be set. Use the DescribeAccessRegionsByDestRegion API to obtain the value range.
                     * @param _bandwidth Target bandwidth. Unit: Mbps.
Bandwidth or Concurrent must be set. Use the DescribeAccessRegionsByDestRegion API to obtain the value range.
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Target concurrence value. Unit: 10,000 connections.
Bandwidth or Concurrent must be set. Use the DescribeAccessRegionsByDestRegion API to obtain the value range.
                     * @return Concurrent Target concurrence value. Unit: 10,000 connections.
Bandwidth or Concurrent must be set. Use the DescribeAccessRegionsByDestRegion API to obtain the value range.
                     * 
                     */
                    uint64_t GetConcurrent() const;

                    /**
                     * 设置Target concurrence value. Unit: 10,000 connections.
Bandwidth or Concurrent must be set. Use the DescribeAccessRegionsByDestRegion API to obtain the value range.
                     * @param _concurrent Target concurrence value. Unit: 10,000 connections.
Bandwidth or Concurrent must be set. Use the DescribeAccessRegionsByDestRegion API to obtain the value range.
                     * 
                     */
                    void SetConcurrent(const uint64_t& _concurrent);

                    /**
                     * 判断参数 Concurrent 是否已赋值
                     * @return Concurrent 是否已赋值
                     * 
                     */
                    bool ConcurrentHasBeenSet() const;

                    /**
                     * 获取A string used to ensure the idempotency of the request, which is generated by the user and must be unique to each request. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
For more information, please see How to Ensure Idempotence.
                     * @return ClientToken A string used to ensure the idempotency of the request, which is generated by the user and must be unique to each request. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
For more information, please see How to Ensure Idempotence.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A string used to ensure the idempotency of the request, which is generated by the user and must be unique to each request. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
For more information, please see How to Ensure Idempotence.
                     * @param _clientToken A string used to ensure the idempotency of the request, which is generated by the user and must be unique to each request. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
For more information, please see How to Ensure Idempotence.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Connection instance ID; It's a new parameter.
                     * @return ProxyId Connection instance ID; It's a new parameter.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Connection instance ID; It's a new parameter.
                     * @param _proxyId Connection instance ID; It's a new parameter.
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取Billing mode (0: bill-by-bandwidth, 1: bill-by-traffic. Default value: bill-by-bandwidth)
                     * @return BillingType Billing mode (0: bill-by-bandwidth, 1: bill-by-traffic. Default value: bill-by-bandwidth)
                     * 
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置Billing mode (0: bill-by-bandwidth, 1: bill-by-traffic. Default value: bill-by-bandwidth)
                     * @param _billingType Billing mode (0: bill-by-bandwidth, 1: bill-by-traffic. Default value: bill-by-bandwidth)
                     * 
                     */
                    void SetBillingType(const int64_t& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     * 
                     */
                    bool BillingTypeHasBeenSet() const;

                private:

                    /**
                     * Connection instance ID; It's an old parameter, please switch to ProxyId.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Target bandwidth. Unit: Mbps.
Bandwidth or Concurrent must be set. Use the DescribeAccessRegionsByDestRegion API to obtain the value range.
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Target concurrence value. Unit: 10,000 connections.
Bandwidth or Concurrent must be set. Use the DescribeAccessRegionsByDestRegion API to obtain the value range.
                     */
                    uint64_t m_concurrent;
                    bool m_concurrentHasBeenSet;

                    /**
                     * A string used to ensure the idempotency of the request, which is generated by the user and must be unique to each request. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.
For more information, please see How to Ensure Idempotence.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Connection instance ID; It's a new parameter.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Billing mode (0: bill-by-bandwidth, 1: bill-by-traffic. Default value: bill-by-bandwidth)
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYPROXYCONFIGURATIONREQUEST_H_
