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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMAUDITFILTERSTRATEGYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMAUDITFILTERSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateDspmAuditFilterStrategy request structure.
                */
                class CreateDspmAuditFilterStrategyRequest : public AbstractModel
                {
                public:
                    CreateDspmAuditFilterStrategyRequest();
                    ~CreateDspmAuditFilterStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Policy name.</p>
                     * @return Name <p>Policy name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Policy name.</p>
                     * @param _name <p>Policy name.</p>
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
                     * 获取<p>Rule content</p><p>Parameter format: json</p>
                     * @return Rule <p>Rule content</p><p>Parameter format: json</p>
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置<p>Rule content</p><p>Parameter format: json</p>
                     * @param _rule <p>Rule content</p><p>Parameter format: json</p>
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable</p><p>Enumeration values:</p><ul><li>1: enable</li><li>0: disable</li></ul>
                     * @return IsEnabled <p>Whether to enable</p><p>Enumeration values:</p><ul><li>1: enable</li><li>0: disable</li></ul>
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置<p>Whether to enable</p><p>Enumeration values:</p><ul><li>1: enable</li><li>0: disable</li></ul>
                     * @param _isEnabled <p>Whether to enable</p><p>Enumeration values:</p><ul><li>1: enable</li><li>0: disable</li></ul>
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取<p>Policy description.</p>
                     * @return Description <p>Policy description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Policy description.</p>
                     * @param _description <p>Policy description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Remarks.</p>
                     * @return Remark <p>Remarks.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remarks.</p>
                     * @param _remark <p>Remarks.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>Policy name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Rule content</p><p>Parameter format: json</p>
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>Whether to enable</p><p>Enumeration values:</p><ul><li>1: enable</li><li>0: disable</li></ul>
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * <p>Policy description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMAUDITFILTERSTRATEGYREQUEST_H_
