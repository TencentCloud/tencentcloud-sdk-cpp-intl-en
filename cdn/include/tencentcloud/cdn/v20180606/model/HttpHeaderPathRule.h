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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_HTTPHEADERPATHRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_HTTPHEADERPATHRULE_H_

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
                * HTTP header setting rules. Up to 100 entries can be set.
                */
                class HttpHeaderPathRule : public AbstractModel
                {
                public:
                    HttpHeaderPathRule();
                    ~HttpHeaderPathRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP header setting methods
`set`: sets a value for an existing header parameter, a new header parameter, or multiple header parameters. Multiple header parameters will be merged into one.
`del`: deletes a header parameter.
`add`: adds a header parameter. By default, you can repeat the same action to add the same header parameter, which may affect browser response. Please consider the set operation first.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return HeaderMode HTTP header setting methods
`set`: sets a value for an existing header parameter, a new header parameter, or multiple header parameters. Multiple header parameters will be merged into one.
`del`: deletes a header parameter.
`add`: adds a header parameter. By default, you can repeat the same action to add the same header parameter, which may affect browser response. Please consider the set operation first.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHeaderMode() const;

                    /**
                     * 设置HTTP header setting methods
`set`: sets a value for an existing header parameter, a new header parameter, or multiple header parameters. Multiple header parameters will be merged into one.
`del`: deletes a header parameter.
`add`: adds a header parameter. By default, you can repeat the same action to add the same header parameter, which may affect browser response. Please consider the set operation first.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _headerMode HTTP header setting methods
`set`: sets a value for an existing header parameter, a new header parameter, or multiple header parameters. Multiple header parameters will be merged into one.
`del`: deletes a header parameter.
`add`: adds a header parameter. By default, you can repeat the same action to add the same header parameter, which may affect browser response. Please consider the set operation first.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHeaderMode(const std::string& _headerMode);

                    /**
                     * 判断参数 HeaderMode 是否已赋值
                     * @return HeaderMode 是否已赋值
                     * 
                     */
                    bool HeaderModeHasBeenSet() const;

                    /**
                     * 获取HTTP header name. Up to 100 characters can be set.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return HeaderName HTTP header name. Up to 100 characters can be set.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置HTTP header name. Up to 100 characters can be set.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _headerName HTTP header name. Up to 100 characters can be set.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHeaderName(const std::string& _headerName);

                    /**
                     * 判断参数 HeaderName 是否已赋值
                     * @return HeaderName 是否已赋值
                     * 
                     */
                    bool HeaderNameHasBeenSet() const;

                    /**
                     * 获取HTTP header value. Up to 1000 characters can be set.
Not required when Mode is del
Required when Mode is add/set
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return HeaderValue HTTP header value. Up to 1000 characters can be set.
Not required when Mode is del
Required when Mode is add/set
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetHeaderValue() const;

                    /**
                     * 设置HTTP header value. Up to 1000 characters can be set.
Not required when Mode is del
Required when Mode is add/set
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _headerValue HTTP header value. Up to 1000 characters can be set.
Not required when Mode is del
Required when Mode is add/set
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHeaderValue(const std::string& _headerValue);

                    /**
                     * 判断参数 HeaderValue 是否已赋值
                     * @return HeaderValue 是否已赋值
                     * 
                     */
                    bool HeaderValueHasBeenSet() const;

                    /**
                     * 获取Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuleType Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ruleType Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
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
                     * 获取Content for each `RuleType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RulePaths Content for each `RuleType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Content for each `RuleType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _rulePaths Content for each `RuleType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     * 
                     */
                    bool RulePathsHasBeenSet() const;

                private:

                    /**
                     * HTTP header setting methods
`set`: sets a value for an existing header parameter, a new header parameter, or multiple header parameters. Multiple header parameters will be merged into one.
`del`: deletes a header parameter.
`add`: adds a header parameter. By default, you can repeat the same action to add the same header parameter, which may affect browser response. Please consider the set operation first.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_headerMode;
                    bool m_headerModeHasBeenSet;

                    /**
                     * HTTP header name. Up to 100 characters can be set.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                    /**
                     * HTTP header value. Up to 1000 characters can be set.
Not required when Mode is del
Required when Mode is add/set
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_headerValue;
                    bool m_headerValueHasBeenSet;

                    /**
                     * Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Content for each `RuleType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_HTTPHEADERPATHRULE_H_
