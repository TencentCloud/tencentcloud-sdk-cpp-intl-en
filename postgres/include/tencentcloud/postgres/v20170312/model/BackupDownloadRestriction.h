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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPDOWNLOADRESTRICTION_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPDOWNLOADRESTRICTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Restriction information for downloading a backup
                */
                class BackupDownloadRestriction : public AbstractModel
                {
                public:
                    BackupDownloadRestriction();
                    ~BackupDownloadRestriction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type of the network restrictions for downloading backup files. Valid values: `NONE` (backups can be downloaded over both private and public networks), `INTRANET` (backups can only be downloaded over the private network), `CUSTOMIZE` (backups can be downloaded over specified VPCs or at specified IPs).
                     * @return RestrictionType Type of the network restrictions for downloading backup files. Valid values: `NONE` (backups can be downloaded over both private and public networks), `INTRANET` (backups can only be downloaded over the private network), `CUSTOMIZE` (backups can be downloaded over specified VPCs or at specified IPs).
                     * 
                     */
                    std::string GetRestrictionType() const;

                    /**
                     * 设置Type of the network restrictions for downloading backup files. Valid values: `NONE` (backups can be downloaded over both private and public networks), `INTRANET` (backups can only be downloaded over the private network), `CUSTOMIZE` (backups can be downloaded over specified VPCs or at specified IPs).
                     * @param _restrictionType Type of the network restrictions for downloading backup files. Valid values: `NONE` (backups can be downloaded over both private and public networks), `INTRANET` (backups can only be downloaded over the private network), `CUSTOMIZE` (backups can be downloaded over specified VPCs or at specified IPs).
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
                     * 获取Whether it is allowed to download the VPC ID list of the backup files.
                     * @return VpcIdSet Whether it is allowed to download the VPC ID list of the backup files.
                     * 
                     */
                    std::vector<std::string> GetVpcIdSet() const;

                    /**
                     * 设置Whether it is allowed to download the VPC ID list of the backup files.
                     * @param _vpcIdSet Whether it is allowed to download the VPC ID list of the backup files.
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
                     * 获取Whether it is allowed to download IP list of the backup files.
                     * @return IpSet Whether it is allowed to download IP list of the backup files.
                     * 
                     */
                    std::vector<std::string> GetIpSet() const;

                    /**
                     * 设置Whether it is allowed to download IP list of the backup files.
                     * @param _ipSet Whether it is allowed to download IP list of the backup files.
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
                     * Type of the network restrictions for downloading backup files. Valid values: `NONE` (backups can be downloaded over both private and public networks), `INTRANET` (backups can only be downloaded over the private network), `CUSTOMIZE` (backups can be downloaded over specified VPCs or at specified IPs).
                     */
                    std::string m_restrictionType;
                    bool m_restrictionTypeHasBeenSet;

                    /**
                     * Whether VPC is allowed. Valid values: `ALLOW` (allow), `DENY` (deny).
                     */
                    std::string m_vpcRestrictionEffect;
                    bool m_vpcRestrictionEffectHasBeenSet;

                    /**
                     * Whether it is allowed to download the VPC ID list of the backup files.
                     */
                    std::vector<std::string> m_vpcIdSet;
                    bool m_vpcIdSetHasBeenSet;

                    /**
                     * Whether IP is allowed. Valid values: `ALLOW` (allow), `DENY` (deny).
                     */
                    std::string m_ipRestrictionEffect;
                    bool m_ipRestrictionEffectHasBeenSet;

                    /**
                     * Whether it is allowed to download IP list of the backup files.
                     */
                    std::vector<std::string> m_ipSet;
                    bool m_ipSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPDOWNLOADRESTRICTION_H_
