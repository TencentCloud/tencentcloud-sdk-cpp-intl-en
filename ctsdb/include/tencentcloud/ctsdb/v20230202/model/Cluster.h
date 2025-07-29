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

#ifndef TENCENTCLOUD_CTSDB_V20230202_MODEL_CLUSTER_H_
#define TENCENTCLOUD_CTSDB_V20230202_MODEL_CLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctsdb/v20230202/model/Network.h>
#include <tencentcloud/ctsdb/v20230202/model/Spec.h>
#include <tencentcloud/ctsdb/v20230202/model/Period.h>
#include <tencentcloud/ctsdb/v20230202/model/Tenant.h>
#include <tencentcloud/ctsdb/v20230202/model/Tag.h>


namespace TencentCloud
{
    namespace Ctsdb
    {
        namespace V20230202
        {
            namespace Model
            {
                /**
                * Instance-related information.
                */
                class Cluster : public AbstractModel
                {
                public:
                    Cluster();
                    ~Cluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User APP ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppID User APP ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置User APP ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appID User APP ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterID Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterID Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取Account ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccountID Account ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccountID() const;

                    /**
                     * 设置Account ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accountID Account ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccountID(const std::string& _accountID);

                    /**
                     * 判断参数 AccountID 是否已赋值
                     * @return AccountID 是否已赋值
                     * 
                     */
                    bool AccountIDHasBeenSet() const;

                    /**
                     * 获取Customizes the instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Customizes the instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Customizes the instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Customizes the instance name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Region.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Region.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Region.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Availability zone.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zones Availability zone.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZones() const;

                    /**
                     * 设置Availability zone.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zones Availability zone.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZones(const std::string& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Network information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Networks Network information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::vector<Network> GetNetworks() const;

                    /**
                     * 设置Network information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _networks Network information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetNetworks(const std::vector<Network>& _networks);

                    /**
                     * 判断参数 Networks 是否已赋值
                     * @return Networks 是否已赋值
                     * @deprecated
                     */
                    bool NetworksHasBeenSet() const;

                    /**
                     * 获取Instance specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Spec Instance specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    Spec GetSpec() const;

                    /**
                     * 设置Instance specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _spec Instance specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetSpec(const Spec& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * @deprecated
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取Instance status. 0: running; 1: creating; 16: adjusting configuration; 17: isolating; 18: to be terminated; 19: recovering; 20: shutting down; 21: terminating; 22: terminated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Instance status. 0: running; 1: creating; 16: adjusting configuration; 17: isolating; 18: to be terminated; 19: recovering; 20: shutting down; 21: terminating; 22: terminated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Instance status. 0: running; 1: creating; 16: adjusting configuration; 17: isolating; 18: to be terminated; 19: recovering; 20: shutting down; 21: terminating; 22: terminated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Instance status. 0: running; 1: creating; 16: adjusting configuration; 17: isolating; 18: to be terminated; 19: recovering; 20: shutting down; 21: terminating; 22: terminated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance validity period.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Period Instance validity period.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Period GetPeriod() const;

                    /**
                     * 设置Instance validity period.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _period Instance validity period.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPeriod(const Period& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedAt Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdAt Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Last modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedAt Last modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Last modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updatedAt Last modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Internal features of the product.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tenant Internal features of the product.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Tenant GetTenant() const;

                    /**
                     * 设置Internal features of the product.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tenant Internal features of the product.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTenant(const Tenant& _tenant);

                    /**
                     * 判断参数 Tenant 是否已赋值
                     * @return Tenant 是否已赋值
                     * 
                     */
                    bool TenantHasBeenSet() const;

                    /**
                     * 获取Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Security group information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Security Security group information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSecurity() const;

                    /**
                     * 设置Security group information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _security Security group information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecurity(const std::vector<std::string>& _security);

                    /**
                     * 判断参数 Security 是否已赋值
                     * @return Security 是否已赋值
                     * 
                     */
                    bool SecurityHasBeenSet() const;

                private:

                    /**
                     * User APP ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * Account ID.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accountID;
                    bool m_accountIDHasBeenSet;

                    /**
                     * Customizes the instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Region.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Availability zone.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Network information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Network> m_networks;
                    bool m_networksHasBeenSet;

                    /**
                     * Instance specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Spec m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * Instance status. 0: running; 1: creating; 16: adjusting configuration; 17: isolating; 18: to be terminated; 19: recovering; 20: shutting down; 21: terminating; 22: terminated.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance validity period.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Period m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Last modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Internal features of the product.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Tenant m_tenant;
                    bool m_tenantHasBeenSet;

                    /**
                     * Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Security group information.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_security;
                    bool m_securityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTSDB_V20230202_MODEL_CLUSTER_H_
