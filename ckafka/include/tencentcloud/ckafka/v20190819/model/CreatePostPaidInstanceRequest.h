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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEPOSTPAIDINSTANCEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEPOSTPAIDINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreatePostPaidInstance request structure.
                */
                class CreatePostPaidInstanceRequest : public AbstractModel
                {
                public:
                    CreatePostPaidInstanceRequest();
                    ~CreatePostPaidInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC Id, obtain through the API [DescribeVpcs](https://www.tencentcloud.comom/document/product/215/15778?from_cn_redirect=1).
                     * @return VpcId VPC Id, obtain through the API [DescribeVpcs](https://www.tencentcloud.comom/document/product/215/15778?from_cn_redirect=1).
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC Id, obtain through the API [DescribeVpcs](https://www.tencentcloud.comom/document/product/215/15778?from_cn_redirect=1).
                     * @param _vpcId VPC Id, obtain through the API [DescribeVpcs](https://www.tencentcloud.comom/document/product/215/15778?from_cn_redirect=1).
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
                     * 获取Subnet Id. can be obtained through the [DescribeSubnets](https://www.tencentcloud.comom/document/product/215/15784?from_cn_redirect=1) api.
                     * @return SubnetId Subnet Id. can be obtained through the [DescribeSubnets](https://www.tencentcloud.comom/document/product/215/15784?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet Id. can be obtained through the [DescribeSubnets](https://www.tencentcloud.comom/document/product/215/15784?from_cn_redirect=1) api.
                     * @param _subnetId Subnet Id. can be obtained through the [DescribeSubnets](https://www.tencentcloud.comom/document/product/215/15784?from_cn_redirect=1) api.
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
                     * 获取Specifies the cluster instance name of ckafka, an arbitrary character with length not exceeding 128.
                     * @return InstanceName Specifies the cluster instance name of ckafka, an arbitrary character with length not exceeding 128.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Specifies the cluster instance name of ckafka, an arbitrary character with length not exceeding 128.
                     * @param _instanceName Specifies the cluster instance name of ckafka, an arbitrary character with length not exceeding 128.
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
                     * 获取Specifies the standard edition instance specification for the international site. currently only the international site standard edition uses the current field to distinguish specifications, while the domestic site standard edition distinguishes specifications by peak bandwidth. fill in 1 for all instances except the international site standard edition. for international site standard edition instances: [entry-level (general)] fill 1; [standard type (standard)] fill 2; [advanced] fill 3; [capacity type (capacity)] fill 4; [advanced type 1 (specialized-1)] fill 5; [advanced type 2 (specialized-2)] fill 6; [advanced type 3 (specialized-3)] fill 7; [advanced type 4 (specialized-4)] fill 8.
                     * @return InstanceType Specifies the standard edition instance specification for the international site. currently only the international site standard edition uses the current field to distinguish specifications, while the domestic site standard edition distinguishes specifications by peak bandwidth. fill in 1 for all instances except the international site standard edition. for international site standard edition instances: [entry-level (general)] fill 1; [standard type (standard)] fill 2; [advanced] fill 3; [capacity type (capacity)] fill 4; [advanced type 1 (specialized-1)] fill 5; [advanced type 2 (specialized-2)] fill 6; [advanced type 3 (specialized-3)] fill 7; [advanced type 4 (specialized-4)] fill 8.
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置Specifies the standard edition instance specification for the international site. currently only the international site standard edition uses the current field to distinguish specifications, while the domestic site standard edition distinguishes specifications by peak bandwidth. fill in 1 for all instances except the international site standard edition. for international site standard edition instances: [entry-level (general)] fill 1; [standard type (standard)] fill 2; [advanced] fill 3; [capacity type (capacity)] fill 4; [advanced type 1 (specialized-1)] fill 5; [advanced type 2 (specialized-2)] fill 6; [advanced type 3 (specialized-3)] fill 7; [advanced type 4 (specialized-4)] fill 8.
                     * @param _instanceType Specifies the standard edition instance specification for the international site. currently only the international site standard edition uses the current field to distinguish specifications, while the domestic site standard edition distinguishes specifications by peak bandwidth. fill in 1 for all instances except the international site standard edition. for international site standard edition instances: [entry-level (general)] fill 1; [standard type (standard)] fill 2; [advanced] fill 3; [capacity type (capacity)] fill 4; [advanced type 1 (specialized-1)] fill 5; [advanced type 2 (specialized-2)] fill 6; [advanced type 3 (specialized-3)] fill 7; [advanced type 4 (specialized-4)] fill 8.
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
                     * 获取Instance version. currently supports "2.4.1", "2.4.2", "2.8.1", "3.2.3". default value "2.4.1". "2.4.1" and "2.4.2" belong to the same version. any one can be passed.
                     * @return KafkaVersion Instance version. currently supports "2.4.1", "2.4.2", "2.8.1", "3.2.3". default value "2.4.1". "2.4.1" and "2.4.2" belong to the same version. any one can be passed.
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置Instance version. currently supports "2.4.1", "2.4.2", "2.8.1", "3.2.3". default value "2.4.1". "2.4.1" and "2.4.2" belong to the same version. any one can be passed.
                     * @param _kafkaVersion Instance version. currently supports "2.4.1", "2.4.2", "2.8.1", "3.2.3". default value "2.4.1". "2.4.1" and "2.4.2" belong to the same version. any one can be passed.
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
                     * 获取Instance type. "standard": standard version. "profession": pro edition. (standard version is only supported on the international site. currently, the chinese site supports pro edition.).
                     * @return SpecificationsType Instance type. "standard": standard version. "profession": pro edition. (standard version is only supported on the international site. currently, the chinese site supports pro edition.).
                     * 
                     */
                    std::string GetSpecificationsType() const;

                    /**
                     * 设置Instance type. "standard": standard version. "profession": pro edition. (standard version is only supported on the international site. currently, the chinese site supports pro edition.).
                     * @param _specificationsType Instance type. "standard": standard version. "profession": pro edition. (standard version is only supported on the international site. currently, the chinese site supports pro edition.).
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
                     * 获取Specifies the disk type for a pro edition instance. you do not need to fill it in for a standard edition instance. valid values: "CLOUD_SSD" for SSD CLOUD disk; "CLOUD_BASIC" for high-performance CLOUD block storage. default value: "CLOUD_BASIC".
                     * @return DiskType Specifies the disk type for a pro edition instance. you do not need to fill it in for a standard edition instance. valid values: "CLOUD_SSD" for SSD CLOUD disk; "CLOUD_BASIC" for high-performance CLOUD block storage. default value: "CLOUD_BASIC".
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Specifies the disk type for a pro edition instance. you do not need to fill it in for a standard edition instance. valid values: "CLOUD_SSD" for SSD CLOUD disk; "CLOUD_BASIC" for high-performance CLOUD block storage. default value: "CLOUD_BASIC".
                     * @param _diskType Specifies the disk type for a pro edition instance. you do not need to fill it in for a standard edition instance. valid values: "CLOUD_SSD" for SSD CLOUD disk; "CLOUD_BASIC" for high-performance CLOUD block storage. default value: "CLOUD_BASIC".
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
                     * 获取Specifies the peak bandwidth of the instance private network, with a default value of 40 MB/s. for standard version, input the peak bandwidth corresponding to the current instance specifications. note that if the instance created is a pro edition instance, parameter configuration such as peak bandwidth and number of partitions should meet the billing specification of the professional edition. view billing specifications through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1
                     * @return BandWidth Specifies the peak bandwidth of the instance private network, with a default value of 40 MB/s. for standard version, input the peak bandwidth corresponding to the current instance specifications. note that if the instance created is a pro edition instance, parameter configuration such as peak bandwidth and number of partitions should meet the billing specification of the professional edition. view billing specifications through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置Specifies the peak bandwidth of the instance private network, with a default value of 40 MB/s. for standard version, input the peak bandwidth corresponding to the current instance specifications. note that if the instance created is a pro edition instance, parameter configuration such as peak bandwidth and number of partitions should meet the billing specification of the professional edition. view billing specifications through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1
                     * @param _bandWidth Specifies the peak bandwidth of the instance private network, with a default value of 40 MB/s. for standard version, input the peak bandwidth corresponding to the current instance specifications. note that if the instance created is a pro edition instance, parameter configuration such as peak bandwidth and number of partitions should meet the billing specification of the professional edition. view billing specifications through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1
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
                     * 获取Instance disk size. default value is 500. step length is set to 100. should meet the billing specification of the current instance. can be accessed through the following link: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1
                     * @return DiskSize Instance disk size. default value is 500. step length is set to 100. should meet the billing specification of the current instance. can be accessed through the following link: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Instance disk size. default value is 500. step length is set to 100. should meet the billing specification of the current instance. can be accessed through the following link: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1
                     * @param _diskSize Instance disk size. default value is 500. step length is set to 100. should meet the billing specification of the current instance. can be accessed through the following link: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1
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
                     * 获取Specifies the maximum number of partitions for the instance, which should meet the billing specification of the current instance. default value is 800 with a step length of 100. the billing specification can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1
                     * @return Partition Specifies the maximum number of partitions for the instance, which should meet the billing specification of the current instance. default value is 800 with a step length of 100. the billing specification can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置Specifies the maximum number of partitions for the instance, which should meet the billing specification of the current instance. default value is 800 with a step length of 100. the billing specification can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1
                     * @param _partition Specifies the maximum number of partitions for the instance, which should meet the billing specification of the current instance. default value is 800 with a step length of 100. the billing specification can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1
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
                     * 获取Maximum number of topics for the instance should meet the billing specification of the current instance. default value is 800, step length is set to 100.
                     * @return TopicNum Maximum number of topics for the instance should meet the billing specification of the current instance. default value is 800, step length is set to 100.
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置Maximum number of topics for the instance should meet the billing specification of the current instance. default value is 800, step length is set to 100.
                     * @param _topicNum Maximum number of topics for the instance should meet the billing specification of the current instance. default value is 800, step length is set to 100.
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
                     * 获取Specifies the availability zone of the instance. when creating a multi-az instance, this parameter is the availability zone id of the subnet where the default access point is created. ZoneId and ZoneIds cannot be empty at the same time. obtain through the API [DescribeCkafkaZone](https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1).
                     * @return ZoneId Specifies the availability zone of the instance. when creating a multi-az instance, this parameter is the availability zone id of the subnet where the default access point is created. ZoneId and ZoneIds cannot be empty at the same time. obtain through the API [DescribeCkafkaZone](https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Specifies the availability zone of the instance. when creating a multi-az instance, this parameter is the availability zone id of the subnet where the default access point is created. ZoneId and ZoneIds cannot be empty at the same time. obtain through the API [DescribeCkafkaZone](https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1).
                     * @param _zoneId Specifies the availability zone of the instance. when creating a multi-az instance, this parameter is the availability zone id of the subnet where the default access point is created. ZoneId and ZoneIds cannot be empty at the same time. obtain through the API [DescribeCkafkaZone](https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1).
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
                     * 获取Specifies the multi-az id list when the instance is a multi-az instance. note that the multi-az corresponding to parameter ZoneId must be included in this parameter array. ZoneId and ZoneIds cannot be empty at the same time. you can obtain this information through the [DescribeCkafkaZone](https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1) api.
                     * @return ZoneIds Specifies the multi-az id list when the instance is a multi-az instance. note that the multi-az corresponding to parameter ZoneId must be included in this parameter array. ZoneId and ZoneIds cannot be empty at the same time. you can obtain this information through the [DescribeCkafkaZone](https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1) api.
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置Specifies the multi-az id list when the instance is a multi-az instance. note that the multi-az corresponding to parameter ZoneId must be included in this parameter array. ZoneId and ZoneIds cannot be empty at the same time. you can obtain this information through the [DescribeCkafkaZone](https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1) api.
                     * @param _zoneIds Specifies the multi-az id list when the instance is a multi-az instance. note that the multi-az corresponding to parameter ZoneId must be included in this parameter array. ZoneId and ZoneIds cannot be empty at the same time. you can obtain this information through the [DescribeCkafkaZone](https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1) api.
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
                     * 获取Public network bandwidth in Mbps.  The 3 Mbps of free bandwidth is not included here by default.  For example, if you need 3 Mbps of public network bandwidth, pass in `0`; if you need 6 Mbps, pass in `3`.  The value must be an integer multiple of 3.
                     * @return PublicNetworkMonthly Public network bandwidth in Mbps.  The 3 Mbps of free bandwidth is not included here by default.  For example, if you need 3 Mbps of public network bandwidth, pass in `0`; if you need 6 Mbps, pass in `3`.  The value must be an integer multiple of 3.
                     * 
                     */
                    int64_t GetPublicNetworkMonthly() const;

                    /**
                     * 设置Public network bandwidth in Mbps.  The 3 Mbps of free bandwidth is not included here by default.  For example, if you need 3 Mbps of public network bandwidth, pass in `0`; if you need 6 Mbps, pass in `3`.  The value must be an integer multiple of 3.
                     * @param _publicNetworkMonthly Public network bandwidth in Mbps.  The 3 Mbps of free bandwidth is not included here by default.  For example, if you need 3 Mbps of public network bandwidth, pass in `0`; if you need 6 Mbps, pass in `3`.  The value must be an integer multiple of 3.
                     * 
                     */
                    void SetPublicNetworkMonthly(const int64_t& _publicNetworkMonthly);

                    /**
                     * 判断参数 PublicNetworkMonthly 是否已赋值
                     * @return PublicNetworkMonthly 是否已赋值
                     * 
                     */
                    bool PublicNetworkMonthlyHasBeenSet() const;

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

                    /**
                     * 获取Elastic bandwidth switch. valid values: 0 (disable, default), 1 (enable).
                     * @return ElasticBandwidthSwitch Elastic bandwidth switch. valid values: 0 (disable, default), 1 (enable).
                     * 
                     */
                    int64_t GetElasticBandwidthSwitch() const;

                    /**
                     * 设置Elastic bandwidth switch. valid values: 0 (disable, default), 1 (enable).
                     * @param _elasticBandwidthSwitch Elastic bandwidth switch. valid values: 0 (disable, default), 1 (enable).
                     * 
                     */
                    void SetElasticBandwidthSwitch(const int64_t& _elasticBandwidthSwitch);

                    /**
                     * 判断参数 ElasticBandwidthSwitch 是否已赋值
                     * @return ElasticBandwidthSwitch 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthSwitchHasBeenSet() const;

                private:

                    /**
                     * VPC Id, obtain through the API [DescribeVpcs](https://www.tencentcloud.comom/document/product/215/15778?from_cn_redirect=1).
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet Id. can be obtained through the [DescribeSubnets](https://www.tencentcloud.comom/document/product/215/15784?from_cn_redirect=1) api.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Specifies the cluster instance name of ckafka, an arbitrary character with length not exceeding 128.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Specifies the standard edition instance specification for the international site. currently only the international site standard edition uses the current field to distinguish specifications, while the domestic site standard edition distinguishes specifications by peak bandwidth. fill in 1 for all instances except the international site standard edition. for international site standard edition instances: [entry-level (general)] fill 1; [standard type (standard)] fill 2; [advanced] fill 3; [capacity type (capacity)] fill 4; [advanced type 1 (specialized-1)] fill 5; [advanced type 2 (specialized-2)] fill 6; [advanced type 3 (specialized-3)] fill 7; [advanced type 4 (specialized-4)] fill 8.
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
                     * Instance version. currently supports "2.4.1", "2.4.2", "2.8.1", "3.2.3". default value "2.4.1". "2.4.1" and "2.4.2" belong to the same version. any one can be passed.
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * Instance type. "standard": standard version. "profession": pro edition. (standard version is only supported on the international site. currently, the chinese site supports pro edition.).
                     */
                    std::string m_specificationsType;
                    bool m_specificationsTypeHasBeenSet;

                    /**
                     * Specifies the disk type for a pro edition instance. you do not need to fill it in for a standard edition instance. valid values: "CLOUD_SSD" for SSD CLOUD disk; "CLOUD_BASIC" for high-performance CLOUD block storage. default value: "CLOUD_BASIC".
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Specifies the peak bandwidth of the instance private network, with a default value of 40 MB/s. for standard version, input the peak bandwidth corresponding to the current instance specifications. note that if the instance created is a pro edition instance, parameter configuration such as peak bandwidth and number of partitions should meet the billing specification of the professional edition. view billing specifications through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * Instance disk size. default value is 500. step length is set to 100. should meet the billing specification of the current instance. can be accessed through the following link: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Specifies the maximum number of partitions for the instance, which should meet the billing specification of the current instance. default value is 800 with a step length of 100. the billing specification can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * Maximum number of topics for the instance should meet the billing specification of the current instance. default value is 800, step length is set to 100.
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * Specifies the availability zone of the instance. when creating a multi-az instance, this parameter is the availability zone id of the subnet where the default access point is created. ZoneId and ZoneIds cannot be empty at the same time. obtain through the API [DescribeCkafkaZone](https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1).
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Whether the current instance is a multi-AZ instance
                     */
                    bool m_multiZoneFlag;
                    bool m_multiZoneFlagHasBeenSet;

                    /**
                     * Specifies the multi-az id list when the instance is a multi-az instance. note that the multi-az corresponding to parameter ZoneId must be included in this parameter array. ZoneId and ZoneIds cannot be empty at the same time. you can obtain this information through the [DescribeCkafkaZone](https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1) api.
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * The number of purchased instances.  Default value: `1`. This parameter is optional.  If it is passed in, multiple instances will be created, with their names being `instanceName` plus different suffixes.
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * Public network bandwidth in Mbps.  The 3 Mbps of free bandwidth is not included here by default.  For example, if you need 3 Mbps of public network bandwidth, pass in `0`; if you need 6 Mbps, pass in `3`.  The value must be an integer multiple of 3.
                     */
                    int64_t m_publicNetworkMonthly;
                    bool m_publicNetworkMonthlyHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Elastic bandwidth switch. valid values: 0 (disable, default), 1 (enable).
                     */
                    int64_t m_elasticBandwidthSwitch;
                    bool m_elasticBandwidthSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEPOSTPAIDINSTANCEREQUEST_H_
