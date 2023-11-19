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
                     * 获取http header setting method: <li>set: setting. Change the value of the specified header parameter to the set value; if the set header does not exist, the header will be added; if there are multiple duplicate header parameters, all will be changed and merged into one header. ;</li> <li>del: delete. Delete the specified header parameter;</li> <li>add: add. Add the specified header parameters. By default, repeated addition is allowed, that is, the same header is added repeatedly (note: repeated addition may affect the browser response, please use the set operation first). </li>
                     * @return HeaderMode http header setting method: <li>set: setting. Change the value of the specified header parameter to the set value; if the set header does not exist, the header will be added; if there are multiple duplicate header parameters, all will be changed and merged into one header. ;</li> <li>del: delete. Delete the specified header parameter;</li> <li>add: add. Add the specified header parameters. By default, repeated addition is allowed, that is, the same header is added repeatedly (note: repeated addition may affect the browser response, please use the set operation first). </li>
                     * 
                     */
                    std::string GetHeaderMode() const;

                    /**
                     * 设置http header setting method: <li>set: setting. Change the value of the specified header parameter to the set value; if the set header does not exist, the header will be added; if there are multiple duplicate header parameters, all will be changed and merged into one header. ;</li> <li>del: delete. Delete the specified header parameter;</li> <li>add: add. Add the specified header parameters. By default, repeated addition is allowed, that is, the same header is added repeatedly (note: repeated addition may affect the browser response, please use the set operation first). </li>
                     * @param _headerMode http header setting method: <li>set: setting. Change the value of the specified header parameter to the set value; if the set header does not exist, the header will be added; if there are multiple duplicate header parameters, all will be changed and merged into one header. ;</li> <li>del: delete. Delete the specified header parameter;</li> <li>add: add. Add the specified header parameters. By default, repeated addition is allowed, that is, the same header is added repeatedly (note: repeated addition may affect the browser response, please use the set operation first). </li>
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
                     * 获取http header value, up to 1000 characters can be set; optional when Mode is del; required when Mode is add/set.
                     * @return HeaderValue http header value, up to 1000 characters can be set; optional when Mode is del; required when Mode is add/set.
                     * 
                     */
                    std::string GetHeaderValue() const;

                    /**
                     * 设置http header value, up to 1000 characters can be set; optional when Mode is del; required when Mode is add/set.
                     * @param _headerValue http header value, up to 1000 characters can be set; optional when Mode is del; required when Mode is add/set.
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
                     * 获取Rule type: <li>all: valid for all files;</li> <li>file: valid for specified file suffix;</li> <li>directory: valid for specified path;</li> <li>path: specified absolute The path takes effect. </li>
                     * @return RuleType Rule type: <li>all: valid for all files;</li> <li>file: valid for specified file suffix;</li> <li>directory: valid for specified path;</li> <li>path: specified absolute The path takes effect. </li>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule type: <li>all: valid for all files;</li> <li>file: valid for specified file suffix;</li> <li>directory: valid for specified path;</li> <li>path: specified absolute The path takes effect. </li>
                     * @param _ruleType Rule type: <li>all: valid for all files;</li> <li>file: valid for specified file suffix;</li> <li>directory: valid for specified path;</li> <li>path: specified absolute The path takes effect. </li>
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
                     * 获取Matching content under the corresponding type of RuleType: <li>Fill in * when all is used;</li> <li>Fill in suffix name when file is used, such as jpg, txt;</li> <li>Fill in path when directory is used, such as /xxx/ test/;</li> <li>Fill in the absolute path when path is specified, such as /xxx/test.html. </li>
                     * @return RulePaths Matching content under the corresponding type of RuleType: <li>Fill in * when all is used;</li> <li>Fill in suffix name when file is used, such as jpg, txt;</li> <li>Fill in path when directory is used, such as /xxx/ test/;</li> <li>Fill in the absolute path when path is specified, such as /xxx/test.html. </li>
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Matching content under the corresponding type of RuleType: <li>Fill in * when all is used;</li> <li>Fill in suffix name when file is used, such as jpg, txt;</li> <li>Fill in path when directory is used, such as /xxx/ test/;</li> <li>Fill in the absolute path when path is specified, such as /xxx/test.html. </li>
                     * @param _rulePaths Matching content under the corresponding type of RuleType: <li>Fill in * when all is used;</li> <li>Fill in suffix name when file is used, such as jpg, txt;</li> <li>Fill in path when directory is used, such as /xxx/ test/;</li> <li>Fill in the absolute path when path is specified, such as /xxx/test.html. </li>
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
                     * http header setting method: <li>set: setting. Change the value of the specified header parameter to the set value; if the set header does not exist, the header will be added; if there are multiple duplicate header parameters, all will be changed and merged into one header. ;</li> <li>del: delete. Delete the specified header parameter;</li> <li>add: add. Add the specified header parameters. By default, repeated addition is allowed, that is, the same header is added repeatedly (note: repeated addition may affect the browser response, please use the set operation first). </li>
                     */
                    std::string m_headerMode;
                    bool m_headerModeHasBeenSet;

                    /**
                     * HTTP header name. Up to 100 characters can be set.
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                    /**
                     * http header value, up to 1000 characters can be set; optional when Mode is del; required when Mode is add/set.
                     */
                    std::string m_headerValue;
                    bool m_headerValueHasBeenSet;

                    /**
                     * Rule type: <li>all: valid for all files;</li> <li>file: valid for specified file suffix;</li> <li>directory: valid for specified path;</li> <li>path: specified absolute The path takes effect. </li>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Matching content under the corresponding type of RuleType: <li>Fill in * when all is used;</li> <li>Fill in suffix name when file is used, such as jpg, txt;</li> <li>Fill in path when directory is used, such as /xxx/ test/;</li> <li>Fill in the absolute path when path is specified, such as /xxx/test.html. </li>
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HTTPHEADERPATHRULE_H_
