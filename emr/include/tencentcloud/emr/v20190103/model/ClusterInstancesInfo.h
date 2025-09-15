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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINSTANCESINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINSTANCESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/EmrProductConfigOutter.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/ClusterExternalServiceInfo.h>
#include <tencentcloud/emr/v20190103/model/TopologyInfo.h>
#include <tencentcloud/emr/v20190103/model/EmrProductConfigDetail.h>
#include <tencentcloud/emr/v20190103/model/ClusterRelationMeta.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Cluster instance information
                */
                class ClusterInstancesInfo : public AbstractModel
                {
                public:
                    ClusterInstancesInfo();
                    ~ClusterInstancesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID.
                     * @return Id ID.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置ID.
                     * @param _id ID.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
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
                     * 获取Title
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Ftitle Title
Note: this field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetFtitle() const;

                    /**
                     * 设置Title
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _ftitle Title
Note: this field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetFtitle(const std::string& _ftitle);

                    /**
                     * 判断参数 Ftitle 是否已赋值
                     * @return Ftitle 是否已赋值
                     * @deprecated
                     */
                    bool FtitleHasBeenSet() const;

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
                     * 获取Region ID.
                     * @return RegionId Region ID.
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID.
                     * @param _regionId Region ID.
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region ID.
                     * @return ZoneId Region ID.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Region ID.
                     * @param _zoneId Region ID.
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取User AppID.
                     * @return AppId User AppID.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User AppID.
                     * @param _appId User AppID.
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
                     * 获取User UIN.
                     * @return Uin User UIN.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN.
                     * @param _uin User UIN.
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
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Cluster VPCID.
                     * @return VpcId Cluster VPCID.
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置Cluster VPCID.
                     * @param _vpcId Cluster VPCID.
                     * 
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID.
                     * @return SubnetId Subnet ID.
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置Subnet ID.
                     * @param _subnetId Subnet ID.
                     * 
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Instance status code. Valid range:
<li>2: the cluster is running.</li>
<li>3: the cluster is being created.</li>
<li>4: the cluster is being scaled out.</li>
<li>5: Router nodes are being added to the cluster.</li>
<li>6: components are being installed in the cluster.</li>
<li>7: commands are being executed in the cluster.</li>
<li>8: the service is being restarted.</li>
<li>9: maintenance is in progress.</li>
<li>10: the service is being suspended.</li>
<li>11: the cluster is exiting maintenance.</li>
<li>12: the cluster is exiting suspension.</li>
<li>13: the configuration is being distributed.</li>
<li>14: the cluster is being terminated.</li>
<li>15: the Core node is being destroyed.</li>
<li>16: the Task node is being destroyed.</li>
<li>17: the Router node is being destroyed.</li>
<li>18: the web proxy password is being changed.</li>
<li>19: the cluster is being isolated.</li>
<li>20: the cluster is undergoing a reversal transaction.</li>
<li>21: the cluster is being recycled.</li>
<li>22: the instance is waiting for resizing.</li>
<li>23: the cluster has been isolated.</li>
<li>24: the number of nodes is being reduced.</li>
<li>33: the cluster is waiting for a refund.</li>
<li>34: the cluster has received a refund.</li>
<li>301: creation failed.</li>
<li>302: scale-out failed.</li>
                     * @return Status Instance status code. Valid range:
<li>2: the cluster is running.</li>
<li>3: the cluster is being created.</li>
<li>4: the cluster is being scaled out.</li>
<li>5: Router nodes are being added to the cluster.</li>
<li>6: components are being installed in the cluster.</li>
<li>7: commands are being executed in the cluster.</li>
<li>8: the service is being restarted.</li>
<li>9: maintenance is in progress.</li>
<li>10: the service is being suspended.</li>
<li>11: the cluster is exiting maintenance.</li>
<li>12: the cluster is exiting suspension.</li>
<li>13: the configuration is being distributed.</li>
<li>14: the cluster is being terminated.</li>
<li>15: the Core node is being destroyed.</li>
<li>16: the Task node is being destroyed.</li>
<li>17: the Router node is being destroyed.</li>
<li>18: the web proxy password is being changed.</li>
<li>19: the cluster is being isolated.</li>
<li>20: the cluster is undergoing a reversal transaction.</li>
<li>21: the cluster is being recycled.</li>
<li>22: the instance is waiting for resizing.</li>
<li>23: the cluster has been isolated.</li>
<li>24: the number of nodes is being reduced.</li>
<li>33: the cluster is waiting for a refund.</li>
<li>34: the cluster has received a refund.</li>
<li>301: creation failed.</li>
<li>302: scale-out failed.</li>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status code. Valid range:
<li>2: the cluster is running.</li>
<li>3: the cluster is being created.</li>
<li>4: the cluster is being scaled out.</li>
<li>5: Router nodes are being added to the cluster.</li>
<li>6: components are being installed in the cluster.</li>
<li>7: commands are being executed in the cluster.</li>
<li>8: the service is being restarted.</li>
<li>9: maintenance is in progress.</li>
<li>10: the service is being suspended.</li>
<li>11: the cluster is exiting maintenance.</li>
<li>12: the cluster is exiting suspension.</li>
<li>13: the configuration is being distributed.</li>
<li>14: the cluster is being terminated.</li>
<li>15: the Core node is being destroyed.</li>
<li>16: the Task node is being destroyed.</li>
<li>17: the Router node is being destroyed.</li>
<li>18: the web proxy password is being changed.</li>
<li>19: the cluster is being isolated.</li>
<li>20: the cluster is undergoing a reversal transaction.</li>
<li>21: the cluster is being recycled.</li>
<li>22: the instance is waiting for resizing.</li>
<li>23: the cluster has been isolated.</li>
<li>24: the number of nodes is being reduced.</li>
<li>33: the cluster is waiting for a refund.</li>
<li>34: the cluster has received a refund.</li>
<li>301: creation failed.</li>
<li>302: scale-out failed.</li>
                     * @param _status Instance status code. Valid range:
<li>2: the cluster is running.</li>
<li>3: the cluster is being created.</li>
<li>4: the cluster is being scaled out.</li>
<li>5: Router nodes are being added to the cluster.</li>
<li>6: components are being installed in the cluster.</li>
<li>7: commands are being executed in the cluster.</li>
<li>8: the service is being restarted.</li>
<li>9: maintenance is in progress.</li>
<li>10: the service is being suspended.</li>
<li>11: the cluster is exiting maintenance.</li>
<li>12: the cluster is exiting suspension.</li>
<li>13: the configuration is being distributed.</li>
<li>14: the cluster is being terminated.</li>
<li>15: the Core node is being destroyed.</li>
<li>16: the Task node is being destroyed.</li>
<li>17: the Router node is being destroyed.</li>
<li>18: the web proxy password is being changed.</li>
<li>19: the cluster is being isolated.</li>
<li>20: the cluster is undergoing a reversal transaction.</li>
<li>21: the cluster is being recycled.</li>
<li>22: the instance is waiting for resizing.</li>
<li>23: the cluster has been isolated.</li>
<li>24: the number of nodes is being reduced.</li>
<li>33: the cluster is waiting for a refund.</li>
<li>34: the cluster has received a refund.</li>
<li>301: creation failed.</li>
<li>302: scale-out failed.</li>
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
                     * 获取Adding time.
                     * @return AddTime Adding time.
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Adding time.
                     * @param _addTime Adding time.
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Runtime.
                     * @return RunTime Runtime.
                     * 
                     */
                    std::string GetRunTime() const;

                    /**
                     * 设置Runtime.
                     * @param _runTime Runtime.
                     * 
                     */
                    void SetRunTime(const std::string& _runTime);

                    /**
                     * 判断参数 RunTime 是否已赋值
                     * @return RunTime 是否已赋值
                     * 
                     */
                    bool RunTimeHasBeenSet() const;

                    /**
                     * 获取Cluster product configuration information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Config Cluster product configuration information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    EmrProductConfigOutter GetConfig() const;

                    /**
                     * 设置Cluster product configuration information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _config Cluster product configuration information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetConfig(const EmrProductConfigOutter& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * @deprecated
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Public network IP address of the primary node.
                     * @return MasterIp Public network IP address of the primary node.
                     * 
                     */
                    std::string GetMasterIp() const;

                    /**
                     * 设置Public network IP address of the primary node.
                     * @param _masterIp Public network IP address of the primary node.
                     * 
                     */
                    void SetMasterIp(const std::string& _masterIp);

                    /**
                     * 判断参数 MasterIp 是否已赋值
                     * @return MasterIp 是否已赋值
                     * 
                     */
                    bool MasterIpHasBeenSet() const;

                    /**
                     * 获取EMR version.
                     * @return EmrVersion EMR version.
                     * 
                     */
                    std::string GetEmrVersion() const;

                    /**
                     * 设置EMR version.
                     * @param _emrVersion EMR version.
                     * 
                     */
                    void SetEmrVersion(const std::string& _emrVersion);

                    /**
                     * 判断参数 EmrVersion 是否已赋值
                     * @return EmrVersion 是否已赋值
                     * 
                     */
                    bool EmrVersionHasBeenSet() const;

                    /**
                     * 获取Charge type.
                     * @return ChargeType Charge type.
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置Charge type.
                     * @param _chargeType Charge type.
                     * 
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Transaction version.
                     * @return TradeVersion Transaction version.
                     * 
                     */
                    int64_t GetTradeVersion() const;

                    /**
                     * 设置Transaction version.
                     * @param _tradeVersion Transaction version.
                     * 
                     */
                    void SetTradeVersion(const int64_t& _tradeVersion);

                    /**
                     * 判断参数 TradeVersion 是否已赋值
                     * @return TradeVersion 是否已赋值
                     * 
                     */
                    bool TradeVersionHasBeenSet() const;

                    /**
                     * 获取Resource order ID.
                     * @return ResourceOrderId Resource order ID.
                     * 
                     */
                    int64_t GetResourceOrderId() const;

                    /**
                     * 设置Resource order ID.
                     * @param _resourceOrderId Resource order ID.
                     * 
                     */
                    void SetResourceOrderId(const int64_t& _resourceOrderId);

                    /**
                     * 判断参数 ResourceOrderId 是否已赋值
                     * @return ResourceOrderId 是否已赋值
                     * 
                     */
                    bool ResourceOrderIdHasBeenSet() const;

                    /**
                     * 获取Whether it is a billing cluster.
                     * @return IsTradeCluster Whether it is a billing cluster.
                     * 
                     */
                    int64_t GetIsTradeCluster() const;

                    /**
                     * 设置Whether it is a billing cluster.
                     * @param _isTradeCluster Whether it is a billing cluster.
                     * 
                     */
                    void SetIsTradeCluster(const int64_t& _isTradeCluster);

                    /**
                     * 判断参数 IsTradeCluster 是否已赋值
                     * @return IsTradeCluster 是否已赋值
                     * 
                     */
                    bool IsTradeClusterHasBeenSet() const;

                    /**
                     * 获取Alarm information of cluster error status.
                     * @return AlarmInfo Alarm information of cluster error status.
                     * 
                     */
                    std::string GetAlarmInfo() const;

                    /**
                     * 设置Alarm information of cluster error status.
                     * @param _alarmInfo Alarm information of cluster error status.
                     * 
                     */
                    void SetAlarmInfo(const std::string& _alarmInfo);

                    /**
                     * 判断参数 AlarmInfo 是否已赋值
                     * @return AlarmInfo 是否已赋值
                     * 
                     */
                    bool AlarmInfoHasBeenSet() const;

                    /**
                     * 获取Whether to adopt new architecture.
                     * @return IsWoodpeckerCluster Whether to adopt new architecture.
                     * 
                     */
                    int64_t GetIsWoodpeckerCluster() const;

                    /**
                     * 设置Whether to adopt new architecture.
                     * @param _isWoodpeckerCluster Whether to adopt new architecture.
                     * 
                     */
                    void SetIsWoodpeckerCluster(const int64_t& _isWoodpeckerCluster);

                    /**
                     * 判断参数 IsWoodpeckerCluster 是否已赋值
                     * @return IsWoodpeckerCluster 是否已赋值
                     * 
                     */
                    bool IsWoodpeckerClusterHasBeenSet() const;

                    /**
                     * 获取Metadatabase information.
                     * @return MetaDb Metadatabase information.
                     * 
                     */
                    std::string GetMetaDb() const;

                    /**
                     * 设置Metadatabase information.
                     * @param _metaDb Metadatabase information.
                     * 
                     */
                    void SetMetaDb(const std::string& _metaDb);

                    /**
                     * 判断参数 MetaDb 是否已赋值
                     * @return MetaDb 是否已赋值
                     * 
                     */
                    bool MetaDbHasBeenSet() const;

                    /**
                     * 获取Tag information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Hive metadata information.
                     * @return HiveMetaDb Hive metadata information.
                     * 
                     */
                    std::string GetHiveMetaDb() const;

                    /**
                     * 设置Hive metadata information.
                     * @param _hiveMetaDb Hive metadata information.
                     * 
                     */
                    void SetHiveMetaDb(const std::string& _hiveMetaDb);

                    /**
                     * 判断参数 HiveMetaDb 是否已赋值
                     * @return HiveMetaDb 是否已赋值
                     * 
                     */
                    bool HiveMetaDbHasBeenSet() const;

                    /**
                     * 获取Cluster type: EMR,CLICKHOUSE,DRUID.
                     * @return ServiceClass Cluster type: EMR,CLICKHOUSE,DRUID.
                     * 
                     */
                    std::string GetServiceClass() const;

                    /**
                     * 设置Cluster type: EMR,CLICKHOUSE,DRUID.
                     * @param _serviceClass Cluster type: EMR,CLICKHOUSE,DRUID.
                     * 
                     */
                    void SetServiceClass(const std::string& _serviceClass);

                    /**
                     * 判断参数 ServiceClass 是否已赋值
                     * @return ServiceClass 是否已赋值
                     * 
                     */
                    bool ServiceClassHasBeenSet() const;

                    /**
                     * 获取Alias serialization of all nodes in the cluster.
                     * @return AliasInfo Alias serialization of all nodes in the cluster.
                     * 
                     */
                    std::string GetAliasInfo() const;

                    /**
                     * 设置Alias serialization of all nodes in the cluster.
                     * @param _aliasInfo Alias serialization of all nodes in the cluster.
                     * 
                     */
                    void SetAliasInfo(const std::string& _aliasInfo);

                    /**
                     * 判断参数 AliasInfo 是否已赋值
                     * @return AliasInfo 是否已赋值
                     * 
                     */
                    bool AliasInfoHasBeenSet() const;

                    /**
                     * 获取Cluster version ID.
                     * @return ProductId Cluster version ID.
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置Cluster version ID.
                     * @param _productId Cluster version ID.
                     * 
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Region ID.
                     * @return Zone Region ID.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Region ID.
                     * @param _zone Region ID.
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
                     * 获取Scenario name.
                     * @return SceneName Scenario name.
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置Scenario name.
                     * @param _sceneName Scenario name.
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取Scenario-based cluster type.
                     * @return SceneServiceClass Scenario-based cluster type.
                     * 
                     */
                    std::string GetSceneServiceClass() const;

                    /**
                     * 设置Scenario-based cluster type.
                     * @param _sceneServiceClass Scenario-based cluster type.
                     * 
                     */
                    void SetSceneServiceClass(const std::string& _sceneServiceClass);

                    /**
                     * 判断参数 SceneServiceClass 是否已赋值
                     * @return SceneServiceClass 是否已赋值
                     * 
                     */
                    bool SceneServiceClassHasBeenSet() const;

                    /**
                     * 获取Scenario-based EMR version.
                     * @return SceneEmrVersion Scenario-based EMR version.
                     * 
                     */
                    std::string GetSceneEmrVersion() const;

                    /**
                     * 设置Scenario-based EMR version.
                     * @param _sceneEmrVersion Scenario-based EMR version.
                     * 
                     */
                    void SetSceneEmrVersion(const std::string& _sceneEmrVersion);

                    /**
                     * 判断参数 SceneEmrVersion 是否已赋值
                     * @return SceneEmrVersion 是否已赋值
                     * 
                     */
                    bool SceneEmrVersionHasBeenSet() const;

                    /**
                     * 获取Scenario-based cluster type.
                     * @return DisplayName Scenario-based cluster type.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Scenario-based cluster type.
                     * @param _displayName Scenario-based cluster type.
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取vpc name
                     * @return VpcName vpc name
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc name
                     * @param _vpcName vpc name
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
                     * 获取subnet name
                     * @return SubnetName subnet name
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置subnet name
                     * @param _subnetName subnet name
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
                     * 获取Cluster dependency
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ClusterExternalServiceInfo Cluster dependency
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<ClusterExternalServiceInfo> GetClusterExternalServiceInfo() const;

                    /**
                     * 设置Cluster dependency
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _clusterExternalServiceInfo Cluster dependency
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetClusterExternalServiceInfo(const std::vector<ClusterExternalServiceInfo>& _clusterExternalServiceInfo);

                    /**
                     * 判断参数 ClusterExternalServiceInfo 是否已赋值
                     * @return ClusterExternalServiceInfo 是否已赋值
                     * 
                     */
                    bool ClusterExternalServiceInfoHasBeenSet() const;

                    /**
                     * 获取Cluster vpcid string type.
                     * @return UniqVpcId Cluster vpcid string type.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Cluster vpcid string type.
                     * @param _uniqVpcId Cluster vpcid string type.
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID string type.
                     * @return UniqSubnetId Subnet ID string type.
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Subnet ID string type.
                     * @param _uniqSubnetId Subnet ID string type.
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Node information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TopologyInfoList Node information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TopologyInfo> GetTopologyInfoList() const;

                    /**
                     * 设置Node information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _topologyInfoList Node information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopologyInfoList(const std::vector<TopologyInfo>& _topologyInfoList);

                    /**
                     * 判断参数 TopologyInfoList 是否已赋值
                     * @return TopologyInfoList 是否已赋值
                     * 
                     */
                    bool TopologyInfoListHasBeenSet() const;

                    /**
                     * 获取Whether it is a cross-AZ cluster.
                     * @return IsMultiZoneCluster Whether it is a cross-AZ cluster.
                     * 
                     */
                    bool GetIsMultiZoneCluster() const;

                    /**
                     * 设置Whether it is a cross-AZ cluster.
                     * @param _isMultiZoneCluster Whether it is a cross-AZ cluster.
                     * 
                     */
                    void SetIsMultiZoneCluster(const bool& _isMultiZoneCluster);

                    /**
                     * 判断参数 IsMultiZoneCluster 是否已赋值
                     * @return IsMultiZoneCluster 是否已赋值
                     * 
                     */
                    bool IsMultiZoneClusterHasBeenSet() const;

                    /**
                     * 获取Whether to enable automatic compensation for abnormal nodes.
                     * @return IsCvmReplace Whether to enable automatic compensation for abnormal nodes.
                     * 
                     */
                    bool GetIsCvmReplace() const;

                    /**
                     * 设置Whether to enable automatic compensation for abnormal nodes.
                     * @param _isCvmReplace Whether to enable automatic compensation for abnormal nodes.
                     * 
                     */
                    void SetIsCvmReplace(const bool& _isCvmReplace);

                    /**
                     * 判断参数 IsCvmReplace 是否已赋值
                     * @return IsCvmReplace 是否已赋值
                     * 
                     */
                    bool IsCvmReplaceHasBeenSet() const;

                    /**
                     * 获取Title.
                     * @return ClusterTitle Title.
                     * 
                     */
                    std::string GetClusterTitle() const;

                    /**
                     * 设置Title.
                     * @param _clusterTitle Title.
                     * 
                     */
                    void SetClusterTitle(const std::string& _clusterTitle);

                    /**
                     * 判断参数 ClusterTitle 是否已赋值
                     * @return ClusterTitle 是否已赋值
                     * 
                     */
                    bool ClusterTitleHasBeenSet() const;

                    /**
                     * 获取Cluster product configuration information

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigDetail Cluster product configuration information

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    EmrProductConfigDetail GetConfigDetail() const;

                    /**
                     * 设置Cluster product configuration information

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configDetail Cluster product configuration information

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigDetail(const EmrProductConfigDetail& _configDetail);

                    /**
                     * 判断参数 ConfigDetail 是否已赋值
                     * @return ConfigDetail 是否已赋值
                     * 
                     */
                    bool ConfigDetailHasBeenSet() const;

                    /**
                     * 获取Number of file systems bound to a cluster.
                     * @return BindFileSystemNum Number of file systems bound to a cluster.
                     * 
                     */
                    int64_t GetBindFileSystemNum() const;

                    /**
                     * 设置Number of file systems bound to a cluster.
                     * @param _bindFileSystemNum Number of file systems bound to a cluster.
                     * 
                     */
                    void SetBindFileSystemNum(const int64_t& _bindFileSystemNum);

                    /**
                     * 判断参数 BindFileSystemNum 是否已赋值
                     * @return BindFileSystemNum 是否已赋值
                     * 
                     */
                    bool BindFileSystemNumHasBeenSet() const;

                    /**
                     * 获取Bound list of the RSS cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterRelationInfoList Bound list of the RSS cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ClusterRelationMeta> GetClusterRelationInfoList() const;

                    /**
                     * 设置Bound list of the RSS cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterRelationInfoList Bound list of the RSS cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterRelationInfoList(const std::vector<ClusterRelationMeta>& _clusterRelationInfoList);

                    /**
                     * 判断参数 ClusterRelationInfoList 是否已赋值
                     * @return ClusterRelationInfoList 是否已赋值
                     * 
                     */
                    bool ClusterRelationInfoListHasBeenSet() const;

                    /**
                     * 获取Redis information.
                     * @return RedisId Redis information.
                     * 
                     */
                    std::string GetRedisId() const;

                    /**
                     * 设置Redis information.
                     * @param _redisId Redis information.
                     * 
                     */
                    void SetRedisId(const std::string& _redisId);

                    /**
                     * 判断参数 RedisId 是否已赋值
                     * @return RedisId 是否已赋值
                     * 
                     */
                    bool RedisIdHasBeenSet() const;

                private:

                    /**
                     * ID.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Title
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ftitle;
                    bool m_ftitleHasBeenSet;

                    /**
                     * Cluster name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Region ID.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region ID.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * User AppID.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User UIN.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Cluster VPCID.
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID.
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance status code. Valid range:
<li>2: the cluster is running.</li>
<li>3: the cluster is being created.</li>
<li>4: the cluster is being scaled out.</li>
<li>5: Router nodes are being added to the cluster.</li>
<li>6: components are being installed in the cluster.</li>
<li>7: commands are being executed in the cluster.</li>
<li>8: the service is being restarted.</li>
<li>9: maintenance is in progress.</li>
<li>10: the service is being suspended.</li>
<li>11: the cluster is exiting maintenance.</li>
<li>12: the cluster is exiting suspension.</li>
<li>13: the configuration is being distributed.</li>
<li>14: the cluster is being terminated.</li>
<li>15: the Core node is being destroyed.</li>
<li>16: the Task node is being destroyed.</li>
<li>17: the Router node is being destroyed.</li>
<li>18: the web proxy password is being changed.</li>
<li>19: the cluster is being isolated.</li>
<li>20: the cluster is undergoing a reversal transaction.</li>
<li>21: the cluster is being recycled.</li>
<li>22: the instance is waiting for resizing.</li>
<li>23: the cluster has been isolated.</li>
<li>24: the number of nodes is being reduced.</li>
<li>33: the cluster is waiting for a refund.</li>
<li>34: the cluster has received a refund.</li>
<li>301: creation failed.</li>
<li>302: scale-out failed.</li>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Adding time.
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Runtime.
                     */
                    std::string m_runTime;
                    bool m_runTimeHasBeenSet;

                    /**
                     * Cluster product configuration information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    EmrProductConfigOutter m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Public network IP address of the primary node.
                     */
                    std::string m_masterIp;
                    bool m_masterIpHasBeenSet;

                    /**
                     * EMR version.
                     */
                    std::string m_emrVersion;
                    bool m_emrVersionHasBeenSet;

                    /**
                     * Charge type.
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Transaction version.
                     */
                    int64_t m_tradeVersion;
                    bool m_tradeVersionHasBeenSet;

                    /**
                     * Resource order ID.
                     */
                    int64_t m_resourceOrderId;
                    bool m_resourceOrderIdHasBeenSet;

                    /**
                     * Whether it is a billing cluster.
                     */
                    int64_t m_isTradeCluster;
                    bool m_isTradeClusterHasBeenSet;

                    /**
                     * Alarm information of cluster error status.
                     */
                    std::string m_alarmInfo;
                    bool m_alarmInfoHasBeenSet;

                    /**
                     * Whether to adopt new architecture.
                     */
                    int64_t m_isWoodpeckerCluster;
                    bool m_isWoodpeckerClusterHasBeenSet;

                    /**
                     * Metadatabase information.
                     */
                    std::string m_metaDb;
                    bool m_metaDbHasBeenSet;

                    /**
                     * Tag information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Hive metadata information.
                     */
                    std::string m_hiveMetaDb;
                    bool m_hiveMetaDbHasBeenSet;

                    /**
                     * Cluster type: EMR,CLICKHOUSE,DRUID.
                     */
                    std::string m_serviceClass;
                    bool m_serviceClassHasBeenSet;

                    /**
                     * Alias serialization of all nodes in the cluster.
                     */
                    std::string m_aliasInfo;
                    bool m_aliasInfoHasBeenSet;

                    /**
                     * Cluster version ID.
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Region ID.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Scenario name.
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * Scenario-based cluster type.
                     */
                    std::string m_sceneServiceClass;
                    bool m_sceneServiceClassHasBeenSet;

                    /**
                     * Scenario-based EMR version.
                     */
                    std::string m_sceneEmrVersion;
                    bool m_sceneEmrVersionHasBeenSet;

                    /**
                     * Scenario-based cluster type.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * vpc name
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * subnet name
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * Cluster dependency
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<ClusterExternalServiceInfo> m_clusterExternalServiceInfo;
                    bool m_clusterExternalServiceInfoHasBeenSet;

                    /**
                     * Cluster vpcid string type.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Subnet ID string type.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Node information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<TopologyInfo> m_topologyInfoList;
                    bool m_topologyInfoListHasBeenSet;

                    /**
                     * Whether it is a cross-AZ cluster.
                     */
                    bool m_isMultiZoneCluster;
                    bool m_isMultiZoneClusterHasBeenSet;

                    /**
                     * Whether to enable automatic compensation for abnormal nodes.
                     */
                    bool m_isCvmReplace;
                    bool m_isCvmReplaceHasBeenSet;

                    /**
                     * Title.
                     */
                    std::string m_clusterTitle;
                    bool m_clusterTitleHasBeenSet;

                    /**
                     * Cluster product configuration information

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    EmrProductConfigDetail m_configDetail;
                    bool m_configDetailHasBeenSet;

                    /**
                     * Number of file systems bound to a cluster.
                     */
                    int64_t m_bindFileSystemNum;
                    bool m_bindFileSystemNumHasBeenSet;

                    /**
                     * Bound list of the RSS cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClusterRelationMeta> m_clusterRelationInfoList;
                    bool m_clusterRelationInfoListHasBeenSet;

                    /**
                     * Redis information.
                     */
                    std::string m_redisId;
                    bool m_redisIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINSTANCESINFO_H_
