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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATECLONEINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATECLONEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * CreateCloneInstance request structure.
                */
                class CreateCloneInstanceRequest : public AbstractModel
                {
                public:
                    CreateCloneInstanceRequest();
                    ~CreateCloneInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Creating an Instance Region</p>
                     * @return Zone <p>Creating an Instance Region</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Creating an Instance Region</p>
                     * @param _zone <p>Creating an Instance Region</p>
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
                     * 获取<p>Purchase specification</p>
                     * @return SpecCode <p>Purchase specification</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>Purchase specification</p>
                     * @param _specCode <p>Purchase specification</p>
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

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
                     * 获取<p>Source instance id</p>
                     * @return InstanceId <p>Source instance id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Source instance id</p>
                     * @param _instanceId <p>Source instance id</p>
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
                     * 获取<p>Instance name. The required length is 1-60. It can contain Chinese characters, English case, digits, hyphens (-), and underscores (_).</p>
                     * @return InstanceName <p>Instance name. The required length is 1-60. It can contain Chinese characters, English case, digits, hyphens (-), and underscores (_).</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name. The required length is 1-60. It can contain Chinese characters, English case, digits, hyphens (-), and underscores (_).</p>
                     * @param _instanceName <p>Instance name. The required length is 1-60. It can contain Chinese characters, English case, digits, hyphens (-), and underscores (_).</p>
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
                     * 获取<p>Tag key-value pair array</p>
                     * @return ResourceTags <p>Tag key-value pair array</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>Tag key-value pair array</p>
                     * @param _resourceTags <p>Tag key-value pair array</p>
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
                     * 获取<p>Backup and rollback name</p>
                     * @return BackupName <p>Backup and rollback name</p>
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置<p>Backup and rollback name</p>
                     * @param _backupName <p>Backup and rollback name</p>
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取<p>CPU cores of the storage node</p>
                     * @return StorageNodeCpu <p>CPU cores of the storage node</p>
                     * 
                     */
                    int64_t GetStorageNodeCpu() const;

                    /**
                     * 设置<p>CPU cores of the storage node</p>
                     * @param _storageNodeCpu <p>CPU cores of the storage node</p>
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
                     * @return StorageNodeMem <p>Storage node memory size</p>
                     * 
                     */
                    int64_t GetStorageNodeMem() const;

                    /**
                     * 设置<p>Storage node memory size</p>
                     * @param _storageNodeMem <p>Storage node memory size</p>
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
                     * 获取<p>Create version</p>
                     * @return CreateVersion <p>Create version</p>
                     * 
                     */
                    std::string GetCreateVersion() const;

                    /**
                     * 设置<p>Create version</p>
                     * @param _createVersion <p>Create version</p>
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
                     * 获取<p>Create port number</p>
                     * @return Vport <p>Create port number</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>Create port number</p>
                     * @param _vport <p>Create port number</p>
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
                     * 获取<p>Recovery time point</p>
                     * @return RecoverTime <p>Recovery time point</p>
                     * 
                     */
                    std::string GetRecoverTime() const;

                    /**
                     * 设置<p>Recovery time point</p>
                     * @param _recoverTime <p>Recovery time point</p>
                     * 
                     */
                    void SetRecoverTime(const std::string& _recoverTime);

                    /**
                     * 判断参数 RecoverTime 是否已赋值
                     * @return RecoverTime 是否已赋值
                     * 
                     */
                    bool RecoverTimeHasBeenSet() const;

                    /**
                     * 获取<p>Instance Architecture Type, separate: decoupled architecture; hybrid: peer-to-peer architecture</p>
                     * @return InstanceType <p>Instance Architecture Type, separate: decoupled architecture; hybrid: peer-to-peer architecture</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Instance Architecture Type, separate: decoupled architecture; hybrid: peer-to-peer architecture</p>
                     * @param _instanceType <p>Instance Architecture Type, separate: decoupled architecture; hybrid: peer-to-peer architecture</p>
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
                     * @return StorageType <p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
                     * @param _storageType <p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
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
                     * 获取<p>Multi-AZ list, Zones[0] refers to the primary AZ</p>
                     * @return Zones <p>Multi-AZ list, Zones[0] refers to the primary AZ</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>Multi-AZ list, Zones[0] refers to the primary AZ</p>
                     * @param _zones <p>Multi-AZ list, Zones[0] refers to the primary AZ</p>
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
                     * 获取<p>Instance mode, normal: standard type; enhanced: enhanced</p>
                     * @return InstanceMode <p>Instance mode, normal: standard type; enhanced: enhanced</p>
                     * 
                     */
                    std::string GetInstanceMode() const;

                    /**
                     * 设置<p>Instance mode, normal: standard type; enhanced: enhanced</p>
                     * @param _instanceMode <p>Instance mode, normal: standard type; enhanced: enhanced</p>
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
                     * 获取<p>Security group id list</p>
                     * @return SecurityGroupIds <p>Security group id list</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>Security group id list</p>
                     * @param _securityGroupIds <p>Security group id list</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * <p>Creating an Instance Region</p>
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
                     * <p>Purchase specification</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

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
                     * <p>Source instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance name. The required length is 1-60. It can contain Chinese characters, English case, digits, hyphens (-), and underscores (_).</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Tag key-value pair array</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Backup and rollback name</p>
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

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
                     * <p>Create version</p>
                     */
                    std::string m_createVersion;
                    bool m_createVersionHasBeenSet;

                    /**
                     * <p>Create port number</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>Recovery time point</p>
                     */
                    std::string m_recoverTime;
                    bool m_recoverTimeHasBeenSet;

                    /**
                     * <p>Instance Architecture Type, separate: decoupled architecture; hybrid: peer-to-peer architecture</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>Multi-AZ list, Zones[0] refers to the primary AZ</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>Number of replicas</p>
                     */
                    int64_t m_fullReplications;
                    bool m_fullReplicationsHasBeenSet;

                    /**
                     * <p>Instance mode, normal: standard type; enhanced: enhanced</p>
                     */
                    std::string m_instanceMode;
                    bool m_instanceModeHasBeenSet;

                    /**
                     * <p>Security group id list</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATECLONEINSTANCEREQUEST_H_
