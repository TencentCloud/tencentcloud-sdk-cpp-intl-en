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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERHEALTHSTATUSREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERHEALTHSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeListenerHealthStatus request structure.
                */
                class DescribeListenerHealthStatusRequest : public AbstractModel
                {
                public:
                    DescribeListenerHealthStatusRequest();
                    ~DescribeListenerHealthStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Listener ID, in the format of lst- followed by 8 alphanumeric characters.
                     * @return ListenerId Listener ID, in the format of lst- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID, in the format of lst- followed by 8 alphanumeric characters.
                     * @param _listenerId Listener ID, in the format of lst- followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Cloud Load Balancer instance ID. The format is alb- followed by 8 alphanumeric characters.
                     * @return LoadBalancerId Cloud Load Balancer instance ID. The format is alb- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置Cloud Load Balancer instance ID. The format is alb- followed by 8 alphanumeric characters.
                     * @param _loadBalancerId Cloud Load Balancer instance ID. The format is alb- followed by 8 alphanumeric characters.
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
                     * 获取Whether the health check result contains forwarding rules. If false, only return the health status of the default forwarding rule. If true, return the health status of all rules (including the default rule).
Valid values:
true: yes
`false` (default value): no.
                     * @return IncludeRule Whether the health check result contains forwarding rules. If false, only return the health status of the default forwarding rule. If true, return the health status of all rules (including the default rule).
Valid values:
true: yes
`false` (default value): no.
                     * 
                     */
                    bool GetIncludeRule() const;

                    /**
                     * 设置Whether the health check result contains forwarding rules. If false, only return the health status of the default forwarding rule. If true, return the health status of all rules (including the default rule).
Valid values:
true: yes
`false` (default value): no.
                     * @param _includeRule Whether the health check result contains forwarding rules. If false, only return the health status of the default forwarding rule. If true, return the health status of all rules (including the default rule).
Valid values:
true: yes
`false` (default value): no.
                     * 
                     */
                    void SetIncludeRule(const bool& _includeRule);

                    /**
                     * 判断参数 IncludeRule 是否已赋值
                     * @return IncludeRule 是否已赋值
                     * 
                     */
                    bool IncludeRuleHasBeenSet() const;

                    /**
                     * 获取Maximum number of data records read this time.
Value: 1-100.
Default value: 20
                     * @return MaxResults Maximum number of data records read this time.
Value: 1-100.
Default value: 20
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置Maximum number of data records read this time.
Value: 1-100.
Default value: 20
                     * @param _maxResults Maximum number of data records read this time.
Value: 1-100.
Default value: 20
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取Token for querying the next page. Not required for the first query.
                     * @return NextToken Token for querying the next page. Not required for the first query.
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置Token for querying the next page. Not required for the first query.
                     * @param _nextToken Token for querying the next page. Not required for the first query.
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * Listener ID, in the format of lst- followed by 8 alphanumeric characters.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Cloud Load Balancer instance ID. The format is alb- followed by 8 alphanumeric characters.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Whether the health check result contains forwarding rules. If false, only return the health status of the default forwarding rule. If true, return the health status of all rules (including the default rule).
Valid values:
true: yes
`false` (default value): no.
                     */
                    bool m_includeRule;
                    bool m_includeRuleHasBeenSet;

                    /**
                     * Maximum number of data records read this time.
Value: 1-100.
Default value: 20
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * Token for querying the next page. Not required for the first query.
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERHEALTHSTATUSREQUEST_H_
