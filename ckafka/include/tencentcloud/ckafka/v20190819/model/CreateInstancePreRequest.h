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
                     * 获取<p>Specifies the Name of the ckafka cluster instance, which is any string with a length not more than 128 characters.</p>.
                     * @return InstanceName <p>Specifies the Name of the ckafka cluster instance, which is any string with a length not more than 128 characters.</p>.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Specifies the Name of the ckafka cluster instance, which is any string with a length not more than 128 characters.</p>.
                     * @param _instanceName <p>Specifies the Name of the ckafka cluster instance, which is any string with a length not more than 128 characters.</p>.
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
                     * 获取<P>Availability zone. when purchasing a multi-availability zone instance, this parameter specifies the primary az. <a href="https://www.tencentcloud.com/document/product/597/55246?from_cn_redirect=1">view availability zones</a></p>.
                     * @return ZoneId <P>Availability zone. when purchasing a multi-availability zone instance, this parameter specifies the primary az. <a href="https://www.tencentcloud.com/document/product/597/55246?from_cn_redirect=1">view availability zones</a></p>.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<P>Availability zone. when purchasing a multi-availability zone instance, this parameter specifies the primary az. <a href="https://www.tencentcloud.com/document/product/597/55246?from_cn_redirect=1">view availability zones</a></p>.
                     * @param _zoneId <P>Availability zone. when purchasing a multi-availability zone instance, this parameter specifies the primary az. <a href="https://www.tencentcloud.com/document/product/597/55246?from_cn_redirect=1">view availability zones</a></p>.
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
                     * 获取<P>Specifies the prepaid purchase duration, such as "1m" (exactly one month). value ranges from 1m to 36m.</p>.
                     * @return Period <P>Specifies the prepaid purchase duration, such as "1m" (exactly one month). value ranges from 1m to 36m.</p>.
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置<P>Specifies the prepaid purchase duration, such as "1m" (exactly one month). value ranges from 1m to 36m.</p>.
                     * @param _period <P>Specifies the prepaid purchase duration, such as "1m" (exactly one month). value ranges from 1m to 36m.</p>.
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
                     * 获取<p>VPC Id.</p>.
                     * @return VpcId <p>VPC Id.</p>.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC Id.</p>.
                     * @param _vpcId <p>VPC Id.</p>.
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
                     * 获取<P>Subnet id.</p>.
                     * @return SubnetId <P>Subnet id.</p>.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<P>Subnet id.</p>.
                     * @param _subnetId <P>Subnet id.</p>.
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
                     * 获取<P>Optional. specifies the maximum retention time for instance logs, in minutes. default value: 1440 (1 day) when left blank. configurable range: 1 minute to 90 days.</p>.
                     * @return MsgRetentionTime <P>Optional. specifies the maximum retention time for instance logs, in minutes. default value: 1440 (1 day) when left blank. configurable range: 1 minute to 90 days.</p>.
                     * 
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置<P>Optional. specifies the maximum retention time for instance logs, in minutes. default value: 1440 (1 day) when left blank. configurable range: 1 minute to 90 days.</p>.
                     * @param _msgRetentionTime <P>Optional. specifies the maximum retention time for instance logs, in minutes. default value: 1440 (1 day) when left blank. configurable range: 1 minute to 90 days.</p>.
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
                     * 获取<p>Specifies the cluster Id when creating an instance. this parameter indicates the cluster Id.</p>.
                     * @return ClusterId <p>Specifies the cluster Id when creating an instance. this parameter indicates the cluster Id.</p>.
                     * 
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置<p>Specifies the cluster Id when creating an instance. this parameter indicates the cluster Id.</p>.
                     * @param _clusterId <p>Specifies the cluster Id when creating an instance. this parameter indicates the cluster Id.</p>.
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
                     * 获取<P>Auto-Renewal tag for prepaid services. 0 means default state (not set by the user, i.e. initial state), 1 means auto-renew, 2 means explicitly no auto-renew (set by the user).</p>.
                     * @return RenewFlag <P>Auto-Renewal tag for prepaid services. 0 means default state (not set by the user, i.e. initial state), 1 means auto-renew, 2 means explicitly no auto-renew (set by the user).</p>.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<P>Auto-Renewal tag for prepaid services. 0 means default state (not set by the user, i.e. initial state), 1 means auto-renew, 2 means explicitly no auto-renew (set by the user).</p>.
                     * @param _renewFlag <P>Auto-Renewal tag for prepaid services. 0 means default state (not set by the user, i.e. initial state), 1 means auto-renew, 2 means explicitly no auto-renew (set by the user).</p>.
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
                     * 获取<p>Specifies the CKafka version number. valid values: 2.4.1, 2.4.2, 2.8.1, 3.2.3. default value is 2.4.1. 2.4.1 and 2.4.2 belong to the same version, any one can be passed.</p>.
                     * @return KafkaVersion <p>Specifies the CKafka version number. valid values: 2.4.1, 2.4.2, 2.8.1, 3.2.3. default value is 2.4.1. 2.4.1 and 2.4.2 belong to the same version, any one can be passed.</p>.
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置<p>Specifies the CKafka version number. valid values: 2.4.1, 2.4.2, 2.8.1, 3.2.3. default value is 2.4.1. 2.4.1 and 2.4.2 belong to the same version, any one can be passed.</p>.
                     * @param _kafkaVersion <p>Specifies the CKafka version number. valid values: 2.4.1, 2.4.2, 2.8.1, 3.2.3. default value is 2.4.1. 2.4.1 and 2.4.2 belong to the same version, any one can be passed.</p>.
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
                     * 获取<P>Instance type. specifies "standard" for standard edition instance (default), "profession" for professional edition instance, "premium" for advanced edition instance.</p>.
                     * @return SpecificationsType <P>Instance type. specifies "standard" for standard edition instance (default), "profession" for professional edition instance, "premium" for advanced edition instance.</p>.
                     * 
                     */
                    std::string GetSpecificationsType() const;

                    /**
                     * 设置<P>Instance type. specifies "standard" for standard edition instance (default), "profession" for professional edition instance, "premium" for advanced edition instance.</p>.
                     * @param _specificationsType <P>Instance type. specifies "standard" for standard edition instance (default), "profession" for professional edition instance, "premium" for advanced edition instance.</p>.
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
                     * 获取<P>Disk size. if it does not match the console specification ratio, creation cannot succeed. default value is 500. step length is set to 100. can be accessed through the following link to view billing specifications: https://www.tencentcloud.com/document/product/597/122562.?from_cn_redirect=1</p>.
                     * @return DiskSize <P>Disk size. if it does not match the console specification ratio, creation cannot succeed. default value is 500. step length is set to 100. can be accessed through the following link to view billing specifications: https://www.tencentcloud.com/document/product/597/122562.?from_cn_redirect=1</p>.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<P>Disk size. if it does not match the console specification ratio, creation cannot succeed. default value is 500. step length is set to 100. can be accessed through the following link to view billing specifications: https://www.tencentcloud.com/document/product/597/122562.?from_cn_redirect=1</p>.
                     * @param _diskSize <P>Disk size. if it does not match the console specification ratio, creation cannot succeed. default value is 500. step length is set to 100. can be accessed through the following link to view billing specifications: https://www.tencentcloud.com/document/product/597/122562.?from_cn_redirect=1</p>.
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
                     * 获取<p>Instance bandwidth, default value is 40, unit MB/s. minimum value: 20MB/s. advanced edition maximum value: 360MB/s. professional edition maximum value: 100000MB/s. standard version fixed bandwidth specifications: 40MB/s, 100MB/s, 150MB/s. billing specifications can be viewed through the following link: https://www.tencentcloud.com/document/product/597/11745.?from_cn_redirect=1</p>.
                     * @return BandWidth <p>Instance bandwidth, default value is 40, unit MB/s. minimum value: 20MB/s. advanced edition maximum value: 360MB/s. professional edition maximum value: 100000MB/s. standard version fixed bandwidth specifications: 40MB/s, 100MB/s, 150MB/s. billing specifications can be viewed through the following link: https://www.tencentcloud.com/document/product/597/11745.?from_cn_redirect=1</p>.
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置<p>Instance bandwidth, default value is 40, unit MB/s. minimum value: 20MB/s. advanced edition maximum value: 360MB/s. professional edition maximum value: 100000MB/s. standard version fixed bandwidth specifications: 40MB/s, 100MB/s, 150MB/s. billing specifications can be viewed through the following link: https://www.tencentcloud.com/document/product/597/11745.?from_cn_redirect=1</p>.
                     * @param _bandWidth <p>Instance bandwidth, default value is 40, unit MB/s. minimum value: 20MB/s. advanced edition maximum value: 360MB/s. professional edition maximum value: 100000MB/s. standard version fixed bandwidth specifications: 40MB/s, 100MB/s, 150MB/s. billing specifications can be viewed through the following link: https://www.tencentcloud.com/document/product/597/11745.?from_cn_redirect=1</p>.
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
                     * 获取<P>Specifies the partition size. if it does not match the console specification ratio, the creation cannot succeed. default value is 800 with a step length of 100. view billing specifications through the following link: https://www.tencentcloud.com/document/product/597/122563.?from_cn_redirect=1</p>.
                     * @return Partition <P>Specifies the partition size. if it does not match the console specification ratio, the creation cannot succeed. default value is 800 with a step length of 100. view billing specifications through the following link: https://www.tencentcloud.com/document/product/597/122563.?from_cn_redirect=1</p>.
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置<P>Specifies the partition size. if it does not match the console specification ratio, the creation cannot succeed. default value is 800 with a step length of 100. view billing specifications through the following link: https://www.tencentcloud.com/document/product/597/122563.?from_cn_redirect=1</p>.
                     * @param _partition <P>Specifies the partition size. if it does not match the console specification ratio, the creation cannot succeed. default value is 800 with a step length of 100. view billing specifications through the following link: https://www.tencentcloud.com/document/product/597/122563.?from_cn_redirect=1</p>.
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
                     * 获取<p>Specifies the instance disk type for pro edition/advanced edition. standard edition instances do not require this field. valid values: "CLOUD_SSD" (SSD CLOUD disk), "CLOUD_BASIC" (high-performance CLOUD block storage). default value: "CLOUD_BASIC".</p>.
                     * @return DiskType <p>Specifies the instance disk type for pro edition/advanced edition. standard edition instances do not require this field. valid values: "CLOUD_SSD" (SSD CLOUD disk), "CLOUD_BASIC" (high-performance CLOUD block storage). default value: "CLOUD_BASIC".</p>.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>Specifies the instance disk type for pro edition/advanced edition. standard edition instances do not require this field. valid values: "CLOUD_SSD" (SSD CLOUD disk), "CLOUD_BASIC" (high-performance CLOUD block storage). default value: "CLOUD_BASIC".</p>.
                     * @param _diskType <p>Specifies the instance disk type for pro edition/advanced edition. standard edition instances do not require this field. valid values: "CLOUD_SSD" (SSD CLOUD disk), "CLOUD_BASIC" (high-performance CLOUD block storage). default value: "CLOUD_BASIC".</p>.
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
                     * 获取<p>Specifies whether to create a cross-availability zone instance. when the current parameter is true, zoneIds is required.</p>.
                     * @return MultiZoneFlag <p>Specifies whether to create a cross-availability zone instance. when the current parameter is true, zoneIds is required.</p>.
                     * 
                     */
                    bool GetMultiZoneFlag() const;

                    /**
                     * 设置<p>Specifies whether to create a cross-availability zone instance. when the current parameter is true, zoneIds is required.</p>.
                     * @param _multiZoneFlag <p>Specifies whether to create a cross-availability zone instance. when the current parameter is true, zoneIds is required.</p>.
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
                     * 获取<P>Availability zone list. required item when purchasing multi-availability zone instance.</p>.
                     * @return ZoneIds <P>Availability zone list. required item when purchasing multi-availability zone instance.</p>.
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置<P>Availability zone list. required item when purchasing multi-availability zone instance.</p>.
                     * @param _zoneIds <P>Availability zone list. required item when purchasing multi-availability zone instance.</p>.
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
                     * 获取<p>Specifies the public bandwidth size in Mbps. the free 3 Mbps bandwidth is not included by default. for example, if the total required public network bandwidth is 3 Mbps, input 0 here; if the total required public network bandwidth is 6 Mbps, input 3 here. default value: 0. ensure the input parameter is a multiple of 3.</p>.
                     * @return PublicNetworkMonthly <p>Specifies the public bandwidth size in Mbps. the free 3 Mbps bandwidth is not included by default. for example, if the total required public network bandwidth is 3 Mbps, input 0 here; if the total required public network bandwidth is 6 Mbps, input 3 here. default value: 0. ensure the input parameter is a multiple of 3.</p>.
                     * 
                     */
                    int64_t GetPublicNetworkMonthly() const;

                    /**
                     * 设置<p>Specifies the public bandwidth size in Mbps. the free 3 Mbps bandwidth is not included by default. for example, if the total required public network bandwidth is 3 Mbps, input 0 here; if the total required public network bandwidth is 6 Mbps, input 3 here. default value: 0. ensure the input parameter is a multiple of 3.</p>.
                     * @param _publicNetworkMonthly <p>Specifies the public bandwidth size in Mbps. the free 3 Mbps bandwidth is not included by default. for example, if the total required public network bandwidth is 3 Mbps, input 0 here; if the total required public network bandwidth is 6 Mbps, input 3 here. default value: 0. ensure the input parameter is a multiple of 3.</p>.
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
                     * 获取<P>Specifies whether to automatically select voucher. valid values: 1-yes; 0-no. default is 0.</p>.
                     * @return AutoVoucher <P>Specifies whether to automatically select voucher. valid values: 1-yes; 0-no. default is 0.</p>.
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置<P>Specifies whether to automatically select voucher. valid values: 1-yes; 0-no. default is 0.</p>.
                     * @param _autoVoucher <P>Specifies whether to automatically select voucher. valid values: 1-yes; 0-no. default is 0.</p>.
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
                     * 获取<P>Elastic bandwidth switch 0 disable 1 enable (0 default).</p>.
                     * @return ElasticBandwidthSwitch <P>Elastic bandwidth switch 0 disable 1 enable (0 default).</p>.
                     * 
                     */
                    int64_t GetElasticBandwidthSwitch() const;

                    /**
                     * 设置<P>Elastic bandwidth switch 0 disable 1 enable (0 default).</p>.
                     * @param _elasticBandwidthSwitch <P>Elastic bandwidth switch 0 disable 1 enable (0 default).</p>.
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
                     * 获取<p>Specifies the custom certificate Id. this parameter is valid only when SpecificationsType is profession. supports custom certificate capacity.</p><p>can be obtained through the <a href="https://www.tencentcloud.com/document/product/400/41673?from_cn_redirect=1">DescribeCertificateDetail</a> api.</p>.
                     * @return CustomSSLCertId <p>Specifies the custom certificate Id. this parameter is valid only when SpecificationsType is profession. supports custom certificate capacity.</p><p>can be obtained through the <a href="https://www.tencentcloud.com/document/product/400/41673?from_cn_redirect=1">DescribeCertificateDetail</a> api.</p>.
                     * 
                     */
                    std::string GetCustomSSLCertId() const;

                    /**
                     * 设置<p>Specifies the custom certificate Id. this parameter is valid only when SpecificationsType is profession. supports custom certificate capacity.</p><p>can be obtained through the <a href="https://www.tencentcloud.com/document/product/400/41673?from_cn_redirect=1">DescribeCertificateDetail</a> api.</p>.
                     * @param _customSSLCertId <p>Specifies the custom certificate Id. this parameter is valid only when SpecificationsType is profession. supports custom certificate capacity.</p><p>can be obtained through the <a href="https://www.tencentcloud.com/document/product/400/41673?from_cn_redirect=1">DescribeCertificateDetail</a> api.</p>.
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
                     * <p>Specifies the Name of the ckafka cluster instance, which is any string with a length not more than 128 characters.</p>.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <P>Availability zone. when purchasing a multi-availability zone instance, this parameter specifies the primary az. <a href="https://www.tencentcloud.com/document/product/597/55246?from_cn_redirect=1">view availability zones</a></p>.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <P>Specifies the prepaid purchase duration, such as "1m" (exactly one month). value ranges from 1m to 36m.</p>.
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <P>Specifies the standard edition instance specification for the international site. currently only the standard edition on the international site uses the current field to distinguish specifications, while the domestic site standard edition uses peak bandwidth. fill in 1 for all instances except the international site standard edition. for international site standard edition instances: [entry-level (general)] fill 1; [standard type (standard)] fill 2; [advanced] fill 3; [capacity type (capacity)] fill 4; [advanced type 1 (specialized-1)] fill 5; [advanced type 2 (specialized-2)] fill 6; [advanced type 3 (specialized-3)] fill 7; [advanced type 4 (specialized-4)] fill 8.</p>.
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>VPC Id.</p>.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <P>Subnet id.</p>.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <P>Optional. specifies the maximum retention time for instance logs, in minutes. default value: 1440 (1 day) when left blank. configurable range: 1 minute to 90 days.</p>.
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * <p>Specifies the cluster Id when creating an instance. this parameter indicates the cluster Id.</p>.
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <P>Auto-Renewal tag for prepaid services. 0 means default state (not set by the user, i.e. initial state), 1 means auto-renew, 2 means explicitly no auto-renew (set by the user).</p>.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>Specifies the CKafka version number. valid values: 2.4.1, 2.4.2, 2.8.1, 3.2.3. default value is 2.4.1. 2.4.1 and 2.4.2 belong to the same version, any one can be passed.</p>.
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * <P>Instance type. specifies "standard" for standard edition instance (default), "profession" for professional edition instance, "premium" for advanced edition instance.</p>.
                     */
                    std::string m_specificationsType;
                    bool m_specificationsTypeHasBeenSet;

                    /**
                     * <P>Disk size. if it does not match the console specification ratio, creation cannot succeed. default value is 500. step length is set to 100. can be accessed through the following link to view billing specifications: https://www.tencentcloud.com/document/product/597/122562.?from_cn_redirect=1</p>.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>Instance bandwidth, default value is 40, unit MB/s. minimum value: 20MB/s. advanced edition maximum value: 360MB/s. professional edition maximum value: 100000MB/s. standard version fixed bandwidth specifications: 40MB/s, 100MB/s, 150MB/s. billing specifications can be viewed through the following link: https://www.tencentcloud.com/document/product/597/11745.?from_cn_redirect=1</p>.
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * <P>Specifies the partition size. if it does not match the console specification ratio, the creation cannot succeed. default value is 800 with a step length of 100. view billing specifications through the following link: https://www.tencentcloud.com/document/product/597/122563.?from_cn_redirect=1</p>.
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * <p>Tag.</p>.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Specifies the instance disk type for pro edition/advanced edition. standard edition instances do not require this field. valid values: "CLOUD_SSD" (SSD CLOUD disk), "CLOUD_BASIC" (high-performance CLOUD block storage). default value: "CLOUD_BASIC".</p>.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>Specifies whether to create a cross-availability zone instance. when the current parameter is true, zoneIds is required.</p>.
                     */
                    bool m_multiZoneFlag;
                    bool m_multiZoneFlagHasBeenSet;

                    /**
                     * <P>Availability zone list. required item when purchasing multi-availability zone instance.</p>.
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>Specifies the public bandwidth size in Mbps. the free 3 Mbps bandwidth is not included by default. for example, if the total required public network bandwidth is 3 Mbps, input 0 here; if the total required public network bandwidth is 6 Mbps, input 3 here. default value: 0. ensure the input parameter is a multiple of 3.</p>.
                     */
                    int64_t m_publicNetworkMonthly;
                    bool m_publicNetworkMonthlyHasBeenSet;

                    /**
                     * <p>Specifies the number of instances to purchase. optional. default value is 1. when input this parameter, it will create multiple instances with case-sensitive suffixes added to instanceName.</p>.
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * <P>Specifies whether to automatically select voucher. valid values: 1-yes; 0-no. default is 0.</p>.
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <P>Elastic bandwidth switch 0 disable 1 enable (0 default).</p>.
                     */
                    int64_t m_elasticBandwidthSwitch;
                    bool m_elasticBandwidthSwitchHasBeenSet;

                    /**
                     * <p>Specifies the custom certificate Id. this parameter is valid only when SpecificationsType is profession. supports custom certificate capacity.</p><p>can be obtained through the <a href="https://www.tencentcloud.com/document/product/400/41673?from_cn_redirect=1">DescribeCertificateDetail</a> api.</p>.
                     */
                    std::string m_customSSLCertId;
                    bool m_customSSLCertIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPREREQUEST_H_
