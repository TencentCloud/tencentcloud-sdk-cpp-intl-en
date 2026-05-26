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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYBACKUPDOWNLOADRESTRICTIONREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYBACKUPDOWNLOADRESTRICTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyBackupDownloadRestriction request structure.
                */
                class ModifyBackupDownloadRestrictionRequest : public AbstractModel
                {
                public:
                    ModifyBackupDownloadRestrictionRequest();
                    ~ModifyBackupDownloadRestrictionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Backup file download restriction type. valid values: NONE (unlimited, allows download from both private and public networks), INTRANET (only allows private network download), CUSTOMIZE (custom limits for download by vpc or ip). when the parameter value is CUSTOMIZE, at least one item must be filled in for vpc restriction and ip restriction.
                     * @return RestrictionType Backup file download restriction type. valid values: NONE (unlimited, allows download from both private and public networks), INTRANET (only allows private network download), CUSTOMIZE (custom limits for download by vpc or ip). when the parameter value is CUSTOMIZE, at least one item must be filled in for vpc restriction and ip restriction.
                     * 
                     */
                    std::string GetRestrictionType() const;

                    /**
                     * 设置Backup file download restriction type. valid values: NONE (unlimited, allows download from both private and public networks), INTRANET (only allows private network download), CUSTOMIZE (custom limits for download by vpc or ip). when the parameter value is CUSTOMIZE, at least one item must be filled in for vpc restriction and ip restriction.
                     * @param _restrictionType Backup file download restriction type. valid values: NONE (unlimited, allows download from both private and public networks), INTRANET (only allows private network download), CUSTOMIZE (custom limits for download by vpc or ip). when the parameter value is CUSTOMIZE, at least one item must be filled in for vpc restriction and ip restriction.
                     * 
                     */
                    void SetRestrictionType(const std::string& _restrictionType);

                    /**
                     * 判断参数 RestrictionType 是否已赋值
                     * @return RestrictionType 是否已赋值
                     * 
                     */
                    bool RestrictionTypeHasBeenSet() const;

                    /**
                     * 获取Whether VPC is allowed. Valid values: `ALLOW` (allow), `DENY` (deny).
                     * @return VpcRestrictionEffect Whether VPC is allowed. Valid values: `ALLOW` (allow), `DENY` (deny).
                     * 
                     */
                    std::string GetVpcRestrictionEffect() const;

                    /**
                     * 设置Whether VPC is allowed. Valid values: `ALLOW` (allow), `DENY` (deny).
                     * @param _vpcRestrictionEffect Whether VPC is allowed. Valid values: `ALLOW` (allow), `DENY` (deny).
                     * 
                     */
                    void SetVpcRestrictionEffect(const std::string& _vpcRestrictionEffect);

                    /**
                     * 判断参数 VpcRestrictionEffect 是否已赋值
                     * @return VpcRestrictionEffect 是否已赋值
                     * 
                     */
                    bool VpcRestrictionEffectHasBeenSet() const;

                    /**
                     * 获取Specifies the vpc id list to allow or deny downloading backup files.
**Note:** This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * @return VpcIdSet Specifies the vpc id list to allow or deny downloading backup files.
**Note:** This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * 
                     */
                    std::vector<std::string> GetVpcIdSet() const;

                    /**
                     * 设置Specifies the vpc id list to allow or deny downloading backup files.
**Note:** This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * @param _vpcIdSet Specifies the vpc id list to allow or deny downloading backup files.
**Note:** This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * 
                     */
                    void SetVpcIdSet(const std::vector<std::string>& _vpcIdSet);

                    /**
                     * 判断参数 VpcIdSet 是否已赋值
                     * @return VpcIdSet 是否已赋值
                     * 
                     */
                    bool VpcIdSetHasBeenSet() const;

                    /**
                     * 获取Whether IP is allowed. Valid values: `ALLOW` (allow), `DENY` (deny).
                     * @return IpRestrictionEffect Whether IP is allowed. Valid values: `ALLOW` (allow), `DENY` (deny).
                     * 
                     */
                    std::string GetIpRestrictionEffect() const;

                    /**
                     * 设置Whether IP is allowed. Valid values: `ALLOW` (allow), `DENY` (deny).
                     * @param _ipRestrictionEffect Whether IP is allowed. Valid values: `ALLOW` (allow), `DENY` (deny).
                     * 
                     */
                    void SetIpRestrictionEffect(const std::string& _ipRestrictionEffect);

                    /**
                     * 判断参数 IpRestrictionEffect 是否已赋值
                     * @return IpRestrictionEffect 是否已赋值
                     * 
                     */
                    bool IpRestrictionEffectHasBeenSet() const;

                    /**
                     * 获取Specifies the ip list to allow or deny downloading backup files.
**Note:** This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * @return IpSet Specifies the ip list to allow or deny downloading backup files.
**Note:** This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * 
                     */
                    std::vector<std::string> GetIpSet() const;

                    /**
                     * 设置Specifies the ip list to allow or deny downloading backup files.
**Note:** This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * @param _ipSet Specifies the ip list to allow or deny downloading backup files.
**Note:** This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     * 
                     */
                    void SetIpSet(const std::vector<std::string>& _ipSet);

                    /**
                     * 判断参数 IpSet 是否已赋值
                     * @return IpSet 是否已赋值
                     * 
                     */
                    bool IpSetHasBeenSet() const;

                private:

                    /**
                     * Backup file download restriction type. valid values: NONE (unlimited, allows download from both private and public networks), INTRANET (only allows private network download), CUSTOMIZE (custom limits for download by vpc or ip). when the parameter value is CUSTOMIZE, at least one item must be filled in for vpc restriction and ip restriction.
                     */
                    std::string m_restrictionType;
                    bool m_restrictionTypeHasBeenSet;

                    /**
                     * Whether VPC is allowed. Valid values: `ALLOW` (allow), `DENY` (deny).
                     */
                    std::string m_vpcRestrictionEffect;
                    bool m_vpcRestrictionEffectHasBeenSet;

                    /**
                     * Specifies the vpc id list to allow or deny downloading backup files.
**Note:** This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     */
                    std::vector<std::string> m_vpcIdSet;
                    bool m_vpcIdSetHasBeenSet;

                    /**
                     * Whether IP is allowed. Valid values: `ALLOW` (allow), `DENY` (deny).
                     */
                    std::string m_ipRestrictionEffect;
                    bool m_ipRestrictionEffectHasBeenSet;

                    /**
                     * Specifies the ip list to allow or deny downloading backup files.
**Note:** This input parameter performs a full replacement on all existing collections but not an incremental update. To modify it, import the expected full collections.
                     */
                    std::vector<std::string> m_ipSet;
                    bool m_ipSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYBACKUPDOWNLOADRESTRICTIONREQUEST_H_
