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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPREREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPREREQUEST_H_

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
                * CreateInstancePre request structure.
                */
                class CreateInstancePreRequest : public AbstractModel
                {
                public:
                    CreateInstancePreRequest();
                    ~CreateInstancePreRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the ckafka cluster instance Name, an arbitrary string with length no more than 128 characters.
                     * @return InstanceName Specifies the ckafka cluster instance Name, an arbitrary string with length no more than 128 characters.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Specifies the ckafka cluster instance Name, an arbitrary string with length no more than 128 characters.
                     * @param _instanceName Specifies the ckafka cluster instance Name, an arbitrary string with length no more than 128 characters.
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
                     * 获取Availability zone. when purchasing a multi-availability zone instance, this parameter specifies the primary az. [view availability zones](https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1).
                     * @return ZoneId Availability zone. when purchasing a multi-availability zone instance, this parameter specifies the primary az. [view availability zones](https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Availability zone. when purchasing a multi-availability zone instance, this parameter specifies the primary az. [view availability zones](https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1).
                     * @param _zoneId Availability zone. when purchasing a multi-availability zone instance, this parameter specifies the primary az. [view availability zones](https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1).
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
                     * 获取Prepaid purchase duration, such as "1m", exactly one month. value ranges from 1m to 36m.
                     * @return Period Prepaid purchase duration, such as "1m", exactly one month. value ranges from 1m to 36m.
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置Prepaid purchase duration, such as "1m", exactly one month. value ranges from 1m to 36m.
                     * @param _period Prepaid purchase duration, such as "1m", exactly one month. value ranges from 1m to 36m.
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

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
                     * 获取VPC Id.
                     * @return VpcId VPC Id.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC Id.
                     * @param _vpcId VPC Id.
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
                     * 获取Subnet ID
                     * @return SubnetId Subnet ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
                     * @param _subnetId Subnet ID
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
                     * 获取Optional. maximum retention time of instance logs, in minutes. default value: 1440 (1 day). value range: 1 minute to 90 days.
                     * @return MsgRetentionTime Optional. maximum retention time of instance logs, in minutes. default value: 1440 (1 day). value range: 1 minute to 90 days.
                     * 
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置Optional. maximum retention time of instance logs, in minutes. default value: 1440 (1 day). value range: 1 minute to 90 days.
                     * @param _msgRetentionTime Optional. maximum retention time of instance logs, in minutes. default value: 1440 (1 day). value range: 1 minute to 90 days.
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
                     * 获取Specifies the cluster Id when creating an instance.
                     * @return ClusterId Specifies the cluster Id when creating an instance.
                     * 
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置Specifies the cluster Id when creating an instance.
                     * @param _clusterId Specifies the cluster Id when creating an instance.
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
                     * 获取Auto-Renewal tag for prepaid services. valid values: 0 (default state, not set by the user, initial status), 1 (auto-renew), 2 (explicitly no auto-renew, set by the user).
                     * @return RenewFlag Auto-Renewal tag for prepaid services. valid values: 0 (default state, not set by the user, initial status), 1 (auto-renew), 2 (explicitly no auto-renew, set by the user).
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Auto-Renewal tag for prepaid services. valid values: 0 (default state, not set by the user, initial status), 1 (auto-renew), 2 (explicitly no auto-renew, set by the user).
                     * @param _renewFlag Auto-Renewal tag for prepaid services. valid values: 0 (default state, not set by the user, initial status), 1 (auto-renew), 2 (explicitly no auto-renew, set by the user).
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Specifies the CKafka version number. valid values: 2.4.1, 2.4.2, 2.8.1, 3.2.3. default value 2.4.1. 2.4.1 and 2.4.2 belong to the same version. any can be passed.
                     * @return KafkaVersion Specifies the CKafka version number. valid values: 2.4.1, 2.4.2, 2.8.1, 3.2.3. default value 2.4.1. 2.4.1 and 2.4.2 belong to the same version. any can be passed.
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置Specifies the CKafka version number. valid values: 2.4.1, 2.4.2, 2.8.1, 3.2.3. default value 2.4.1. 2.4.1 and 2.4.2 belong to the same version. any can be passed.
                     * @param _kafkaVersion Specifies the CKafka version number. valid values: 2.4.1, 2.4.2, 2.8.1, 3.2.3. default value 2.4.1. 2.4.1 and 2.4.2 belong to the same version. any can be passed.
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
                     * 获取Specifies the instance type. valid values: standard (default), profession, premium.
                     * @return SpecificationsType Specifies the instance type. valid values: standard (default), profession, premium.
                     * 
                     */
                    std::string GetSpecificationsType() const;

                    /**
                     * 设置Specifies the instance type. valid values: standard (default), profession, premium.
                     * @param _specificationsType Specifies the instance type. valid values: standard (default), profession, premium.
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
                     * 获取Disk size. if it does not match the console specification ratio, the creation cannot succeed. default value is 500. step length is set to 100. can be accessed through the following link: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1
                     * @return DiskSize Disk size. if it does not match the console specification ratio, the creation cannot succeed. default value is 500. step length is set to 100. can be accessed through the following link: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Disk size. if it does not match the console specification ratio, the creation cannot succeed. default value is 500. step length is set to 100. can be accessed through the following link: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1
                     * @param _diskSize Disk size. if it does not match the console specification ratio, the creation cannot succeed. default value is 500. step length is set to 100. can be accessed through the following link: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1
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
                     * 获取Instance bandwidth. default value: 40 MB/s. minimum value: 20 MB/s. maximum value for advanced edition: 360 MB/s. maximum value for pro edition: 100000 MB/s. standard version fixed bandwidth specifications: 40 MB/s, 100 MB/s, 150 MB/s. view billing specifications through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1
                     * @return BandWidth Instance bandwidth. default value: 40 MB/s. minimum value: 20 MB/s. maximum value for advanced edition: 360 MB/s. maximum value for pro edition: 100000 MB/s. standard version fixed bandwidth specifications: 40 MB/s, 100 MB/s, 150 MB/s. view billing specifications through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置Instance bandwidth. default value: 40 MB/s. minimum value: 20 MB/s. maximum value for advanced edition: 360 MB/s. maximum value for pro edition: 100000 MB/s. standard version fixed bandwidth specifications: 40 MB/s, 100 MB/s, 150 MB/s. view billing specifications through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1
                     * @param _bandWidth Instance bandwidth. default value: 40 MB/s. minimum value: 20 MB/s. maximum value for advanced edition: 360 MB/s. maximum value for pro edition: 100000 MB/s. standard version fixed bandwidth specifications: 40 MB/s, 100 MB/s, 150 MB/s. view billing specifications through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1
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
                     * 获取Partition size. if it does not match the console specification ratio, creation will fail. default value is 800, step length is 100. billing specifications can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1
                     * @return Partition Partition size. if it does not match the console specification ratio, creation will fail. default value is 800, step length is 100. billing specifications can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置Partition size. if it does not match the console specification ratio, creation will fail. default value is 800, step length is 100. billing specifications can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1
                     * @param _partition Partition size. if it does not match the console specification ratio, creation will fail. default value is 800, step length is 100. billing specifications can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1
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
                     * 获取Specifies the disk type for a pro/advanced edition instance. you do not need to fill it in for a standard edition instance. valid values: "CLOUD_SSD" for SSD CLOUD disk; "CLOUD_BASIC" for high-performance CLOUD block storage. default value: "CLOUD_BASIC".
                     * @return DiskType Specifies the disk type for a pro/advanced edition instance. you do not need to fill it in for a standard edition instance. valid values: "CLOUD_SSD" for SSD CLOUD disk; "CLOUD_BASIC" for high-performance CLOUD block storage. default value: "CLOUD_BASIC".
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Specifies the disk type for a pro/advanced edition instance. you do not need to fill it in for a standard edition instance. valid values: "CLOUD_SSD" for SSD CLOUD disk; "CLOUD_BASIC" for high-performance CLOUD block storage. default value: "CLOUD_BASIC".
                     * @param _diskType Specifies the disk type for a pro/advanced edition instance. you do not need to fill it in for a standard edition instance. valid values: "CLOUD_SSD" for SSD CLOUD disk; "CLOUD_BASIC" for high-performance CLOUD block storage. default value: "CLOUD_BASIC".
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
                     * 获取Specifies whether to create a cross-az instance. when the current parameter is true, zoneIds is required.
                     * @return MultiZoneFlag Specifies whether to create a cross-az instance. when the current parameter is true, zoneIds is required.
                     * 
                     */
                    bool GetMultiZoneFlag() const;

                    /**
                     * 设置Specifies whether to create a cross-az instance. when the current parameter is true, zoneIds is required.
                     * @param _multiZoneFlag Specifies whether to create a cross-az instance. when the current parameter is true, zoneIds is required.
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
                     * 获取Availability zone list. required item when purchasing a multi-availability zone instance.
                     * @return ZoneIds Availability zone list. required item when purchasing a multi-availability zone instance.
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置Availability zone list. required item when purchasing a multi-availability zone instance.
                     * @param _zoneIds Availability zone list. required item when purchasing a multi-availability zone instance.
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
                     * 获取Public network bandwidth size, in Mbps. the default is no free 3 Mbps bandwidth. for example, for a total of 3 Mbps public network bandwidth, pass 0 here; for a total of 6 Mbps public network bandwidth, pass 3 here. default value is 0. ensure the input parameter is a multiple of 3.
                     * @return PublicNetworkMonthly Public network bandwidth size, in Mbps. the default is no free 3 Mbps bandwidth. for example, for a total of 3 Mbps public network bandwidth, pass 0 here; for a total of 6 Mbps public network bandwidth, pass 3 here. default value is 0. ensure the input parameter is a multiple of 3.
                     * 
                     */
                    int64_t GetPublicNetworkMonthly() const;

                    /**
                     * 设置Public network bandwidth size, in Mbps. the default is no free 3 Mbps bandwidth. for example, for a total of 3 Mbps public network bandwidth, pass 0 here; for a total of 6 Mbps public network bandwidth, pass 3 here. default value is 0. ensure the input parameter is a multiple of 3.
                     * @param _publicNetworkMonthly Public network bandwidth size, in Mbps. the default is no free 3 Mbps bandwidth. for example, for a total of 3 Mbps public network bandwidth, pass 0 here; for a total of 6 Mbps public network bandwidth, pass 3 here. default value is 0. ensure the input parameter is a multiple of 3.
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
                     * 获取Number of instances to purchase. optional. default value is 1. when you input this parameter, it enables the creation of multiple instances with case-sensitive suffixes added to instanceName.
                     * @return InstanceNum Number of instances to purchase. optional. default value is 1. when you input this parameter, it enables the creation of multiple instances with case-sensitive suffixes added to instanceName.
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置Number of instances to purchase. optional. default value is 1. when you input this parameter, it enables the creation of multiple instances with case-sensitive suffixes added to instanceName.
                     * @param _instanceNum Number of instances to purchase. optional. default value is 1. when you input this parameter, it enables the creation of multiple instances with case-sensitive suffixes added to instanceName.
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
                     * 获取Whether to automatically select a voucher. valid values: 1 (yes), 0 (no). default is 0.
                     * @return AutoVoucher Whether to automatically select a voucher. valid values: 1 (yes), 0 (no). default is 0.
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically select a voucher. valid values: 1 (yes), 0 (no). default is 0.
                     * @param _autoVoucher Whether to automatically select a voucher. valid values: 1 (yes), 0 (no). default is 0.
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Elastic bandwidth switch. specifies whether to enable elastic bandwidth. valid values: 0 (not enabled, default), 1 (enabled).
                     * @return ElasticBandwidthSwitch Elastic bandwidth switch. specifies whether to enable elastic bandwidth. valid values: 0 (not enabled, default), 1 (enabled).
                     * 
                     */
                    int64_t GetElasticBandwidthSwitch() const;

                    /**
                     * 设置Elastic bandwidth switch. specifies whether to enable elastic bandwidth. valid values: 0 (not enabled, default), 1 (enabled).
                     * @param _elasticBandwidthSwitch Elastic bandwidth switch. specifies whether to enable elastic bandwidth. valid values: 0 (not enabled, default), 1 (enabled).
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
                     * Specifies the ckafka cluster instance Name, an arbitrary string with length no more than 128 characters.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Availability zone. when purchasing a multi-availability zone instance, this parameter specifies the primary az. [view availability zones](https://www.tencentcloud.comom/document/product/597/55246?from_cn_redirect=1).
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Prepaid purchase duration, such as "1m", exactly one month. value ranges from 1m to 36m.
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Specifies the standard edition instance specification for the international site. currently only the international site standard edition uses the current field to distinguish specifications, while the domestic site standard edition distinguishes specifications by peak bandwidth. fill in 1 for all instances except the international site standard edition. for international site standard edition instances: [entry-level (general)] fill 1; [standard type (standard)] fill 2; [advanced] fill 3; [capacity type (capacity)] fill 4; [advanced type 1 (specialized-1)] fill 5; [advanced type 2 (specialized-2)] fill 6; [advanced type 3 (specialized-3)] fill 7; [advanced type 4 (specialized-4)] fill 8.
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * VPC Id.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Optional. maximum retention time of instance logs, in minutes. default value: 1440 (1 day). value range: 1 minute to 90 days.
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * Specifies the cluster Id when creating an instance.
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Auto-Renewal tag for prepaid services. valid values: 0 (default state, not set by the user, initial status), 1 (auto-renew), 2 (explicitly no auto-renew, set by the user).
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Specifies the CKafka version number. valid values: 2.4.1, 2.4.2, 2.8.1, 3.2.3. default value 2.4.1. 2.4.1 and 2.4.2 belong to the same version. any can be passed.
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * Specifies the instance type. valid values: standard (default), profession, premium.
                     */
                    std::string m_specificationsType;
                    bool m_specificationsTypeHasBeenSet;

                    /**
                     * Disk size. if it does not match the console specification ratio, the creation cannot succeed. default value is 500. step length is set to 100. can be accessed through the following link: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Instance bandwidth. default value: 40 MB/s. minimum value: 20 MB/s. maximum value for advanced edition: 360 MB/s. maximum value for pro edition: 100000 MB/s. standard version fixed bandwidth specifications: 40 MB/s, 100 MB/s, 150 MB/s. view billing specifications through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * Partition size. if it does not match the console specification ratio, creation will fail. default value is 800, step length is 100. billing specifications can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Specifies the disk type for a pro/advanced edition instance. you do not need to fill it in for a standard edition instance. valid values: "CLOUD_SSD" for SSD CLOUD disk; "CLOUD_BASIC" for high-performance CLOUD block storage. default value: "CLOUD_BASIC".
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Specifies whether to create a cross-az instance. when the current parameter is true, zoneIds is required.
                     */
                    bool m_multiZoneFlag;
                    bool m_multiZoneFlagHasBeenSet;

                    /**
                     * Availability zone list. required item when purchasing a multi-availability zone instance.
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Public network bandwidth size, in Mbps. the default is no free 3 Mbps bandwidth. for example, for a total of 3 Mbps public network bandwidth, pass 0 here; for a total of 6 Mbps public network bandwidth, pass 3 here. default value is 0. ensure the input parameter is a multiple of 3.
                     */
                    int64_t m_publicNetworkMonthly;
                    bool m_publicNetworkMonthlyHasBeenSet;

                    /**
                     * Number of instances to purchase. optional. default value is 1. when you input this parameter, it enables the creation of multiple instances with case-sensitive suffixes added to instanceName.
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * Whether to automatically select a voucher. valid values: 1 (yes), 0 (no). default is 0.
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Elastic bandwidth switch. specifies whether to enable elastic bandwidth. valid values: 0 (not enabled, default), 1 (enabled).
                     */
                    int64_t m_elasticBandwidthSwitch;
                    bool m_elasticBandwidthSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPREREQUEST_H_
