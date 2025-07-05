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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYVULDEFENCESETTINGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYVULDEFENCESETTINGREQUEST_H_

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
                * ModifyVulDefenceSetting request structure.
                */
                class ModifyVulDefenceSettingRequest : public AbstractModel
                {
                public:
                    ModifyVulDefenceSettingRequest();
                    ~ModifyVulDefenceSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Defense switch: 0 - off; 1 - on
                     * @return Enable Defense switch: 0 - off; 1 - on
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Defense switch: 0 - off; 1 - on
                     * @param _enable Defense switch: 0 - off; 1 - on
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

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
                     * 获取List of Ultimate Edition hosts within the scope
                     * @return Quuids List of Ultimate Edition hosts within the scope
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置List of Ultimate Edition hosts within the scope
                     * @param _quuids List of Ultimate Edition hosts within the scope
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取Exclude the list of Ultimate Edition hosts within the scope
                     * @return ExcludeInstanceIds Exclude the list of Ultimate Edition hosts within the scope
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIds() const;

                    /**
                     * 设置Exclude the list of Ultimate Edition hosts within the scope
                     * @param _excludeInstanceIds Exclude the list of Ultimate Edition hosts within the scope
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

                    /**
                     * 获取List of Ultimate Edition hosts within the scope
                     * @return InstanceIds List of Ultimate Edition hosts within the scope
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置List of Ultimate Edition hosts within the scope
                     * @param _instanceIds List of Ultimate Edition hosts within the scope
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * Defense switch: 0 - off; 1 - on
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 1 - All Ultimate edition hosts; 0 - list of hosts with Quuids
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * List of Ultimate Edition hosts within the scope
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * Exclude the list of Ultimate Edition hosts within the scope
                     */
                    std::vector<std::string> m_excludeInstanceIds;
                    bool m_excludeInstanceIdsHasBeenSet;

                    /**
                     * New assets automatically include: 0 - Do not include, 1 - include.
                     */
                    uint64_t m_autoInclude;
                    bool m_autoIncludeHasBeenSet;

                    /**
                     * List of Ultimate Edition hosts within the scope
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYVULDEFENCESETTINGREQUEST_H_
