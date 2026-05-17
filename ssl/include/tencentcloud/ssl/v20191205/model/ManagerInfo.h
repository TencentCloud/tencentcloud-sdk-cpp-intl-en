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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_MANAGERINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_MANAGERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/ManagerStatusInfo.h>
#include <tencentcloud/ssl/v20191205/model/Tags.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Administrator information
                */
                class ManagerInfo : public AbstractModel
                {
                public:
                    ManagerInfo();
                    ~ManagerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Status: audit: under review ok: pass invalid: invalid expiring: expiring soon expired: expired
                     * @return Status Status: audit: under review ok: pass invalid: invalid expiring: expiring soon expired: expired
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status: audit: under review ok: pass invalid: invalid expiring: expiring soon expired: expired
                     * @param _status Status: audit: under review ok: pass invalid: invalid expiring: expiring soon expired: expired
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Manager name
                     * @return ManagerFirstName Manager name
                     * 
                     */
                    std::string GetManagerFirstName() const;

                    /**
                     * 设置Manager name
                     * @param _managerFirstName Manager name
                     * 
                     */
                    void SetManagerFirstName(const std::string& _managerFirstName);

                    /**
                     * 判断参数 ManagerFirstName 是否已赋值
                     * @return ManagerFirstName 是否已赋值
                     * 
                     */
                    bool ManagerFirstNameHasBeenSet() const;

                    /**
                     * 获取Manager name
                     * @return ManagerLastName Manager name
                     * 
                     */
                    std::string GetManagerLastName() const;

                    /**
                     * 设置Manager name
                     * @param _managerLastName Manager name
                     * 
                     */
                    void SetManagerLastName(const std::string& _managerLastName);

                    /**
                     * 判断参数 ManagerLastName 是否已赋值
                     * @return ManagerLastName 是否已赋值
                     * 
                     */
                    bool ManagerLastNameHasBeenSet() const;

                    /**
                     * 获取manager position
                     * @return ManagerPosition manager position
                     * 
                     */
                    std::string GetManagerPosition() const;

                    /**
                     * 设置manager position
                     * @param _managerPosition manager position
                     * 
                     */
                    void SetManagerPosition(const std::string& _managerPosition);

                    /**
                     * 判断参数 ManagerPosition 是否已赋值
                     * @return ManagerPosition 是否已赋值
                     * 
                     */
                    bool ManagerPositionHasBeenSet() const;

                    /**
                     * 获取Manager phone
                     * @return ManagerPhone Manager phone
                     * 
                     */
                    std::string GetManagerPhone() const;

                    /**
                     * 设置Manager phone
                     * @param _managerPhone Manager phone
                     * 
                     */
                    void SetManagerPhone(const std::string& _managerPhone);

                    /**
                     * 判断参数 ManagerPhone 是否已赋值
                     * @return ManagerPhone 是否已赋值
                     * 
                     */
                    bool ManagerPhoneHasBeenSet() const;

                    /**
                     * 获取Manager mailbox
                     * @return ManagerMail Manager mailbox
                     * 
                     */
                    std::string GetManagerMail() const;

                    /**
                     * 设置Manager mailbox
                     * @param _managerMail Manager mailbox
                     * 
                     */
                    void SetManagerMail(const std::string& _managerMail);

                    /**
                     * 判断参数 ManagerMail 是否已赋值
                     * @return ManagerMail 是否已赋值
                     * 
                     */
                    bool ManagerMailHasBeenSet() const;

                    /**
                     * 获取department of the manager
                     * @return ManagerDepartment department of the manager
                     * 
                     */
                    std::string GetManagerDepartment() const;

                    /**
                     * 设置department of the manager
                     * @param _managerDepartment department of the manager
                     * 
                     */
                    void SetManagerDepartment(const std::string& _managerDepartment);

                    /**
                     * 判断参数 ManagerDepartment 是否已赋值
                     * @return ManagerDepartment 是否已赋值
                     * 
                     */
                    bool ManagerDepartmentHasBeenSet() const;

                    /**
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Number of domains for manager
                     * @return DomainCount Number of domains for manager
                     * 
                     */
                    int64_t GetDomainCount() const;

                    /**
                     * 设置Number of domains for manager
                     * @param _domainCount Number of domains for manager
                     * 
                     */
                    void SetDomainCount(const int64_t& _domainCount);

                    /**
                     * 判断参数 DomainCount 是否已赋值
                     * @return DomainCount 是否已赋值
                     * 
                     */
                    bool DomainCountHasBeenSet() const;

                    /**
                     * 获取Number of manager certificates
                     * @return CertCount Number of manager certificates
                     * 
                     */
                    int64_t GetCertCount() const;

                    /**
                     * 设置Number of manager certificates
                     * @param _certCount Number of manager certificates
                     * 
                     */
                    void SetCertCount(const int64_t& _certCount);

                    /**
                     * 判断参数 CertCount 是否已赋值
                     * @return CertCount 是否已赋值
                     * 
                     */
                    bool CertCountHasBeenSet() const;

                    /**
                     * 获取Manager ID
                     * @return ManagerId Manager ID
                     * 
                     */
                    int64_t GetManagerId() const;

                    /**
                     * 设置Manager ID
                     * @param _managerId Manager ID
                     * 
                     */
                    void SetManagerId(const int64_t& _managerId);

                    /**
                     * 判断参数 ManagerId 是否已赋值
                     * @return ManagerId 是否已赋值
                     * 
                     */
                    bool ManagerIdHasBeenSet() const;

                    /**
                     * 获取Review valid expiry time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Review valid expiry time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Review valid expiry time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Review valid expiry time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Last submission review time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubmitAuditTime Last submission review time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubmitAuditTime() const;

                    /**
                     * 设置Last submission review time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _submitAuditTime Last submission review time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubmitAuditTime(const std::string& _submitAuditTime);

                    /**
                     * 判断参数 SubmitAuditTime 是否已赋值
                     * @return SubmitAuditTime 是否已赋值
                     * 
                     */
                    bool SubmitAuditTimeHasBeenSet() const;

                    /**
                     * 获取Approval Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VerifyTime Approval Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVerifyTime() const;

                    /**
                     * 设置Approval Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _verifyTime Approval Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVerifyTime(const std::string& _verifyTime);

                    /**
                     * 判断参数 VerifyTime 是否已赋值
                     * @return VerifyTime 是否已赋值
                     * 
                     */
                    bool VerifyTimeHasBeenSet() const;

                    /**
                     * 获取Review status info
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatusInfo Review status info
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ManagerStatusInfo> GetStatusInfo() const;

                    /**
                     * 设置Review status info
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _statusInfo Review status info
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusInfo(const std::vector<ManagerStatusInfo>& _statusInfo);

                    /**
                     * 判断参数 StatusInfo 是否已赋值
                     * @return StatusInfo 是否已赋值
                     * 
                     */
                    bool StatusInfoHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return Tags Tag.
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置Tag.
                     * @param _tags Tag.
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Status: audit: under review ok: pass invalid: invalid expiring: expiring soon expired: expired
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Manager name
                     */
                    std::string m_managerFirstName;
                    bool m_managerFirstNameHasBeenSet;

                    /**
                     * Manager name
                     */
                    std::string m_managerLastName;
                    bool m_managerLastNameHasBeenSet;

                    /**
                     * manager position
                     */
                    std::string m_managerPosition;
                    bool m_managerPositionHasBeenSet;

                    /**
                     * Manager phone
                     */
                    std::string m_managerPhone;
                    bool m_managerPhoneHasBeenSet;

                    /**
                     * Manager mailbox
                     */
                    std::string m_managerMail;
                    bool m_managerMailHasBeenSet;

                    /**
                     * department of the manager
                     */
                    std::string m_managerDepartment;
                    bool m_managerDepartmentHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Number of domains for manager
                     */
                    int64_t m_domainCount;
                    bool m_domainCountHasBeenSet;

                    /**
                     * Number of manager certificates
                     */
                    int64_t m_certCount;
                    bool m_certCountHasBeenSet;

                    /**
                     * Manager ID
                     */
                    int64_t m_managerId;
                    bool m_managerIdHasBeenSet;

                    /**
                     * Review valid expiry time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Last submission review time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_submitAuditTime;
                    bool m_submitAuditTimeHasBeenSet;

                    /**
                     * Approval Time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_verifyTime;
                    bool m_verifyTimeHasBeenSet;

                    /**
                     * Review status info
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ManagerStatusInfo> m_statusInfo;
                    bool m_statusInfoHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_MANAGERINFO_H_
