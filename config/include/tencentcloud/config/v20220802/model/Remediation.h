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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_REMEDIATION_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_REMEDIATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * Remediation settings.
                */
                class Remediation : public AbstractModel
                {
                public:
                    Remediation();
                    ~Remediation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Remediation template ID.
                     * @return RemediationTemplateId Remediation template ID.
                     * 
                     */
                    std::string GetRemediationTemplateId() const;

                    /**
                     * 设置Remediation template ID.
                     * @param _remediationTemplateId Remediation template ID.
                     * 
                     */
                    void SetRemediationTemplateId(const std::string& _remediationTemplateId);

                    /**
                     * 判断参数 RemediationTemplateId 是否已赋值
                     * @return RemediationTemplateId 是否已赋值
                     * 
                     */
                    bool RemediationTemplateIdHasBeenSet() const;

                    /**
                     * 获取Remediation settings ID.
                     * @return RemediationId Remediation settings ID.
                     * 
                     */
                    std::string GetRemediationId() const;

                    /**
                     * 设置Remediation settings ID.
                     * @param _remediationId Remediation settings ID.
                     * 
                     */
                    void SetRemediationId(const std::string& _remediationId);

                    /**
                     * 判断参数 RemediationId 是否已赋值
                     * @return RemediationId 是否已赋值
                     * 
                     */
                    bool RemediationIdHasBeenSet() const;

                    /**
                     * 获取Template source for executing remediation.
                     * @return RemediationSourceType Template source for executing remediation.
                     * 
                     */
                    std::string GetRemediationSourceType() const;

                    /**
                     * 设置Template source for executing remediation.
                     * @param _remediationSourceType Template source for executing remediation.
                     * 
                     */
                    void SetRemediationSourceType(const std::string& _remediationSourceType);

                    /**
                     * 判断参数 RemediationSourceType 是否已赋值
                     * @return RemediationSourceType 是否已赋值
                     * 
                     */
                    bool RemediationSourceTypeHasBeenSet() const;

                    /**
                     * 获取Correction type. Valid values:
SCF: Function Compute (custom remediation).
                     * @return RemediationType Correction type. Valid values:
SCF: Function Compute (custom remediation).
                     * 
                     */
                    std::string GetRemediationType() const;

                    /**
                     * 设置Correction type. Valid values:
SCF: Function Compute (custom remediation).
                     * @param _remediationType Correction type. Valid values:
SCF: Function Compute (custom remediation).
                     * 
                     */
                    void SetRemediationType(const std::string& _remediationType);

                    /**
                     * 判断参数 RemediationType 是否已赋值
                     * @return RemediationType 是否已赋值
                     * 
                     */
                    bool RemediationTypeHasBeenSet() const;

                    /**
                     * 获取Account ID
                     * @return OwnerUin Account ID
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Account ID
                     * @param _ownerUin Account ID
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Correction execution mode. Parameter value:
MANUAL_EXECUTION: manual execution.
                     * @return InvokeType Correction execution mode. Parameter value:
MANUAL_EXECUTION: manual execution.
                     * 
                     */
                    std::string GetInvokeType() const;

                    /**
                     * 设置Correction execution mode. Parameter value:
MANUAL_EXECUTION: manual execution.
                     * @param _invokeType Correction execution mode. Parameter value:
MANUAL_EXECUTION: manual execution.
                     * 
                     */
                    void SetInvokeType(const std::string& _invokeType);

                    /**
                     * 判断参数 InvokeType 是否已赋值
                     * @return InvokeType 是否已赋值
                     * 
                     */
                    bool InvokeTypeHasBeenSet() const;

                    /**
                     * 获取Rule ID.
                     * @return RuleId Rule ID.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID.
                     * @param _ruleId Rule ID.
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * Remediation template ID.
                     */
                    std::string m_remediationTemplateId;
                    bool m_remediationTemplateIdHasBeenSet;

                    /**
                     * Remediation settings ID.
                     */
                    std::string m_remediationId;
                    bool m_remediationIdHasBeenSet;

                    /**
                     * Template source for executing remediation.
                     */
                    std::string m_remediationSourceType;
                    bool m_remediationSourceTypeHasBeenSet;

                    /**
                     * Correction type. Valid values:
SCF: Function Compute (custom remediation).
                     */
                    std::string m_remediationType;
                    bool m_remediationTypeHasBeenSet;

                    /**
                     * Account ID
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Correction execution mode. Parameter value:
MANUAL_EXECUTION: manual execution.
                     */
                    std::string m_invokeType;
                    bool m_invokeTypeHasBeenSet;

                    /**
                     * Rule ID.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_REMEDIATION_H_
