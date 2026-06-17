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
                     * 获取<p>Unique ID of the Cloud Load Balancer (CLB). You can call the <a href="https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1">DescribeLoadBalancers</a> API to obtain the ID.</p>
                     * @return LoadBalancerId <p>Unique ID of the Cloud Load Balancer (CLB). You can call the <a href="https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1">DescribeLoadBalancers</a> API to obtain the ID.</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>Unique ID of the Cloud Load Balancer (CLB). You can call the <a href="https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1">DescribeLoadBalancers</a> API to obtain the ID.</p>
                     * @param _loadBalancerId <p>Unique ID of the Cloud Load Balancer (CLB). You can call the <a href="https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1">DescribeLoadBalancers</a> API to obtain the ID.</p>
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
                     * 获取<p>CLB instance name. Rules: 1-80 internationally compatible characters including letters, Chinese characters, digits, "-", "_", and other common characters (Unicode supplementary characters such as emojis and rare Chinese characters are forbidden).</p>
                     * @return LoadBalancerName <p>CLB instance name. Rules: 1-80 internationally compatible characters including letters, Chinese characters, digits, "-", "_", and other common characters (Unicode supplementary characters such as emojis and rare Chinese characters are forbidden).</p>
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置<p>CLB instance name. Rules: 1-80 internationally compatible characters including letters, Chinese characters, digits, "-", "_", and other common characters (Unicode supplementary characters such as emojis and rare Chinese characters are forbidden).</p>
                     * @param _loadBalancerName <p>CLB instance name. Rules: 1-80 internationally compatible characters including letters, Chinese characters, digits, "-", "_", and other common characters (Unicode supplementary characters such as emojis and rare Chinese characters are forbidden).</p>
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
                     * 获取<p>Set the backend service information for cross-region binding 1.0 of Cloud Load Balancer.</p>
                     * @return TargetRegionInfo <p>Set the backend service information for cross-region binding 1.0 of Cloud Load Balancer.</p>
                     * 
                     */
                    TargetRegionInfo GetTargetRegionInfo() const;

                    /**
                     * 设置<p>Set the backend service information for cross-region binding 1.0 of Cloud Load Balancer.</p>
                     * @param _targetRegionInfo <p>Set the backend service information for cross-region binding 1.0 of Cloud Load Balancer.</p>
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
                     * 获取<p>Network billing related parameters</p>
                     * @return InternetChargeInfo <p>Network billing related parameters</p>
                     * 
                     */
                    InternetAccessible GetInternetChargeInfo() const;

                    /**
                     * 设置<p>Network billing related parameters</p>
                     * @param _internetChargeInfo <p>Network billing related parameters</p>
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
                     * 获取<p>Allow CLB traffic to the Target.<br>Enable (true): verify security groups on CLB;<br>deny CLB traffic to the Target (false): verify security groups on both CLB and backend instances.<br>Leave blank for no modification.</p>
                     * @return LoadBalancerPassToTarget <p>Allow CLB traffic to the Target.<br>Enable (true): verify security groups on CLB;<br>deny CLB traffic to the Target (false): verify security groups on both CLB and backend instances.<br>Leave blank for no modification.</p>
                     * 
                     */
                    bool GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置<p>Allow CLB traffic to the Target.<br>Enable (true): verify security groups on CLB;<br>deny CLB traffic to the Target (false): verify security groups on both CLB and backend instances.<br>Leave blank for no modification.</p>
                     * @param _loadBalancerPassToTarget <p>Allow CLB traffic to the Target.<br>Enable (true): verify security groups on CLB;<br>deny CLB traffic to the Target (false): verify security groups on both CLB and backend instances.<br>Leave blank for no modification.</p>
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
                     * 获取<p>Switchover between different billing modes: 0 means no switchover, 1 means switch between prepaid and postpaid, 2 means switch between postpaid modes. Default value: 0</p>
                     * @return SwitchFlag <p>Switchover between different billing modes: 0 means no switchover, 1 means switch between prepaid and postpaid, 2 means switch between postpaid modes. Default value: 0</p>
                     * 
                     */
                    uint64_t GetSwitchFlag() const;

                    /**
                     * 设置<p>Switchover between different billing modes: 0 means no switchover, 1 means switch between prepaid and postpaid, 2 means switch between postpaid modes. Default value: 0</p>
                     * @param _switchFlag <p>Switchover between different billing modes: 0 means no switchover, 1 means switch between prepaid and postpaid, 2 means switch between postpaid modes. Default value: 0</p>
                     * 
                     */
                    void SetSwitchFlag(const uint64_t& _switchFlag);

                    /**
                     * 判断参数 SwitchFlag 是否已赋值
                     * @return SwitchFlag 是否已赋值
                     * 
                     */
                    bool SwitchFlagHasBeenSet() const;

                    /**
                     * 获取<p>Whether cross-region binding 2.0 is enabled. Leave it blank for no modification.</p>
                     * @return SnatPro <p>Whether cross-region binding 2.0 is enabled. Leave it blank for no modification.</p>
                     * 
                     */
                    bool GetSnatPro() const;

                    /**
                     * 设置<p>Whether cross-region binding 2.0 is enabled. Leave it blank for no modification.</p>
                     * @param _snatPro <p>Whether cross-region binding 2.0 is enabled. Leave it blank for no modification.</p>
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
                     * 获取<p>Whether to enable deletion protection. Leave it empty to skip modification.</p>
                     * @return DeleteProtect <p>Whether to enable deletion protection. Leave it empty to skip modification.</p>
                     * 
                     */
                    bool GetDeleteProtect() const;

                    /**
                     * 设置<p>Whether to enable deletion protection. Leave it empty to skip modification.</p>
                     * @param _deleteProtect <p>Whether to enable deletion protection. Leave it empty to skip modification.</p>
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
                     * 获取<p>Change the second-level domain name of Cloud Load Balancer (CLB) from mycloud.com to tencentclb.com. The subdomain will also be transformed. After modification, the mycloud.com domain name will become invalid. Leave it blank if no modification is needed.</p>
                     * @return ModifyClassicDomain <p>Change the second-level domain name of Cloud Load Balancer (CLB) from mycloud.com to tencentclb.com. The subdomain will also be transformed. After modification, the mycloud.com domain name will become invalid. Leave it blank if no modification is needed.</p>
                     * 
                     */
                    bool GetModifyClassicDomain() const;

                    /**
                     * 设置<p>Change the second-level domain name of Cloud Load Balancer (CLB) from mycloud.com to tencentclb.com. The subdomain will also be transformed. After modification, the mycloud.com domain name will become invalid. Leave it blank if no modification is needed.</p>
                     * @param _modifyClassicDomain <p>Change the second-level domain name of Cloud Load Balancer (CLB) from mycloud.com to tencentclb.com. The subdomain will also be transformed. After modification, the mycloud.com domain name will become invalid. Leave it blank if no modification is needed.</p>
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
                     * 获取<p>Id of the associated endpoint, which can be queried via the <a href="https://www.tencentcloud.com/document/product/215/54679?from_cn_redirect=1">DescribeVpcEndPoint</a> api. Input an empty string to unbind.</p>
                     * @return AssociateEndpoint <p>Id of the associated endpoint, which can be queried via the <a href="https://www.tencentcloud.com/document/product/215/54679?from_cn_redirect=1">DescribeVpcEndPoint</a> api. Input an empty string to unbind.</p>
                     * 
                     */
                    std::string GetAssociateEndpoint() const;

                    /**
                     * 设置<p>Id of the associated endpoint, which can be queried via the <a href="https://www.tencentcloud.com/document/product/215/54679?from_cn_redirect=1">DescribeVpcEndPoint</a> api. Input an empty string to unbind.</p>
                     * @param _associateEndpoint <p>Id of the associated endpoint, which can be queried via the <a href="https://www.tencentcloud.com/document/product/215/54679?from_cn_redirect=1">DescribeVpcEndPoint</a> api. Input an empty string to unbind.</p>
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
                     * <p>Unique ID of the Cloud Load Balancer (CLB). You can call the <a href="https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1">DescribeLoadBalancers</a> API to obtain the ID.</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>CLB instance name. Rules: 1-80 internationally compatible characters including letters, Chinese characters, digits, "-", "_", and other common characters (Unicode supplementary characters such as emojis and rare Chinese characters are forbidden).</p>
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * <p>Set the backend service information for cross-region binding 1.0 of Cloud Load Balancer.</p>
                     */
                    TargetRegionInfo m_targetRegionInfo;
                    bool m_targetRegionInfoHasBeenSet;

                    /**
                     * <p>Network billing related parameters</p>
                     */
                    InternetAccessible m_internetChargeInfo;
                    bool m_internetChargeInfoHasBeenSet;

                    /**
                     * <p>Allow CLB traffic to the Target.<br>Enable (true): verify security groups on CLB;<br>deny CLB traffic to the Target (false): verify security groups on both CLB and backend instances.<br>Leave blank for no modification.</p>
                     */
                    bool m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                    /**
                     * <p>Switchover between different billing modes: 0 means no switchover, 1 means switch between prepaid and postpaid, 2 means switch between postpaid modes. Default value: 0</p>
                     */
                    uint64_t m_switchFlag;
                    bool m_switchFlagHasBeenSet;

                    /**
                     * <p>Whether cross-region binding 2.0 is enabled. Leave it blank for no modification.</p>
                     */
                    bool m_snatPro;
                    bool m_snatProHasBeenSet;

                    /**
                     * <p>Whether to enable deletion protection. Leave it empty to skip modification.</p>
                     */
                    bool m_deleteProtect;
                    bool m_deleteProtectHasBeenSet;

                    /**
                     * <p>Change the second-level domain name of Cloud Load Balancer (CLB) from mycloud.com to tencentclb.com. The subdomain will also be transformed. After modification, the mycloud.com domain name will become invalid. Leave it blank if no modification is needed.</p>
                     */
                    bool m_modifyClassicDomain;
                    bool m_modifyClassicDomainHasBeenSet;

                    /**
                     * <p>Id of the associated endpoint, which can be queried via the <a href="https://www.tencentcloud.com/document/product/215/54679?from_cn_redirect=1">DescribeVpcEndPoint</a> api. Input an empty string to unbind.</p>
                     */
                    std::string m_associateEndpoint;
                    bool m_associateEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_
