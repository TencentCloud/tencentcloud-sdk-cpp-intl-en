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
                     * 获取The domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain The domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domain The domain.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status The status.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The unified domain status.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnionStatus The unified domain status.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUnionStatus() const;

                    /**
                     * 设置The unified domain status.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unionStatus The unified domain status.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether the domain is preempted. A preempted domain is one that is already associated with another environment. It must be disassociated or re-associated first.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsPreempted Whether the domain is preempted. A preempted domain is one that is already associated with another environment. It must be disassociated or re-associated first.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsPreempted() const;

                    /**
                     * 设置Whether the domain is preempted. A preempted domain is one that is already associated with another environment. It must be disassociated or re-associated first.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isPreempted Whether the domain is preempted. A preempted domain is one that is already associated with another environment. It must be disassociated or re-associated first.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether the domain is added to the ICP blocklist. Valid values: `0` for no and `1` for yes.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ICPStatus Whether the domain is added to the ICP blocklist. Valid values: `0` for no and `1` for yes.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetICPStatus() const;

                    /**
                     * 设置Whether the domain is added to the ICP blocklist. Valid values: `0` for no and `1` for yes.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iCPStatus Whether the domain is added to the ICP blocklist. Valid values: `0` for no and `1` for yes.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The ID of the associated certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OldCertificateId The ID of the associated certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置The ID of the associated certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _oldCertificateId The ID of the associated certificate.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * The domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The unified domain status.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_unionStatus;
                    bool m_unionStatusHasBeenSet;

                    /**
                     * Whether the domain is preempted. A preempted domain is one that is already associated with another environment. It must be disassociated or re-associated first.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isPreempted;
                    bool m_isPreemptedHasBeenSet;

                    /**
                     * Whether the domain is added to the ICP blocklist. Valid values: `0` for no and `1` for yes.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_iCPStatus;
                    bool m_iCPStatusHasBeenSet;

                    /**
                     * The ID of the associated certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TCBACCESSINSTANCE_H_
