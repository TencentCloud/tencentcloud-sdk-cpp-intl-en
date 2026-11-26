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
                * Billing resource
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID.
                     * @return Id Resource ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Resource ID.
                     * @param _id Resource ID.
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
                     * 获取Payment mode. Valid values:
<li>0: postpaid.</li>
                     * @return PayMode Payment mode. Valid values:
<li>0: postpaid.</li>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Payment mode. Valid values:
<li>0: postpaid.</li>
                     * @param _payMode Payment mode. Valid values:
<li>0: postpaid.</li>
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
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Effective time.
                     * @return EnableTime Effective time.
                     * 
                     */
                    std::string GetEnableTime() const;

                    /**
                     * 设置Effective time.
                     * @param _enableTime Effective time.
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
                     * 获取Expiration time.
                     * @return ExpireTime Expiration time.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time.
                     * @param _expireTime Expiration time.
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
                     * 获取Package status. Valid values:
<li>normal: Normal;</li>
<li>isolated: Isolated;</li>
<li>destroyed: Terminated.</li>
                     * @return Status Package status. Valid values:
<li>normal: Normal;</li>
<li>isolated: Isolated;</li>
<li>destroyed: Terminated.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Package status. Valid values:
<li>normal: Normal;</li>
<li>isolated: Isolated;</li>
<li>destroyed: Terminated.</li>
                     * @param _status Package status. Valid values:
<li>normal: Normal;</li>
<li>isolated: Isolated;</li>
<li>destroyed: Terminated.</li>
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
                     * 获取Price inquiry parameters.
                     * @return Sv Price inquiry parameters.
                     * 
                     */
                    std::vector<Sv> GetSv() const;

                    /**
                     * 设置Price inquiry parameters.
                     * @param _sv Price inquiry parameters.
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
                     * 获取Whether it is automatically renewed. Valid values:
<li>0: default state</li>
<li>`1`: auto-renewal;</li>
<li>`2`: no auto-renewal.</li>
                     * @return AutoRenewFlag Whether it is automatically renewed. Valid values:
<li>0: default state</li>
<li>`1`: auto-renewal;</li>
<li>`2`: no auto-renewal.</li>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Whether it is automatically renewed. Valid values:
<li>0: default state</li>
<li>`1`: auto-renewal;</li>
<li>`2`: no auto-renewal.</li>
                     * @param _autoRenewFlag Whether it is automatically renewed. Valid values:
<li>0: default state</li>
<li>`1`: auto-renewal;</li>
<li>`2`: no auto-renewal.</li>
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
                     * 获取ID of the associated resource in the package.
                     * @return PlanId ID of the associated resource in the package.
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置ID of the associated resource in the package.
                     * @param _planId ID of the associated resource in the package.
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
                     * 获取Region. Valid values:
<li>mainland: within the Chinese mainland;</li>
<li>overseas: outside the Chinese mainland.</li>
<li>global: global.</li>
                     * @return Area Region. Valid values:
<li>mainland: within the Chinese mainland;</li>
<li>overseas: outside the Chinese mainland.</li>
<li>global: global.</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Region. Valid values:
<li>mainland: within the Chinese mainland;</li>
<li>overseas: outside the Chinese mainland.</li>
<li>global: global.</li>
                     * @param _area Region. Valid values:
<li>mainland: within the Chinese mainland;</li>
<li>overseas: outside the Chinese mainland.</li>
<li>global: global.</li>
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
                     * 获取Resource type. Valid values:
<li>plan: package type;</li>
<li>pay-as-you-go: postpaid mode.</li>
<li>value-added: value-added service type.</li>
                     * @return Group Resource type. Valid values:
<li>plan: package type;</li>
<li>pay-as-you-go: postpaid mode.</li>
<li>value-added: value-added service type.</li>
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置Resource type. Valid values:
<li>plan: package type;</li>
<li>pay-as-you-go: postpaid mode.</li>
<li>value-added: value-added service type.</li>
                     * @param _group Resource type. Valid values:
<li>plan: package type;</li>
<li>pay-as-you-go: postpaid mode.</li>
<li>value-added: value-added service type.</li>
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
                     * 获取Number of sites bound to the current resource.
                     * @return ZoneNumber Number of sites bound to the current resource.
                     * 
                     */
                    int64_t GetZoneNumber() const;

                    /**
                     * 设置Number of sites bound to the current resource.
                     * @param _zoneNumber Number of sites bound to the current resource.
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
                     * 获取Resource tag type, with values:
<li>vodeo: vodeo resource.</li>
                     * @return Type Resource tag type, with values:
<li>vodeo: vodeo resource.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Resource tag type, with values:
<li>vodeo: vodeo resource.</li>
                     * @param _type Resource tag type, with values:
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
                     * Resource ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Payment mode. Valid values:
<li>0: postpaid.</li>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Effective time.
                     */
                    std::string m_enableTime;
                    bool m_enableTimeHasBeenSet;

                    /**
                     * Expiration time.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Package status. Valid values:
<li>normal: Normal;</li>
<li>isolated: Isolated;</li>
<li>destroyed: Terminated.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Price inquiry parameters.
                     */
                    std::vector<Sv> m_sv;
                    bool m_svHasBeenSet;

                    /**
                     * Whether it is automatically renewed. Valid values:
<li>0: default state</li>
<li>`1`: auto-renewal;</li>
<li>`2`: no auto-renewal.</li>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * ID of the associated resource in the package.
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Region. Valid values:
<li>mainland: within the Chinese mainland;</li>
<li>overseas: outside the Chinese mainland.</li>
<li>global: global.</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Resource type. Valid values:
<li>plan: package type;</li>
<li>pay-as-you-go: postpaid mode.</li>
<li>value-added: value-added service type.</li>
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * Number of sites bound to the current resource.
                     */
                    int64_t m_zoneNumber;
                    bool m_zoneNumberHasBeenSet;

                    /**
                     * Resource tag type, with values:
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
