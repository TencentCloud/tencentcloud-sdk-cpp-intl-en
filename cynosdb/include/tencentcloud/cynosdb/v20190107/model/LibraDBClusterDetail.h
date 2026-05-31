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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBCLUSTERDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBCLUSTERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/RoAddr.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceSet.h>
#include <tencentcloud/cynosdb/v20190107/model/UpgradeAnalysisInstanceVersionInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * libra cluster detail
                */
                class LibraDBClusterDetail : public AbstractModel
                {
                public:
                    LibraDBClusterDetail();
                    ~LibraDBClusterDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
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
                     * 获取<p>Cluster name.</p>
                     * @return ClusterName <p>Cluster name.</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name.</p>
                     * @param _clusterName <p>Cluster name.</p>
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
                     * 获取<p>Region</p>
                     * @return Region <p>Region</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region</p>
                     * @param _region <p>Region</p>
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
                     * 获取<p>Status</p>
                     * @return Status <p>Status</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Status</p>
                     * @param _status <p>Status</p>
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
                     * 获取<p>Status description</p>
                     * @return StatusDesc <p>Status description</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>Status description</p>
                     * @param _statusDesc <p>Status description</p>
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
                     * 获取<p>Storage size</p>
                     * @return Storage <p>Storage size</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>Storage size</p>
                     * @param _storage <p>Storage size</p>
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
                     * 获取<p>VPC name</p>
                     * @return VpcName <p>VPC name</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>VPC name</p>
                     * @param _vpcName <p>VPC name</p>
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取<p>vpc Unique id</p>
                     * @return VpcId <p>vpc Unique id</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>vpc Unique id</p>
                     * @param _vpcId <p>vpc Unique id</p>
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
                     * 获取<p>Subnet name.</p>
                     * @return SubnetName <p>Subnet name.</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>Subnet name.</p>
                     * @param _subnetName <p>Subnet name.</p>
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

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
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
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
                     * 获取<p>Database version</p>
                     * @return DbVersion <p>Database version</p>
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置<p>Database version</p>
                     * @param _dbVersion <p>Database version</p>
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
                     * 获取<p>Used capacity</p>
                     * @return UsedStorage <p>Used capacity</p>
                     * 
                     */
                    int64_t GetUsedStorage() const;

                    /**
                     * 设置<p>Used capacity</p>
                     * @param _usedStorage <p>Used capacity</p>
                     * 
                     */
                    void SetUsedStorage(const int64_t& _usedStorage);

                    /**
                     * 判断参数 UsedStorage 是否已赋值
                     * @return UsedStorage 是否已赋值
                     * 
                     */
                    bool UsedStorageHasBeenSet() const;

                    /**
                     * 获取<p>vip address</p>
                     * @return Vip <p>vip address</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>vip address</p>
                     * @param _vip <p>vip address</p>
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
                     * 获取<p>vport</p>
                     * @return Vport <p>vport</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>vport</p>
                     * @param _vport <p>vport</p>
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
                     * 获取<p>vip address and vport of the cluster read-only instance</p>
                     * @return RoAddr <p>vip address and vport of the cluster read-only instance</p>
                     * 
                     */
                    std::vector<RoAddr> GetRoAddr() const;

                    /**
                     * 设置<p>vip address and vport of the cluster read-only instance</p>
                     * @param _roAddr <p>vip address and vport of the cluster read-only instance</p>
                     * 
                     */
                    void SetRoAddr(const std::vector<RoAddr>& _roAddr);

                    /**
                     * 判断参数 RoAddr 是否已赋值
                     * @return RoAddr 是否已赋值
                     * 
                     */
                    bool RoAddrHasBeenSet() const;

                    /**
                     * 获取<p>cynos version</p>
                     * @return CynosVersion <p>cynos version</p>
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置<p>cynos version</p>
                     * @param _cynosVersion <p>cynos version</p>
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
                     * 获取<p>Freeze or not</p>
                     * @return IsFreeze <p>Freeze or not</p>
                     * 
                     */
                    std::string GetIsFreeze() const;

                    /**
                     * 设置<p>Freeze or not</p>
                     * @param _isFreeze <p>Freeze or not</p>
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
                     * 获取<p>Task List</p>
                     * @return Tasks <p>Task List</p>
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置<p>Task List</p>
                     * @param _tasks <p>Task List</p>
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
                     * 获取<p>Primary AZ</p>
                     * @return MasterZone <p>Primary AZ</p>
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置<p>Primary AZ</p>
                     * @param _masterZone <p>Primary AZ</p>
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
                     * 获取<p>Instance collection</p>
                     * @return InstanceSet <p>Instance collection</p>
                     * 
                     */
                    std::vector<InstanceSet> GetInstanceSet() const;

                    /**
                     * 设置<p>Instance collection</p>
                     * @param _instanceSet <p>Instance collection</p>
                     * 
                     */
                    void SetInstanceSet(const std::vector<InstanceSet>& _instanceSet);

                    /**
                     * 判断参数 InstanceSet 是否已赋值
                     * @return InstanceSet 是否已赋值
                     * 
                     */
                    bool InstanceSetHasBeenSet() const;

                    /**
                     * 获取<p>Payment mode</p>
                     * @return PayMode <p>Payment mode</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>Payment mode</p>
                     * @param _payMode <p>Payment mode</p>
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
                     * 获取<p>Expiry time</p>
                     * @return PeriodEndTime <p>Expiry time</p>
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置<p>Expiry time</p>
                     * @param _periodEndTime <p>Expiry time</p>
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
                     * 获取<p>Project ID.</p>
                     * @return ProjectID <p>Project ID.</p>
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置<p>Project ID.</p>
                     * @param _projectID <p>Project ID.</p>
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
                     * 获取<p>Auto-renewal flag</p>
                     * @return RenewFlag <p>Auto-renewal flag</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>Auto-renewal flag</p>
                     * @param _renewFlag <p>Auto-renewal flag</p>
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
                     * 获取<p>Version tag</p>
                     * @return CynosVersionTag <p>Version tag</p>
                     * 
                     */
                    std::string GetCynosVersionTag() const;

                    /**
                     * 设置<p>Version tag</p>
                     * @param _cynosVersionTag <p>Version tag</p>
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
                     * 获取<p>Additions are not supported when ro is yes. Additions are supported when ro is no/null/&quot;&quot;.</p>
                     * @return NoSupportAddRo <p>Additions are not supported when ro is yes. Additions are supported when ro is no/null/&quot;&quot;.</p>
                     * 
                     */
                    std::string GetNoSupportAddRo() const;

                    /**
                     * 设置<p>Additions are not supported when ro is yes. Additions are supported when ro is no/null/&quot;&quot;.</p>
                     * @param _noSupportAddRo <p>Additions are not supported when ro is yes. Additions are supported when ro is no/null/&quot;&quot;.</p>
                     * 
                     */
                    void SetNoSupportAddRo(const std::string& _noSupportAddRo);

                    /**
                     * 判断参数 NoSupportAddRo 是否已赋值
                     * @return NoSupportAddRo 是否已赋值
                     * 
                     */
                    bool NoSupportAddRoHasBeenSet() const;

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
                     * 获取<p>Physical AZ</p>
                     * @return PhysicalZone <p>Physical AZ</p>
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置<p>Physical AZ</p>
                     * @param _physicalZone <p>Physical AZ</p>
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
                     * 获取<p>Grayscale information for version upgrade</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AnalysisUpgradeVersionInfo <p>Grayscale information for version upgrade</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    UpgradeAnalysisInstanceVersionInfo GetAnalysisUpgradeVersionInfo() const;

                    /**
                     * 设置<p>Grayscale information for version upgrade</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _analysisUpgradeVersionInfo <p>Grayscale information for version upgrade</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAnalysisUpgradeVersionInfo(const UpgradeAnalysisInstanceVersionInfo& _analysisUpgradeVersionInfo);

                    /**
                     * 判断参数 AnalysisUpgradeVersionInfo 是否已赋值
                     * @return AnalysisUpgradeVersionInfo 是否已赋值
                     * 
                     */
                    bool AnalysisUpgradeVersionInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Region</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Status</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Status description</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>Storage size</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>VPC name</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>vpc Unique id</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet name.</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>Subnet ID.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Database version</p>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * <p>Used capacity</p>
                     */
                    int64_t m_usedStorage;
                    bool m_usedStorageHasBeenSet;

                    /**
                     * <p>vip address</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>vport</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>vip address and vport of the cluster read-only instance</p>
                     */
                    std::vector<RoAddr> m_roAddr;
                    bool m_roAddrHasBeenSet;

                    /**
                     * <p>cynos version</p>
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * <p>Freeze or not</p>
                     */
                    std::string m_isFreeze;
                    bool m_isFreezeHasBeenSet;

                    /**
                     * <p>Task List</p>
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>Primary AZ</p>
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * <p>Instance collection</p>
                     */
                    std::vector<InstanceSet> m_instanceSet;
                    bool m_instanceSetHasBeenSet;

                    /**
                     * <p>Payment mode</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Expiry time</p>
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * <p>Project ID.</p>
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * <p>Auto-renewal flag</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>Version tag</p>
                     */
                    std::string m_cynosVersionTag;
                    bool m_cynosVersionTagHasBeenSet;

                    /**
                     * <p>Additions are not supported when ro is yes. Additions are supported when ro is no/null/&quot;&quot;.</p>
                     */
                    std::string m_noSupportAddRo;
                    bool m_noSupportAddRoHasBeenSet;

                    /**
                     * <p>AZ.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Physical AZ</p>
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * <p>Grayscale information for version upgrade</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    UpgradeAnalysisInstanceVersionInfo m_analysisUpgradeVersionInfo;
                    bool m_analysisUpgradeVersionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBCLUSTERDETAIL_H_
