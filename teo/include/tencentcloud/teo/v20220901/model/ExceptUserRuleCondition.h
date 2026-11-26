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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULECONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULECONDITION_H_

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
                * Specific conditions for an exception rule to take effect.
                */
                class ExceptUserRuleCondition : public AbstractModel
                {
                public:
                    ExceptUserRuleCondition();
                    ~ExceptUserRuleCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Matching item. Valid values:
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
<li>sip_proto: network layer protocol.</li>
                     * @return MatchFrom Matching item. Valid values:
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
<li>sip_proto: network layer protocol.</li>
                     * 
                     */
                    std::string GetMatchFrom() const;

                    /**
                     * 设置Matching item. Valid values:
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
<li>sip_proto: network layer protocol.</li>
                     * @param _matchFrom Matching item. Valid values:
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
<li>sip_proto: network layer protocol.</li>
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
                     * 获取Parameter of the matching item. Only when MatchFrom is header, you can use this parameter, and the key of the header can be set to this parameter.
                     * @return MatchParam Parameter of the matching item. Only when MatchFrom is header, you can use this parameter, and the key of the header can be set to this parameter.
                     * 
                     */
                    std::string GetMatchParam() const;

                    /**
                     * 设置Parameter of the matching item. Only when MatchFrom is header, you can use this parameter, and the key of the header can be set to this parameter.
                     * @param _matchParam Parameter of the matching item. Only when MatchFrom is header, you can use this parameter, and the key of the header can be set to this parameter.
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
                     * 获取Matching operator. Valid values:
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
                     * @return Operator Matching operator. Valid values:
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
                     * 设置Matching operator. Valid values:
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
                     * @param _operator Matching operator. Valid values:
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
                     * 获取Matching value.
                     * @return MatchContent Matching value.
                     * 
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置Matching value.
                     * @param _matchContent Matching value.
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
                     * Matching item. Valid values:
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
<li>sip_proto: network layer protocol.</li>
                     */
                    std::string m_matchFrom;
                    bool m_matchFromHasBeenSet;

                    /**
                     * Parameter of the matching item. Only when MatchFrom is header, you can use this parameter, and the key of the header can be set to this parameter.
                     */
                    std::string m_matchParam;
                    bool m_matchParamHasBeenSet;

                    /**
                     * Matching operator. Valid values:
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
                     * Matching value.
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULECONDITION_H_
