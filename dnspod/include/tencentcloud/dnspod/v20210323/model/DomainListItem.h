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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINLISTITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINLISTITEM_H_

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
                * Element in the domain list
                */
                class DomainListItem : public AbstractModel
                {
                public:
                    DomainListItem();
                    ~DomainListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID assigned to the domain by the system
                     * @return DomainId Unique ID assigned to the domain by the system
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置Unique ID assigned to the domain by the system
                     * @param _domainId Unique ID assigned to the domain by the system
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取Original format of the domain
                     * @return Name Original format of the domain
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Original format of the domain
                     * @param _name Original format of the domain
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
                     * 获取Domain status. Valid values: `ENABLE` (normal), `PAUSE` (suspended), `SPAM` (blocked).
                     * @return Status Domain status. Valid values: `ENABLE` (normal), `PAUSE` (suspended), `SPAM` (blocked).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Domain status. Valid values: `ENABLE` (normal), `PAUSE` (suspended), `SPAM` (blocked).
                     * @param _status Domain status. Valid values: `ENABLE` (normal), `PAUSE` (suspended), `SPAM` (blocked).
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
                     * 获取Default TTL of the default DNS record of the domain
                     * @return TTL Default TTL of the default DNS record of the domain
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置Default TTL of the default DNS record of the domain
                     * @param _tTL Default TTL of the default DNS record of the domain
                     * 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取Whether CNAME flattening is enabled. Valid values: `ENABLE` (enabled); `DISABLE` (disabled).
                     * @return CNAMESpeedup Whether CNAME flattening is enabled. Valid values: `ENABLE` (enabled); `DISABLE` (disabled).
                     * 
                     */
                    std::string GetCNAMESpeedup() const;

                    /**
                     * 设置Whether CNAME flattening is enabled. Valid values: `ENABLE` (enabled); `DISABLE` (disabled).
                     * @param _cNAMESpeedup Whether CNAME flattening is enabled. Valid values: `ENABLE` (enabled); `DISABLE` (disabled).
                     * 
                     */
                    void SetCNAMESpeedup(const std::string& _cNAMESpeedup);

                    /**
                     * 判断参数 CNAMESpeedup 是否已赋值
                     * @return CNAMESpeedup 是否已赋值
                     * 
                     */
                    bool CNAMESpeedupHasBeenSet() const;

                    /**
                     * 获取DNS configuration status. Valid values: `DNSERROR` (error), an empty string (normal).
                     * @return DNSStatus DNS configuration status. Valid values: `DNSERROR` (error), an empty string (normal).
                     * 
                     */
                    std::string GetDNSStatus() const;

                    /**
                     * 设置DNS configuration status. Valid values: `DNSERROR` (error), an empty string (normal).
                     * @param _dNSStatus DNS configuration status. Valid values: `DNSERROR` (error), an empty string (normal).
                     * 
                     */
                    void SetDNSStatus(const std::string& _dNSStatus);

                    /**
                     * 判断参数 DNSStatus 是否已赋值
                     * @return DNSStatus 是否已赋值
                     * 
                     */
                    bool DNSStatusHasBeenSet() const;

                    /**
                     * 获取Plan level code of the domain
                     * @return Grade Plan level code of the domain
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置Plan level code of the domain
                     * @param _grade Plan level code of the domain
                     * 
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     * 
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取Group ID of the domain
                     * @return GroupId Group ID of the domain
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置Group ID of the domain
                     * @param _groupId Group ID of the domain
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Whether search engine push optimization is enabled. Valid values: `YES` (yes), `NO` (no).
                     * @return SearchEnginePush Whether search engine push optimization is enabled. Valid values: `YES` (yes), `NO` (no).
                     * 
                     */
                    std::string GetSearchEnginePush() const;

                    /**
                     * 设置Whether search engine push optimization is enabled. Valid values: `YES` (yes), `NO` (no).
                     * @param _searchEnginePush Whether search engine push optimization is enabled. Valid values: `YES` (yes), `NO` (no).
                     * 
                     */
                    void SetSearchEnginePush(const std::string& _searchEnginePush);

                    /**
                     * 判断参数 SearchEnginePush 是否已赋值
                     * @return SearchEnginePush 是否已赋值
                     * 
                     */
                    bool SearchEnginePushHasBeenSet() const;

                    /**
                     * 获取Domain remarks
                     * @return Remark Domain remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Domain remarks
                     * @param _remark Domain remarks
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
                     * 获取Punycode-encoded domain format
                     * @return Punycode Punycode-encoded domain format
                     * 
                     */
                    std::string GetPunycode() const;

                    /**
                     * 设置Punycode-encoded domain format
                     * @param _punycode Punycode-encoded domain format
                     * 
                     */
                    void SetPunycode(const std::string& _punycode);

                    /**
                     * 判断参数 Punycode 是否已赋值
                     * @return Punycode 是否已赋值
                     * 
                     */
                    bool PunycodeHasBeenSet() const;

                    /**
                     * 获取Effective DNS assigned to the domain by the system
                     * @return EffectiveDNS Effective DNS assigned to the domain by the system
                     * 
                     */
                    std::vector<std::string> GetEffectiveDNS() const;

                    /**
                     * 设置Effective DNS assigned to the domain by the system
                     * @param _effectiveDNS Effective DNS assigned to the domain by the system
                     * 
                     */
                    void SetEffectiveDNS(const std::vector<std::string>& _effectiveDNS);

                    /**
                     * 判断参数 EffectiveDNS 是否已赋值
                     * @return EffectiveDNS 是否已赋值
                     * 
                     */
                    bool EffectiveDNSHasBeenSet() const;

                    /**
                     * 获取Number corresponding to the plan level of the domain
                     * @return GradeLevel Number corresponding to the plan level of the domain
                     * 
                     */
                    uint64_t GetGradeLevel() const;

                    /**
                     * 设置Number corresponding to the plan level of the domain
                     * @param _gradeLevel Number corresponding to the plan level of the domain
                     * 
                     */
                    void SetGradeLevel(const uint64_t& _gradeLevel);

                    /**
                     * 判断参数 GradeLevel 是否已赋值
                     * @return GradeLevel 是否已赋值
                     * 
                     */
                    bool GradeLevelHasBeenSet() const;

                    /**
                     * 获取Plan name
                     * @return GradeTitle Plan name
                     * 
                     */
                    std::string GetGradeTitle() const;

                    /**
                     * 设置Plan name
                     * @param _gradeTitle Plan name
                     * 
                     */
                    void SetGradeTitle(const std::string& _gradeTitle);

                    /**
                     * 判断参数 GradeTitle 是否已赋值
                     * @return GradeTitle 是否已赋值
                     * 
                     */
                    bool GradeTitleHasBeenSet() const;

                    /**
                     * 获取Whether it is a paid plan
                     * @return IsVip Whether it is a paid plan
                     * 
                     */
                    std::string GetIsVip() const;

                    /**
                     * 设置Whether it is a paid plan
                     * @param _isVip Whether it is a paid plan
                     * 
                     */
                    void SetIsVip(const std::string& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     * 
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取Activation time of the paid plan
                     * @return VipStartAt Activation time of the paid plan
                     * 
                     */
                    std::string GetVipStartAt() const;

                    /**
                     * 设置Activation time of the paid plan
                     * @param _vipStartAt Activation time of the paid plan
                     * 
                     */
                    void SetVipStartAt(const std::string& _vipStartAt);

                    /**
                     * 判断参数 VipStartAt 是否已赋值
                     * @return VipStartAt 是否已赋值
                     * 
                     */
                    bool VipStartAtHasBeenSet() const;

                    /**
                     * 获取Expiry time of the paid plan
                     * @return VipEndAt Expiry time of the paid plan
                     * 
                     */
                    std::string GetVipEndAt() const;

                    /**
                     * 设置Expiry time of the paid plan
                     * @param _vipEndAt Expiry time of the paid plan
                     * 
                     */
                    void SetVipEndAt(const std::string& _vipEndAt);

                    /**
                     * 判断参数 VipEndAt 是否已赋值
                     * @return VipEndAt 是否已赋值
                     * 
                     */
                    bool VipEndAtHasBeenSet() const;

                    /**
                     * 获取Whether VIP automatic renewal is enabled for the domain. Valid values: `YES` (yes); `NO` (no). Default value: `DEFAULT`.
                     * @return VipAutoRenew Whether VIP automatic renewal is enabled for the domain. Valid values: `YES` (yes); `NO` (no). Default value: `DEFAULT`.
                     * 
                     */
                    std::string GetVipAutoRenew() const;

                    /**
                     * 设置Whether VIP automatic renewal is enabled for the domain. Valid values: `YES` (yes); `NO` (no). Default value: `DEFAULT`.
                     * @param _vipAutoRenew Whether VIP automatic renewal is enabled for the domain. Valid values: `YES` (yes); `NO` (no). Default value: `DEFAULT`.
                     * 
                     */
                    void SetVipAutoRenew(const std::string& _vipAutoRenew);

                    /**
                     * 判断参数 VipAutoRenew 是否已赋值
                     * @return VipAutoRenew 是否已赋值
                     * 
                     */
                    bool VipAutoRenewHasBeenSet() const;

                    /**
                     * 获取Number of records under the domain
                     * @return RecordCount Number of records under the domain
                     * 
                     */
                    uint64_t GetRecordCount() const;

                    /**
                     * 设置Number of records under the domain
                     * @param _recordCount Number of records under the domain
                     * 
                     */
                    void SetRecordCount(const uint64_t& _recordCount);

                    /**
                     * 判断参数 RecordCount 是否已赋值
                     * @return RecordCount 是否已赋值
                     * 
                     */
                    bool RecordCountHasBeenSet() const;

                    /**
                     * 获取Domain adding time
                     * @return CreatedOn Domain adding time
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Domain adding time
                     * @param _createdOn Domain adding time
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取Domain update time
                     * @return UpdatedOn Domain update time
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置Domain update time
                     * @param _updatedOn Domain update time
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取Account of the domain
                     * @return Owner Account of the domain
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Account of the domain
                     * @param _owner Account of the domain
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                private:

                    /**
                     * Unique ID assigned to the domain by the system
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * Original format of the domain
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Domain status. Valid values: `ENABLE` (normal), `PAUSE` (suspended), `SPAM` (blocked).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Default TTL of the default DNS record of the domain
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * Whether CNAME flattening is enabled. Valid values: `ENABLE` (enabled); `DISABLE` (disabled).
                     */
                    std::string m_cNAMESpeedup;
                    bool m_cNAMESpeedupHasBeenSet;

                    /**
                     * DNS configuration status. Valid values: `DNSERROR` (error), an empty string (normal).
                     */
                    std::string m_dNSStatus;
                    bool m_dNSStatusHasBeenSet;

                    /**
                     * Plan level code of the domain
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * Group ID of the domain
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Whether search engine push optimization is enabled. Valid values: `YES` (yes), `NO` (no).
                     */
                    std::string m_searchEnginePush;
                    bool m_searchEnginePushHasBeenSet;

                    /**
                     * Domain remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Punycode-encoded domain format
                     */
                    std::string m_punycode;
                    bool m_punycodeHasBeenSet;

                    /**
                     * Effective DNS assigned to the domain by the system
                     */
                    std::vector<std::string> m_effectiveDNS;
                    bool m_effectiveDNSHasBeenSet;

                    /**
                     * Number corresponding to the plan level of the domain
                     */
                    uint64_t m_gradeLevel;
                    bool m_gradeLevelHasBeenSet;

                    /**
                     * Plan name
                     */
                    std::string m_gradeTitle;
                    bool m_gradeTitleHasBeenSet;

                    /**
                     * Whether it is a paid plan
                     */
                    std::string m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * Activation time of the paid plan
                     */
                    std::string m_vipStartAt;
                    bool m_vipStartAtHasBeenSet;

                    /**
                     * Expiry time of the paid plan
                     */
                    std::string m_vipEndAt;
                    bool m_vipEndAtHasBeenSet;

                    /**
                     * Whether VIP automatic renewal is enabled for the domain. Valid values: `YES` (yes); `NO` (no). Default value: `DEFAULT`.
                     */
                    std::string m_vipAutoRenew;
                    bool m_vipAutoRenewHasBeenSet;

                    /**
                     * Number of records under the domain
                     */
                    uint64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * Domain adding time
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Domain update time
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * Account of the domain
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINLISTITEM_H_
