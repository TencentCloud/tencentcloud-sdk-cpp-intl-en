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
                * Http header setting rules, with a maximum of 100.
                */
                class HttpHeaderPathRule : public AbstractModel
                {
                public:
                    HttpHeaderPathRule();
                    ~HttpHeaderPathRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取http header setting method:
<li>set: Set. Change the value of the specified header parameter to the configured value; if the configured header does not exist, it will be added; if there are multiple duplicate header parameters, all will be updated and merged into one header;</li>
<li>del: delete. Delete specified HTTP header parameters;</li>
<li>add: Add. Add the specified header parameter. Duplicate addition is allowed by default, meaning the same header can be repeatedly added (Note: Repeated addition may affect browser response. Use the set operation preferentially).</li>
                     * @return HeaderMode http header setting method:
<li>set: Set. Change the value of the specified header parameter to the configured value; if the configured header does not exist, it will be added; if there are multiple duplicate header parameters, all will be updated and merged into one header;</li>
<li>del: delete. Delete specified HTTP header parameters;</li>
<li>add: Add. Add the specified header parameter. Duplicate addition is allowed by default, meaning the same header can be repeatedly added (Note: Repeated addition may affect browser response. Use the set operation preferentially).</li>
                     * 
                     */
                    std::string GetHeaderMode() const;

                    /**
                     * 设置http header setting method:
<li>set: Set. Change the value of the specified header parameter to the configured value; if the configured header does not exist, it will be added; if there are multiple duplicate header parameters, all will be updated and merged into one header;</li>
<li>del: delete. Delete specified HTTP header parameters;</li>
<li>add: Add. Add the specified header parameter. Duplicate addition is allowed by default, meaning the same header can be repeatedly added (Note: Repeated addition may affect browser response. Use the set operation preferentially).</li>
                     * @param _headerMode http header setting method:
<li>set: Set. Change the value of the specified header parameter to the configured value; if the configured header does not exist, it will be added; if there are multiple duplicate header parameters, all will be updated and merged into one header;</li>
<li>del: delete. Delete specified HTTP header parameters;</li>
<li>add: Add. Add the specified header parameter. Duplicate addition is allowed by default, meaning the same header can be repeatedly added (Note: Repeated addition may affect browser response. Use the set operation preferentially).</li>
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
                     * 获取http header name, up to 100 characters.
                     * @return HeaderName http header name, up to 100 characters.
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置http header name, up to 100 characters.
                     * @param _headerName http header name, up to 100 characters.
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
                     * 获取http header value, up to 1000 characters;
Optional when `Mode` is `del`.
Required if Mode is add/set.
                     * @return HeaderValue http header value, up to 1000 characters;
Optional when `Mode` is `del`.
Required if Mode is add/set.
                     * 
                     */
                    std::string GetHeaderValue() const;

                    /**
                     * 设置http header value, up to 1000 characters;
Optional when `Mode` is `del`.
Required if Mode is add/set.
                     * @param _headerValue http header value, up to 1000 characters;
Optional when `Mode` is `del`.
Required if Mode is add/set.
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
                     * 获取Rule type:
<li>all: take effect for all files;</li>
<li>file: The specified file suffix takes effect;</li>
<li>directory: specify the path to take effect;</li>
<li>path: The absolute path takes effect.</li>
                     * @return RuleType Rule type:
<li>all: take effect for all files;</li>
<li>file: The specified file suffix takes effect;</li>
<li>directory: specify the path to take effect;</li>
<li>path: The absolute path takes effect.</li>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule type:
<li>all: take effect for all files;</li>
<li>file: The specified file suffix takes effect;</li>
<li>directory: specify the path to take effect;</li>
<li>path: The absolute path takes effect.</li>
                     * @param _ruleType Rule type:
<li>all: take effect for all files;</li>
<li>file: The specified file suffix takes effect;</li>
<li>directory: specify the path to take effect;</li>
<li>path: The absolute path takes effect.</li>
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
                     * 获取Matching content under the corresponding type of RuleType:
<li>Fill with * when set to all;</li>
<li>For file, fill in the extension, such as jpg or txt;</li>
<li>For directory, fill in the path, such as /xxx/test/;</li>
<li>For path, fill in the absolute path, such as /xxx/test.html.</li>
                     * @return RulePaths Matching content under the corresponding type of RuleType:
<li>Fill with * when set to all;</li>
<li>For file, fill in the extension, such as jpg or txt;</li>
<li>For directory, fill in the path, such as /xxx/test/;</li>
<li>For path, fill in the absolute path, such as /xxx/test.html.</li>
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Matching content under the corresponding type of RuleType:
<li>Fill with * when set to all;</li>
<li>For file, fill in the extension, such as jpg or txt;</li>
<li>For directory, fill in the path, such as /xxx/test/;</li>
<li>For path, fill in the absolute path, such as /xxx/test.html.</li>
                     * @param _rulePaths Matching content under the corresponding type of RuleType:
<li>Fill with * when set to all;</li>
<li>For file, fill in the extension, such as jpg or txt;</li>
<li>For directory, fill in the path, such as /xxx/test/;</li>
<li>For path, fill in the absolute path, such as /xxx/test.html.</li>
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
                     * http header setting method:
<li>set: Set. Change the value of the specified header parameter to the configured value; if the configured header does not exist, it will be added; if there are multiple duplicate header parameters, all will be updated and merged into one header;</li>
<li>del: delete. Delete specified HTTP header parameters;</li>
<li>add: Add. Add the specified header parameter. Duplicate addition is allowed by default, meaning the same header can be repeatedly added (Note: Repeated addition may affect browser response. Use the set operation preferentially).</li>
                     */
                    std::string m_headerMode;
                    bool m_headerModeHasBeenSet;

                    /**
                     * http header name, up to 100 characters.
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                    /**
                     * http header value, up to 1000 characters;
Optional when `Mode` is `del`.
Required if Mode is add/set.
                     */
                    std::string m_headerValue;
                    bool m_headerValueHasBeenSet;

                    /**
                     * Rule type:
<li>all: take effect for all files;</li>
<li>file: The specified file suffix takes effect;</li>
<li>directory: specify the path to take effect;</li>
<li>path: The absolute path takes effect.</li>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Matching content under the corresponding type of RuleType:
<li>Fill with * when set to all;</li>
<li>For file, fill in the extension, such as jpg or txt;</li>
<li>For directory, fill in the path, such as /xxx/test/;</li>
<li>For path, fill in the absolute path, such as /xxx/test.html.</li>
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HTTPHEADERPATHRULE_H_
