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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EMRLISTINSTANCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EMRLISTINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Returned cluster list sample
                */
                class EmrListInstance : public AbstractModel
                {
                public:
                    EmrListInstance();
                    ~EmrListInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Status description
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return StatusDesc Status description
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Status description
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param StatusDesc Status description
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param ClusterName Cluster name
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Cluster region
                     * @return ZoneId Cluster region
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置Cluster region
                     * @param ZoneId Cluster region
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取User APPID
                     * @return AppId User APPID
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置User APPID
                     * @param AppId User APPID
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return AddTime Creation time
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Creation time
                     * @param AddTime Creation time
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Running time
                     * @return RunTime Running time
                     */
                    std::string GetRunTime() const;

                    /**
                     * 设置Running time
                     * @param RunTime Running time
                     */
                    void SetRunTime(const std::string& _runTime);

                    /**
                     * 判断参数 RunTime 是否已赋值
                     * @return RunTime 是否已赋值
                     */
                    bool RunTimeHasBeenSet() const;

                    /**
                     * 获取Cluster IP
                     * @return MasterIp Cluster IP
                     */
                    std::string GetMasterIp() const;

                    /**
                     * 设置Cluster IP
                     * @param MasterIp Cluster IP
                     */
                    void SetMasterIp(const std::string& _masterIp);

                    /**
                     * 判断参数 MasterIp 是否已赋值
                     * @return MasterIp 是否已赋值
                     */
                    bool MasterIpHasBeenSet() const;

                    /**
                     * 获取Cluster version
                     * @return EmrVersion Cluster version
                     */
                    std::string GetEmrVersion() const;

                    /**
                     * 设置Cluster version
                     * @param EmrVersion Cluster version
                     */
                    void SetEmrVersion(const std::string& _emrVersion);

                    /**
                     * 判断参数 EmrVersion 是否已赋值
                     * @return EmrVersion 是否已赋值
                     */
                    bool EmrVersionHasBeenSet() const;

                    /**
                     * 获取Cluster billing mode
                     * @return ChargeType Cluster billing mode
                     */
                    uint64_t GetChargeType() const;

                    /**
                     * 设置Cluster billing mode
                     * @param ChargeType Cluster billing mode
                     */
                    void SetChargeType(const uint64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取EMR ID
                     * @return Id EMR ID
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置EMR ID
                     * @param Id EMR ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Product ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ProductId Product ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetProductId() const;

                    /**
                     * 设置Product ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param ProductId Product ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetProductId(const uint64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Project ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ProjectId Project ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param ProjectId Project ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RegionId Region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置Region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param RegionId Region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SubnetId Subnet ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetSubnetId() const;

                    /**
                     * 设置Subnet ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param SubnetId Subnet ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetSubnetId(const uint64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取VPC ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return VpcId VPC ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetVpcId() const;

                    /**
                     * 设置VPC ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param VpcId VPC ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetVpcId(const uint64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Zone Region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Zone Region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Status code
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Status Status code
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status code
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Status Status code
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance tag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Tags Instance tag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Instance tag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Tags Instance tag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Alarm information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AlarmInfo Alarm information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetAlarmInfo() const;

                    /**
                     * 设置Alarm information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param AlarmInfo Alarm information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetAlarmInfo(const std::string& _alarmInfo);

                    /**
                     * 判断参数 AlarmInfo 是否已赋值
                     * @return AlarmInfo 是否已赋值
                     */
                    bool AlarmInfoHasBeenSet() const;

                    /**
                     * 获取Whether it is a Woodpecker cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IsWoodpeckerCluster Whether it is a Woodpecker cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetIsWoodpeckerCluster() const;

                    /**
                     * 设置Whether it is a Woodpecker cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param IsWoodpeckerCluster Whether it is a Woodpecker cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetIsWoodpeckerCluster(const uint64_t& _isWoodpeckerCluster);

                    /**
                     * 判断参数 IsWoodpeckerCluster 是否已赋值
                     * @return IsWoodpeckerCluster 是否已赋值
                     */
                    bool IsWoodpeckerClusterHasBeenSet() const;

                    /**
                     * 获取VPC name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return VpcName VPC name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param VpcName VPC name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取Subnet name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SubnetName Subnet name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置Subnet name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param SubnetName Subnet name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取VPC ID string
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return UniqVpcId VPC ID string
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC ID string
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param UniqVpcId VPC ID string
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID string
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return UniqSubnetId Subnet ID string
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Subnet ID string
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param UniqSubnetId Subnet ID string
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Cluster type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ClusterClass Cluster type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetClusterClass() const;

                    /**
                     * 设置Cluster type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param ClusterClass Cluster type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetClusterClass(const std::string& _clusterClass);

                    /**
                     * 判断参数 ClusterClass 是否已赋值
                     * @return ClusterClass 是否已赋值
                     */
                    bool ClusterClassHasBeenSet() const;

                    /**
                     * 获取Whether it is a multi-AZ cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IsMultiZoneCluster Whether it is a multi-AZ cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool GetIsMultiZoneCluster() const;

                    /**
                     * 设置Whether it is a multi-AZ cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param IsMultiZoneCluster Whether it is a multi-AZ cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetIsMultiZoneCluster(const bool& _isMultiZoneCluster);

                    /**
                     * 判断参数 IsMultiZoneCluster 是否已赋值
                     * @return IsMultiZoneCluster 是否已赋值
                     */
                    bool IsMultiZoneClusterHasBeenSet() const;

                    /**
                     * 获取Whether it is a manually deployed cluster
Note: This field may return null, indicating that no valid value can be obtained. 
                     * @return IsHandsCluster Whether it is a manually deployed cluster
Note: This field may return null, indicating that no valid value can be obtained. 
                     */
                    bool GetIsHandsCluster() const;

                    /**
                     * 设置Whether it is a manually deployed cluster
Note: This field may return null, indicating that no valid value can be obtained. 
                     * @param IsHandsCluster Whether it is a manually deployed cluster
Note: This field may return null, indicating that no valid value can be obtained. 
                     */
                    void SetIsHandsCluster(const bool& _isHandsCluster);

                    /**
                     * 判断参数 IsHandsCluster 是否已赋值
                     * @return IsHandsCluster 是否已赋值
                     */
                    bool IsHandsClusterHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Status description
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Cluster region
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * User APPID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Running time
                     */
                    std::string m_runTime;
                    bool m_runTimeHasBeenSet;

                    /**
                     * Cluster IP
                     */
                    std::string m_masterIp;
                    bool m_masterIpHasBeenSet;

                    /**
                     * Cluster version
                     */
                    std::string m_emrVersion;
                    bool m_emrVersionHasBeenSet;

                    /**
                     * Cluster billing mode
                     */
                    uint64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * EMR ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Product ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Project ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Subnet ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * VPC ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Region
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Status code
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance tag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Alarm information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_alarmInfo;
                    bool m_alarmInfoHasBeenSet;

                    /**
                     * Whether it is a Woodpecker cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_isWoodpeckerCluster;
                    bool m_isWoodpeckerClusterHasBeenSet;

                    /**
                     * VPC name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Subnet name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * VPC ID string
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Subnet ID string
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Cluster type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterClass;
                    bool m_clusterClassHasBeenSet;

                    /**
                     * Whether it is a multi-AZ cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool m_isMultiZoneCluster;
                    bool m_isMultiZoneClusterHasBeenSet;

                    /**
                     * Whether it is a manually deployed cluster
Note: This field may return null, indicating that no valid value can be obtained. 
                     */
                    bool m_isHandsCluster;
                    bool m_isHandsClusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EMRLISTINSTANCE_H_
