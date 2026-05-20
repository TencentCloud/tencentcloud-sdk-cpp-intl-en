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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TCBACCESSINSTANCE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TCBACCESSINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * TCB access instances
                */
                class TCBAccessInstance : public AbstractModel
                {
                public:
                    TCBAccessInstance();
                    ~TCBAccessInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain
                     * @return Domain Domain
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain
                     * @param _domain Domain
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
                     * 获取Status.
                     * @return Status Status.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status.
                     * @param _status Status.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Unified domain status

                     * @return UnionStatus Unified domain status

                     * 
                     */
                    int64_t GetUnionStatus() const;

                    /**
                     * 设置Unified domain status

                     * @param _unionStatus Unified domain status

                     * 
                     */
                    void SetUnionStatus(const int64_t& _unionStatus);

                    /**
                     * 判断参数 UnionStatus 是否已赋值
                     * @return UnionStatus 是否已赋值
                     * 
                     */
                    bool UnionStatusHasBeenSet() const;

                    /**
                     * 获取Whether it is preempted. Preemption means the domain name is bound to another environment and must be unbound or rebound.

                     * @return IsPreempted Whether it is preempted. Preemption means the domain name is bound to another environment and must be unbound or rebound.

                     * 
                     */
                    bool GetIsPreempted() const;

                    /**
                     * 设置Whether it is preempted. Preemption means the domain name is bound to another environment and must be unbound or rebound.

                     * @param _isPreempted Whether it is preempted. Preemption means the domain name is bound to another environment and must be unbound or rebound.

                     * 
                     */
                    void SetIsPreempted(const bool& _isPreempted);

                    /**
                     * 判断参数 IsPreempted 是否已赋值
                     * @return IsPreempted 是否已赋值
                     * 
                     */
                    bool IsPreemptedHasBeenSet() const;

                    /**
                     * 获取icp blocklist ban status. 0 - Not blocked. 1 - Blocked.

                     * @return ICPStatus icp blocklist ban status. 0 - Not blocked. 1 - Blocked.

                     * 
                     */
                    int64_t GetICPStatus() const;

                    /**
                     * 设置icp blocklist ban status. 0 - Not blocked. 1 - Blocked.

                     * @param _iCPStatus icp blocklist ban status. 0 - Not blocked. 1 - Blocked.

                     * 
                     */
                    void SetICPStatus(const int64_t& _iCPStatus);

                    /**
                     * 判断参数 ICPStatus 是否已赋值
                     * @return ICPStatus 是否已赋值
                     * 
                     */
                    bool ICPStatusHasBeenSet() const;

                    /**
                     * 获取Bound Certificate ID
                     * @return OldCertificateId Bound Certificate ID
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置Bound Certificate ID
                     * @param _oldCertificateId Bound Certificate ID
                     * 
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     * 
                     */
                    bool OldCertificateIdHasBeenSet() const;

                private:

                    /**
                     * Domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Status.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Unified domain status

                     */
                    int64_t m_unionStatus;
                    bool m_unionStatusHasBeenSet;

                    /**
                     * Whether it is preempted. Preemption means the domain name is bound to another environment and must be unbound or rebound.

                     */
                    bool m_isPreempted;
                    bool m_isPreemptedHasBeenSet;

                    /**
                     * icp blocklist ban status. 0 - Not blocked. 1 - Blocked.

                     */
                    int64_t m_iCPStatus;
                    bool m_iCPStatusHasBeenSet;

                    /**
                     * Bound Certificate ID
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TCBACCESSINSTANCE_H_
