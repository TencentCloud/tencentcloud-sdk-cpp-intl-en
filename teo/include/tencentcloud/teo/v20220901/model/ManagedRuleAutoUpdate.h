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
                * Managed rule automatic update option.
                */
                class ManagedRuleAutoUpdate : public AbstractModel
                {
                public:
                    ManagedRuleAutoUpdate();
                    ~ManagedRuleAutoUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enable automatic update to the latest version or not. Values: <li>`on`: enabled</li> <li>`off`: disabled</li>.
                     * @return AutoUpdateToLatestVersion Enable automatic update to the latest version or not. Values: <li>`on`: enabled</li> <li>`off`: disabled</li>.
                     * 
                     */
                    std::string GetAutoUpdateToLatestVersion() const;

                    /**
                     * 设置Enable automatic update to the latest version or not. Values: <li>`on`: enabled</li> <li>`off`: disabled</li>.
                     * @param _autoUpdateToLatestVersion Enable automatic update to the latest version or not. Values: <li>`on`: enabled</li> <li>`off`: disabled</li>.
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
                     * 获取Current version, compliant with ISO 8601 standard format, such as 2023-12-21T12:00:32Z, empty by default, output parameter only.
                     * @return RulesetVersion Current version, compliant with ISO 8601 standard format, such as 2023-12-21T12:00:32Z, empty by default, output parameter only.
                     * 
                     */
                    std::string GetRulesetVersion() const;

                    /**
                     * 设置Current version, compliant with ISO 8601 standard format, such as 2023-12-21T12:00:32Z, empty by default, output parameter only.
                     * @param _rulesetVersion Current version, compliant with ISO 8601 standard format, such as 2023-12-21T12:00:32Z, empty by default, output parameter only.
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
                     * Enable automatic update to the latest version or not. Values: <li>`on`: enabled</li> <li>`off`: disabled</li>.
                     */
                    std::string m_autoUpdateToLatestVersion;
                    bool m_autoUpdateToLatestVersionHasBeenSet;

                    /**
                     * Current version, compliant with ISO 8601 standard format, such as 2023-12-21T12:00:32Z, empty by default, output parameter only.
                     */
                    std::string m_rulesetVersion;
                    bool m_rulesetVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEAUTOUPDATE_H_
