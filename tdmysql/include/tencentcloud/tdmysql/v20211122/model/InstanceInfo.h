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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/InstanceParam.h>
#include <tencentcloud/tdmysql/v20211122/model/ResourceTag.h>
#include <tencentcloud/tdmysql/v20211122/model/InstanceNode.h>
#include <tencentcloud/tdmysql/v20211122/model/AutoScalingConfig.h>
#include <tencentcloud/tdmysql/v20211122/model/AnalysisRelationInfo.h>
#include <tencentcloud/tdmysql/v20211122/model/AnalysisInstanceInfo.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Instance information type
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Number of compute nodes</p>
                     * @return ComputeNodeNum <p>Number of compute nodes</p>
                     * @deprecated
                     */
                    int64_t GetComputeNodeNum() const;

                    /**
                     * 设置<p>Number of compute nodes</p>
                     * @param _computeNodeNum <p>Number of compute nodes</p>
                     * @deprecated
                     */
                    void SetComputeNodeNum(const int64_t& _computeNodeNum);

                    /**
                     * 判断参数 ComputeNodeNum 是否已赋值
                     * @return ComputeNodeNum 是否已赋值
                     * @deprecated
                     */
                    bool ComputeNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Region</p>
                     * @return Zone <p>Region</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Region</p>
                     * @param _zone <p>Region</p>
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
                     * 获取<p>Creating an Instance Version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateVersion <p>Creating an Instance Version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateVersion() const;

                    /**
                     * 设置<p>Creating an Instance Version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createVersion <p>Creating an Instance Version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateVersion(const std::string& _createVersion);

                    /**
                     * 判断参数 CreateVersion 是否已赋值
                     * @return CreateVersion 是否已赋值
                     * 
                     */
                    bool CreateVersionHasBeenSet() const;

                    /**
                     * 获取<p>Initialize instance parameter</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InitParams <p>Initialize instance parameter</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<InstanceParam> GetInitParams() const;

                    /**
                     * 设置<p>Initialize instance parameter</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _initParams <p>Initialize instance parameter</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInitParams(const std::vector<InstanceParam>& _initParams);

                    /**
                     * 判断参数 InitParams 是否已赋值
                     * @return InitParams 是否已赋值
                     * 
                     */
                    bool InitParamsHasBeenSet() const;

                    /**
                     * 获取<p>Instance status: creating, created, initializing, running, modifying, isolating, isolated, destroying, destroyed</p>
                     * @return Status <p>Instance status: creating, created, initializing, running, modifying, isolating, isolated, destroying, destroyed</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Instance status: creating, created, initializing, running, modifying, isolating, isolated, destroying, destroyed</p>
                     * @param _status <p>Instance status: creating, created, initializing, running, modifying, isolating, isolated, destroying, destroyed</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Instance id</p>
                     * @return InstanceId <p>Instance id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance id</p>
                     * @param _instanceId <p>Instance id</p>
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
                     * 获取<p>Number of storage nodes</p>
                     * @return StorageNodeNum <p>Number of storage nodes</p>
                     * 
                     */
                    int64_t GetStorageNodeNum() const;

                    /**
                     * 设置<p>Number of storage nodes</p>
                     * @param _storageNodeNum <p>Number of storage nodes</p>
                     * 
                     */
                    void SetStorageNodeNum(const int64_t& _storageNodeNum);

                    /**
                     * 判断参数 StorageNodeNum 是否已赋值
                     * @return StorageNodeNum 是否已赋值
                     * 
                     */
                    bool StorageNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Instance tag information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceTags <p>Instance tag information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>Instance tag information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceTags <p>Instance tag information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>Instance name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName <p>Instance name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceName <p>Instance name</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>cpu cores of the computing node</p>
                     * @return Cpu <p>cpu cores of the computing node</p>
                     * @deprecated
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>cpu cores of the computing node</p>
                     * @param _cpu <p>cpu cores of the computing node</p>
                     * @deprecated
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * @deprecated
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>Character type vpcid</p>
                     * @return VpcId <p>Character type vpcid</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>Character type vpcid</p>
                     * @param _vpcId <p>Character type vpcid</p>
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
                     * 获取<p>Computing node mem, in GB</p>
                     * @return Mem <p>Computing node mem, in GB</p>
                     * @deprecated
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置<p>Computing node mem, in GB</p>
                     * @param _mem <p>Computing node mem, in GB</p>
                     * @deprecated
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * @deprecated
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取<p>Subnet IP</p>
                     * @return Vip <p>Subnet IP</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>Subnet IP</p>
                     * @param _vip <p>Subnet IP</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>Character type subnetid</p>
                     * @return SubnetId <p>Character type subnetid</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Character type subnetid</p>
                     * @param _subnetId <p>Character type subnetid</p>
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
                     * 获取<p>Subnet port</p>
                     * @return Vport <p>Subnet port</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>Subnet port</p>
                     * @param _vport <p>Subnet port</p>
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>Node disk capacity (unit: GB)</p>
                     * @return Disk <p>Node disk capacity (unit: GB)</p>
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 设置<p>Node disk capacity (unit: GB)</p>
                     * @param _disk <p>Node disk capacity (unit: GB)</p>
                     * 
                     */
                    void SetDisk(const int64_t& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取<p>Instance Creation Time</p>
                     * @return CreateTime <p>Instance Creation Time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Instance Creation Time</p>
                     * @param _createTime <p>Instance Creation Time</p>
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
                     * 获取<p>Region of the instance</p>
                     * @return Region <p>Region of the instance</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region of the instance</p>
                     * @param _region <p>Region of the instance</p>
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
                     * 获取<p>Status description in Chinese of the instance</p>
                     * @return StatusDesc <p>Status description in Chinese of the instance</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>Status description in Chinese of the instance</p>
                     * @param _statusDesc <p>Status description in Chinese of the instance</p>
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取<p>CPU cores of the control node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MCCpu <p>CPU cores of the control node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    int64_t GetMCCpu() const;

                    /**
                     * 设置<p>CPU cores of the control node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mCCpu <p>CPU cores of the control node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetMCCpu(const int64_t& _mCCpu);

                    /**
                     * 判断参数 MCCpu 是否已赋值
                     * @return MCCpu 是否已赋值
                     * @deprecated
                     */
                    bool MCCpuHasBeenSet() const;

                    /**
                     * 获取<p>CPU size of the control node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MCMem <p>CPU size of the control node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    int64_t GetMCMem() const;

                    /**
                     * 设置<p>CPU size of the control node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mCMem <p>CPU size of the control node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetMCMem(const int64_t& _mCMem);

                    /**
                     * 判断参数 MCMem 是否已赋值
                     * @return MCMem 是否已赋值
                     * @deprecated
                     */
                    bool MCMemHasBeenSet() const;

                    /**
                     * 获取<p>CPU cores of the computing node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComputerNodeCpu <p>CPU cores of the computing node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    int64_t GetComputerNodeCpu() const;

                    /**
                     * 设置<p>CPU cores of the computing node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _computerNodeCpu <p>CPU cores of the computing node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetComputerNodeCpu(const int64_t& _computerNodeCpu);

                    /**
                     * 判断参数 ComputerNodeCpu 是否已赋值
                     * @return ComputerNodeCpu 是否已赋值
                     * @deprecated
                     */
                    bool ComputerNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>Compute node memory size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComputerNodeMem <p>Compute node memory size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    int64_t GetComputerNodeMem() const;

                    /**
                     * 设置<p>Compute node memory size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _computerNodeMem <p>Compute node memory size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetComputerNodeMem(const int64_t& _computerNodeMem);

                    /**
                     * 判断参数 ComputerNodeMem 是否已赋值
                     * @return ComputerNodeMem 是否已赋值
                     * @deprecated
                     */
                    bool ComputerNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>CPU cores of the storage node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageNodeCpu <p>CPU cores of the storage node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStorageNodeCpu() const;

                    /**
                     * 设置<p>CPU cores of the storage node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageNodeCpu <p>CPU cores of the storage node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStorageNodeCpu(const int64_t& _storageNodeCpu);

                    /**
                     * 判断参数 StorageNodeCpu 是否已赋值
                     * @return StorageNodeCpu 是否已赋值
                     * 
                     */
                    bool StorageNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>Storage node memory size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageNodeMem <p>Storage node memory size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStorageNodeMem() const;

                    /**
                     * 设置<p>Storage node memory size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageNodeMem <p>Storage node memory size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStorageNodeMem(const int64_t& _storageNodeMem);

                    /**
                     * 判断参数 StorageNodeMem 是否已赋值
                     * @return StorageNodeMem 是否已赋值
                     * 
                     */
                    bool StorageNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>Number of control nodes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MCNum <p>Number of control nodes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    int64_t GetMCNum() const;

                    /**
                     * 设置<p>Number of control nodes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mCNum <p>Number of control nodes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetMCNum(const int64_t& _mCNum);

                    /**
                     * 判断参数 MCNum 是否已赋值
                     * @return MCNum 是否已赋值
                     * @deprecated
                     */
                    bool MCNumHasBeenSet() const;

                    /**
                     * 获取<p>Renewal flag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag <p>Renewal flag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>Renewal flag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _renewFlag <p>Renewal flag</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Payment mode, 0 pay-as-you-go; 1 annual/monthly subscription</p>
                     * @return PayMode <p>Payment mode, 0 pay-as-you-go; 1 annual/monthly subscription</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>Payment mode, 0 pay-as-you-go; 1 annual/monthly subscription</p>
                     * @param _payMode <p>Payment mode, 0 pay-as-you-go; 1 annual/monthly subscription</p>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>User tag, inner: internal user; external: external user</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccountTag <p>User tag, inner: internal user; external: external user</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccountTag() const;

                    /**
                     * 设置<p>User tag, inner: internal user; external: external user</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accountTag <p>User tag, inner: internal user; external: external user</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccountTag(const std::string& _accountTag);

                    /**
                     * 判断参数 AccountTag 是否已赋值
                     * @return AccountTag 是否已赋值
                     * 
                     */
                    bool AccountTagHasBeenSet() const;

                    /**
                     * 获取<p>Instance Architecture Type, separate: decoupled architecture; hyper: peer-to-peer architecture</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceType <p>Instance Architecture Type, separate: decoupled architecture; hyper: peer-to-peer architecture</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Instance Architecture Type, separate: decoupled architecture; hyper: peer-to-peer architecture</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceType <p>Instance Architecture Type, separate: decoupled architecture; hyper: peer-to-peer architecture</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

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
                     * 设置<p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageType <p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DestroyedAt <p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDestroyedAt() const;

                    /**
                     * 设置<p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _destroyedAt <p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDestroyedAt(const std::string& _destroyedAt);

                    /**
                     * 判断参数 DestroyedAt 是否已赋值
                     * @return DestroyedAt 是否已赋值
                     * 
                     */
                    bool DestroyedAtHasBeenSet() const;

                    /**
                     * 获取<p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireAt <p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireAt() const;

                    /**
                     * 设置<p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireAt <p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireAt(const std::string& _expireAt);

                    /**
                     * 判断参数 ExpireAt 是否已赋值
                     * @return ExpireAt 是否已赋值
                     * 
                     */
                    bool ExpireAtHasBeenSet() const;

                    /**
                     * 获取<p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolatedAt <p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsolatedAt() const;

                    /**
                     * 设置<p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isolatedAt <p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsolatedAt(const std::string& _isolatedAt);

                    /**
                     * 判断参数 IsolatedAt 是否已赋值
                     * @return IsolatedAt 是否已赋值
                     * 
                     */
                    bool IsolatedAtHasBeenSet() const;

                    /**
                     * 获取<p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolatedFrom <p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsolatedFrom() const;

                    /**
                     * 设置<p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isolatedFrom <p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsolatedFrom(const std::string& _isolatedFrom);

                    /**
                     * 判断参数 IsolatedFrom 是否已赋值
                     * @return IsolatedFrom 是否已赋值
                     * 
                     */
                    bool IsolatedFromHasBeenSet() const;

                    /**
                     * 获取<p>1</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Replications <p>1</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetReplications() const;

                    /**
                     * 设置<p>1</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _replications <p>1</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReplications(const int64_t& _replications);

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
                     * 设置<p>Number of replicas</p>
                     * @param _fullReplications <p>Number of replicas</p>
                     * 
                     */
                    void SetFullReplications(const int64_t& _fullReplications);

                    /**
                     * 判断参数 FullReplications 是否已赋值
                     * @return FullReplications 是否已赋值
                     * 
                     */
                    bool FullReplicationsHasBeenSet() const;

                    /**
                     * 获取<p>Account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppId <p>Account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>Account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appId <p>Account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubAccountUin <p>Account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置<p>Account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subAccountUin <p>Account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>Account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uin <p>Account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>Account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uin <p>Account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>AZ information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zones <p>AZ information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>AZ information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zones <p>AZ information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取<p>Instance node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nodes <p>Instance node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<InstanceNode> GetNodes() const;

                    /**
                     * 设置<p>Instance node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodes <p>Instance node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodes(const std::vector<InstanceNode>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取<p>Whether binlog is on</p>
                     * @return BinlogStatus <p>Whether binlog is on</p>
                     * 
                     */
                    int64_t GetBinlogStatus() const;

                    /**
                     * 设置<p>Whether binlog is on</p>
                     * @param _binlogStatus <p>Whether binlog is on</p>
                     * 
                     */
                    void SetBinlogStatus(const int64_t& _binlogStatus);

                    /**
                     * 判断参数 BinlogStatus 是否已赋值
                     * @return BinlogStatus 是否已赋值
                     * 
                     */
                    bool BinlogStatusHasBeenSet() const;

                    /**
                     * 获取<p>Number of cdc node cores</p>
                     * @return CdcNodeCpu <p>Number of cdc node cores</p>
                     * @deprecated
                     */
                    int64_t GetCdcNodeCpu() const;

                    /**
                     * 设置<p>Number of cdc node cores</p>
                     * @param _cdcNodeCpu <p>Number of cdc node cores</p>
                     * @deprecated
                     */
                    void SetCdcNodeCpu(const int64_t& _cdcNodeCpu);

                    /**
                     * 判断参数 CdcNodeCpu 是否已赋值
                     * @return CdcNodeCpu 是否已赋值
                     * @deprecated
                     */
                    bool CdcNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>cdc node memory size</p>
                     * @return CdcNodeMem <p>cdc node memory size</p>
                     * @deprecated
                     */
                    int64_t GetCdcNodeMem() const;

                    /**
                     * 设置<p>cdc node memory size</p>
                     * @param _cdcNodeMem <p>cdc node memory size</p>
                     * @deprecated
                     */
                    void SetCdcNodeMem(const int64_t& _cdcNodeMem);

                    /**
                     * 判断参数 CdcNodeMem 是否已赋值
                     * @return CdcNodeMem 是否已赋值
                     * @deprecated
                     */
                    bool CdcNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>Number of cdc nodes</p>
                     * @return CdcNodeNum <p>Number of cdc nodes</p>
                     * @deprecated
                     */
                    int64_t GetCdcNodeNum() const;

                    /**
                     * 设置<p>Number of cdc nodes</p>
                     * @param _cdcNodeNum <p>Number of cdc nodes</p>
                     * @deprecated
                     */
                    void SetCdcNodeNum(const int64_t& _cdcNodeNum);

                    /**
                     * 判断参数 CdcNodeNum 是否已赋值
                     * @return CdcNodeNum 是否已赋值
                     * @deprecated
                     */
                    bool CdcNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>az mode. 1: Single az, 2: Multi-az non-primary az mode, 3: Multi-az primary az mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AZMode <p>az mode. 1: Single az, 2: Multi-az non-primary az mode, 3: Multi-az primary az mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAZMode() const;

                    /**
                     * 设置<p>az mode. 1: Single az, 2: Multi-az non-primary az mode, 3: Multi-az primary az mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aZMode <p>az mode. 1: Single az, 2: Multi-az non-primary az mode, 3: Multi-az primary az mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAZMode(const int64_t& _aZMode);

                    /**
                     * 判断参数 AZMode 是否已赋值
                     * @return AZMode 是否已赋值
                     * 
                     */
                    bool AZModeHasBeenSet() const;

                    /**
                     * 获取<p>Disaster recovery flag. 1: No disaster recovery relationship; 2: Primary instance for disaster recovery; 3: Disaster Recovery Standby Instance</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StandbyFlag <p>Disaster recovery flag. 1: No disaster recovery relationship; 2: Primary instance for disaster recovery; 3: Disaster Recovery Standby Instance</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStandbyFlag() const;

                    /**
                     * 设置<p>Disaster recovery flag. 1: No disaster recovery relationship; 2: Primary instance for disaster recovery; 3: Disaster Recovery Standby Instance</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _standbyFlag <p>Disaster recovery flag. 1: No disaster recovery relationship; 2: Primary instance for disaster recovery; 3: Disaster Recovery Standby Instance</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStandbyFlag(const int64_t& _standbyFlag);

                    /**
                     * 判断参数 StandbyFlag 是否已赋值
                     * @return StandbyFlag 是否已赋值
                     * 
                     */
                    bool StandbyFlagHasBeenSet() const;

                    /**
                     * 获取<p>Number of connected standby instances (Valid only when StandbyFlag == 2)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StandbySecondaryNum <p>Number of connected standby instances (Valid only when StandbyFlag == 2)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStandbySecondaryNum() const;

                    /**
                     * 设置<p>Number of connected standby instances (Valid only when StandbyFlag == 2)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _standbySecondaryNum <p>Number of connected standby instances (Valid only when StandbyFlag == 2)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStandbySecondaryNum(const int64_t& _standbySecondaryNum);

                    /**
                     * 判断参数 StandbySecondaryNum 是否已赋值
                     * @return StandbySecondaryNum 是否已赋值
                     * 
                     */
                    bool StandbySecondaryNumHasBeenSet() const;

                    /**
                     * 获取<p>cpu cores of the columnar node</p>
                     * @return ColumnarNodeCpu <p>cpu cores of the columnar node</p>
                     * 
                     */
                    int64_t GetColumnarNodeCpu() const;

                    /**
                     * 设置<p>cpu cores of the columnar node</p>
                     * @param _columnarNodeCpu <p>cpu cores of the columnar node</p>
                     * 
                     */
                    void SetColumnarNodeCpu(const int64_t& _columnarNodeCpu);

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
                     * 设置<p>Columnar node memory size</p>
                     * @param _columnarNodeMem <p>Columnar node memory size</p>
                     * 
                     */
                    void SetColumnarNodeMem(const int64_t& _columnarNodeMem);

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
                     * 设置<p>Number of columnar nodes</p>
                     * @param _columnarNodeNum <p>Number of columnar nodes</p>
                     * 
                     */
                    void SetColumnarNodeNum(const int64_t& _columnarNodeNum);

                    /**
                     * 判断参数 ColumnarNodeNum 是否已赋值
                     * @return ColumnarNodeNum 是否已赋值
                     * 
                     */
                    bool ColumnarNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Columnar node disk capacity (unit: GB)</p>
                     * @return ColumnarNodeDisk <p>Columnar node disk capacity (unit: GB)</p>
                     * 
                     */
                    int64_t GetColumnarNodeDisk() const;

                    /**
                     * 设置<p>Columnar node disk capacity (unit: GB)</p>
                     * @param _columnarNodeDisk <p>Columnar node disk capacity (unit: GB)</p>
                     * 
                     */
                    void SetColumnarNodeDisk(const int64_t& _columnarNodeDisk);

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
                     * 设置<p>Columnar node disk type</p>
                     * @param _columnarNodeStorageType <p>Columnar node disk type</p>
                     * 
                     */
                    void SetColumnarNodeStorageType(const std::string& _columnarNodeStorageType);

                    /**
                     * 判断参数 ColumnarNodeStorageType 是否已赋值
                     * @return ColumnarNodeStorageType 是否已赋值
                     * 
                     */
                    bool ColumnarNodeStorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>Exclusive flags, 1: Primary instance (dedicated), 2: Primary instance, 3: Disaster recovery instance, 4: Disaster recovery instance (dedicated)</p>
                     * @return InstanceCategory <p>Exclusive flags, 1: Primary instance (dedicated), 2: Primary instance, 3: Disaster recovery instance, 4: Disaster recovery instance (dedicated)</p>
                     * 
                     */
                    int64_t GetInstanceCategory() const;

                    /**
                     * 设置<p>Exclusive flags, 1: Primary instance (dedicated), 2: Primary instance, 3: Disaster recovery instance, 4: Disaster recovery instance (dedicated)</p>
                     * @param _instanceCategory <p>Exclusive flags, 1: Primary instance (dedicated), 2: Primary instance, 3: Disaster recovery instance, 4: Disaster recovery instance (dedicated)</p>
                     * 
                     */
                    void SetInstanceCategory(const int64_t& _instanceCategory);

                    /**
                     * 判断参数 InstanceCategory 是否已赋值
                     * @return InstanceCategory 是否已赋值
                     * 
                     */
                    bool InstanceCategoryHasBeenSet() const;

                    /**
                     * 获取<p>dbdc-xxxxx</p>
                     * @return ExclusiveClusterId <p>dbdc-xxxxx</p>
                     * 
                     */
                    std::string GetExclusiveClusterId() const;

                    /**
                     * 设置<p>dbdc-xxxxx</p>
                     * @param _exclusiveClusterId <p>dbdc-xxxxx</p>
                     * 
                     */
                    void SetExclusiveClusterId(const std::string& _exclusiveClusterId);

                    /**
                     * 判断参数 ExclusiveClusterId 是否已赋值
                     * @return ExclusiveClusterId 是否已赋值
                     * 
                     */
                    bool ExclusiveClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Compatible mode</p>
                     * @return SQLMode <p>Compatible mode</p>
                     * 
                     */
                    std::string GetSQLMode() const;

                    /**
                     * 设置<p>Compatible mode</p>
                     * @param _sQLMode <p>Compatible mode</p>
                     * 
                     */
                    void SetSQLMode(const std::string& _sQLMode);

                    /**
                     * 判断参数 SQLMode 是否已赋值
                     * @return SQLMode 是否已赋值
                     * 
                     */
                    bool SQLModeHasBeenSet() const;

                    /**
                     * 获取<p>Instance mode</p>
                     * @return InstanceMode <p>Instance mode</p>
                     * 
                     */
                    std::string GetInstanceMode() const;

                    /**
                     * 设置<p>Instance mode</p>
                     * @param _instanceMode <p>Instance mode</p>
                     * 
                     */
                    void SetInstanceMode(const std::string& _instanceMode);

                    /**
                     * 判断参数 InstanceMode 是否已赋值
                     * @return InstanceMode 是否已赋值
                     * 
                     */
                    bool InstanceModeHasBeenSet() const;

                    /**
                     * 获取<p>Instance delivery platform</p>
                     * @return ClusterId <p>Instance delivery platform</p>
                     * @deprecated
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Instance delivery platform</p>
                     * @param _clusterId <p>Instance delivery platform</p>
                     * @deprecated
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * @deprecated
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Auto-scaling configuration</p>
                     * @return AutoScaleConfig <p>Auto-scaling configuration</p>
                     * 
                     */
                    AutoScalingConfig GetAutoScaleConfig() const;

                    /**
                     * 设置<p>Auto-scaling configuration</p>
                     * @param _autoScaleConfig <p>Auto-scaling configuration</p>
                     * 
                     */
                    void SetAutoScaleConfig(const AutoScalingConfig& _autoScaleConfig);

                    /**
                     * 判断参数 AutoScaleConfig 是否已赋值
                     * @return AutoScaleConfig 是否已赋值
                     * 
                     */
                    bool AutoScaleConfigHasBeenSet() const;

                    /**
                     * 获取<p>Analytical engine mode</p><p>Enumeration value:</p><ul><li>libra: LibraDB analytical engine mode</li></ul>
                     * @return AnalysisMode <p>Analytical engine mode</p><p>Enumeration value:</p><ul><li>libra: LibraDB analytical engine mode</li></ul>
                     * 
                     */
                    std::string GetAnalysisMode() const;

                    /**
                     * 设置<p>Analytical engine mode</p><p>Enumeration value:</p><ul><li>libra: LibraDB analytical engine mode</li></ul>
                     * @param _analysisMode <p>Analytical engine mode</p><p>Enumeration value:</p><ul><li>libra: LibraDB analytical engine mode</li></ul>
                     * 
                     */
                    void SetAnalysisMode(const std::string& _analysisMode);

                    /**
                     * 判断参数 AnalysisMode 是否已赋值
                     * @return AnalysisMode 是否已赋值
                     * 
                     */
                    bool AnalysisModeHasBeenSet() const;

                    /**
                     * 获取<p>Analysis engine relationship information</p>
                     * @return AnalysisRelationInfos <p>Analysis engine relationship information</p>
                     * 
                     */
                    std::vector<AnalysisRelationInfo> GetAnalysisRelationInfos() const;

                    /**
                     * 设置<p>Analysis engine relationship information</p>
                     * @param _analysisRelationInfos <p>Analysis engine relationship information</p>
                     * 
                     */
                    void SetAnalysisRelationInfos(const std::vector<AnalysisRelationInfo>& _analysisRelationInfos);

                    /**
                     * 判断参数 AnalysisRelationInfos 是否已赋值
                     * @return AnalysisRelationInfos 是否已赋值
                     * 
                     */
                    bool AnalysisRelationInfosHasBeenSet() const;

                    /**
                     * 获取<p>Analysis engine instance info</p>
                     * @return AnalysisInstanceInfo <p>Analysis engine instance info</p>
                     * 
                     */
                    AnalysisInstanceInfo GetAnalysisInstanceInfo() const;

                    /**
                     * 设置<p>Analysis engine instance info</p>
                     * @param _analysisInstanceInfo <p>Analysis engine instance info</p>
                     * 
                     */
                    void SetAnalysisInstanceInfo(const AnalysisInstanceInfo& _analysisInstanceInfo);

                    /**
                     * 判断参数 AnalysisInstanceInfo 是否已赋值
                     * @return AnalysisInstanceInfo 是否已赋值
                     * 
                     */
                    bool AnalysisInstanceInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Number of compute nodes</p>
                     */
                    int64_t m_computeNodeNum;
                    bool m_computeNodeNumHasBeenSet;

                    /**
                     * <p>Region</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Creating an Instance Version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createVersion;
                    bool m_createVersionHasBeenSet;

                    /**
                     * <p>Initialize instance parameter</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<InstanceParam> m_initParams;
                    bool m_initParamsHasBeenSet;

                    /**
                     * <p>Instance status: creating, created, initializing, running, modifying, isolating, isolated, destroying, destroyed</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Number of storage nodes</p>
                     */
                    int64_t m_storageNodeNum;
                    bool m_storageNodeNumHasBeenSet;

                    /**
                     * <p>Instance tag information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Instance name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>cpu cores of the computing node</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Character type vpcid</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Computing node mem, in GB</p>
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * <p>Subnet IP</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>Character type subnetid</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Subnet port</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>Node disk capacity (unit: GB)</p>
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * <p>Instance Creation Time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Region of the instance</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Status description in Chinese of the instance</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>CPU cores of the control node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_mCCpu;
                    bool m_mCCpuHasBeenSet;

                    /**
                     * <p>CPU size of the control node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_mCMem;
                    bool m_mCMemHasBeenSet;

                    /**
                     * <p>CPU cores of the computing node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_computerNodeCpu;
                    bool m_computerNodeCpuHasBeenSet;

                    /**
                     * <p>Compute node memory size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_computerNodeMem;
                    bool m_computerNodeMemHasBeenSet;

                    /**
                     * <p>CPU cores of the storage node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storageNodeCpu;
                    bool m_storageNodeCpuHasBeenSet;

                    /**
                     * <p>Storage node memory size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storageNodeMem;
                    bool m_storageNodeMemHasBeenSet;

                    /**
                     * <p>Number of control nodes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_mCNum;
                    bool m_mCNumHasBeenSet;

                    /**
                     * <p>Renewal flag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>Payment mode, 0 pay-as-you-go; 1 annual/monthly subscription</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>User tag, inner: internal user; external: external user</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accountTag;
                    bool m_accountTagHasBeenSet;

                    /**
                     * <p>Instance Architecture Type, separate: decoupled architecture; hyper: peer-to-peer architecture</p>
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
                     * <p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_destroyedAt;
                    bool m_destroyedAtHasBeenSet;

                    /**
                     * <p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireAt;
                    bool m_expireAtHasBeenSet;

                    /**
                     * <p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isolatedAt;
                    bool m_isolatedAtHasBeenSet;

                    /**
                     * <p>&quot;0000-00-00 00:00:00&quot;</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isolatedFrom;
                    bool m_isolatedFromHasBeenSet;

                    /**
                     * <p>1</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_replications;
                    bool m_replicationsHasBeenSet;

                    /**
                     * <p>Number of replicas</p>
                     */
                    int64_t m_fullReplications;
                    bool m_fullReplicationsHasBeenSet;

                    /**
                     * <p>Account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * <p>Account information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>AZ information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>Instance node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<InstanceNode> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * <p>Whether binlog is on</p>
                     */
                    int64_t m_binlogStatus;
                    bool m_binlogStatusHasBeenSet;

                    /**
                     * <p>Number of cdc node cores</p>
                     */
                    int64_t m_cdcNodeCpu;
                    bool m_cdcNodeCpuHasBeenSet;

                    /**
                     * <p>cdc node memory size</p>
                     */
                    int64_t m_cdcNodeMem;
                    bool m_cdcNodeMemHasBeenSet;

                    /**
                     * <p>Number of cdc nodes</p>
                     */
                    int64_t m_cdcNodeNum;
                    bool m_cdcNodeNumHasBeenSet;

                    /**
                     * <p>az mode. 1: Single az, 2: Multi-az non-primary az mode, 3: Multi-az primary az mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_aZMode;
                    bool m_aZModeHasBeenSet;

                    /**
                     * <p>Disaster recovery flag. 1: No disaster recovery relationship; 2: Primary instance for disaster recovery; 3: Disaster Recovery Standby Instance</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_standbyFlag;
                    bool m_standbyFlagHasBeenSet;

                    /**
                     * <p>Number of connected standby instances (Valid only when StandbyFlag == 2)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_standbySecondaryNum;
                    bool m_standbySecondaryNumHasBeenSet;

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
                     * <p>Columnar node disk capacity (unit: GB)</p>
                     */
                    int64_t m_columnarNodeDisk;
                    bool m_columnarNodeDiskHasBeenSet;

                    /**
                     * <p>Columnar node disk type</p>
                     */
                    std::string m_columnarNodeStorageType;
                    bool m_columnarNodeStorageTypeHasBeenSet;

                    /**
                     * <p>Exclusive flags, 1: Primary instance (dedicated), 2: Primary instance, 3: Disaster recovery instance, 4: Disaster recovery instance (dedicated)</p>
                     */
                    int64_t m_instanceCategory;
                    bool m_instanceCategoryHasBeenSet;

                    /**
                     * <p>dbdc-xxxxx</p>
                     */
                    std::string m_exclusiveClusterId;
                    bool m_exclusiveClusterIdHasBeenSet;

                    /**
                     * <p>Compatible mode</p>
                     */
                    std::string m_sQLMode;
                    bool m_sQLModeHasBeenSet;

                    /**
                     * <p>Instance mode</p>
                     */
                    std::string m_instanceMode;
                    bool m_instanceModeHasBeenSet;

                    /**
                     * <p>Instance delivery platform</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Auto-scaling configuration</p>
                     */
                    AutoScalingConfig m_autoScaleConfig;
                    bool m_autoScaleConfigHasBeenSet;

                    /**
                     * <p>Analytical engine mode</p><p>Enumeration value:</p><ul><li>libra: LibraDB analytical engine mode</li></ul>
                     */
                    std::string m_analysisMode;
                    bool m_analysisModeHasBeenSet;

                    /**
                     * <p>Analysis engine relationship information</p>
                     */
                    std::vector<AnalysisRelationInfo> m_analysisRelationInfos;
                    bool m_analysisRelationInfosHasBeenSet;

                    /**
                     * <p>Analysis engine instance info</p>
                     */
                    AnalysisInstanceInfo m_analysisInstanceInfo;
                    bool m_analysisInstanceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_INSTANCEINFO_H_
