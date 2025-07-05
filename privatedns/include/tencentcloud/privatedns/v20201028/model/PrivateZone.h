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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEZONE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/VpcInfo.h>
#include <tencentcloud/privatedns/v20201028/model/TagInfo.h>
#include <tencentcloud/privatedns/v20201028/model/AccountVpcInfoOutput.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Private domain information.
                */
                class PrivateZone : public AbstractModel
                {
                public:
                    PrivateZone();
                    ~PrivateZone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Private domain ID, which is in zone-xxxxxxxx format.
                     * @return ZoneId Private domain ID, which is in zone-xxxxxxxx format.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Private domain ID, which is in zone-xxxxxxxx format.
                     * @param _zoneId Private domain ID, which is in zone-xxxxxxxx format.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取UIN of the domain name owner.
                     * @return OwnerUin UIN of the domain name owner.
                     * 
                     */
                    int64_t GetOwnerUin() const;

                    /**
                     * 设置UIN of the domain name owner.
                     * @param _ownerUin UIN of the domain name owner.
                     * 
                     */
                    void SetOwnerUin(const int64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Private domain name.
                     * @return Domain Private domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Private domain name.
                     * @param _domain Private domain name.
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
                     * 获取Creation time
                     * @return CreatedOn Creation time
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Creation time
                     * @param _createdOn Creation time
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
                     * 获取Modification time
                     * @return UpdatedOn Modification time
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置Modification time
                     * @param _updatedOn Modification time
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
                     * 获取Number of records.
                     * @return RecordCount Number of records.
                     * 
                     */
                    int64_t GetRecordCount() const;

                    /**
                     * 设置Number of records.
                     * @param _recordCount Number of records.
                     * 
                     */
                    void SetRecordCount(const int64_t& _recordCount);

                    /**
                     * 判断参数 RecordCount 是否已赋值
                     * @return RecordCount 是否已赋值
                     * 
                     */
                    bool RecordCountHasBeenSet() const;

                    /**
                     * 获取Remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Remarks.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of bound VPCs.
                     * @return VpcSet List of bound VPCs.
                     * 
                     */
                    std::vector<VpcInfo> GetVpcSet() const;

                    /**
                     * 设置List of bound VPCs.
                     * @param _vpcSet List of bound VPCs.
                     * 
                     */
                    void SetVpcSet(const std::vector<VpcInfo>& _vpcSet);

                    /**
                     * 判断参数 VpcSet 是否已赋值
                     * @return VpcSet 是否已赋值
                     * 
                     */
                    bool VpcSetHasBeenSet() const;

                    /**
                     * 获取Status of the VPC bound with the private domain. SUSPEND: The VPC is not associated; ENABLED: the VPC has been associated.
, FAILED: the VPC fails to be associated.
                     * @return Status Status of the VPC bound with the private domain. SUSPEND: The VPC is not associated; ENABLED: the VPC has been associated.
, FAILED: the VPC fails to be associated.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the VPC bound with the private domain. SUSPEND: The VPC is not associated; ENABLED: the VPC has been associated.
, FAILED: the VPC fails to be associated.
                     * @param _status Status of the VPC bound with the private domain. SUSPEND: The VPC is not associated; ENABLED: the VPC has been associated.
, FAILED: the VPC fails to be associated.
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
                     * 获取Recursive resolution status of the domain name. ENABLED: enabled; DISABLED: disabled.
                     * @return DnsForwardStatus Recursive resolution status of the domain name. ENABLED: enabled; DISABLED: disabled.
                     * 
                     */
                    std::string GetDnsForwardStatus() const;

                    /**
                     * 设置Recursive resolution status of the domain name. ENABLED: enabled; DISABLED: disabled.
                     * @param _dnsForwardStatus Recursive resolution status of the domain name. ENABLED: enabled; DISABLED: disabled.
                     * 
                     */
                    void SetDnsForwardStatus(const std::string& _dnsForwardStatus);

                    /**
                     * 判断参数 DnsForwardStatus 是否已赋值
                     * @return DnsForwardStatus 是否已赋值
                     * 
                     */
                    bool DnsForwardStatusHasBeenSet() const;

                    /**
                     * 获取Tag key-value pair collection.
                     * @return Tags Tag key-value pair collection.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag key-value pair collection.
                     * @param _tags Tag key-value pair collection.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取List of bound VPCs of the associated account.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccountVpcSet List of bound VPCs of the associated account.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AccountVpcInfoOutput> GetAccountVpcSet() const;

                    /**
                     * 设置List of bound VPCs of the associated account.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accountVpcSet List of bound VPCs of the associated account.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccountVpcSet(const std::vector<AccountVpcInfoOutput>& _accountVpcSet);

                    /**
                     * 判断参数 AccountVpcSet 是否已赋值
                     * @return AccountVpcSet 是否已赋值
                     * 
                     */
                    bool AccountVpcSetHasBeenSet() const;

                    /**
                     * 获取Whether the TLD is a custom one.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsCustomTld Whether the TLD is a custom one.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsCustomTld() const;

                    /**
                     * 设置Whether the TLD is a custom one.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isCustomTld Whether the TLD is a custom one.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsCustomTld(const bool& _isCustomTld);

                    /**
                     * 判断参数 IsCustomTld 是否已赋值
                     * @return IsCustomTld 是否已赋值
                     * 
                     */
                    bool IsCustomTldHasBeenSet() const;

                    /**
                     * 获取CNAME acceleration status. ENABLED: enabled; DISABLED: disabled.
                     * @return CnameSpeedupStatus CNAME acceleration status. ENABLED: enabled; DISABLED: disabled.
                     * 
                     */
                    std::string GetCnameSpeedupStatus() const;

                    /**
                     * 设置CNAME acceleration status. ENABLED: enabled; DISABLED: disabled.
                     * @param _cnameSpeedupStatus CNAME acceleration status. ENABLED: enabled; DISABLED: disabled.
                     * 
                     */
                    void SetCnameSpeedupStatus(const std::string& _cnameSpeedupStatus);

                    /**
                     * 判断参数 CnameSpeedupStatus 是否已赋值
                     * @return CnameSpeedupStatus 是否已赋值
                     * 
                     */
                    bool CnameSpeedupStatusHasBeenSet() const;

                    /**
                     * 获取Forwarding rule name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ForwardRuleName Forwarding rule name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetForwardRuleName() const;

                    /**
                     * 设置Forwarding rule name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _forwardRuleName Forwarding rule name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetForwardRuleName(const std::string& _forwardRuleName);

                    /**
                     * 判断参数 ForwardRuleName 是否已赋值
                     * @return ForwardRuleName 是否已赋值
                     * 
                     */
                    bool ForwardRuleNameHasBeenSet() const;

                    /**
                     * 获取Forwarding rule type. DOWN: from cloud to off-cloud; UP: from off-cloud to cloud. Currently, only DOWN is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ForwardRuleType Forwarding rule type. DOWN: from cloud to off-cloud; UP: from off-cloud to cloud. Currently, only DOWN is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetForwardRuleType() const;

                    /**
                     * 设置Forwarding rule type. DOWN: from cloud to off-cloud; UP: from off-cloud to cloud. Currently, only DOWN is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _forwardRuleType Forwarding rule type. DOWN: from cloud to off-cloud; UP: from off-cloud to cloud. Currently, only DOWN is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetForwardRuleType(const std::string& _forwardRuleType);

                    /**
                     * 判断参数 ForwardRuleType 是否已赋值
                     * @return ForwardRuleType 是否已赋值
                     * 
                     */
                    bool ForwardRuleTypeHasBeenSet() const;

                    /**
                     * 获取Forwarding address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ForwardAddress Forwarding address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetForwardAddress() const;

                    /**
                     * 设置Forwarding address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _forwardAddress Forwarding address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetForwardAddress(const std::string& _forwardAddress);

                    /**
                     * 判断参数 ForwardAddress 是否已赋值
                     * @return ForwardAddress 是否已赋值
                     * 
                     */
                    bool ForwardAddressHasBeenSet() const;

                    /**
                     * 获取Endpoint name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndPointName Endpoint name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 设置Endpoint name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endPointName Endpoint name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndPointName(const std::string& _endPointName);

                    /**
                     * 判断参数 EndPointName 是否已赋值
                     * @return EndPointName 是否已赋值
                     * 
                     */
                    bool EndPointNameHasBeenSet() const;

                    /**
                     * 获取Deleted VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeletedVpcSet Deleted VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<VpcInfo> GetDeletedVpcSet() const;

                    /**
                     * 设置Deleted VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _deletedVpcSet Deleted VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeletedVpcSet(const std::vector<VpcInfo>& _deletedVpcSet);

                    /**
                     * 判断参数 DeletedVpcSet 是否已赋值
                     * @return DeletedVpcSet 是否已赋值
                     * 
                     */
                    bool DeletedVpcSetHasBeenSet() const;

                private:

                    /**
                     * Private domain ID, which is in zone-xxxxxxxx format.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * UIN of the domain name owner.
                     */
                    int64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Private domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * Number of records.
                     */
                    int64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * Remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * List of bound VPCs.
                     */
                    std::vector<VpcInfo> m_vpcSet;
                    bool m_vpcSetHasBeenSet;

                    /**
                     * Status of the VPC bound with the private domain. SUSPEND: The VPC is not associated; ENABLED: the VPC has been associated.
, FAILED: the VPC fails to be associated.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Recursive resolution status of the domain name. ENABLED: enabled; DISABLED: disabled.
                     */
                    std::string m_dnsForwardStatus;
                    bool m_dnsForwardStatusHasBeenSet;

                    /**
                     * Tag key-value pair collection.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * List of bound VPCs of the associated account.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AccountVpcInfoOutput> m_accountVpcSet;
                    bool m_accountVpcSetHasBeenSet;

                    /**
                     * Whether the TLD is a custom one.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isCustomTld;
                    bool m_isCustomTldHasBeenSet;

                    /**
                     * CNAME acceleration status. ENABLED: enabled; DISABLED: disabled.
                     */
                    std::string m_cnameSpeedupStatus;
                    bool m_cnameSpeedupStatusHasBeenSet;

                    /**
                     * Forwarding rule name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_forwardRuleName;
                    bool m_forwardRuleNameHasBeenSet;

                    /**
                     * Forwarding rule type. DOWN: from cloud to off-cloud; UP: from off-cloud to cloud. Currently, only DOWN is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_forwardRuleType;
                    bool m_forwardRuleTypeHasBeenSet;

                    /**
                     * Forwarding address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_forwardAddress;
                    bool m_forwardAddressHasBeenSet;

                    /**
                     * Endpoint name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * Deleted VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VpcInfo> m_deletedVpcSet;
                    bool m_deletedVpcSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEZONE_H_
