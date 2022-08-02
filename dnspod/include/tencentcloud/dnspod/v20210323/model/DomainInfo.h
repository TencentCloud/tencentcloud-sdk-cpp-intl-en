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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAININFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * Domain details
                */
                class DomainInfo : public AbstractModel
                {
                public:
                    DomainInfo();
                    ~DomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain ID
                     * @return DomainId Domain ID
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置Domain ID
                     * @param DomainId Domain ID
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取Domain status
                     * @return Status Domain status
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Domain status
                     * @param Status Domain status
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取DNS plan level
                     * @return Grade DNS plan level
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置DNS plan level
                     * @param Grade DNS plan level
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取Domain group ID
                     * @return GroupId Domain group ID
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置Domain group ID
                     * @param GroupId Domain group ID
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Whether the domain is starred
                     * @return IsMark Whether the domain is starred
                     */
                    std::string GetIsMark() const;

                    /**
                     * 设置Whether the domain is starred
                     * @param IsMark Whether the domain is starred
                     */
                    void SetIsMark(const std::string& _isMark);

                    /**
                     * 判断参数 IsMark 是否已赋值
                     * @return IsMark 是否已赋值
                     */
                    bool IsMarkHasBeenSet() const;

                    /**
                     * 获取TTL (DNS record cache time)
                     * @return TTL TTL (DNS record cache time)
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置TTL (DNS record cache time)
                     * @param TTL TTL (DNS record cache time)
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取Whether CNAME flattening is enabled
                     * @return CnameSpeedup Whether CNAME flattening is enabled
                     */
                    std::string GetCnameSpeedup() const;

                    /**
                     * 设置Whether CNAME flattening is enabled
                     * @param CnameSpeedup Whether CNAME flattening is enabled
                     */
                    void SetCnameSpeedup(const std::string& _cnameSpeedup);

                    /**
                     * 判断参数 CnameSpeedup 是否已赋值
                     * @return CnameSpeedup 是否已赋值
                     */
                    bool CnameSpeedupHasBeenSet() const;

                    /**
                     * 获取Domain remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Domain remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Domain remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Remark Domain remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Domain Punycode
                     * @return Punycode Domain Punycode
                     */
                    std::string GetPunycode() const;

                    /**
                     * 设置Domain Punycode
                     * @param Punycode Domain Punycode
                     */
                    void SetPunycode(const std::string& _punycode);

                    /**
                     * 判断参数 Punycode 是否已赋值
                     * @return Punycode 是否已赋值
                     */
                    bool PunycodeHasBeenSet() const;

                    /**
                     * 获取DNS status of the domain
                     * @return DnsStatus DNS status of the domain
                     */
                    std::string GetDnsStatus() const;

                    /**
                     * 设置DNS status of the domain
                     * @param DnsStatus DNS status of the domain
                     */
                    void SetDnsStatus(const std::string& _dnsStatus);

                    /**
                     * 判断参数 DnsStatus 是否已赋值
                     * @return DnsStatus 是否已赋值
                     */
                    bool DnsStatusHasBeenSet() const;

                    /**
                     * 获取NS list of the domain
                     * @return DnspodNsList NS list of the domain
                     */
                    std::vector<std::string> GetDnspodNsList() const;

                    /**
                     * 设置NS list of the domain
                     * @param DnspodNsList NS list of the domain
                     */
                    void SetDnspodNsList(const std::vector<std::string>& _dnspodNsList);

                    /**
                     * 判断参数 DnspodNsList 是否已赋值
                     * @return DnspodNsList 是否已赋值
                     */
                    bool DnspodNsListHasBeenSet() const;

                    /**
                     * 获取Domain
                     * @return Domain Domain
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain
                     * @param Domain Domain
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Domain level ID
                     * @return GradeLevel Domain level ID
                     */
                    uint64_t GetGradeLevel() const;

                    /**
                     * 设置Domain level ID
                     * @param GradeLevel Domain level ID
                     */
                    void SetGradeLevel(const uint64_t& _gradeLevel);

                    /**
                     * 判断参数 GradeLevel 是否已赋值
                     * @return GradeLevel 是否已赋值
                     */
                    bool GradeLevelHasBeenSet() const;

                    /**
                     * 获取Domain user ID
                     * @return UserId Domain user ID
                     */
                    uint64_t GetUserId() const;

                    /**
                     * 设置Domain user ID
                     * @param UserId Domain user ID
                     */
                    void SetUserId(const uint64_t& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Whether the domain is a VIP domain
                     * @return IsVip Whether the domain is a VIP domain
                     */
                    std::string GetIsVip() const;

                    /**
                     * 设置Whether the domain is a VIP domain
                     * @param IsVip Whether the domain is a VIP domain
                     */
                    void SetIsVip(const std::string& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取Domain owner account
                     * @return Owner Domain owner account
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Domain owner account
                     * @param Owner Domain owner account
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取Domain level description
                     * @return GradeTitle Domain level description
                     */
                    std::string GetGradeTitle() const;

                    /**
                     * 设置Domain level description
                     * @param GradeTitle Domain level description
                     */
                    void SetGradeTitle(const std::string& _gradeTitle);

                    /**
                     * 判断参数 GradeTitle 是否已赋值
                     * @return GradeTitle 是否已赋值
                     */
                    bool GradeTitleHasBeenSet() const;

                    /**
                     * 获取Domain creation time
                     * @return CreatedOn Domain creation time
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Domain creation time
                     * @param CreatedOn Domain creation time
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取Last update time
                     * @return UpdatedOn Last update time
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置Last update time
                     * @param UpdatedOn Last update time
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud account `Uin`
                     * @return Uin Tencent Cloud account `Uin`
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Tencent Cloud account `Uin`
                     * @param Uin Tencent Cloud account `Uin`
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取NS list actually used by the domain
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActualNsList NS list actually used by the domain
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetActualNsList() const;

                    /**
                     * 设置NS list actually used by the domain
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ActualNsList NS list actually used by the domain
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetActualNsList(const std::vector<std::string>& _actualNsList);

                    /**
                     * 判断参数 ActualNsList 是否已赋值
                     * @return ActualNsList 是否已赋值
                     */
                    bool ActualNsListHasBeenSet() const;

                    /**
                     * 获取Number of domain records
                     * @return RecordCount Number of domain records
                     */
                    uint64_t GetRecordCount() const;

                    /**
                     * 设置Number of domain records
                     * @param RecordCount Number of domain records
                     */
                    void SetRecordCount(const uint64_t& _recordCount);

                    /**
                     * 判断参数 RecordCount 是否已赋值
                     * @return RecordCount 是否已赋值
                     */
                    bool RecordCountHasBeenSet() const;

                    /**
                     * 获取Alias of the domain account owner
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OwnerNick Alias of the domain account owner
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOwnerNick() const;

                    /**
                     * 设置Alias of the domain account owner
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OwnerNick Alias of the domain account owner
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOwnerNick(const std::string& _ownerNick);

                    /**
                     * 判断参数 OwnerNick 是否已赋值
                     * @return OwnerNick 是否已赋值
                     */
                    bool OwnerNickHasBeenSet() const;

                private:

                    /**
                     * Domain ID
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * Domain status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * DNS plan level
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * Domain group ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Whether the domain is starred
                     */
                    std::string m_isMark;
                    bool m_isMarkHasBeenSet;

                    /**
                     * TTL (DNS record cache time)
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * Whether CNAME flattening is enabled
                     */
                    std::string m_cnameSpeedup;
                    bool m_cnameSpeedupHasBeenSet;

                    /**
                     * Domain remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Domain Punycode
                     */
                    std::string m_punycode;
                    bool m_punycodeHasBeenSet;

                    /**
                     * DNS status of the domain
                     */
                    std::string m_dnsStatus;
                    bool m_dnsStatusHasBeenSet;

                    /**
                     * NS list of the domain
                     */
                    std::vector<std::string> m_dnspodNsList;
                    bool m_dnspodNsListHasBeenSet;

                    /**
                     * Domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Domain level ID
                     */
                    uint64_t m_gradeLevel;
                    bool m_gradeLevelHasBeenSet;

                    /**
                     * Domain user ID
                     */
                    uint64_t m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Whether the domain is a VIP domain
                     */
                    std::string m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * Domain owner account
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Domain level description
                     */
                    std::string m_gradeTitle;
                    bool m_gradeTitleHasBeenSet;

                    /**
                     * Domain creation time
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Last update time
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * Tencent Cloud account `Uin`
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * NS list actually used by the domain
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_actualNsList;
                    bool m_actualNsListHasBeenSet;

                    /**
                     * Number of domain records
                     */
                    uint64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * Alias of the domain account owner
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ownerNick;
                    bool m_ownerNickHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAININFO_H_
