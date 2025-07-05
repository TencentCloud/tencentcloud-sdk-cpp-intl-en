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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PATHBASEDORIGINRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PATHBASEDORIGINRULE_H_

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
                * Path-based origin-pull rule
                */
                class PathBasedOriginRule : public AbstractModel
                {
                public:
                    PathBasedOriginRule();
                    ~PathBasedOriginRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule types:
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`index`: Apply to specified homepages.
                     * @return RuleType Rule types:
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`index`: Apply to specified homepages.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule types:
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`index`: Apply to specified homepages.
                     * @param _ruleType Rule types:
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`index`: Apply to specified homepages.
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
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a forward slash `/`.
                     * @return RulePaths Content for each `RuleType`:
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a forward slash `/`.
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Content for each `RuleType`:
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a forward slash `/`.
                     * @param _rulePaths Content for each `RuleType`:
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a forward slash `/`.
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
                     * 获取Origin server list. Domain name and IPv4 addresses are supported.
                     * @return Origin Origin server list. Domain name and IPv4 addresses are supported.
                     * 
                     */
                    std::vector<std::string> GetOrigin() const;

                    /**
                     * 设置Origin server list. Domain name and IPv4 addresses are supported.
                     * @param _origin Origin server list. Domain name and IPv4 addresses are supported.
                     * 
                     */
                    void SetOrigin(const std::vector<std::string>& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                private:

                    /**
                     * Rule types:
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`index`: Apply to specified homepages.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Content for each `RuleType`:
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a forward slash `/`.
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                    /**
                     * Origin server list. Domain name and IPv4 addresses are supported.
                     */
                    std::vector<std::string> m_origin;
                    bool m_originHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PATHBASEDORIGINRULE_H_
