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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_PLAN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_PLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ZoneInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Plan information
                */
                class Plan : public AbstractModel
                {
                public:
                    Plan();
                    ~Plan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Plan type. Valid values:</p><li>plan-trial: Trial Edition plan;</li><li>plan-personal: Personal Edition plan;</li><li>plan-basic: Basic Edition plan;</li><li>plan-standard: Standard Edition plan;</li><li>plan-enterprise-v2: Enterprise Edition plan;</li><li>plan-enterprise-model-a: Enterprise Edition Model A plan;</li><li>plan-enterprise: Legacy Enterprise Edition plan;</li><li>plan-makers-pro: Makers Pro Edition plan;</li><li>plan-makers-business: Makers Business Edition plan;</li><p>Valid values:</p><ul><li>plan-trial: Trial Edition plan</li><li>plan-personal: Personal Edition plan</li><li>plan-basic: Basic Edition plan</li><li>plan-standard: Standard Edition plan</li><li>plan-enterprise-v2: Enterprise Edition plan</li><li>plan-enterprise-model-a: Enterprise Edition Model A plan</li><li>plan-enterprise: Legacy Enterprise Edition plan</li><li>plan-makers-pro: Makers Pro Edition plan</li><li>plan-makers-business: Makers Business Edition plan</li></ul>
                     * @return PlanType <p>Plan type. Valid values:</p><li>plan-trial: Trial Edition plan;</li><li>plan-personal: Personal Edition plan;</li><li>plan-basic: Basic Edition plan;</li><li>plan-standard: Standard Edition plan;</li><li>plan-enterprise-v2: Enterprise Edition plan;</li><li>plan-enterprise-model-a: Enterprise Edition Model A plan;</li><li>plan-enterprise: Legacy Enterprise Edition plan;</li><li>plan-makers-pro: Makers Pro Edition plan;</li><li>plan-makers-business: Makers Business Edition plan;</li><p>Valid values:</p><ul><li>plan-trial: Trial Edition plan</li><li>plan-personal: Personal Edition plan</li><li>plan-basic: Basic Edition plan</li><li>plan-standard: Standard Edition plan</li><li>plan-enterprise-v2: Enterprise Edition plan</li><li>plan-enterprise-model-a: Enterprise Edition Model A plan</li><li>plan-enterprise: Legacy Enterprise Edition plan</li><li>plan-makers-pro: Makers Pro Edition plan</li><li>plan-makers-business: Makers Business Edition plan</li></ul>
                     * 
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置<p>Plan type. Valid values:</p><li>plan-trial: Trial Edition plan;</li><li>plan-personal: Personal Edition plan;</li><li>plan-basic: Basic Edition plan;</li><li>plan-standard: Standard Edition plan;</li><li>plan-enterprise-v2: Enterprise Edition plan;</li><li>plan-enterprise-model-a: Enterprise Edition Model A plan;</li><li>plan-enterprise: Legacy Enterprise Edition plan;</li><li>plan-makers-pro: Makers Pro Edition plan;</li><li>plan-makers-business: Makers Business Edition plan;</li><p>Valid values:</p><ul><li>plan-trial: Trial Edition plan</li><li>plan-personal: Personal Edition plan</li><li>plan-basic: Basic Edition plan</li><li>plan-standard: Standard Edition plan</li><li>plan-enterprise-v2: Enterprise Edition plan</li><li>plan-enterprise-model-a: Enterprise Edition Model A plan</li><li>plan-enterprise: Legacy Enterprise Edition plan</li><li>plan-makers-pro: Makers Pro Edition plan</li><li>plan-makers-business: Makers Business Edition plan</li></ul>
                     * @param _planType <p>Plan type. Valid values:</p><li>plan-trial: Trial Edition plan;</li><li>plan-personal: Personal Edition plan;</li><li>plan-basic: Basic Edition plan;</li><li>plan-standard: Standard Edition plan;</li><li>plan-enterprise-v2: Enterprise Edition plan;</li><li>plan-enterprise-model-a: Enterprise Edition Model A plan;</li><li>plan-enterprise: Legacy Enterprise Edition plan;</li><li>plan-makers-pro: Makers Pro Edition plan;</li><li>plan-makers-business: Makers Business Edition plan;</li><p>Valid values:</p><ul><li>plan-trial: Trial Edition plan</li><li>plan-personal: Personal Edition plan</li><li>plan-basic: Basic Edition plan</li><li>plan-standard: Standard Edition plan</li><li>plan-enterprise-v2: Enterprise Edition plan</li><li>plan-enterprise-model-a: Enterprise Edition Model A plan</li><li>plan-enterprise: Legacy Enterprise Edition plan</li><li>plan-makers-pro: Makers Pro Edition plan</li><li>plan-makers-business: Makers Business Edition plan</li></ul>
                     * 
                     */
                    void SetPlanType(const std::string& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     * 
                     */
                    bool PlanTypeHasBeenSet() const;

                    /**
                     * 获取<p>Plan ID, in the format of edgeone-2y041pblwaxe.</p>
                     * @return PlanId <p>Plan ID, in the format of edgeone-2y041pblwaxe.</p>
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置<p>Plan ID, in the format of edgeone-2y041pblwaxe.</p>
                     * @param _planId <p>Plan ID, in the format of edgeone-2y041pblwaxe.</p>
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取<p>Service region. Valid values:</p><li>mainland: Chinese mainland;</li><li>overseas: Global (excluding the Chinese mainland);</li><li>global: Global (including the Chinese mainland).</li>
                     * @return Area <p>Service region. Valid values:</p><li>mainland: Chinese mainland;</li><li>overseas: Global (excluding the Chinese mainland);</li><li>global: Global (including the Chinese mainland).</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>Service region. Valid values:</p><li>mainland: Chinese mainland;</li><li>overseas: Global (excluding the Chinese mainland);</li><li>global: Global (including the Chinese mainland).</li>
                     * @param _area <p>Service region. Valid values:</p><li>mainland: Chinese mainland;</li><li>overseas: Global (excluding the Chinese mainland);</li><li>global: Global (including the Chinese mainland).</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>Auto-renewal switch. Valid values:</p><li>true: Auto-renewal enabled;</li><li>false: Auto-renewal disabled.</li>
                     * @return AutoRenewal <p>Auto-renewal switch. Valid values:</p><li>true: Auto-renewal enabled;</li><li>false: Auto-renewal disabled.</li>
                     * 
                     */
                    bool GetAutoRenewal() const;

                    /**
                     * 设置<p>Auto-renewal switch. Valid values:</p><li>true: Auto-renewal enabled;</li><li>false: Auto-renewal disabled.</li>
                     * @param _autoRenewal <p>Auto-renewal switch. Valid values:</p><li>true: Auto-renewal enabled;</li><li>false: Auto-renewal disabled.</li>
                     * 
                     */
                    void SetAutoRenewal(const bool& _autoRenewal);

                    /**
                     * 判断参数 AutoRenewal 是否已赋值
                     * @return AutoRenewal 是否已赋值
                     * 
                     */
                    bool AutoRenewalHasBeenSet() const;

                    /**
                     * 获取<p>Plan status. Valid values:</p><li>normal: Normal;</li><li>expiring-soon: Expiring soon;</li><li>expired: Expired;</li><li>isolated: Isolated;</li><li>overdue-isolated: Isolated due to overdue payment.</li>
                     * @return Status <p>Plan status. Valid values:</p><li>normal: Normal;</li><li>expiring-soon: Expiring soon;</li><li>expired: Expired;</li><li>isolated: Isolated;</li><li>overdue-isolated: Isolated due to overdue payment.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Plan status. Valid values:</p><li>normal: Normal;</li><li>expiring-soon: Expiring soon;</li><li>expired: Expired;</li><li>isolated: Isolated;</li><li>overdue-isolated: Isolated due to overdue payment.</li>
                     * @param _status <p>Plan status. Valid values:</p><li>normal: Normal;</li><li>expiring-soon: Expiring soon;</li><li>expired: Expired;</li><li>isolated: Isolated;</li><li>overdue-isolated: Isolated due to overdue payment.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Billing type. Valid values:</p><li>0: Postpaid;</li><li>1: Prepaid.</li>
                     * @return PayMode <p>Billing type. Valid values:</p><li>0: Postpaid;</li><li>1: Prepaid.</li>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>Billing type. Valid values:</p><li>0: Postpaid;</li><li>1: Prepaid.</li>
                     * @param _payMode <p>Billing type. Valid values:</p><li>0: Postpaid;</li><li>1: Prepaid.</li>
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>Information of the sites bound to the plan, including site id, site name, and site status.</p>
                     * @return ZonesInfo <p>Information of the sites bound to the plan, including site id, site name, and site status.</p>
                     * 
                     */
                    std::vector<ZoneInfo> GetZonesInfo() const;

                    /**
                     * 设置<p>Information of the sites bound to the plan, including site id, site name, and site status.</p>
                     * @param _zonesInfo <p>Information of the sites bound to the plan, including site id, site name, and site status.</p>
                     * 
                     */
                    void SetZonesInfo(const std::vector<ZoneInfo>& _zonesInfo);

                    /**
                     * 判断参数 ZonesInfo 是否已赋值
                     * @return ZonesInfo 是否已赋值
                     * 
                     */
                    bool ZonesInfoHasBeenSet() const;

                    /**
                     * 获取<p>Quota of smart acceleration requests in the plan, in the unit of requests.</p>
                     * @return SmartRequestCapacity <p>Quota of smart acceleration requests in the plan, in the unit of requests.</p>
                     * 
                     */
                    int64_t GetSmartRequestCapacity() const;

                    /**
                     * 设置<p>Quota of smart acceleration requests in the plan, in the unit of requests.</p>
                     * @param _smartRequestCapacity <p>Quota of smart acceleration requests in the plan, in the unit of requests.</p>
                     * 
                     */
                    void SetSmartRequestCapacity(const int64_t& _smartRequestCapacity);

                    /**
                     * 判断参数 SmartRequestCapacity 是否已赋值
                     * @return SmartRequestCapacity 是否已赋值
                     * 
                     */
                    bool SmartRequestCapacityHasBeenSet() const;

                    /**
                     * 获取<p>VAU quota in the plan, in the unit of VAUs.</p>
                     * @return VAUCapacity <p>VAU quota in the plan, in the unit of VAUs.</p>
                     * 
                     */
                    int64_t GetVAUCapacity() const;

                    /**
                     * 设置<p>VAU quota in the plan, in the unit of VAUs.</p>
                     * @param _vAUCapacity <p>VAU quota in the plan, in the unit of VAUs.</p>
                     * 
                     */
                    void SetVAUCapacity(const int64_t& _vAUCapacity);

                    /**
                     * 判断参数 VAUCapacity 是否已赋值
                     * @return VAUCapacity 是否已赋值
                     * 
                     */
                    bool VAUCapacityHasBeenSet() const;

                    /**
                     * 获取<p>Quota of content acceleration traffic in the plan, in the unit of bytes.</p>
                     * @return AccTrafficCapacity <p>Quota of content acceleration traffic in the plan, in the unit of bytes.</p>
                     * 
                     */
                    int64_t GetAccTrafficCapacity() const;

                    /**
                     * 设置<p>Quota of content acceleration traffic in the plan, in the unit of bytes.</p>
                     * @param _accTrafficCapacity <p>Quota of content acceleration traffic in the plan, in the unit of bytes.</p>
                     * 
                     */
                    void SetAccTrafficCapacity(const int64_t& _accTrafficCapacity);

                    /**
                     * 判断参数 AccTrafficCapacity 是否已赋值
                     * @return AccTrafficCapacity 是否已赋值
                     * 
                     */
                    bool AccTrafficCapacityHasBeenSet() const;

                    /**
                     * 获取<p>Quota of client authentication traffic in the plan, in the unit of bytes.</p>
                     * @return ClientAuthTrafficCapacity <p>Quota of client authentication traffic in the plan, in the unit of bytes.</p>
                     * 
                     */
                    int64_t GetClientAuthTrafficCapacity() const;

                    /**
                     * 设置<p>Quota of client authentication traffic in the plan, in the unit of bytes.</p>
                     * @param _clientAuthTrafficCapacity <p>Quota of client authentication traffic in the plan, in the unit of bytes.</p>
                     * 
                     */
                    void SetClientAuthTrafficCapacity(const int64_t& _clientAuthTrafficCapacity);

                    /**
                     * 判断参数 ClientAuthTrafficCapacity 是否已赋值
                     * @return ClientAuthTrafficCapacity 是否已赋值
                     * 
                     */
                    bool ClientAuthTrafficCapacityHasBeenSet() const;

                    /**
                     * 获取<p>Quota of smart acceleration traffic in the plan, in the unit of bytes.</p>
                     * @return SmartTrafficCapacity <p>Quota of smart acceleration traffic in the plan, in the unit of bytes.</p>
                     * 
                     */
                    int64_t GetSmartTrafficCapacity() const;

                    /**
                     * 设置<p>Quota of smart acceleration traffic in the plan, in the unit of bytes.</p>
                     * @param _smartTrafficCapacity <p>Quota of smart acceleration traffic in the plan, in the unit of bytes.</p>
                     * 
                     */
                    void SetSmartTrafficCapacity(const int64_t& _smartTrafficCapacity);

                    /**
                     * 判断参数 SmartTrafficCapacity 是否已赋值
                     * @return SmartTrafficCapacity 是否已赋值
                     * 
                     */
                    bool SmartTrafficCapacityHasBeenSet() const;

                    /**
                     * 获取<p>Quota of DDoS protection traffic in the plan, in the unit of bytes.</p>
                     * @return DDoSTrafficCapacity <p>Quota of DDoS protection traffic in the plan, in the unit of bytes.</p>
                     * 
                     */
                    int64_t GetDDoSTrafficCapacity() const;

                    /**
                     * 设置<p>Quota of DDoS protection traffic in the plan, in the unit of bytes.</p>
                     * @param _dDoSTrafficCapacity <p>Quota of DDoS protection traffic in the plan, in the unit of bytes.</p>
                     * 
                     */
                    void SetDDoSTrafficCapacity(const int64_t& _dDoSTrafficCapacity);

                    /**
                     * 判断参数 DDoSTrafficCapacity 是否已赋值
                     * @return DDoSTrafficCapacity 是否已赋值
                     * 
                     */
                    bool DDoSTrafficCapacityHasBeenSet() const;

                    /**
                     * 获取<p>Quota of security traffic in the plan, in the unit of bytes.</p>
                     * @return SecTrafficCapacity <p>Quota of security traffic in the plan, in the unit of bytes.</p>
                     * 
                     */
                    int64_t GetSecTrafficCapacity() const;

                    /**
                     * 设置<p>Quota of security traffic in the plan, in the unit of bytes.</p>
                     * @param _secTrafficCapacity <p>Quota of security traffic in the plan, in the unit of bytes.</p>
                     * 
                     */
                    void SetSecTrafficCapacity(const int64_t& _secTrafficCapacity);

                    /**
                     * 判断参数 SecTrafficCapacity 是否已赋值
                     * @return SecTrafficCapacity 是否已赋值
                     * 
                     */
                    bool SecTrafficCapacityHasBeenSet() const;

                    /**
                     * 获取<p>Quota of security requests in the plan, in the unit of requests.</p>
                     * @return SecRequestCapacity <p>Quota of security requests in the plan, in the unit of requests.</p>
                     * 
                     */
                    int64_t GetSecRequestCapacity() const;

                    /**
                     * 设置<p>Quota of security requests in the plan, in the unit of requests.</p>
                     * @param _secRequestCapacity <p>Quota of security requests in the plan, in the unit of requests.</p>
                     * 
                     */
                    void SetSecRequestCapacity(const int64_t& _secRequestCapacity);

                    /**
                     * 判断参数 SecRequestCapacity 是否已赋值
                     * @return SecRequestCapacity 是否已赋值
                     * 
                     */
                    bool SecRequestCapacityHasBeenSet() const;

                    /**
                     * 获取<p>Quota of L4 acceleration traffic in the plan, in the unit of bytes.</p>
                     * @return L4TrafficCapacity <p>Quota of L4 acceleration traffic in the plan, in the unit of bytes.</p>
                     * 
                     */
                    int64_t GetL4TrafficCapacity() const;

                    /**
                     * 设置<p>Quota of L4 acceleration traffic in the plan, in the unit of bytes.</p>
                     * @param _l4TrafficCapacity <p>Quota of L4 acceleration traffic in the plan, in the unit of bytes.</p>
                     * 
                     */
                    void SetL4TrafficCapacity(const int64_t& _l4TrafficCapacity);

                    /**
                     * 判断参数 L4TrafficCapacity 是否已赋值
                     * @return L4TrafficCapacity 是否已赋值
                     * 
                     */
                    bool L4TrafficCapacityHasBeenSet() const;

                    /**
                     * 获取<p>Quota of network optimization traffic for the Chinese mainland in the plan, in the unit of bytes.</p>
                     * @return CrossMLCTrafficCapacity <p>Quota of network optimization traffic for the Chinese mainland in the plan, in the unit of bytes.</p>
                     * 
                     */
                    int64_t GetCrossMLCTrafficCapacity() const;

                    /**
                     * 设置<p>Quota of network optimization traffic for the Chinese mainland in the plan, in the unit of bytes.</p>
                     * @param _crossMLCTrafficCapacity <p>Quota of network optimization traffic for the Chinese mainland in the plan, in the unit of bytes.</p>
                     * 
                     */
                    void SetCrossMLCTrafficCapacity(const int64_t& _crossMLCTrafficCapacity);

                    /**
                     * 判断参数 CrossMLCTrafficCapacity 是否已赋值
                     * @return CrossMLCTrafficCapacity 是否已赋值
                     * 
                     */
                    bool CrossMLCTrafficCapacityHasBeenSet() const;

                    /**
                     * 获取<p>Whether the plan allows binding new sites. Valid values:</p><li>true: Allows binding new sites;</li><li>false: Does not allow binding new sites.</li>
                     * @return Bindable <p>Whether the plan allows binding new sites. Valid values:</p><li>true: Allows binding new sites;</li><li>false: Does not allow binding new sites.</li>
                     * 
                     */
                    std::string GetBindable() const;

                    /**
                     * 设置<p>Whether the plan allows binding new sites. Valid values:</p><li>true: Allows binding new sites;</li><li>false: Does not allow binding new sites.</li>
                     * @param _bindable <p>Whether the plan allows binding new sites. Valid values:</p><li>true: Allows binding new sites;</li><li>false: Does not allow binding new sites.</li>
                     * 
                     */
                    void SetBindable(const std::string& _bindable);

                    /**
                     * 判断参数 Bindable 是否已赋值
                     * @return Bindable 是否已赋值
                     * 
                     */
                    bool BindableHasBeenSet() const;

                    /**
                     * 获取<p>Time when the plan takes effect.</p>
                     * @return EnabledTime <p>Time when the plan takes effect.</p>
                     * 
                     */
                    std::string GetEnabledTime() const;

                    /**
                     * 设置<p>Time when the plan takes effect.</p>
                     * @param _enabledTime <p>Time when the plan takes effect.</p>
                     * 
                     */
                    void SetEnabledTime(const std::string& _enabledTime);

                    /**
                     * 判断参数 EnabledTime 是否已赋值
                     * @return EnabledTime 是否已赋值
                     * 
                     */
                    bool EnabledTimeHasBeenSet() const;

                    /**
                     * 获取<p>Expiration time of the plan.</p>
                     * @return ExpiredTime <p>Expiration time of the plan.</p>
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置<p>Expiration time of the plan.</p>
                     * @param _expiredTime <p>Expiration time of the plan.</p>
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取<p>Features supported by the plan. Valid values: <li>ContentAcceleration: content acceleration;</li><li>SmartAcceleration: smart acceleration;</li><li>L4: L4 acceleration;</li><li>Waf: advanced Web protection;</li><li>QUIC: QUIC;</li><li>CrossMLC: network optimization for the Chinese mainland;</li><li>ProcessMedia: media processing;</li><li>L4DDoS: L4 DDoS protection.</li>Only one of the following L7DDoS specifications can appear: <li>L7DDoS.CM30G: L7 DDoS protection - 30 Gbps guaranteed bandwidth in the Chinese mainland;</li><li>L7DDoS.CM60G: L7 DDoS protection - 60 Gbps guaranteed bandwidth in the Chinese mainland;</li><li>L7DDoS.CM100G: L7 DDoS protection - 100 Gbps guaranteed bandwidth in the Chinese mainland;</li><li>L7DDoS.Anycast300G: L7 DDoS protection - 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.AnycastUnlimited: L7 DDoS protection - unlimited Anycast full protection outside the Chinese mainland;</li><li>L7DDoS.CM30G_Anycast300G: L7 DDoS protection - 30 Gbps guaranteed bandwidth in the Chinese mainland and 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.CM60G_Anycast300G: L7 DDoS protection - 60 Gbps guaranteed bandwidth in the Chinese mainland and 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.CM100G_Anycast300G: L7 DDoS protection - 100 Gbps guaranteed bandwidth in the Chinese mainland and 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.CM30G_AnycastUnlimited: L7 DDoS protection - 30 Gbps guaranteed bandwidth in the Chinese mainland and unlimited Anycast full protection outside the Chinese mainland;</li><li>L7DDoS.CM60G_AnycastUnlimited: L7 DDoS protection - 60 Gbps guaranteed bandwidth in the Chinese mainland and unlimited Anycast full protection outside the Chinese mainland;</li><li>L7DDoS.CM100G_AnycastUnlimited: L7 DDoS protection - 100 Gbps guaranteed bandwidth in the Chinese mainland and unlimited Anycast full protection outside the Chinese mainland.</li></p>
                     * @return Features <p>Features supported by the plan. Valid values: <li>ContentAcceleration: content acceleration;</li><li>SmartAcceleration: smart acceleration;</li><li>L4: L4 acceleration;</li><li>Waf: advanced Web protection;</li><li>QUIC: QUIC;</li><li>CrossMLC: network optimization for the Chinese mainland;</li><li>ProcessMedia: media processing;</li><li>L4DDoS: L4 DDoS protection.</li>Only one of the following L7DDoS specifications can appear: <li>L7DDoS.CM30G: L7 DDoS protection - 30 Gbps guaranteed bandwidth in the Chinese mainland;</li><li>L7DDoS.CM60G: L7 DDoS protection - 60 Gbps guaranteed bandwidth in the Chinese mainland;</li><li>L7DDoS.CM100G: L7 DDoS protection - 100 Gbps guaranteed bandwidth in the Chinese mainland;</li><li>L7DDoS.Anycast300G: L7 DDoS protection - 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.AnycastUnlimited: L7 DDoS protection - unlimited Anycast full protection outside the Chinese mainland;</li><li>L7DDoS.CM30G_Anycast300G: L7 DDoS protection - 30 Gbps guaranteed bandwidth in the Chinese mainland and 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.CM60G_Anycast300G: L7 DDoS protection - 60 Gbps guaranteed bandwidth in the Chinese mainland and 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.CM100G_Anycast300G: L7 DDoS protection - 100 Gbps guaranteed bandwidth in the Chinese mainland and 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.CM30G_AnycastUnlimited: L7 DDoS protection - 30 Gbps guaranteed bandwidth in the Chinese mainland and unlimited Anycast full protection outside the Chinese mainland;</li><li>L7DDoS.CM60G_AnycastUnlimited: L7 DDoS protection - 60 Gbps guaranteed bandwidth in the Chinese mainland and unlimited Anycast full protection outside the Chinese mainland;</li><li>L7DDoS.CM100G_AnycastUnlimited: L7 DDoS protection - 100 Gbps guaranteed bandwidth in the Chinese mainland and unlimited Anycast full protection outside the Chinese mainland.</li></p>
                     * 
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置<p>Features supported by the plan. Valid values: <li>ContentAcceleration: content acceleration;</li><li>SmartAcceleration: smart acceleration;</li><li>L4: L4 acceleration;</li><li>Waf: advanced Web protection;</li><li>QUIC: QUIC;</li><li>CrossMLC: network optimization for the Chinese mainland;</li><li>ProcessMedia: media processing;</li><li>L4DDoS: L4 DDoS protection.</li>Only one of the following L7DDoS specifications can appear: <li>L7DDoS.CM30G: L7 DDoS protection - 30 Gbps guaranteed bandwidth in the Chinese mainland;</li><li>L7DDoS.CM60G: L7 DDoS protection - 60 Gbps guaranteed bandwidth in the Chinese mainland;</li><li>L7DDoS.CM100G: L7 DDoS protection - 100 Gbps guaranteed bandwidth in the Chinese mainland;</li><li>L7DDoS.Anycast300G: L7 DDoS protection - 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.AnycastUnlimited: L7 DDoS protection - unlimited Anycast full protection outside the Chinese mainland;</li><li>L7DDoS.CM30G_Anycast300G: L7 DDoS protection - 30 Gbps guaranteed bandwidth in the Chinese mainland and 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.CM60G_Anycast300G: L7 DDoS protection - 60 Gbps guaranteed bandwidth in the Chinese mainland and 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.CM100G_Anycast300G: L7 DDoS protection - 100 Gbps guaranteed bandwidth in the Chinese mainland and 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.CM30G_AnycastUnlimited: L7 DDoS protection - 30 Gbps guaranteed bandwidth in the Chinese mainland and unlimited Anycast full protection outside the Chinese mainland;</li><li>L7DDoS.CM60G_AnycastUnlimited: L7 DDoS protection - 60 Gbps guaranteed bandwidth in the Chinese mainland and unlimited Anycast full protection outside the Chinese mainland;</li><li>L7DDoS.CM100G_AnycastUnlimited: L7 DDoS protection - 100 Gbps guaranteed bandwidth in the Chinese mainland and unlimited Anycast full protection outside the Chinese mainland.</li></p>
                     * @param _features <p>Features supported by the plan. Valid values: <li>ContentAcceleration: content acceleration;</li><li>SmartAcceleration: smart acceleration;</li><li>L4: L4 acceleration;</li><li>Waf: advanced Web protection;</li><li>QUIC: QUIC;</li><li>CrossMLC: network optimization for the Chinese mainland;</li><li>ProcessMedia: media processing;</li><li>L4DDoS: L4 DDoS protection.</li>Only one of the following L7DDoS specifications can appear: <li>L7DDoS.CM30G: L7 DDoS protection - 30 Gbps guaranteed bandwidth in the Chinese mainland;</li><li>L7DDoS.CM60G: L7 DDoS protection - 60 Gbps guaranteed bandwidth in the Chinese mainland;</li><li>L7DDoS.CM100G: L7 DDoS protection - 100 Gbps guaranteed bandwidth in the Chinese mainland;</li><li>L7DDoS.Anycast300G: L7 DDoS protection - 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.AnycastUnlimited: L7 DDoS protection - unlimited Anycast full protection outside the Chinese mainland;</li><li>L7DDoS.CM30G_Anycast300G: L7 DDoS protection - 30 Gbps guaranteed bandwidth in the Chinese mainland and 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.CM60G_Anycast300G: L7 DDoS protection - 60 Gbps guaranteed bandwidth in the Chinese mainland and 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.CM100G_Anycast300G: L7 DDoS protection - 100 Gbps guaranteed bandwidth in the Chinese mainland and 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.CM30G_AnycastUnlimited: L7 DDoS protection - 30 Gbps guaranteed bandwidth in the Chinese mainland and unlimited Anycast full protection outside the Chinese mainland;</li><li>L7DDoS.CM60G_AnycastUnlimited: L7 DDoS protection - 60 Gbps guaranteed bandwidth in the Chinese mainland and unlimited Anycast full protection outside the Chinese mainland;</li><li>L7DDoS.CM100G_AnycastUnlimited: L7 DDoS protection - 100 Gbps guaranteed bandwidth in the Chinese mainland and unlimited Anycast full protection outside the Chinese mainland.</li></p>
                     * 
                     */
                    void SetFeatures(const std::vector<std::string>& _features);

                    /**
                     * 判断参数 Features 是否已赋值
                     * @return Features 是否已赋值
                     * 
                     */
                    bool FeaturesHasBeenSet() const;

                private:

                    /**
                     * <p>Plan type. Valid values:</p><li>plan-trial: Trial Edition plan;</li><li>plan-personal: Personal Edition plan;</li><li>plan-basic: Basic Edition plan;</li><li>plan-standard: Standard Edition plan;</li><li>plan-enterprise-v2: Enterprise Edition plan;</li><li>plan-enterprise-model-a: Enterprise Edition Model A plan;</li><li>plan-enterprise: Legacy Enterprise Edition plan;</li><li>plan-makers-pro: Makers Pro Edition plan;</li><li>plan-makers-business: Makers Business Edition plan;</li><p>Valid values:</p><ul><li>plan-trial: Trial Edition plan</li><li>plan-personal: Personal Edition plan</li><li>plan-basic: Basic Edition plan</li><li>plan-standard: Standard Edition plan</li><li>plan-enterprise-v2: Enterprise Edition plan</li><li>plan-enterprise-model-a: Enterprise Edition Model A plan</li><li>plan-enterprise: Legacy Enterprise Edition plan</li><li>plan-makers-pro: Makers Pro Edition plan</li><li>plan-makers-business: Makers Business Edition plan</li></ul>
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * <p>Plan ID, in the format of edgeone-2y041pblwaxe.</p>
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * <p>Service region. Valid values:</p><li>mainland: Chinese mainland;</li><li>overseas: Global (excluding the Chinese mainland);</li><li>global: Global (including the Chinese mainland).</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>Auto-renewal switch. Valid values:</p><li>true: Auto-renewal enabled;</li><li>false: Auto-renewal disabled.</li>
                     */
                    bool m_autoRenewal;
                    bool m_autoRenewalHasBeenSet;

                    /**
                     * <p>Plan status. Valid values:</p><li>normal: Normal;</li><li>expiring-soon: Expiring soon;</li><li>expired: Expired;</li><li>isolated: Isolated;</li><li>overdue-isolated: Isolated due to overdue payment.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Billing type. Valid values:</p><li>0: Postpaid;</li><li>1: Prepaid.</li>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Information of the sites bound to the plan, including site id, site name, and site status.</p>
                     */
                    std::vector<ZoneInfo> m_zonesInfo;
                    bool m_zonesInfoHasBeenSet;

                    /**
                     * <p>Quota of smart acceleration requests in the plan, in the unit of requests.</p>
                     */
                    int64_t m_smartRequestCapacity;
                    bool m_smartRequestCapacityHasBeenSet;

                    /**
                     * <p>VAU quota in the plan, in the unit of VAUs.</p>
                     */
                    int64_t m_vAUCapacity;
                    bool m_vAUCapacityHasBeenSet;

                    /**
                     * <p>Quota of content acceleration traffic in the plan, in the unit of bytes.</p>
                     */
                    int64_t m_accTrafficCapacity;
                    bool m_accTrafficCapacityHasBeenSet;

                    /**
                     * <p>Quota of client authentication traffic in the plan, in the unit of bytes.</p>
                     */
                    int64_t m_clientAuthTrafficCapacity;
                    bool m_clientAuthTrafficCapacityHasBeenSet;

                    /**
                     * <p>Quota of smart acceleration traffic in the plan, in the unit of bytes.</p>
                     */
                    int64_t m_smartTrafficCapacity;
                    bool m_smartTrafficCapacityHasBeenSet;

                    /**
                     * <p>Quota of DDoS protection traffic in the plan, in the unit of bytes.</p>
                     */
                    int64_t m_dDoSTrafficCapacity;
                    bool m_dDoSTrafficCapacityHasBeenSet;

                    /**
                     * <p>Quota of security traffic in the plan, in the unit of bytes.</p>
                     */
                    int64_t m_secTrafficCapacity;
                    bool m_secTrafficCapacityHasBeenSet;

                    /**
                     * <p>Quota of security requests in the plan, in the unit of requests.</p>
                     */
                    int64_t m_secRequestCapacity;
                    bool m_secRequestCapacityHasBeenSet;

                    /**
                     * <p>Quota of L4 acceleration traffic in the plan, in the unit of bytes.</p>
                     */
                    int64_t m_l4TrafficCapacity;
                    bool m_l4TrafficCapacityHasBeenSet;

                    /**
                     * <p>Quota of network optimization traffic for the Chinese mainland in the plan, in the unit of bytes.</p>
                     */
                    int64_t m_crossMLCTrafficCapacity;
                    bool m_crossMLCTrafficCapacityHasBeenSet;

                    /**
                     * <p>Whether the plan allows binding new sites. Valid values:</p><li>true: Allows binding new sites;</li><li>false: Does not allow binding new sites.</li>
                     */
                    std::string m_bindable;
                    bool m_bindableHasBeenSet;

                    /**
                     * <p>Time when the plan takes effect.</p>
                     */
                    std::string m_enabledTime;
                    bool m_enabledTimeHasBeenSet;

                    /**
                     * <p>Expiration time of the plan.</p>
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * <p>Features supported by the plan. Valid values: <li>ContentAcceleration: content acceleration;</li><li>SmartAcceleration: smart acceleration;</li><li>L4: L4 acceleration;</li><li>Waf: advanced Web protection;</li><li>QUIC: QUIC;</li><li>CrossMLC: network optimization for the Chinese mainland;</li><li>ProcessMedia: media processing;</li><li>L4DDoS: L4 DDoS protection.</li>Only one of the following L7DDoS specifications can appear: <li>L7DDoS.CM30G: L7 DDoS protection - 30 Gbps guaranteed bandwidth in the Chinese mainland;</li><li>L7DDoS.CM60G: L7 DDoS protection - 60 Gbps guaranteed bandwidth in the Chinese mainland;</li><li>L7DDoS.CM100G: L7 DDoS protection - 100 Gbps guaranteed bandwidth in the Chinese mainland;</li><li>L7DDoS.Anycast300G: L7 DDoS protection - 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.AnycastUnlimited: L7 DDoS protection - unlimited Anycast full protection outside the Chinese mainland;</li><li>L7DDoS.CM30G_Anycast300G: L7 DDoS protection - 30 Gbps guaranteed bandwidth in the Chinese mainland and 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.CM60G_Anycast300G: L7 DDoS protection - 60 Gbps guaranteed bandwidth in the Chinese mainland and 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.CM100G_Anycast300G: L7 DDoS protection - 100 Gbps guaranteed bandwidth in the Chinese mainland and 300 Gbps Anycast guaranteed bandwidth outside the Chinese mainland;</li><li>L7DDoS.CM30G_AnycastUnlimited: L7 DDoS protection - 30 Gbps guaranteed bandwidth in the Chinese mainland and unlimited Anycast full protection outside the Chinese mainland;</li><li>L7DDoS.CM60G_AnycastUnlimited: L7 DDoS protection - 60 Gbps guaranteed bandwidth in the Chinese mainland and unlimited Anycast full protection outside the Chinese mainland;</li><li>L7DDoS.CM100G_AnycastUnlimited: L7 DDoS protection - 100 Gbps guaranteed bandwidth in the Chinese mainland and unlimited Anycast full protection outside the Chinese mainland.</li></p>
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_PLAN_H_
