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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQVIPINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQVIPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcInfo.h>
#include <tencentcloud/tdmq/v20200217/model/PublicAccessRule.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRocketMQVipInstance request structure.
                */
                class CreateRocketMQVipInstanceRequest : public AbstractModel
                {
                public:
                    CreateRocketMQVipInstanceRequest();
                    ~CreateRocketMQVipInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance name
                     * @return Name Instance name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Instance name
                     * @param _name Instance name
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
                     * 获取Cluster specification. Supported specifications: 1. 	General: rocket-vip-basic-0; 2. Basic: rocket-vip-basic-1; 3. Standard: rocket-vip-basic-2; 4. Advanced I: rocket-vip-basic-3; 5. Advanced II: rocket-vip-basic-4.
                     * @return Spec Cluster specification. Supported specifications: 1. 	General: rocket-vip-basic-0; 2. Basic: rocket-vip-basic-1; 3. Standard: rocket-vip-basic-2; 4. Advanced I: rocket-vip-basic-3; 5. Advanced II: rocket-vip-basic-4.
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置Cluster specification. Supported specifications: 1. 	General: rocket-vip-basic-0; 2. Basic: rocket-vip-basic-1; 3. Standard: rocket-vip-basic-2; 4. Advanced I: rocket-vip-basic-3; 5. Advanced II: rocket-vip-basic-4.
                     * @param _spec Cluster specification. Supported specifications: 1. 	General: rocket-vip-basic-0; 2. Basic: rocket-vip-basic-1; 3. Standard: rocket-vip-basic-2; 4. Advanced I: rocket-vip-basic-3; 5. Advanced II: rocket-vip-basic-4.
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取Number of nodes. Value range: 2–20.
                     * @return NodeCount Number of nodes. Value range: 2–20.
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置Number of nodes. Value range: 2–20.
                     * @param _nodeCount Number of nodes. Value range: 2–20.
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Single-node storage space, in GB. The minimum space is 200 GB.
                     * @return StorageSize Single-node storage space, in GB. The minimum space is 200 GB.
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置Single-node storage space, in GB. The minimum space is 200 GB.
                     * @param _storageSize Single-node storage space, in GB. The minimum space is 200 GB.
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取The zone ID list for node deployment. For example, the ID of Guangzhou Zone 1 is 100001. For details, see the official website of the cloud platform.
                     * @return ZoneIds The zone ID list for node deployment. For example, the ID of Guangzhou Zone 1 is 100001. For details, see the official website of the cloud platform.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置The zone ID list for node deployment. For example, the ID of Guangzhou Zone 1 is 100001. For details, see the official website of the cloud platform.
                     * @param _zoneIds The zone ID list for node deployment. For example, the ID of Guangzhou Zone 1 is 100001. For details, see the official website of the cloud platform.
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Describes the VPC information.
                     * @return VpcInfo Describes the VPC information.
                     * 
                     */
                    VpcInfo GetVpcInfo() const;

                    /**
                     * 设置Describes the VPC information.
                     * @param _vpcInfo Describes the VPC information.
                     * 
                     */
                    void SetVpcInfo(const VpcInfo& _vpcInfo);

                    /**
                     * 判断参数 VpcInfo 是否已赋值
                     * @return VpcInfo 是否已赋值
                     * 
                     */
                    bool VpcInfoHasBeenSet() const;

                    /**
                     * 获取Purchase duration, in months.
                     * @return TimeSpan Purchase duration, in months.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Purchase duration, in months.
                     * @param _timeSpan Purchase duration, in months.
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Whether it is used for cloud migration. The default value is false.
                     * @return SupportsMigrateToCloud Whether it is used for cloud migration. The default value is false.
                     * 
                     */
                    bool GetSupportsMigrateToCloud() const;

                    /**
                     * 设置Whether it is used for cloud migration. The default value is false.
                     * @param _supportsMigrateToCloud Whether it is used for cloud migration. The default value is false.
                     * 
                     */
                    void SetSupportsMigrateToCloud(const bool& _supportsMigrateToCloud);

                    /**
                     * 判断参数 SupportsMigrateToCloud 是否已赋值
                     * @return SupportsMigrateToCloud 是否已赋值
                     * 
                     */
                    bool SupportsMigrateToCloudHasBeenSet() const;

                    /**
                     * 获取Specifies whether public network access is enabled.
                     * @return EnablePublic Specifies whether public network access is enabled.
                     * 
                     */
                    bool GetEnablePublic() const;

                    /**
                     * 设置Specifies whether public network access is enabled.
                     * @param _enablePublic Specifies whether public network access is enabled.
                     * 
                     */
                    void SetEnablePublic(const bool& _enablePublic);

                    /**
                     * 判断参数 EnablePublic 是否已赋值
                     * @return EnablePublic 是否已赋值
                     * 
                     */
                    bool EnablePublicHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth, a required field when the public network is enabled.
                     * @return Bandwidth Public network bandwidth, a required field when the public network is enabled.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Public network bandwidth, a required field when the public network is enabled.
                     * @param _bandwidth Public network bandwidth, a required field when the public network is enabled.
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Public network allowlist.
                     * @return IpRules Public network allowlist.
                     * 
                     */
                    std::vector<PublicAccessRule> GetIpRules() const;

                    /**
                     * 设置Public network allowlist.
                     * @param _ipRules Public network allowlist.
                     * 
                     */
                    void SetIpRules(const std::vector<PublicAccessRule>& _ipRules);

                    /**
                     * 判断参数 IpRules 是否已赋值
                     * @return IpRules 是否已赋值
                     * 
                     */
                    bool IpRulesHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return Tags Tag.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag.
                     * @param _tags Tag.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Instance name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Cluster specification. Supported specifications: 1. 	General: rocket-vip-basic-0; 2. Basic: rocket-vip-basic-1; 3. Standard: rocket-vip-basic-2; 4. Advanced I: rocket-vip-basic-3; 5. Advanced II: rocket-vip-basic-4.
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * Number of nodes. Value range: 2–20.
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Single-node storage space, in GB. The minimum space is 200 GB.
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * The zone ID list for node deployment. For example, the ID of Guangzhou Zone 1 is 100001. For details, see the official website of the cloud platform.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Describes the VPC information.
                     */
                    VpcInfo m_vpcInfo;
                    bool m_vpcInfoHasBeenSet;

                    /**
                     * Purchase duration, in months.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Whether it is used for cloud migration. The default value is false.
                     */
                    bool m_supportsMigrateToCloud;
                    bool m_supportsMigrateToCloudHasBeenSet;

                    /**
                     * Specifies whether public network access is enabled.
                     */
                    bool m_enablePublic;
                    bool m_enablePublicHasBeenSet;

                    /**
                     * Public network bandwidth, a required field when the public network is enabled.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Public network allowlist.
                     */
                    std::vector<PublicAccessRule> m_ipRules;
                    bool m_ipRulesHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQVIPINSTANCEREQUEST_H_
