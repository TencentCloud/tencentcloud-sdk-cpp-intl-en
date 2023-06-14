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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_RESOURCE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_RESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/Sv.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
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
                     * 获取Resource ID
                     * @return Id Resource ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Resource ID
                     * @param _id Resource ID
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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Effective time
                     * @return EnableTime Effective time
                     * 
                     */
                    std::string GetEnableTime() const;

                    /**
                     * 设置Effective time
                     * @param _enableTime Effective time
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
                     * 获取Expiration time
                     * @return ExpireTime Expiration time
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time
                     * @param _expireTime Expiration time
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
                     * 获取Status of the plan
                     * @return Status Status of the plan
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the plan
                     * @param _status Status of the plan
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
                     * 获取Specifies whether to enable auto-renewal
`0`: Default
`1`: Enable auto-renewal
`2`: Disable auto-renewal
                     * @return AutoRenewFlag Specifies whether to enable auto-renewal
`0`: Default
`1`: Enable auto-renewal
`2`: Disable auto-renewal
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Specifies whether to enable auto-renewal
`0`: Default
`1`: Enable auto-renewal
`2`: Disable auto-renewal
                     * @param _autoRenewFlag Specifies whether to enable auto-renewal
`0`: Default
`1`: Enable auto-renewal
`2`: Disable auto-renewal
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
                     * 获取ID of the plan
                     * @return PlanId ID of the plan
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置ID of the plan
                     * @param _planId ID of the plan
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
                     * 获取
                     * @return Area 
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置
                     * @param _area 
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * Resource ID
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
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Effective time
                     */
                    std::string m_enableTime;
                    bool m_enableTimeHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Status of the plan
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Pricing query parameter
                     */
                    std::vector<Sv> m_sv;
                    bool m_svHasBeenSet;

                    /**
                     * Specifies whether to enable auto-renewal
`0`: Default
`1`: Enable auto-renewal
`2`: Disable auto-renewal
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * ID of the plan
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_RESOURCE_H_
