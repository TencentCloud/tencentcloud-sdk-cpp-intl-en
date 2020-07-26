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
                     * 获取HTTP header setting method
add: add header. If a header exists, then there will be a duplicated header.
set: only supports origin-pull header configuration. If a header exists, it will be overwritten. If one does not exist, then the header will be added.
del: delete header
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HeaderMode HTTP header setting method
add: add header. If a header exists, then there will be a duplicated header.
set: only supports origin-pull header configuration. If a header exists, it will be overwritten. If one does not exist, then the header will be added.
del: delete header
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHeaderMode() const;

                    /**
                     * 设置HTTP header setting method
add: add header. If a header exists, then there will be a duplicated header.
set: only supports origin-pull header configuration. If a header exists, it will be overwritten. If one does not exist, then the header will be added.
del: delete header
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param HeaderMode HTTP header setting method
add: add header. If a header exists, then there will be a duplicated header.
set: only supports origin-pull header configuration. If a header exists, it will be overwritten. If one does not exist, then the header will be added.
del: delete header
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHeaderMode(const std::string& _headerMode);

                    /**
                     * 判断参数 HeaderMode 是否已赋值
                     * @return HeaderMode 是否已赋值
                     */
                    bool HeaderModeHasBeenSet() const;

                    /**
                     * 获取HTTP header name. Up to 100 characters can be set.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HeaderName HTTP header name. Up to 100 characters can be set.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置HTTP header name. Up to 100 characters can be set.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param HeaderName HTTP header name. Up to 100 characters can be set.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHeaderName(const std::string& _headerName);

                    /**
                     * 判断参数 HeaderName 是否已赋值
                     * @return HeaderName 是否已赋值
                     */
                    bool HeaderNameHasBeenSet() const;

                    /**
                     * 获取HTTP header value. Up to 1000 characters can be set.
Not required when Mode is del
Required when Mode is add/set
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HeaderValue HTTP header value. Up to 1000 characters can be set.
Not required when Mode is del
Required when Mode is add/set
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHeaderValue() const;

                    /**
                     * 设置HTTP header value. Up to 1000 characters can be set.
Not required when Mode is del
Required when Mode is add/set
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param HeaderValue HTTP header value. Up to 1000 characters can be set.
Not required when Mode is del
Required when Mode is add/set
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHeaderValue(const std::string& _headerValue);

                    /**
                     * 判断参数 HeaderValue 是否已赋值
                     * @return HeaderValue 是否已赋值
                     */
                    bool HeaderValueHasBeenSet() const;

                    /**
                     * 获取Rule types:
`all`: effective for all files
`file`: effective for specified file suffixes
`directory`: effective for specified paths
`path`: effective for specified absolute paths
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RuleType Rule types:
`all`: effective for all files
`file`: effective for specified file suffixes
`directory`: effective for specified paths
`path`: effective for specified absolute paths
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule types:
`all`: effective for all files
`file`: effective for specified file suffixes
`directory`: effective for specified paths
`path`: effective for specified absolute paths
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RuleType Rule types:
`all`: effective for all files
`file`: effective for specified file suffixes
`directory`: effective for specified paths
`path`: effective for specified absolute paths
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Content for each RuleType:
For `all`, enter an asterisk (*).
For `file`, enter the suffix, such as jpg, txt.
For `directory`, enter the path, such as /xxx/test/.
For `path`, enter the corresponding absolute path, such as /xxx/test.html.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RulePaths Content for each RuleType:
For `all`, enter an asterisk (*).
For `file`, enter the suffix, such as jpg, txt.
For `directory`, enter the path, such as /xxx/test/.
For `path`, enter the corresponding absolute path, such as /xxx/test.html.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Content for each RuleType:
For `all`, enter an asterisk (*).
For `file`, enter the suffix, such as jpg, txt.
For `directory`, enter the path, such as /xxx/test/.
For `path`, enter the corresponding absolute path, such as /xxx/test.html.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RulePaths Content for each RuleType:
For `all`, enter an asterisk (*).
For `file`, enter the suffix, such as jpg, txt.
For `directory`, enter the path, such as /xxx/test/.
For `path`, enter the corresponding absolute path, such as /xxx/test.html.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     */
                    bool RulePathsHasBeenSet() const;

                private:

                    /**
                     * HTTP header setting method
add: add header. If a header exists, then there will be a duplicated header.
set: only supports origin-pull header configuration. If a header exists, it will be overwritten. If one does not exist, then the header will be added.
del: delete header
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_headerMode;
                    bool m_headerModeHasBeenSet;

                    /**
                     * HTTP header name. Up to 100 characters can be set.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                    /**
                     * HTTP header value. Up to 1000 characters can be set.
Not required when Mode is del
Required when Mode is add/set
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_headerValue;
                    bool m_headerValueHasBeenSet;

                    /**
                     * Rule types:
`all`: effective for all files
`file`: effective for specified file suffixes
`directory`: effective for specified paths
`path`: effective for specified absolute paths
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Content for each RuleType:
For `all`, enter an asterisk (*).
For `file`, enter the suffix, such as jpg, txt.
For `directory`, enter the path, such as /xxx/test/.
For `path`, enter the corresponding absolute path, such as /xxx/test.html.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_HTTPHEADERPATHRULE_H_
