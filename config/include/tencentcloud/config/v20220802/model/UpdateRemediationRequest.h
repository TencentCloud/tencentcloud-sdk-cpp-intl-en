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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEREMEDIATIONREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEREMEDIATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpdateRemediation request structure.
                */
                class UpdateRemediationRequest : public AbstractModel
                {
                public:
                    UpdateRemediationRequest();
                    ~UpdateRemediationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Remediation setting ID.
                     * @return RemediationId Remediation setting ID.
                     * 
                     */
                    std::string GetRemediationId() const;

                    /**
                     * 设置Remediation setting ID.
                     * @param _remediationId Remediation setting ID.
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
                     * 获取Remediation type. Valid values: SCF (function compute, custom remediation).
                     * @return RemediationType Remediation type. Valid values: SCF (function compute, custom remediation).
                     * 
                     */
                    std::string GetRemediationType() const;

                    /**
                     * 设置Remediation type. Valid values: SCF (function compute, custom remediation).
                     * @param _remediationType Remediation type. Valid values: SCF (function compute, custom remediation).
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
                     * 获取Remediation execution mode. Valid values: NON_EXECUTION (no execution), AUTO_EXECUTION (automatic execution), MANUAL_EXECUTION (manual execution), and NOT_CONFIG (not configured).
                     * @return InvokeType Remediation execution mode. Valid values: NON_EXECUTION (no execution), AUTO_EXECUTION (automatic execution), MANUAL_EXECUTION (manual execution), and NOT_CONFIG (not configured).
                     * 
                     */
                    std::string GetInvokeType() const;

                    /**
                     * 设置Remediation execution mode. Valid values: NON_EXECUTION (no execution), AUTO_EXECUTION (automatic execution), MANUAL_EXECUTION (manual execution), and NOT_CONFIG (not configured).
                     * @param _invokeType Remediation execution mode. Valid values: NON_EXECUTION (no execution), AUTO_EXECUTION (automatic execution), MANUAL_EXECUTION (manual execution), and NOT_CONFIG (not configured).
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
                     * 获取Remediation execution source.
                     * @return SourceType Remediation execution source.
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Remediation execution source.
                     * @param _sourceType Remediation execution source.
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                private:

                    /**
                     * Remediation setting ID.
                     */
                    std::string m_remediationId;
                    bool m_remediationIdHasBeenSet;

                    /**
                     * Remediation type. Valid values: SCF (function compute, custom remediation).
                     */
                    std::string m_remediationType;
                    bool m_remediationTypeHasBeenSet;

                    /**
                     * Remediation template ID.
                     */
                    std::string m_remediationTemplateId;
                    bool m_remediationTemplateIdHasBeenSet;

                    /**
                     * Remediation execution mode. Valid values: NON_EXECUTION (no execution), AUTO_EXECUTION (automatic execution), MANUAL_EXECUTION (manual execution), and NOT_CONFIG (not configured).
                     */
                    std::string m_invokeType;
                    bool m_invokeTypeHasBeenSet;

                    /**
                     * Remediation execution source.
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEREMEDIATIONREQUEST_H_
