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
                * The condition that makes up an access control rule
                */
                class AclCondition : public AbstractModel
                {
                public:
                    AclCondition();
                    ~AclCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The field to match. Values:
<li>`host`: Request domain name</li>
<li>`sip`: Client IP</li>
<li>`ua`: User-Agent</li>
<li>`cookie`: Cookie</li>
<li>`cgi`: CGI script</li>
<li>`xff`: XFF header</li>
<li>`url`: Request URL</li>
<li>`accept`: Request content type</li>
<li>`method`: Request method</li>
<li>`header`: Request header</li>
<li>`app_proto`: Application layer protocol</li>
<li>`sip_proto`: Network layer protocol</li>
<li>`uabot`: UA rules (only available in custom bot rules)</li>
<li>`idcid`: IDC rules (only available in custom bot rules)</li>
<li>`sipbot`: Search engine rules (only available in custom bot rules)</li>
<li>`portrait`: Client reputation (only available in custom bot rules)</li>
<li>`header_seq`: Header sequence (only available in custom bot rules)</li>
                     * @return MatchFrom The field to match. Values:
<li>`host`: Request domain name</li>
<li>`sip`: Client IP</li>
<li>`ua`: User-Agent</li>
<li>`cookie`: Cookie</li>
<li>`cgi`: CGI script</li>
<li>`xff`: XFF header</li>
<li>`url`: Request URL</li>
<li>`accept`: Request content type</li>
<li>`method`: Request method</li>
<li>`header`: Request header</li>
<li>`app_proto`: Application layer protocol</li>
<li>`sip_proto`: Network layer protocol</li>
<li>`uabot`: UA rules (only available in custom bot rules)</li>
<li>`idcid`: IDC rules (only available in custom bot rules)</li>
<li>`sipbot`: Search engine rules (only available in custom bot rules)</li>
<li>`portrait`: Client reputation (only available in custom bot rules)</li>
<li>`header_seq`: Header sequence (only available in custom bot rules)</li>
                     * 
                     */
                    std::string GetMatchFrom() const;

                    /**
                     * 设置The field to match. Values:
<li>`host`: Request domain name</li>
<li>`sip`: Client IP</li>
<li>`ua`: User-Agent</li>
<li>`cookie`: Cookie</li>
<li>`cgi`: CGI script</li>
<li>`xff`: XFF header</li>
<li>`url`: Request URL</li>
<li>`accept`: Request content type</li>
<li>`method`: Request method</li>
<li>`header`: Request header</li>
<li>`app_proto`: Application layer protocol</li>
<li>`sip_proto`: Network layer protocol</li>
<li>`uabot`: UA rules (only available in custom bot rules)</li>
<li>`idcid`: IDC rules (only available in custom bot rules)</li>
<li>`sipbot`: Search engine rules (only available in custom bot rules)</li>
<li>`portrait`: Client reputation (only available in custom bot rules)</li>
<li>`header_seq`: Header sequence (only available in custom bot rules)</li>
                     * @param _matchFrom The field to match. Values:
<li>`host`: Request domain name</li>
<li>`sip`: Client IP</li>
<li>`ua`: User-Agent</li>
<li>`cookie`: Cookie</li>
<li>`cgi`: CGI script</li>
<li>`xff`: XFF header</li>
<li>`url`: Request URL</li>
<li>`accept`: Request content type</li>
<li>`method`: Request method</li>
<li>`header`: Request header</li>
<li>`app_proto`: Application layer protocol</li>
<li>`sip_proto`: Network layer protocol</li>
<li>`uabot`: UA rules (only available in custom bot rules)</li>
<li>`idcid`: IDC rules (only available in custom bot rules)</li>
<li>`sipbot`: Search engine rules (only available in custom bot rules)</li>
<li>`portrait`: Client reputation (only available in custom bot rules)</li>
<li>`header_seq`: Header sequence (only available in custom bot rules)</li>
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
                     * 获取The parameter of the field. When `MatchFrom = header`, the key contained in the header can be passed.
                     * @return MatchParam The parameter of the field. When `MatchFrom = header`, the key contained in the header can be passed.
                     * 
                     */
                    std::string GetMatchParam() const;

                    /**
                     * 设置The parameter of the field. When `MatchFrom = header`, the key contained in the header can be passed.
                     * @param _matchParam The parameter of the field. When `MatchFrom = header`, the key contained in the header can be passed.
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
                     * 获取The logical operator. Values:
<li>`equal`: Value equals</li>
<li>`not_equal`: Value not equals</li>
<li>`include`: String contains</li>
<li>`not_include`: String not contains</li>
<li>`match`: IP matches</li>
<li>`not_match`: IP not matches</li>
<li>`include_area`: Regions contain</li>
<li>`is_empty`: Value left empty</li>
<li>`not_exists`: Key fields not exist</li>
<li>`regexp`: Regex matches</li>
<li>`len_gt`: Value greater than</li>
<li>`len_lt`: Value smaller than</li>
<li>`len_eq`: Value equals</li>
<li>`match_prefix`: Prefix matches</li>
<li>`match_suffix`: Suffix matches</li>
<li>`wildcard`: Wildcard</li>
                     * @return Operator The logical operator. Values:
<li>`equal`: Value equals</li>
<li>`not_equal`: Value not equals</li>
<li>`include`: String contains</li>
<li>`not_include`: String not contains</li>
<li>`match`: IP matches</li>
<li>`not_match`: IP not matches</li>
<li>`include_area`: Regions contain</li>
<li>`is_empty`: Value left empty</li>
<li>`not_exists`: Key fields not exist</li>
<li>`regexp`: Regex matches</li>
<li>`len_gt`: Value greater than</li>
<li>`len_lt`: Value smaller than</li>
<li>`len_eq`: Value equals</li>
<li>`match_prefix`: Prefix matches</li>
<li>`match_suffix`: Suffix matches</li>
<li>`wildcard`: Wildcard</li>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置The logical operator. Values:
<li>`equal`: Value equals</li>
<li>`not_equal`: Value not equals</li>
<li>`include`: String contains</li>
<li>`not_include`: String not contains</li>
<li>`match`: IP matches</li>
<li>`not_match`: IP not matches</li>
<li>`include_area`: Regions contain</li>
<li>`is_empty`: Value left empty</li>
<li>`not_exists`: Key fields not exist</li>
<li>`regexp`: Regex matches</li>
<li>`len_gt`: Value greater than</li>
<li>`len_lt`: Value smaller than</li>
<li>`len_eq`: Value equals</li>
<li>`match_prefix`: Prefix matches</li>
<li>`match_suffix`: Suffix matches</li>
<li>`wildcard`: Wildcard</li>
                     * @param _operator The logical operator. Values:
<li>`equal`: Value equals</li>
<li>`not_equal`: Value not equals</li>
<li>`include`: String contains</li>
<li>`not_include`: String not contains</li>
<li>`match`: IP matches</li>
<li>`not_match`: IP not matches</li>
<li>`include_area`: Regions contain</li>
<li>`is_empty`: Value left empty</li>
<li>`not_exists`: Key fields not exist</li>
<li>`regexp`: Regex matches</li>
<li>`len_gt`: Value greater than</li>
<li>`len_lt`: Value smaller than</li>
<li>`len_eq`: Value equals</li>
<li>`match_prefix`: Prefix matches</li>
<li>`match_suffix`: Suffix matches</li>
<li>`wildcard`: Wildcard</li>
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
                     * 获取The content to match.
                     * @return MatchContent The content to match.
                     * 
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置The content to match.
                     * @param _matchContent The content to match.
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
                     * The field to match. Values:
<li>`host`: Request domain name</li>
<li>`sip`: Client IP</li>
<li>`ua`: User-Agent</li>
<li>`cookie`: Cookie</li>
<li>`cgi`: CGI script</li>
<li>`xff`: XFF header</li>
<li>`url`: Request URL</li>
<li>`accept`: Request content type</li>
<li>`method`: Request method</li>
<li>`header`: Request header</li>
<li>`app_proto`: Application layer protocol</li>
<li>`sip_proto`: Network layer protocol</li>
<li>`uabot`: UA rules (only available in custom bot rules)</li>
<li>`idcid`: IDC rules (only available in custom bot rules)</li>
<li>`sipbot`: Search engine rules (only available in custom bot rules)</li>
<li>`portrait`: Client reputation (only available in custom bot rules)</li>
<li>`header_seq`: Header sequence (only available in custom bot rules)</li>
                     */
                    std::string m_matchFrom;
                    bool m_matchFromHasBeenSet;

                    /**
                     * The parameter of the field. When `MatchFrom = header`, the key contained in the header can be passed.
                     */
                    std::string m_matchParam;
                    bool m_matchParamHasBeenSet;

                    /**
                     * The logical operator. Values:
<li>`equal`: Value equals</li>
<li>`not_equal`: Value not equals</li>
<li>`include`: String contains</li>
<li>`not_include`: String not contains</li>
<li>`match`: IP matches</li>
<li>`not_match`: IP not matches</li>
<li>`include_area`: Regions contain</li>
<li>`is_empty`: Value left empty</li>
<li>`not_exists`: Key fields not exist</li>
<li>`regexp`: Regex matches</li>
<li>`len_gt`: Value greater than</li>
<li>`len_lt`: Value smaller than</li>
<li>`len_eq`: Value equals</li>
<li>`match_prefix`: Prefix matches</li>
<li>`match_suffix`: Suffix matches</li>
<li>`wildcard`: Wildcard</li>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * The content to match.
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACLCONDITION_H_
