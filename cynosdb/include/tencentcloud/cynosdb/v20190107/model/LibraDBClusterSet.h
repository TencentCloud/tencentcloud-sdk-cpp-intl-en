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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBCLUSTERSET_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBCLUSTERSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/NetAddr.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Cluster list information
                */
                class LibraDBClusterSet : public AbstractModel
                {
                public:
                    LibraDBClusterSet();
                    ~LibraDBClusterSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID
                     * @return AppId User ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User ID
                     * @param _appId User ID
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
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Cluster name.
                     * @return ClusterName Cluster name.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name.
                     * @param _clusterName Cluster name.
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取cynos version
                     * @return CynosVersion cynos version
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置cynos version
                     * @param _cynosVersion cynos version
                     * 
                     */
                    void SetCynosVersion(const std::string& _cynosVersion);

                    /**
                     * 判断参数 CynosVersion 是否已赋值
                     * @return CynosVersion 是否已赋值
                     * 
                     */
                    bool CynosVersionHasBeenSet() const;

                    /**
                     * 获取Version tag
                     * @return CynosVersionTag Version tag
                     * 
                     */
                    std::string GetCynosVersionTag() const;

                    /**
                     * 设置Version tag
                     * @param _cynosVersionTag Version tag
                     * 
                     */
                    void SetCynosVersionTag(const std::string& _cynosVersionTag);

                    /**
                     * 判断参数 CynosVersionTag 是否已赋值
                     * @return CynosVersionTag 是否已赋值
                     * 
                     */
                    bool CynosVersionTagHasBeenSet() const;

                    /**
                     * 获取Database version.
                     * @return DbVersion Database version.
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置Database version.
                     * @param _dbVersion Database version.
                     * 
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取Instance count
                     * @return InstanceNum Instance count
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置Instance count
                     * @param _instanceNum Instance count
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
                     * 获取Whether to freeze
                     * @return IsFreeze Whether to freeze
                     * 
                     */
                    std::string GetIsFreeze() const;

                    /**
                     * 设置Whether to freeze
                     * @param _isFreeze Whether to freeze
                     * 
                     */
                    void SetIsFreeze(const std::string& _isFreeze);

                    /**
                     * 判断参数 IsFreeze 是否已赋值
                     * @return IsFreeze 是否已赋值
                     * 
                     */
                    bool IsFreezeHasBeenSet() const;

                    /**
                     * 获取Network address.
                     * @return NetAddrs Network address.
                     * 
                     */
                    std::vector<NetAddr> GetNetAddrs() const;

                    /**
                     * 设置Network address.
                     * @param _netAddrs Network address.
                     * 
                     */
                    void SetNetAddrs(const std::vector<NetAddr>& _netAddrs);

                    /**
                     * 判断参数 NetAddrs 是否已赋值
                     * @return NetAddrs 是否已赋值
                     * 
                     */
                    bool NetAddrsHasBeenSet() const;

                    /**
                     * 获取Payment mode
                     * @return PayMode Payment mode
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Payment mode
                     * @param _payMode Payment mode
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Expiration time.

                     * @return PeriodEndTime Expiration time.

                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置Expiration time.

                     * @param _periodEndTime Expiration time.

                     * 
                     */
                    void SetPeriodEndTime(const std::string& _periodEndTime);

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     * 
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectID Project ID
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置Project ID
                     * @param _projectID Project ID
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
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
                     * 获取Auto-renewal flag. 1: Automatic renewal. 0: Non-renewal upon expiration.
                     * @return RenewFlag Auto-renewal flag. 1: Automatic renewal. 0: Non-renewal upon expiration.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. 1: Automatic renewal. 0: Non-renewal upon expiration.
                     * @param _renewFlag Auto-renewal flag. 1: Automatic renewal. 0: Non-renewal upon expiration.
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
                     * 获取Status.
                     * @return Status Status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status.
                     * @param _status Status.
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
                     * 获取Status description.
                     * @return StatusDesc Status description.
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Status description.
                     * @param _statusDesc Status description.
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
                     * 获取Storage size in GB
                     * @return Storage Storage size in GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Storage size in GB
                     * @param _storage Storage size in GB
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Subnet ID.
                     * @return SubnetId Subnet ID.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID.
                     * @param _subnetId Subnet ID.
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
                     * 获取Task list
                     * @return Tasks Task list
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置Task list
                     * @param _tasks Task list
                     * 
                     */
                    void SetTasks(const std::vector<ObjectTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取Account ID.
                     * @return Uin Account ID.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Account ID.
                     * @param _uin Account ID.
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
                     * 获取VIP address
                     * @return Vip VIP address
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置VIP address
                     * @param _vip VIP address
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
                     * 获取Unique ID of VPC
                     * @return VpcId Unique ID of VPC
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unique ID of VPC
                     * @param _vpcId Unique ID of VPC
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
                     * 获取vport port
                     * @return Vport vport port
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置vport port
                     * @param _vport vport port
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
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
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
                     * 获取Primary AZ.
                     * @return MasterZone Primary AZ.
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置Primary AZ.
                     * @param _masterZone Primary AZ.
                     * 
                     */
                    void SetMasterZone(const std::string& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取physical AZ
                     * @return PhysicalZone physical AZ
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置physical AZ
                     * @param _physicalZone physical AZ
                     * 
                     */
                    void SetPhysicalZone(const std::string& _physicalZone);

                    /**
                     * 判断参数 PhysicalZone 是否已赋值
                     * @return PhysicalZone 是否已赋值
                     * 
                     */
                    bool PhysicalZoneHasBeenSet() const;

                    /**
                     * 获取Availability zone
                     * @return Zone Availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
                     * @param _zone Availability zone
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * User ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * cynos version
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * Version tag
                     */
                    std::string m_cynosVersionTag;
                    bool m_cynosVersionTagHasBeenSet;

                    /**
                     * Database version.
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * Instance count
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * Whether to freeze
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * Network address.
                     */
                    std::vector<NetAddr> m_netAddrs;
                    bool m_netAddrsHasBeenSet;

                    /**
                     * Payment mode
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Expiration time.

                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Auto-renewal flag. 1: Automatic renewal. 0: Non-renewal upon expiration.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status description.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Storage size in GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Subnet ID.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Task list
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Account ID.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * VIP address
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Unique ID of VPC
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vport port
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Primary AZ.
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * physical AZ
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * Availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBCLUSTERSET_H_
