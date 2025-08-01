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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYSPARTAPROTECTIONMODEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYSPARTAPROTECTIONMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifySpartaProtectionMode request structure.
                */
                class ModifySpartaProtectionModeRequest : public AbstractModel
                {
                public:
                    ModifySpartaProtectionModeRequest();
                    ~ModifySpartaProtectionModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Protection status:
10: rule-based observation and AI disabling; 11: rule- and AI-based observation; 12: rule-based observation and AI-based interception
20: rule-based interception and AI disabling; 21: rule-based interception and AI-based observation; 22: rule- and AI-based interception
                     * @return Mode Protection status:
10: rule-based observation and AI disabling; 11: rule- and AI-based observation; 12: rule-based observation and AI-based interception
20: rule-based interception and AI disabling; 21: rule-based interception and AI-based observation; 22: rule- and AI-based interception
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置Protection status:
10: rule-based observation and AI disabling; 11: rule- and AI-based observation; 12: rule-based observation and AI-based interception
20: rule-based interception and AI disabling; 21: rule-based interception and AI-based observation; 22: rule- and AI-based interception
                     * @param _mode Protection status:
10: rule-based observation and AI disabling; 11: rule- and AI-based observation; 12: rule-based observation and AI-based interception
20: rule-based interception and AI disabling; 21: rule-based interception and AI-based observation; 22: rule- and AI-based interception
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     * @return Edition Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     * @param _edition Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取0 is for modifying the Rule Engine Status; 1 is for modifying the AI Status
                     * @return Type 0 is for modifying the Rule Engine Status; 1 is for modifying the AI Status
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置0 is for modifying the Rule Engine Status; 1 is for modifying the AI Status
                     * @param _type 0 is for modifying the Rule Engine Status; 1 is for modifying the AI Status
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Protection status:
10: rule-based observation and AI disabling; 11: rule- and AI-based observation; 12: rule-based observation and AI-based interception
20: rule-based interception and AI disabling; 21: rule-based interception and AI-based observation; 22: rule- and AI-based interception
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 0 is for modifying the Rule Engine Status; 1 is for modifying the AI Status
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYSPARTAPROTECTIONMODEREQUEST_H_
