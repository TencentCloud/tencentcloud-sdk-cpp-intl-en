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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBENETATTACKSETTINGRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBENETATTACKSETTINGRESPONSE_H_

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
                * DescribeNetAttackSetting response structure.
                */
                class DescribeNetAttackSettingResponse : public AbstractModel
                {
                public:
                    DescribeNetAttackSettingResponse();
                    ~DescribeNetAttackSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取0 - Disable Network Attack Detection; 1 - Enable Network Attack Detection.
                     * @return NetAttackEnable 0 - Disable Network Attack Detection; 1 - Enable Network Attack Detection.
                     * 
                     */
                    uint64_t GetNetAttackEnable() const;

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
                     * 判断参数 NetAttackAlarmStatus 是否已赋值
                     * @return NetAttackAlarmStatus 是否已赋值
                     * 
                     */
                    bool NetAttackAlarmStatusHasBeenSet() const;

                    /**
                     * 获取1 - All Premium Edition Hosts, 0 - Hosts in InstanceIds List
                     * @return Scope 1 - All Premium Edition Hosts, 0 - Hosts in InstanceIds List
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取Selected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceIds Selected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Custom Hosts to Exclude
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExcludeInstanceIds Custom Hosts to Exclude
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIds() const;

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
                     * 1 - All Premium Edition Hosts, 0 - Hosts in InstanceIds List
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Selected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Custom Hosts to Exclude
Note: This field may return null, indicating that no valid values can be obtained.
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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBENETATTACKSETTINGRESPONSE_H_
