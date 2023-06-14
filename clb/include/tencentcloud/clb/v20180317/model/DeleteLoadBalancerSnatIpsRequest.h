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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DELETELOADBALANCERSNATIPSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DELETELOADBALANCERSNATIPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DeleteLoadBalancerSnatIps request structure.
                */
                class DeleteLoadBalancerSnatIpsRequest : public AbstractModel
                {
                public:
                    DeleteLoadBalancerSnatIpsRequest();
                    ~DeleteLoadBalancerSnatIpsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of a CLB instance, e.g., lb-12345678.
                     * @return LoadBalancerId Unique ID of a CLB instance, e.g., lb-12345678.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置Unique ID of a CLB instance, e.g., lb-12345678.
                     * @param _loadBalancerId Unique ID of a CLB instance, e.g., lb-12345678.
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
                     * 获取Array of the SNAT IP addresses to be deleted
                     * @return Ips Array of the SNAT IP addresses to be deleted
                     * 
                     */
                    std::vector<std::string> GetIps() const;

                    /**
                     * 设置Array of the SNAT IP addresses to be deleted
                     * @param _ips Array of the SNAT IP addresses to be deleted
                     * 
                     */
                    void SetIps(const std::vector<std::string>& _ips);

                    /**
                     * 判断参数 Ips 是否已赋值
                     * @return Ips 是否已赋值
                     * 
                     */
                    bool IpsHasBeenSet() const;

                private:

                    /**
                     * Unique ID of a CLB instance, e.g., lb-12345678.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Array of the SNAT IP addresses to be deleted
                     */
                    std::vector<std::string> m_ips;
                    bool m_ipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DELETELOADBALANCERSNATIPSREQUEST_H_
