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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RESOURCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Sv.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Billable resource
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The resource ID.
                     * @return Id The resource ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置The resource ID.
                     * @param _id The resource ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Billing mode
`0`: Pay-as-you-go
                     * @return PayMode Billing mode
`0`: Pay-as-you-go
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing mode
`0`: Pay-as-you-go
                     * @param _payMode Billing mode
`0`: Pay-as-you-go
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
                     * 获取The creation time.
                     * @return CreateTime The creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time.
                     * @param _createTime The creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The effective time.
                     * @return EnableTime The effective time.
                     * 
                     */
                    std::string GetEnableTime() const;

                    /**
                     * 设置The effective time.
                     * @param _enableTime The effective time.
                     * 
                     */
                    void SetEnableTime(const std::string& _enableTime);

                    /**
                     * 判断参数 EnableTime 是否已赋值
                     * @return EnableTime 是否已赋值
                     * 
                     */
                    bool EnableTimeHasBeenSet() const;

                    /**
                     * 获取The expiration time.
                     * @return ExpireTime The expiration time.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置The expiration time.
                     * @param _expireTime The expiration time.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取The plan status. Values:
<li>`normal`: Normal</li>
<li>`isolated`: Isolated</li>
<li>`destroyed`: Terminated</li>
                     * @return Status The plan status. Values:
<li>`normal`: Normal</li>
<li>`isolated`: Isolated</li>
<li>`destroyed`: Terminated</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The plan status. Values:
<li>`normal`: Normal</li>
<li>`isolated`: Isolated</li>
<li>`destroyed`: Terminated</li>
                     * @param _status The plan status. Values:
<li>`normal`: Normal</li>
<li>`isolated`: Isolated</li>
<li>`destroyed`: Terminated</li>
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
                     * 获取Pricing query parameter
                     * @return Sv Pricing query parameter
                     * 
                     */
                    std::vector<Sv> GetSv() const;

                    /**
                     * 设置Pricing query parameter
                     * @param _sv Pricing query parameter
                     * 
                     */
                    void SetSv(const std::vector<Sv>& _sv);

                    /**
                     * 判断参数 Sv 是否已赋值
                     * @return Sv 是否已赋值
                     * 
                     */
                    bool SvHasBeenSet() const;

                    /**
                     * 获取Whether to enable auto-renewal. Values:
<li>`0`: Default status.</li>
<li>`1`: Enable auto-renewal.</li>
<li>`2`: Disable auto-renewal.</li>
                     * @return AutoRenewFlag Whether to enable auto-renewal. Values:
<li>`0`: Default status.</li>
<li>`1`: Enable auto-renewal.</li>
<li>`2`: Disable auto-renewal.</li>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Whether to enable auto-renewal. Values:
<li>`0`: Default status.</li>
<li>`1`: Enable auto-renewal.</li>
<li>`2`: Disable auto-renewal.</li>
                     * @param _autoRenewFlag Whether to enable auto-renewal. Values:
<li>`0`: Default status.</li>
<li>`1`: Enable auto-renewal.</li>
<li>`2`: Disable auto-renewal.</li>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取ID of the resource associated with the plan.
                     * @return PlanId ID of the resource associated with the plan.
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置ID of the resource associated with the plan.
                     * @param _planId ID of the resource associated with the plan.
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
                     * 获取Applicable area. Values:
<li>`mainland`: Chinese mainland</li>
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`global`: Global</li>
                     * @return Area Applicable area. Values:
<li>`mainland`: Chinese mainland</li>
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`global`: Global</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Applicable area. Values:
<li>`mainland`: Chinese mainland</li>
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`global`: Global</li>
                     * @param _area Applicable area. Values:
<li>`mainland`: Chinese mainland</li>
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`global`: Global</li>
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
                     * 获取The resource type. Values:
<li>`plan`: Plan resources</li>
<li>`pay-as-you-go`: Pay-as-you-go resources </li>
<li>`value-added`: Value-added resources </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Group The resource type. Values:
<li>`plan`: Plan resources</li>
<li>`pay-as-you-go`: Pay-as-you-go resources </li>
<li>`value-added`: Value-added resources </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置The resource type. Values:
<li>`plan`: Plan resources</li>
<li>`pay-as-you-go`: Pay-as-you-go resources </li>
<li>`value-added`: Value-added resources </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _group The resource type. Values:
<li>`plan`: Plan resources</li>
<li>`pay-as-you-go`: Pay-as-you-go resources </li>
<li>`value-added`: Value-added resources </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取The sites that are associated with the current resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneNumber The sites that are associated with the current resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetZoneNumber() const;

                    /**
                     * 设置The sites that are associated with the current resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneNumber The sites that are associated with the current resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneNumber(const int64_t& _zoneNumber);

                    /**
                     * 判断参数 ZoneNumber 是否已赋值
                     * @return ZoneNumber 是否已赋值
                     * 
                     */
                    bool ZoneNumberHasBeenSet() const;

                    /**
                     * 获取Resource tag type. Valid values:
<li>vodeo: vodeo resource.</li>
                     * @return Type Resource tag type. Valid values:
<li>vodeo: vodeo resource.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Resource tag type. Valid values:
<li>vodeo: vodeo resource.</li>
                     * @param _type Resource tag type. Valid values:
<li>vodeo: vodeo resource.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * The resource ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Billing mode
`0`: Pay-as-you-go
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * The creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The effective time.
                     */
                    std::string m_enableTime;
                    bool m_enableTimeHasBeenSet;

                    /**
                     * The expiration time.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * The plan status. Values:
<li>`normal`: Normal</li>
<li>`isolated`: Isolated</li>
<li>`destroyed`: Terminated</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Pricing query parameter
                     */
                    std::vector<Sv> m_sv;
                    bool m_svHasBeenSet;

                    /**
                     * Whether to enable auto-renewal. Values:
<li>`0`: Default status.</li>
<li>`1`: Enable auto-renewal.</li>
<li>`2`: Disable auto-renewal.</li>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * ID of the resource associated with the plan.
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Applicable area. Values:
<li>`mainland`: Chinese mainland</li>
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`global`: Global</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * The resource type. Values:
<li>`plan`: Plan resources</li>
<li>`pay-as-you-go`: Pay-as-you-go resources </li>
<li>`value-added`: Value-added resources </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * The sites that are associated with the current resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_zoneNumber;
                    bool m_zoneNumberHasBeenSet;

                    /**
                     * Resource tag type. Valid values:
<li>vodeo: vodeo resource.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RESOURCE_H_
