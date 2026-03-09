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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATERESOURCEGROUPREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATERESOURCEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ResourceNumber.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateResourceGroup request structure.
                */
                class UpdateResourceGroupRequest : public AbstractModel
                {
                public:
                    UpdateResourceGroupRequest();
                    ~UpdateResourceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource group ID
                     * @return Id Resource group ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Resource group ID
                     * @param _id Resource group ID
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
                     * 获取**Change configuration (cannot include both modification, renewal, and resource package quantity changes). configuration changes cannot modify the resource group type.**.

Real-Time integration resource group.  
-i32c (real-time data sync - 16c64G).

Offline integration resource group.
-integrated (offline data sync-8C16G).
-i16 (offline data sync-8C32G).

Scheduling resource group.
-test specification.
-S_small (basic specification).
-S_medium (general specifications).
-S_large (professional specification).

Data service resource group.
-Test specification.
-ds_s(Basic specification).
-ds_m (general specifications).
-ds_l (professional specification).
                     * @return Type **Change configuration (cannot include both modification, renewal, and resource package quantity changes). configuration changes cannot modify the resource group type.**.

Real-Time integration resource group.  
-i32c (real-time data sync - 16c64G).

Offline integration resource group.
-integrated (offline data sync-8C16G).
-i16 (offline data sync-8C32G).

Scheduling resource group.
-test specification.
-S_small (basic specification).
-S_medium (general specifications).
-S_large (professional specification).

Data service resource group.
-Test specification.
-ds_s(Basic specification).
-ds_m (general specifications).
-ds_l (professional specification).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置**Change configuration (cannot include both modification, renewal, and resource package quantity changes). configuration changes cannot modify the resource group type.**.

Real-Time integration resource group.  
-i32c (real-time data sync - 16c64G).

Offline integration resource group.
-integrated (offline data sync-8C16G).
-i16 (offline data sync-8C32G).

Scheduling resource group.
-test specification.
-S_small (basic specification).
-S_medium (general specifications).
-S_large (professional specification).

Data service resource group.
-Test specification.
-ds_s(Basic specification).
-ds_m (general specifications).
-ds_l (professional specification).
                     * @param _type **Change configuration (cannot include both modification, renewal, and resource package quantity changes). configuration changes cannot modify the resource group type.**.

Real-Time integration resource group.  
-i32c (real-time data sync - 16c64G).

Offline integration resource group.
-integrated (offline data sync-8C16G).
-i16 (offline data sync-8C32G).

Scheduling resource group.
-test specification.
-S_small (basic specification).
-S_medium (general specifications).
-S_large (professional specification).

Data service resource group.
-Test specification.
-ds_s(Basic specification).
-ds_m (general specifications).
-ds_l (professional specification).
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Renewal period, unit month (cannot include both modification, renewal, and resource package quantity changes).
                     * @return PurchasePeriod Renewal period, unit month (cannot include both modification, renewal, and resource package quantity changes).
                     * 
                     */
                    int64_t GetPurchasePeriod() const;

                    /**
                     * 设置Renewal period, unit month (cannot include both modification, renewal, and resource package quantity changes).
                     * @param _purchasePeriod Renewal period, unit month (cannot include both modification, renewal, and resource package quantity changes).
                     * 
                     */
                    void SetPurchasePeriod(const int64_t& _purchasePeriod);

                    /**
                     * 判断参数 PurchasePeriod 是否已赋值
                     * @return PurchasePeriod 是否已赋值
                     * 
                     */
                    bool PurchasePeriodHasBeenSet() const;

                    /**
                     * 获取Add or reduce the number of resource packages (modification, renewal, and changing the number of resource packages cannot include both).
                     * @return Number Add or reduce the number of resource packages (modification, renewal, and changing the number of resource packages cannot include both).
                     * 
                     */
                    ResourceNumber GetNumber() const;

                    /**
                     * 设置Add or reduce the number of resource packages (modification, renewal, and changing the number of resource packages cannot include both).
                     * @param _number Add or reduce the number of resource packages (modification, renewal, and changing the number of resource packages cannot include both).
                     * 
                     */
                    void SetNumber(const ResourceNumber& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取Auto-Renewal or not. the renewal parameters take effect when PurchasePeriod is not empty.
                     * @return AutoRenewEnabled Auto-Renewal or not. the renewal parameters take effect when PurchasePeriod is not empty.
                     * 
                     */
                    bool GetAutoRenewEnabled() const;

                    /**
                     * 设置Auto-Renewal or not. the renewal parameters take effect when PurchasePeriod is not empty.
                     * @param _autoRenewEnabled Auto-Renewal or not. the renewal parameters take effect when PurchasePeriod is not empty.
                     * 
                     */
                    void SetAutoRenewEnabled(const bool& _autoRenewEnabled);

                    /**
                     * 判断参数 AutoRenewEnabled 是否已赋值
                     * @return AutoRenewEnabled 是否已赋值
                     * 
                     */
                    bool AutoRenewEnabledHasBeenSet() const;

                private:

                    /**
                     * Resource group ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * **Change configuration (cannot include both modification, renewal, and resource package quantity changes). configuration changes cannot modify the resource group type.**.

Real-Time integration resource group.  
-i32c (real-time data sync - 16c64G).

Offline integration resource group.
-integrated (offline data sync-8C16G).
-i16 (offline data sync-8C32G).

Scheduling resource group.
-test specification.
-S_small (basic specification).
-S_medium (general specifications).
-S_large (professional specification).

Data service resource group.
-Test specification.
-ds_s(Basic specification).
-ds_m (general specifications).
-ds_l (professional specification).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Renewal period, unit month (cannot include both modification, renewal, and resource package quantity changes).
                     */
                    int64_t m_purchasePeriod;
                    bool m_purchasePeriodHasBeenSet;

                    /**
                     * Add or reduce the number of resource packages (modification, renewal, and changing the number of resource packages cannot include both).
                     */
                    ResourceNumber m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Auto-Renewal or not. the renewal parameters take effect when PurchasePeriod is not empty.
                     */
                    bool m_autoRenewEnabled;
                    bool m_autoRenewEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATERESOURCEGROUPREQUEST_H_
