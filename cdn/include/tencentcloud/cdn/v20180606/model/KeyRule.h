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
For `file`, enter the suffix, such as jpg, txt.
For `directory`, enter the path, such as /xxx/test/.
For `path`, enter the corresponding absolute path, such as /xxx/test.html.
For `index`, enter a backslash (/).
Note: this field may return null, indicating that no valid value is obtained.
                     * @return RulePaths Content for each CacheType:
For `file`, enter the suffix, such as jpg, txt.
For `directory`, enter the path, such as /xxx/test/.
For `path`, enter the corresponding absolute path, such as /xxx/test.html.
For `index`, enter a backslash (/).
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Content for each CacheType:
For `file`, enter the suffix, such as jpg, txt.
For `directory`, enter the path, such as /xxx/test/.
For `path`, enter the corresponding absolute path, such as /xxx/test.html.
For `index`, enter a backslash (/).
Note: this field may return null, indicating that no valid value is obtained.
                     * @param RulePaths Content for each CacheType:
For `file`, enter the suffix, such as jpg, txt.
For `directory`, enter the path, such as /xxx/test/.
For `path`, enter the corresponding absolute path, such as /xxx/test.html.
For `index`, enter a backslash (/).
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     */
                    bool RulePathsHasBeenSet() const;

                    /**
                     * 获取Rule types:
`file`: effective for specified file suffixes
`directory`: effective for specified paths
`path`: effective for specified absolute paths
`index`: home page
Note: this field may return null, indicating that no valid value is obtained.
                     * @return RuleType Rule types:
`file`: effective for specified file suffixes
`directory`: effective for specified paths
`path`: effective for specified absolute paths
`index`: home page
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule types:
`file`: effective for specified file suffixes
`directory`: effective for specified paths
`path`: effective for specified absolute paths
`index`: home page
Note: this field may return null, indicating that no valid value is obtained.
                     * @param RuleType Rule types:
`file`: effective for specified file suffixes
`directory`: effective for specified paths
`path`: effective for specified absolute paths
`index`: home page
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Whether full-path cache is enaled
`on`: enables full-path cache (i.e., disables ignore query string)
`off`: disables full-path cache (i.e., enables ignore query string)
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return FullUrlCache Whether full-path cache is enaled
`on`: enables full-path cache (i.e., disables ignore query string)
`off`: disables full-path cache (i.e., enables ignore query string)
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetFullUrlCache() const;

                    /**
                     * 设置Whether full-path cache is enaled
`on`: enables full-path cache (i.e., disables ignore query string)
`off`: disables full-path cache (i.e., enables ignore query string)
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param FullUrlCache Whether full-path cache is enaled
`on`: enables full-path cache (i.e., disables ignore query string)
`off`: disables full-path cache (i.e., enables ignore query string)
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetFullUrlCache(const std::string& _fullUrlCache);

                    /**
                     * 判断参数 FullUrlCache 是否已赋值
                     * @return FullUrlCache 是否已赋值
                     */
                    bool FullUrlCacheHasBeenSet() const;

                    /**
                     * 获取Whether caches are case insensitive
Note: this field may return null, indicating that no valid value is obtained.
                     * @return IgnoreCase Whether caches are case insensitive
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string GetIgnoreCase() const;

                    /**
                     * 设置Whether caches are case insensitive
Note: this field may return null, indicating that no valid value is obtained.
                     * @param IgnoreCase Whether caches are case insensitive
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetIgnoreCase(const std::string& _ignoreCase);

                    /**
                     * 判断参数 IgnoreCase 是否已赋值
                     * @return IgnoreCase 是否已赋值
                     */
                    bool IgnoreCaseHasBeenSet() const;

                    /**
                     * 获取Request parameter contained in `CacheKey`
Note: this field may return null, indicating that no valid value is obtained.
                     * @return QueryString Request parameter contained in `CacheKey`
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    RuleQueryString GetQueryString() const;

                    /**
                     * 设置Request parameter contained in `CacheKey`
Note: this field may return null, indicating that no valid value is obtained.
                     * @param QueryString Request parameter contained in `CacheKey`
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetQueryString(const RuleQueryString& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取Path cache key tag, the value "user" is passed.
Note: this field may return null, indicating that no valid value is obtained.
                     * @return RuleTag Path cache key tag, the value "user" is passed.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string GetRuleTag() const;

                    /**
                     * 设置Path cache key tag, the value "user" is passed.
Note: this field may return null, indicating that no valid value is obtained.
                     * @param RuleTag Path cache key tag, the value "user" is passed.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetRuleTag(const std::string& _ruleTag);

                    /**
                     * 判断参数 RuleTag 是否已赋值
                     * @return RuleTag 是否已赋值
                     */
                    bool RuleTagHasBeenSet() const;

                private:

                    /**
                     * Content for each CacheType:
For `file`, enter the suffix, such as jpg, txt.
For `directory`, enter the path, such as /xxx/test/.
For `path`, enter the corresponding absolute path, such as /xxx/test.html.
For `index`, enter a backslash (/).
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                    /**
                     * Rule types:
`file`: effective for specified file suffixes
`directory`: effective for specified paths
`path`: effective for specified absolute paths
`index`: home page
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Whether full-path cache is enaled
`on`: enables full-path cache (i.e., disables ignore query string)
`off`: disables full-path cache (i.e., enables ignore query string)
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_fullUrlCache;
                    bool m_fullUrlCacheHasBeenSet;

                    /**
                     * Whether caches are case insensitive
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string m_ignoreCase;
                    bool m_ignoreCaseHasBeenSet;

                    /**
                     * Request parameter contained in `CacheKey`
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    RuleQueryString m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * Path cache key tag, the value "user" is passed.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string m_ruleTag;
                    bool m_ruleTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_KEYRULE_H_
