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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_AUDITCROSSBORDERCOMPLIANCEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_AUDITCROSSBORDERCOMPLIANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AuditCrossBorderCompliance request structure.
                */
                class AuditCrossBorderComplianceRequest : public AbstractModel
                {
                public:
                    AuditCrossBorderComplianceRequest();
                    ~AuditCrossBorderComplianceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service provider. Valid values: `UNICOM`.
                     * @return ServiceProvider Service provider. Valid values: `UNICOM`.
                     * 
                     */
                    std::string GetServiceProvider() const;

                    /**
                     * 设置Service provider. Valid values: `UNICOM`.
                     * @param _serviceProvider Service provider. Valid values: `UNICOM`.
                     * 
                     */
                    void SetServiceProvider(const std::string& _serviceProvider);

                    /**
                     * 判断参数 ServiceProvider 是否已赋值
                     * @return ServiceProvider 是否已赋值
                     * 
                     */
                    bool ServiceProviderHasBeenSet() const;

                    /**
                     * 获取Unique ID of compliance review request.
                     * @return ComplianceId Unique ID of compliance review request.
                     * 
                     */
                    uint64_t GetComplianceId() const;

                    /**
                     * 设置Unique ID of compliance review request.
                     * @param _complianceId Unique ID of compliance review request.
                     * 
                     */
                    void SetComplianceId(const uint64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                    /**
                     * 获取Audit behavior. Valid values: `APPROVED` and `DENY`.
                     * @return AuditBehavior Audit behavior. Valid values: `APPROVED` and `DENY`.
                     * 
                     */
                    std::string GetAuditBehavior() const;

                    /**
                     * 设置Audit behavior. Valid values: `APPROVED` and `DENY`.
                     * @param _auditBehavior Audit behavior. Valid values: `APPROVED` and `DENY`.
                     * 
                     */
                    void SetAuditBehavior(const std::string& _auditBehavior);

                    /**
                     * 判断参数 AuditBehavior 是否已赋值
                     * @return AuditBehavior 是否已赋值
                     * 
                     */
                    bool AuditBehaviorHasBeenSet() const;

                private:

                    /**
                     * Service provider. Valid values: `UNICOM`.
                     */
                    std::string m_serviceProvider;
                    bool m_serviceProviderHasBeenSet;

                    /**
                     * Unique ID of compliance review request.
                     */
                    uint64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * Audit behavior. Valid values: `APPROVED` and `DENY`.
                     */
                    std::string m_auditBehavior;
                    bool m_auditBehaviorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_AUDITCROSSBORDERCOMPLIANCEREQUEST_H_
