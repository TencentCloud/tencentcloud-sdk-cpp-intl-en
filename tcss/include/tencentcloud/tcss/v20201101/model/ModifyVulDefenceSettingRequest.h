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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVULDEFENCESETTINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVULDEFENCESETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
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
                     * 获取Whether it is enabled. Valid values: `0` (disabled); `1` (enabled).
                     * @return IsEnabled Whether it is enabled. Valid values: `0` (disabled); `1` (enabled).
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置Whether it is enabled. Valid values: `0` (disabled); `1` (enabled).
                     * @param IsEnabled Whether it is enabled. Valid values: `0` (disabled); `1` (enabled).
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取Scope of servers for which to enable exploit prevention. Valid values: `0` (specified servers); `1` (all servers). This parameter is required when `IsEnabled` is `1`.
                     * @return Scope Scope of servers for which to enable exploit prevention. Valid values: `0` (specified servers); `1` (all servers). This parameter is required when `IsEnabled` is `1`.
                     */
                    int64_t GetScope() const;

                    /**
                     * 设置Scope of servers for which to enable exploit prevention. Valid values: `0` (specified servers); `1` (all servers). This parameter is required when `IsEnabled` is `1`.
                     * @param Scope Scope of servers for which to enable exploit prevention. Valid values: `0` (specified servers); `1` (all servers). This parameter is required when `IsEnabled` is `1`.
                     */
                    void SetScope(const int64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取Specified servers for which to enable exploit prevention. This parameter is required when `Scope` is `0`.
                     * @return HostIDs Specified servers for which to enable exploit prevention. This parameter is required when `Scope` is `0`.
                     */
                    std::vector<std::string> GetHostIDs() const;

                    /**
                     * 设置Specified servers for which to enable exploit prevention. This parameter is required when `Scope` is `0`.
                     * @param HostIDs Specified servers for which to enable exploit prevention. This parameter is required when `Scope` is `0`.
                     */
                    void SetHostIDs(const std::vector<std::string>& _hostIDs);

                    /**
                     * 判断参数 HostIDs 是否已赋值
                     * @return HostIDs 是否已赋值
                     */
                    bool HostIDsHasBeenSet() const;

                private:

                    /**
                     * Whether it is enabled. Valid values: `0` (disabled); `1` (enabled).
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * Scope of servers for which to enable exploit prevention. Valid values: `0` (specified servers); `1` (all servers). This parameter is required when `IsEnabled` is `1`.
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Specified servers for which to enable exploit prevention. This parameter is required when `Scope` is `0`.
                     */
                    std::vector<std::string> m_hostIDs;
                    bool m_hostIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVULDEFENCESETTINGREQUEST_H_
