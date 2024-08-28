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
                     * 获取0 - Disable Network Attack Detection; 1 - Enable Network Attack Detection.
                     * @return NetAttackEnable 0 - Disable Network Attack Detection; 1 - Enable Network Attack Detection.
                     * 
                     */
                    uint64_t GetNetAttackEnable() const;

                    /**
                     * 设置0 - Disable Network Attack Detection; 1 - Enable Network Attack Detection.
                     * @param _netAttackEnable 0 - Disable Network Attack Detection; 1 - Enable Network Attack Detection.
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
                     * 获取0: New warning events pending processing by default, 1: New warning events processed by default, 3: New warning events ignored by default.
                     * @return NetAttackAlarmStatus 0: New warning events pending processing by default, 1: New warning events processed by default, 3: New warning events ignored by default.
                     * 
                     */
                    uint64_t GetNetAttackAlarmStatus() const;

                    /**
                     * 设置0: New warning events pending processing by default, 1: New warning events processed by default, 3: New warning events ignored by default.
                     * @param _netAttackAlarmStatus 0: New warning events pending processing by default, 1: New warning events processed by default, 3: New warning events ignored by default.
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
                     * 获取1 - All Ultimate edition hosts; 0 - list of hosts with Quuids
                     * @return Scope 1 - All Ultimate edition hosts; 0 - list of hosts with Quuids
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置1 - All Ultimate edition hosts; 0 - list of hosts with Quuids
                     * @param _scope 1 - All Ultimate edition hosts; 0 - list of hosts with Quuids
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
                     * 获取Specified hosts
                     * @return InstanceIds Specified hosts
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Specified hosts
                     * @param _instanceIds Specified hosts
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
                     * 获取Manually Excluded Hosts
                     * @return ExcludeInstanceIds Manually Excluded Hosts
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIds() const;

                    /**
                     * 设置Manually Excluded Hosts
                     * @param _excludeInstanceIds Manually Excluded Hosts
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
                     * 获取New assets automatically include: 0 - Do not include, 1 - include.
                     * @return AutoInclude New assets automatically include: 0 - Do not include, 1 - include.
                     * 
                     */
                    uint64_t GetAutoInclude() const;

                    /**
                     * 设置New assets automatically include: 0 - Do not include, 1 - include.
                     * @param _autoInclude New assets automatically include: 0 - Do not include, 1 - include.
                     * 
                     */
                    void SetAutoInclude(const uint64_t& _autoInclude);

                    /**
                     * 判断参数 AutoInclude 是否已赋值
                     * @return AutoInclude 是否已赋值
                     * 
                     */
                    bool AutoIncludeHasBeenSet() const;

                private:

                    /**
                     * 0 - Disable Network Attack Detection; 1 - Enable Network Attack Detection.
                     */
                    uint64_t m_netAttackEnable;
                    bool m_netAttackEnableHasBeenSet;

                    /**
                     * 0: New warning events pending processing by default, 1: New warning events processed by default, 3: New warning events ignored by default.
                     */
                    uint64_t m_netAttackAlarmStatus;
                    bool m_netAttackAlarmStatusHasBeenSet;

                    /**
                     * 1 - All Ultimate edition hosts; 0 - list of hosts with Quuids
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Specified hosts
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Manually Excluded Hosts
                     */
                    std::vector<std::string> m_excludeInstanceIds;
                    bool m_excludeInstanceIdsHasBeenSet;

                    /**
                     * New assets automatically include: 0 - Do not include, 1 - include.
                     */
                    uint64_t m_autoInclude;
                    bool m_autoIncludeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYNETATTACKSETTINGREQUEST_H_
