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
#include <tencentcloud/es/v20180416/model/KibanaNodeInfo.h>
#include <tencentcloud/es/v20180416/model/WebNodeTypeInfo.h>
#include <tencentcloud/es/v20180416/model/EsConfigSetInfo.h>
#include <tencentcloud/es/v20180416/model/OperationDuration.h>
#include <tencentcloud/es/v20180416/model/OptionalWebServiceInfo.h>


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
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
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
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
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
                     * 获取Availability Zone
                     * @return Zone Availability Zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability Zone
                     * @param _zone Availability Zone
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
                     * 获取User ID
                     * @return AppId User ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置User ID
                     * @param _appId User ID
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取User UIN
                     * @return Uin User UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
                     * @param _uin User UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取UID of the VPC where the instance resides
                     * @return VpcUid UID of the VPC where the instance resides
                     * 
                     */
                    std::string GetVpcUid() const;

                    /**
                     * 设置UID of the VPC where the instance resides
                     * @param _vpcUid UID of the VPC where the instance resides
                     * 
                     */
                    void SetVpcUid(const std::string& _vpcUid);

                    /**
                     * 判断参数 VpcUid 是否已赋值
                     * @return VpcUid 是否已赋值
                     * 
                     */
                    bool VpcUidHasBeenSet() const;

                    /**
                     * 获取UID of the subnet where the instance resides
                     * @return SubnetUid UID of the subnet where the instance resides
                     * 
                     */
                    std::string GetSubnetUid() const;

                    /**
                     * 设置UID of the subnet where the instance resides
                     * @param _subnetUid UID of the subnet where the instance resides
                     * 
                     */
                    void SetSubnetUid(const std::string& _subnetUid);

                    /**
                     * 判断参数 SubnetUid 是否已赋值
                     * @return SubnetUid 是否已赋值
                     * 
                     */
                    bool SubnetUidHasBeenSet() const;

                    /**
                     * 获取Instance status. `0`: Processing; `1`: Normal; `-1`: `Stopped`; `-2`: Being terminated; `-3`: Terminated; `2`: Initializing during the cluster creation.
                     * @return Status Instance status. `0`: Processing; `1`: Normal; `-1`: `Stopped`; `-2`: Being terminated; `-3`: Terminated; `2`: Initializing during the cluster creation.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. `0`: Processing; `1`: Normal; `-1`: `Stopped`; `-2`: Being terminated; `-3`: Terminated; `2`: Initializing during the cluster creation.
                     * @param _status Instance status. `0`: Processing; `1`: Normal; `-1`: `Stopped`; `-2`: Being terminated; `-3`: Terminated; `2`: Initializing during the cluster creation.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取This parameter is not used on the global website
                     * @return RenewFlag This parameter is not used on the global website
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置This parameter is not used on the global website
                     * @param _renewFlag This parameter is not used on the global website
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
                     * 获取Instance billing method. Valid values: POSTPAID_BY_HOUR (pay-as-you-go hourly); CDHPAID (billed based on CDH, i.e., only CDH is billed but not the instances on CDH)
                     * @return ChargeType Instance billing method. Valid values: POSTPAID_BY_HOUR (pay-as-you-go hourly); CDHPAID (billed based on CDH, i.e., only CDH is billed but not the instances on CDH)
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Instance billing method. Valid values: POSTPAID_BY_HOUR (pay-as-you-go hourly); CDHPAID (billed based on CDH, i.e., only CDH is billed but not the instances on CDH)
                     * @param _chargeType Instance billing method. Valid values: POSTPAID_BY_HOUR (pay-as-you-go hourly); CDHPAID (billed based on CDH, i.e., only CDH is billed but not the instances on CDH)
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
                     * 获取This parameter is not used on the global website
                     * @return ChargePeriod This parameter is not used on the global website
                     * 
                     */
                    uint64_t GetChargePeriod() const;

                    /**
                     * 设置This parameter is not used on the global website
                     * @param _chargePeriod This parameter is not used on the global website
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
                     * 获取Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     * @return NodeType Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     * @param _nodeType Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
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
                     * 获取Number of nodes
                     * @return NodeNum Number of nodes
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置Number of nodes
                     * @param _nodeNum Number of nodes
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
                     * 获取Number of CPU cores of the node
                     * @return CpuNum Number of CPU cores of the node
                     * 
                     */
                    uint64_t GetCpuNum() const;

                    /**
                     * 设置Number of CPU cores of the node
                     * @param _cpuNum Number of CPU cores of the node
                     * 
                     */
                    void SetCpuNum(const uint64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取Node memory size in GB
                     * @return MemSize Node memory size in GB
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置Node memory size in GB
                     * @param _memSize Node memory size in GB
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取Node disk type
                     * @return DiskType Node disk type
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Node disk type
                     * @param _diskType Node disk type
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
                     * 获取Node disk size in GB
                     * @return DiskSize Node disk size in GB
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Node disk size in GB
                     * @param _diskSize Node disk size in GB
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
                     * 获取ES domain name
                     * @return EsDomain ES domain name
                     * 
                     */
                    std::string GetEsDomain() const;

                    /**
                     * 设置ES domain name
                     * @param _esDomain ES domain name
                     * 
                     */
                    void SetEsDomain(const std::string& _esDomain);

                    /**
                     * 判断参数 EsDomain 是否已赋值
                     * @return EsDomain 是否已赋值
                     * 
                     */
                    bool EsDomainHasBeenSet() const;

                    /**
                     * 获取ES VIP
                     * @return EsVip ES VIP
                     * 
                     */
                    std::string GetEsVip() const;

                    /**
                     * 设置ES VIP
                     * @param _esVip ES VIP
                     * 
                     */
                    void SetEsVip(const std::string& _esVip);

                    /**
                     * 判断参数 EsVip 是否已赋值
                     * @return EsVip 是否已赋值
                     * 
                     */
                    bool EsVipHasBeenSet() const;

                    /**
                     * 获取ES port
                     * @return EsPort ES port
                     * 
                     */
                    uint64_t GetEsPort() const;

                    /**
                     * 设置ES port
                     * @param _esPort ES port
                     * 
                     */
                    void SetEsPort(const uint64_t& _esPort);

                    /**
                     * 判断参数 EsPort 是否已赋值
                     * @return EsPort 是否已赋值
                     * 
                     */
                    bool EsPortHasBeenSet() const;

                    /**
                     * 获取Kibana access URL
                     * @return KibanaUrl Kibana access URL
                     * 
                     */
                    std::string GetKibanaUrl() const;

                    /**
                     * 设置Kibana access URL
                     * @param _kibanaUrl Kibana access URL
                     * 
                     */
                    void SetKibanaUrl(const std::string& _kibanaUrl);

                    /**
                     * 判断参数 KibanaUrl 是否已赋值
                     * @return KibanaUrl 是否已赋值
                     * 
                     */
                    bool KibanaUrlHasBeenSet() const;

                    /**
                     * 获取ES version number
                     * @return EsVersion ES version number
                     * 
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置ES version number
                     * @param _esVersion ES version number
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
                     * 获取ES configuration item
                     * @return EsConfig ES configuration item
                     * 
                     */
                    std::string GetEsConfig() const;

                    /**
                     * 设置ES configuration item
                     * @param _esConfig ES configuration item
                     * 
                     */
                    void SetEsConfig(const std::string& _esConfig);

                    /**
                     * 判断参数 EsConfig 是否已赋值
                     * @return EsConfig 是否已赋值
                     * 
                     */
                    bool EsConfigHasBeenSet() const;

                    /**
                     * 获取Kibana access control configuration
                     * @return EsAcl Kibana access control configuration
                     * 
                     */
                    EsAcl GetEsAcl() const;

                    /**
                     * 设置Kibana access control configuration
                     * @param _esAcl Kibana access control configuration
                     * 
                     */
                    void SetEsAcl(const EsAcl& _esAcl);

                    /**
                     * 判断参数 EsAcl 是否已赋值
                     * @return EsAcl 是否已赋值
                     * 
                     */
                    bool EsAclHasBeenSet() const;

                    /**
                     * 获取Instance creation time
                     * @return CreateTime Instance creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Instance creation time
                     * @param _createTime Instance creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of the instance
                     * @return UpdateTime Last modified time of the instance
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of the instance
                     * @param _updateTime Last modified time of the instance
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取This parameter is not used on the global website
                     * @return Deadline This parameter is not used on the global website
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置This parameter is not used on the global website
                     * @param _deadline This parameter is not used on the global website
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取Instance type (instance type identifier, which can be only 1 or 2 currently)
                     * @return InstanceType Instance type (instance type identifier, which can be only 1 or 2 currently)
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置Instance type (instance type identifier, which can be only 1 or 2 currently)
                     * @param _instanceType Instance type (instance type identifier, which can be only 1 or 2 currently)
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取IK analyzer configuration
                     * @return IkConfig IK analyzer configuration
                     * 
                     */
                    EsDictionaryInfo GetIkConfig() const;

                    /**
                     * 设置IK analyzer configuration
                     * @param _ikConfig IK analyzer configuration
                     * 
                     */
                    void SetIkConfig(const EsDictionaryInfo& _ikConfig);

                    /**
                     * 判断参数 IkConfig 是否已赋值
                     * @return IkConfig 是否已赋值
                     * 
                     */
                    bool IkConfigHasBeenSet() const;

                    /**
                     * 获取Dedicated primary node configuration
                     * @return MasterNodeInfo Dedicated primary node configuration
                     * 
                     */
                    MasterNodeInfo GetMasterNodeInfo() const;

                    /**
                     * 设置Dedicated primary node configuration
                     * @param _masterNodeInfo Dedicated primary node configuration
                     * 
                     */
                    void SetMasterNodeInfo(const MasterNodeInfo& _masterNodeInfo);

                    /**
                     * 判断参数 MasterNodeInfo 是否已赋值
                     * @return MasterNodeInfo 是否已赋值
                     * 
                     */
                    bool MasterNodeInfoHasBeenSet() const;

                    /**
                     * 获取Auto-backup to COS configuration
                     * @return CosBackup Auto-backup to COS configuration
                     * 
                     */
                    CosBackup GetCosBackup() const;

                    /**
                     * 设置Auto-backup to COS configuration
                     * @param _cosBackup Auto-backup to COS configuration
                     * 
                     */
                    void SetCosBackup(const CosBackup& _cosBackup);

                    /**
                     * 判断参数 CosBackup 是否已赋值
                     * @return CosBackup 是否已赋值
                     * 
                     */
                    bool CosBackupHasBeenSet() const;

                    /**
                     * 获取Whether to allow auto-backup to COS
                     * @return AllowCosBackup Whether to allow auto-backup to COS
                     * 
                     */
                    bool GetAllowCosBackup() const;

                    /**
                     * 设置Whether to allow auto-backup to COS
                     * @param _allowCosBackup Whether to allow auto-backup to COS
                     * 
                     */
                    void SetAllowCosBackup(const bool& _allowCosBackup);

                    /**
                     * 判断参数 AllowCosBackup 是否已赋值
                     * @return AllowCosBackup 是否已赋值
                     * 
                     */
                    bool AllowCosBackupHasBeenSet() const;

                    /**
                     * 获取List of tags owned by the instance
                     * @return TagList List of tags owned by the instance
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置List of tags owned by the instance
                     * @param _tagList List of tags owned by the instance
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
                     * 获取License type <li>oss: Open Source Edition </li><li>basic: Basic Edition </li><li>platinum: Platinum Edition </li>Default value: Platinum
                     * @return LicenseType License type <li>oss: Open Source Edition </li><li>basic: Basic Edition </li><li>platinum: Platinum Edition </li>Default value: Platinum
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置License type <li>oss: Open Source Edition </li><li>basic: Basic Edition </li><li>platinum: Platinum Edition </li>Default value: Platinum
                     * @param _licenseType License type <li>oss: Open Source Edition </li><li>basic: Basic Edition </li><li>platinum: Platinum Edition </li>Default value: Platinum
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
                     * 获取Whether it is a hot/warm cluster <li>true: yes </li><li>false: no</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EnableHotWarmMode Whether it is a hot/warm cluster <li>true: yes </li><li>false: no</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnableHotWarmMode() const;

                    /**
                     * 设置Whether it is a hot/warm cluster <li>true: yes </li><li>false: no</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _enableHotWarmMode Whether it is a hot/warm cluster <li>true: yes </li><li>false: no</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnableHotWarmMode(const bool& _enableHotWarmMode);

                    /**
                     * 判断参数 EnableHotWarmMode 是否已赋值
                     * @return EnableHotWarmMode 是否已赋值
                     * 
                     */
                    bool EnableHotWarmModeHasBeenSet() const;

                    /**
                     * 获取Warm node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return `null`, indicating that no valid value was found.
                     * @return WarmNodeType Warm node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetWarmNodeType() const;

                    /**
                     * 设置Warm node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _warmNodeType Warm node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetWarmNodeType(const std::string& _warmNodeType);

                    /**
                     * 判断参数 WarmNodeType 是否已赋值
                     * @return WarmNodeType 是否已赋值
                     * 
                     */
                    bool WarmNodeTypeHasBeenSet() const;

                    /**
                     * 获取Number of warm nodes
Note: This field may return `null`, indicating that no valid value was found.
                     * @return WarmNodeNum Number of warm nodes
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetWarmNodeNum() const;

                    /**
                     * 设置Number of warm nodes
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _warmNodeNum Number of warm nodes
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetWarmNodeNum(const uint64_t& _warmNodeNum);

                    /**
                     * 判断参数 WarmNodeNum 是否已赋值
                     * @return WarmNodeNum 是否已赋值
                     * 
                     */
                    bool WarmNodeNumHasBeenSet() const;

                    /**
                     * 获取Number of warm node CPU cores
Note: This field may return `null`, indicating that no valid value was found.
                     * @return WarmCpuNum Number of warm node CPU cores
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetWarmCpuNum() const;

                    /**
                     * 设置Number of warm node CPU cores
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _warmCpuNum Number of warm node CPU cores
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetWarmCpuNum(const uint64_t& _warmCpuNum);

                    /**
                     * 判断参数 WarmCpuNum 是否已赋值
                     * @return WarmCpuNum 是否已赋值
                     * 
                     */
                    bool WarmCpuNumHasBeenSet() const;

                    /**
                     * 获取Warm node memory size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * @return WarmMemSize Warm node memory size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetWarmMemSize() const;

                    /**
                     * 设置Warm node memory size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _warmMemSize Warm node memory size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetWarmMemSize(const uint64_t& _warmMemSize);

                    /**
                     * 判断参数 WarmMemSize 是否已赋值
                     * @return WarmMemSize 是否已赋值
                     * 
                     */
                    bool WarmMemSizeHasBeenSet() const;

                    /**
                     * 获取Warm node disk type
Note: This field may return `null`, indicating that no valid value was found.
                     * @return WarmDiskType Warm node disk type
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetWarmDiskType() const;

                    /**
                     * 设置Warm node disk type
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _warmDiskType Warm node disk type
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetWarmDiskType(const std::string& _warmDiskType);

                    /**
                     * 判断参数 WarmDiskType 是否已赋值
                     * @return WarmDiskType 是否已赋值
                     * 
                     */
                    bool WarmDiskTypeHasBeenSet() const;

                    /**
                     * 获取Warm node disk size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * @return WarmDiskSize Warm node disk size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetWarmDiskSize() const;

                    /**
                     * 设置Warm node disk size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _warmDiskSize Warm node disk size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetWarmDiskSize(const uint64_t& _warmDiskSize);

                    /**
                     * 判断参数 WarmDiskSize 是否已赋值
                     * @return WarmDiskSize 是否已赋值
                     * 
                     */
                    bool WarmDiskSizeHasBeenSet() const;

                    /**
                     * 获取Cluster node information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeInfoList Cluster node information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NodeInfo> GetNodeInfoList() const;

                    /**
                     * 设置Cluster node information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeInfoList Cluster node information list
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取ES public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EsPublicUrl ES public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEsPublicUrl() const;

                    /**
                     * 设置ES public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _esPublicUrl ES public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEsPublicUrl(const std::string& _esPublicUrl);

                    /**
                     * 判断参数 EsPublicUrl 是否已赋值
                     * @return EsPublicUrl 是否已赋值
                     * 
                     */
                    bool EsPublicUrlHasBeenSet() const;

                    /**
                     * 获取Multi-AZ network information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MultiZoneInfo Multi-AZ network information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ZoneDetail> GetMultiZoneInfo() const;

                    /**
                     * 设置Multi-AZ network information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _multiZoneInfo Multi-AZ network information
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Deployment mode <li>0: single-AZ </li><li>1: multi-AZ</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeployMode Deployment mode <li>0: single-AZ </li><li>1: multi-AZ</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDeployMode() const;

                    /**
                     * 设置Deployment mode <li>0: single-AZ </li><li>1: multi-AZ</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _deployMode Deployment mode <li>0: single-AZ </li><li>1: multi-AZ</li>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取ES public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicAccess ES public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicAccess() const;

                    /**
                     * 设置ES public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _publicAccess ES public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicAccess(const std::string& _publicAccess);

                    /**
                     * 判断参数 PublicAccess 是否已赋值
                     * @return PublicAccess 是否已赋值
                     * 
                     */
                    bool PublicAccessHasBeenSet() const;

                    /**
                     * 获取ES public access control configuration
                     * @return EsPublicAcl ES public access control configuration
                     * 
                     */
                    EsAcl GetEsPublicAcl() const;

                    /**
                     * 设置ES public access control configuration
                     * @param _esPublicAcl ES public access control configuration
                     * 
                     */
                    void SetEsPublicAcl(const EsAcl& _esPublicAcl);

                    /**
                     * 判断参数 EsPublicAcl 是否已赋值
                     * @return EsPublicAcl 是否已赋值
                     * 
                     */
                    bool EsPublicAclHasBeenSet() const;

                    /**
                     * 获取Kibana private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KibanaPrivateUrl Kibana private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKibanaPrivateUrl() const;

                    /**
                     * 设置Kibana private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kibanaPrivateUrl Kibana private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKibanaPrivateUrl(const std::string& _kibanaPrivateUrl);

                    /**
                     * 判断参数 KibanaPrivateUrl 是否已赋值
                     * @return KibanaPrivateUrl 是否已赋值
                     * 
                     */
                    bool KibanaPrivateUrlHasBeenSet() const;

                    /**
                     * 获取Kibana public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KibanaPublicAccess Kibana public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKibanaPublicAccess() const;

                    /**
                     * 设置Kibana public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kibanaPublicAccess Kibana public access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKibanaPublicAccess(const std::string& _kibanaPublicAccess);

                    /**
                     * 判断参数 KibanaPublicAccess 是否已赋值
                     * @return KibanaPublicAccess 是否已赋值
                     * 
                     */
                    bool KibanaPublicAccessHasBeenSet() const;

                    /**
                     * 获取Kibana private access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KibanaPrivateAccess Kibana private access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKibanaPrivateAccess() const;

                    /**
                     * 设置Kibana private access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kibanaPrivateAccess Kibana private access status <li>OPEN: enabled </li><li>CLOSE: disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKibanaPrivateAccess(const std::string& _kibanaPrivateAccess);

                    /**
                     * 判断参数 KibanaPrivateAccess 是否已赋值
                     * @return KibanaPrivateAccess 是否已赋值
                     * 
                     */
                    bool KibanaPrivateAccessHasBeenSet() const;

                    /**
                     * 获取Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecurityType Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSecurityType() const;

                    /**
                     * 设置Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _securityType Whether to enable X-Pack security authentication in Basic Edition 6.8 (and above) <li>1: disabled </li><li>2: enabled</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecurityType(const uint64_t& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     * 
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取Scenario template type. 0: not enabled; 1: general scenario; 2: log scenario; 3: search scenario
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SceneType Scenario template type. 0: not enabled; 1: general scenario; 2: log scenario; 3: search scenario
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSceneType() const;

                    /**
                     * 设置Scenario template type. 0: not enabled; 1: general scenario; 2: log scenario; 3: search scenario
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sceneType Scenario template type. 0: not enabled; 1: general scenario; 2: log scenario; 3: search scenario
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Kibana configuration item.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return KibanaConfig Kibana configuration item.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKibanaConfig() const;

                    /**
                     * 设置Kibana configuration item.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _kibanaConfig Kibana configuration item.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKibanaConfig(const std::string& _kibanaConfig);

                    /**
                     * 判断参数 KibanaConfig 是否已赋值
                     * @return KibanaConfig 是否已赋值
                     * 
                     */
                    bool KibanaConfigHasBeenSet() const;

                    /**
                     * 获取Kibana node information
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return KibanaNodeInfo Kibana node information
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    KibanaNodeInfo GetKibanaNodeInfo() const;

                    /**
                     * 设置Kibana node information
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _kibanaNodeInfo Kibana node information
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetKibanaNodeInfo(const KibanaNodeInfo& _kibanaNodeInfo);

                    /**
                     * 判断参数 KibanaNodeInfo 是否已赋值
                     * @return KibanaNodeInfo 是否已赋值
                     * 
                     */
                    bool KibanaNodeInfoHasBeenSet() const;

                    /**
                     * 获取Visual node configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return WebNodeTypeInfo Visual node configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    WebNodeTypeInfo GetWebNodeTypeInfo() const;

                    /**
                     * 设置Visual node configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _webNodeTypeInfo Visual node configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取JDK type. Valid values: `oracle`, `kona`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Jdk JDK type. Valid values: `oracle`, `kona`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJdk() const;

                    /**
                     * 设置JDK type. Valid values: `oracle`, `kona`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _jdk JDK type. Valid values: `oracle`, `kona`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJdk(const std::string& _jdk);

                    /**
                     * 判断参数 Jdk 是否已赋值
                     * @return Jdk 是否已赋值
                     * 
                     */
                    bool JdkHasBeenSet() const;

                    /**
                     * 获取Cluster network communication protocol
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Protocol Cluster network communication protocol
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Cluster network communication protocol
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _protocol Cluster network communication protocol
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Security group ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SecurityGroups Security group ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置Security group ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _securityGroups Security group ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecurityGroups(const std::vector<std::string>& _securityGroups);

                    /**
                     * 判断参数 SecurityGroups 是否已赋值
                     * @return SecurityGroups 是否已赋值
                     * 
                     */
                    bool SecurityGroupsHasBeenSet() const;

                    /**
                     * 获取Cold node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ColdNodeType Cold node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetColdNodeType() const;

                    /**
                     * 设置Cold node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _coldNodeType Cold node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetColdNodeType(const std::string& _coldNodeType);

                    /**
                     * 判断参数 ColdNodeType 是否已赋值
                     * @return ColdNodeType 是否已赋值
                     * 
                     */
                    bool ColdNodeTypeHasBeenSet() const;

                    /**
                     * 获取Number of cold nodes
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ColdNodeNum Number of cold nodes
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetColdNodeNum() const;

                    /**
                     * 设置Number of cold nodes
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _coldNodeNum Number of cold nodes
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetColdNodeNum(const uint64_t& _coldNodeNum);

                    /**
                     * 判断参数 ColdNodeNum 是否已赋值
                     * @return ColdNodeNum 是否已赋值
                     * 
                     */
                    bool ColdNodeNumHasBeenSet() const;

                    /**
                     * 获取Number of cold node CPU cores
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ColdCpuNum Number of cold node CPU cores
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetColdCpuNum() const;

                    /**
                     * 设置Number of cold node CPU cores
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _coldCpuNum Number of cold node CPU cores
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetColdCpuNum(const uint64_t& _coldCpuNum);

                    /**
                     * 判断参数 ColdCpuNum 是否已赋值
                     * @return ColdCpuNum 是否已赋值
                     * 
                     */
                    bool ColdCpuNumHasBeenSet() const;

                    /**
                     * 获取Cold node memory size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ColdMemSize Cold node memory size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetColdMemSize() const;

                    /**
                     * 设置Cold node memory size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _coldMemSize Cold node memory size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetColdMemSize(const uint64_t& _coldMemSize);

                    /**
                     * 判断参数 ColdMemSize 是否已赋值
                     * @return ColdMemSize 是否已赋值
                     * 
                     */
                    bool ColdMemSizeHasBeenSet() const;

                    /**
                     * 获取Cold node disk type
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ColdDiskType Cold node disk type
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetColdDiskType() const;

                    /**
                     * 设置Cold node disk type
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _coldDiskType Cold node disk type
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetColdDiskType(const std::string& _coldDiskType);

                    /**
                     * 判断参数 ColdDiskType 是否已赋值
                     * @return ColdDiskType 是否已赋值
                     * 
                     */
                    bool ColdDiskTypeHasBeenSet() const;

                    /**
                     * 获取Cold node disk size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ColdDiskSize Cold node disk size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetColdDiskSize() const;

                    /**
                     * 设置Cold node disk size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _coldDiskSize Cold node disk size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetColdDiskSize(const uint64_t& _coldDiskSize);

                    /**
                     * 判断参数 ColdDiskSize 是否已赋值
                     * @return ColdDiskSize 是否已赋值
                     * 
                     */
                    bool ColdDiskSizeHasBeenSet() const;

                    /**
                     * 获取Frozen node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return `null`, indicating that no valid value was found.
                     * @return FrozenNodeType Frozen node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetFrozenNodeType() const;

                    /**
                     * 设置Frozen node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _frozenNodeType Frozen node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetFrozenNodeType(const std::string& _frozenNodeType);

                    /**
                     * 判断参数 FrozenNodeType 是否已赋值
                     * @return FrozenNodeType 是否已赋值
                     * 
                     */
                    bool FrozenNodeTypeHasBeenSet() const;

                    /**
                     * 获取Number of frozen nodes
Note: This field may return `null`, indicating that no valid value was found.
                     * @return FrozenNodeNum Number of frozen nodes
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetFrozenNodeNum() const;

                    /**
                     * 设置Number of frozen nodes
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _frozenNodeNum Number of frozen nodes
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetFrozenNodeNum(const uint64_t& _frozenNodeNum);

                    /**
                     * 判断参数 FrozenNodeNum 是否已赋值
                     * @return FrozenNodeNum 是否已赋值
                     * 
                     */
                    bool FrozenNodeNumHasBeenSet() const;

                    /**
                     * 获取Number of frozen node CPU cores
Note: This field may return `null`, indicating that no valid value was found.
                     * @return FrozenCpuNum Number of frozen node CPU cores
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetFrozenCpuNum() const;

                    /**
                     * 设置Number of frozen node CPU cores
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _frozenCpuNum Number of frozen node CPU cores
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetFrozenCpuNum(const uint64_t& _frozenCpuNum);

                    /**
                     * 判断参数 FrozenCpuNum 是否已赋值
                     * @return FrozenCpuNum 是否已赋值
                     * 
                     */
                    bool FrozenCpuNumHasBeenSet() const;

                    /**
                     * 获取Frozen node memory size (GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * @return FrozenMemSize Frozen node memory size (GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetFrozenMemSize() const;

                    /**
                     * 设置Frozen node memory size (GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _frozenMemSize Frozen node memory size (GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetFrozenMemSize(const uint64_t& _frozenMemSize);

                    /**
                     * 判断参数 FrozenMemSize 是否已赋值
                     * @return FrozenMemSize 是否已赋值
                     * 
                     */
                    bool FrozenMemSizeHasBeenSet() const;

                    /**
                     * 获取Frozen node disk type
Note: This field may return `null`, indicating that no valid value was found.
                     * @return FrozenDiskType Frozen node disk type
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetFrozenDiskType() const;

                    /**
                     * 设置Frozen node disk type
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _frozenDiskType Frozen node disk type
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetFrozenDiskType(const std::string& _frozenDiskType);

                    /**
                     * 判断参数 FrozenDiskType 是否已赋值
                     * @return FrozenDiskType 是否已赋值
                     * 
                     */
                    bool FrozenDiskTypeHasBeenSet() const;

                    /**
                     * 获取Frozen node disk size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * @return FrozenDiskSize Frozen node disk size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetFrozenDiskSize() const;

                    /**
                     * 设置Frozen node disk size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _frozenDiskSize Frozen node disk size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetFrozenDiskSize(const uint64_t& _frozenDiskSize);

                    /**
                     * 判断参数 FrozenDiskSize 是否已赋值
                     * @return FrozenDiskSize 是否已赋值
                     * 
                     */
                    bool FrozenDiskSizeHasBeenSet() const;

                    /**
                     * 获取Cluster health status. `-1`: Unknown; `0`: Green; `1`: Yellow; `2`: Red
Note: This field may return `null`, indicating that no valid value was found.
                     * @return HealthStatus Cluster health status. `-1`: Unknown; `0`: Green; `1`: Yellow; `2`: Red
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetHealthStatus() const;

                    /**
                     * 设置Cluster health status. `-1`: Unknown; `0`: Green; `1`: Yellow; `2`: Red
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _healthStatus Cluster health status. `-1`: Unknown; `0`: Green; `1`: Yellow; `2`: Red
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetHealthStatus(const int64_t& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取Private URL of the HTTPS cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * @return EsPrivateUrl Private URL of the HTTPS cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetEsPrivateUrl() const;

                    /**
                     * 设置Private URL of the HTTPS cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _esPrivateUrl Private URL of the HTTPS cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetEsPrivateUrl(const std::string& _esPrivateUrl);

                    /**
                     * 判断参数 EsPrivateUrl 是否已赋值
                     * @return EsPrivateUrl 是否已赋值
                     * 
                     */
                    bool EsPrivateUrlHasBeenSet() const;

                    /**
                     * 获取Private domain of the HTTPS cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * @return EsPrivateDomain Private domain of the HTTPS cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetEsPrivateDomain() const;

                    /**
                     * 设置Private domain of the HTTPS cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _esPrivateDomain Private domain of the HTTPS cluster
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetEsPrivateDomain(const std::string& _esPrivateDomain);

                    /**
                     * 判断参数 EsPrivateDomain 是否已赋值
                     * @return EsPrivateDomain 是否已赋值
                     * 
                     */
                    bool EsPrivateDomainHasBeenSet() const;

                    /**
                     * 获取Configuration set info of the cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EsConfigSets Configuration set info of the cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<EsConfigSetInfo> GetEsConfigSets() const;

                    /**
                     * 设置Configuration set info of the cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _esConfigSets Configuration set info of the cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEsConfigSets(const std::vector<EsConfigSetInfo>& _esConfigSets);

                    /**
                     * 判断参数 EsConfigSets 是否已赋值
                     * @return EsConfigSets 是否已赋值
                     * 
                     */
                    bool EsConfigSetsHasBeenSet() const;

                    /**
                     * 获取The maintenance time slot of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperationDuration The maintenance time slot of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    OperationDuration GetOperationDuration() const;

                    /**
                     * 设置The maintenance time slot of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operationDuration The maintenance time slot of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Web node list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OptionalWebServiceInfos Web node list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<OptionalWebServiceInfo> GetOptionalWebServiceInfos() const;

                    /**
                     * 设置Web node list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _optionalWebServiceInfos Web node list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOptionalWebServiceInfos(const std::vector<OptionalWebServiceInfo>& _optionalWebServiceInfos);

                    /**
                     * 判断参数 OptionalWebServiceInfos 是否已赋值
                     * @return OptionalWebServiceInfos 是否已赋值
                     * 
                     */
                    bool OptionalWebServiceInfosHasBeenSet() const;

                    /**
                     * 获取Autonomous index option
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoIndexEnabled Autonomous index option
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAutoIndexEnabled() const;

                    /**
                     * 设置Autonomous index option
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoIndexEnabled Autonomous index option
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoIndexEnabled(const bool& _autoIndexEnabled);

                    /**
                     * 判断参数 AutoIndexEnabled 是否已赋值
                     * @return AutoIndexEnabled 是否已赋值
                     * 
                     */
                    bool AutoIndexEnabledHasBeenSet() const;

                    /**
                     * 获取Whether the storage-computing separation feature is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnableHybridStorage Whether the storage-computing separation feature is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnableHybridStorage() const;

                    /**
                     * 设置Whether the storage-computing separation feature is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enableHybridStorage Whether the storage-computing separation feature is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The process progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessPercent The process progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetProcessPercent() const;

                    /**
                     * 设置The process progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _processPercent The process progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProcessPercent(const double& _processPercent);

                    /**
                     * 判断参数 ProcessPercent 是否已赋值
                     * @return ProcessPercent 是否已赋值
                     * 
                     */
                    bool ProcessPercentHasBeenSet() const;

                    /**
                     * 获取The alerting policy of Kibana over the public network. <li>`OPEN`: Enable the policy;</li><li>`CLOSE`: Disable the policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KibanaAlteringPublicAccess The alerting policy of Kibana over the public network. <li>`OPEN`: Enable the policy;</li><li>`CLOSE`: Disable the policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKibanaAlteringPublicAccess() const;

                    /**
                     * 设置The alerting policy of Kibana over the public network. <li>`OPEN`: Enable the policy;</li><li>`CLOSE`: Disable the policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kibanaAlteringPublicAccess The alerting policy of Kibana over the public network. <li>`OPEN`: Enable the policy;</li><li>`CLOSE`: Disable the policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKibanaAlteringPublicAccess(const std::string& _kibanaAlteringPublicAccess);

                    /**
                     * 判断参数 KibanaAlteringPublicAccess 是否已赋值
                     * @return KibanaAlteringPublicAccess 是否已赋值
                     * 
                     */
                    bool KibanaAlteringPublicAccessHasBeenSet() const;

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
                     * Instance status. `0`: Processing; `1`: Normal; `-1`: `Stopped`; `-2`: Being terminated; `-3`: Terminated; `2`: Initializing during the cluster creation.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * This parameter is not used on the global website
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

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
                     * Dedicated primary node configuration
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
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_warmNodeType;
                    bool m_warmNodeTypeHasBeenSet;

                    /**
                     * Number of warm nodes
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_warmNodeNum;
                    bool m_warmNodeNumHasBeenSet;

                    /**
                     * Number of warm node CPU cores
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_warmCpuNum;
                    bool m_warmCpuNumHasBeenSet;

                    /**
                     * Warm node memory size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_warmMemSize;
                    bool m_warmMemSizeHasBeenSet;

                    /**
                     * Warm node disk type
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_warmDiskType;
                    bool m_warmDiskTypeHasBeenSet;

                    /**
                     * Warm node disk size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
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

                    /**
                     * Scenario template type. 0: not enabled; 1: general scenario; 2: log scenario; 3: search scenario
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * Kibana configuration item.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_kibanaConfig;
                    bool m_kibanaConfigHasBeenSet;

                    /**
                     * Kibana node information
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    KibanaNodeInfo m_kibanaNodeInfo;
                    bool m_kibanaNodeInfoHasBeenSet;

                    /**
                     * Visual node configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    WebNodeTypeInfo m_webNodeTypeInfo;
                    bool m_webNodeTypeInfoHasBeenSet;

                    /**
                     * JDK type. Valid values: `oracle`, `kona`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_jdk;
                    bool m_jdkHasBeenSet;

                    /**
                     * Cluster network communication protocol
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Security group ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * Cold node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_coldNodeType;
                    bool m_coldNodeTypeHasBeenSet;

                    /**
                     * Number of cold nodes
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_coldNodeNum;
                    bool m_coldNodeNumHasBeenSet;

                    /**
                     * Number of cold node CPU cores
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_coldCpuNum;
                    bool m_coldCpuNumHasBeenSet;

                    /**
                     * Cold node memory size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_coldMemSize;
                    bool m_coldMemSizeHasBeenSet;

                    /**
                     * Cold node disk type
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_coldDiskType;
                    bool m_coldDiskTypeHasBeenSet;

                    /**
                     * Cold node disk size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_coldDiskSize;
                    bool m_coldDiskSizeHasBeenSet;

                    /**
                     * Frozen node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_frozenNodeType;
                    bool m_frozenNodeTypeHasBeenSet;

                    /**
                     * Number of frozen nodes
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_frozenNodeNum;
                    bool m_frozenNodeNumHasBeenSet;

                    /**
                     * Number of frozen node CPU cores
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_frozenCpuNum;
                    bool m_frozenCpuNumHasBeenSet;

                    /**
                     * Frozen node memory size (GB)
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_frozenMemSize;
                    bool m_frozenMemSizeHasBeenSet;

                    /**
                     * Frozen node disk type
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_frozenDiskType;
                    bool m_frozenDiskTypeHasBeenSet;

                    /**
                     * Frozen node disk size (in GB)
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_frozenDiskSize;
                    bool m_frozenDiskSizeHasBeenSet;

                    /**
                     * Cluster health status. `-1`: Unknown; `0`: Green; `1`: Yellow; `2`: Red
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * Private URL of the HTTPS cluster
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_esPrivateUrl;
                    bool m_esPrivateUrlHasBeenSet;

                    /**
                     * Private domain of the HTTPS cluster
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_esPrivateDomain;
                    bool m_esPrivateDomainHasBeenSet;

                    /**
                     * Configuration set info of the cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<EsConfigSetInfo> m_esConfigSets;
                    bool m_esConfigSetsHasBeenSet;

                    /**
                     * The maintenance time slot of the cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    OperationDuration m_operationDuration;
                    bool m_operationDurationHasBeenSet;

                    /**
                     * Web node list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<OptionalWebServiceInfo> m_optionalWebServiceInfos;
                    bool m_optionalWebServiceInfosHasBeenSet;

                    /**
                     * Autonomous index option
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_autoIndexEnabled;
                    bool m_autoIndexEnabledHasBeenSet;

                    /**
                     * Whether the storage-computing separation feature is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enableHybridStorage;
                    bool m_enableHybridStorageHasBeenSet;

                    /**
                     * The process progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_processPercent;
                    bool m_processPercentHasBeenSet;

                    /**
                     * The alerting policy of Kibana over the public network. <li>`OPEN`: Enable the policy;</li><li>`CLOSE`: Disable the policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kibanaAlteringPublicAccess;
                    bool m_kibanaAlteringPublicAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INSTANCEINFO_H_
