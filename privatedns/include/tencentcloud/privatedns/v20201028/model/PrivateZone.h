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
                * Private domain information
                */
                class PrivateZone : public AbstractModel
                {
                public:
                    PrivateZone();
                    ~PrivateZone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Private domain ID: zone-xxxxxxxx
                     * @return ZoneId Private domain ID: zone-xxxxxxxx
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Private domain ID: zone-xxxxxxxx
                     * @param _zoneId Private domain ID: zone-xxxxxxxx
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
                     * 获取Domain name owner UIN
                     * @return OwnerUin Domain name owner UIN
                     * 
                     */
                    int64_t GetOwnerUin() const;

                    /**
                     * 设置Domain name owner UIN
                     * @param _ownerUin Domain name owner UIN
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
                     * 获取Private domain
                     * @return Domain Private domain
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Private domain
                     * @param _domain Private domain
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
                     * 获取Number of results
                     * @return RecordCount Number of results
                     * 
                     */
                    int64_t GetRecordCount() const;

                    /**
                     * 设置Number of results
                     * @param _recordCount Number of results
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
                     * 获取Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _remark Remarks
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of bound VPCs
                     * @return VpcSet List of bound VPCs
                     * 
                     */
                    std::vector<VpcInfo> GetVpcSet() const;

                    /**
                     * 设置List of bound VPCs
                     * @param _vpcSet List of bound VPCs
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
                     * 获取Private domain status. Valid values: ENABLED (DNS enabled); SUSPEND (DNS paused); FROZEN (locked)
                     * @return Status Private domain status. Valid values: ENABLED (DNS enabled); SUSPEND (DNS paused); FROZEN (locked)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Private domain status. Valid values: ENABLED (DNS enabled); SUSPEND (DNS paused); FROZEN (locked)
                     * @param _status Private domain status. Valid values: ENABLED (DNS enabled); SUSPEND (DNS paused); FROZEN (locked)
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
                     * 获取Subdomain recursive DNS status. Valid values: ENABLED, DISABLED
                     * @return DnsForwardStatus Subdomain recursive DNS status. Valid values: ENABLED, DISABLED
                     * 
                     */
                    std::string GetDnsForwardStatus() const;

                    /**
                     * 设置Subdomain recursive DNS status. Valid values: ENABLED, DISABLED
                     * @param _dnsForwardStatus Subdomain recursive DNS status. Valid values: ENABLED, DISABLED
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
                     * 获取Set of tag key-value pairs
                     * @return Tags Set of tag key-value pairs
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Set of tag key-value pairs
                     * @param _tags Set of tag key-value pairs
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
                     * 获取List of authorized accounts' VPCs associated with the private domain
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AccountVpcSet List of authorized accounts' VPCs associated with the private domain
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AccountVpcInfoOutput> GetAccountVpcSet() const;

                    /**
                     * 设置List of authorized accounts' VPCs associated with the private domain
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _accountVpcSet List of authorized accounts' VPCs associated with the private domain
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccountVpcSet(const std::vector<AccountVpcInfoOutput>& _accountVpcSet);

                    /**
                     * 判断参数 AccountVpcSet 是否已赋值
                     * @return AccountVpcSet 是否已赋值
                     * 
                     */
                    bool AccountVpcSetHasBeenSet() const;

                private:

                    /**
                     * Private domain ID: zone-xxxxxxxx
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Domain name owner UIN
                     */
                    int64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Private domain
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
                     * Number of results
                     */
                    int64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * List of bound VPCs
                     */
                    std::vector<VpcInfo> m_vpcSet;
                    bool m_vpcSetHasBeenSet;

                    /**
                     * Private domain status. Valid values: ENABLED (DNS enabled); SUSPEND (DNS paused); FROZEN (locked)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Subdomain recursive DNS status. Valid values: ENABLED, DISABLED
                     */
                    std::string m_dnsForwardStatus;
                    bool m_dnsForwardStatusHasBeenSet;

                    /**
                     * Set of tag key-value pairs
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * List of authorized accounts' VPCs associated with the private domain
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<AccountVpcInfoOutput> m_accountVpcSet;
                    bool m_accountVpcSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEZONE_H_
