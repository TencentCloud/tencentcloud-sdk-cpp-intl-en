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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/EsAcl.h>
#include <tencentcloud/es/v20180416/model/EsDictionaryInfo.h>
#include <tencentcloud/es/v20180416/model/MasterNodeInfo.h>
#include <tencentcloud/es/v20180416/model/CosBackup.h>
#include <tencentcloud/es/v20180416/model/TagInfo.h>
#include <tencentcloud/es/v20180416/model/NodeInfo.h>
#include <tencentcloud/es/v20180416/model/ZoneDetail.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Instance details
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param InstanceName Instance name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Region Region
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param Region Region
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

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
                     * 获取User ID
                     * @return AppId User ID
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置User ID
                     * @param AppId User ID
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取User UIN
                     * @return Uin User UIN
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
                     * @param Uin User UIN
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取UID of the VPC where the instance resides
                     * @return VpcUid UID of the VPC where the instance resides
                     */
                    std::string GetVpcUid() const;

                    /**
                     * 设置UID of the VPC where the instance resides
                     * @param VpcUid UID of the VPC where the instance resides
                     */
                    void SetVpcUid(const std::string& _vpcUid);

                    /**
                     * 判断参数 VpcUid 是否已赋值
                     * @return VpcUid 是否已赋值
                     */
                    bool VpcUidHasBeenSet() const;

                    /**
                     * 获取UID of the subnet where the instance resides
                     * @return SubnetUid UID of the subnet where the instance resides
                     */
                    std::string GetSubnetUid() const;

                    /**
                     * 设置UID of the subnet where the instance resides
                     * @param SubnetUid UID of the subnet where the instance resides
                     */
                    void SetSubnetUid(const std::string& _subnetUid);

                    /**
                     * 判断参数 SubnetUid 是否已赋值
                     * @return SubnetUid 是否已赋值
                     */
                    bool SubnetUidHasBeenSet() const;

                    /**
                     * 获取Instance status. 0: processing; 1: normal; -1: stopped; -2: terminating; -3: terminated
                     * @return Status Instance status. 0: processing; 1: normal; -1: stopped; -2: terminating; -3: terminated
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. 0: processing; 1: normal; -1: stopped; -2: terminating; -3: terminated
                     * @param Status Instance status. 0: processing; 1: normal; -1: stopped; -2: terminating; -3: terminated
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance billing method. Valid values: POSTPAID_BY_HOUR (pay-as-you-go hourly); CDHPAID (billed based on CDH, i.e., only CDH is billed but not the instances on CDH)
                     * @return ChargeType Instance billing method. Valid values: POSTPAID_BY_HOUR (pay-as-you-go hourly); CDHPAID (billed based on CDH, i.e., only CDH is billed but not the instances on CDH)
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Instance billing method. Valid values: POSTPAID_BY_HOUR (pay-as-you-go hourly); CDHPAID (billed based on CDH, i.e., only CDH is billed but not the instances on CDH)
                     * @param ChargeType Instance billing method. Valid values: POSTPAID_BY_HOUR (pay-as-you-go hourly); CDHPAID (billed based on CDH, i.e., only CDH is billed but not the instances on CDH)
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
                     * 获取Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     * @return NodeType Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     * @param NodeType Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Number of nodes
                     * @return NodeNum Number of nodes
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置Number of nodes
                     * @param NodeNum Number of nodes
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores of the node
                     * @return CpuNum Number of CPU cores of the node
                     */
                    uint64_t GetCpuNum() const;

                    /**
                     * 设置Number of CPU cores of the node
                     * @param CpuNum Number of CPU cores of the node
                     */
                    void SetCpuNum(const uint64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取Node memory size in GB
                     * @return MemSize Node memory size in GB
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置Node memory size in GB
                     * @param MemSize Node memory size in GB
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取Node disk type
                     * @return DiskType Node disk type
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Node disk type
                     * @param DiskType Node disk type
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Node disk size in GB
                     * @return DiskSize Node disk size in GB
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Node disk size in GB
                     * @param DiskSize Node disk size in GB
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取ES domain name
                     * @return EsDomain ES domain name
                     */
                    std::string GetEsDomain() const;

                    /**
                     * 设置ES domain name
                     * @param EsDomain ES domain name
                     */
                    void SetEsDomain(const std::string& _esDomain);

                    /**
                     * 判断参数 EsDomain 是否已赋值
                     * @return EsDomain 是否已赋值
                     */
                    bool EsDomainHasBeenSet() const;

                    /**
                     * 获取ES VIP
                     * @return EsVip ES VIP
                     */
                    std::string GetEsVip() const;

                    /**
                     * 设置ES VIP
                     * @param EsVip ES VIP
                     */
                    void SetEsVip(const std::string& _esVip);

                    /**
                     * 判断参数 EsVip 是否已赋值
                     * @return EsVip 是否已赋值
                     */
                    bool EsVipHasBeenSet() const;

                    /**
                     * 获取ES port
                     * @return EsPort ES port
                     */
                    uint64_t GetEsPort() const;

                    /**
                     * 设置ES port
                     * @param EsPort ES port
                     */
                    void SetEsPort(const uint64_t& _esPort);

                    /**
                     * 判断参数 EsPort 是否已赋值
                     * @return EsPort 是否已赋值
                     */
                    bool EsPortHasBeenSet() const;

                    /**
                     * 获取Kibana access URL
                     * @return KibanaUrl Kibana access URL
                     */
                    std::string GetKibanaUrl() const;

                    /**
                     * 设置Kibana access URL
                     * @param KibanaUrl Kibana access URL
                     */
                    void SetKibanaUrl(const std::string& _kibanaUrl);

                    /**
                     * 判断参数 KibanaUrl 是否已赋值
                     * @return KibanaUrl 是否已赋值
                     */
                    bool KibanaUrlHasBeenSet() const;

                    /**
                     * 获取ES version number
                     * @return EsVersion ES version number
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置ES version number
                     * @param EsVersion ES version number
                     */
                    void SetEsVersion(const std::string& _esVersion);

                    /**
                     * 判断参数 EsVersion 是否已赋值
                     * @return EsVersion 是否已赋值
                     */
                    bool EsVersionHasBeenSet() const;

                    /**
                     * 获取ES configuration item
                     * @return EsConfig ES configuration item
                     */
                    std::string GetEsConfig() const;

                    /**
                     * 设置ES configuration item
                     * @param EsConfig ES configuration item
                     */
                    void SetEsConfig(const std::string& _esConfig);

                    /**
                     * 判断参数 EsConfig 是否已赋值
                     * @return EsConfig 是否已赋值
                     */
                    bool EsConfigHasBeenSet() const;

                    /**
                     * 获取Kibana access control configuration
                     * @return EsAcl Kibana access control configuration
                     */
                    EsAcl GetEsAcl() const;

                    /**
                     * 设置Kibana access control configuration
                     * @param EsAcl Kibana access control configuration
                     */
                    void SetEsAcl(const EsAcl& _esAcl);

                    /**
                     * 判断参数 EsAcl 是否已赋值
                     * @return EsAcl 是否已赋值
                     */
                    bool EsAclHasBeenSet() const;

                    /**
                     * 获取Instance creation time
                     * @return CreateTime Instance creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Instance creation time
                     * @param CreateTime Instance creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of the instance
                     * @return UpdateTime Last modified time of the instance
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of the instance
                     * @param UpdateTime Last modified time of the instance
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取This parameter is not used on the global website
                     * @return Deadline This parameter is not used on the global website
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置This parameter is not used on the global website
                     * @param Deadline This parameter is not used on the global website
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取Instance type (instance type identifier, which can be only 1 or 2 currently)
                     * @return InstanceType Instance type (instance type identifier, which can be only 1 or 2 currently)
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置Instance type (instance type identifier, which can be only 1 or 2 currently)
                     * @param InstanceType Instance type (instance type identifier, which can be only 1 or 2 currently)
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取IK analyzer configuration
                     * @return IkConfig IK analyzer configuration
                     */
                    EsDictionaryInfo GetIkConfig() const;

                    /**
                     * 设置IK analyzer configuration
                     * @param IkConfig IK analyzer configuration
                     */
                    void SetIkConfig(const EsDictionaryInfo& _ikConfig);

                    /**
                     * 判断参数 IkConfig 是否已赋值
                     * @return IkConfig 是否已赋值
                     */
                    bool IkConfigHasBeenSet() const;

                    /**
                     * 获取Dedicated master node configuration
                     * @return MasterNodeInfo Dedicated master node configuration
                     */
                    MasterNodeInfo GetMasterNodeInfo() const;

                    /**
                     * 设置Dedicated master node configuration
                     * @param MasterNodeInfo Dedicated master node configuration
                     */
                    void SetMasterNodeInfo(const MasterNodeInfo& _masterNodeInfo);

                    /**
                     * 判断参数 MasterNodeInfo 是否已赋值
                     * @return MasterNodeInfo 是否已赋值
                     */
                    bool MasterNodeInfoHasBeenSet() const;

                    /**
                     * 获取Auto-backup to COS configuration
                     * @return CosBackup Auto-backup to COS configuration
                     */
                    CosBackup GetCosBackup() const;

                    /**
                     * 设置Auto-backup to COS configuration
                     * @param CosBackup Auto-backup to COS configuration
                     */
                    void SetCosBackup(const CosBackup& _cosBackup);

                    /**
                     * 判断参数 CosBackup 是否已赋值
                     * @return CosBackup 是否已赋值
                     */
                    bool CosBackupHasBeenSet() const;

                    /**
                     * 获取Whether to allow auto-backup to COS
                     * @return AllowCosBackup Whether to allow auto-backup to COS
                     */
                    bool GetAllowCosBackup() const;

                    /**
                     * 设置Whether to allow auto-backup to COS
                     * @param AllowCosBackup Whether to allow auto-backup to COS
                     */
                    void SetAllowCosBackup(const bool& _allowCosBackup);

                    /**
                     * 判断参数 AllowCosBackup 是否已赋值
                     * @return AllowCosBackup 是否已赋值
                     */
                    bool AllowCosBackupHasBeenSet() const;

                    /**
                     * 获取List of tags owned by the instance
                     * @return TagList List of tags owned by the instance
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置List of tags owned by the instance
                     * @param TagList List of tags owned by the instance
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     */
                    bool TagListHasBeenSet() const;

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
                     * 获取Whether it is a hot/warm cluster <li>true: yes </li><li>false: no</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EnableHotWarmMode Whether it is a hot/warm cluster <li>true: yes </li><li>false: no</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetEnableHotWarmMode() const;

                    /**
                     * 设置Whether it is a hot/warm cluster <li>true: yes </li><li>false: no</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EnableHotWarmMode Whether it is a hot/warm cluster <li>true: yes </li><li>false: no</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEnableHotWarmMode(const bool& _enableHotWarmMode);

                    /**
                     * 判断参数 EnableHotWarmMode 是否已赋值
                     * @return EnableHotWarmMode 是否已赋值
                     */
                    bool EnableHotWarmModeHasBeenSet() const;

                    /**
                     * 获取Warm node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WarmNodeType Warm node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetWarmNodeType() const;

                    /**
                     * 设置Warm node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param WarmNodeType Warm node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWarmNodeType(const std::string& _warmNodeType);

                    /**
                     * 判断参数 WarmNodeType 是否已赋值
                     * @return WarmNodeType 是否已赋值
                     */
                    bool WarmNodeTypeHasBeenSet() const;

                    /**
                     * 获取Number of warm nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WarmNodeNum Number of warm nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetWarmNodeNum() const;

                    /**
                     * 设置Number of warm nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param WarmNodeNum Number of warm nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWarmNodeNum(const uint64_t& _warmNodeNum);

                    /**
                     * 判断参数 WarmNodeNum 是否已赋值
                     * @return WarmNodeNum 是否已赋值
                     */
                    bool WarmNodeNumHasBeenSet() const;

                    /**
                     * 获取Number of warm node CPU cores
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WarmCpuNum Number of warm node CPU cores
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetWarmCpuNum() const;

                    /**
                     * 设置Number of warm node CPU cores
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param WarmCpuNum Number of warm node CPU cores
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWarmCpuNum(const uint64_t& _warmCpuNum);

                    /**
                     * 判断参数 WarmCpuNum 是否已赋值
                     * @return WarmCpuNum 是否已赋值
                     */
                    bool WarmCpuNumHasBeenSet() const;

                    /**
                     * 获取Warm node memory size in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WarmMemSize Warm node memory size in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetWarmMemSize() const;

                    /**
                     * 设置Warm node memory size in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param WarmMemSize Warm node memory size in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWarmMemSize(const uint64_t& _warmMemSize);

                    /**
                     * 判断参数 WarmMemSize 是否已赋值
                     * @return WarmMemSize 是否已赋值
                     */
                    bool WarmMemSizeHasBeenSet() const;

                    /**
                     * 获取Warm node disk type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WarmDiskType Warm node disk type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetWarmDiskType() const;

                    /**
                     * 设置Warm node disk type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param WarmDiskType Warm node disk type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWarmDiskType(const std::string& _warmDiskType);

                    /**
                     * 判断参数 WarmDiskType 是否已赋值
                     * @return WarmDiskType 是否已赋值
                     */
                    bool WarmDiskTypeHasBeenSet() const;

                    /**
                     * 获取Warm node disk size in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WarmDiskSize Warm node disk size in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetWarmDiskSize() const;

                    /**
                     * 设置Warm node disk size in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param WarmDiskSize Warm node disk size in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWarmDiskSize(const uint64_t& _warmDiskSize);

                    /**
                     * 判断参数 WarmDiskSize 是否已赋值
                     * @return WarmDiskSize 是否已赋值
                     */
                    bool WarmDiskSizeHasBeenSet() const;

                    /**
                     * 获取Cluster node information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeInfoList Cluster node information list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeInfo> GetNodeInfoList() const;

                    /**
                     * 设置Cluster node information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param NodeInfoList Cluster node information list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNodeInfoList(const std::vector<NodeInfo>& _nodeInfoList);

                    /**
                     * 判断参数 NodeInfoList 是否已赋值
                     * @return NodeInfoList 是否已赋值
                     */
                    bool NodeInfoListHasBeenSet() const;

                    /**
                     * 获取ES public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EsPublicUrl ES public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEsPublicUrl() const;

                    /**
                     * 设置ES public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EsPublicUrl ES public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEsPublicUrl(const std::string& _esPublicUrl);

                    /**
                     * 判断参数 EsPublicUrl 是否已赋值
                     * @return EsPublicUrl 是否已赋值
                     */
                    bool EsPublicUrlHasBeenSet() const;

                    /**
                     * 获取Multi-AZ network information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MultiZoneInfo Multi-AZ network information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ZoneDetail> GetMultiZoneInfo() const;

                    /**
                     * 设置Multi-AZ network information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MultiZoneInfo Multi-AZ network information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMultiZoneInfo(const std::vector<ZoneDetail>& _multiZoneInfo);

                    /**
                     * 判断参数 MultiZoneInfo 是否已赋值
                     * @return MultiZoneInfo 是否已赋值
                     */
                    bool MultiZoneInfoHasBeenSet() const;

                    /**
                     * 获取Deployment mode <li>0: single-AZ </li><li>1: multi-AZ</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeployMode Deployment mode <li>0: single-AZ </li><li>1: multi-AZ</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetDeployMode() const;

                    /**
                     * 设置Deployment mode <li>0: single-AZ </li><li>1: multi-AZ</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DeployMode Deployment mode <li>0: single-AZ </li><li>1: multi-AZ</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDeployMode(const uint64_t& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取ES public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicAccess ES public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPublicAccess() const;

                    /**
                     * 设置ES public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PublicAccess ES public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPublicAccess(const std::string& _publicAccess);

                    /**
                     * 判断参数 PublicAccess 是否已赋值
                     * @return PublicAccess 是否已赋值
                     */
                    bool PublicAccessHasBeenSet() const;

                    /**
                     * 获取ES public access control configuration
                     * @return EsPublicAcl ES public access control configuration
                     */
                    EsAcl GetEsPublicAcl() const;

                    /**
                     * 设置ES public access control configuration
                     * @param EsPublicAcl ES public access control configuration
                     */
                    void SetEsPublicAcl(const EsAcl& _esPublicAcl);

                    /**
                     * 判断参数 EsPublicAcl 是否已赋值
                     * @return EsPublicAcl 是否已赋值
                     */
                    bool EsPublicAclHasBeenSet() const;

                    /**
                     * 获取Kibana private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KibanaPrivateUrl Kibana private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetKibanaPrivateUrl() const;

                    /**
                     * 设置Kibana private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param KibanaPrivateUrl Kibana private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetKibanaPrivateUrl(const std::string& _kibanaPrivateUrl);

                    /**
                     * 判断参数 KibanaPrivateUrl 是否已赋值
                     * @return KibanaPrivateUrl 是否已赋值
                     */
                    bool KibanaPrivateUrlHasBeenSet() const;

                    /**
                     * 获取Kibana public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KibanaPublicAccess Kibana public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetKibanaPublicAccess() const;

                    /**
                     * 设置Kibana public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param KibanaPublicAccess Kibana public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetKibanaPublicAccess(const std::string& _kibanaPublicAccess);

                    /**
                     * 判断参数 KibanaPublicAccess 是否已赋值
                     * @return KibanaPublicAccess 是否已赋值
                     */
                    bool KibanaPublicAccessHasBeenSet() const;

                    /**
                     * 获取Kibana private access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KibanaPrivateAccess Kibana private access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetKibanaPrivateAccess() const;

                    /**
                     * 设置Kibana private access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param KibanaPrivateAccess Kibana private access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetKibanaPrivateAccess(const std::string& _kibanaPrivateAccess);

                    /**
                     * 判断参数 KibanaPrivateAccess 是否已赋值
                     * @return KibanaPrivateAccess 是否已赋值
                     */
                    bool KibanaPrivateAccessHasBeenSet() const;

                    /**
                     * 获取Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecurityType Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetSecurityType() const;

                    /**
                     * 设置Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SecurityType Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSecurityType(const uint64_t& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     */
                    bool SecurityTypeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Availability Zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * User ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * UID of the VPC where the instance resides
                     */
                    std::string m_vpcUid;
                    bool m_vpcUidHasBeenSet;

                    /**
                     * UID of the subnet where the instance resides
                     */
                    std::string m_subnetUid;
                    bool m_subnetUidHasBeenSet;

                    /**
                     * Instance status. 0: processing; 1: normal; -1: stopped; -2: terminating; -3: terminated
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance billing method. Valid values: POSTPAID_BY_HOUR (pay-as-you-go hourly); CDHPAID (billed based on CDH, i.e., only CDH is billed but not the instances on CDH)
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
                     * Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Number of nodes
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Number of CPU cores of the node
                     */
                    uint64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * Node memory size in GB
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Node disk type
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Node disk size in GB
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * ES domain name
                     */
                    std::string m_esDomain;
                    bool m_esDomainHasBeenSet;

                    /**
                     * ES VIP
                     */
                    std::string m_esVip;
                    bool m_esVipHasBeenSet;

                    /**
                     * ES port
                     */
                    uint64_t m_esPort;
                    bool m_esPortHasBeenSet;

                    /**
                     * Kibana access URL
                     */
                    std::string m_kibanaUrl;
                    bool m_kibanaUrlHasBeenSet;

                    /**
                     * ES version number
                     */
                    std::string m_esVersion;
                    bool m_esVersionHasBeenSet;

                    /**
                     * ES configuration item
                     */
                    std::string m_esConfig;
                    bool m_esConfigHasBeenSet;

                    /**
                     * Kibana access control configuration
                     */
                    EsAcl m_esAcl;
                    bool m_esAclHasBeenSet;

                    /**
                     * Instance creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of the instance
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * This parameter is not used on the global website
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * Instance type (instance type identifier, which can be only 1 or 2 currently)
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * IK analyzer configuration
                     */
                    EsDictionaryInfo m_ikConfig;
                    bool m_ikConfigHasBeenSet;

                    /**
                     * Dedicated master node configuration
                     */
                    MasterNodeInfo m_masterNodeInfo;
                    bool m_masterNodeInfoHasBeenSet;

                    /**
                     * Auto-backup to COS configuration
                     */
                    CosBackup m_cosBackup;
                    bool m_cosBackupHasBeenSet;

                    /**
                     * Whether to allow auto-backup to COS
                     */
                    bool m_allowCosBackup;
                    bool m_allowCosBackupHasBeenSet;

                    /**
                     * List of tags owned by the instance
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * License type <li>oss: Open Source Edition </li><li>basic: Basic Edition </li><li>platinum: Platinum Edition </li>Default value: Platinum
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * Whether it is a hot/warm cluster <li>true: yes </li><li>false: no</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enableHotWarmMode;
                    bool m_enableHotWarmModeHasBeenSet;

                    /**
                     * Warm node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_warmNodeType;
                    bool m_warmNodeTypeHasBeenSet;

                    /**
                     * Number of warm nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_warmNodeNum;
                    bool m_warmNodeNumHasBeenSet;

                    /**
                     * Number of warm node CPU cores
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_warmCpuNum;
                    bool m_warmCpuNumHasBeenSet;

                    /**
                     * Warm node memory size in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_warmMemSize;
                    bool m_warmMemSizeHasBeenSet;

                    /**
                     * Warm node disk type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_warmDiskType;
                    bool m_warmDiskTypeHasBeenSet;

                    /**
                     * Warm node disk size in GB
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_warmDiskSize;
                    bool m_warmDiskSizeHasBeenSet;

                    /**
                     * Cluster node information list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeInfo> m_nodeInfoList;
                    bool m_nodeInfoListHasBeenSet;

                    /**
                     * ES public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_esPublicUrl;
                    bool m_esPublicUrlHasBeenSet;

                    /**
                     * Multi-AZ network information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ZoneDetail> m_multiZoneInfo;
                    bool m_multiZoneInfoHasBeenSet;

                    /**
                     * Deployment mode <li>0: single-AZ </li><li>1: multi-AZ</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * ES public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicAccess;
                    bool m_publicAccessHasBeenSet;

                    /**
                     * ES public access control configuration
                     */
                    EsAcl m_esPublicAcl;
                    bool m_esPublicAclHasBeenSet;

                    /**
                     * Kibana private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kibanaPrivateUrl;
                    bool m_kibanaPrivateUrlHasBeenSet;

                    /**
                     * Kibana public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kibanaPublicAccess;
                    bool m_kibanaPublicAccessHasBeenSet;

                    /**
                     * Kibana private access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kibanaPrivateAccess;
                    bool m_kibanaPrivateAccessHasBeenSet;

                    /**
                     * Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_securityType;
                    bool m_securityTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INSTANCEINFO_H_
