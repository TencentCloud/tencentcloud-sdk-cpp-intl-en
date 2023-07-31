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
                     * 获取Unique CLB ID
                     * @return LoadBalancerId Unique CLB ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置Unique CLB ID
                     * @param _loadBalancerId Unique CLB ID
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
                     * 获取CLB instance name
                     * @return LoadBalancerName CLB instance name
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置CLB instance name
                     * @param _loadBalancerName CLB instance name
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
                     * 获取Whether the target opens traffic from CLB to the internet. If yes (true), only security groups on CLB will be verified; if no (false), security groups on both CLB and backend instance need to be verified.
                     * @return LoadBalancerPassToTarget Whether the target opens traffic from CLB to the internet. If yes (true), only security groups on CLB will be verified; if no (false), security groups on both CLB and backend instance need to be verified.
                     * 
                     */
                    bool GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置Whether the target opens traffic from CLB to the internet. If yes (true), only security groups on CLB will be verified; if no (false), security groups on both CLB and backend instance need to be verified.
                     * @param _loadBalancerPassToTarget Whether the target opens traffic from CLB to the internet. If yes (true), only security groups on CLB will be verified; if no (false), security groups on both CLB and backend instance need to be verified.
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
                     * 获取Whether to enable cross-region binding 2.0
                     * @return SnatPro Whether to enable cross-region binding 2.0
                     * 
                     */
                    bool GetSnatPro() const;

                    /**
                     * 设置Whether to enable cross-region binding 2.0
                     * @param _snatPro Whether to enable cross-region binding 2.0
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
                     * 获取Specifies whether to enable deletion protection.
                     * @return DeleteProtect Specifies whether to enable deletion protection.
                     * 
                     */
                    bool GetDeleteProtect() const;

                    /**
                     * 设置Specifies whether to enable deletion protection.
                     * @param _deleteProtect Specifies whether to enable deletion protection.
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
                     * 获取Modifies the second-level domain name of CLB from mycloud.com to tencentclb.com. Note that the sub-domain names will be changed as well. After the modification, mycloud.com will be invalidated. 
                     * @return ModifyClassicDomain Modifies the second-level domain name of CLB from mycloud.com to tencentclb.com. Note that the sub-domain names will be changed as well. After the modification, mycloud.com will be invalidated. 
                     * 
                     */
                    bool GetModifyClassicDomain() const;

                    /**
                     * 设置Modifies the second-level domain name of CLB from mycloud.com to tencentclb.com. Note that the sub-domain names will be changed as well. After the modification, mycloud.com will be invalidated. 
                     * @param _modifyClassicDomain Modifies the second-level domain name of CLB from mycloud.com to tencentclb.com. Note that the sub-domain names will be changed as well. After the modification, mycloud.com will be invalidated. 
                     * 
                     */
                    void SetModifyClassicDomain(const bool& _modifyClassicDomain);

                    /**
                     * 判断参数 ModifyClassicDomain 是否已赋值
                     * @return ModifyClassicDomain 是否已赋值
                     * 
                     */
                    bool ModifyClassicDomainHasBeenSet() const;

                private:

                    /**
                     * Unique CLB ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB instance name
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
                     * Whether the target opens traffic from CLB to the internet. If yes (true), only security groups on CLB will be verified; if no (false), security groups on both CLB and backend instance need to be verified.
                     */
                    bool m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                    /**
                     * Whether to enable cross-region binding 2.0
                     */
                    bool m_snatPro;
                    bool m_snatProHasBeenSet;

                    /**
                     * Specifies whether to enable deletion protection.
                     */
                    bool m_deleteProtect;
                    bool m_deleteProtectHasBeenSet;

                    /**
                     * Modifies the second-level domain name of CLB from mycloud.com to tencentclb.com. Note that the sub-domain names will be changed as well. After the modification, mycloud.com will be invalidated. 
                     */
                    bool m_modifyClassicDomain;
                    bool m_modifyClassicDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_
