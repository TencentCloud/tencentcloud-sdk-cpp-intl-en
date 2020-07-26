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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_USERAGENTFILTERRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_USERAGENTFILTERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * `UserAgent` blacklist/whitelist rule configuration
                */
                class UserAgentFilterRule : public AbstractModel
                {
                public:
                    UserAgentFilterRule();
                    ~UserAgentFilterRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Effective access path type
all: all access paths are effective
file: effective by file extension
directory: effective by directory
path: effective by full access path
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RuleType Effective access path type
all: all access paths are effective
file: effective by file extension
directory: effective by directory
path: effective by full access path
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Effective access path type
all: all access paths are effective
file: effective by file extension
directory: effective by directory
path: effective by full access path
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RuleType Effective access path type
all: all access paths are effective
file: effective by file extension
directory: effective by directory
path: effective by full access path
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Effective access paths
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RulePaths Effective access paths
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Effective access paths
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RulePaths Effective access paths
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     */
                    bool RulePathsHasBeenSet() const;

                    /**
                     * 获取`UserAgent` list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserAgents `UserAgent` list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetUserAgents() const;

                    /**
                     * 设置`UserAgent` list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UserAgents `UserAgent` list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserAgents(const std::vector<std::string>& _userAgents);

                    /**
                     * 判断参数 UserAgents 是否已赋值
                     * @return UserAgents 是否已赋值
                     */
                    bool UserAgentsHasBeenSet() const;

                    /**
                     * 获取Blacklist or whitelist. Valid values: blacklist, whitelist
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FilterType Blacklist or whitelist. Valid values: blacklist, whitelist
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置Blacklist or whitelist. Valid values: blacklist, whitelist
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FilterType Blacklist or whitelist. Valid values: blacklist, whitelist
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     */
                    bool FilterTypeHasBeenSet() const;

                private:

                    /**
                     * Effective access path type
all: all access paths are effective
file: effective by file extension
directory: effective by directory
path: effective by full access path
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Effective access paths
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                    /**
                     * `UserAgent` list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_userAgents;
                    bool m_userAgentsHasBeenSet;

                    /**
                     * Blacklist or whitelist. Valid values: blacklist, whitelist
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_USERAGENTFILTERRULE_H_
