/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/ZoneDetail.h>
#include <tencentcloud/es/v20180416/model/NodeInfo.h>
#include <tencentcloud/es/v20180416/model/TagInfo.h>
#include <tencentcloud/es/v20180416/model/WebNodeTypeInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CreateInstance request structure.
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Availability Zone
                     * @return Zone Availability Zone
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability Zone
                     * @param Zone Availability Zone
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Instance version. Valid values: `5.6.4`, `6.4.3`, `6.8.2`, `7.5.1`, `7.10.1`
                     * @return EsVersion Instance version. Valid values: `5.6.4`, `6.4.3`, `6.8.2`, `7.5.1`, `7.10.1`
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置Instance version. Valid values: `5.6.4`, `6.4.3`, `6.8.2`, `7.5.1`, `7.10.1`
                     * @param EsVersion Instance version. Valid values: `5.6.4`, `6.4.3`, `6.8.2`, `7.5.1`, `7.10.1`
                     */
                    void SetEsVersion(const std::string& _esVersion);

                    /**
                     * 判断参数 EsVersion 是否已赋值
                     * @return EsVersion 是否已赋值
                     */
                    bool EsVersionHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param VpcId VPC ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID
                     * @return SubnetId Subnet ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
                     * @param SubnetId Subnet ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Access password, which must contain 8 to 16 characters, and include at least two of the following three types of characters: [a-z,A-Z], [0-9] and [-!@#$%&^*+=_:;,.?]
                     * @return Password Access password, which must contain 8 to 16 characters, and include at least two of the following three types of characters: [a-z,A-Z], [0-9] and [-!@#$%&^*+=_:;,.?]
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Access password, which must contain 8 to 16 characters, and include at least two of the following three types of characters: [a-z,A-Z], [0-9] and [-!@#$%&^*+=_:;,.?]
                     * @param Password Access password, which must contain 8 to 16 characters, and include at least two of the following three types of characters: [a-z,A-Z], [0-9] and [-!@#$%&^*+=_:;,.?]
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Instance name, which can contain 1 to 50 English letters, Chinese characters, digits, dashes (-), or underscores (_)
                     * @return InstanceName Instance name, which can contain 1 to 50 English letters, Chinese characters, digits, dashes (-), or underscores (_)
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name, which can contain 1 to 50 English letters, Chinese characters, digits, dashes (-), or underscores (_)
                     * @param InstanceName Instance name, which can contain 1 to 50 English letters, Chinese characters, digits, dashes (-), or underscores (_)
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused. Please use `NodeInfoList`
Number of nodes (2-50)
                     * @return NodeNum This parameter has been disused. Please use `NodeInfoList`
Number of nodes (2-50)
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置This parameter has been disused. Please use `NodeInfoList`
Number of nodes (2-50)
                     * @param NodeNum This parameter has been disused. Please use `NodeInfoList`
Number of nodes (2-50)
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取Billing mode <li>POSTPAID_BY_HOUR: Pay-as-you-go hourly </li>Default value: POSTPAID_BY_HOUR
                     * @return ChargeType Billing mode <li>POSTPAID_BY_HOUR: Pay-as-you-go hourly </li>Default value: POSTPAID_BY_HOUR
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Billing mode <li>POSTPAID_BY_HOUR: Pay-as-you-go hourly </li>Default value: POSTPAID_BY_HOUR
                     * @param ChargeType Billing mode <li>POSTPAID_BY_HOUR: Pay-as-you-go hourly </li>Default value: POSTPAID_BY_HOUR
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取This parameter is not used on the global website
                     * @return ChargePeriod This parameter is not used on the global website
                     */
                    uint64_t GetChargePeriod() const;

                    /**
                     * 设置This parameter is not used on the global website
                     * @param ChargePeriod This parameter is not used on the global website
                     */
                    void SetChargePeriod(const uint64_t& _chargePeriod);

                    /**
                     * 判断参数 ChargePeriod 是否已赋值
                     * @return ChargePeriod 是否已赋值
                     */
                    bool ChargePeriodHasBeenSet() const;

                    /**
                     * 获取This parameter is not used on the global website
                     * @return RenewFlag This parameter is not used on the global website
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置This parameter is not used on the global website
                     * @param RenewFlag This parameter is not used on the global website
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused. Please use `NodeInfoList`
Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     * @return NodeType This parameter has been disused. Please use `NodeInfoList`
Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置This parameter has been disused. Please use `NodeInfoList`
Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     * @param NodeType This parameter has been disused. Please use `NodeInfoList`
Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused. Please use `NodeInfoList`
Node storage type <li>CLOUD_SSD: SSD cloud storage </li><li>CLOUD_PREMIUM: premium cloud storage </li>Default value: CLOUD_SSD
                     * @return DiskType This parameter has been disused. Please use `NodeInfoList`
Node storage type <li>CLOUD_SSD: SSD cloud storage </li><li>CLOUD_PREMIUM: premium cloud storage </li>Default value: CLOUD_SSD
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置This parameter has been disused. Please use `NodeInfoList`
Node storage type <li>CLOUD_SSD: SSD cloud storage </li><li>CLOUD_PREMIUM: premium cloud storage </li>Default value: CLOUD_SSD
                     * @param DiskType This parameter has been disused. Please use `NodeInfoList`
Node storage type <li>CLOUD_SSD: SSD cloud storage </li><li>CLOUD_PREMIUM: premium cloud storage </li>Default value: CLOUD_SSD
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused. Please use `NodeInfoList`
Node disk size in GB
                     * @return DiskSize This parameter has been disused. Please use `NodeInfoList`
Node disk size in GB
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置This parameter has been disused. Please use `NodeInfoList`
Node disk size in GB
                     * @param DiskSize This parameter has been disused. Please use `NodeInfoList`
Node disk size in GB
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取This parameter is not used on the global website
                     * @return TimeUnit This parameter is not used on the global website
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置This parameter is not used on the global website
                     * @param TimeUnit This parameter is not used on the global website
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Whether to automatically use vouchers <li>0: No </li><li>1: Yes </li>Default value: 0
                     * @return AutoVoucher Whether to automatically use vouchers <li>0: No </li><li>1: Yes </li>Default value: 0
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically use vouchers <li>0: No </li><li>1: Yes </li>Default value: 0
                     * @param AutoVoucher Whether to automatically use vouchers <li>0: No </li><li>1: Yes </li>Default value: 0
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取List of voucher IDs (only one voucher can be specified at a time currently)
                     * @return VoucherIds List of voucher IDs (only one voucher can be specified at a time currently)
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置List of voucher IDs (only one voucher can be specified at a time currently)
                     * @param VoucherIds List of voucher IDs (only one voucher can be specified at a time currently)
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused. Please use `NodeInfoList`
Whether to create a dedicated primary node <li>true: yes </li><li>false: no </li>Default value: false
                     * @return EnableDedicatedMaster This parameter has been disused. Please use `NodeInfoList`
Whether to create a dedicated primary node <li>true: yes </li><li>false: no </li>Default value: false
                     */
                    bool GetEnableDedicatedMaster() const;

                    /**
                     * 设置This parameter has been disused. Please use `NodeInfoList`
Whether to create a dedicated primary node <li>true: yes </li><li>false: no </li>Default value: false
                     * @param EnableDedicatedMaster This parameter has been disused. Please use `NodeInfoList`
Whether to create a dedicated primary node <li>true: yes </li><li>false: no </li>Default value: false
                     */
                    void SetEnableDedicatedMaster(const bool& _enableDedicatedMaster);

                    /**
                     * 判断参数 EnableDedicatedMaster 是否已赋值
                     * @return EnableDedicatedMaster 是否已赋值
                     */
                    bool EnableDedicatedMasterHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused. Please use `NodeInfoList`
Number of dedicated primary nodes (only 3 and 5 are supported. This value must be passed in if `EnableDedicatedMaster` is `true`)
                     * @return MasterNodeNum This parameter has been disused. Please use `NodeInfoList`
Number of dedicated primary nodes (only 3 and 5 are supported. This value must be passed in if `EnableDedicatedMaster` is `true`)
                     */
                    uint64_t GetMasterNodeNum() const;

                    /**
                     * 设置This parameter has been disused. Please use `NodeInfoList`
Number of dedicated primary nodes (only 3 and 5 are supported. This value must be passed in if `EnableDedicatedMaster` is `true`)
                     * @param MasterNodeNum This parameter has been disused. Please use `NodeInfoList`
Number of dedicated primary nodes (only 3 and 5 are supported. This value must be passed in if `EnableDedicatedMaster` is `true`)
                     */
                    void SetMasterNodeNum(const uint64_t& _masterNodeNum);

                    /**
                     * 判断参数 MasterNodeNum 是否已赋值
                     * @return MasterNodeNum 是否已赋值
                     */
                    bool MasterNodeNumHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node type, which must be passed in if `EnableDedicatedMaster` is `true` <li>ES.S1.SMALL2: 1-core 2 GB</li><li>ES.S1.MEDIUM4: 2-core 4 GB</li><li>ES.S1.MEDIUM8: 2-core 8 GB</li><li>ES.S1.LARGE16: 4-core 16 GB</li><li>ES.S1.2XLARGE32: 8-core 32 GB</li><li>ES.S1.4XLARGE32: 16-core 32 GB</li><li>ES.S1.4XLARGE64: 16-core 64 GB</li>
                     * @return MasterNodeType This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node type, which must be passed in if `EnableDedicatedMaster` is `true` <li>ES.S1.SMALL2: 1-core 2 GB</li><li>ES.S1.MEDIUM4: 2-core 4 GB</li><li>ES.S1.MEDIUM8: 2-core 8 GB</li><li>ES.S1.LARGE16: 4-core 16 GB</li><li>ES.S1.2XLARGE32: 8-core 32 GB</li><li>ES.S1.4XLARGE32: 16-core 32 GB</li><li>ES.S1.4XLARGE64: 16-core 64 GB</li>
                     */
                    std::string GetMasterNodeType() const;

                    /**
                     * 设置This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node type, which must be passed in if `EnableDedicatedMaster` is `true` <li>ES.S1.SMALL2: 1-core 2 GB</li><li>ES.S1.MEDIUM4: 2-core 4 GB</li><li>ES.S1.MEDIUM8: 2-core 8 GB</li><li>ES.S1.LARGE16: 4-core 16 GB</li><li>ES.S1.2XLARGE32: 8-core 32 GB</li><li>ES.S1.4XLARGE32: 16-core 32 GB</li><li>ES.S1.4XLARGE64: 16-core 64 GB</li>
                     * @param MasterNodeType This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node type, which must be passed in if `EnableDedicatedMaster` is `true` <li>ES.S1.SMALL2: 1-core 2 GB</li><li>ES.S1.MEDIUM4: 2-core 4 GB</li><li>ES.S1.MEDIUM8: 2-core 8 GB</li><li>ES.S1.LARGE16: 4-core 16 GB</li><li>ES.S1.2XLARGE32: 8-core 32 GB</li><li>ES.S1.4XLARGE32: 16-core 32 GB</li><li>ES.S1.4XLARGE64: 16-core 64 GB</li>
                     */
                    void SetMasterNodeType(const std::string& _masterNodeType);

                    /**
                     * 判断参数 MasterNodeType 是否已赋值
                     * @return MasterNodeType 是否已赋值
                     */
                    bool MasterNodeTypeHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node disk size in GB, which is optional. If passed in, it can only be 50 and cannot be customized currently
                     * @return MasterNodeDiskSize This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node disk size in GB, which is optional. If passed in, it can only be 50 and cannot be customized currently
                     */
                    uint64_t GetMasterNodeDiskSize() const;

                    /**
                     * 设置This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node disk size in GB, which is optional. If passed in, it can only be 50 and cannot be customized currently
                     * @param MasterNodeDiskSize This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node disk size in GB, which is optional. If passed in, it can only be 50 and cannot be customized currently
                     */
                    void SetMasterNodeDiskSize(const uint64_t& _masterNodeDiskSize);

                    /**
                     * 判断参数 MasterNodeDiskSize 是否已赋值
                     * @return MasterNodeDiskSize 是否已赋值
                     */
                    bool MasterNodeDiskSizeHasBeenSet() const;

                    /**
                     * 获取ClusterName in the cluster configuration file, which is the instance ID by default and currently cannot be customized
                     * @return ClusterNameInConf ClusterName in the cluster configuration file, which is the instance ID by default and currently cannot be customized
                     */
                    std::string GetClusterNameInConf() const;

                    /**
                     * 设置ClusterName in the cluster configuration file, which is the instance ID by default and currently cannot be customized
                     * @param ClusterNameInConf ClusterName in the cluster configuration file, which is the instance ID by default and currently cannot be customized
                     */
                    void SetClusterNameInConf(const std::string& _clusterNameInConf);

                    /**
                     * 判断参数 ClusterNameInConf 是否已赋值
                     * @return ClusterNameInConf 是否已赋值
                     */
                    bool ClusterNameInConfHasBeenSet() const;

                    /**
                     * 获取Cluster deployment mode <li>0: single-AZ deployment </li><li>1: multi-AZ deployment </li>Default value: 0
                     * @return DeployMode Cluster deployment mode <li>0: single-AZ deployment </li><li>1: multi-AZ deployment </li>Default value: 0
                     */
                    uint64_t GetDeployMode() const;

                    /**
                     * 设置Cluster deployment mode <li>0: single-AZ deployment </li><li>1: multi-AZ deployment </li>Default value: 0
                     * @param DeployMode Cluster deployment mode <li>0: single-AZ deployment </li><li>1: multi-AZ deployment </li>Default value: 0
                     */
                    void SetDeployMode(const uint64_t& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取Details of AZs in multi-AZ deployment mode (which is required when DeployMode is 1)
                     * @return MultiZoneInfo Details of AZs in multi-AZ deployment mode (which is required when DeployMode is 1)
                     */
                    std::vector<ZoneDetail> GetMultiZoneInfo() const;

                    /**
                     * 设置Details of AZs in multi-AZ deployment mode (which is required when DeployMode is 1)
                     * @param MultiZoneInfo Details of AZs in multi-AZ deployment mode (which is required when DeployMode is 1)
                     */
                    void SetMultiZoneInfo(const std::vector<ZoneDetail>& _multiZoneInfo);

                    /**
                     * 判断参数 MultiZoneInfo 是否已赋值
                     * @return MultiZoneInfo 是否已赋值
                     */
                    bool MultiZoneInfoHasBeenSet() const;

                    /**
                     * 获取License type <li>oss: Open Source Edition </li><li>basic: Basic Edition </li><li>platinum: Platinum Edition </li>Default value: Platinum
                     * @return LicenseType License type <li>oss: Open Source Edition </li><li>basic: Basic Edition </li><li>platinum: Platinum Edition </li>Default value: Platinum
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置License type <li>oss: Open Source Edition </li><li>basic: Basic Edition </li><li>platinum: Platinum Edition </li>Default value: Platinum
                     * @param LicenseType License type <li>oss: Open Source Edition </li><li>basic: Basic Edition </li><li>platinum: Platinum Edition </li>Default value: Platinum
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取Node information list, which is used to describe the specification information of various types of nodes in the cluster, such as node type, node quantity, node specification, disk type, and disk size
                     * @return NodeInfoList Node information list, which is used to describe the specification information of various types of nodes in the cluster, such as node type, node quantity, node specification, disk type, and disk size
                     */
                    std::vector<NodeInfo> GetNodeInfoList() const;

                    /**
                     * 设置Node information list, which is used to describe the specification information of various types of nodes in the cluster, such as node type, node quantity, node specification, disk type, and disk size
                     * @param NodeInfoList Node information list, which is used to describe the specification information of various types of nodes in the cluster, such as node type, node quantity, node specification, disk type, and disk size
                     */
                    void SetNodeInfoList(const std::vector<NodeInfo>& _nodeInfoList);

                    /**
                     * 判断参数 NodeInfoList 是否已赋值
                     * @return NodeInfoList 是否已赋值
                     */
                    bool NodeInfoListHasBeenSet() const;

                    /**
                     * 获取Node tag information list
                     * @return TagList Node tag information list
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置Node tag information list
                     * @param TagList Node tag information list
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
                     * @return BasicSecurityType Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
                     */
                    uint64_t GetBasicSecurityType() const;

                    /**
                     * 设置Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
                     * @param BasicSecurityType Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
                     */
                    void SetBasicSecurityType(const uint64_t& _basicSecurityType);

                    /**
                     * 判断参数 BasicSecurityType 是否已赋值
                     * @return BasicSecurityType 是否已赋值
                     */
                    bool BasicSecurityTypeHasBeenSet() const;

                    /**
                     * 获取Scenario template type. 0: not enabled; 1: general; 2: log; 3: search
                     * @return SceneType Scenario template type. 0: not enabled; 1: general; 2: log; 3: search
                     */
                    int64_t GetSceneType() const;

                    /**
                     * 设置Scenario template type. 0: not enabled; 1: general; 2: log; 3: search
                     * @param SceneType Scenario template type. 0: not enabled; 1: general; 2: log; 3: search
                     */
                    void SetSceneType(const int64_t& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取Visual node configuration
                     * @return WebNodeTypeInfo Visual node configuration
                     */
                    WebNodeTypeInfo GetWebNodeTypeInfo() const;

                    /**
                     * 设置Visual node configuration
                     * @param WebNodeTypeInfo Visual node configuration
                     */
                    void SetWebNodeTypeInfo(const WebNodeTypeInfo& _webNodeTypeInfo);

                    /**
                     * 判断参数 WebNodeTypeInfo 是否已赋值
                     * @return WebNodeTypeInfo 是否已赋值
                     */
                    bool WebNodeTypeInfoHasBeenSet() const;

                    /**
                     * 获取Valid values: `https`, `http` (default)
                     * @return Protocol Valid values: `https`, `http` (default)
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Valid values: `https`, `http` (default)
                     * @param Protocol Valid values: `https`, `http` (default)
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * Availability Zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance version. Valid values: `5.6.4`, `6.4.3`, `6.8.2`, `7.5.1`, `7.10.1`
                     */
                    std::string m_esVersion;
                    bool m_esVersionHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Access password, which must contain 8 to 16 characters, and include at least two of the following three types of characters: [a-z,A-Z], [0-9] and [-!@#$%&^*+=_:;,.?]
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Instance name, which can contain 1 to 50 English letters, Chinese characters, digits, dashes (-), or underscores (_)
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * This parameter has been disused. Please use `NodeInfoList`
Number of nodes (2-50)
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Billing mode <li>POSTPAID_BY_HOUR: Pay-as-you-go hourly </li>Default value: POSTPAID_BY_HOUR
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * This parameter is not used on the global website
                     */
                    uint64_t m_chargePeriod;
                    bool m_chargePeriodHasBeenSet;

                    /**
                     * This parameter is not used on the global website
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * This parameter has been disused. Please use `NodeInfoList`
Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * This parameter has been disused. Please use `NodeInfoList`
Node storage type <li>CLOUD_SSD: SSD cloud storage </li><li>CLOUD_PREMIUM: premium cloud storage </li>Default value: CLOUD_SSD
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * This parameter has been disused. Please use `NodeInfoList`
Node disk size in GB
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * This parameter is not used on the global website
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Whether to automatically use vouchers <li>0: No </li><li>1: Yes </li>Default value: 0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * List of voucher IDs (only one voucher can be specified at a time currently)
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * This parameter has been disused. Please use `NodeInfoList`
Whether to create a dedicated primary node <li>true: yes </li><li>false: no </li>Default value: false
                     */
                    bool m_enableDedicatedMaster;
                    bool m_enableDedicatedMasterHasBeenSet;

                    /**
                     * This parameter has been disused. Please use `NodeInfoList`
Number of dedicated primary nodes (only 3 and 5 are supported. This value must be passed in if `EnableDedicatedMaster` is `true`)
                     */
                    uint64_t m_masterNodeNum;
                    bool m_masterNodeNumHasBeenSet;

                    /**
                     * This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node type, which must be passed in if `EnableDedicatedMaster` is `true` <li>ES.S1.SMALL2: 1-core 2 GB</li><li>ES.S1.MEDIUM4: 2-core 4 GB</li><li>ES.S1.MEDIUM8: 2-core 8 GB</li><li>ES.S1.LARGE16: 4-core 16 GB</li><li>ES.S1.2XLARGE32: 8-core 32 GB</li><li>ES.S1.4XLARGE32: 16-core 32 GB</li><li>ES.S1.4XLARGE64: 16-core 64 GB</li>
                     */
                    std::string m_masterNodeType;
                    bool m_masterNodeTypeHasBeenSet;

                    /**
                     * This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node disk size in GB, which is optional. If passed in, it can only be 50 and cannot be customized currently
                     */
                    uint64_t m_masterNodeDiskSize;
                    bool m_masterNodeDiskSizeHasBeenSet;

                    /**
                     * ClusterName in the cluster configuration file, which is the instance ID by default and currently cannot be customized
                     */
                    std::string m_clusterNameInConf;
                    bool m_clusterNameInConfHasBeenSet;

                    /**
                     * Cluster deployment mode <li>0: single-AZ deployment </li><li>1: multi-AZ deployment </li>Default value: 0
                     */
                    uint64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * Details of AZs in multi-AZ deployment mode (which is required when DeployMode is 1)
                     */
                    std::vector<ZoneDetail> m_multiZoneInfo;
                    bool m_multiZoneInfoHasBeenSet;

                    /**
                     * License type <li>oss: Open Source Edition </li><li>basic: Basic Edition </li><li>platinum: Platinum Edition </li>Default value: Platinum
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * Node information list, which is used to describe the specification information of various types of nodes in the cluster, such as node type, node quantity, node specification, disk type, and disk size
                     */
                    std::vector<NodeInfo> m_nodeInfoList;
                    bool m_nodeInfoListHasBeenSet;

                    /**
                     * Node tag information list
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
                     */
                    uint64_t m_basicSecurityType;
                    bool m_basicSecurityTypeHasBeenSet;

                    /**
                     * Scenario template type. 0: not enabled; 1: general; 2: log; 3: search
                     */
                    int64_t m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * Visual node configuration
                     */
                    WebNodeTypeInfo m_webNodeTypeInfo;
                    bool m_webNodeTypeInfoHasBeenSet;

                    /**
                     * Valid values: `https`, `http` (default)
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CREATEINSTANCEREQUEST_H_
