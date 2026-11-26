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
                * Rule engine condition parameter
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
<li> equal: equal to; </li>
<li> notequal: neq;</li>
<li> exist: exist; </li>
<li> notexist: Not found.</li>
                     * @return Operator Operator. Valid values:
<li> equal: equal to; </li>
<li> notequal: neq;</li>
<li> exist: exist; </li>
<li> notexist: Not found.</li>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator. Valid values:
<li> equal: equal to; </li>
<li> notequal: neq;</li>
<li> exist: exist; </li>
<li> notexist: Not found.</li>
                     * @param _operator Operator. Valid values:
<li> equal: equal to; </li>
<li> notequal: neq;</li>
<li> exist: exist; </li>
<li> notexist: Not found.</li>
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
                     * 获取Parameter values for match types. An empty array is allowed only when the match type is query_string or request_header and the operator is Exist or Does Not Exist. The corresponding matching types are:
<li>extension: File suffix such as jpg or txt;</li>
<li> File name: For example, foo in foo.jpg;</li>
<li> All (arbitrary request to the site): all;</li>
<li> HOST: The host under the current site, for example, www.maxx55.com;</li>
<li> URL Path: Request for the URL path under the current site, for example, /example;</li>
<li> URL Full: complete URL request under the current site, must contain HTTP protocol, Host, and path, for example: https://www.maxx55.cn/example;</li>
<li> client_country: Country/region identifier compliant with the ISO3166 standard;</li>
<li> Query string: The parameter values in the query string of the URL requested under the current site, for example, cn and 1 in lang=cn&version=1; </li>
<li> request_header: The value of the HTTP request header field. For example, zh-CN,zh;q=0.9 in Accept-Language:zh-CN,zh;q=0.9;</li>
<li> client_ip: The client request IP carried in the current request, which supports IPv4/IPv6 and an IP range;</li>
<li>Request protocol: protocol of current request. Value range: HTTP, HTTPS;</li>
<li> request_method: The method of the current request. Valid values: GET, HEAD, POST, PUT, DELETE, TRACE, CONNECT, OPTIONS, PATCH, COPY, LOCK, MKCOL, MOVE, PROPFIND, PROPPATCH, and UNLOCK. </li>
                     * @return Values Parameter values for match types. An empty array is allowed only when the match type is query_string or request_header and the operator is Exist or Does Not Exist. The corresponding matching types are:
<li>extension: File suffix such as jpg or txt;</li>
<li> File name: For example, foo in foo.jpg;</li>
<li> All (arbitrary request to the site): all;</li>
<li> HOST: The host under the current site, for example, www.maxx55.com;</li>
<li> URL Path: Request for the URL path under the current site, for example, /example;</li>
<li> URL Full: complete URL request under the current site, must contain HTTP protocol, Host, and path, for example: https://www.maxx55.cn/example;</li>
<li> client_country: Country/region identifier compliant with the ISO3166 standard;</li>
<li> Query string: The parameter values in the query string of the URL requested under the current site, for example, cn and 1 in lang=cn&version=1; </li>
<li> request_header: The value of the HTTP request header field. For example, zh-CN,zh;q=0.9 in Accept-Language:zh-CN,zh;q=0.9;</li>
<li> client_ip: The client request IP carried in the current request, which supports IPv4/IPv6 and an IP range;</li>
<li>Request protocol: protocol of current request. Value range: HTTP, HTTPS;</li>
<li> request_method: The method of the current request. Valid values: GET, HEAD, POST, PUT, DELETE, TRACE, CONNECT, OPTIONS, PATCH, COPY, LOCK, MKCOL, MOVE, PROPFIND, PROPPATCH, and UNLOCK. </li>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Parameter values for match types. An empty array is allowed only when the match type is query_string or request_header and the operator is Exist or Does Not Exist. The corresponding matching types are:
<li>extension: File suffix such as jpg or txt;</li>
<li> File name: For example, foo in foo.jpg;</li>
<li> All (arbitrary request to the site): all;</li>
<li> HOST: The host under the current site, for example, www.maxx55.com;</li>
<li> URL Path: Request for the URL path under the current site, for example, /example;</li>
<li> URL Full: complete URL request under the current site, must contain HTTP protocol, Host, and path, for example: https://www.maxx55.cn/example;</li>
<li> client_country: Country/region identifier compliant with the ISO3166 standard;</li>
<li> Query string: The parameter values in the query string of the URL requested under the current site, for example, cn and 1 in lang=cn&version=1; </li>
<li> request_header: The value of the HTTP request header field. For example, zh-CN,zh;q=0.9 in Accept-Language:zh-CN,zh;q=0.9;</li>
<li> client_ip: The client request IP carried in the current request, which supports IPv4/IPv6 and an IP range;</li>
<li>Request protocol: protocol of current request. Value range: HTTP, HTTPS;</li>
<li> request_method: The method of the current request. Valid values: GET, HEAD, POST, PUT, DELETE, TRACE, CONNECT, OPTIONS, PATCH, COPY, LOCK, MKCOL, MOVE, PROPFIND, PROPPATCH, and UNLOCK. </li>
                     * @param _values Parameter values for match types. An empty array is allowed only when the match type is query_string or request_header and the operator is Exist or Does Not Exist. The corresponding matching types are:
<li>extension: File suffix such as jpg or txt;</li>
<li> File name: For example, foo in foo.jpg;</li>
<li> All (arbitrary request to the site): all;</li>
<li> HOST: The host under the current site, for example, www.maxx55.com;</li>
<li> URL Path: Request for the URL path under the current site, for example, /example;</li>
<li> URL Full: complete URL request under the current site, must contain HTTP protocol, Host, and path, for example: https://www.maxx55.cn/example;</li>
<li> client_country: Country/region identifier compliant with the ISO3166 standard;</li>
<li> Query string: The parameter values in the query string of the URL requested under the current site, for example, cn and 1 in lang=cn&version=1; </li>
<li> request_header: The value of the HTTP request header field. For example, zh-CN,zh;q=0.9 in Accept-Language:zh-CN,zh;q=0.9;</li>
<li> client_ip: The client request IP carried in the current request, which supports IPv4/IPv6 and an IP range;</li>
<li>Request protocol: protocol of current request. Value range: HTTP, HTTPS;</li>
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
                     * 获取Whether to ignore the case sensitivity of parameter values. Default value: `false`.
                     * @return IgnoreCase Whether to ignore the case sensitivity of parameter values. Default value: `false`.
                     * 
                     */
                    bool GetIgnoreCase() const;

                    /**
                     * 设置Whether to ignore the case sensitivity of parameter values. Default value: `false`.
                     * @param _ignoreCase Whether to ignore the case sensitivity of parameter values. Default value: `false`.
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
                     * 获取Name of the parameter for the corresponding matching type. Valid when Target is set to the following values, and the value cannot be empty:
<li> query_string: The parameter names in the query string of the URL requested under the current site, for example, lang and version in lang=cn&version=1; </li>
<li> request_header: The name of the HTTP request header field. For example, Accept-Language in Accept-Language:zh-CN,zh;q=0.9. </li>
                     * @return Name Name of the parameter for the corresponding matching type. Valid when Target is set to the following values, and the value cannot be empty:
<li> query_string: The parameter names in the query string of the URL requested under the current site, for example, lang and version in lang=cn&version=1; </li>
<li> request_header: The name of the HTTP request header field. For example, Accept-Language in Accept-Language:zh-CN,zh;q=0.9. </li>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the parameter for the corresponding matching type. Valid when Target is set to the following values, and the value cannot be empty:
<li> query_string: The parameter names in the query string of the URL requested under the current site, for example, lang and version in lang=cn&version=1; </li>
<li> request_header: The name of the HTTP request header field. For example, Accept-Language in Accept-Language:zh-CN,zh;q=0.9. </li>
                     * @param _name Name of the parameter for the corresponding matching type. Valid when Target is set to the following values, and the value cannot be empty:
<li> query_string: The parameter names in the query string of the URL requested under the current site, for example, lang and version in lang=cn&version=1; </li>
<li> request_header: The name of the HTTP request header field. For example, Accept-Language in Accept-Language:zh-CN,zh;q=0.9. </li>
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
                     * 获取Whether to ignore the case sensitivity of parameter names. Default value: `false`.
                     * @return IgnoreNameCase Whether to ignore the case sensitivity of parameter names. Default value: `false`.
                     * @deprecated
                     */
                    bool GetIgnoreNameCase() const;

                    /**
                     * 设置Whether to ignore the case sensitivity of parameter names. Default value: `false`.
                     * @param _ignoreNameCase Whether to ignore the case sensitivity of parameter names. Default value: `false`.
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
<li> equal: equal to; </li>
<li> notequal: neq;</li>
<li> exist: exist; </li>
<li> notexist: Not found.</li>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Matching type. Valid values: <li>filename: Filename;</li><li>extension: File suffix;</li><li>host: Host;</li><li>full_url: A complete URL path under the current site, including the HTTP protocol, the host, and the path;</li><li>url: The request for a URL path under the current site;</li><li>client_country: Client country/region;</li><li>query_string: The query string for a requested URL under the current site;</li><li>request_header: HTTP request header;</li><li>client_ip: Client IP;</li><li>request_protocol: Request protocol;</li><li>request_method: HTTP request method.</li>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Parameter values for match types. An empty array is allowed only when the match type is query_string or request_header and the operator is Exist or Does Not Exist. The corresponding matching types are:
<li>extension: File suffix such as jpg or txt;</li>
<li> File name: For example, foo in foo.jpg;</li>
<li> All (arbitrary request to the site): all;</li>
<li> HOST: The host under the current site, for example, www.maxx55.com;</li>
<li> URL Path: Request for the URL path under the current site, for example, /example;</li>
<li> URL Full: complete URL request under the current site, must contain HTTP protocol, Host, and path, for example: https://www.maxx55.cn/example;</li>
<li> client_country: Country/region identifier compliant with the ISO3166 standard;</li>
<li> Query string: The parameter values in the query string of the URL requested under the current site, for example, cn and 1 in lang=cn&version=1; </li>
<li> request_header: The value of the HTTP request header field. For example, zh-CN,zh;q=0.9 in Accept-Language:zh-CN,zh;q=0.9;</li>
<li> client_ip: The client request IP carried in the current request, which supports IPv4/IPv6 and an IP range;</li>
<li>Request protocol: protocol of current request. Value range: HTTP, HTTPS;</li>
<li> request_method: The method of the current request. Valid values: GET, HEAD, POST, PUT, DELETE, TRACE, CONNECT, OPTIONS, PATCH, COPY, LOCK, MKCOL, MOVE, PROPFIND, PROPPATCH, and UNLOCK. </li>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Whether to ignore the case sensitivity of parameter values. Default value: `false`.
                     */
                    bool m_ignoreCase;
                    bool m_ignoreCaseHasBeenSet;

                    /**
                     * Name of the parameter for the corresponding matching type. Valid when Target is set to the following values, and the value cannot be empty:
<li> query_string: The parameter names in the query string of the URL requested under the current site, for example, lang and version in lang=cn&version=1; </li>
<li> request_header: The name of the HTTP request header field. For example, Accept-Language in Accept-Language:zh-CN,zh;q=0.9. </li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether to ignore the case sensitivity of parameter names. Default value: `false`.
                     */
                    bool m_ignoreNameCase;
                    bool m_ignoreNameCaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULECONDITION_H_
