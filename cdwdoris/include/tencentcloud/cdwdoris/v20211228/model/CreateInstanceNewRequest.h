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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEINSTANCENEWREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEINSTANCENEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateInstanceSpec.h>
#include <tencentcloud/cdwdoris/v20211228/model/ChargeProperties.h>
#include <tencentcloud/cdwdoris/v20211228/model/Tag.h>
#include <tencentcloud/cdwdoris/v20211228/model/NetworkInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * CreateInstanceNew request structure.
                */
                class CreateInstanceNewRequest : public AbstractModel
                {
                public:
                    CreateInstanceNewRequest();
                    ~CreateInstanceNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Availability zone
                     * @return Zone Availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
                     * @param _zone Availability zone
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取FE specifications
                     * @return FeSpec FE specifications
                     * 
                     */
                    CreateInstanceSpec GetFeSpec() const;

                    /**
                     * 设置FE specifications
                     * @param _feSpec FE specifications
                     * 
                     */
                    void SetFeSpec(const CreateInstanceSpec& _feSpec);

                    /**
                     * 判断参数 FeSpec 是否已赋值
                     * @return FeSpec 是否已赋值
                     * 
                     */
                    bool FeSpecHasBeenSet() const;

                    /**
                     * 获取BE specifications.
                     * @return BeSpec BE specifications.
                     * 
                     */
                    CreateInstanceSpec GetBeSpec() const;

                    /**
                     * 设置BE specifications.
                     * @param _beSpec BE specifications.
                     * 
                     */
                    void SetBeSpec(const CreateInstanceSpec& _beSpec);

                    /**
                     * 判断参数 BeSpec 是否已赋值
                     * @return BeSpec 是否已赋值
                     * 
                     */
                    bool BeSpecHasBeenSet() const;

                    /**
                     * 获取Whether it is highly available.
                     * @return HaFlag Whether it is highly available.
                     * 
                     */
                    bool GetHaFlag() const;

                    /**
                     * 设置Whether it is highly available.
                     * @param _haFlag Whether it is highly available.
                     * 
                     */
                    void SetHaFlag(const bool& _haFlag);

                    /**
                     * 判断参数 HaFlag 是否已赋值
                     * @return HaFlag 是否已赋值
                     * 
                     */
                    bool HaFlagHasBeenSet() const;

                    /**
                     * 获取User VPCID
                     * @return UserVPCId User VPCID
                     * 
                     */
                    std::string GetUserVPCId() const;

                    /**
                     * 设置User VPCID
                     * @param _userVPCId User VPCID
                     * 
                     */
                    void SetUserVPCId(const std::string& _userVPCId);

                    /**
                     * 判断参数 UserVPCId 是否已赋值
                     * @return UserVPCId 是否已赋值
                     * 
                     */
                    bool UserVPCIdHasBeenSet() const;

                    /**
                     * 获取User subnet ID
                     * @return UserSubnetId User subnet ID
                     * 
                     */
                    std::string GetUserSubnetId() const;

                    /**
                     * 设置User subnet ID
                     * @param _userSubnetId User subnet ID
                     * 
                     */
                    void SetUserSubnetId(const std::string& _userSubnetId);

                    /**
                     * 判断参数 UserSubnetId 是否已赋值
                     * @return UserSubnetId 是否已赋值
                     * 
                     */
                    bool UserSubnetIdHasBeenSet() const;

                    /**
                     * 获取Product version number
                     * @return ProductVersion Product version number
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置Product version number
                     * @param _productVersion Product version number
                     * 
                     */
                    void SetProductVersion(const std::string& _productVersion);

                    /**
                     * 判断参数 ProductVersion 是否已赋值
                     * @return ProductVersion 是否已赋值
                     * 
                     */
                    bool ProductVersionHasBeenSet() const;

                    /**
                     * 获取Payment type
                     * @return ChargeProperties Payment type
                     * 
                     */
                    ChargeProperties GetChargeProperties() const;

                    /**
                     * 设置Payment type
                     * @param _chargeProperties Payment type
                     * 
                     */
                    void SetChargeProperties(const ChargeProperties& _chargeProperties);

                    /**
                     * 判断参数 ChargeProperties 是否已赋值
                     * @return ChargeProperties 是否已赋值
                     * 
                     */
                    bool ChargePropertiesHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Database password
                     * @return DorisUserPwd Database password
                     * 
                     */
                    std::string GetDorisUserPwd() const;

                    /**
                     * 设置Database password
                     * @param _dorisUserPwd Database password
                     * 
                     */
                    void SetDorisUserPwd(const std::string& _dorisUserPwd);

                    /**
                     * 判断参数 DorisUserPwd 是否已赋值
                     * @return DorisUserPwd 是否已赋值
                     * 
                     */
                    bool DorisUserPwdHasBeenSet() const;

                    /**
                     * 获取Tag list
                     * @return Tags Tag list
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list
                     * @param _tags Tag list
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取High availability type:
0 indicates non-high availability (only one FE, FeSpec.CreateInstanceSpec.Count=1),
1 indicates read high availability (at least 3 FEs must be deployed, FeSpec.CreateInstanceSpec.Count>=3, and it must be an odd number),
2 indicates read and write high availability (at least 5 FEs must be deployed, FeSpec.CreateInstanceSpec.Count>=5, and it must be an odd number).
                     * @return HaType High availability type:
0 indicates non-high availability (only one FE, FeSpec.CreateInstanceSpec.Count=1),
1 indicates read high availability (at least 3 FEs must be deployed, FeSpec.CreateInstanceSpec.Count>=3, and it must be an odd number),
2 indicates read and write high availability (at least 5 FEs must be deployed, FeSpec.CreateInstanceSpec.Count>=5, and it must be an odd number).
                     * 
                     */
                    int64_t GetHaType() const;

                    /**
                     * 设置High availability type:
0 indicates non-high availability (only one FE, FeSpec.CreateInstanceSpec.Count=1),
1 indicates read high availability (at least 3 FEs must be deployed, FeSpec.CreateInstanceSpec.Count>=3, and it must be an odd number),
2 indicates read and write high availability (at least 5 FEs must be deployed, FeSpec.CreateInstanceSpec.Count>=5, and it must be an odd number).
                     * @param _haType High availability type:
0 indicates non-high availability (only one FE, FeSpec.CreateInstanceSpec.Count=1),
1 indicates read high availability (at least 3 FEs must be deployed, FeSpec.CreateInstanceSpec.Count>=3, and it must be an odd number),
2 indicates read and write high availability (at least 5 FEs must be deployed, FeSpec.CreateInstanceSpec.Count>=5, and it must be an odd number).
                     * 
                     */
                    void SetHaType(const int64_t& _haType);

                    /**
                     * 判断参数 HaType 是否已赋值
                     * @return HaType 是否已赋值
                     * 
                     */
                    bool HaTypeHasBeenSet() const;

                    /**
                     * 获取Whether the table name is case sensitive, 0 refers to sensitive, 1 refers to insensitive, compared in lowercase; 2 refers to insensitive, and the table name is changed to lowercase for storage.
                     * @return CaseSensitive Whether the table name is case sensitive, 0 refers to sensitive, 1 refers to insensitive, compared in lowercase; 2 refers to insensitive, and the table name is changed to lowercase for storage.
                     * 
                     */
                    int64_t GetCaseSensitive() const;

                    /**
                     * 设置Whether the table name is case sensitive, 0 refers to sensitive, 1 refers to insensitive, compared in lowercase; 2 refers to insensitive, and the table name is changed to lowercase for storage.
                     * @param _caseSensitive Whether the table name is case sensitive, 0 refers to sensitive, 1 refers to insensitive, compared in lowercase; 2 refers to insensitive, and the table name is changed to lowercase for storage.
                     * 
                     */
                    void SetCaseSensitive(const int64_t& _caseSensitive);

                    /**
                     * 判断参数 CaseSensitive 是否已赋值
                     * @return CaseSensitive 是否已赋值
                     * 
                     */
                    bool CaseSensitiveHasBeenSet() const;

                    /**
                     * 获取Whether to enable multi-availability zone.
                     * @return EnableMultiZones Whether to enable multi-availability zone.
                     * 
                     */
                    bool GetEnableMultiZones() const;

                    /**
                     * 设置Whether to enable multi-availability zone.
                     * @param _enableMultiZones Whether to enable multi-availability zone.
                     * 
                     */
                    void SetEnableMultiZones(const bool& _enableMultiZones);

                    /**
                     * 判断参数 EnableMultiZones 是否已赋值
                     * @return EnableMultiZones 是否已赋值
                     * 
                     */
                    bool EnableMultiZonesHasBeenSet() const;

                    /**
                     * 获取After the Multi-AZ is enabled, all user's Availability Zones and Subnets information are shown.
                     * @return UserMultiZoneInfos After the Multi-AZ is enabled, all user's Availability Zones and Subnets information are shown.
                     * 
                     */
                    NetworkInfo GetUserMultiZoneInfos() const;

                    /**
                     * 设置After the Multi-AZ is enabled, all user's Availability Zones and Subnets information are shown.
                     * @param _userMultiZoneInfos After the Multi-AZ is enabled, all user's Availability Zones and Subnets information are shown.
                     * 
                     */
                    void SetUserMultiZoneInfos(const NetworkInfo& _userMultiZoneInfos);

                    /**
                     * 判断参数 UserMultiZoneInfos 是否已赋值
                     * @return UserMultiZoneInfos 是否已赋值
                     * 
                     */
                    bool UserMultiZoneInfosHasBeenSet() const;

                private:

                    /**
                     * Availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * FE specifications
                     */
                    CreateInstanceSpec m_feSpec;
                    bool m_feSpecHasBeenSet;

                    /**
                     * BE specifications.
                     */
                    CreateInstanceSpec m_beSpec;
                    bool m_beSpecHasBeenSet;

                    /**
                     * Whether it is highly available.
                     */
                    bool m_haFlag;
                    bool m_haFlagHasBeenSet;

                    /**
                     * User VPCID
                     */
                    std::string m_userVPCId;
                    bool m_userVPCIdHasBeenSet;

                    /**
                     * User subnet ID
                     */
                    std::string m_userSubnetId;
                    bool m_userSubnetIdHasBeenSet;

                    /**
                     * Product version number
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * Payment type
                     */
                    ChargeProperties m_chargeProperties;
                    bool m_chargePropertiesHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Database password
                     */
                    std::string m_dorisUserPwd;
                    bool m_dorisUserPwdHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * High availability type:
0 indicates non-high availability (only one FE, FeSpec.CreateInstanceSpec.Count=1),
1 indicates read high availability (at least 3 FEs must be deployed, FeSpec.CreateInstanceSpec.Count>=3, and it must be an odd number),
2 indicates read and write high availability (at least 5 FEs must be deployed, FeSpec.CreateInstanceSpec.Count>=5, and it must be an odd number).
                     */
                    int64_t m_haType;
                    bool m_haTypeHasBeenSet;

                    /**
                     * Whether the table name is case sensitive, 0 refers to sensitive, 1 refers to insensitive, compared in lowercase; 2 refers to insensitive, and the table name is changed to lowercase for storage.
                     */
                    int64_t m_caseSensitive;
                    bool m_caseSensitiveHasBeenSet;

                    /**
                     * Whether to enable multi-availability zone.
                     */
                    bool m_enableMultiZones;
                    bool m_enableMultiZonesHasBeenSet;

                    /**
                     * After the Multi-AZ is enabled, all user's Availability Zones and Subnets information are shown.
                     */
                    NetworkInfo m_userMultiZoneInfos;
                    bool m_userMultiZoneInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEINSTANCENEWREQUEST_H_
