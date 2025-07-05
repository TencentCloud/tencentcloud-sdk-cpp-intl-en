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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCESETTINGRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCESETTINGRESPONSE_H_

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
                * DescribeVulDefenceSetting response structure.
                */
                class DescribeVulDefenceSettingResponse : public AbstractModel
                {
                public:
                    DescribeVulDefenceSettingResponse();
                    ~DescribeVulDefenceSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Defense switch: 0 - off; 1 - on
                     * @return Enable Defense switch: 0 - off; 1 - on
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Scope of impact: 1 - all ultimate edition hosts across the network; 0 - hosts in the QUUID list
                     * @return Scope Scope of impact: 1 - all ultimate edition hosts across the network; 0 - hosts in the QUUID list
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
                     * 获取List of affected host QUUIDs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuids List of affected host QUUIDs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取Current number of ultimate edition hosts
                     * @return FlagshipCount Current number of ultimate edition hosts
                     * 
                     */
                    uint64_t GetFlagshipCount() const;

                    /**
                     * 判断参数 FlagshipCount 是否已赋值
                     * @return FlagshipCount 是否已赋值
                     * 
                     */
                    bool FlagshipCountHasBeenSet() const;

                    /**
                     * 获取List of affected host IDs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceIds List of affected host IDs
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
                     * 获取Whether new ultimate edition hosts automatically join: 1 - yes; 0 - no
                     * @return AutoInclude Whether new ultimate edition hosts automatically join: 1 - yes; 0 - no
                     * 
                     */
                    uint64_t GetAutoInclude() const;

                    /**
                     * 判断参数 AutoInclude 是否已赋值
                     * @return AutoInclude 是否已赋值
                     * 
                     */
                    bool AutoIncludeHasBeenSet() const;

                    /**
                     * 获取List of excluded host IDs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExcludeInstanceIds List of excluded host IDs
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

                private:

                    /**
                     * Defense switch: 0 - off; 1 - on
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Scope of impact: 1 - all ultimate edition hosts across the network; 0 - hosts in the QUUID list
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * List of affected host QUUIDs
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * Current number of ultimate edition hosts
                     */
                    uint64_t m_flagshipCount;
                    bool m_flagshipCountHasBeenSet;

                    /**
                     * List of affected host IDs
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Whether new ultimate edition hosts automatically join: 1 - yes; 0 - no
                     */
                    uint64_t m_autoInclude;
                    bool m_autoIncludeHasBeenSet;

                    /**
                     * List of excluded host IDs
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_excludeInstanceIds;
                    bool m_excludeInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCESETTINGRESPONSE_H_
