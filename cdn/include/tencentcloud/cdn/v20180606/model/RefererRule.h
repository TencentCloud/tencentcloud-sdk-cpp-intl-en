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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_REFERERRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_REFERERRULE_H_

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
                * Referer blacklist/whitelist configuration rules, which is effective for specific resources.
                */
                class RefererRule : public AbstractModel
                {
                public:
                    RefererRule();
                    ~RefererRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
                     * @return RuleType Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
                     * @param _ruleType Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Content for each `RuleType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
                     * @return RulePaths Content for each `RuleType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Content for each `RuleType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
                     * @param _rulePaths Content for each `RuleType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
                     * 
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     * 
                     */
                    bool RulePathsHasBeenSet() const;

                    /**
                     * 获取Referer configuration types
`whitelist`: Allowlist
`blacklist`: Blocklist
                     * @return RefererType Referer configuration types
`whitelist`: Allowlist
`blacklist`: Blocklist
                     * 
                     */
                    std::string GetRefererType() const;

                    /**
                     * 设置Referer configuration types
`whitelist`: Allowlist
`blacklist`: Blocklist
                     * @param _refererType Referer configuration types
`whitelist`: Allowlist
`blacklist`: Blocklist
                     * 
                     */
                    void SetRefererType(const std::string& _refererType);

                    /**
                     * 判断参数 RefererType 是否已赋值
                     * @return RefererType 是否已赋值
                     * 
                     */
                    bool RefererTypeHasBeenSet() const;

                    /**
                     * 获取Referer content list
                     * @return Referers Referer content list
                     * 
                     */
                    std::vector<std::string> GetReferers() const;

                    /**
                     * 设置Referer content list
                     * @param _referers Referer content list
                     * 
                     */
                    void SetReferers(const std::vector<std::string>& _referers);

                    /**
                     * 判断参数 Referers 是否已赋值
                     * @return Referers 是否已赋值
                     * 
                     */
                    bool ReferersHasBeenSet() const;

                    /**
                     * 获取Whether to allow empty referer
`true`: Allow empty referer when `RefererType = whitelist`.
`false`: Reject empty refer when `RefererType = blacklist`.
                     * @return AllowEmpty Whether to allow empty referer
`true`: Allow empty referer when `RefererType = whitelist`.
`false`: Reject empty refer when `RefererType = blacklist`.
                     * 
                     */
                    bool GetAllowEmpty() const;

                    /**
                     * 设置Whether to allow empty referer
`true`: Allow empty referer when `RefererType = whitelist`.
`false`: Reject empty refer when `RefererType = blacklist`.
                     * @param _allowEmpty Whether to allow empty referer
`true`: Allow empty referer when `RefererType = whitelist`.
`false`: Reject empty refer when `RefererType = blacklist`.
                     * 
                     */
                    void SetAllowEmpty(const bool& _allowEmpty);

                    /**
                     * 判断参数 AllowEmpty 是否已赋值
                     * @return AllowEmpty 是否已赋值
                     * 
                     */
                    bool AllowEmptyHasBeenSet() const;

                private:

                    /**
                     * Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Content for each `RuleType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                    /**
                     * Referer configuration types
`whitelist`: Allowlist
`blacklist`: Blocklist
                     */
                    std::string m_refererType;
                    bool m_refererTypeHasBeenSet;

                    /**
                     * Referer content list
                     */
                    std::vector<std::string> m_referers;
                    bool m_referersHasBeenSet;

                    /**
                     * Whether to allow empty referer
`true`: Allow empty referer when `RefererType = whitelist`.
`false`: Reject empty refer when `RefererType = blacklist`.
                     */
                    bool m_allowEmpty;
                    bool m_allowEmptyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_REFERERRULE_H_
