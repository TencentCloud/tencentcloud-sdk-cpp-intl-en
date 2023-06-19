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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_HTTPHEADERPATHRULE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_HTTPHEADERPATHRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * 获取HTTP header setting methods: <li>set: sets a value for an existing header parameter, a new header parameter, or multiple header parameters. Multiple header parameters will be merged into one.</li> <li>del: deletes a header parameter.</li> <li>add: adds a header parameter. By default, you can repeat the same action to add the same header parameter, which may affect browser response. Please consider the set operation first.</li>
                     * @return HeaderMode HTTP header setting methods: <li>set: sets a value for an existing header parameter, a new header parameter, or multiple header parameters. Multiple header parameters will be merged into one.</li> <li>del: deletes a header parameter.</li> <li>add: adds a header parameter. By default, you can repeat the same action to add the same header parameter, which may affect browser response. Please consider the set operation first.</li>
                     * 
                     */
                    std::string GetHeaderMode() const;

                    /**
                     * 设置HTTP header setting methods: <li>set: sets a value for an existing header parameter, a new header parameter, or multiple header parameters. Multiple header parameters will be merged into one.</li> <li>del: deletes a header parameter.</li> <li>add: adds a header parameter. By default, you can repeat the same action to add the same header parameter, which may affect browser response. Please consider the set operation first.</li>
                     * @param _headerMode HTTP header setting methods: <li>set: sets a value for an existing header parameter, a new header parameter, or multiple header parameters. Multiple header parameters will be merged into one.</li> <li>del: deletes a header parameter.</li> <li>add: adds a header parameter. By default, you can repeat the same action to add the same header parameter, which may affect browser response. Please consider the set operation first.</li>
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
                     * @return HeaderName HTTP header name. Up to 100 characters can be set.
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置HTTP header name. Up to 100 characters can be set.
                     * @param _headerName HTTP header name. Up to 100 characters can be set.
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
                     * 获取HTTP header value. Up to 1000 characters can be set.<li>Not required when Mode is del.</li> <li>Required when Mode is add/set.</li>
                     * @return HeaderValue HTTP header value. Up to 1000 characters can be set.<li>Not required when Mode is del.</li> <li>Required when Mode is add/set.</li>
                     * 
                     */
                    std::string GetHeaderValue() const;

                    /**
                     * 设置HTTP header value. Up to 1000 characters can be set.<li>Not required when Mode is del.</li> <li>Required when Mode is add/set.</li>
                     * @param _headerValue HTTP header value. Up to 1000 characters can be set.<li>Not required when Mode is del.</li> <li>Required when Mode is add/set.</li>
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
                     * 获取Rule types:<li>all: Apply to all files.</li> <li>file: Apply to files with the specified suffixes.</li> <li>directory: Apply to specified paths.</li> <li>path: Apply to specified absolute paths.</li>
                     * @return RuleType Rule types:<li>all: Apply to all files.</li> <li>file: Apply to files with the specified suffixes.</li> <li>directory: Apply to specified paths.</li> <li>path: Apply to specified absolute paths.</li>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule types:<li>all: Apply to all files.</li> <li>file: Apply to files with the specified suffixes.</li> <li>directory: Apply to specified paths.</li> <li>path: Apply to specified absolute paths.</li>
                     * @param _ruleType Rule types:<li>all: Apply to all files.</li> <li>file: Apply to files with the specified suffixes.</li> <li>directory: Apply to specified paths.</li> <li>path: Apply to specified absolute paths.</li>
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
                     * 获取Content for each RuleType:<li>For all, enter a wildcard *.</li> <li>For file, enter a suffix, e.g., jpg or txt.</li> <li>For directory, enter a path, e.g., /xxx/test/.</li> <li>For path, enter an absolute path, e.g., /xxx/test.html.</li>
                     * @return RulePaths Content for each RuleType:<li>For all, enter a wildcard *.</li> <li>For file, enter a suffix, e.g., jpg or txt.</li> <li>For directory, enter a path, e.g., /xxx/test/.</li> <li>For path, enter an absolute path, e.g., /xxx/test.html.</li>
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Content for each RuleType:<li>For all, enter a wildcard *.</li> <li>For file, enter a suffix, e.g., jpg or txt.</li> <li>For directory, enter a path, e.g., /xxx/test/.</li> <li>For path, enter an absolute path, e.g., /xxx/test.html.</li>
                     * @param _rulePaths Content for each RuleType:<li>For all, enter a wildcard *.</li> <li>For file, enter a suffix, e.g., jpg or txt.</li> <li>For directory, enter a path, e.g., /xxx/test/.</li> <li>For path, enter an absolute path, e.g., /xxx/test.html.</li>
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
                     * HTTP header setting methods: <li>set: sets a value for an existing header parameter, a new header parameter, or multiple header parameters. Multiple header parameters will be merged into one.</li> <li>del: deletes a header parameter.</li> <li>add: adds a header parameter. By default, you can repeat the same action to add the same header parameter, which may affect browser response. Please consider the set operation first.</li>
                     */
                    std::string m_headerMode;
                    bool m_headerModeHasBeenSet;

                    /**
                     * HTTP header name. Up to 100 characters can be set.
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                    /**
                     * HTTP header value. Up to 1000 characters can be set.<li>Not required when Mode is del.</li> <li>Required when Mode is add/set.</li>
                     */
                    std::string m_headerValue;
                    bool m_headerValueHasBeenSet;

                    /**
                     * Rule types:<li>all: Apply to all files.</li> <li>file: Apply to files with the specified suffixes.</li> <li>directory: Apply to specified paths.</li> <li>path: Apply to specified absolute paths.</li>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Content for each RuleType:<li>For all, enter a wildcard *.</li> <li>For file, enter a suffix, e.g., jpg or txt.</li> <li>For directory, enter a path, e.g., /xxx/test/.</li> <li>For path, enter an absolute path, e.g., /xxx/test.html.</li>
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HTTPHEADERPATHRULE_H_
