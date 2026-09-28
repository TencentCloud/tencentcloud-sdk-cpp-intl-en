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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_RULECONDITION_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_RULECONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/HTTPCookieInfo.h>
#include <tencentcloud/alb/v20251030/model/HTTPHeaderInfo.h>
#include <tencentcloud/alb/v20251030/model/HTTPQueryStringInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Forwarding rule condition
                */
                class RuleCondition : public AbstractModel
                {
                public:
                    RuleCondition();
                    ~RuleCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Forwarding condition type. Valid values:
Host: host.
Path: Path.
Header: HTTP header field.
QueryString: HTTP query string.
Method: Request method.
Cookie:Cookie.
SourceIp: Source IP.
                     * @return Type Forwarding condition type. Valid values:
Host: host.
Path: Path.
Header: HTTP header field.
QueryString: HTTP query string.
Method: Request method.
Cookie:Cookie.
SourceIp: Source IP.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Forwarding condition type. Valid values:
Host: host.
Path: Path.
Header: HTTP header field.
QueryString: HTTP query string.
Method: Request method.
Cookie:Cookie.
SourceIp: Source IP.
                     * @param _type Forwarding condition type. Valid values:
Host: host.
Path: Path.
Header: HTTP header field.
QueryString: HTTP query string.
Method: Request method.
Cookie:Cookie.
SourceIp: Source IP.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Cookie configuration.
                     * @return CookieConfig Cookie configuration.
                     * 
                     */
                    std::vector<HTTPCookieInfo> GetCookieConfig() const;

                    /**
                     * 设置Cookie configuration.
                     * @param _cookieConfig Cookie configuration.
                     * 
                     */
                    void SetCookieConfig(const std::vector<HTTPCookieInfo>& _cookieConfig);

                    /**
                     * 判断参数 CookieConfig 是否已赋值
                     * @return CookieConfig 是否已赋值
                     * 
                     */
                    bool CookieConfigHasBeenSet() const;

                    /**
                     * 获取HTTP Header configuration.
                     * @return HeaderConfig HTTP Header configuration.
                     * 
                     */
                    HTTPHeaderInfo GetHeaderConfig() const;

                    /**
                     * 设置HTTP Header configuration.
                     * @param _headerConfig HTTP Header configuration.
                     * 
                     */
                    void SetHeaderConfig(const HTTPHeaderInfo& _headerConfig);

                    /**
                     * 判断参数 HeaderConfig 是否已赋值
                     * @return HeaderConfig 是否已赋值
                     * 
                     */
                    bool HeaderConfigHasBeenSet() const;

                    /**
                     * 获取Host name. The host configuration can only appear once in a rule, with a length of 3 to 128 characters. It supports exact match, regular expression matching, and wildcard matching.
It cannot start or end with a half-width period (.) or underscore (_).
Exact match. Supported character sets: a-z 0-9 . - _ .
Regular expression matching. A value that begins with a tilde (~) indicates regular expression matching. Supported character sets: a-z 0-9 . - ? = ~ _ - + \ ^ * ! $ & | ( ) [ ] .
Wildcard matching. An asterisk (*) matches multiple characters, and a half-width question mark (?) matches any single character. Supported character sets: a-z 0-9 . - _ * ?.
                     * @return HostConfig Host name. The host configuration can only appear once in a rule, with a length of 3 to 128 characters. It supports exact match, regular expression matching, and wildcard matching.
It cannot start or end with a half-width period (.) or underscore (_).
Exact match. Supported character sets: a-z 0-9 . - _ .
Regular expression matching. A value that begins with a tilde (~) indicates regular expression matching. Supported character sets: a-z 0-9 . - ? = ~ _ - + \ ^ * ! $ & | ( ) [ ] .
Wildcard matching. An asterisk (*) matches multiple characters, and a half-width question mark (?) matches any single character. Supported character sets: a-z 0-9 . - _ * ?.
                     * 
                     */
                    std::vector<std::string> GetHostConfig() const;

                    /**
                     * 设置Host name. The host configuration can only appear once in a rule, with a length of 3 to 128 characters. It supports exact match, regular expression matching, and wildcard matching.
It cannot start or end with a half-width period (.) or underscore (_).
Exact match. Supported character sets: a-z 0-9 . - _ .
Regular expression matching. A value that begins with a tilde (~) indicates regular expression matching. Supported character sets: a-z 0-9 . - ? = ~ _ - + \ ^ * ! $ & | ( ) [ ] .
Wildcard matching. An asterisk (*) matches multiple characters, and a half-width question mark (?) matches any single character. Supported character sets: a-z 0-9 . - _ * ?.
                     * @param _hostConfig Host name. The host configuration can only appear once in a rule, with a length of 3 to 128 characters. It supports exact match, regular expression matching, and wildcard matching.
It cannot start or end with a half-width period (.) or underscore (_).
Exact match. Supported character sets: a-z 0-9 . - _ .
Regular expression matching. A value that begins with a tilde (~) indicates regular expression matching. Supported character sets: a-z 0-9 . - ? = ~ _ - + \ ^ * ! $ & | ( ) [ ] .
Wildcard matching. An asterisk (*) matches multiple characters, and a half-width question mark (?) matches any single character. Supported character sets: a-z 0-9 . - _ * ?.
                     * 
                     */
                    void SetHostConfig(const std::vector<std::string>& _hostConfig);

                    /**
                     * 判断参数 HostConfig 是否已赋值
                     * @return HostConfig 是否已赋值
                     * 
                     */
                    bool HostConfigHasBeenSet() const;

                    /**
                     * 获取Request method. Parameter values: HEAD, GET, POST, OPTIONS, PUT, PATCH, DELETE.
                     * @return MethodConfig Request method. Parameter values: HEAD, GET, POST, OPTIONS, PUT, PATCH, DELETE.
                     * 
                     */
                    std::vector<std::string> GetMethodConfig() const;

                    /**
                     * 设置Request method. Parameter values: HEAD, GET, POST, OPTIONS, PUT, PATCH, DELETE.
                     * @param _methodConfig Request method. Parameter values: HEAD, GET, POST, OPTIONS, PUT, PATCH, DELETE.
                     * 
                     */
                    void SetMethodConfig(const std::vector<std::string>& _methodConfig);

                    /**
                     * 判断参数 MethodConfig 是否已赋值
                     * @return MethodConfig 是否已赋值
                     * 
                     */
                    bool MethodConfigHasBeenSet() const;

                    /**
                     * 获取Forwarding path. Length: 1–128 characters. Supports exact matching, regular expression matching, and wildcard matching.
Exact match. Supported character sets: a-z A-Z 0-9 . - _ / = :.
For regular expression matching, it must start with `~`. A `~` at the beginning means case-sensitive, and `~*` at the beginning means case-insensitive. Supported character sets: a-z A-Z 0-9 . - _ / = ? ~ ^ * $ : ( ) [ ] + |.
Wildcard matching. * means multiple character wildcard, and ? means any single character wildcard. Supported character sets: a-z A-Z 0-9 . - _ / = :.
                     * @return PathConfig Forwarding path. Length: 1–128 characters. Supports exact matching, regular expression matching, and wildcard matching.
Exact match. Supported character sets: a-z A-Z 0-9 . - _ / = :.
For regular expression matching, it must start with `~`. A `~` at the beginning means case-sensitive, and `~*` at the beginning means case-insensitive. Supported character sets: a-z A-Z 0-9 . - _ / = ? ~ ^ * $ : ( ) [ ] + |.
Wildcard matching. * means multiple character wildcard, and ? means any single character wildcard. Supported character sets: a-z A-Z 0-9 . - _ / = :.
                     * 
                     */
                    std::vector<std::string> GetPathConfig() const;

                    /**
                     * 设置Forwarding path. Length: 1–128 characters. Supports exact matching, regular expression matching, and wildcard matching.
Exact match. Supported character sets: a-z A-Z 0-9 . - _ / = :.
For regular expression matching, it must start with `~`. A `~` at the beginning means case-sensitive, and `~*` at the beginning means case-insensitive. Supported character sets: a-z A-Z 0-9 . - _ / = ? ~ ^ * $ : ( ) [ ] + |.
Wildcard matching. * means multiple character wildcard, and ? means any single character wildcard. Supported character sets: a-z A-Z 0-9 . - _ / = :.
                     * @param _pathConfig Forwarding path. Length: 1–128 characters. Supports exact matching, regular expression matching, and wildcard matching.
Exact match. Supported character sets: a-z A-Z 0-9 . - _ / = :.
For regular expression matching, it must start with `~`. A `~` at the beginning means case-sensitive, and `~*` at the beginning means case-insensitive. Supported character sets: a-z A-Z 0-9 . - _ / = ? ~ ^ * $ : ( ) [ ] + |.
Wildcard matching. * means multiple character wildcard, and ? means any single character wildcard. Supported character sets: a-z A-Z 0-9 . - _ / = :.
                     * 
                     */
                    void SetPathConfig(const std::vector<std::string>& _pathConfig);

                    /**
                     * 判断参数 PathConfig 是否已赋值
                     * @return PathConfig 是否已赋值
                     * 
                     */
                    bool PathConfigHasBeenSet() const;

                    /**
                     * 获取Query string configuration.
                     * @return QueryStringConfig Query string configuration.
                     * 
                     */
                    std::vector<HTTPQueryStringInfo> GetQueryStringConfig() const;

                    /**
                     * 设置Query string configuration.
                     * @param _queryStringConfig Query string configuration.
                     * 
                     */
                    void SetQueryStringConfig(const std::vector<HTTPQueryStringInfo>& _queryStringConfig);

                    /**
                     * 判断参数 QueryStringConfig 是否已赋值
                     * @return QueryStringConfig 是否已赋值
                     * 
                     */
                    bool QueryStringConfigHasBeenSet() const;

                    /**
                     * 获取Source IP matching configuration. CIDR format, IP address x.x.x.x/32, IP range x.x.x.x/24.
                     * @return SourceIpConfig Source IP matching configuration. CIDR format, IP address x.x.x.x/32, IP range x.x.x.x/24.
                     * 
                     */
                    std::vector<std::string> GetSourceIpConfig() const;

                    /**
                     * 设置Source IP matching configuration. CIDR format, IP address x.x.x.x/32, IP range x.x.x.x/24.
                     * @param _sourceIpConfig Source IP matching configuration. CIDR format, IP address x.x.x.x/32, IP range x.x.x.x/24.
                     * 
                     */
                    void SetSourceIpConfig(const std::vector<std::string>& _sourceIpConfig);

                    /**
                     * 判断参数 SourceIpConfig 是否已赋值
                     * @return SourceIpConfig 是否已赋值
                     * 
                     */
                    bool SourceIpConfigHasBeenSet() const;

                private:

                    /**
                     * Forwarding condition type. Valid values:
Host: host.
Path: Path.
Header: HTTP header field.
QueryString: HTTP query string.
Method: Request method.
Cookie:Cookie.
SourceIp: Source IP.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Cookie configuration.
                     */
                    std::vector<HTTPCookieInfo> m_cookieConfig;
                    bool m_cookieConfigHasBeenSet;

                    /**
                     * HTTP Header configuration.
                     */
                    HTTPHeaderInfo m_headerConfig;
                    bool m_headerConfigHasBeenSet;

                    /**
                     * Host name. The host configuration can only appear once in a rule, with a length of 3 to 128 characters. It supports exact match, regular expression matching, and wildcard matching.
It cannot start or end with a half-width period (.) or underscore (_).
Exact match. Supported character sets: a-z 0-9 . - _ .
Regular expression matching. A value that begins with a tilde (~) indicates regular expression matching. Supported character sets: a-z 0-9 . - ? = ~ _ - + \ ^ * ! $ & | ( ) [ ] .
Wildcard matching. An asterisk (*) matches multiple characters, and a half-width question mark (?) matches any single character. Supported character sets: a-z 0-9 . - _ * ?.
                     */
                    std::vector<std::string> m_hostConfig;
                    bool m_hostConfigHasBeenSet;

                    /**
                     * Request method. Parameter values: HEAD, GET, POST, OPTIONS, PUT, PATCH, DELETE.
                     */
                    std::vector<std::string> m_methodConfig;
                    bool m_methodConfigHasBeenSet;

                    /**
                     * Forwarding path. Length: 1–128 characters. Supports exact matching, regular expression matching, and wildcard matching.
Exact match. Supported character sets: a-z A-Z 0-9 . - _ / = :.
For regular expression matching, it must start with `~`. A `~` at the beginning means case-sensitive, and `~*` at the beginning means case-insensitive. Supported character sets: a-z A-Z 0-9 . - _ / = ? ~ ^ * $ : ( ) [ ] + |.
Wildcard matching. * means multiple character wildcard, and ? means any single character wildcard. Supported character sets: a-z A-Z 0-9 . - _ / = :.
                     */
                    std::vector<std::string> m_pathConfig;
                    bool m_pathConfigHasBeenSet;

                    /**
                     * Query string configuration.
                     */
                    std::vector<HTTPQueryStringInfo> m_queryStringConfig;
                    bool m_queryStringConfigHasBeenSet;

                    /**
                     * Source IP matching configuration. CIDR format, IP address x.x.x.x/32, IP range x.x.x.x/24.
                     */
                    std::vector<std::string> m_sourceIpConfig;
                    bool m_sourceIpConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_RULECONDITION_H_
