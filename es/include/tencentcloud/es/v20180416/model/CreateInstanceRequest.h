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
#include <tencentcloud/es/v20180416/model/OperationDuration.h>
#include <tencentcloud/es/v20180416/model/EnableScheduleOperationDuration.h>
#include <tencentcloud/es/v20180416/model/AutoScaleDiskInfo.h>


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
                     * 获取<p>AZ.</p>
                     * @return Zone <p>AZ.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ.</p>
                     * @param _zone <p>AZ.</p>
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
                     * 获取<p>Instance version (supported: "5.6.4", "6.4.3", "6.8.2", "7.5.1", "7.10.1")</p>
                     * @return EsVersion <p>Instance version (supported: "5.6.4", "6.4.3", "6.8.2", "7.5.1", "7.10.1")</p>
                     * 
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置<p>Instance version (supported: "5.6.4", "6.4.3", "6.8.2", "7.5.1", "7.10.1")</p>
                     * @param _esVersion <p>Instance version (supported: "5.6.4", "6.4.3", "6.8.2", "7.5.1", "7.10.1")</p>
                     * 
                     */
                    void SetEsVersion(const std::string& _esVersion);

                    /**
                     * 判断参数 EsVersion 是否已赋值
                     * @return EsVersion 是否已赋值
                     * 
                     */
                    bool EsVersionHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID</p>
                     * @return VpcId <p>VPC ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID</p>
                     * @param _vpcId <p>VPC ID</p>
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
                     * 获取<p>Subnet ID.</p>
                     * @return SubnetId <p>Subnet ID.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet ID.</p>
                     * @param _subnetId <p>Subnet ID.</p>
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
                     * 获取<p>Access password (8-16 characters, including at least two of the following: [a-z,A-Z], [0-9], and special characters in [-!@#$%&amp;^*+=_:;,.?])</p>
                     * @return Password <p>Access password (8-16 characters, including at least two of the following: [a-z,A-Z], [0-9], and special characters in [-!@#$%&amp;^*+=_:;,.?])</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Access password (8-16 characters, including at least two of the following: [a-z,A-Z], [0-9], and special characters in [-!@#$%&amp;^*+=_:;,.?])</p>
                     * @param _password <p>Access password (8-16 characters, including at least two of the following: [a-z,A-Z], [0-9], and special characters in [-!@#$%&amp;^*+=_:;,.?])</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>Instance name (1-50 English letters, Chinese characters, digits, hyphens -, or underscores _)</p>
                     * @return InstanceName <p>Instance name (1-50 English letters, Chinese characters, digits, hyphens -, or underscores _)</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name (1-50 English letters, Chinese characters, digits, hyphens -, or underscores _)</p>
                     * @param _instanceName <p>Instance name (1-50 English letters, Chinese characters, digits, hyphens -, or underscores _)</p>
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
                     * 获取<p>Abandoned. Please use NodeInfoList<br>Node quantity (2-50)</p>
                     * @return NodeNum <p>Abandoned. Please use NodeInfoList<br>Node quantity (2-50)</p>
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置<p>Abandoned. Please use NodeInfoList<br>Node quantity (2-50)</p>
                     * @param _nodeNum <p>Abandoned. Please use NodeInfoList<br>Node quantity (2-50)</p>
                     * 
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Billing type<li>PREPAID: prepaid, i.e., monthly subscription</li><li>POSTPAID_BY_HOUR: pay-as-you-go by hour</li>Default value: POSTPAID_BY_HOUR</p>
                     * @return ChargeType <p>Billing type<li>PREPAID: prepaid, i.e., monthly subscription</li><li>POSTPAID_BY_HOUR: pay-as-you-go by hour</li>Default value: POSTPAID_BY_HOUR</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>Billing type<li>PREPAID: prepaid, i.e., monthly subscription</li><li>POSTPAID_BY_HOUR: pay-as-you-go by hour</li>Default value: POSTPAID_BY_HOUR</p>
                     * @param _chargeType <p>Billing type<li>PREPAID: prepaid, i.e., monthly subscription</li><li>POSTPAID_BY_HOUR: pay-as-you-go by hour</li>Default value: POSTPAID_BY_HOUR</p>
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Annual and monthly subscription duration (unit determined by the TimeUnit parameter)</p>
                     * @return ChargePeriod <p>Annual and monthly subscription duration (unit determined by the TimeUnit parameter)</p>
                     * 
                     */
                    uint64_t GetChargePeriod() const;

                    /**
                     * 设置<p>Annual and monthly subscription duration (unit determined by the TimeUnit parameter)</p>
                     * @param _chargePeriod <p>Annual and monthly subscription duration (unit determined by the TimeUnit parameter)</p>
                     * 
                     */
                    void SetChargePeriod(const uint64_t& _chargePeriod);

                    /**
                     * 判断参数 ChargePeriod 是否已赋值
                     * @return ChargePeriod 是否已赋值
                     * 
                     */
                    bool ChargePeriodHasBeenSet() const;

                    /**
                     * 获取<p>Auto-renewal flag<li>RENEW_FLAG_AUTO: auto renewal</li><li>RENEW_FLAG_MANUAL: no auto-renewal, user renews manually</li>This needs to be set when ChargeType is PREPAID. If this parameter is not passed, no automatic renewal by default for general users, and auto renewal for SVIP users</p>
                     * @return RenewFlag <p>Auto-renewal flag<li>RENEW_FLAG_AUTO: auto renewal</li><li>RENEW_FLAG_MANUAL: no auto-renewal, user renews manually</li>This needs to be set when ChargeType is PREPAID. If this parameter is not passed, no automatic renewal by default for general users, and auto renewal for SVIP users</p>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置<p>Auto-renewal flag<li>RENEW_FLAG_AUTO: auto renewal</li><li>RENEW_FLAG_MANUAL: no auto-renewal, user renews manually</li>This needs to be set when ChargeType is PREPAID. If this parameter is not passed, no automatic renewal by default for general users, and auto renewal for SVIP users</p>
                     * @param _renewFlag <p>Auto-renewal flag<li>RENEW_FLAG_AUTO: auto renewal</li><li>RENEW_FLAG_MANUAL: no auto-renewal, user renews manually</li>This needs to be set when ChargeType is PREPAID. If this parameter is not passed, no automatic renewal by default for general users, and auto renewal for SVIP users</p>
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>Abandoned. Please use NodeInfoList<br>Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * @return NodeType <p>Abandoned. Please use NodeInfoList<br>Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>Abandoned. Please use NodeInfoList<br>Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * @param _nodeType <p>Abandoned. Please use NodeInfoList<br>Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Abandoned. Please use NodeInfoList<br>Node disk type<li>CLOUD_SSD: ssd cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud block storage</li><li>CLOUD_HSSD: enhanced SSD cloud disk</li><li>CLOUD_BSSD: universal type SSD cloud disk</li>Default value: CLOUD_SSD</p>
                     * @return DiskType <p>Abandoned. Please use NodeInfoList<br>Node disk type<li>CLOUD_SSD: ssd cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud block storage</li><li>CLOUD_HSSD: enhanced SSD cloud disk</li><li>CLOUD_BSSD: universal type SSD cloud disk</li>Default value: CLOUD_SSD</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>Abandoned. Please use NodeInfoList<br>Node disk type<li>CLOUD_SSD: ssd cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud block storage</li><li>CLOUD_HSSD: enhanced SSD cloud disk</li><li>CLOUD_BSSD: universal type SSD cloud disk</li>Default value: CLOUD_SSD</p>
                     * @param _diskType <p>Abandoned. Please use NodeInfoList<br>Node disk type<li>CLOUD_SSD: ssd cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud block storage</li><li>CLOUD_HSSD: enhanced SSD cloud disk</li><li>CLOUD_BSSD: universal type SSD cloud disk</li>Default value: CLOUD_SSD</p>
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
                     * 获取<p>Abandoned. Please use NodeInfoList<br>Node disk capacity (unit: GB)</p>
                     * @return DiskSize <p>Abandoned. Please use NodeInfoList<br>Node disk capacity (unit: GB)</p>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置<p>Abandoned. Please use NodeInfoList<br>Node disk capacity (unit: GB)</p>
                     * @param _diskSize <p>Abandoned. Please use NodeInfoList<br>Node disk capacity (unit: GB)</p>
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>Billing duration unit (needs to be set when ChargeType is PREPAID. Default value: "m", which means month. Currently only support "m")</p>
                     * @return TimeUnit <p>Billing duration unit (needs to be set when ChargeType is PREPAID. Default value: "m", which means month. Currently only support "m")</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>Billing duration unit (needs to be set when ChargeType is PREPAID. Default value: "m", which means month. Currently only support "m")</p>
                     * @param _timeUnit <p>Billing duration unit (needs to be set when ChargeType is PREPAID. Default value: "m", which means month. Currently only support "m")</p>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<p>Indicates whether to use vouchers automatically<li>0: Do not use automatically.</li><li>1: Use automatically.</li>Default value: 0.</p>
                     * @return AutoVoucher <p>Indicates whether to use vouchers automatically<li>0: Do not use automatically.</li><li>1: Use automatically.</li>Default value: 0.</p>
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>Indicates whether to use vouchers automatically<li>0: Do not use automatically.</li><li>1: Use automatically.</li>Default value: 0.</p>
                     * @param _autoVoucher <p>Indicates whether to use vouchers automatically<li>0: Do not use automatically.</li><li>1: Use automatically.</li>Default value: 0.</p>
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
                     * 获取<p>Voucher ID list. Only one voucher can be specified.</p>
                     * @return VoucherIds <p>Voucher ID list. Only one voucher can be specified.</p>
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置<p>Voucher ID list. Only one voucher can be specified.</p>
                     * @param _voucherIds <p>Voucher ID list. Only one voucher can be specified.</p>
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取<p>Abandoned. Please use NodeInfoList<br>Whether to create a dedicated master node<li>true: enable a dedicated master node</li><li>false: disable a dedicated master node</li>Default value: false</p>
                     * @return EnableDedicatedMaster <p>Abandoned. Please use NodeInfoList<br>Whether to create a dedicated master node<li>true: enable a dedicated master node</li><li>false: disable a dedicated master node</li>Default value: false</p>
                     * 
                     */
                    bool GetEnableDedicatedMaster() const;

                    /**
                     * 设置<p>Abandoned. Please use NodeInfoList<br>Whether to create a dedicated master node<li>true: enable a dedicated master node</li><li>false: disable a dedicated master node</li>Default value: false</p>
                     * @param _enableDedicatedMaster <p>Abandoned. Please use NodeInfoList<br>Whether to create a dedicated master node<li>true: enable a dedicated master node</li><li>false: disable a dedicated master node</li>Default value: false</p>
                     * 
                     */
                    void SetEnableDedicatedMaster(const bool& _enableDedicatedMaster);

                    /**
                     * 判断参数 EnableDedicatedMaster 是否已赋值
                     * @return EnableDedicatedMaster 是否已赋值
                     * 
                     */
                    bool EnableDedicatedMasterHasBeenSet() const;

                    /**
                     * 获取<p>Abandoned. Please use NodeInfoList<br>Number of dedicated primary nodes (supports only 3 or 5. Required if EnableDedicatedMaster is true)</p>
                     * @return MasterNodeNum <p>Abandoned. Please use NodeInfoList<br>Number of dedicated primary nodes (supports only 3 or 5. Required if EnableDedicatedMaster is true)</p>
                     * 
                     */
                    uint64_t GetMasterNodeNum() const;

                    /**
                     * 设置<p>Abandoned. Please use NodeInfoList<br>Number of dedicated primary nodes (supports only 3 or 5. Required if EnableDedicatedMaster is true)</p>
                     * @param _masterNodeNum <p>Abandoned. Please use NodeInfoList<br>Number of dedicated primary nodes (supports only 3 or 5. Required if EnableDedicatedMaster is true)</p>
                     * 
                     */
                    void SetMasterNodeNum(const uint64_t& _masterNodeNum);

                    /**
                     * 判断参数 MasterNodeNum 是否已赋值
                     * @return MasterNodeNum 是否已赋值
                     * 
                     */
                    bool MasterNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Abandoned. Please use NodeInfoList<br>Dedicated primary node type (required if EnableDedicatedMaster is true)<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * @return MasterNodeType <p>Abandoned. Please use NodeInfoList<br>Dedicated primary node type (required if EnableDedicatedMaster is true)<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * 
                     */
                    std::string GetMasterNodeType() const;

                    /**
                     * 设置<p>Abandoned. Please use NodeInfoList<br>Dedicated primary node type (required if EnableDedicatedMaster is true)<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * @param _masterNodeType <p>Abandoned. Please use NodeInfoList<br>Dedicated primary node type (required if EnableDedicatedMaster is true)<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * 
                     */
                    void SetMasterNodeType(const std::string& _masterNodeType);

                    /**
                     * 判断参数 MasterNodeType 是否已赋值
                     * @return MasterNodeType 是否已赋值
                     * 
                     */
                    bool MasterNodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Abandoned. Please use NodeInfoList<br>Dedicated primary node disk size (in GB, optional; if transmitted, it must be 50. Customization is not supported temporarily)</p>
                     * @return MasterNodeDiskSize <p>Abandoned. Please use NodeInfoList<br>Dedicated primary node disk size (in GB, optional; if transmitted, it must be 50. Customization is not supported temporarily)</p>
                     * 
                     */
                    uint64_t GetMasterNodeDiskSize() const;

                    /**
                     * 设置<p>Abandoned. Please use NodeInfoList<br>Dedicated primary node disk size (in GB, optional; if transmitted, it must be 50. Customization is not supported temporarily)</p>
                     * @param _masterNodeDiskSize <p>Abandoned. Please use NodeInfoList<br>Dedicated primary node disk size (in GB, optional; if transmitted, it must be 50. Customization is not supported temporarily)</p>
                     * 
                     */
                    void SetMasterNodeDiskSize(const uint64_t& _masterNodeDiskSize);

                    /**
                     * 判断参数 MasterNodeDiskSize 是否已赋值
                     * @return MasterNodeDiskSize 是否已赋值
                     * 
                     */
                    bool MasterNodeDiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>ClusterName in the cluster configuration file (system default configuration is the instance ID, customization is not supported temporarily)</p>
                     * @return ClusterNameInConf <p>ClusterName in the cluster configuration file (system default configuration is the instance ID, customization is not supported temporarily)</p>
                     * 
                     */
                    std::string GetClusterNameInConf() const;

                    /**
                     * 设置<p>ClusterName in the cluster configuration file (system default configuration is the instance ID, customization is not supported temporarily)</p>
                     * @param _clusterNameInConf <p>ClusterName in the cluster configuration file (system default configuration is the instance ID, customization is not supported temporarily)</p>
                     * 
                     */
                    void SetClusterNameInConf(const std::string& _clusterNameInConf);

                    /**
                     * 判断参数 ClusterNameInConf 是否已赋值
                     * @return ClusterNameInConf 是否已赋值
                     * 
                     */
                    bool ClusterNameInConfHasBeenSet() const;

                    /**
                     * 获取<p>Cluster deployment method<li>0: single-AZ deployment</li><li>1: multi-AZ deployment, Beijing, Shanghai, Shanghai Finance, Guangzhou, Nanjing, Hong Kong, Singapore, Frankfurt (allowlist control)</li>Default value: 0</p>
                     * @return DeployMode <p>Cluster deployment method<li>0: single-AZ deployment</li><li>1: multi-AZ deployment, Beijing, Shanghai, Shanghai Finance, Guangzhou, Nanjing, Hong Kong, Singapore, Frankfurt (allowlist control)</li>Default value: 0</p>
                     * 
                     */
                    uint64_t GetDeployMode() const;

                    /**
                     * 设置<p>Cluster deployment method<li>0: single-AZ deployment</li><li>1: multi-AZ deployment, Beijing, Shanghai, Shanghai Finance, Guangzhou, Nanjing, Hong Kong, Singapore, Frankfurt (allowlist control)</li>Default value: 0</p>
                     * @param _deployMode <p>Cluster deployment method<li>0: single-AZ deployment</li><li>1: multi-AZ deployment, Beijing, Shanghai, Shanghai Finance, Guangzhou, Nanjing, Hong Kong, Singapore, Frankfurt (allowlist control)</li>Default value: 0</p>
                     * 
                     */
                    void SetDeployMode(const uint64_t& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取<p>Detailed information of availability zones in multi-AZ deployment (required when DeployMode is 1)</p>
                     * @return MultiZoneInfo <p>Detailed information of availability zones in multi-AZ deployment (required when DeployMode is 1)</p>
                     * 
                     */
                    std::vector<ZoneDetail> GetMultiZoneInfo() const;

                    /**
                     * 设置<p>Detailed information of availability zones in multi-AZ deployment (required when DeployMode is 1)</p>
                     * @param _multiZoneInfo <p>Detailed information of availability zones in multi-AZ deployment (required when DeployMode is 1)</p>
                     * 
                     */
                    void SetMultiZoneInfo(const std::vector<ZoneDetail>& _multiZoneInfo);

                    /**
                     * 判断参数 MultiZoneInfo 是否已赋值
                     * @return MultiZoneInfo 是否已赋值
                     * 
                     */
                    bool MultiZoneInfoHasBeenSet() const;

                    /**
                     * 获取<p>License type<li>oss: open source edition</li><li>basic: basic version</li><li>platinum: platinum version</li>Default value: platinum</p>
                     * @return LicenseType <p>License type<li>oss: open source edition</li><li>basic: basic version</li><li>platinum: platinum version</li>Default value: platinum</p>
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置<p>License type<li>oss: open source edition</li><li>basic: basic version</li><li>platinum: platinum version</li>Default value: platinum</p>
                     * @param _licenseType <p>License type<li>oss: open source edition</li><li>basic: basic version</li><li>platinum: platinum version</li>Default value: platinum</p>
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取<p>Node information list, for description of the specification information of various types of nodes in the cluster, such as node type, number of nodes, node specification, disk type, and disk size</p>
                     * @return NodeInfoList <p>Node information list, for description of the specification information of various types of nodes in the cluster, such as node type, number of nodes, node specification, disk type, and disk size</p>
                     * 
                     */
                    std::vector<NodeInfo> GetNodeInfoList() const;

                    /**
                     * 设置<p>Node information list, for description of the specification information of various types of nodes in the cluster, such as node type, number of nodes, node specification, disk type, and disk size</p>
                     * @param _nodeInfoList <p>Node information list, for description of the specification information of various types of nodes in the cluster, such as node type, number of nodes, node specification, disk type, and disk size</p>
                     * 
                     */
                    void SetNodeInfoList(const std::vector<NodeInfo>& _nodeInfoList);

                    /**
                     * 判断参数 NodeInfoList 是否已赋值
                     * @return NodeInfoList 是否已赋值
                     * 
                     */
                    bool NodeInfoListHasBeenSet() const;

                    /**
                     * 获取<p>Node tag information list</p>
                     * @return TagList <p>Node tag information list</p>
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置<p>Node tag information list</p>
                     * @param _tagList <p>Node tag information list</p>
                     * 
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>Whether xpack security authentication is enabled for basic version 6.8 (and above versions)<li>1: not enabled</li><li>2: enabled</li></p>
                     * @return BasicSecurityType <p>Whether xpack security authentication is enabled for basic version 6.8 (and above versions)<li>1: not enabled</li><li>2: enabled</li></p>
                     * 
                     */
                    uint64_t GetBasicSecurityType() const;

                    /**
                     * 设置<p>Whether xpack security authentication is enabled for basic version 6.8 (and above versions)<li>1: not enabled</li><li>2: enabled</li></p>
                     * @param _basicSecurityType <p>Whether xpack security authentication is enabled for basic version 6.8 (and above versions)<li>1: not enabled</li><li>2: enabled</li></p>
                     * 
                     */
                    void SetBasicSecurityType(const uint64_t& _basicSecurityType);

                    /**
                     * 判断参数 BasicSecurityType 是否已赋值
                     * @return BasicSecurityType 是否已赋值
                     * 
                     */
                    bool BasicSecurityTypeHasBeenSet() const;

                    /**
                     * 获取<p>Scenario template type 0: disabled 1: common 2: log 3: search</p>
                     * @return SceneType <p>Scenario template type 0: disabled 1: common 2: log 3: search</p>
                     * 
                     */
                    int64_t GetSceneType() const;

                    /**
                     * 设置<p>Scenario template type 0: disabled 1: common 2: log 3: search</p>
                     * @param _sceneType <p>Scenario template type 0: disabled 1: common 2: log 3: search</p>
                     * 
                     */
                    void SetSceneType(const int64_t& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取<p>Visualize node configuration</p>
                     * @return WebNodeTypeInfo <p>Visualize node configuration</p>
                     * 
                     */
                    WebNodeTypeInfo GetWebNodeTypeInfo() const;

                    /**
                     * 设置<p>Visualize node configuration</p>
                     * @param _webNodeTypeInfo <p>Visualize node configuration</p>
                     * 
                     */
                    void SetWebNodeTypeInfo(const WebNodeTypeInfo& _webNodeTypeInfo);

                    /**
                     * 判断参数 WebNodeTypeInfo 是否已赋值
                     * @return WebNodeTypeInfo 是否已赋值
                     * 
                     */
                    bool WebNodeTypeInfoHasBeenSet() const;

                    /**
                     * 获取<p>Create an https cluster. http is selected by default.</p>
                     * @return Protocol <p>Create an https cluster. http is selected by default.</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>Create an https cluster. http is selected by default.</p>
                     * @param _protocol <p>Create an https cluster. http is selected by default.</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>Maintenance time slot</p>
                     * @return OperationDuration <p>Maintenance time slot</p>
                     * 
                     */
                    OperationDuration GetOperationDuration() const;

                    /**
                     * 设置<p>Maintenance time slot</p>
                     * @param _operationDuration <p>Maintenance time slot</p>
                     * 
                     */
                    void SetOperationDuration(const OperationDuration& _operationDuration);

                    /**
                     * 判断参数 OperationDuration 是否已赋值
                     * @return OperationDuration 是否已赋值
                     * 
                     */
                    bool OperationDurationHasBeenSet() const;

                    /**
                     * 获取<p>Whether storage-compute separation is enabled</p>
                     * @return EnableHybridStorage <p>Whether storage-compute separation is enabled</p>
                     * 
                     */
                    bool GetEnableHybridStorage() const;

                    /**
                     * 设置<p>Whether storage-compute separation is enabled</p>
                     * @param _enableHybridStorage <p>Whether storage-compute separation is enabled</p>
                     * 
                     */
                    void SetEnableHybridStorage(const bool& _enableHybridStorage);

                    /**
                     * 判断参数 EnableHybridStorage 是否已赋值
                     * @return EnableHybridStorage 是否已赋值
                     * 
                     */
                    bool EnableHybridStorageHasBeenSet() const;

                    /**
                     * 获取<p>Additional hard disk performance</p>
                     * @return DiskEnhance <p>Additional hard disk performance</p>
                     * 
                     */
                    uint64_t GetDiskEnhance() const;

                    /**
                     * 设置<p>Additional hard disk performance</p>
                     * @param _diskEnhance <p>Additional hard disk performance</p>
                     * 
                     */
                    void SetDiskEnhance(const uint64_t& _diskEnhance);

                    /**
                     * 判断参数 DiskEnhance 是否已赋值
                     * @return DiskEnhance 是否已赋值
                     * 
                     */
                    bool DiskEnhanceHasBeenSet() const;

                    /**
                     * 获取<p>Whether intelligent check is enabled</p>
                     * @return EnableDiagnose <p>Whether intelligent check is enabled</p>
                     * 
                     */
                    bool GetEnableDiagnose() const;

                    /**
                     * 设置<p>Whether intelligent check is enabled</p>
                     * @param _enableDiagnose <p>Whether intelligent check is enabled</p>
                     * 
                     */
                    void SetEnableDiagnose(const bool& _enableDiagnose);

                    /**
                     * 判断参数 EnableDiagnose 是否已赋值
                     * @return EnableDiagnose 是否已赋值
                     * 
                     */
                    bool EnableDiagnoseHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable automatic backup</p>
                     * @return EnableCosBackup <p>Whether to enable automatic backup</p>
                     * 
                     */
                    bool GetEnableCosBackup() const;

                    /**
                     * 设置<p>Whether to enable automatic backup</p>
                     * @param _enableCosBackup <p>Whether to enable automatic backup</p>
                     * 
                     */
                    void SetEnableCosBackup(const bool& _enableCosBackup);

                    /**
                     * 判断参数 EnableCosBackup 是否已赋值
                     * @return EnableCosBackup 是否已赋值
                     * 
                     */
                    bool EnableCosBackupHasBeenSet() const;

                    /**
                     * 获取<p>cdcId, pass it when using a CDC subnet</p>
                     * @return CdcId <p>cdcId, pass it when using a CDC subnet</p>
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>cdcId, pass it when using a CDC subnet</p>
                     * @param _cdcId <p>cdcId, pass it when using a CDC subnet</p>
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取<p>Placement group affinity. Value range: [0,10]. 0 indicates disabled.</p>
                     * @return DisasterRecoverGroupAffinity <p>Placement group affinity. Value range: [0,10]. 0 indicates disabled.</p>
                     * 
                     */
                    uint64_t GetDisasterRecoverGroupAffinity() const;

                    /**
                     * 设置<p>Placement group affinity. Value range: [0,10]. 0 indicates disabled.</p>
                     * @param _disasterRecoverGroupAffinity <p>Placement group affinity. Value range: [0,10]. 0 indicates disabled.</p>
                     * 
                     */
                    void SetDisasterRecoverGroupAffinity(const uint64_t& _disasterRecoverGroupAffinity);

                    /**
                     * 判断参数 DisasterRecoverGroupAffinity 是否已赋值
                     * @return DisasterRecoverGroupAffinity 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupAffinityHasBeenSet() const;

                    /**
                     * 获取<p>Enumeration values of sub-product ID: open source edition: "sp_es_io2", basic version: "sp_es_basic", platinum version: "sp_es_platinum", enterprise edition: "sp_es_enterprise", CDC platinum version: "sp_es_CDC_platinum", Log Enhancement Edition: "sp_es_enlogging", tsearch: "sp_tsearch_io2", logstash: "sp_es_logstash". It can be empty. When it is empty, the backend maps this field based on LicenseType.</p>
                     * @return SubProductCode <p>Enumeration values of sub-product ID: open source edition: "sp_es_io2", basic version: "sp_es_basic", platinum version: "sp_es_platinum", enterprise edition: "sp_es_enterprise", CDC platinum version: "sp_es_CDC_platinum", Log Enhancement Edition: "sp_es_enlogging", tsearch: "sp_tsearch_io2", logstash: "sp_es_logstash". It can be empty. When it is empty, the backend maps this field based on LicenseType.</p>
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置<p>Enumeration values of sub-product ID: open source edition: "sp_es_io2", basic version: "sp_es_basic", platinum version: "sp_es_platinum", enterprise edition: "sp_es_enterprise", CDC platinum version: "sp_es_CDC_platinum", Log Enhancement Edition: "sp_es_enlogging", tsearch: "sp_tsearch_io2", logstash: "sp_es_logstash". It can be empty. When it is empty, the backend maps this field based on LicenseType.</p>
                     * @param _subProductCode <p>Enumeration values of sub-product ID: open source edition: "sp_es_io2", basic version: "sp_es_basic", platinum version: "sp_es_platinum", enterprise edition: "sp_es_enterprise", CDC platinum version: "sp_es_CDC_platinum", Log Enhancement Edition: "sp_es_enlogging", tsearch: "sp_tsearch_io2", logstash: "sp_es_logstash". It can be empty. When it is empty, the backend maps this field based on LicenseType.</p>
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取<p>Read-write separation mode: 0: not enabled; 1: local read/write separation; 2: remote read/write separation.</p>
                     * @return ReadWriteMode <p>Read-write separation mode: 0: not enabled; 1: local read/write separation; 2: remote read/write separation.</p>
                     * 
                     */
                    int64_t GetReadWriteMode() const;

                    /**
                     * 设置<p>Read-write separation mode: 0: not enabled; 1: local read/write separation; 2: remote read/write separation.</p>
                     * @param _readWriteMode <p>Read-write separation mode: 0: not enabled; 1: local read/write separation; 2: remote read/write separation.</p>
                     * 
                     */
                    void SetReadWriteMode(const int64_t& _readWriteMode);

                    /**
                     * 判断参数 ReadWriteMode 是否已赋值
                     * @return ReadWriteMode 是否已赋值
                     * 
                     */
                    bool ReadWriteModeHasBeenSet() const;

                    /**
                     * 获取<p>Whether the placement group has asynchronous tasks enabled</p>
                     * @return EnableScheduleRecoverGroup <p>Whether the placement group has asynchronous tasks enabled</p>
                     * 
                     */
                    bool GetEnableScheduleRecoverGroup() const;

                    /**
                     * 设置<p>Whether the placement group has asynchronous tasks enabled</p>
                     * @param _enableScheduleRecoverGroup <p>Whether the placement group has asynchronous tasks enabled</p>
                     * 
                     */
                    void SetEnableScheduleRecoverGroup(const bool& _enableScheduleRecoverGroup);

                    /**
                     * 判断参数 EnableScheduleRecoverGroup 是否已赋值
                     * @return EnableScheduleRecoverGroup 是否已赋值
                     * 
                     */
                    bool EnableScheduleRecoverGroupHasBeenSet() const;

                    /**
                     * 获取<p>Maintenance time slot for enabling async tasks in a placement group</p>
                     * @return EnableScheduleOperationDuration <p>Maintenance time slot for enabling async tasks in a placement group</p>
                     * 
                     */
                    EnableScheduleOperationDuration GetEnableScheduleOperationDuration() const;

                    /**
                     * 设置<p>Maintenance time slot for enabling async tasks in a placement group</p>
                     * @param _enableScheduleOperationDuration <p>Maintenance time slot for enabling async tasks in a placement group</p>
                     * 
                     */
                    void SetEnableScheduleOperationDuration(const EnableScheduleOperationDuration& _enableScheduleOperationDuration);

                    /**
                     * 判断参数 EnableScheduleOperationDuration 是否已赋值
                     * @return EnableScheduleOperationDuration 是否已赋值
                     * 
                     */
                    bool EnableScheduleOperationDurationHasBeenSet() const;

                    /**
                     * 获取<p>Auto capacity expansion parameter list</p>
                     * @return AutoScaleDiskInfoList <p>Auto capacity expansion parameter list</p>
                     * 
                     */
                    std::vector<AutoScaleDiskInfo> GetAutoScaleDiskInfoList() const;

                    /**
                     * 设置<p>Auto capacity expansion parameter list</p>
                     * @param _autoScaleDiskInfoList <p>Auto capacity expansion parameter list</p>
                     * 
                     */
                    void SetAutoScaleDiskInfoList(const std::vector<AutoScaleDiskInfo>& _autoScaleDiskInfoList);

                    /**
                     * 判断参数 AutoScaleDiskInfoList 是否已赋值
                     * @return AutoScaleDiskInfoList 是否已赋值
                     * 
                     */
                    bool AutoScaleDiskInfoListHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable public network access to kibana. Enabled by default if not passed</p>
                     * @return EnableKibanaPublicAccess <p>Whether to enable public network access to kibana. Enabled by default if not passed</p>
                     * 
                     */
                    std::string GetEnableKibanaPublicAccess() const;

                    /**
                     * 设置<p>Whether to enable public network access to kibana. Enabled by default if not passed</p>
                     * @param _enableKibanaPublicAccess <p>Whether to enable public network access to kibana. Enabled by default if not passed</p>
                     * 
                     */
                    void SetEnableKibanaPublicAccess(const std::string& _enableKibanaPublicAccess);

                    /**
                     * 判断参数 EnableKibanaPublicAccess 是否已赋值
                     * @return EnableKibanaPublicAccess 是否已赋值
                     * 
                     */
                    bool EnableKibanaPublicAccessHasBeenSet() const;

                    /**
                     * 获取<p>Existing cloud monitoring and alarm policy ID</p>
                     * @return AlarmPolicyIds <p>Existing cloud monitoring and alarm policy ID</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyIds() const;

                    /**
                     * 设置<p>Existing cloud monitoring and alarm policy ID</p>
                     * @param _alarmPolicyIds <p>Existing cloud monitoring and alarm policy ID</p>
                     * 
                     */
                    void SetAlarmPolicyIds(const std::vector<std::string>& _alarmPolicyIds);

                    /**
                     * 判断参数 AlarmPolicyIds 是否已赋值
                     * @return AlarmPolicyIds 是否已赋值
                     * 
                     */
                    bool AlarmPolicyIdsHasBeenSet() const;

                private:

                    /**
                     * <p>AZ.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Instance version (supported: "5.6.4", "6.4.3", "6.8.2", "7.5.1", "7.10.1")</p>
                     */
                    std::string m_esVersion;
                    bool m_esVersionHasBeenSet;

                    /**
                     * <p>VPC ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Access password (8-16 characters, including at least two of the following: [a-z,A-Z], [0-9], and special characters in [-!@#$%&amp;^*+=_:;,.?])</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Instance name (1-50 English letters, Chinese characters, digits, hyphens -, or underscores _)</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Abandoned. Please use NodeInfoList<br>Node quantity (2-50)</p>
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * <p>Billing type<li>PREPAID: prepaid, i.e., monthly subscription</li><li>POSTPAID_BY_HOUR: pay-as-you-go by hour</li>Default value: POSTPAID_BY_HOUR</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>Annual and monthly subscription duration (unit determined by the TimeUnit parameter)</p>
                     */
                    uint64_t m_chargePeriod;
                    bool m_chargePeriodHasBeenSet;

                    /**
                     * <p>Auto-renewal flag<li>RENEW_FLAG_AUTO: auto renewal</li><li>RENEW_FLAG_MANUAL: no auto-renewal, user renews manually</li>This needs to be set when ChargeType is PREPAID. If this parameter is not passed, no automatic renewal by default for general users, and auto renewal for SVIP users</p>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>Abandoned. Please use NodeInfoList<br>Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>Abandoned. Please use NodeInfoList<br>Node disk type<li>CLOUD_SSD: ssd cloud disk</li><li>CLOUD_PREMIUM: high-performance cloud block storage</li><li>CLOUD_HSSD: enhanced SSD cloud disk</li><li>CLOUD_BSSD: universal type SSD cloud disk</li>Default value: CLOUD_SSD</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>Abandoned. Please use NodeInfoList<br>Node disk capacity (unit: GB)</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>Billing duration unit (needs to be set when ChargeType is PREPAID. Default value: "m", which means month. Currently only support "m")</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>Indicates whether to use vouchers automatically<li>0: Do not use automatically.</li><li>1: Use automatically.</li>Default value: 0.</p>
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>Voucher ID list. Only one voucher can be specified.</p>
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * <p>Abandoned. Please use NodeInfoList<br>Whether to create a dedicated master node<li>true: enable a dedicated master node</li><li>false: disable a dedicated master node</li>Default value: false</p>
                     */
                    bool m_enableDedicatedMaster;
                    bool m_enableDedicatedMasterHasBeenSet;

                    /**
                     * <p>Abandoned. Please use NodeInfoList<br>Number of dedicated primary nodes (supports only 3 or 5. Required if EnableDedicatedMaster is true)</p>
                     */
                    uint64_t m_masterNodeNum;
                    bool m_masterNodeNumHasBeenSet;

                    /**
                     * <p>Abandoned. Please use NodeInfoList<br>Dedicated primary node type (required if EnableDedicatedMaster is true)<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     */
                    std::string m_masterNodeType;
                    bool m_masterNodeTypeHasBeenSet;

                    /**
                     * <p>Abandoned. Please use NodeInfoList<br>Dedicated primary node disk size (in GB, optional; if transmitted, it must be 50. Customization is not supported temporarily)</p>
                     */
                    uint64_t m_masterNodeDiskSize;
                    bool m_masterNodeDiskSizeHasBeenSet;

                    /**
                     * <p>ClusterName in the cluster configuration file (system default configuration is the instance ID, customization is not supported temporarily)</p>
                     */
                    std::string m_clusterNameInConf;
                    bool m_clusterNameInConfHasBeenSet;

                    /**
                     * <p>Cluster deployment method<li>0: single-AZ deployment</li><li>1: multi-AZ deployment, Beijing, Shanghai, Shanghai Finance, Guangzhou, Nanjing, Hong Kong, Singapore, Frankfurt (allowlist control)</li>Default value: 0</p>
                     */
                    uint64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * <p>Detailed information of availability zones in multi-AZ deployment (required when DeployMode is 1)</p>
                     */
                    std::vector<ZoneDetail> m_multiZoneInfo;
                    bool m_multiZoneInfoHasBeenSet;

                    /**
                     * <p>License type<li>oss: open source edition</li><li>basic: basic version</li><li>platinum: platinum version</li>Default value: platinum</p>
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <p>Node information list, for description of the specification information of various types of nodes in the cluster, such as node type, number of nodes, node specification, disk type, and disk size</p>
                     */
                    std::vector<NodeInfo> m_nodeInfoList;
                    bool m_nodeInfoListHasBeenSet;

                    /**
                     * <p>Node tag information list</p>
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>Whether xpack security authentication is enabled for basic version 6.8 (and above versions)<li>1: not enabled</li><li>2: enabled</li></p>
                     */
                    uint64_t m_basicSecurityType;
                    bool m_basicSecurityTypeHasBeenSet;

                    /**
                     * <p>Scenario template type 0: disabled 1: common 2: log 3: search</p>
                     */
                    int64_t m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>Visualize node configuration</p>
                     */
                    WebNodeTypeInfo m_webNodeTypeInfo;
                    bool m_webNodeTypeInfoHasBeenSet;

                    /**
                     * <p>Create an https cluster. http is selected by default.</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>Maintenance time slot</p>
                     */
                    OperationDuration m_operationDuration;
                    bool m_operationDurationHasBeenSet;

                    /**
                     * <p>Whether storage-compute separation is enabled</p>
                     */
                    bool m_enableHybridStorage;
                    bool m_enableHybridStorageHasBeenSet;

                    /**
                     * <p>Additional hard disk performance</p>
                     */
                    uint64_t m_diskEnhance;
                    bool m_diskEnhanceHasBeenSet;

                    /**
                     * <p>Whether intelligent check is enabled</p>
                     */
                    bool m_enableDiagnose;
                    bool m_enableDiagnoseHasBeenSet;

                    /**
                     * <p>Whether to enable automatic backup</p>
                     */
                    bool m_enableCosBackup;
                    bool m_enableCosBackupHasBeenSet;

                    /**
                     * <p>cdcId, pass it when using a CDC subnet</p>
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * <p>Placement group affinity. Value range: [0,10]. 0 indicates disabled.</p>
                     */
                    uint64_t m_disasterRecoverGroupAffinity;
                    bool m_disasterRecoverGroupAffinityHasBeenSet;

                    /**
                     * <p>Enumeration values of sub-product ID: open source edition: "sp_es_io2", basic version: "sp_es_basic", platinum version: "sp_es_platinum", enterprise edition: "sp_es_enterprise", CDC platinum version: "sp_es_CDC_platinum", Log Enhancement Edition: "sp_es_enlogging", tsearch: "sp_tsearch_io2", logstash: "sp_es_logstash". It can be empty. When it is empty, the backend maps this field based on LicenseType.</p>
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * <p>Read-write separation mode: 0: not enabled; 1: local read/write separation; 2: remote read/write separation.</p>
                     */
                    int64_t m_readWriteMode;
                    bool m_readWriteModeHasBeenSet;

                    /**
                     * <p>Whether the placement group has asynchronous tasks enabled</p>
                     */
                    bool m_enableScheduleRecoverGroup;
                    bool m_enableScheduleRecoverGroupHasBeenSet;

                    /**
                     * <p>Maintenance time slot for enabling async tasks in a placement group</p>
                     */
                    EnableScheduleOperationDuration m_enableScheduleOperationDuration;
                    bool m_enableScheduleOperationDurationHasBeenSet;

                    /**
                     * <p>Auto capacity expansion parameter list</p>
                     */
                    std::vector<AutoScaleDiskInfo> m_autoScaleDiskInfoList;
                    bool m_autoScaleDiskInfoListHasBeenSet;

                    /**
                     * <p>Whether to enable public network access to kibana. Enabled by default if not passed</p>
                     */
                    std::string m_enableKibanaPublicAccess;
                    bool m_enableKibanaPublicAccessHasBeenSet;

                    /**
                     * <p>Existing cloud monitoring and alarm policy ID</p>
                     */
                    std::vector<std::string> m_alarmPolicyIds;
                    bool m_alarmPolicyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CREATEINSTANCEREQUEST_H_
