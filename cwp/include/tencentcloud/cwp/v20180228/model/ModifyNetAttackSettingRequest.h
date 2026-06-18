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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYNETATTACKSETTINGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYNETATTACKSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyNetAttackSetting request structure.
                */
                class ModifyNetAttackSettingRequest : public AbstractModel
                {
                public:
                    ModifyNetAttackSettingRequest();
                    ~ModifyNetAttackSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>0: Disable network attack detection; 1: Enable network attack detection</p>
                     * @return NetAttackEnable <p>0: Disable network attack detection; 1: Enable network attack detection</p>
                     * 
                     */
                    uint64_t GetNetAttackEnable() const;

                    /**
                     * 设置<p>0: Disable network attack detection; 1: Enable network attack detection</p>
                     * @param _netAttackEnable <p>0: Disable network attack detection; 1: Enable network attack detection</p>
                     * 
                     */
                    void SetNetAttackEnable(const uint64_t& _netAttackEnable);

                    /**
                     * 判断参数 NetAttackEnable 是否已赋值
                     * @return NetAttackEnable 是否已赋值
                     * 
                     */
                    bool NetAttackEnableHasBeenSet() const;

                    /**
                     * 获取<p>0: Newly added alert events are pending by default; 1: newly added alert events are processed by default; 3: newly added alert events are ignored by default</p>
                     * @return NetAttackAlarmStatus <p>0: Newly added alert events are pending by default; 1: newly added alert events are processed by default; 3: newly added alert events are ignored by default</p>
                     * 
                     */
                    uint64_t GetNetAttackAlarmStatus() const;

                    /**
                     * 设置<p>0: Newly added alert events are pending by default; 1: newly added alert events are processed by default; 3: newly added alert events are ignored by default</p>
                     * @param _netAttackAlarmStatus <p>0: Newly added alert events are pending by default; 1: newly added alert events are processed by default; 3: newly added alert events are ignored by default</p>
                     * 
                     */
                    void SetNetAttackAlarmStatus(const uint64_t& _netAttackAlarmStatus);

                    /**
                     * 判断参数 NetAttackAlarmStatus 是否已赋值
                     * @return NetAttackAlarmStatus 是否已赋值
                     * 
                     */
                    bool NetAttackAlarmStatusHasBeenSet() const;

                    /**
                     * 获取<p>1: All Ultimate Edition hosts; 0: Hosts in the Quuids list</p>
                     * @return Scope <p>1: All Ultimate Edition hosts; 0: Hosts in the Quuids list</p>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>1: All Ultimate Edition hosts; 0: Hosts in the Quuids list</p>
                     * @param _scope <p>1: All Ultimate Edition hosts; 0: Hosts in the Quuids list</p>
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>Selected hosts</p>
                     * @return InstanceIds <p>Selected hosts</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>Selected hosts</p>
                     * @param _instanceIds <p>Selected hosts</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>Custom excluded hosts</p>
                     * @return ExcludeInstanceIds <p>Custom excluded hosts</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIds() const;

                    /**
                     * 设置<p>Custom excluded hosts</p>
                     * @param _excludeInstanceIds <p>Custom excluded hosts</p>
                     * 
                     */
                    void SetExcludeInstanceIds(const std::vector<std::string>& _excludeInstanceIds);

                    /**
                     * 判断参数 ExcludeInstanceIds 是否已赋值
                     * @return ExcludeInstanceIds 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>Automatically include newly added assets. 0: No; 1: Yes</p>
                     * @return AutoInclude <p>Automatically include newly added assets. 0: No; 1: Yes</p>
                     * 
                     */
                    uint64_t GetAutoInclude() const;

                    /**
                     * 设置<p>Automatically include newly added assets. 0: No; 1: Yes</p>
                     * @param _autoInclude <p>Automatically include newly added assets. 0: No; 1: Yes</p>
                     * 
                     */
                    void SetAutoInclude(const uint64_t& _autoInclude);

                    /**
                     * 判断参数 AutoInclude 是否已赋值
                     * @return AutoInclude 是否已赋值
                     * 
                     */
                    bool AutoIncludeHasBeenSet() const;

                    /**
                     * 获取<p>Product type. 0: CWP; 1: CSC</p>
                     * @return ProductType <p>Product type. 0: CWP; 1: CSC</p>
                     * 
                     */
                    uint64_t GetProductType() const;

                    /**
                     * 设置<p>Product type. 0: CWP; 1: CSC</p>
                     * @param _productType <p>Product type. 0: CWP; 1: CSC</p>
                     * 
                     */
                    void SetProductType(const uint64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                private:

                    /**
                     * <p>0: Disable network attack detection; 1: Enable network attack detection</p>
                     */
                    uint64_t m_netAttackEnable;
                    bool m_netAttackEnableHasBeenSet;

                    /**
                     * <p>0: Newly added alert events are pending by default; 1: newly added alert events are processed by default; 3: newly added alert events are ignored by default</p>
                     */
                    uint64_t m_netAttackAlarmStatus;
                    bool m_netAttackAlarmStatusHasBeenSet;

                    /**
                     * <p>1: All Ultimate Edition hosts; 0: Hosts in the Quuids list</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Selected hosts</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>Custom excluded hosts</p>
                     */
                    std::vector<std::string> m_excludeInstanceIds;
                    bool m_excludeInstanceIdsHasBeenSet;

                    /**
                     * <p>Automatically include newly added assets. 0: No; 1: Yes</p>
                     */
                    uint64_t m_autoInclude;
                    bool m_autoIncludeHasBeenSet;

                    /**
                     * <p>Product type. 0: CWP; 1: CSC</p>
                     */
                    uint64_t m_productType;
                    bool m_productTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYNETATTACKSETTINGREQUEST_H_
