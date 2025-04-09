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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEPRIVATEZONEREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEPRIVATEZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/TagInfo.h>
#include <tencentcloud/privatedns/v20201028/model/VpcInfo.h>
#include <tencentcloud/privatedns/v20201028/model/AccountVpcInfo.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreatePrivateZone request structure.
                */
                class CreatePrivateZoneRequest : public AbstractModel
                {
                public:
                    CreatePrivateZoneRequest();
                    ~CreatePrivateZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name, which must be in the format of standard TLD
                     * @return Domain Domain name, which must be in the format of standard TLD
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name, which must be in the format of standard TLD
                     * @param _domain Domain name, which must be in the format of standard TLD
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
                     * 获取Tags the private domain when it is created
                     * @return TagSet Tags the private domain when it is created
                     * 
                     */
                    std::vector<TagInfo> GetTagSet() const;

                    /**
                     * 设置Tags the private domain when it is created
                     * @param _tagSet Tags the private domain when it is created
                     * 
                     */
                    void SetTagSet(const std::vector<TagInfo>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Associates the private domain to a VPC when it is created
                     * @return VpcSet Associates the private domain to a VPC when it is created
                     * 
                     */
                    std::vector<VpcInfo> GetVpcSet() const;

                    /**
                     * 设置Associates the private domain to a VPC when it is created
                     * @param _vpcSet Associates the private domain to a VPC when it is created
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
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
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
                     * 获取Whether to enable subdomain recursive DNS. Valid values: `ENABLED` (default) and `DISABLED`.
                     * @return DnsForwardStatus Whether to enable subdomain recursive DNS. Valid values: `ENABLED` (default) and `DISABLED`.
                     * 
                     */
                    std::string GetDnsForwardStatus() const;

                    /**
                     * 设置Whether to enable subdomain recursive DNS. Valid values: `ENABLED` (default) and `DISABLED`.
                     * @param _dnsForwardStatus Whether to enable subdomain recursive DNS. Valid values: `ENABLED` (default) and `DISABLED`.
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
                     * 获取Associates the private domain to a VPC when it is created
                     * @return Vpcs Associates the private domain to a VPC when it is created
                     * @deprecated
                     */
                    std::vector<VpcInfo> GetVpcs() const;

                    /**
                     * 设置Associates the private domain to a VPC when it is created
                     * @param _vpcs Associates the private domain to a VPC when it is created
                     * @deprecated
                     */
                    void SetVpcs(const std::vector<VpcInfo>& _vpcs);

                    /**
                     * 判断参数 Vpcs 是否已赋值
                     * @return Vpcs 是否已赋值
                     * @deprecated
                     */
                    bool VpcsHasBeenSet() const;

                    /**
                     * 获取List of authorized accounts' VPCs to associate with the private domain
                     * @return AccountVpcSet List of authorized accounts' VPCs to associate with the private domain
                     * 
                     */
                    std::vector<AccountVpcInfo> GetAccountVpcSet() const;

                    /**
                     * 设置List of authorized accounts' VPCs to associate with the private domain
                     * @param _accountVpcSet List of authorized accounts' VPCs to associate with the private domain
                     * 
                     */
                    void SetAccountVpcSet(const std::vector<AccountVpcInfo>& _accountVpcSet);

                    /**
                     * 判断参数 AccountVpcSet 是否已赋值
                     * @return AccountVpcSet 是否已赋值
                     * 
                     */
                    bool AccountVpcSetHasBeenSet() const;

                    /**
                     * 获取Whether to enable CNAME flattening. Valid values: `ENABLED` (default) and `DISABLED`.
                     * @return CnameSpeedupStatus Whether to enable CNAME flattening. Valid values: `ENABLED` (default) and `DISABLED`.
                     * 
                     */
                    std::string GetCnameSpeedupStatus() const;

                    /**
                     * 设置Whether to enable CNAME flattening. Valid values: `ENABLED` (default) and `DISABLED`.
                     * @param _cnameSpeedupStatus Whether to enable CNAME flattening. Valid values: `ENABLED` (default) and `DISABLED`.
                     * 
                     */
                    void SetCnameSpeedupStatus(const std::string& _cnameSpeedupStatus);

                    /**
                     * 判断参数 CnameSpeedupStatus 是否已赋值
                     * @return CnameSpeedupStatus 是否已赋值
                     * 
                     */
                    bool CnameSpeedupStatusHasBeenSet() const;

                private:

                    /**
                     * Domain name, which must be in the format of standard TLD
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Tags the private domain when it is created
                     */
                    std::vector<TagInfo> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Associates the private domain to a VPC when it is created
                     */
                    std::vector<VpcInfo> m_vpcSet;
                    bool m_vpcSetHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether to enable subdomain recursive DNS. Valid values: `ENABLED` (default) and `DISABLED`.
                     */
                    std::string m_dnsForwardStatus;
                    bool m_dnsForwardStatusHasBeenSet;

                    /**
                     * Associates the private domain to a VPC when it is created
                     */
                    std::vector<VpcInfo> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * List of authorized accounts' VPCs to associate with the private domain
                     */
                    std::vector<AccountVpcInfo> m_accountVpcSet;
                    bool m_accountVpcSetHasBeenSet;

                    /**
                     * Whether to enable CNAME flattening. Valid values: `ENABLED` (default) and `DISABLED`.
                     */
                    std::string m_cnameSpeedupStatus;
                    bool m_cnameSpeedupStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEPRIVATEZONEREQUEST_H_
