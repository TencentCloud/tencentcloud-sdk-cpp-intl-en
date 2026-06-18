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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBINSTANCEDETAILRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBINSTANCEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/InstanceParam.h>
#include <tencentcloud/tdmysql/v20211122/model/ResourceTag.h>
#include <tencentcloud/tdmysql/v20211122/model/NodeInfo.h>
#include <tencentcloud/tdmysql/v20211122/model/AutoScalingConfig.h>
#include <tencentcloud/tdmysql/v20211122/model/AnalysisRelationInfo.h>
#include <tencentcloud/tdmysql/v20211122/model/AnalysisInstanceInfo.h>
#include <tencentcloud/tdmysql/v20211122/model/MaintenanceWindowInfo.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceDetail response structure.
                */
                class DescribeDBInstanceDetailResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceDetailResponse();
                    ~DescribeDBInstanceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance name</p>
                     * @return InstanceName <p>Instance name</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>Region</p>
                     * @return Zone <p>Region</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>Character type vpcid</p>
                     * @return VpcId <p>Character type vpcid</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>Character type subnetid</p>
                     * @return SubnetId <p>Character type subnetid</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>Create an instance version</p>
                     * @return CreateVersion <p>Create an instance version</p>
                     * 
                     */
                    std::string GetCreateVersion() const;

                    /**
                     * 判断参数 CreateVersion 是否已赋值
                     * @return CreateVersion 是否已赋值
                     * 
                     */
                    bool CreateVersionHasBeenSet() const;

                    /**
                     * 获取<p>Subnet IP</p>
                     * @return Vip <p>Subnet IP</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>Subnet port</p>
                     * @return Vport <p>Subnet port</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>Instance status</p>
                     * @return Status <p>Instance status</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Node disk capacity (unit: GB)</p>
                     * @return Disk <p>Node disk capacity (unit: GB)</p>
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取<p>Number of storage nodes</p>
                     * @return StorageNodeNum <p>Number of storage nodes</p>
                     * 
                     */
                    int64_t GetStorageNodeNum() const;

                    /**
                     * 判断参数 StorageNodeNum 是否已赋值
                     * @return StorageNodeNum 是否已赋值
                     * 
                     */
                    bool StorageNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Initialize instance parameters</p>
                     * @return InitParams <p>Initialize instance parameters</p>
                     * 
                     */
                    std::vector<InstanceParam> GetInitParams() const;

                    /**
                     * 判断参数 InitParams 是否已赋值
                     * @return InitParams 是否已赋值
                     * 
                     */
                    bool InitParamsHasBeenSet() const;

                    /**
                     * 获取<p>Instance tag information.</p>
                     * @return ResourceTags <p>Instance tag information.</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Number of storage node replicas</p>
                     * @return Replications <p>Number of storage node replicas</p>
                     * 
                     */
                    int64_t GetReplications() const;

                    /**
                     * 判断参数 Replications 是否已赋值
                     * @return Replications 是否已赋值
                     * 
                     */
                    bool ReplicationsHasBeenSet() const;

                    /**
                     * 获取<p>Number of replicas</p>
                     * @return FullReplications <p>Number of replicas</p>
                     * 
                     */
                    int64_t GetFullReplications() const;

                    /**
                     * 判断参数 FullReplications 是否已赋值
                     * @return FullReplications 是否已赋值
                     * 
                     */
                    bool FullReplicationsHasBeenSet() const;

                    /**
                     * 获取<p>Character set</p>
                     * @return CharSet <p>Character set</p>
                     * 
                     */
                    std::string GetCharSet() const;

                    /**
                     * 判断参数 CharSet 是否已赋值
                     * @return CharSet 是否已赋值
                     * 
                     */
                    bool CharSetHasBeenSet() const;

                    /**
                     * 获取<p>Node information</p>
                     * @return Node <p>Node information</p>
                     * 
                     */
                    std::vector<NodeInfo> GetNode() const;

                    /**
                     * 判断参数 Node 是否已赋值
                     * @return Node 是否已赋值
                     * 
                     */
                    bool NodeHasBeenSet() const;

                    /**
                     * 获取<p>Region of the instance</p>
                     * @return Region <p>Region of the instance</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Instance specification</p>
                     * @return SpecCode <p>Instance specification</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Status description in Chinese of the instance</p>
                     * @return StatusDesc <p>Status description in Chinese of the instance</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取<p>CPU cores of the storage node</p>
                     * @return StorageNodeCpu <p>CPU cores of the storage node</p>
                     * 
                     */
                    int64_t GetStorageNodeCpu() const;

                    /**
                     * 判断参数 StorageNodeCpu 是否已赋值
                     * @return StorageNodeCpu 是否已赋值
                     * 
                     */
                    bool StorageNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>Storage node memory size</p>
                     * @return StorageNodeMem <p>Storage node memory size</p>
                     * 
                     */
                    int64_t GetStorageNodeMem() const;

                    /**
                     * 判断参数 StorageNodeMem 是否已赋值
                     * @return StorageNodeMem 是否已赋值
                     * 
                     */
                    bool StorageNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>Renewal flag</p>
                     * @return RenewFlag <p>Renewal flag</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>Payment mode, 0 pay-as-you-go, 1 prepaid</p>
                     * @return PayMode <p>Payment mode, 0 pay-as-you-go, 1 prepaid</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>Expiration time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireAt <p>Expiration time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireAt() const;

                    /**
                     * 判断参数 ExpireAt 是否已赋值
                     * @return ExpireAt 是否已赋值
                     * 
                     */
                    bool ExpireAtHasBeenSet() const;

                    /**
                     * 获取<p>Isolation time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolatedAt <p>Isolation time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsolatedAt() const;

                    /**
                     * 判断参数 IsolatedAt 是否已赋值
                     * @return IsolatedAt 是否已赋值
                     * 
                     */
                    bool IsolatedAtHasBeenSet() const;

                    /**
                     * 获取<p>Instance Architecture Type, separate: decoupled architecture; hybrid: peer-to-peer architecture</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceType <p>Instance Architecture Type, separate: decoupled architecture; hybrid: peer-to-peer architecture</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageType <p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>List of instance node availability zones. Zones[0] refers to the primary AZ</p>
                     * @return Zones <p>List of instance node availability zones. Zones[0] refers to the primary AZ</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取<p>Disk usage of the largest node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskUsage <p>Disk usage of the largest node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDiskUsage() const;

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取<p>Whether binlog is enabled</p>
                     * @return BinlogStatus <p>Whether binlog is enabled</p>
                     * 
                     */
                    int64_t GetBinlogStatus() const;

                    /**
                     * 判断参数 BinlogStatus 是否已赋值
                     * @return BinlogStatus 是否已赋值
                     * 
                     */
                    bool BinlogStatusHasBeenSet() const;

                    /**
                     * 获取<p>az mode. 1: Single az 2: Multi-az non-primary az mode 3: Multi-az primary az mode</p>
                     * @return AZMode <p>az mode. 1: Single az 2: Multi-az non-primary az mode 3: Multi-az primary az mode</p>
                     * 
                     */
                    int64_t GetAZMode() const;

                    /**
                     * 判断参数 AZMode 是否已赋值
                     * @return AZMode 是否已赋值
                     * 
                     */
                    bool AZModeHasBeenSet() const;

                    /**
                     * 获取<p>Disaster recovery flag. 1: No disaster recovery relationship; 2: Primary instance for disaster recovery; 3: Disaster Recovery Standby Instance</p>
                     * @return StandbyFlag <p>Disaster recovery flag. 1: No disaster recovery relationship; 2: Primary instance for disaster recovery; 3: Disaster Recovery Standby Instance</p>
                     * 
                     */
                    int64_t GetStandbyFlag() const;

                    /**
                     * 判断参数 StandbyFlag 是否已赋值
                     * @return StandbyFlag 是否已赋值
                     * 
                     */
                    bool StandbyFlagHasBeenSet() const;

                    /**
                     * 获取<p>cdc node type</p>
                     * @return BinlogType <p>cdc node type</p>
                     * 
                     */
                    std::string GetBinlogType() const;

                    /**
                     * 判断参数 BinlogType 是否已赋值
                     * @return BinlogType 是否已赋值
                     * 
                     */
                    bool BinlogTypeHasBeenSet() const;

                    /**
                     * 获取<p>1 means supported, 0 means unsupported</p>
                     * @return TimingModifyInstanceFlag <p>1 means supported, 0 means unsupported</p>
                     * 
                     */
                    int64_t GetTimingModifyInstanceFlag() const;

                    /**
                     * 判断参数 TimingModifyInstanceFlag 是否已赋值
                     * @return TimingModifyInstanceFlag 是否已赋值
                     * 
                     */
                    bool TimingModifyInstanceFlagHasBeenSet() const;

                    /**
                     * 获取<p>cpu cores of the columnar node</p>
                     * @return ColumnarNodeCpu <p>cpu cores of the columnar node</p>
                     * 
                     */
                    int64_t GetColumnarNodeCpu() const;

                    /**
                     * 判断参数 ColumnarNodeCpu 是否已赋值
                     * @return ColumnarNodeCpu 是否已赋值
                     * 
                     */
                    bool ColumnarNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>Columnar node memory size</p>
                     * @return ColumnarNodeMem <p>Columnar node memory size</p>
                     * 
                     */
                    int64_t GetColumnarNodeMem() const;

                    /**
                     * 判断参数 ColumnarNodeMem 是否已赋值
                     * @return ColumnarNodeMem 是否已赋值
                     * 
                     */
                    bool ColumnarNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>Number of columnar nodes</p>
                     * @return ColumnarNodeNum <p>Number of columnar nodes</p>
                     * 
                     */
                    int64_t GetColumnarNodeNum() const;

                    /**
                     * 判断参数 ColumnarNodeNum 是否已赋值
                     * @return ColumnarNodeNum 是否已赋值
                     * 
                     */
                    bool ColumnarNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Columnar node disk size</p>
                     * @return ColumnarNodeDisk <p>Columnar node disk size</p>
                     * 
                     */
                    int64_t GetColumnarNodeDisk() const;

                    /**
                     * 判断参数 ColumnarNodeDisk 是否已赋值
                     * @return ColumnarNodeDisk 是否已赋值
                     * 
                     */
                    bool ColumnarNodeDiskHasBeenSet() const;

                    /**
                     * 获取<p>Columnar node disk type</p>
                     * @return ColumnarNodeStorageType <p>Columnar node disk type</p>
                     * 
                     */
                    std::string GetColumnarNodeStorageType() const;

                    /**
                     * 判断参数 ColumnarNodeStorageType 是否已赋值
                     * @return ColumnarNodeStorageType 是否已赋值
                     * 
                     */
                    bool ColumnarNodeStorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>Columnar node specification</p>
                     * @return ColumnarNodeSpecCode <p>Columnar node specification</p>
                     * 
                     */
                    std::string GetColumnarNodeSpecCode() const;

                    /**
                     * 判断参数 ColumnarNodeSpecCode 是否已赋值
                     * @return ColumnarNodeSpecCode 是否已赋值
                     * 
                     */
                    bool ColumnarNodeSpecCodeHasBeenSet() const;

                    /**
                     * 获取<p>Columnar storage vip</p>
                     * @return ColumnarVip <p>Columnar storage vip</p>
                     * 
                     */
                    std::string GetColumnarVip() const;

                    /**
                     * 判断参数 ColumnarVip 是否已赋值
                     * @return ColumnarVip 是否已赋值
                     * 
                     */
                    bool ColumnarVipHasBeenSet() const;

                    /**
                     * 获取<p>Columnar vport</p>
                     * @return ColumnarVport <p>Columnar vport</p>
                     * 
                     */
                    int64_t GetColumnarVport() const;

                    /**
                     * 判断参数 ColumnarVport 是否已赋值
                     * @return ColumnarVport 是否已赋值
                     * 
                     */
                    bool ColumnarVportHasBeenSet() const;

                    /**
                     * 获取<p>Whether the instance supports columnar storage</p>
                     * @return IsSupportColumnar <p>Whether the instance supports columnar storage</p>
                     * 
                     */
                    bool GetIsSupportColumnar() const;

                    /**
                     * 判断参数 IsSupportColumnar 是否已赋值
                     * @return IsSupportColumnar 是否已赋值
                     * 
                     */
                    bool IsSupportColumnarHasBeenSet() const;

                    /**
                     * 获取<p>Instance type</p>
                     * @return InstanceCategory <p>Instance type</p>
                     * 
                     */
                    int64_t GetInstanceCategory() const;

                    /**
                     * 判断参数 InstanceCategory 是否已赋值
                     * @return InstanceCategory 是否已赋值
                     * 
                     */
                    bool InstanceCategoryHasBeenSet() const;

                    /**
                     * 获取<p>Compatible mode</p>
                     * @return SQLMode <p>Compatible mode</p>
                     * 
                     */
                    std::string GetSQLMode() const;

                    /**
                     * 判断参数 SQLMode 是否已赋值
                     * @return SQLMode 是否已赋值
                     * 
                     */
                    bool SQLModeHasBeenSet() const;

                    /**
                     * 获取<p>Whether modification of the number of replicas is supported</p>
                     * @return IsSwitchFullReplicationsEnable <p>Whether modification of the number of replicas is supported</p>
                     * 
                     */
                    bool GetIsSwitchFullReplicationsEnable() const;

                    /**
                     * 判断参数 IsSwitchFullReplicationsEnable 是否已赋值
                     * @return IsSwitchFullReplicationsEnable 是否已赋值
                     * 
                     */
                    bool IsSwitchFullReplicationsEnableHasBeenSet() const;

                    /**
                     * 获取<p>Instance type</p>
                     * @return InstanceMode <p>Instance type</p>
                     * 
                     */
                    std::string GetInstanceMode() const;

                    /**
                     * 判断参数 InstanceMode 是否已赋值
                     * @return InstanceMode 是否已赋值
                     * 
                     */
                    bool InstanceModeHasBeenSet() const;

                    /**
                     * 获取<p>dumper vip</p>
                     * @return DumperVip <p>dumper vip</p>
                     * 
                     */
                    std::string GetDumperVip() const;

                    /**
                     * 判断参数 DumperVip 是否已赋值
                     * @return DumperVip 是否已赋值
                     * 
                     */
                    bool DumperVipHasBeenSet() const;

                    /**
                     * 获取<p>dumper vport</p>
                     * @return DumperVport <p>dumper vport</p>
                     * 
                     */
                    int64_t GetDumperVport() const;

                    /**
                     * 判断参数 DumperVport 是否已赋值
                     * @return DumperVport 是否已赋值
                     * 
                     */
                    bool DumperVportHasBeenSet() const;

                    /**
                     * 获取<p>ccu adjustment range of the svls instance</p>
                     * @return AutoScaleConfig <p>ccu adjustment range of the svls instance</p>
                     * 
                     */
                    AutoScalingConfig GetAutoScaleConfig() const;

                    /**
                     * 判断参数 AutoScaleConfig 是否已赋值
                     * @return AutoScaleConfig 是否已赋值
                     * 
                     */
                    bool AutoScaleConfigHasBeenSet() const;

                    /**
                     * 获取<p>Parameter template id</p>
                     * @return TemplateId <p>Parameter template id</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>Parameter template name</p>
                     * @return TemplateName <p>Parameter template name</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取<p>Instance analysis engine mode</p><p>Enumeration value:</p><ul><li>libra: LibraDB analysis engine instance</li></ul>
                     * @return AnalysisMode <p>Instance analysis engine mode</p><p>Enumeration value:</p><ul><li>libra: LibraDB analysis engine instance</li></ul>
                     * 
                     */
                    std::string GetAnalysisMode() const;

                    /**
                     * 判断参数 AnalysisMode 是否已赋值
                     * @return AnalysisMode 是否已赋值
                     * 
                     */
                    bool AnalysisModeHasBeenSet() const;

                    /**
                     * 获取<p>Analysis engine instance relationship</p>
                     * @return AnalysisRelationInfos <p>Analysis engine instance relationship</p>
                     * 
                     */
                    std::vector<AnalysisRelationInfo> GetAnalysisRelationInfos() const;

                    /**
                     * 判断参数 AnalysisRelationInfos 是否已赋值
                     * @return AnalysisRelationInfos 是否已赋值
                     * 
                     */
                    bool AnalysisRelationInfosHasBeenSet() const;

                    /**
                     * 获取<p>Analysis engine instance info</p><p>Cpu, Memory, and Disk reuse top-level fields</p>
                     * @return AnalysisInstanceInfo <p>Analysis engine instance info</p><p>Cpu, Memory, and Disk reuse top-level fields</p>
                     * 
                     */
                    AnalysisInstanceInfo GetAnalysisInstanceInfo() const;

                    /**
                     * 判断参数 AnalysisInstanceInfo 是否已赋值
                     * @return AnalysisInstanceInfo 是否已赋值
                     * 
                     */
                    bool AnalysisInstanceInfoHasBeenSet() const;

                    /**
                     * 获取<p>Maintenance window configuration</p>
                     * @return MaintenanceWindow <p>Maintenance window configuration</p>
                     * 
                     */
                    MaintenanceWindowInfo GetMaintenanceWindow() const;

                    /**
                     * 判断参数 MaintenanceWindow 是否已赋值
                     * @return MaintenanceWindow 是否已赋值
                     * 
                     */
                    bool MaintenanceWindowHasBeenSet() const;

                    /**
                     * 获取<p>Whether transparent data encryption is enabled. 0: not enabled; 1: enabled</p>
                     * @return EncryptionEnable <p>Whether transparent data encryption is enabled. 0: not enabled; 1: enabled</p>
                     * 
                     */
                    int64_t GetEncryptionEnable() const;

                    /**
                     * 判断参数 EncryptionEnable 是否已赋值
                     * @return EncryptionEnable 是否已赋值
                     * 
                     */
                    bool EncryptionEnableHasBeenSet() const;

                    /**
                     * 获取<p>Real-use kms region for subsequent call to kms service</p>
                     * @return EncryptionKmsRegion <p>Real-use kms region for subsequent call to kms service</p>
                     * 
                     */
                    std::string GetEncryptionKmsRegion() const;

                    /**
                     * 判断参数 EncryptionKmsRegion 是否已赋值
                     * @return EncryptionKmsRegion 是否已赋值
                     * 
                     */
                    bool EncryptionKmsRegionHasBeenSet() const;

                private:

                    /**
                     * <p>Instance name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Region</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Character type vpcid</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Character type subnetid</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Create an instance version</p>
                     */
                    std::string m_createVersion;
                    bool m_createVersionHasBeenSet;

                    /**
                     * <p>Subnet IP</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>Subnet port</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>Instance status</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Node disk capacity (unit: GB)</p>
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * <p>Number of storage nodes</p>
                     */
                    int64_t m_storageNodeNum;
                    bool m_storageNodeNumHasBeenSet;

                    /**
                     * <p>Initialize instance parameters</p>
                     */
                    std::vector<InstanceParam> m_initParams;
                    bool m_initParamsHasBeenSet;

                    /**
                     * <p>Instance tag information.</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Number of storage node replicas</p>
                     */
                    int64_t m_replications;
                    bool m_replicationsHasBeenSet;

                    /**
                     * <p>Number of replicas</p>
                     */
                    int64_t m_fullReplications;
                    bool m_fullReplicationsHasBeenSet;

                    /**
                     * <p>Character set</p>
                     */
                    std::string m_charSet;
                    bool m_charSetHasBeenSet;

                    /**
                     * <p>Node information</p>
                     */
                    std::vector<NodeInfo> m_node;
                    bool m_nodeHasBeenSet;

                    /**
                     * <p>Region of the instance</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Instance specification</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Status description in Chinese of the instance</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>CPU cores of the storage node</p>
                     */
                    int64_t m_storageNodeCpu;
                    bool m_storageNodeCpuHasBeenSet;

                    /**
                     * <p>Storage node memory size</p>
                     */
                    int64_t m_storageNodeMem;
                    bool m_storageNodeMemHasBeenSet;

                    /**
                     * <p>Renewal flag</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>Payment mode, 0 pay-as-you-go, 1 prepaid</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Expiration time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireAt;
                    bool m_expireAtHasBeenSet;

                    /**
                     * <p>Isolation time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isolatedAt;
                    bool m_isolatedAtHasBeenSet;

                    /**
                     * <p>Instance Architecture Type, separate: decoupled architecture; hybrid: peer-to-peer architecture</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>List of instance node availability zones. Zones[0] refers to the primary AZ</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>Disk usage of the largest node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * <p>Whether binlog is enabled</p>
                     */
                    int64_t m_binlogStatus;
                    bool m_binlogStatusHasBeenSet;

                    /**
                     * <p>az mode. 1: Single az 2: Multi-az non-primary az mode 3: Multi-az primary az mode</p>
                     */
                    int64_t m_aZMode;
                    bool m_aZModeHasBeenSet;

                    /**
                     * <p>Disaster recovery flag. 1: No disaster recovery relationship; 2: Primary instance for disaster recovery; 3: Disaster Recovery Standby Instance</p>
                     */
                    int64_t m_standbyFlag;
                    bool m_standbyFlagHasBeenSet;

                    /**
                     * <p>cdc node type</p>
                     */
                    std::string m_binlogType;
                    bool m_binlogTypeHasBeenSet;

                    /**
                     * <p>1 means supported, 0 means unsupported</p>
                     */
                    int64_t m_timingModifyInstanceFlag;
                    bool m_timingModifyInstanceFlagHasBeenSet;

                    /**
                     * <p>cpu cores of the columnar node</p>
                     */
                    int64_t m_columnarNodeCpu;
                    bool m_columnarNodeCpuHasBeenSet;

                    /**
                     * <p>Columnar node memory size</p>
                     */
                    int64_t m_columnarNodeMem;
                    bool m_columnarNodeMemHasBeenSet;

                    /**
                     * <p>Number of columnar nodes</p>
                     */
                    int64_t m_columnarNodeNum;
                    bool m_columnarNodeNumHasBeenSet;

                    /**
                     * <p>Columnar node disk size</p>
                     */
                    int64_t m_columnarNodeDisk;
                    bool m_columnarNodeDiskHasBeenSet;

                    /**
                     * <p>Columnar node disk type</p>
                     */
                    std::string m_columnarNodeStorageType;
                    bool m_columnarNodeStorageTypeHasBeenSet;

                    /**
                     * <p>Columnar node specification</p>
                     */
                    std::string m_columnarNodeSpecCode;
                    bool m_columnarNodeSpecCodeHasBeenSet;

                    /**
                     * <p>Columnar storage vip</p>
                     */
                    std::string m_columnarVip;
                    bool m_columnarVipHasBeenSet;

                    /**
                     * <p>Columnar vport</p>
                     */
                    int64_t m_columnarVport;
                    bool m_columnarVportHasBeenSet;

                    /**
                     * <p>Whether the instance supports columnar storage</p>
                     */
                    bool m_isSupportColumnar;
                    bool m_isSupportColumnarHasBeenSet;

                    /**
                     * <p>Instance type</p>
                     */
                    int64_t m_instanceCategory;
                    bool m_instanceCategoryHasBeenSet;

                    /**
                     * <p>Compatible mode</p>
                     */
                    std::string m_sQLMode;
                    bool m_sQLModeHasBeenSet;

                    /**
                     * <p>Whether modification of the number of replicas is supported</p>
                     */
                    bool m_isSwitchFullReplicationsEnable;
                    bool m_isSwitchFullReplicationsEnableHasBeenSet;

                    /**
                     * <p>Instance type</p>
                     */
                    std::string m_instanceMode;
                    bool m_instanceModeHasBeenSet;

                    /**
                     * <p>dumper vip</p>
                     */
                    std::string m_dumperVip;
                    bool m_dumperVipHasBeenSet;

                    /**
                     * <p>dumper vport</p>
                     */
                    int64_t m_dumperVport;
                    bool m_dumperVportHasBeenSet;

                    /**
                     * <p>ccu adjustment range of the svls instance</p>
                     */
                    AutoScalingConfig m_autoScaleConfig;
                    bool m_autoScaleConfigHasBeenSet;

                    /**
                     * <p>Parameter template id</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>Parameter template name</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>Instance analysis engine mode</p><p>Enumeration value:</p><ul><li>libra: LibraDB analysis engine instance</li></ul>
                     */
                    std::string m_analysisMode;
                    bool m_analysisModeHasBeenSet;

                    /**
                     * <p>Analysis engine instance relationship</p>
                     */
                    std::vector<AnalysisRelationInfo> m_analysisRelationInfos;
                    bool m_analysisRelationInfosHasBeenSet;

                    /**
                     * <p>Analysis engine instance info</p><p>Cpu, Memory, and Disk reuse top-level fields</p>
                     */
                    AnalysisInstanceInfo m_analysisInstanceInfo;
                    bool m_analysisInstanceInfoHasBeenSet;

                    /**
                     * <p>Maintenance window configuration</p>
                     */
                    MaintenanceWindowInfo m_maintenanceWindow;
                    bool m_maintenanceWindowHasBeenSet;

                    /**
                     * <p>Whether transparent data encryption is enabled. 0: not enabled; 1: enabled</p>
                     */
                    int64_t m_encryptionEnable;
                    bool m_encryptionEnableHasBeenSet;

                    /**
                     * <p>Real-use kms region for subsequent call to kms service</p>
                     */
                    std::string m_encryptionKmsRegion;
                    bool m_encryptionKmsRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBINSTANCEDETAILRESPONSE_H_
