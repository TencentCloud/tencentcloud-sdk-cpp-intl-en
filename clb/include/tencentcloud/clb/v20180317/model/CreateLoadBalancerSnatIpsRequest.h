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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATELOADBALANCERSNATIPSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATELOADBALANCERSNATIPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/SnatIp.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CreateLoadBalancerSnatIps request structure.
                */
                class CreateLoadBalancerSnatIpsRequest : public AbstractModel
                {
                public:
                    CreateLoadBalancerSnatIpsRequest();
                    ~CreateLoadBalancerSnatIpsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the unique ID of the cloud load balancer. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID, such as lb-12345678.
                     * @return LoadBalancerId Specifies the unique ID of the cloud load balancer. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID, such as lb-12345678.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置Specifies the unique ID of the cloud load balancer. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID, such as lb-12345678.
                     * @param _loadBalancerId Specifies the unique ID of the cloud load balancer. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID, such as lb-12345678.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取Added SnatIp information. specify IP for request or designated subnet for automatic application. can be accessed through [DescribeSubnets](https://www.tencentcloud.comom/document/api/215/15784?from_cn_redirect=1) to query and retrieve. the default upper limit for one CLB instance is 10.
                     * @return SnatIps Added SnatIp information. specify IP for request or designated subnet for automatic application. can be accessed through [DescribeSubnets](https://www.tencentcloud.comom/document/api/215/15784?from_cn_redirect=1) to query and retrieve. the default upper limit for one CLB instance is 10.
                     * 
                     */
                    std::vector<SnatIp> GetSnatIps() const;

                    /**
                     * 设置Added SnatIp information. specify IP for request or designated subnet for automatic application. can be accessed through [DescribeSubnets](https://www.tencentcloud.comom/document/api/215/15784?from_cn_redirect=1) to query and retrieve. the default upper limit for one CLB instance is 10.
                     * @param _snatIps Added SnatIp information. specify IP for request or designated subnet for automatic application. can be accessed through [DescribeSubnets](https://www.tencentcloud.comom/document/api/215/15784?from_cn_redirect=1) to query and retrieve. the default upper limit for one CLB instance is 10.
                     * 
                     */
                    void SetSnatIps(const std::vector<SnatIp>& _snatIps);

                    /**
                     * 判断参数 SnatIps 是否已赋值
                     * @return SnatIps 是否已赋值
                     * 
                     */
                    bool SnatIpsHasBeenSet() const;

                    /**
                     * 获取Number of SNAT IPs to be added. This parameter is used in conjunction with `SnatIps`. Note that if `Ip` is specified in `SnapIps`, this parameter is not available. It defaults to `1` and the upper limit is `10`.
                     * @return Number Number of SNAT IPs to be added. This parameter is used in conjunction with `SnatIps`. Note that if `Ip` is specified in `SnapIps`, this parameter is not available. It defaults to `1` and the upper limit is `10`.
                     * 
                     */
                    uint64_t GetNumber() const;

                    /**
                     * 设置Number of SNAT IPs to be added. This parameter is used in conjunction with `SnatIps`. Note that if `Ip` is specified in `SnapIps`, this parameter is not available. It defaults to `1` and the upper limit is `10`.
                     * @param _number Number of SNAT IPs to be added. This parameter is used in conjunction with `SnatIps`. Note that if `Ip` is specified in `SnapIps`, this parameter is not available. It defaults to `1` and the upper limit is `10`.
                     * 
                     */
                    void SetNumber(const uint64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                private:

                    /**
                     * Specifies the unique ID of the cloud load balancer. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to query the ID, such as lb-12345678.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Added SnatIp information. specify IP for request or designated subnet for automatic application. can be accessed through [DescribeSubnets](https://www.tencentcloud.comom/document/api/215/15784?from_cn_redirect=1) to query and retrieve. the default upper limit for one CLB instance is 10.
                     */
                    std::vector<SnatIp> m_snatIps;
                    bool m_snatIpsHasBeenSet;

                    /**
                     * Number of SNAT IPs to be added. This parameter is used in conjunction with `SnatIps`. Note that if `Ip` is specified in `SnapIps`, this parameter is not available. It defaults to `1` and the upper limit is `10`.
                     */
                    uint64_t m_number;
                    bool m_numberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATELOADBALANCERSNATIPSREQUEST_H_
