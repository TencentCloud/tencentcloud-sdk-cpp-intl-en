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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPLANFORZONEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPLANFORZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreatePlanForZone request structure.
                */
                class CreatePlanForZoneRequest : public AbstractModel
                {
                public:
                    CreatePlanForZoneRequest();
                    ~CreatePlanForZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID.
                     * @return ZoneId Site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID.
                     * @param _zoneId Site ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Type of the package to purchase. Valid values:
<li> sta: Global content delivery network (excluding Chinese mainland) Standard Edition Plan; </li>
<li> sta_with_bot: Standard Edition Plan of the global content delivery network (excluding Chinese mainland) with bundled bot management;</li>
<li> sta_cm: CDN Standard Edition Plan for the Chinese mainland; </li>
<li> sta_cm_with_bot: CDN Standard Edition Plan on the Chinese mainland with bundled bot management;</li>
<li> sta_global: Global content delivery network (including Chinese mainland) Standard Edition Plan; </li>
<li> sta_global_with_bot: Standard Edition Plan of global content delivery network (including Chinese mainland) with bundled bot management;</li>
<li> ent: Enterprise plan for global content delivery network (excluding Chinese mainland); </li>
<li> ent_with_bot: Enterprise package of global content delivery network (excluding Chinese mainland) with bundled bot management;</li>
<li> ent_cm: CDN enterprise plan for the Chinese mainland; </li>
<li> ent_cm_with_bot: CDN enterprise plan on the Chinese mainland with bundled bot management.</li>
<li> ent_global: Enterprise package for global content delivery network (including Chinese mainland); </li>
<li> ent_global_with_bot: Enterprise package of global content delivery network (including Chinese mainland) with bundled bot management.</li>For the package types available for the current account, refer to the response of <a href="https://www.tencentcloud.com/document/product/1552/80606?from_cn_redirect=1">DescribeAvailablePlans</a>.
                     * @return PlanType Type of the package to purchase. Valid values:
<li> sta: Global content delivery network (excluding Chinese mainland) Standard Edition Plan; </li>
<li> sta_with_bot: Standard Edition Plan of the global content delivery network (excluding Chinese mainland) with bundled bot management;</li>
<li> sta_cm: CDN Standard Edition Plan for the Chinese mainland; </li>
<li> sta_cm_with_bot: CDN Standard Edition Plan on the Chinese mainland with bundled bot management;</li>
<li> sta_global: Global content delivery network (including Chinese mainland) Standard Edition Plan; </li>
<li> sta_global_with_bot: Standard Edition Plan of global content delivery network (including Chinese mainland) with bundled bot management;</li>
<li> ent: Enterprise plan for global content delivery network (excluding Chinese mainland); </li>
<li> ent_with_bot: Enterprise package of global content delivery network (excluding Chinese mainland) with bundled bot management;</li>
<li> ent_cm: CDN enterprise plan for the Chinese mainland; </li>
<li> ent_cm_with_bot: CDN enterprise plan on the Chinese mainland with bundled bot management.</li>
<li> ent_global: Enterprise package for global content delivery network (including Chinese mainland); </li>
<li> ent_global_with_bot: Enterprise package of global content delivery network (including Chinese mainland) with bundled bot management.</li>For the package types available for the current account, refer to the response of <a href="https://www.tencentcloud.com/document/product/1552/80606?from_cn_redirect=1">DescribeAvailablePlans</a>.
                     * 
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置Type of the package to purchase. Valid values:
<li> sta: Global content delivery network (excluding Chinese mainland) Standard Edition Plan; </li>
<li> sta_with_bot: Standard Edition Plan of the global content delivery network (excluding Chinese mainland) with bundled bot management;</li>
<li> sta_cm: CDN Standard Edition Plan for the Chinese mainland; </li>
<li> sta_cm_with_bot: CDN Standard Edition Plan on the Chinese mainland with bundled bot management;</li>
<li> sta_global: Global content delivery network (including Chinese mainland) Standard Edition Plan; </li>
<li> sta_global_with_bot: Standard Edition Plan of global content delivery network (including Chinese mainland) with bundled bot management;</li>
<li> ent: Enterprise plan for global content delivery network (excluding Chinese mainland); </li>
<li> ent_with_bot: Enterprise package of global content delivery network (excluding Chinese mainland) with bundled bot management;</li>
<li> ent_cm: CDN enterprise plan for the Chinese mainland; </li>
<li> ent_cm_with_bot: CDN enterprise plan on the Chinese mainland with bundled bot management.</li>
<li> ent_global: Enterprise package for global content delivery network (including Chinese mainland); </li>
<li> ent_global_with_bot: Enterprise package of global content delivery network (including Chinese mainland) with bundled bot management.</li>For the package types available for the current account, refer to the response of <a href="https://www.tencentcloud.com/document/product/1552/80606?from_cn_redirect=1">DescribeAvailablePlans</a>.
                     * @param _planType Type of the package to purchase. Valid values:
<li> sta: Global content delivery network (excluding Chinese mainland) Standard Edition Plan; </li>
<li> sta_with_bot: Standard Edition Plan of the global content delivery network (excluding Chinese mainland) with bundled bot management;</li>
<li> sta_cm: CDN Standard Edition Plan for the Chinese mainland; </li>
<li> sta_cm_with_bot: CDN Standard Edition Plan on the Chinese mainland with bundled bot management;</li>
<li> sta_global: Global content delivery network (including Chinese mainland) Standard Edition Plan; </li>
<li> sta_global_with_bot: Standard Edition Plan of global content delivery network (including Chinese mainland) with bundled bot management;</li>
<li> ent: Enterprise plan for global content delivery network (excluding Chinese mainland); </li>
<li> ent_with_bot: Enterprise package of global content delivery network (excluding Chinese mainland) with bundled bot management;</li>
<li> ent_cm: CDN enterprise plan for the Chinese mainland; </li>
<li> ent_cm_with_bot: CDN enterprise plan on the Chinese mainland with bundled bot management.</li>
<li> ent_global: Enterprise package for global content delivery network (including Chinese mainland); </li>
<li> ent_global_with_bot: Enterprise package of global content delivery network (including Chinese mainland) with bundled bot management.</li>For the package types available for the current account, refer to the response of <a href="https://www.tencentcloud.com/document/product/1552/80606?from_cn_redirect=1">DescribeAvailablePlans</a>.
                     * 
                     */
                    void SetPlanType(const std::string& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     * 
                     */
                    bool PlanTypeHasBeenSet() const;

                private:

                    /**
                     * Site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Type of the package to purchase. Valid values:
<li> sta: Global content delivery network (excluding Chinese mainland) Standard Edition Plan; </li>
<li> sta_with_bot: Standard Edition Plan of the global content delivery network (excluding Chinese mainland) with bundled bot management;</li>
<li> sta_cm: CDN Standard Edition Plan for the Chinese mainland; </li>
<li> sta_cm_with_bot: CDN Standard Edition Plan on the Chinese mainland with bundled bot management;</li>
<li> sta_global: Global content delivery network (including Chinese mainland) Standard Edition Plan; </li>
<li> sta_global_with_bot: Standard Edition Plan of global content delivery network (including Chinese mainland) with bundled bot management;</li>
<li> ent: Enterprise plan for global content delivery network (excluding Chinese mainland); </li>
<li> ent_with_bot: Enterprise package of global content delivery network (excluding Chinese mainland) with bundled bot management;</li>
<li> ent_cm: CDN enterprise plan for the Chinese mainland; </li>
<li> ent_cm_with_bot: CDN enterprise plan on the Chinese mainland with bundled bot management.</li>
<li> ent_global: Enterprise package for global content delivery network (including Chinese mainland); </li>
<li> ent_global_with_bot: Enterprise package of global content delivery network (including Chinese mainland) with bundled bot management.</li>For the package types available for the current account, refer to the response of <a href="https://www.tencentcloud.com/document/product/1552/80606?from_cn_redirect=1">DescribeAvailablePlans</a>.
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPLANFORZONEREQUEST_H_
