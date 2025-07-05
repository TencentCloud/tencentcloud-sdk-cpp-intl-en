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
<li>`equal`: Equal</li>
<li>`notEquals`: Does not equal</li>
<li>`exist`: Exists</li>
<li>`notexist`: Does not exist</li>
                     * @return Operator Operator. Valid values:
<li>`equal`: Equal</li>
<li>`notEquals`: Does not equal</li>
<li>`exist`: Exists</li>
<li>`notexist`: Does not exist</li>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator. Valid values:
<li>`equal`: Equal</li>
<li>`notEquals`: Does not equal</li>
<li>`exist`: Exists</li>
<li>`notexist`: Does not exist</li>
                     * @param _operator Operator. Valid values:
<li>`equal`: Equal</li>
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
                     * 获取Matching type. Valid values: <li>filename: Filename;</li><li>extension: File suffix;</li><li>host: Host;</li><li>full_url: A complete URL path under the current site, including the HTTP protocol, the host, and the path;</li><li>url: The request for a URL path under the current site;</li><li>client_country: Client country/region;</li><li>query_string: The query string for a requested URL under the current site;</li><li>request_header: HTTP request header;</li><li>client_ip: Client IP;</li><li>request_protocol: Request protocol;</li><li>request_method: HTTP request method.</li>
                     * @return Target Matching type. Valid values: <li>filename: Filename;</li><li>extension: File suffix;</li><li>host: Host;</li><li>full_url: A complete URL path under the current site, including the HTTP protocol, the host, and the path;</li><li>url: The request for a URL path under the current site;</li><li>client_country: Client country/region;</li><li>query_string: The query string for a requested URL under the current site;</li><li>request_header: HTTP request header;</li><li>client_ip: Client IP;</li><li>request_protocol: Request protocol;</li><li>request_method: HTTP request method.</li>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Matching type. Valid values: <li>filename: Filename;</li><li>extension: File suffix;</li><li>host: Host;</li><li>full_url: A complete URL path under the current site, including the HTTP protocol, the host, and the path;</li><li>url: The request for a URL path under the current site;</li><li>client_country: Client country/region;</li><li>query_string: The query string for a requested URL under the current site;</li><li>request_header: HTTP request header;</li><li>client_ip: Client IP;</li><li>request_protocol: Request protocol;</li><li>request_method: HTTP request method.</li>
                     * @param _target Matching type. Valid values: <li>filename: Filename;</li><li>extension: File suffix;</li><li>host: Host;</li><li>full_url: A complete URL path under the current site, including the HTTP protocol, the host, and the path;</li><li>url: The request for a URL path under the current site;</li><li>client_country: Client country/region;</li><li>query_string: The query string for a requested URL under the current site;</li><li>request_header: HTTP request header;</li><li>client_ip: Client IP;</li><li>request_protocol: Request protocol;</li><li>request_method: HTTP request method.</li>
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
                     * 获取Parameter values for corresponding matching types. It is allowed to pass an empty array only when the matching type is query_string or request_header and the operator value is exist or not exist. Corresponding match types include:
<li>extension: File suffix such as jpg or txt;</li>
<li> filename: For example, foo in foo.jpg;</li>
<li> all (any request under the site): all;</li>
<li> host: The host under the current site. For example, www.maxx55.com;</li>
<li> URL path: The request for a URL path under the current site. For example, /example;</li>
<li> URL full: The request for a complete URL under the current site, including the HTTP protocol, the host, and the path. For example: https://www.maxx55.cn/example;</li>
<li> client_country: Country/region identifier compliant with the ISO3166 standard;</li>
<li> query_string: The parameter value in the query string of the requested URL under the current site. For example, cn and 1 in lang=cn&version=1;</li>
<li> request_header: The value of the HTTP request header field. For example, zh-CN,zh;q=0.9 in Accept-Language:zh-CN,zh;q=0.9;</li>
<li> client_ip: The client request IP carried in the current request, which supports IPv4/IPv6 and an IP range;</li>
<li> request_protocol: The protocol of the current request. Valid values: HTTP and HTTPS;</li>
<li> request_method: The method of the current request. Valid values: GET, HEAD, POST, PUT, DELETE, TRACE, CONNECT, OPTIONS, PATCH, COPY, LOCK, MKCOL, MOVE, PROPFIND, PROPPATCH, and UNLOCK. </li>
                     * @return Values Parameter values for corresponding matching types. It is allowed to pass an empty array only when the matching type is query_string or request_header and the operator value is exist or not exist. Corresponding match types include:
<li>extension: File suffix such as jpg or txt;</li>
<li> filename: For example, foo in foo.jpg;</li>
<li> all (any request under the site): all;</li>
<li> host: The host under the current site. For example, www.maxx55.com;</li>
<li> URL path: The request for a URL path under the current site. For example, /example;</li>
<li> URL full: The request for a complete URL under the current site, including the HTTP protocol, the host, and the path. For example: https://www.maxx55.cn/example;</li>
<li> client_country: Country/region identifier compliant with the ISO3166 standard;</li>
<li> query_string: The parameter value in the query string of the requested URL under the current site. For example, cn and 1 in lang=cn&version=1;</li>
<li> request_header: The value of the HTTP request header field. For example, zh-CN,zh;q=0.9 in Accept-Language:zh-CN,zh;q=0.9;</li>
<li> client_ip: The client request IP carried in the current request, which supports IPv4/IPv6 and an IP range;</li>
<li> request_protocol: The protocol of the current request. Valid values: HTTP and HTTPS;</li>
<li> request_method: The method of the current request. Valid values: GET, HEAD, POST, PUT, DELETE, TRACE, CONNECT, OPTIONS, PATCH, COPY, LOCK, MKCOL, MOVE, PROPFIND, PROPPATCH, and UNLOCK. </li>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Parameter values for corresponding matching types. It is allowed to pass an empty array only when the matching type is query_string or request_header and the operator value is exist or not exist. Corresponding match types include:
<li>extension: File suffix such as jpg or txt;</li>
<li> filename: For example, foo in foo.jpg;</li>
<li> all (any request under the site): all;</li>
<li> host: The host under the current site. For example, www.maxx55.com;</li>
<li> URL path: The request for a URL path under the current site. For example, /example;</li>
<li> URL full: The request for a complete URL under the current site, including the HTTP protocol, the host, and the path. For example: https://www.maxx55.cn/example;</li>
<li> client_country: Country/region identifier compliant with the ISO3166 standard;</li>
<li> query_string: The parameter value in the query string of the requested URL under the current site. For example, cn and 1 in lang=cn&version=1;</li>
<li> request_header: The value of the HTTP request header field. For example, zh-CN,zh;q=0.9 in Accept-Language:zh-CN,zh;q=0.9;</li>
<li> client_ip: The client request IP carried in the current request, which supports IPv4/IPv6 and an IP range;</li>
<li> request_protocol: The protocol of the current request. Valid values: HTTP and HTTPS;</li>
<li> request_method: The method of the current request. Valid values: GET, HEAD, POST, PUT, DELETE, TRACE, CONNECT, OPTIONS, PATCH, COPY, LOCK, MKCOL, MOVE, PROPFIND, PROPPATCH, and UNLOCK. </li>
                     * @param _values Parameter values for corresponding matching types. It is allowed to pass an empty array only when the matching type is query_string or request_header and the operator value is exist or not exist. Corresponding match types include:
<li>extension: File suffix such as jpg or txt;</li>
<li> filename: For example, foo in foo.jpg;</li>
<li> all (any request under the site): all;</li>
<li> host: The host under the current site. For example, www.maxx55.com;</li>
<li> URL path: The request for a URL path under the current site. For example, /example;</li>
<li> URL full: The request for a complete URL under the current site, including the HTTP protocol, the host, and the path. For example: https://www.maxx55.cn/example;</li>
<li> client_country: Country/region identifier compliant with the ISO3166 standard;</li>
<li> query_string: The parameter value in the query string of the requested URL under the current site. For example, cn and 1 in lang=cn&version=1;</li>
<li> request_header: The value of the HTTP request header field. For example, zh-CN,zh;q=0.9 in Accept-Language:zh-CN,zh;q=0.9;</li>
<li> client_ip: The client request IP carried in the current request, which supports IPv4/IPv6 and an IP range;</li>
<li> request_protocol: The protocol of the current request. Valid values: HTTP and HTTPS;</li>
<li> request_method: The method of the current request. Valid values: GET, HEAD, POST, PUT, DELETE, TRACE, CONNECT, OPTIONS, PATCH, COPY, LOCK, MKCOL, MOVE, PROPFIND, PROPPATCH, and UNLOCK. </li>
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
<li>`equal`: Equal</li>
<li>`notEquals`: Does not equal</li>
<li>`exist`: Exists</li>
<li>`notexist`: Does not exist</li>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Matching type. Valid values: <li>filename: Filename;</li><li>extension: File suffix;</li><li>host: Host;</li><li>full_url: A complete URL path under the current site, including the HTTP protocol, the host, and the path;</li><li>url: The request for a URL path under the current site;</li><li>client_country: Client country/region;</li><li>query_string: The query string for a requested URL under the current site;</li><li>request_header: HTTP request header;</li><li>client_ip: Client IP;</li><li>request_protocol: Request protocol;</li><li>request_method: HTTP request method.</li>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Parameter values for corresponding matching types. It is allowed to pass an empty array only when the matching type is query_string or request_header and the operator value is exist or not exist. Corresponding match types include:
<li>extension: File suffix such as jpg or txt;</li>
<li> filename: For example, foo in foo.jpg;</li>
<li> all (any request under the site): all;</li>
<li> host: The host under the current site. For example, www.maxx55.com;</li>
<li> URL path: The request for a URL path under the current site. For example, /example;</li>
<li> URL full: The request for a complete URL under the current site, including the HTTP protocol, the host, and the path. For example: https://www.maxx55.cn/example;</li>
<li> client_country: Country/region identifier compliant with the ISO3166 standard;</li>
<li> query_string: The parameter value in the query string of the requested URL under the current site. For example, cn and 1 in lang=cn&version=1;</li>
<li> request_header: The value of the HTTP request header field. For example, zh-CN,zh;q=0.9 in Accept-Language:zh-CN,zh;q=0.9;</li>
<li> client_ip: The client request IP carried in the current request, which supports IPv4/IPv6 and an IP range;</li>
<li> request_protocol: The protocol of the current request. Valid values: HTTP and HTTPS;</li>
<li> request_method: The method of the current request. Valid values: GET, HEAD, POST, PUT, DELETE, TRACE, CONNECT, OPTIONS, PATCH, COPY, LOCK, MKCOL, MOVE, PROPFIND, PROPPATCH, and UNLOCK. </li>
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
