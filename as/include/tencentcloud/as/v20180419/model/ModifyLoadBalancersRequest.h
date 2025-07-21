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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/ForwardLoadBalancer.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancers request structure.
                */
                class ModifyLoadBalancersRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancersRequest();
                    ~ModifyLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scaling group ID. you can obtain the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.
                     * @return AutoScalingGroupId Scaling group ID. you can obtain the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Scaling group ID. you can obtain the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.
                     * @param _autoScalingGroupId Scaling group ID. you can obtain the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.
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
                     * 获取List of classic clb ids. currently, the maximum length is 20. you cannot specify LoadBalancerIds and ForwardLoadBalancers at the same time. it can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * @return LoadBalancerIds List of classic clb ids. currently, the maximum length is 20. you cannot specify LoadBalancerIds and ForwardLoadBalancers at the same time. it can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置List of classic clb ids. currently, the maximum length is 20. you cannot specify LoadBalancerIds and ForwardLoadBalancers at the same time. it can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * @param _loadBalancerIds List of classic clb ids. currently, the maximum length is 20. you cannot specify LoadBalancerIds and ForwardLoadBalancers at the same time. it can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
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
                     * 获取Specifies the list of load balancers with a current maximum length of 100. either LoadBalancerIds or ForwardLoadBalancers can be specified at the same time. can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * @return ForwardLoadBalancers Specifies the list of load balancers with a current maximum length of 100. either LoadBalancerIds or ForwardLoadBalancers can be specified at the same time. can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * 
                     */
                    std::vector<ForwardLoadBalancer> GetForwardLoadBalancers() const;

                    /**
                     * 设置Specifies the list of load balancers with a current maximum length of 100. either LoadBalancerIds or ForwardLoadBalancers can be specified at the same time. can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * @param _forwardLoadBalancers Specifies the list of load balancers with a current maximum length of 100. either LoadBalancerIds or ForwardLoadBalancers can be specified at the same time. can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     * 
                     */
                    void SetForwardLoadBalancers(const std::vector<ForwardLoadBalancer>& _forwardLoadBalancers);

                    /**
                     * 判断参数 ForwardLoadBalancers 是否已赋值
                     * @return ForwardLoadBalancers 是否已赋值
                     * 
                     */
                    bool ForwardLoadBalancersHasBeenSet() const;

                    /**
                     * 获取CLB verification policy. Valid values: ALL and DIFF. Default value: ALL.
<li>ALL: The CLB passes the verification only when all CLB parameters are valid. Otherwise, a verification error occurs.</li>
<li>DIFF: The CLB passes the verification only when the CLB parameters with changes are valid. Otherwise, a verification error occurs.</li>
                     * @return LoadBalancersCheckPolicy CLB verification policy. Valid values: ALL and DIFF. Default value: ALL.
<li>ALL: The CLB passes the verification only when all CLB parameters are valid. Otherwise, a verification error occurs.</li>
<li>DIFF: The CLB passes the verification only when the CLB parameters with changes are valid. Otherwise, a verification error occurs.</li>
                     * 
                     */
                    std::string GetLoadBalancersCheckPolicy() const;

                    /**
                     * 设置CLB verification policy. Valid values: ALL and DIFF. Default value: ALL.
<li>ALL: The CLB passes the verification only when all CLB parameters are valid. Otherwise, a verification error occurs.</li>
<li>DIFF: The CLB passes the verification only when the CLB parameters with changes are valid. Otherwise, a verification error occurs.</li>
                     * @param _loadBalancersCheckPolicy CLB verification policy. Valid values: ALL and DIFF. Default value: ALL.
<li>ALL: The CLB passes the verification only when all CLB parameters are valid. Otherwise, a verification error occurs.</li>
<li>DIFF: The CLB passes the verification only when the CLB parameters with changes are valid. Otherwise, a verification error occurs.</li>
                     * 
                     */
                    void SetLoadBalancersCheckPolicy(const std::string& _loadBalancersCheckPolicy);

                    /**
                     * 判断参数 LoadBalancersCheckPolicy 是否已赋值
                     * @return LoadBalancersCheckPolicy 是否已赋值
                     * 
                     */
                    bool LoadBalancersCheckPolicyHasBeenSet() const;

                private:

                    /**
                     * Scaling group ID. you can obtain the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * List of classic clb ids. currently, the maximum length is 20. you cannot specify LoadBalancerIds and ForwardLoadBalancers at the same time. it can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * Specifies the list of load balancers with a current maximum length of 100. either LoadBalancerIds or ForwardLoadBalancers can be specified at the same time. can be obtained through the [DescribeLoadBalancers](https://intl.cloud.tencent.com/document/product/214/30685?from_cn_redirect=1) api.
                     */
                    std::vector<ForwardLoadBalancer> m_forwardLoadBalancers;
                    bool m_forwardLoadBalancersHasBeenSet;

                    /**
                     * CLB verification policy. Valid values: ALL and DIFF. Default value: ALL.
<li>ALL: The CLB passes the verification only when all CLB parameters are valid. Otherwise, a verification error occurs.</li>
<li>DIFF: The CLB passes the verification only when the CLB parameters with changes are valid. Otherwise, a verification error occurs.</li>
                     */
                    std::string m_loadBalancersCheckPolicy;
                    bool m_loadBalancersCheckPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLOADBALANCERSREQUEST_H_
