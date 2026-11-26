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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACLCONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACLCONDITION_H_

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
                * Precise protection condition
                */
                class AclCondition : public AbstractModel
                {
                public:
                    AclCondition();
                    ~AclCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Matching field. Valid values:
<li>host: request domain name;</li>
<li>sip: Client IP;</li>
<li>ua:User-Agent;</li>
<li>cookie: Session cookie;</li>
<li>cgi: CGI script;</li>
<li>xff: XFF extension header;</li>
<li>`url`: Request URL;
<li>accept: request content type;</li>
<li>method: request method;</li>
<li>header: request header;</li>
<li>app_proto: application layer protocol;</li>
<li>sip_proto: network layer protocol;</li>
<li>uabot: UA feature rule, available only for bot custom rules;</li>
<li>idcid: IDC rule, only available for bot custom rules;</li>
<li>sipbot: search engine rule, available only for bot custom rules;</li>
<li>portrait: profile analysis, available only for bot custom rules;</li>
<li>header_seq: Request header sequence, only available for bot custom rules;</li>
<li>hdr: Request body, available only for custom rules in Web protection.</li>
                     * @return MatchFrom Matching field. Valid values:
<li>host: request domain name;</li>
<li>sip: Client IP;</li>
<li>ua:User-Agent;</li>
<li>cookie: Session cookie;</li>
<li>cgi: CGI script;</li>
<li>xff: XFF extension header;</li>
<li>`url`: Request URL;
<li>accept: request content type;</li>
<li>method: request method;</li>
<li>header: request header;</li>
<li>app_proto: application layer protocol;</li>
<li>sip_proto: network layer protocol;</li>
<li>uabot: UA feature rule, available only for bot custom rules;</li>
<li>idcid: IDC rule, only available for bot custom rules;</li>
<li>sipbot: search engine rule, available only for bot custom rules;</li>
<li>portrait: profile analysis, available only for bot custom rules;</li>
<li>header_seq: Request header sequence, only available for bot custom rules;</li>
<li>hdr: Request body, available only for custom rules in Web protection.</li>
                     * 
                     */
                    std::string GetMatchFrom() const;

                    /**
                     * 设置Matching field. Valid values:
<li>host: request domain name;</li>
<li>sip: Client IP;</li>
<li>ua:User-Agent;</li>
<li>cookie: Session cookie;</li>
<li>cgi: CGI script;</li>
<li>xff: XFF extension header;</li>
<li>`url`: Request URL;
<li>accept: request content type;</li>
<li>method: request method;</li>
<li>header: request header;</li>
<li>app_proto: application layer protocol;</li>
<li>sip_proto: network layer protocol;</li>
<li>uabot: UA feature rule, available only for bot custom rules;</li>
<li>idcid: IDC rule, only available for bot custom rules;</li>
<li>sipbot: search engine rule, available only for bot custom rules;</li>
<li>portrait: profile analysis, available only for bot custom rules;</li>
<li>header_seq: Request header sequence, only available for bot custom rules;</li>
<li>hdr: Request body, available only for custom rules in Web protection.</li>
                     * @param _matchFrom Matching field. Valid values:
<li>host: request domain name;</li>
<li>sip: Client IP;</li>
<li>ua:User-Agent;</li>
<li>cookie: Session cookie;</li>
<li>cgi: CGI script;</li>
<li>xff: XFF extension header;</li>
<li>`url`: Request URL;
<li>accept: request content type;</li>
<li>method: request method;</li>
<li>header: request header;</li>
<li>app_proto: application layer protocol;</li>
<li>sip_proto: network layer protocol;</li>
<li>uabot: UA feature rule, available only for bot custom rules;</li>
<li>idcid: IDC rule, only available for bot custom rules;</li>
<li>sipbot: search engine rule, available only for bot custom rules;</li>
<li>portrait: profile analysis, available only for bot custom rules;</li>
<li>header_seq: Request header sequence, only available for bot custom rules;</li>
<li>hdr: Request body, available only for custom rules in Web protection.</li>
                     * 
                     */
                    void SetMatchFrom(const std::string& _matchFrom);

                    /**
                     * 判断参数 MatchFrom 是否已赋值
                     * @return MatchFrom 是否已赋值
                     * 
                     */
                    bool MatchFromHasBeenSet() const;

                    /**
                     * 获取Matching string. When MatchFrom is header, the key of the header can be set to this parameter.
                     * @return MatchParam Matching string. When MatchFrom is header, the key of the header can be set to this parameter.
                     * 
                     */
                    std::string GetMatchParam() const;

                    /**
                     * 设置Matching string. When MatchFrom is header, the key of the header can be set to this parameter.
                     * @param _matchParam Matching string. When MatchFrom is header, the key of the header can be set to this parameter.
                     * 
                     */
                    void SetMatchParam(const std::string& _matchParam);

                    /**
                     * 判断参数 MatchParam 是否已赋值
                     * @return MatchParam 是否已赋值
                     * 
                     */
                    bool MatchParamHasBeenSet() const;

                    /**
                     * 获取Matching relationship. Valid values:
<li>equal: string equals;</li>
<li>not_equal: value not equal to;</li>
<li>include: string containing;</li>
<li>not_include: string does not contain;</li>
<li>match: ip match;</li>
<li>not_match: ip not matched;</li>
<li>include_area: region inclusion;</li>
<li>is_empty: field with null value;</li>
<li>not_exists: key field not found;</li>
<li>regexp: regular expression matching;</li>
<li>len_gt: value greater than;</li>
<li>len_lt: value is less than;</li>
<li>len_eq: value equal to;</li>
<li>match_prefix: prefix match;</li>
<li>match_suffix: suffix matching;</li>
<li>wildcard: wildcard.</li>
                     * @return Operator Matching relationship. Valid values:
<li>equal: string equals;</li>
<li>not_equal: value not equal to;</li>
<li>include: string containing;</li>
<li>not_include: string does not contain;</li>
<li>match: ip match;</li>
<li>not_match: ip not matched;</li>
<li>include_area: region inclusion;</li>
<li>is_empty: field with null value;</li>
<li>not_exists: key field not found;</li>
<li>regexp: regular expression matching;</li>
<li>len_gt: value greater than;</li>
<li>len_lt: value is less than;</li>
<li>len_eq: value equal to;</li>
<li>match_prefix: prefix match;</li>
<li>match_suffix: suffix matching;</li>
<li>wildcard: wildcard.</li>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Matching relationship. Valid values:
<li>equal: string equals;</li>
<li>not_equal: value not equal to;</li>
<li>include: string containing;</li>
<li>not_include: string does not contain;</li>
<li>match: ip match;</li>
<li>not_match: ip not matched;</li>
<li>include_area: region inclusion;</li>
<li>is_empty: field with null value;</li>
<li>not_exists: key field not found;</li>
<li>regexp: regular expression matching;</li>
<li>len_gt: value greater than;</li>
<li>len_lt: value is less than;</li>
<li>len_eq: value equal to;</li>
<li>match_prefix: prefix match;</li>
<li>match_suffix: suffix matching;</li>
<li>wildcard: wildcard.</li>
                     * @param _operator Matching relationship. Valid values:
<li>equal: string equals;</li>
<li>not_equal: value not equal to;</li>
<li>include: string containing;</li>
<li>not_include: string does not contain;</li>
<li>match: ip match;</li>
<li>not_match: ip not matched;</li>
<li>include_area: region inclusion;</li>
<li>is_empty: field with null value;</li>
<li>not_exists: key field not found;</li>
<li>regexp: regular expression matching;</li>
<li>len_gt: value greater than;</li>
<li>len_lt: value is less than;</li>
<li>len_eq: value equal to;</li>
<li>match_prefix: prefix match;</li>
<li>match_suffix: suffix matching;</li>
<li>wildcard: wildcard.</li>
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
                     * 获取Matching content.
                     * @return MatchContent Matching content.
                     * 
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置Matching content.
                     * @param _matchContent Matching content.
                     * 
                     */
                    void SetMatchContent(const std::string& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     * 
                     */
                    bool MatchContentHasBeenSet() const;

                private:

                    /**
                     * Matching field. Valid values:
<li>host: request domain name;</li>
<li>sip: Client IP;</li>
<li>ua:User-Agent;</li>
<li>cookie: Session cookie;</li>
<li>cgi: CGI script;</li>
<li>xff: XFF extension header;</li>
<li>`url`: Request URL;
<li>accept: request content type;</li>
<li>method: request method;</li>
<li>header: request header;</li>
<li>app_proto: application layer protocol;</li>
<li>sip_proto: network layer protocol;</li>
<li>uabot: UA feature rule, available only for bot custom rules;</li>
<li>idcid: IDC rule, only available for bot custom rules;</li>
<li>sipbot: search engine rule, available only for bot custom rules;</li>
<li>portrait: profile analysis, available only for bot custom rules;</li>
<li>header_seq: Request header sequence, only available for bot custom rules;</li>
<li>hdr: Request body, available only for custom rules in Web protection.</li>
                     */
                    std::string m_matchFrom;
                    bool m_matchFromHasBeenSet;

                    /**
                     * Matching string. When MatchFrom is header, the key of the header can be set to this parameter.
                     */
                    std::string m_matchParam;
                    bool m_matchParamHasBeenSet;

                    /**
                     * Matching relationship. Valid values:
<li>equal: string equals;</li>
<li>not_equal: value not equal to;</li>
<li>include: string containing;</li>
<li>not_include: string does not contain;</li>
<li>match: ip match;</li>
<li>not_match: ip not matched;</li>
<li>include_area: region inclusion;</li>
<li>is_empty: field with null value;</li>
<li>not_exists: key field not found;</li>
<li>regexp: regular expression matching;</li>
<li>len_gt: value greater than;</li>
<li>len_lt: value is less than;</li>
<li>len_eq: value equal to;</li>
<li>match_prefix: prefix match;</li>
<li>match_suffix: suffix matching;</li>
<li>wildcard: wildcard.</li>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Matching content.
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACLCONDITION_H_
