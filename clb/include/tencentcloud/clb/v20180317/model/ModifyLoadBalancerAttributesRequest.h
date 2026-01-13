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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TargetRegionInfo.h>
#include <tencentcloud/clb/v20180317/model/InternetAccessible.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancerAttributes request structure.
                */
                class ModifyLoadBalancerAttributesRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancerAttributesRequest();
                    ~ModifyLoadBalancerAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the unique ID of the cloud load balancer. you can call the [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     * @return LoadBalancerId Specifies the unique ID of the cloud load balancer. you can call the [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置Specifies the unique ID of the cloud load balancer. you can call the [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     * @param _loadBalancerId Specifies the unique ID of the cloud load balancer. you can call the [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
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
                     * 获取Load balancing instance name. rule: 1-60 english letters, chinese characters, digits, hyphens "-", or underscores "_".
                     * @return LoadBalancerName Load balancing instance name. rule: 1-60 english letters, chinese characters, digits, hyphens "-", or underscores "_".
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置Load balancing instance name. rule: 1-60 english letters, chinese characters, digits, hyphens "-", or underscores "_".
                     * @param _loadBalancerName Load balancing instance name. rule: 1-60 english letters, chinese characters, digits, hyphens "-", or underscores "_".
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取The backend service information of cross-region binding 1.0
                     * @return TargetRegionInfo The backend service information of cross-region binding 1.0
                     * 
                     */
                    TargetRegionInfo GetTargetRegionInfo() const;

                    /**
                     * 设置The backend service information of cross-region binding 1.0
                     * @param _targetRegionInfo The backend service information of cross-region binding 1.0
                     * 
                     */
                    void SetTargetRegionInfo(const TargetRegionInfo& _targetRegionInfo);

                    /**
                     * 判断参数 TargetRegionInfo 是否已赋值
                     * @return TargetRegionInfo 是否已赋值
                     * 
                     */
                    bool TargetRegionInfoHasBeenSet() const;

                    /**
                     * 获取Network billing parameter
                     * @return InternetChargeInfo Network billing parameter
                     * 
                     */
                    InternetAccessible GetInternetChargeInfo() const;

                    /**
                     * 设置Network billing parameter
                     * @param _internetChargeInfo Network billing parameter
                     * 
                     */
                    void SetInternetChargeInfo(const InternetAccessible& _internetChargeInfo);

                    /**
                     * 判断参数 InternetChargeInfo 是否已赋值
                     * @return InternetChargeInfo 是否已赋值
                     * 
                     */
                    bool InternetChargeInfoHasBeenSet() const;

                    /**
                     * 获取Specifies whether to allow CLB traffic to the Target.
Enable pass-through (true): verify security groups on CLB only.
Denies CLB traffic to the target (false): verify security groups on both CLB and backend instances.
Specifies no modification if left blank.
                     * @return LoadBalancerPassToTarget Specifies whether to allow CLB traffic to the Target.
Enable pass-through (true): verify security groups on CLB only.
Denies CLB traffic to the target (false): verify security groups on both CLB and backend instances.
Specifies no modification if left blank.
                     * 
                     */
                    bool GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置Specifies whether to allow CLB traffic to the Target.
Enable pass-through (true): verify security groups on CLB only.
Denies CLB traffic to the target (false): verify security groups on both CLB and backend instances.
Specifies no modification if left blank.
                     * @param _loadBalancerPassToTarget Specifies whether to allow CLB traffic to the Target.
Enable pass-through (true): verify security groups on CLB only.
Denies CLB traffic to the target (false): verify security groups on both CLB and backend instances.
Specifies no modification if left blank.
                     * 
                     */
                    void SetLoadBalancerPassToTarget(const bool& _loadBalancerPassToTarget);

                    /**
                     * 判断参数 LoadBalancerPassToTarget 是否已赋值
                     * @return LoadBalancerPassToTarget 是否已赋值
                     * 
                     */
                    bool LoadBalancerPassToTargetHasBeenSet() const;

                    /**
                     * 获取Specifies whether the cross-region binding 2.0 feature is enabled. leave blank for no modification.
                     * @return SnatPro Specifies whether the cross-region binding 2.0 feature is enabled. leave blank for no modification.
                     * 
                     */
                    bool GetSnatPro() const;

                    /**
                     * 设置Specifies whether the cross-region binding 2.0 feature is enabled. leave blank for no modification.
                     * @param _snatPro Specifies whether the cross-region binding 2.0 feature is enabled. leave blank for no modification.
                     * 
                     */
                    void SetSnatPro(const bool& _snatPro);

                    /**
                     * 判断参数 SnatPro 是否已赋值
                     * @return SnatPro 是否已赋值
                     * 
                     */
                    bool SnatProHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable deletion protection. leave it blank to keep the current setting.
                     * @return DeleteProtect Specifies whether to enable deletion protection. leave it blank to keep the current setting.
                     * 
                     */
                    bool GetDeleteProtect() const;

                    /**
                     * 设置Specifies whether to enable deletion protection. leave it blank to keep the current setting.
                     * @param _deleteProtect Specifies whether to enable deletion protection. leave it blank to keep the current setting.
                     * 
                     */
                    void SetDeleteProtect(const bool& _deleteProtect);

                    /**
                     * 判断参数 DeleteProtect 是否已赋值
                     * @return DeleteProtect 是否已赋值
                     * 
                     */
                    bool DeleteProtectHasBeenSet() const;

                    /**
                     * 获取Modifies the second-level domain name of cloud load balancer from mycloud.com to tencentclb.com. the subdomain will be transformed, and the mycloud.com domain name will become invalid after modification. leave it blank if no modification is required.
                     * @return ModifyClassicDomain Modifies the second-level domain name of cloud load balancer from mycloud.com to tencentclb.com. the subdomain will be transformed, and the mycloud.com domain name will become invalid after modification. leave it blank if no modification is required.
                     * 
                     */
                    bool GetModifyClassicDomain() const;

                    /**
                     * 设置Modifies the second-level domain name of cloud load balancer from mycloud.com to tencentclb.com. the subdomain will be transformed, and the mycloud.com domain name will become invalid after modification. leave it blank if no modification is required.
                     * @param _modifyClassicDomain Modifies the second-level domain name of cloud load balancer from mycloud.com to tencentclb.com. the subdomain will be transformed, and the mycloud.com domain name will become invalid after modification. leave it blank if no modification is required.
                     * 
                     */
                    void SetModifyClassicDomain(const bool& _modifyClassicDomain);

                    /**
                     * 判断参数 ModifyClassicDomain 是否已赋值
                     * @return ModifyClassicDomain 是否已赋值
                     * 
                     */
                    bool ModifyClassicDomainHasBeenSet() const;

                    /**
                     * 获取The associated endpoint Id, which can be queried via the [DescribeVpcEndPoint](https://www.tencentcloud.com/document/product/215/54679?from_cn_redirect=1) api. input an empty string to unbind.
                     * @return AssociateEndpoint The associated endpoint Id, which can be queried via the [DescribeVpcEndPoint](https://www.tencentcloud.com/document/product/215/54679?from_cn_redirect=1) api. input an empty string to unbind.
                     * 
                     */
                    std::string GetAssociateEndpoint() const;

                    /**
                     * 设置The associated endpoint Id, which can be queried via the [DescribeVpcEndPoint](https://www.tencentcloud.com/document/product/215/54679?from_cn_redirect=1) api. input an empty string to unbind.
                     * @param _associateEndpoint The associated endpoint Id, which can be queried via the [DescribeVpcEndPoint](https://www.tencentcloud.com/document/product/215/54679?from_cn_redirect=1) api. input an empty string to unbind.
                     * 
                     */
                    void SetAssociateEndpoint(const std::string& _associateEndpoint);

                    /**
                     * 判断参数 AssociateEndpoint 是否已赋值
                     * @return AssociateEndpoint 是否已赋值
                     * 
                     */
                    bool AssociateEndpointHasBeenSet() const;

                private:

                    /**
                     * Specifies the unique ID of the cloud load balancer. you can call the [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Load balancing instance name. rule: 1-60 english letters, chinese characters, digits, hyphens "-", or underscores "_".
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * The backend service information of cross-region binding 1.0
                     */
                    TargetRegionInfo m_targetRegionInfo;
                    bool m_targetRegionInfoHasBeenSet;

                    /**
                     * Network billing parameter
                     */
                    InternetAccessible m_internetChargeInfo;
                    bool m_internetChargeInfoHasBeenSet;

                    /**
                     * Specifies whether to allow CLB traffic to the Target.
Enable pass-through (true): verify security groups on CLB only.
Denies CLB traffic to the target (false): verify security groups on both CLB and backend instances.
Specifies no modification if left blank.
                     */
                    bool m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                    /**
                     * Specifies whether the cross-region binding 2.0 feature is enabled. leave blank for no modification.
                     */
                    bool m_snatPro;
                    bool m_snatProHasBeenSet;

                    /**
                     * Specifies whether to enable deletion protection. leave it blank to keep the current setting.
                     */
                    bool m_deleteProtect;
                    bool m_deleteProtectHasBeenSet;

                    /**
                     * Modifies the second-level domain name of cloud load balancer from mycloud.com to tencentclb.com. the subdomain will be transformed, and the mycloud.com domain name will become invalid after modification. leave it blank if no modification is required.
                     */
                    bool m_modifyClassicDomain;
                    bool m_modifyClassicDomainHasBeenSet;

                    /**
                     * The associated endpoint Id, which can be queried via the [DescribeVpcEndPoint](https://www.tencentcloud.com/document/product/215/54679?from_cn_redirect=1) api. input an empty string to unbind.
                     */
                    std::string m_associateEndpoint;
                    bool m_associateEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_
