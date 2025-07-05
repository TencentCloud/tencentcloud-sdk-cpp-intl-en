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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPOSTREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPOSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreateInstancePost request structure.
                */
                class CreateInstancePostRequest : public AbstractModel
                {
                public:
                    CreateInstancePostRequest();
                    ~CreateInstancePostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance name, which is a string of up to 64 characters. It can contain letters, digits, and hyphens (-) and must start with a letter.
                     * @return InstanceName Instance name, which is a string of up to 64 characters. It can contain letters, digits, and hyphens (-) and must start with a letter.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name, which is a string of up to 64 characters. It can contain letters, digits, and hyphens (-) and must start with a letter.
                     * @param _instanceName Instance name, which is a string of up to 64 characters. It can contain letters, digits, and hyphens (-) and must start with a letter.
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
                     * 获取Private network peak bandwidth of an instance  in MB/sec.  If you create a Standard Edition instance, pass in the corresponding peak bandwidth for the current instance specification.  If you create a Pro Edition instance, configure the peak bandwidth, partition count, and other parameters as required by Pro Edition.
                     * @return BandWidth Private network peak bandwidth of an instance  in MB/sec.  If you create a Standard Edition instance, pass in the corresponding peak bandwidth for the current instance specification.  If you create a Pro Edition instance, configure the peak bandwidth, partition count, and other parameters as required by Pro Edition.
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置Private network peak bandwidth of an instance  in MB/sec.  If you create a Standard Edition instance, pass in the corresponding peak bandwidth for the current instance specification.  If you create a Pro Edition instance, configure the peak bandwidth, partition count, and other parameters as required by Pro Edition.
                     * @param _bandWidth Private network peak bandwidth of an instance  in MB/sec.  If you create a Standard Edition instance, pass in the corresponding peak bandwidth for the current instance specification.  If you create a Pro Edition instance, configure the peak bandwidth, partition count, and other parameters as required by Pro Edition.
                     * 
                     */
                    void SetBandWidth(const int64_t& _bandWidth);

                    /**
                     * 判断参数 BandWidth 是否已赋值
                     * @return BandWidth 是否已赋值
                     * 
                     */
                    bool BandWidthHasBeenSet() const;

                    /**
                     * 获取ID of the VPC where the default access point of the created instance resides.  This parameter is required as instances cannot be created in the classic network currently.
                     * @return VpcId ID of the VPC where the default access point of the created instance resides.  This parameter is required as instances cannot be created in the classic network currently.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the VPC where the default access point of the created instance resides.  This parameter is required as instances cannot be created in the classic network currently.
                     * @param _vpcId ID of the VPC where the default access point of the created instance resides.  This parameter is required as instances cannot be created in the classic network currently.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取ID of the subnet  where the default access point of the created instance resides. 
                     * @return SubnetId ID of the subnet  where the default access point of the created instance resides. 
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置ID of the subnet  where the default access point of the created instance resides. 
                     * @param _subnetId ID of the subnet  where the default access point of the created instance resides. 
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Instance specification.  This parameter is required for a Standard Edition instance but not for a Pro Edition instance.  Valid values:  `1` (Small),  `2` (Standard),  `3` (Advanced),  `4` (Large),  `5` (Xlarge L1),  `6` (Xlarge L2),  `7` (Xlarge L3),  `8` (Xlarge L4),  
                     * @return InstanceType Instance specification.  This parameter is required for a Standard Edition instance but not for a Pro Edition instance.  Valid values:  `1` (Small),  `2` (Standard),  `3` (Advanced),  `4` (Large),  `5` (Xlarge L1),  `6` (Xlarge L2),  `7` (Xlarge L3),  `8` (Xlarge L4),  
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置Instance specification.  This parameter is required for a Standard Edition instance but not for a Pro Edition instance.  Valid values:  `1` (Small),  `2` (Standard),  `3` (Advanced),  `4` (Large),  `5` (Xlarge L1),  `6` (Xlarge L2),  `7` (Xlarge L3),  `8` (Xlarge L4),  
                     * @param _instanceType Instance specification.  This parameter is required for a Standard Edition instance but not for a Pro Edition instance.  Valid values:  `1` (Small),  `2` (Standard),  `3` (Advanced),  `4` (Large),  `5` (Xlarge L1),  `6` (Xlarge L2),  `7` (Xlarge L3),  `8` (Xlarge L4),  
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取The maximum instance log retention period in minutes by default.  If this parameter is left empty, the default retention period is 1,440 minutes (1 day) to 30 days.  If the message retention period of the topic is explicitly set, it will prevail.
                     * @return MsgRetentionTime The maximum instance log retention period in minutes by default.  If this parameter is left empty, the default retention period is 1,440 minutes (1 day) to 30 days.  If the message retention period of the topic is explicitly set, it will prevail.
                     * 
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置The maximum instance log retention period in minutes by default.  If this parameter is left empty, the default retention period is 1,440 minutes (1 day) to 30 days.  If the message retention period of the topic is explicitly set, it will prevail.
                     * @param _msgRetentionTime The maximum instance log retention period in minutes by default.  If this parameter is left empty, the default retention period is 1,440 minutes (1 day) to 30 days.  If the message retention period of the topic is explicitly set, it will prevail.
                     * 
                     */
                    void SetMsgRetentionTime(const int64_t& _msgRetentionTime);

                    /**
                     * 判断参数 MsgRetentionTime 是否已赋值
                     * @return MsgRetentionTime 是否已赋值
                     * 
                     */
                    bool MsgRetentionTimeHasBeenSet() const;

                    /**
                     * 获取Cluster ID, which can be selected when you create an instance.  You don’t need to pass in this parameter if the cluster where the instance resides is not specified.
                     * @return ClusterId Cluster ID, which can be selected when you create an instance.  You don’t need to pass in this parameter if the cluster where the instance resides is not specified.
                     * 
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置Cluster ID, which can be selected when you create an instance.  You don’t need to pass in this parameter if the cluster where the instance resides is not specified.
                     * @param _clusterId Cluster ID, which can be selected when you create an instance.  You don’t need to pass in this parameter if the cluster where the instance resides is not specified.
                     * 
                     */
                    void SetClusterId(const int64_t& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Instance version.  Valid values: `0.10.2`, `1.1.1`, `2.4.2`, and `2.8.1`.
                     * @return KafkaVersion Instance version.  Valid values: `0.10.2`, `1.1.1`, `2.4.2`, and `2.8.1`.
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置Instance version.  Valid values: `0.10.2`, `1.1.1`, `2.4.2`, and `2.8.1`.
                     * @param _kafkaVersion Instance version.  Valid values: `0.10.2`, `1.1.1`, `2.4.2`, and `2.8.1`.
                     * 
                     */
                    void SetKafkaVersion(const std::string& _kafkaVersion);

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     * 
                     */
                    bool KafkaVersionHasBeenSet() const;

                    /**
                     * 获取Instance type. Valid values: `standard` (Standard Edition),  `profession`  (Pro Edition)
                     * @return SpecificationsType Instance type. Valid values: `standard` (Standard Edition),  `profession`  (Pro Edition)
                     * 
                     */
                    std::string GetSpecificationsType() const;

                    /**
                     * 设置Instance type. Valid values: `standard` (Standard Edition),  `profession`  (Pro Edition)
                     * @param _specificationsType Instance type. Valid values: `standard` (Standard Edition),  `profession`  (Pro Edition)
                     * 
                     */
                    void SetSpecificationsType(const std::string& _specificationsType);

                    /**
                     * 判断参数 SpecificationsType 是否已赋值
                     * @return SpecificationsType 是否已赋值
                     * 
                     */
                    bool SpecificationsTypeHasBeenSet() const;

                    /**
                     * 获取Instance disk type. Valid values:  `CLOUD_BASIC` (Premium Cloud Storage),  `CLOUD_SSD` (SSD).  If this parameter is left empty, the default value `CLOUD_BASIC` will be used.
                     * @return DiskType Instance disk type. Valid values:  `CLOUD_BASIC` (Premium Cloud Storage),  `CLOUD_SSD` (SSD).  If this parameter is left empty, the default value `CLOUD_BASIC` will be used.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Instance disk type. Valid values:  `CLOUD_BASIC` (Premium Cloud Storage),  `CLOUD_SSD` (SSD).  If this parameter is left empty, the default value `CLOUD_BASIC` will be used.
                     * @param _diskType Instance disk type. Valid values:  `CLOUD_BASIC` (Premium Cloud Storage),  `CLOUD_SSD` (SSD).  If this parameter is left empty, the default value `CLOUD_BASIC` will be used.
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Instance disk size, which must meet the requirement of the instance’s specification.
                     * @return DiskSize Instance disk size, which must meet the requirement of the instance’s specification.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Instance disk size, which must meet the requirement of the instance’s specification.
                     * @param _diskSize Instance disk size, which must meet the requirement of the instance’s specification.
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取The maximum number of partitions of the instance, which must meet the requirement of the instance’s specification.
                     * @return Partition The maximum number of partitions of the instance, which must meet the requirement of the instance’s specification.
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置The maximum number of partitions of the instance, which must meet the requirement of the instance’s specification.
                     * @param _partition The maximum number of partitions of the instance, which must meet the requirement of the instance’s specification.
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取The maximum number of topics of the instance, which must meet the requirement of the instance’s specification.
                     * @return TopicNum The maximum number of topics of the instance, which must meet the requirement of the instance’s specification.
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置The maximum number of topics of the instance, which must meet the requirement of the instance’s specification.
                     * @param _topicNum The maximum number of topics of the instance, which must meet the requirement of the instance’s specification.
                     * 
                     */
                    void SetTopicNum(const int64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取AZ of the instance.  When a multi-AZ instance is created, the value of this parameter is the AZ ID of the subnet where the instance’s default access point resides.
                     * @return ZoneId AZ of the instance.  When a multi-AZ instance is created, the value of this parameter is the AZ ID of the subnet where the instance’s default access point resides.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ of the instance.  When a multi-AZ instance is created, the value of this parameter is the AZ ID of the subnet where the instance’s default access point resides.
                     * @param _zoneId AZ of the instance.  When a multi-AZ instance is created, the value of this parameter is the AZ ID of the subnet where the instance’s default access point resides.
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Whether the current instance is a multi-AZ instance
                     * @return MultiZoneFlag Whether the current instance is a multi-AZ instance
                     * 
                     */
                    bool GetMultiZoneFlag() const;

                    /**
                     * 设置Whether the current instance is a multi-AZ instance
                     * @param _multiZoneFlag Whether the current instance is a multi-AZ instance
                     * 
                     */
                    void SetMultiZoneFlag(const bool& _multiZoneFlag);

                    /**
                     * 判断参数 MultiZoneFlag 是否已赋值
                     * @return MultiZoneFlag 是否已赋值
                     * 
                     */
                    bool MultiZoneFlagHasBeenSet() const;

                    /**
                     * 获取This parameter indicates the list of AZ IDs when the instance is deployed in multiple AZs.  Note that `ZoneId` must be included in the array of this parameter.
                     * @return ZoneIds This parameter indicates the list of AZ IDs when the instance is deployed in multiple AZs.  Note that `ZoneId` must be included in the array of this parameter.
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置This parameter indicates the list of AZ IDs when the instance is deployed in multiple AZs.  Note that `ZoneId` must be included in the array of this parameter.
                     * @param _zoneIds This parameter indicates the list of AZ IDs when the instance is deployed in multiple AZs.  Note that `ZoneId` must be included in the array of this parameter.
                     * 
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取The number of purchased instances.  Default value: `1`. This parameter is optional.  If it is passed in, multiple instances will be created, with their names being `instanceName` plus different suffixes.
                     * @return InstanceNum The number of purchased instances.  Default value: `1`. This parameter is optional.  If it is passed in, multiple instances will be created, with their names being `instanceName` plus different suffixes.
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置The number of purchased instances.  Default value: `1`. This parameter is optional.  If it is passed in, multiple instances will be created, with their names being `instanceName` plus different suffixes.
                     * @param _instanceNum The number of purchased instances.  Default value: `1`. This parameter is optional.  If it is passed in, multiple instances will be created, with their names being `instanceName` plus different suffixes.
                     * 
                     */
                    void SetInstanceNum(const int64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth in Mbps.  The 3 Mbps of free bandwidth is not included here by default.  For example, if you need 3 Mbps of public network bandwidth, pass in `0`; if you need 6 Mbps, pass in `3`. The value must be an integer multiple of 3.
                     * @return PublicNetworkMonthly Public network bandwidth in Mbps.  The 3 Mbps of free bandwidth is not included here by default.  For example, if you need 3 Mbps of public network bandwidth, pass in `0`; if you need 6 Mbps, pass in `3`. The value must be an integer multiple of 3.
                     * 
                     */
                    int64_t GetPublicNetworkMonthly() const;

                    /**
                     * 设置Public network bandwidth in Mbps.  The 3 Mbps of free bandwidth is not included here by default.  For example, if you need 3 Mbps of public network bandwidth, pass in `0`; if you need 6 Mbps, pass in `3`. The value must be an integer multiple of 3.
                     * @param _publicNetworkMonthly Public network bandwidth in Mbps.  The 3 Mbps of free bandwidth is not included here by default.  For example, if you need 3 Mbps of public network bandwidth, pass in `0`; if you need 6 Mbps, pass in `3`. The value must be an integer multiple of 3.
                     * 
                     */
                    void SetPublicNetworkMonthly(const int64_t& _publicNetworkMonthly);

                    /**
                     * 判断参数 PublicNetworkMonthly 是否已赋值
                     * @return PublicNetworkMonthly 是否已赋值
                     * 
                     */
                    bool PublicNetworkMonthlyHasBeenSet() const;

                private:

                    /**
                     * Instance name, which is a string of up to 64 characters. It can contain letters, digits, and hyphens (-) and must start with a letter.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Private network peak bandwidth of an instance  in MB/sec.  If you create a Standard Edition instance, pass in the corresponding peak bandwidth for the current instance specification.  If you create a Pro Edition instance, configure the peak bandwidth, partition count, and other parameters as required by Pro Edition.
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * ID of the VPC where the default access point of the created instance resides.  This parameter is required as instances cannot be created in the classic network currently.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * ID of the subnet  where the default access point of the created instance resides. 
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance specification.  This parameter is required for a Standard Edition instance but not for a Pro Edition instance.  Valid values:  `1` (Small),  `2` (Standard),  `3` (Advanced),  `4` (Large),  `5` (Xlarge L1),  `6` (Xlarge L2),  `7` (Xlarge L3),  `8` (Xlarge L4),  
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * The maximum instance log retention period in minutes by default.  If this parameter is left empty, the default retention period is 1,440 minutes (1 day) to 30 days.  If the message retention period of the topic is explicitly set, it will prevail.
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * Cluster ID, which can be selected when you create an instance.  You don’t need to pass in this parameter if the cluster where the instance resides is not specified.
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Instance version.  Valid values: `0.10.2`, `1.1.1`, `2.4.2`, and `2.8.1`.
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * Instance type. Valid values: `standard` (Standard Edition),  `profession`  (Pro Edition)
                     */
                    std::string m_specificationsType;
                    bool m_specificationsTypeHasBeenSet;

                    /**
                     * Instance disk type. Valid values:  `CLOUD_BASIC` (Premium Cloud Storage),  `CLOUD_SSD` (SSD).  If this parameter is left empty, the default value `CLOUD_BASIC` will be used.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Instance disk size, which must meet the requirement of the instance’s specification.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * The maximum number of partitions of the instance, which must meet the requirement of the instance’s specification.
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * The maximum number of topics of the instance, which must meet the requirement of the instance’s specification.
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * AZ of the instance.  When a multi-AZ instance is created, the value of this parameter is the AZ ID of the subnet where the instance’s default access point resides.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Whether the current instance is a multi-AZ instance
                     */
                    bool m_multiZoneFlag;
                    bool m_multiZoneFlagHasBeenSet;

                    /**
                     * This parameter indicates the list of AZ IDs when the instance is deployed in multiple AZs.  Note that `ZoneId` must be included in the array of this parameter.
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * The number of purchased instances.  Default value: `1`. This parameter is optional.  If it is passed in, multiple instances will be created, with their names being `instanceName` plus different suffixes.
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * Public network bandwidth in Mbps.  The 3 Mbps of free bandwidth is not included here by default.  For example, if you need 3 Mbps of public network bandwidth, pass in `0`; if you need 6 Mbps, pass in `3`. The value must be an integer multiple of 3.
                     */
                    int64_t m_publicNetworkMonthly;
                    bool m_publicNetworkMonthlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPOSTREQUEST_H_
