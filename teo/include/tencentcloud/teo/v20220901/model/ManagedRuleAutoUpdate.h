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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEAUTOUPDATE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEAUTOUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Automatic update options for managed rules
                */
                class ManagedRuleAutoUpdate : public AbstractModel
                {
                public:
                    ManagedRuleAutoUpdate();
                    ~ManagedRuleAutoUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether automatic update to the latest version is enabled. Valid values: <li>on: enabled</li><li>off: disabled</li>
                     * @return AutoUpdateToLatestVersion Whether automatic update to the latest version is enabled. Valid values: <li>on: enabled</li><li>off: disabled</li>
                     * 
                     */
                    std::string GetAutoUpdateToLatestVersion() const;

                    /**
                     * 设置Whether automatic update to the latest version is enabled. Valid values: <li>on: enabled</li><li>off: disabled</li>
                     * @param _autoUpdateToLatestVersion Whether automatic update to the latest version is enabled. Valid values: <li>on: enabled</li><li>off: disabled</li>
                     * 
                     */
                    void SetAutoUpdateToLatestVersion(const std::string& _autoUpdateToLatestVersion);

                    /**
                     * 判断参数 AutoUpdateToLatestVersion 是否已赋值
                     * @return AutoUpdateToLatestVersion 是否已赋值
                     * 
                     */
                    bool AutoUpdateToLatestVersionHasBeenSet() const;

                    /**
                     * 获取Currently used version in ISO 8601 format, for example, 2023-12-21T12:00:32Z. Empty by default. Output only.
                     * @return RulesetVersion Currently used version in ISO 8601 format, for example, 2023-12-21T12:00:32Z. Empty by default. Output only.
                     * 
                     */
                    std::string GetRulesetVersion() const;

                    /**
                     * 设置Currently used version in ISO 8601 format, for example, 2023-12-21T12:00:32Z. Empty by default. Output only.
                     * @param _rulesetVersion Currently used version in ISO 8601 format, for example, 2023-12-21T12:00:32Z. Empty by default. Output only.
                     * 
                     */
                    void SetRulesetVersion(const std::string& _rulesetVersion);

                    /**
                     * 判断参数 RulesetVersion 是否已赋值
                     * @return RulesetVersion 是否已赋值
                     * 
                     */
                    bool RulesetVersionHasBeenSet() const;

                private:

                    /**
                     * Whether automatic update to the latest version is enabled. Valid values: <li>on: enabled</li><li>off: disabled</li>
                     */
                    std::string m_autoUpdateToLatestVersion;
                    bool m_autoUpdateToLatestVersionHasBeenSet;

                    /**
                     * Currently used version in ISO 8601 format, for example, 2023-12-21T12:00:32Z. Empty by default. Output only.
                     */
                    std::string m_rulesetVersion;
                    bool m_rulesetVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEAUTOUPDATE_H_
