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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_KEYRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_KEYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/RuleQueryString.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Path-based cache key configuration
                */
                class KeyRule : public AbstractModel
                {
                public:
                    KeyRule();
                    ~KeyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Content for each CacheType:
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter the path, such as /xxx/test/.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a backslash (/).
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return RulePaths Content for each CacheType:
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter the path, such as /xxx/test/.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a backslash (/).
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Content for each CacheType:
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter the path, such as /xxx/test/.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a backslash (/).
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _rulePaths Content for each CacheType:
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter the path, such as /xxx/test/.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a backslash (/).
Note: this field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Rule types:
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`index`: home page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuleType Rule types:
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`index`: home page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule types:
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`index`: home page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ruleType Rule types:
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`index`: home page
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Whether to enable full-path cache
`on`: Enable full-path cache (i.e., disable Ignore Query String).
`off`: Disable full-path cache (i.e., enable Ignore Query String).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FullUrlCache Whether to enable full-path cache
`on`: Enable full-path cache (i.e., disable Ignore Query String).
`off`: Disable full-path cache (i.e., enable Ignore Query String).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFullUrlCache() const;

                    /**
                     * 设置Whether to enable full-path cache
`on`: Enable full-path cache (i.e., disable Ignore Query String).
`off`: Disable full-path cache (i.e., enable Ignore Query String).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _fullUrlCache Whether to enable full-path cache
`on`: Enable full-path cache (i.e., disable Ignore Query String).
`off`: Disable full-path cache (i.e., enable Ignore Query String).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFullUrlCache(const std::string& _fullUrlCache);

                    /**
                     * 判断参数 FullUrlCache 是否已赋值
                     * @return FullUrlCache 是否已赋值
                     * 
                     */
                    bool FullUrlCacheHasBeenSet() const;

                    /**
                     * 获取Whether caches are case insensitive
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IgnoreCase Whether caches are case insensitive
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIgnoreCase() const;

                    /**
                     * 设置Whether caches are case insensitive
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ignoreCase Whether caches are case insensitive
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIgnoreCase(const std::string& _ignoreCase);

                    /**
                     * 判断参数 IgnoreCase 是否已赋值
                     * @return IgnoreCase 是否已赋值
                     * 
                     */
                    bool IgnoreCaseHasBeenSet() const;

                    /**
                     * 获取Request parameter contained in `CacheKey`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return QueryString Request parameter contained in `CacheKey`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    RuleQueryString GetQueryString() const;

                    /**
                     * 设置Request parameter contained in `CacheKey`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _queryString Request parameter contained in `CacheKey`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetQueryString(const RuleQueryString& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取Path cache key tag, the value "user" is passed.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuleTag Path cache key tag, the value "user" is passed.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRuleTag() const;

                    /**
                     * 设置Path cache key tag, the value "user" is passed.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ruleTag Path cache key tag, the value "user" is passed.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleTag(const std::string& _ruleTag);

                    /**
                     * 判断参数 RuleTag 是否已赋值
                     * @return RuleTag 是否已赋值
                     * 
                     */
                    bool RuleTagHasBeenSet() const;

                private:

                    /**
                     * Content for each CacheType:
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter the path, such as /xxx/test/.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a backslash (/).
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                    /**
                     * Rule types:
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`index`: home page
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Whether to enable full-path cache
`on`: Enable full-path cache (i.e., disable Ignore Query String).
`off`: Disable full-path cache (i.e., enable Ignore Query String).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_fullUrlCache;
                    bool m_fullUrlCacheHasBeenSet;

                    /**
                     * Whether caches are case insensitive
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ignoreCase;
                    bool m_ignoreCaseHasBeenSet;

                    /**
                     * Request parameter contained in `CacheKey`
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    RuleQueryString m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * Path cache key tag, the value "user" is passed.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ruleTag;
                    bool m_ruleTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_KEYRULE_H_
