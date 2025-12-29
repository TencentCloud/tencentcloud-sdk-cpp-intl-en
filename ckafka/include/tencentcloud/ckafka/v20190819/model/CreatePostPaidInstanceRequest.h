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
                     * 获取<p>VPC Id, can be obtained through the <a href="https://www.tencentcloud.comom/document/product/215/15778?from_cn_redirect=1">DescribeVpcs</a> api.</p>.
                     * @return VpcId <p>VPC Id, can be obtained through the <a href="https://www.tencentcloud.comom/document/product/215/15778?from_cn_redirect=1">DescribeVpcs</a> api.</p>.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC Id, can be obtained through the <a href="https://www.tencentcloud.comom/document/product/215/15778?from_cn_redirect=1">DescribeVpcs</a> api.</p>.
                     * @param _vpcId <p>VPC Id, can be obtained through the <a href="https://www.tencentcloud.comom/document/product/215/15778?from_cn_redirect=1">DescribeVpcs</a> api.</p>.
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
                     * 获取<p>Subnet Id, which can be obtained through the <a href="https://www.tencentcloud.comom/document/product/215/15784?from_cn_redirect=1">DescribeSubnets</a> api.</p>.
                     * @return SubnetId <p>Subnet Id, which can be obtained through the <a href="https://www.tencentcloud.comom/document/product/215/15784?from_cn_redirect=1">DescribeSubnets</a> api.</p>.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet Id, which can be obtained through the <a href="https://www.tencentcloud.comom/document/product/215/15784?from_cn_redirect=1">DescribeSubnets</a> api.</p>.
                     * @param _subnetId <p>Subnet Id, which can be obtained through the <a href="https://www.tencentcloud.comom/document/product/215/15784?from_cn_redirect=1">DescribeSubnets</a> api.</p>.
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
                     * 获取<P>Specifies the cluster instance name of ckafka, with a length not exceeding 128 arbitrary characters.</p>.
                     * @return InstanceName <P>Specifies the cluster instance name of ckafka, with a length not exceeding 128 arbitrary characters.</p>.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<P>Specifies the cluster instance name of ckafka, with a length not exceeding 128 arbitrary characters.</p>.
                     * @param _instanceName <P>Specifies the cluster instance name of ckafka, with a length not exceeding 128 arbitrary characters.</p>.
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
                     * 获取<P>Specifies the standard edition instance specification for the international site. currently only the standard edition on the international site uses the current field to distinguish specifications, while the domestic site standard edition uses peak bandwidth. fill in 1 for all instances except the international site standard edition. for international site standard edition instances: [entry-level (general)] fill 1; [standard type (standard)] fill 2; [advanced] fill 3; [capacity type (capacity)] fill 4; [advanced type 1 (specialized-1)] fill 5; [advanced type 2 (specialized-2)] fill 6; [advanced type 3 (specialized-3)] fill 7; [advanced type 4 (specialized-4)] fill 8.</p>.
                     * @return InstanceType <P>Specifies the standard edition instance specification for the international site. currently only the standard edition on the international site uses the current field to distinguish specifications, while the domestic site standard edition uses peak bandwidth. fill in 1 for all instances except the international site standard edition. for international site standard edition instances: [entry-level (general)] fill 1; [standard type (standard)] fill 2; [advanced] fill 3; [capacity type (capacity)] fill 4; [advanced type 1 (specialized-1)] fill 5; [advanced type 2 (specialized-2)] fill 6; [advanced type 3 (specialized-3)] fill 7; [advanced type 4 (specialized-4)] fill 8.</p>.
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置<P>Specifies the standard edition instance specification for the international site. currently only the standard edition on the international site uses the current field to distinguish specifications, while the domestic site standard edition uses peak bandwidth. fill in 1 for all instances except the international site standard edition. for international site standard edition instances: [entry-level (general)] fill 1; [standard type (standard)] fill 2; [advanced] fill 3; [capacity type (capacity)] fill 4; [advanced type 1 (specialized-1)] fill 5; [advanced type 2 (specialized-2)] fill 6; [advanced type 3 (specialized-3)] fill 7; [advanced type 4 (specialized-4)] fill 8.</p>.
                     * @param _instanceType <P>Specifies the standard edition instance specification for the international site. currently only the standard edition on the international site uses the current field to distinguish specifications, while the domestic site standard edition uses peak bandwidth. fill in 1 for all instances except the international site standard edition. for international site standard edition instances: [entry-level (general)] fill 1; [standard type (standard)] fill 2; [advanced] fill 3; [capacity type (capacity)] fill 4; [advanced type 1 (specialized-1)] fill 5; [advanced type 2 (specialized-2)] fill 6; [advanced type 3 (specialized-3)] fill 7; [advanced type 4 (specialized-4)] fill 8.</p>.
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
                     * 获取<P>The default maximum retention time for instance logs, in minutes. default value: 1440 minutes (1 day) when this parameter is not input. maximum: 30 days. if the message retention time is explicitly set for a topic, the topic retention time takes precedence.</p>.
                     * @return MsgRetentionTime <P>The default maximum retention time for instance logs, in minutes. default value: 1440 minutes (1 day) when this parameter is not input. maximum: 30 days. if the message retention time is explicitly set for a topic, the topic retention time takes precedence.</p>.
                     * 
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置<P>The default maximum retention time for instance logs, in minutes. default value: 1440 minutes (1 day) when this parameter is not input. maximum: 30 days. if the message retention time is explicitly set for a topic, the topic retention time takes precedence.</p>.
                     * @param _msgRetentionTime <P>The default maximum retention time for instance logs, in minutes. default value: 1440 minutes (1 day) when this parameter is not input. maximum: 30 days. if the message retention time is explicitly set for a topic, the topic retention time takes precedence.</p>.
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
                     * 获取<p>Specifies the cluster Id when creating an instance. input this parameter to indicate the cluster Id. leave it empty if no cluster is specified.</p>.
                     * @return ClusterId <p>Specifies the cluster Id when creating an instance. input this parameter to indicate the cluster Id. leave it empty if no cluster is specified.</p>.
                     * 
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置<p>Specifies the cluster Id when creating an instance. input this parameter to indicate the cluster Id. leave it empty if no cluster is specified.</p>.
                     * @param _clusterId <p>Specifies the cluster Id when creating an instance. input this parameter to indicate the cluster Id. leave it empty if no cluster is specified.</p>.
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
                     * 获取<P>Instance version. currently supports "2.4.1", "2.4.2", "2.8.1", "3.2.3". default value is "2.4.1". "2.4.1" and "2.4.2" belong to the same version, any one can be passed.</p>.
                     * @return KafkaVersion <P>Instance version. currently supports "2.4.1", "2.4.2", "2.8.1", "3.2.3". default value is "2.4.1". "2.4.1" and "2.4.2" belong to the same version, any one can be passed.</p>.
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置<P>Instance version. currently supports "2.4.1", "2.4.2", "2.8.1", "3.2.3". default value is "2.4.1". "2.4.1" and "2.4.2" belong to the same version, any one can be passed.</p>.
                     * @param _kafkaVersion <P>Instance version. currently supports "2.4.1", "2.4.2", "2.8.1", "3.2.3". default value is "2.4.1". "2.4.1" and "2.4.2" belong to the same version, any one can be passed.</p>.
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
                     * 获取<P>Instance type. "standard": standard version, "profession": professional version. (standard version is only supported on the international site. chinese site currently supports professional version)</p>.
                     * @return SpecificationsType <P>Instance type. "standard": standard version, "profession": professional version. (standard version is only supported on the international site. chinese site currently supports professional version)</p>.
                     * 
                     */
                    std::string GetSpecificationsType() const;

                    /**
                     * 设置<P>Instance type. "standard": standard version, "profession": professional version. (standard version is only supported on the international site. chinese site currently supports professional version)</p>.
                     * @param _specificationsType <P>Instance type. "standard": standard version, "profession": professional version. (standard version is only supported on the international site. chinese site currently supports professional version)</p>.
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
                     * 获取<p>Specifies the instance disk type for pro edition. standard edition instances do not require this field. valid values: "CLOUD_SSD" (SSD CLOUD disk), "CLOUD_BASIC" (high-performance CLOUD block storage). default value: "CLOUD_BASIC".</p>.
                     * @return DiskType <p>Specifies the instance disk type for pro edition. standard edition instances do not require this field. valid values: "CLOUD_SSD" (SSD CLOUD disk), "CLOUD_BASIC" (high-performance CLOUD block storage). default value: "CLOUD_BASIC".</p>.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>Specifies the instance disk type for pro edition. standard edition instances do not require this field. valid values: "CLOUD_SSD" (SSD CLOUD disk), "CLOUD_BASIC" (high-performance CLOUD block storage). default value: "CLOUD_BASIC".</p>.
                     * @param _diskType <p>Specifies the instance disk type for pro edition. standard edition instances do not require this field. valid values: "CLOUD_SSD" (SSD CLOUD disk), "CLOUD_BASIC" (high-performance CLOUD block storage). default value: "CLOUD_BASIC".</p>.
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
                     * 获取<p>The peak bandwidth of the instance private network. the default value is 40 MB/s. for standard edition, input the peak bandwidth corresponding to the current instance specifications. note that if the instance created is a pro edition instance, parameter configurations such as peak bandwidth and number of partitions should meet the billing specification of the pro edition. you can view the billing specification through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1</p>.
                     * @return BandWidth <p>The peak bandwidth of the instance private network. the default value is 40 MB/s. for standard edition, input the peak bandwidth corresponding to the current instance specifications. note that if the instance created is a pro edition instance, parameter configurations such as peak bandwidth and number of partitions should meet the billing specification of the pro edition. you can view the billing specification through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1</p>.
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置<p>The peak bandwidth of the instance private network. the default value is 40 MB/s. for standard edition, input the peak bandwidth corresponding to the current instance specifications. note that if the instance created is a pro edition instance, parameter configurations such as peak bandwidth and number of partitions should meet the billing specification of the pro edition. you can view the billing specification through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1</p>.
                     * @param _bandWidth <p>The peak bandwidth of the instance private network. the default value is 40 MB/s. for standard edition, input the peak bandwidth corresponding to the current instance specifications. note that if the instance created is a pro edition instance, parameter configurations such as peak bandwidth and number of partitions should meet the billing specification of the pro edition. you can view the billing specification through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1</p>.
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
                     * 获取<P>Instance disk size. default value is 500. step length is set to 100. should meet the billing specification of the current instance. can be accessed through the following link to view billing specifications: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1</p>.
                     * @return DiskSize <P>Instance disk size. default value is 500. step length is set to 100. should meet the billing specification of the current instance. can be accessed through the following link to view billing specifications: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1</p>.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<P>Instance disk size. default value is 500. step length is set to 100. should meet the billing specification of the current instance. can be accessed through the following link to view billing specifications: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1</p>.
                     * @param _diskSize <P>Instance disk size. default value is 500. step length is set to 100. should meet the billing specification of the current instance. can be accessed through the following link to view billing specifications: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1</p>.
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
                     * 获取<P>Specifies the maximum number of partitions for the instance, which should meet the billing specification of the current instance. default value is 800 with a step length of 100. the billing specification can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1</p>.
                     * @return Partition <P>Specifies the maximum number of partitions for the instance, which should meet the billing specification of the current instance. default value is 800 with a step length of 100. the billing specification can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1</p>.
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置<P>Specifies the maximum number of partitions for the instance, which should meet the billing specification of the current instance. default value is 800 with a step length of 100. the billing specification can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1</p>.
                     * @param _partition <P>Specifies the maximum number of partitions for the instance, which should meet the billing specification of the current instance. default value is 800 with a step length of 100. the billing specification can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1</p>.
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
                     * 获取<P>Specifies the maximum number of topics for the instance, which should meet the billing specification of the current instance. default value is 800. step length is set to 100.</p>.
                     * @return TopicNum <P>Specifies the maximum number of topics for the instance, which should meet the billing specification of the current instance. default value is 800. step length is set to 100.</p>.
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置<P>Specifies the maximum number of topics for the instance, which should meet the billing specification of the current instance. default value is 800. step length is set to 100.</p>.
                     * @param _topicNum <P>Specifies the maximum number of topics for the instance, which should meet the billing specification of the current instance. default value is 800. step length is set to 100.</p>.
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
                     * 获取Specifies the availability zone where the instance is located. when creating a multi-az instance, this parameter indicates the availability zone id of the subnet where the default access point is created. ZoneId and ZoneIds cannot be empty at the same time. you can obtain this information through the API <a href="https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1">DescribeCkafkaZone</a>.
                     * @return ZoneId Specifies the availability zone where the instance is located. when creating a multi-az instance, this parameter indicates the availability zone id of the subnet where the default access point is created. ZoneId and ZoneIds cannot be empty at the same time. you can obtain this information through the API <a href="https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1">DescribeCkafkaZone</a>.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Specifies the availability zone where the instance is located. when creating a multi-az instance, this parameter indicates the availability zone id of the subnet where the default access point is created. ZoneId and ZoneIds cannot be empty at the same time. you can obtain this information through the API <a href="https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1">DescribeCkafkaZone</a>.
                     * @param _zoneId Specifies the availability zone where the instance is located. when creating a multi-az instance, this parameter indicates the availability zone id of the subnet where the default access point is created. ZoneId and ZoneIds cannot be empty at the same time. you can obtain this information through the API <a href="https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1">DescribeCkafkaZone</a>.
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
                     * 获取<P>Specifies whether the current instance is a multi-az instance.</p>.
                     * @return MultiZoneFlag <P>Specifies whether the current instance is a multi-az instance.</p>.
                     * 
                     */
                    bool GetMultiZoneFlag() const;

                    /**
                     * 设置<P>Specifies whether the current instance is a multi-az instance.</p>.
                     * @param _multiZoneFlag <P>Specifies whether the current instance is a multi-az instance.</p>.
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
                     * 获取<p>Specifies the multi-availability zone id list when the instance is a multi-az instance. note the corresponding multi-availability zone for parameter ZoneId must be included in the parameter array. ZoneId and ZoneIds cannot be empty at the same time. obtain through the API <a href="https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1">DescribeCkafkaZone</a>.</p>.
                     * @return ZoneIds <p>Specifies the multi-availability zone id list when the instance is a multi-az instance. note the corresponding multi-availability zone for parameter ZoneId must be included in the parameter array. ZoneId and ZoneIds cannot be empty at the same time. obtain through the API <a href="https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1">DescribeCkafkaZone</a>.</p>.
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置<p>Specifies the multi-availability zone id list when the instance is a multi-az instance. note the corresponding multi-availability zone for parameter ZoneId must be included in the parameter array. ZoneId and ZoneIds cannot be empty at the same time. obtain through the API <a href="https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1">DescribeCkafkaZone</a>.</p>.
                     * @param _zoneIds <p>Specifies the multi-availability zone id list when the instance is a multi-az instance. note the corresponding multi-availability zone for parameter ZoneId must be included in the parameter array. ZoneId and ZoneIds cannot be empty at the same time. obtain through the API <a href="https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1">DescribeCkafkaZone</a>.</p>.
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
                     * 获取<p>Specifies the number of instances to purchase. optional. default value is 1. when input this parameter, it will create multiple instances with case-sensitive suffixes added to instanceName.</p>.
                     * @return InstanceNum <p>Specifies the number of instances to purchase. optional. default value is 1. when input this parameter, it will create multiple instances with case-sensitive suffixes added to instanceName.</p>.
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置<p>Specifies the number of instances to purchase. optional. default value is 1. when input this parameter, it will create multiple instances with case-sensitive suffixes added to instanceName.</p>.
                     * @param _instanceNum <p>Specifies the number of instances to purchase. optional. default value is 1. when input this parameter, it will create multiple instances with case-sensitive suffixes added to instanceName.</p>.
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
                     * 获取<p>Public bandwidth size in Mbps. the free 3 Mbps bandwidth is not included by default. for example, if the total required public network bandwidth is 3 Mbps, input 0 here; if the total required public network bandwidth is 6 Mbps, input 3 here. ensure the input parameter is a multiple of 3.</p>.
                     * @return PublicNetworkMonthly <p>Public bandwidth size in Mbps. the free 3 Mbps bandwidth is not included by default. for example, if the total required public network bandwidth is 3 Mbps, input 0 here; if the total required public network bandwidth is 6 Mbps, input 3 here. ensure the input parameter is a multiple of 3.</p>.
                     * 
                     */
                    int64_t GetPublicNetworkMonthly() const;

                    /**
                     * 设置<p>Public bandwidth size in Mbps. the free 3 Mbps bandwidth is not included by default. for example, if the total required public network bandwidth is 3 Mbps, input 0 here; if the total required public network bandwidth is 6 Mbps, input 3 here. ensure the input parameter is a multiple of 3.</p>.
                     * @param _publicNetworkMonthly <p>Public bandwidth size in Mbps. the free 3 Mbps bandwidth is not included by default. for example, if the total required public network bandwidth is 3 Mbps, input 0 here; if the total required public network bandwidth is 6 Mbps, input 3 here. ensure the input parameter is a multiple of 3.</p>.
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
                     * 获取<p>Tag.</p>.
                     * @return Tags <p>Tag.</p>.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag.</p>.
                     * @param _tags <p>Tag.</p>.
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
                     * 获取<P>Specifies the elastic bandwidth switch. 0: disable (default); 1: enable.</p>.
                     * @return ElasticBandwidthSwitch <P>Specifies the elastic bandwidth switch. 0: disable (default); 1: enable.</p>.
                     * 
                     */
                    int64_t GetElasticBandwidthSwitch() const;

                    /**
                     * 设置<P>Specifies the elastic bandwidth switch. 0: disable (default); 1: enable.</p>.
                     * @param _elasticBandwidthSwitch <P>Specifies the elastic bandwidth switch. 0: disable (default); 1: enable.</p>.
                     * 
                     */
                    void SetElasticBandwidthSwitch(const int64_t& _elasticBandwidthSwitch);

                    /**
                     * 判断参数 ElasticBandwidthSwitch 是否已赋值
                     * @return ElasticBandwidthSwitch 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Specifies the custom certificate Id. this parameter is valid only when SpecificationsType is profession. supports custom certificate capacity.</p><p>can be obtained through the <a href="https://www.tencentcloud.comom/document/product/400/41673?from_cn_redirect=1">DescribeCertificateDetail</a> api.</p>.
                     * @return CustomSSLCertId <p>Specifies the custom certificate Id. this parameter is valid only when SpecificationsType is profession. supports custom certificate capacity.</p><p>can be obtained through the <a href="https://www.tencentcloud.comom/document/product/400/41673?from_cn_redirect=1">DescribeCertificateDetail</a> api.</p>.
                     * 
                     */
                    std::string GetCustomSSLCertId() const;

                    /**
                     * 设置<p>Specifies the custom certificate Id. this parameter is valid only when SpecificationsType is profession. supports custom certificate capacity.</p><p>can be obtained through the <a href="https://www.tencentcloud.comom/document/product/400/41673?from_cn_redirect=1">DescribeCertificateDetail</a> api.</p>.
                     * @param _customSSLCertId <p>Specifies the custom certificate Id. this parameter is valid only when SpecificationsType is profession. supports custom certificate capacity.</p><p>can be obtained through the <a href="https://www.tencentcloud.comom/document/product/400/41673?from_cn_redirect=1">DescribeCertificateDetail</a> api.</p>.
                     * 
                     */
                    void SetCustomSSLCertId(const std::string& _customSSLCertId);

                    /**
                     * 判断参数 CustomSSLCertId 是否已赋值
                     * @return CustomSSLCertId 是否已赋值
                     * 
                     */
                    bool CustomSSLCertIdHasBeenSet() const;

                private:

                    /**
                     * <p>VPC Id, can be obtained through the <a href="https://www.tencentcloud.comom/document/product/215/15778?from_cn_redirect=1">DescribeVpcs</a> api.</p>.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet Id, which can be obtained through the <a href="https://www.tencentcloud.comom/document/product/215/15784?from_cn_redirect=1">DescribeSubnets</a> api.</p>.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <P>Specifies the cluster instance name of ckafka, with a length not exceeding 128 arbitrary characters.</p>.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <P>Specifies the standard edition instance specification for the international site. currently only the standard edition on the international site uses the current field to distinguish specifications, while the domestic site standard edition uses peak bandwidth. fill in 1 for all instances except the international site standard edition. for international site standard edition instances: [entry-level (general)] fill 1; [standard type (standard)] fill 2; [advanced] fill 3; [capacity type (capacity)] fill 4; [advanced type 1 (specialized-1)] fill 5; [advanced type 2 (specialized-2)] fill 6; [advanced type 3 (specialized-3)] fill 7; [advanced type 4 (specialized-4)] fill 8.</p>.
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <P>The default maximum retention time for instance logs, in minutes. default value: 1440 minutes (1 day) when this parameter is not input. maximum: 30 days. if the message retention time is explicitly set for a topic, the topic retention time takes precedence.</p>.
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * <p>Specifies the cluster Id when creating an instance. input this parameter to indicate the cluster Id. leave it empty if no cluster is specified.</p>.
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <P>Instance version. currently supports "2.4.1", "2.4.2", "2.8.1", "3.2.3". default value is "2.4.1". "2.4.1" and "2.4.2" belong to the same version, any one can be passed.</p>.
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * <P>Instance type. "standard": standard version, "profession": professional version. (standard version is only supported on the international site. chinese site currently supports professional version)</p>.
                     */
                    std::string m_specificationsType;
                    bool m_specificationsTypeHasBeenSet;

                    /**
                     * <p>Specifies the instance disk type for pro edition. standard edition instances do not require this field. valid values: "CLOUD_SSD" (SSD CLOUD disk), "CLOUD_BASIC" (high-performance CLOUD block storage). default value: "CLOUD_BASIC".</p>.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>The peak bandwidth of the instance private network. the default value is 40 MB/s. for standard edition, input the peak bandwidth corresponding to the current instance specifications. note that if the instance created is a pro edition instance, parameter configurations such as peak bandwidth and number of partitions should meet the billing specification of the pro edition. you can view the billing specification through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1</p>.
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * <P>Instance disk size. default value is 500. step length is set to 100. should meet the billing specification of the current instance. can be accessed through the following link to view billing specifications: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1</p>.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <P>Specifies the maximum number of partitions for the instance, which should meet the billing specification of the current instance. default value is 800 with a step length of 100. the billing specification can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1</p>.
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * <P>Specifies the maximum number of topics for the instance, which should meet the billing specification of the current instance. default value is 800. step length is set to 100.</p>.
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * Specifies the availability zone where the instance is located. when creating a multi-az instance, this parameter indicates the availability zone id of the subnet where the default access point is created. ZoneId and ZoneIds cannot be empty at the same time. you can obtain this information through the API <a href="https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1">DescribeCkafkaZone</a>.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <P>Specifies whether the current instance is a multi-az instance.</p>.
                     */
                    bool m_multiZoneFlag;
                    bool m_multiZoneFlagHasBeenSet;

                    /**
                     * <p>Specifies the multi-availability zone id list when the instance is a multi-az instance. note the corresponding multi-availability zone for parameter ZoneId must be included in the parameter array. ZoneId and ZoneIds cannot be empty at the same time. obtain through the API <a href="https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1">DescribeCkafkaZone</a>.</p>.
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>Specifies the number of instances to purchase. optional. default value is 1. when input this parameter, it will create multiple instances with case-sensitive suffixes added to instanceName.</p>.
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * <p>Public bandwidth size in Mbps. the free 3 Mbps bandwidth is not included by default. for example, if the total required public network bandwidth is 3 Mbps, input 0 here; if the total required public network bandwidth is 6 Mbps, input 3 here. ensure the input parameter is a multiple of 3.</p>.
                     */
                    int64_t m_publicNetworkMonthly;
                    bool m_publicNetworkMonthlyHasBeenSet;

                    /**
                     * <p>Tag.</p>.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <P>Specifies the elastic bandwidth switch. 0: disable (default); 1: enable.</p>.
                     */
                    int64_t m_elasticBandwidthSwitch;
                    bool m_elasticBandwidthSwitchHasBeenSet;

                    /**
                     * <p>Specifies the custom certificate Id. this parameter is valid only when SpecificationsType is profession. supports custom certificate capacity.</p><p>can be obtained through the <a href="https://www.tencentcloud.comom/document/product/400/41673?from_cn_redirect=1">DescribeCertificateDetail</a> api.</p>.
                     */
                    std::string m_customSSLCertId;
                    bool m_customSSLCertIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEPOSTPAIDINSTANCEREQUEST_H_
