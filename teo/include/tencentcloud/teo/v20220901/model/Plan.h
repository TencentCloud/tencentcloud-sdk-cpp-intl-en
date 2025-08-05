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
                * Package information.
                */
                class Plan : public AbstractModel
                {
                public:
                    Plan();
                    ~Plan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Package type. valid values:.
<Li>`Plan-Trial`: trial plan</li>.
<Li>`Plan-Personal`: personal plan</li>.
<Li>`Plan-Basic`: basic plan</li>.
<Li>`Plan-Standard`: standard edition plan</li>.
<li>plan-enterprise-v2: enterprise plan;</li>.
<li>plan-enterprise-model-a: enterprise edition model a package.</li>.
<Li>Plan-Enterprise: legacy enterprise plan.</li>.
                     * @return PlanType Package type. valid values:.
<Li>`Plan-Trial`: trial plan</li>.
<Li>`Plan-Personal`: personal plan</li>.
<Li>`Plan-Basic`: basic plan</li>.
<Li>`Plan-Standard`: standard edition plan</li>.
<li>plan-enterprise-v2: enterprise plan;</li>.
<li>plan-enterprise-model-a: enterprise edition model a package.</li>.
<Li>Plan-Enterprise: legacy enterprise plan.</li>.
                     * 
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置Package type. valid values:.
<Li>`Plan-Trial`: trial plan</li>.
<Li>`Plan-Personal`: personal plan</li>.
<Li>`Plan-Basic`: basic plan</li>.
<Li>`Plan-Standard`: standard edition plan</li>.
<li>plan-enterprise-v2: enterprise plan;</li>.
<li>plan-enterprise-model-a: enterprise edition model a package.</li>.
<Li>Plan-Enterprise: legacy enterprise plan.</li>.
                     * @param _planType Package type. valid values:.
<Li>`Plan-Trial`: trial plan</li>.
<Li>`Plan-Personal`: personal plan</li>.
<Li>`Plan-Basic`: basic plan</li>.
<Li>`Plan-Standard`: standard edition plan</li>.
<li>plan-enterprise-v2: enterprise plan;</li>.
<li>plan-enterprise-model-a: enterprise edition model a package.</li>.
<Li>Plan-Enterprise: legacy enterprise plan.</li>.
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
                     * 获取Package ID. such as edgeone-2y041pblwaxe.
                     * @return PlanId Package ID. such as edgeone-2y041pblwaxe.
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置Package ID. such as edgeone-2y041pblwaxe.
                     * @param _planId Package ID. such as edgeone-2y041pblwaxe.
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
                     * 获取Service area. valid values:.
<Li>`Mainland`: chinese mainland</li>.
<li>`overseas`: global (chinese mainland not included)</li>.
<Li>`Global`: global (chinese mainland included)</li>.
                     * @return Area Service area. valid values:.
<Li>`Mainland`: chinese mainland</li>.
<li>`overseas`: global (chinese mainland not included)</li>.
<Li>`Global`: global (chinese mainland included)</li>.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Service area. valid values:.
<Li>`Mainland`: chinese mainland</li>.
<li>`overseas`: global (chinese mainland not included)</li>.
<Li>`Global`: global (chinese mainland included)</li>.
                     * @param _area Service area. valid values:.
<Li>`Mainland`: chinese mainland</li>.
<li>`overseas`: global (chinese mainland not included)</li>.
<Li>`Global`: global (chinese mainland included)</li>.
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
                     * 获取Auto-Renew switch. valid values:.
<li>true: automatic renewal is enabled.</li>.
<li>false: automatic renewal is not enabled.</li>.
                     * @return AutoRenewal Auto-Renew switch. valid values:.
<li>true: automatic renewal is enabled.</li>.
<li>false: automatic renewal is not enabled.</li>.
                     * 
                     */
                    bool GetAutoRenewal() const;

                    /**
                     * 设置Auto-Renew switch. valid values:.
<li>true: automatic renewal is enabled.</li>.
<li>false: automatic renewal is not enabled.</li>.
                     * @param _autoRenewal Auto-Renew switch. valid values:.
<li>true: automatic renewal is enabled.</li>.
<li>false: automatic renewal is not enabled.</li>.
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
                     * 获取Package status. valid values:.
<Li>Normal: indicates the normal status.</li>.
<li>`expiring-soon`: will expire soon;</li>.
<li>`expired`: expiration status;</li>.
<Li>`Isolated`: isolated state</li>.
<li>`overdue-isolated`: arrears isolated state.</li>.
                     * @return Status Package status. valid values:.
<Li>Normal: indicates the normal status.</li>.
<li>`expiring-soon`: will expire soon;</li>.
<li>`expired`: expiration status;</li>.
<Li>`Isolated`: isolated state</li>.
<li>`overdue-isolated`: arrears isolated state.</li>.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Package status. valid values:.
<Li>Normal: indicates the normal status.</li>.
<li>`expiring-soon`: will expire soon;</li>.
<li>`expired`: expiration status;</li>.
<Li>`Isolated`: isolated state</li>.
<li>`overdue-isolated`: arrears isolated state.</li>.
                     * @param _status Package status. valid values:.
<Li>Normal: indicates the normal status.</li>.
<li>`expiring-soon`: will expire soon;</li>.
<li>`expired`: expiration status;</li>.
<Li>`Isolated`: isolated state</li>.
<li>`overdue-isolated`: arrears isolated state.</li>.
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
                     * 获取Payment type. valid values:.
<Li>0: postpaid;</li>.
<Li>1: prepaid.</li>.
                     * @return PayMode Payment type. valid values:.
<Li>0: postpaid;</li>.
<Li>1: prepaid.</li>.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Payment type. valid values:.
<Li>0: postpaid;</li>.
<Li>1: prepaid.</li>.
                     * @param _payMode Payment type. valid values:.
<Li>0: postpaid;</li>.
<Li>1: prepaid.</li>.
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
                     * 获取Describes the site information bound to the package, including the site id, site name, and site status.
                     * @return ZonesInfo Describes the site information bound to the package, including the site id, site name, and site status.
                     * 
                     */
                    std::vector<ZoneInfo> GetZonesInfo() const;

                    /**
                     * 设置Describes the site information bound to the package, including the site id, site name, and site status.
                     * @param _zonesInfo Describes the site information bound to the package, including the site id, site name, and site status.
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
                     * 获取Smart acceleration request quantity in the package, unit: times.
                     * @return SmartRequestCapacity Smart acceleration request quantity in the package, unit: times.
                     * 
                     */
                    int64_t GetSmartRequestCapacity() const;

                    /**
                     * 设置Smart acceleration request quantity in the package, unit: times.
                     * @param _smartRequestCapacity Smart acceleration request quantity in the package, unit: times.
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
                     * 获取Specifies the VAU specification in the package. measurement unit: unit.
                     * @return VAUCapacity Specifies the VAU specification in the package. measurement unit: unit.
                     * 
                     */
                    int64_t GetVAUCapacity() const;

                    /**
                     * 设置Specifies the VAU specification in the package. measurement unit: unit.
                     * @param _vAUCapacity Specifies the VAU specification in the package. measurement unit: unit.
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
                     * 获取Specifies the content acceleration traffic specification in the package, measurement unit: byte.
                     * @return AccTrafficCapacity Specifies the content acceleration traffic specification in the package, measurement unit: byte.
                     * 
                     */
                    int64_t GetAccTrafficCapacity() const;

                    /**
                     * 设置Specifies the content acceleration traffic specification in the package, measurement unit: byte.
                     * @param _accTrafficCapacity Specifies the content acceleration traffic specification in the package, measurement unit: byte.
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
                     * 获取Specifies the smart acceleration traffic specification in the package. measurement unit: byte.
                     * @return SmartTrafficCapacity Specifies the smart acceleration traffic specification in the package. measurement unit: byte.
                     * 
                     */
                    int64_t GetSmartTrafficCapacity() const;

                    /**
                     * 设置Specifies the smart acceleration traffic specification in the package. measurement unit: byte.
                     * @param _smartTrafficCapacity Specifies the smart acceleration traffic specification in the package. measurement unit: byte.
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
                     * 获取Specifies the DDoS protection traffic specification in the package, measurement unit: byte.
                     * @return DDoSTrafficCapacity Specifies the DDoS protection traffic specification in the package, measurement unit: byte.
                     * 
                     */
                    int64_t GetDDoSTrafficCapacity() const;

                    /**
                     * 设置Specifies the DDoS protection traffic specification in the package, measurement unit: byte.
                     * @param _dDoSTrafficCapacity Specifies the DDoS protection traffic specification in the package, measurement unit: byte.
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
                     * 获取Security traffic specification in the package. measurement unit: byte.
                     * @return SecTrafficCapacity Security traffic specification in the package. measurement unit: byte.
                     * 
                     */
                    int64_t GetSecTrafficCapacity() const;

                    /**
                     * 设置Security traffic specification in the package. measurement unit: byte.
                     * @param _secTrafficCapacity Security traffic specification in the package. measurement unit: byte.
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
                     * 获取Security requests in the package, unit: times.
                     * @return SecRequestCapacity Security requests in the package, unit: times.
                     * 
                     */
                    int64_t GetSecRequestCapacity() const;

                    /**
                     * 设置Security requests in the package, unit: times.
                     * @param _secRequestCapacity Security requests in the package, unit: times.
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
                     * 获取Specifies the layer 4 acceleration traffic specification in the package, measurement unit: byte.
                     * @return L4TrafficCapacity Specifies the layer 4 acceleration traffic specification in the package, measurement unit: byte.
                     * 
                     */
                    int64_t GetL4TrafficCapacity() const;

                    /**
                     * 设置Specifies the layer 4 acceleration traffic specification in the package, measurement unit: byte.
                     * @param _l4TrafficCapacity Specifies the layer 4 acceleration traffic specification in the package, measurement unit: byte.
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
                     * 获取Specifies the network optimization traffic specification in the package for the chinese mainland, measurement unit: byte.
                     * @return CrossMLCTrafficCapacity Specifies the network optimization traffic specification in the package for the chinese mainland, measurement unit: byte.
                     * 
                     */
                    int64_t GetCrossMLCTrafficCapacity() const;

                    /**
                     * 设置Specifies the network optimization traffic specification in the package for the chinese mainland, measurement unit: byte.
                     * @param _crossMLCTrafficCapacity Specifies the network optimization traffic specification in the package for the chinese mainland, measurement unit: byte.
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
                     * 获取Specifies whether the package allows binding to new sites. valid values:.
<li>true: allows binding a new site.</li>.
<li>`false`: cannot bind new sites.</li>.
                     * @return Bindable Specifies whether the package allows binding to new sites. valid values:.
<li>true: allows binding a new site.</li>.
<li>`false`: cannot bind new sites.</li>.
                     * 
                     */
                    std::string GetBindable() const;

                    /**
                     * 设置Specifies whether the package allows binding to new sites. valid values:.
<li>true: allows binding a new site.</li>.
<li>`false`: cannot bind new sites.</li>.
                     * @param _bindable Specifies whether the package allows binding to new sites. valid values:.
<li>true: allows binding a new site.</li>.
<li>`false`: cannot bind new sites.</li>.
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
                     * 获取Package activation time.
                     * @return EnabledTime Package activation time.
                     * 
                     */
                    std::string GetEnabledTime() const;

                    /**
                     * 设置Package activation time.
                     * @param _enabledTime Package activation time.
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
                     * 获取Plan expiration time.
                     * @return ExpiredTime Plan expiration time.
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Plan expiration time.
                     * @param _expiredTime Plan expiration time.
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
                     * 获取Supported features of the package include: <li>ContentAcceleration: content acceleration feature;</li> <li>SmartAcceleration: intelligent acceleration feature;</li> <li>L4: L4 acceleration feature;</li> <li>Waf: advanced Web protection;</li> <li>QUIC: QUIC feature;</li> <li>CrossMLC: network optimization in the chinese mainland;</li> <li>ProcessMedia: media processing feature;</li> <li>L4DDoS: L4 DDoS protection feature;</li> L7DDoS feature will only appear in one of the following specifications: <li>L7DDoS.CM30G; layer-7 DDoS protection feature - 30G guaranteed minimum bandwidth specification in the chinese mainland;</li> <li>L7DDoS.CM60G; layer-7 DDoS protection feature - 60G guaranteed minimum bandwidth specification in the chinese mainland;</li> <li>L7DDoS.CM100G; layer-7 DDoS protection feature - 100G guaranteed minimum bandwidth specification in the chinese mainland;</li> <li>L7DDoS.Anycast300G; layer-7 DDoS protection feature - 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.AnycastUnlimited; layer-7 DDoS protection feature - unlimited Anycast full protection outside the chinese mainland;</li> <li>L7DDoS.CM30G_Anycast300G; layer-7 DDoS protection feature - 30G guaranteed minimum bandwidth specification in the chinese mainland and 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.CM60G_Anycast300G; layer-7 DDoS protection feature - 60G guaranteed minimum bandwidth specification in the chinese mainland and 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.CM100G_Anycast300G; layer-7 DDoS protection feature - 100G guaranteed minimum bandwidth specification in the chinese mainland and 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.CM30G_AnycastUnlimited; layer-7 DDoS protection feature - 30G guaranteed minimum bandwidth specification in the chinese mainland and unlimited Anycast full protection outside the chinese mainland;</li> <li>L7DDoS.CM60G_AnycastUnlimited; layer-7 DDoS protection feature - 60G guaranteed minimum bandwidth specification in the chinese mainland and unlimited Anycast full protection outside the chinese mainland;</li> <li>L7DDoS.CM100G_AnycastUnlimited; layer-7 DDoS protection feature - 100G guaranteed minimum bandwidth specification in the chinese mainland and unlimited Anycast full protection outside the chinese mainland;</li>.
                     * @return Features Supported features of the package include: <li>ContentAcceleration: content acceleration feature;</li> <li>SmartAcceleration: intelligent acceleration feature;</li> <li>L4: L4 acceleration feature;</li> <li>Waf: advanced Web protection;</li> <li>QUIC: QUIC feature;</li> <li>CrossMLC: network optimization in the chinese mainland;</li> <li>ProcessMedia: media processing feature;</li> <li>L4DDoS: L4 DDoS protection feature;</li> L7DDoS feature will only appear in one of the following specifications: <li>L7DDoS.CM30G; layer-7 DDoS protection feature - 30G guaranteed minimum bandwidth specification in the chinese mainland;</li> <li>L7DDoS.CM60G; layer-7 DDoS protection feature - 60G guaranteed minimum bandwidth specification in the chinese mainland;</li> <li>L7DDoS.CM100G; layer-7 DDoS protection feature - 100G guaranteed minimum bandwidth specification in the chinese mainland;</li> <li>L7DDoS.Anycast300G; layer-7 DDoS protection feature - 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.AnycastUnlimited; layer-7 DDoS protection feature - unlimited Anycast full protection outside the chinese mainland;</li> <li>L7DDoS.CM30G_Anycast300G; layer-7 DDoS protection feature - 30G guaranteed minimum bandwidth specification in the chinese mainland and 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.CM60G_Anycast300G; layer-7 DDoS protection feature - 60G guaranteed minimum bandwidth specification in the chinese mainland and 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.CM100G_Anycast300G; layer-7 DDoS protection feature - 100G guaranteed minimum bandwidth specification in the chinese mainland and 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.CM30G_AnycastUnlimited; layer-7 DDoS protection feature - 30G guaranteed minimum bandwidth specification in the chinese mainland and unlimited Anycast full protection outside the chinese mainland;</li> <li>L7DDoS.CM60G_AnycastUnlimited; layer-7 DDoS protection feature - 60G guaranteed minimum bandwidth specification in the chinese mainland and unlimited Anycast full protection outside the chinese mainland;</li> <li>L7DDoS.CM100G_AnycastUnlimited; layer-7 DDoS protection feature - 100G guaranteed minimum bandwidth specification in the chinese mainland and unlimited Anycast full protection outside the chinese mainland;</li>.
                     * 
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置Supported features of the package include: <li>ContentAcceleration: content acceleration feature;</li> <li>SmartAcceleration: intelligent acceleration feature;</li> <li>L4: L4 acceleration feature;</li> <li>Waf: advanced Web protection;</li> <li>QUIC: QUIC feature;</li> <li>CrossMLC: network optimization in the chinese mainland;</li> <li>ProcessMedia: media processing feature;</li> <li>L4DDoS: L4 DDoS protection feature;</li> L7DDoS feature will only appear in one of the following specifications: <li>L7DDoS.CM30G; layer-7 DDoS protection feature - 30G guaranteed minimum bandwidth specification in the chinese mainland;</li> <li>L7DDoS.CM60G; layer-7 DDoS protection feature - 60G guaranteed minimum bandwidth specification in the chinese mainland;</li> <li>L7DDoS.CM100G; layer-7 DDoS protection feature - 100G guaranteed minimum bandwidth specification in the chinese mainland;</li> <li>L7DDoS.Anycast300G; layer-7 DDoS protection feature - 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.AnycastUnlimited; layer-7 DDoS protection feature - unlimited Anycast full protection outside the chinese mainland;</li> <li>L7DDoS.CM30G_Anycast300G; layer-7 DDoS protection feature - 30G guaranteed minimum bandwidth specification in the chinese mainland and 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.CM60G_Anycast300G; layer-7 DDoS protection feature - 60G guaranteed minimum bandwidth specification in the chinese mainland and 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.CM100G_Anycast300G; layer-7 DDoS protection feature - 100G guaranteed minimum bandwidth specification in the chinese mainland and 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.CM30G_AnycastUnlimited; layer-7 DDoS protection feature - 30G guaranteed minimum bandwidth specification in the chinese mainland and unlimited Anycast full protection outside the chinese mainland;</li> <li>L7DDoS.CM60G_AnycastUnlimited; layer-7 DDoS protection feature - 60G guaranteed minimum bandwidth specification in the chinese mainland and unlimited Anycast full protection outside the chinese mainland;</li> <li>L7DDoS.CM100G_AnycastUnlimited; layer-7 DDoS protection feature - 100G guaranteed minimum bandwidth specification in the chinese mainland and unlimited Anycast full protection outside the chinese mainland;</li>.
                     * @param _features Supported features of the package include: <li>ContentAcceleration: content acceleration feature;</li> <li>SmartAcceleration: intelligent acceleration feature;</li> <li>L4: L4 acceleration feature;</li> <li>Waf: advanced Web protection;</li> <li>QUIC: QUIC feature;</li> <li>CrossMLC: network optimization in the chinese mainland;</li> <li>ProcessMedia: media processing feature;</li> <li>L4DDoS: L4 DDoS protection feature;</li> L7DDoS feature will only appear in one of the following specifications: <li>L7DDoS.CM30G; layer-7 DDoS protection feature - 30G guaranteed minimum bandwidth specification in the chinese mainland;</li> <li>L7DDoS.CM60G; layer-7 DDoS protection feature - 60G guaranteed minimum bandwidth specification in the chinese mainland;</li> <li>L7DDoS.CM100G; layer-7 DDoS protection feature - 100G guaranteed minimum bandwidth specification in the chinese mainland;</li> <li>L7DDoS.Anycast300G; layer-7 DDoS protection feature - 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.AnycastUnlimited; layer-7 DDoS protection feature - unlimited Anycast full protection outside the chinese mainland;</li> <li>L7DDoS.CM30G_Anycast300G; layer-7 DDoS protection feature - 30G guaranteed minimum bandwidth specification in the chinese mainland and 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.CM60G_Anycast300G; layer-7 DDoS protection feature - 60G guaranteed minimum bandwidth specification in the chinese mainland and 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.CM100G_Anycast300G; layer-7 DDoS protection feature - 100G guaranteed minimum bandwidth specification in the chinese mainland and 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.CM30G_AnycastUnlimited; layer-7 DDoS protection feature - 30G guaranteed minimum bandwidth specification in the chinese mainland and unlimited Anycast full protection outside the chinese mainland;</li> <li>L7DDoS.CM60G_AnycastUnlimited; layer-7 DDoS protection feature - 60G guaranteed minimum bandwidth specification in the chinese mainland and unlimited Anycast full protection outside the chinese mainland;</li> <li>L7DDoS.CM100G_AnycastUnlimited; layer-7 DDoS protection feature - 100G guaranteed minimum bandwidth specification in the chinese mainland and unlimited Anycast full protection outside the chinese mainland;</li>.
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
                     * Package type. valid values:.
<Li>`Plan-Trial`: trial plan</li>.
<Li>`Plan-Personal`: personal plan</li>.
<Li>`Plan-Basic`: basic plan</li>.
<Li>`Plan-Standard`: standard edition plan</li>.
<li>plan-enterprise-v2: enterprise plan;</li>.
<li>plan-enterprise-model-a: enterprise edition model a package.</li>.
<Li>Plan-Enterprise: legacy enterprise plan.</li>.
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * Package ID. such as edgeone-2y041pblwaxe.
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Service area. valid values:.
<Li>`Mainland`: chinese mainland</li>.
<li>`overseas`: global (chinese mainland not included)</li>.
<Li>`Global`: global (chinese mainland included)</li>.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Auto-Renew switch. valid values:.
<li>true: automatic renewal is enabled.</li>.
<li>false: automatic renewal is not enabled.</li>.
                     */
                    bool m_autoRenewal;
                    bool m_autoRenewalHasBeenSet;

                    /**
                     * Package status. valid values:.
<Li>Normal: indicates the normal status.</li>.
<li>`expiring-soon`: will expire soon;</li>.
<li>`expired`: expiration status;</li>.
<Li>`Isolated`: isolated state</li>.
<li>`overdue-isolated`: arrears isolated state.</li>.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Payment type. valid values:.
<Li>0: postpaid;</li>.
<Li>1: prepaid.</li>.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Describes the site information bound to the package, including the site id, site name, and site status.
                     */
                    std::vector<ZoneInfo> m_zonesInfo;
                    bool m_zonesInfoHasBeenSet;

                    /**
                     * Smart acceleration request quantity in the package, unit: times.
                     */
                    int64_t m_smartRequestCapacity;
                    bool m_smartRequestCapacityHasBeenSet;

                    /**
                     * Specifies the VAU specification in the package. measurement unit: unit.
                     */
                    int64_t m_vAUCapacity;
                    bool m_vAUCapacityHasBeenSet;

                    /**
                     * Specifies the content acceleration traffic specification in the package, measurement unit: byte.
                     */
                    int64_t m_accTrafficCapacity;
                    bool m_accTrafficCapacityHasBeenSet;

                    /**
                     * Specifies the smart acceleration traffic specification in the package. measurement unit: byte.
                     */
                    int64_t m_smartTrafficCapacity;
                    bool m_smartTrafficCapacityHasBeenSet;

                    /**
                     * Specifies the DDoS protection traffic specification in the package, measurement unit: byte.
                     */
                    int64_t m_dDoSTrafficCapacity;
                    bool m_dDoSTrafficCapacityHasBeenSet;

                    /**
                     * Security traffic specification in the package. measurement unit: byte.
                     */
                    int64_t m_secTrafficCapacity;
                    bool m_secTrafficCapacityHasBeenSet;

                    /**
                     * Security requests in the package, unit: times.
                     */
                    int64_t m_secRequestCapacity;
                    bool m_secRequestCapacityHasBeenSet;

                    /**
                     * Specifies the layer 4 acceleration traffic specification in the package, measurement unit: byte.
                     */
                    int64_t m_l4TrafficCapacity;
                    bool m_l4TrafficCapacityHasBeenSet;

                    /**
                     * Specifies the network optimization traffic specification in the package for the chinese mainland, measurement unit: byte.
                     */
                    int64_t m_crossMLCTrafficCapacity;
                    bool m_crossMLCTrafficCapacityHasBeenSet;

                    /**
                     * Specifies whether the package allows binding to new sites. valid values:.
<li>true: allows binding a new site.</li>.
<li>`false`: cannot bind new sites.</li>.
                     */
                    std::string m_bindable;
                    bool m_bindableHasBeenSet;

                    /**
                     * Package activation time.
                     */
                    std::string m_enabledTime;
                    bool m_enabledTimeHasBeenSet;

                    /**
                     * Plan expiration time.
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * Supported features of the package include: <li>ContentAcceleration: content acceleration feature;</li> <li>SmartAcceleration: intelligent acceleration feature;</li> <li>L4: L4 acceleration feature;</li> <li>Waf: advanced Web protection;</li> <li>QUIC: QUIC feature;</li> <li>CrossMLC: network optimization in the chinese mainland;</li> <li>ProcessMedia: media processing feature;</li> <li>L4DDoS: L4 DDoS protection feature;</li> L7DDoS feature will only appear in one of the following specifications: <li>L7DDoS.CM30G; layer-7 DDoS protection feature - 30G guaranteed minimum bandwidth specification in the chinese mainland;</li> <li>L7DDoS.CM60G; layer-7 DDoS protection feature - 60G guaranteed minimum bandwidth specification in the chinese mainland;</li> <li>L7DDoS.CM100G; layer-7 DDoS protection feature - 100G guaranteed minimum bandwidth specification in the chinese mainland;</li> <li>L7DDoS.Anycast300G; layer-7 DDoS protection feature - 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.AnycastUnlimited; layer-7 DDoS protection feature - unlimited Anycast full protection outside the chinese mainland;</li> <li>L7DDoS.CM30G_Anycast300G; layer-7 DDoS protection feature - 30G guaranteed minimum bandwidth specification in the chinese mainland and 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.CM60G_Anycast300G; layer-7 DDoS protection feature - 60G guaranteed minimum bandwidth specification in the chinese mainland and 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.CM100G_Anycast300G; layer-7 DDoS protection feature - 100G guaranteed minimum bandwidth specification in the chinese mainland and 300G guaranteed minimum bandwidth specification outside the chinese mainland with Anycast;</li> <li>L7DDoS.CM30G_AnycastUnlimited; layer-7 DDoS protection feature - 30G guaranteed minimum bandwidth specification in the chinese mainland and unlimited Anycast full protection outside the chinese mainland;</li> <li>L7DDoS.CM60G_AnycastUnlimited; layer-7 DDoS protection feature - 60G guaranteed minimum bandwidth specification in the chinese mainland and unlimited Anycast full protection outside the chinese mainland;</li> <li>L7DDoS.CM100G_AnycastUnlimited; layer-7 DDoS protection feature - 100G guaranteed minimum bandwidth specification in the chinese mainland and unlimited Anycast full protection outside the chinese mainland;</li>.
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_PLAN_H_
