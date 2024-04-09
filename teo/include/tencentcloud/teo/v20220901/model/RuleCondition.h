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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULECONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULECONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Rule engine condition parameters
                */
                class RuleCondition : public AbstractModel
                {
                public:
                    RuleCondition();
                    ~RuleCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operator. Valid values:
<li>`equals`: Equals</li>
<li>`notEquals`: Does not equal</li>
<li>`exist`: Exists</li>
<li>`notexist`: Does not exist</li>
                     * @return Operator Operator. Valid values:
<li>`equals`: Equals</li>
<li>`notEquals`: Does not equal</li>
<li>`exist`: Exists</li>
<li>`notexist`: Does not exist</li>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator. Valid values:
<li>`equals`: Equals</li>
<li>`notEquals`: Does not equal</li>
<li>`exist`: Exists</li>
<li>`notexist`: Does not exist</li>
                     * @param _operator Operator. Valid values:
<li>`equals`: Equals</li>
<li>`notEquals`: Does not equal</li>
<li>`exist`: Exists</li>
<li>`notexist`: Does not exist</li>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Match type. Valid values: <li> filename: File name; </li> <li> extension: File extension; </li> <li> host: Host name; </li> <li> full_url: The complete URL path under the current site, which must include the HTTP protocol, host, and path; </li> <li> url: Request for the URL path under the current site; </li><li> client_country: Client country/region;</li> <li> query_string: The query string of the URL requested under the current site; </li> <li> request_header: HTTP request header; </li><li> client_ip: Client IP address. </li>
                     * @return Target Match type. Valid values: <li> filename: File name; </li> <li> extension: File extension; </li> <li> host: Host name; </li> <li> full_url: The complete URL path under the current site, which must include the HTTP protocol, host, and path; </li> <li> url: Request for the URL path under the current site; </li><li> client_country: Client country/region;</li> <li> query_string: The query string of the URL requested under the current site; </li> <li> request_header: HTTP request header; </li><li> client_ip: Client IP address. </li>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Match type. Valid values: <li> filename: File name; </li> <li> extension: File extension; </li> <li> host: Host name; </li> <li> full_url: The complete URL path under the current site, which must include the HTTP protocol, host, and path; </li> <li> url: Request for the URL path under the current site; </li><li> client_country: Client country/region;</li> <li> query_string: The query string of the URL requested under the current site; </li> <li> request_header: HTTP request header; </li><li> client_ip: Client IP address. </li>
                     * @param _target Match type. Valid values: <li> filename: File name; </li> <li> extension: File extension; </li> <li> host: Host name; </li> <li> full_url: The complete URL path under the current site, which must include the HTTP protocol, host, and path; </li> <li> url: Request for the URL path under the current site; </li><li> client_country: Client country/region;</li> <li> query_string: The query string of the URL requested under the current site; </li> <li> request_header: HTTP request header; </li><li> client_ip: Client IP address. </li>
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取The parameter values for match types. It is allowed to pass an empty array only when the match type is query_string or request_header and the operator value is Exist or Does Not Exist. The corresponding match types include:
<li> File extension: Extensions like jpg, txt, etc.;</li>
<li> File name: For example, foo in foo.jpg;</li>
<li> All: All requests for domain names under the site; </li>
<li> HOST: The host under the current site, for example, www.maxx55.com;</li>
<li> URL Path: Request for the URL path under the current site, for example, /example;</li>
<li> URL Full: The complete URL request under the current site, which must include the HTTP protocol, host, and path, for example, https://www.maxx55.cn/example;</li>
<li> Client country/region: Country/region codes compliant with the ISO3166 standard;</li>
<li> Query string: The parameter values in the query string of the URL requested under the current site, for example, cn and 1 in lang=cn&version=1; </li>
<li> HTTP request header: The value of the HTTP request header field, for example, zh-CN,zh;q=0.9 in Accept-Language:zh-CN,zh;q=0.9; </li>
<li> Client IP: The client IP address carried by the current request, supporting IPv4, IPv6, and an IP range. </li>
                     * @return Values The parameter values for match types. It is allowed to pass an empty array only when the match type is query_string or request_header and the operator value is Exist or Does Not Exist. The corresponding match types include:
<li> File extension: Extensions like jpg, txt, etc.;</li>
<li> File name: For example, foo in foo.jpg;</li>
<li> All: All requests for domain names under the site; </li>
<li> HOST: The host under the current site, for example, www.maxx55.com;</li>
<li> URL Path: Request for the URL path under the current site, for example, /example;</li>
<li> URL Full: The complete URL request under the current site, which must include the HTTP protocol, host, and path, for example, https://www.maxx55.cn/example;</li>
<li> Client country/region: Country/region codes compliant with the ISO3166 standard;</li>
<li> Query string: The parameter values in the query string of the URL requested under the current site, for example, cn and 1 in lang=cn&version=1; </li>
<li> HTTP request header: The value of the HTTP request header field, for example, zh-CN,zh;q=0.9 in Accept-Language:zh-CN,zh;q=0.9; </li>
<li> Client IP: The client IP address carried by the current request, supporting IPv4, IPv6, and an IP range. </li>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置The parameter values for match types. It is allowed to pass an empty array only when the match type is query_string or request_header and the operator value is Exist or Does Not Exist. The corresponding match types include:
<li> File extension: Extensions like jpg, txt, etc.;</li>
<li> File name: For example, foo in foo.jpg;</li>
<li> All: All requests for domain names under the site; </li>
<li> HOST: The host under the current site, for example, www.maxx55.com;</li>
<li> URL Path: Request for the URL path under the current site, for example, /example;</li>
<li> URL Full: The complete URL request under the current site, which must include the HTTP protocol, host, and path, for example, https://www.maxx55.cn/example;</li>
<li> Client country/region: Country/region codes compliant with the ISO3166 standard;</li>
<li> Query string: The parameter values in the query string of the URL requested under the current site, for example, cn and 1 in lang=cn&version=1; </li>
<li> HTTP request header: The value of the HTTP request header field, for example, zh-CN,zh;q=0.9 in Accept-Language:zh-CN,zh;q=0.9; </li>
<li> Client IP: The client IP address carried by the current request, supporting IPv4, IPv6, and an IP range. </li>
                     * @param _values The parameter values for match types. It is allowed to pass an empty array only when the match type is query_string or request_header and the operator value is Exist or Does Not Exist. The corresponding match types include:
<li> File extension: Extensions like jpg, txt, etc.;</li>
<li> File name: For example, foo in foo.jpg;</li>
<li> All: All requests for domain names under the site; </li>
<li> HOST: The host under the current site, for example, www.maxx55.com;</li>
<li> URL Path: Request for the URL path under the current site, for example, /example;</li>
<li> URL Full: The complete URL request under the current site, which must include the HTTP protocol, host, and path, for example, https://www.maxx55.cn/example;</li>
<li> Client country/region: Country/region codes compliant with the ISO3166 standard;</li>
<li> Query string: The parameter values in the query string of the URL requested under the current site, for example, cn and 1 in lang=cn&version=1; </li>
<li> HTTP request header: The value of the HTTP request header field, for example, zh-CN,zh;q=0.9 in Accept-Language:zh-CN,zh;q=0.9; </li>
<li> Client IP: The client IP address carried by the current request, supporting IPv4, IPv6, and an IP range. </li>
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取Whether the parameter value is case insensitive. Default value: false.
                     * @return IgnoreCase Whether the parameter value is case insensitive. Default value: false.
                     * 
                     */
                    bool GetIgnoreCase() const;

                    /**
                     * 设置Whether the parameter value is case insensitive. Default value: false.
                     * @param _ignoreCase Whether the parameter value is case insensitive. Default value: false.
                     * 
                     */
                    void SetIgnoreCase(const bool& _ignoreCase);

                    /**
                     * 判断参数 IgnoreCase 是否已赋值
                     * @return IgnoreCase 是否已赋值
                     * 
                     */
                    bool IgnoreCaseHasBeenSet() const;

                    /**
                     * 获取The parameter name of the match type. This field is required only when `Target=query_string/request_header`.
<li>`query_string`: Name of the query string, such as "lang" and "version" in "lang=cn&version=1".</li>
<li>`request_header`: Name of the HTTP request header, such as "Accept-Language" in the "Accept-Language:zh-CN,zh;q=0.9" header.</li>
                     * @return Name The parameter name of the match type. This field is required only when `Target=query_string/request_header`.
<li>`query_string`: Name of the query string, such as "lang" and "version" in "lang=cn&version=1".</li>
<li>`request_header`: Name of the HTTP request header, such as "Accept-Language" in the "Accept-Language:zh-CN,zh;q=0.9" header.</li>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The parameter name of the match type. This field is required only when `Target=query_string/request_header`.
<li>`query_string`: Name of the query string, such as "lang" and "version" in "lang=cn&version=1".</li>
<li>`request_header`: Name of the HTTP request header, such as "Accept-Language" in the "Accept-Language:zh-CN,zh;q=0.9" header.</li>
                     * @param _name The parameter name of the match type. This field is required only when `Target=query_string/request_header`.
<li>`query_string`: Name of the query string, such as "lang" and "version" in "lang=cn&version=1".</li>
<li>`request_header`: Name of the HTTP request header, such as "Accept-Language" in the "Accept-Language:zh-CN,zh;q=0.9" header.</li>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Whether the parameter name is case insensitive. Default value: `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IgnoreNameCase Whether the parameter name is case insensitive. Default value: `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    bool GetIgnoreNameCase() const;

                    /**
                     * 设置Whether the parameter name is case insensitive. Default value: `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ignoreNameCase Whether the parameter name is case insensitive. Default value: `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetIgnoreNameCase(const bool& _ignoreNameCase);

                    /**
                     * 判断参数 IgnoreNameCase 是否已赋值
                     * @return IgnoreNameCase 是否已赋值
                     * @deprecated
                     */
                    bool IgnoreNameCaseHasBeenSet() const;

                private:

                    /**
                     * Operator. Valid values:
<li>`equals`: Equals</li>
<li>`notEquals`: Does not equal</li>
<li>`exist`: Exists</li>
<li>`notexist`: Does not exist</li>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Match type. Valid values: <li> filename: File name; </li> <li> extension: File extension; </li> <li> host: Host name; </li> <li> full_url: The complete URL path under the current site, which must include the HTTP protocol, host, and path; </li> <li> url: Request for the URL path under the current site; </li><li> client_country: Client country/region;</li> <li> query_string: The query string of the URL requested under the current site; </li> <li> request_header: HTTP request header; </li><li> client_ip: Client IP address. </li>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * The parameter values for match types. It is allowed to pass an empty array only when the match type is query_string or request_header and the operator value is Exist or Does Not Exist. The corresponding match types include:
<li> File extension: Extensions like jpg, txt, etc.;</li>
<li> File name: For example, foo in foo.jpg;</li>
<li> All: All requests for domain names under the site; </li>
<li> HOST: The host under the current site, for example, www.maxx55.com;</li>
<li> URL Path: Request for the URL path under the current site, for example, /example;</li>
<li> URL Full: The complete URL request under the current site, which must include the HTTP protocol, host, and path, for example, https://www.maxx55.cn/example;</li>
<li> Client country/region: Country/region codes compliant with the ISO3166 standard;</li>
<li> Query string: The parameter values in the query string of the URL requested under the current site, for example, cn and 1 in lang=cn&version=1; </li>
<li> HTTP request header: The value of the HTTP request header field, for example, zh-CN,zh;q=0.9 in Accept-Language:zh-CN,zh;q=0.9; </li>
<li> Client IP: The client IP address carried by the current request, supporting IPv4, IPv6, and an IP range. </li>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Whether the parameter value is case insensitive. Default value: false.
                     */
                    bool m_ignoreCase;
                    bool m_ignoreCaseHasBeenSet;

                    /**
                     * The parameter name of the match type. This field is required only when `Target=query_string/request_header`.
<li>`query_string`: Name of the query string, such as "lang" and "version" in "lang=cn&version=1".</li>
<li>`request_header`: Name of the HTTP request header, such as "Accept-Language" in the "Accept-Language:zh-CN,zh;q=0.9" header.</li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether the parameter name is case insensitive. Default value: `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_ignoreNameCase;
                    bool m_ignoreNameCaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULECONDITION_H_
