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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DETACHLOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DETACHLOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/ForwardLoadBalancerIdentification.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DetachLoadBalancers request structure.
                */
                class DetachLoadBalancersRequest : public AbstractModel
                {
                public:
                    DetachLoadBalancersRequest();
                    ~DetachLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scaling group ID. obtain the scaling group ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api DescribeAutoScalingGroups (https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1), and retrieve AutoScalingGroupId from the returned information.
                     * @return AutoScalingGroupId Scaling group ID. obtain the scaling group ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api DescribeAutoScalingGroups (https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1), and retrieve AutoScalingGroupId from the returned information.
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Scaling group ID. obtain the scaling group ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api DescribeAutoScalingGroups (https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1), and retrieve AutoScalingGroupId from the returned information.
                     * @param _autoScalingGroupId Scaling group ID. obtain the scaling group ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api DescribeAutoScalingGroups (https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1), and retrieve AutoScalingGroupId from the returned information.
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Specifies a list of classic load balancer ids with a maximum length of 20. either LoadBalancerIds or ForwardLoadBalancerIdentifications can be specified at the same time. can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * @return LoadBalancerIds Specifies a list of classic load balancer ids with a maximum length of 20. either LoadBalancerIds or ForwardLoadBalancerIdentifications can be specified at the same time. can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置Specifies a list of classic load balancer ids with a maximum length of 20. either LoadBalancerIds or ForwardLoadBalancerIdentifications can be specified at the same time. can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * @param _loadBalancerIds Specifies a list of classic load balancer ids with a maximum length of 20. either LoadBalancerIds or ForwardLoadBalancerIdentifications can be specified at the same time. can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取Specifies the list of cloud load balancer identification information with a maximum length of 100. either LoadBalancerIds or ForwardLoadBalancerIdentifications can be specified at the same time. can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * @return ForwardLoadBalancerIdentifications Specifies the list of cloud load balancer identification information with a maximum length of 100. either LoadBalancerIds or ForwardLoadBalancerIdentifications can be specified at the same time. can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * 
                     */
                    std::vector<ForwardLoadBalancerIdentification> GetForwardLoadBalancerIdentifications() const;

                    /**
                     * 设置Specifies the list of cloud load balancer identification information with a maximum length of 100. either LoadBalancerIds or ForwardLoadBalancerIdentifications can be specified at the same time. can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * @param _forwardLoadBalancerIdentifications Specifies the list of cloud load balancer identification information with a maximum length of 100. either LoadBalancerIds or ForwardLoadBalancerIdentifications can be specified at the same time. can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * 
                     */
                    void SetForwardLoadBalancerIdentifications(const std::vector<ForwardLoadBalancerIdentification>& _forwardLoadBalancerIdentifications);

                    /**
                     * 判断参数 ForwardLoadBalancerIdentifications 是否已赋值
                     * @return ForwardLoadBalancerIdentifications 是否已赋值
                     * 
                     */
                    bool ForwardLoadBalancerIdentificationsHasBeenSet() const;

                private:

                    /**
                     * Scaling group ID. obtain the scaling group ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api DescribeAutoScalingGroups (https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1), and retrieve AutoScalingGroupId from the returned information.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Specifies a list of classic load balancer ids with a maximum length of 20. either LoadBalancerIds or ForwardLoadBalancerIdentifications can be specified at the same time. can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * Specifies the list of cloud load balancer identification information with a maximum length of 100. either LoadBalancerIds or ForwardLoadBalancerIdentifications can be specified at the same time. can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     */
                    std::vector<ForwardLoadBalancerIdentification> m_forwardLoadBalancerIdentifications;
                    bool m_forwardLoadBalancerIdentificationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DETACHLOADBALANCERSREQUEST_H_
