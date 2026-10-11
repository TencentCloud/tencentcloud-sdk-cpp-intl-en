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
#include <tencentcloud/emr/v20190103/model/CustomMetaDBInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Cluster information.
                */
                class ClusterInstancesInfo : public AbstractModel
                {
                public:
                    ClusterInstancesInfo();
                    ~ClusterInstancesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ID.</p>
                     * @return Id <p>ID.</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>ID.</p>
                     * @param _id <p>ID.</p>
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
                     * 获取<p>Title.</p>
                     * @return Ftitle <p>Title.</p>
                     * @deprecated
                     */
                    std::string GetFtitle() const;

                    /**
                     * 设置<p>Title.</p>
                     * @param _ftitle <p>Title.</p>
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
                     * 获取<p>Region ID.</p>
                     * @return RegionId <p>Region ID.</p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>Region ID.</p>
                     * @param _regionId <p>Region ID.</p>
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
                     * 获取<p>Region ID.</p>
                     * @return ZoneId <p>Region ID.</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>Region ID.</p>
                     * @param _zoneId <p>Region ID.</p>
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
                     * 获取<p>User APPID.</p>
                     * @return AppId <p>User APPID.</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>User APPID.</p>
                     * @param _appId <p>User APPID.</p>
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
                     * 获取<p>User UIN.</p>
                     * @return Uin <p>User UIN.</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>User UIN.</p>
                     * @param _uin <p>User UIN.</p>
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
                     * 获取<p>Project ID.</p>
                     * @return ProjectId <p>Project ID.</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID.</p>
                     * @param _projectId <p>Project ID.</p>
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
                     * 获取<p>Cluster VPC ID.</p>
                     * @return VpcId <p>Cluster VPC ID.</p>
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置<p>Cluster VPC ID.</p>
                     * @param _vpcId <p>Cluster VPC ID.</p>
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
                     * 获取<p>Subnet ID.</p>
                     * @return SubnetId <p>Subnet ID.</p>
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置<p>Subnet ID.</p>
                     * @param _subnetId <p>Subnet ID.</p>
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
                     * 获取<p>Status code of the instance. Valid values:</p><li>2: The cluster is running.</li><li>3: The cluster is being created.</li><li>4: The cluster is being scaled out.</li><li>5: Router nodes are being added to the cluster.</li><li>6: Components are being installed in the cluster.</li><li>7: The cluster is executing a command.</li><li>8: The service is being restarted.</li><li>9: The cluster is entering maintenance.</li><li>10: The service is being paused.</li><li>11: The cluster is exiting maintenance.</li><li>12: The cluster is exiting the pause status.</li><li>13: The configuration is being delivered.</li><li>14: The cluster is being terminated.</li><li>15: Core nodes are being terminated.</li><li>16: Task nodes are being terminated.</li><li>17: Router nodes are being terminated.</li><li>18: The webproxy password is being changed.</li><li>19: The cluster is being isolated.</li><li>20: The cluster is being reconciled.</li><li>21: The cluster is being reclaimed.</li><li>22: The configuration change is waiting.</li><li>23: The cluster has been isolated.</li><li>24: Nodes are being scaled in.</li><li>33: The cluster is waiting for a refund.</li><li>34: The cluster has been refunded.</li><li>301: Creation failed.</li><li>302: Scale-out failed.</li>
                     * @return Status <p>Status code of the instance. Valid values:</p><li>2: The cluster is running.</li><li>3: The cluster is being created.</li><li>4: The cluster is being scaled out.</li><li>5: Router nodes are being added to the cluster.</li><li>6: Components are being installed in the cluster.</li><li>7: The cluster is executing a command.</li><li>8: The service is being restarted.</li><li>9: The cluster is entering maintenance.</li><li>10: The service is being paused.</li><li>11: The cluster is exiting maintenance.</li><li>12: The cluster is exiting the pause status.</li><li>13: The configuration is being delivered.</li><li>14: The cluster is being terminated.</li><li>15: Core nodes are being terminated.</li><li>16: Task nodes are being terminated.</li><li>17: Router nodes are being terminated.</li><li>18: The webproxy password is being changed.</li><li>19: The cluster is being isolated.</li><li>20: The cluster is being reconciled.</li><li>21: The cluster is being reclaimed.</li><li>22: The configuration change is waiting.</li><li>23: The cluster has been isolated.</li><li>24: Nodes are being scaled in.</li><li>33: The cluster is waiting for a refund.</li><li>34: The cluster has been refunded.</li><li>301: Creation failed.</li><li>302: Scale-out failed.</li>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Status code of the instance. Valid values:</p><li>2: The cluster is running.</li><li>3: The cluster is being created.</li><li>4: The cluster is being scaled out.</li><li>5: Router nodes are being added to the cluster.</li><li>6: Components are being installed in the cluster.</li><li>7: The cluster is executing a command.</li><li>8: The service is being restarted.</li><li>9: The cluster is entering maintenance.</li><li>10: The service is being paused.</li><li>11: The cluster is exiting maintenance.</li><li>12: The cluster is exiting the pause status.</li><li>13: The configuration is being delivered.</li><li>14: The cluster is being terminated.</li><li>15: Core nodes are being terminated.</li><li>16: Task nodes are being terminated.</li><li>17: Router nodes are being terminated.</li><li>18: The webproxy password is being changed.</li><li>19: The cluster is being isolated.</li><li>20: The cluster is being reconciled.</li><li>21: The cluster is being reclaimed.</li><li>22: The configuration change is waiting.</li><li>23: The cluster has been isolated.</li><li>24: Nodes are being scaled in.</li><li>33: The cluster is waiting for a refund.</li><li>34: The cluster has been refunded.</li><li>301: Creation failed.</li><li>302: Scale-out failed.</li>
                     * @param _status <p>Status code of the instance. Valid values:</p><li>2: The cluster is running.</li><li>3: The cluster is being created.</li><li>4: The cluster is being scaled out.</li><li>5: Router nodes are being added to the cluster.</li><li>6: Components are being installed in the cluster.</li><li>7: The cluster is executing a command.</li><li>8: The service is being restarted.</li><li>9: The cluster is entering maintenance.</li><li>10: The service is being paused.</li><li>11: The cluster is exiting maintenance.</li><li>12: The cluster is exiting the pause status.</li><li>13: The configuration is being delivered.</li><li>14: The cluster is being terminated.</li><li>15: Core nodes are being terminated.</li><li>16: Task nodes are being terminated.</li><li>17: Router nodes are being terminated.</li><li>18: The webproxy password is being changed.</li><li>19: The cluster is being isolated.</li><li>20: The cluster is being reconciled.</li><li>21: The cluster is being reclaimed.</li><li>22: The configuration change is waiting.</li><li>23: The cluster has been isolated.</li><li>24: Nodes are being scaled in.</li><li>33: The cluster is waiting for a refund.</li><li>34: The cluster has been refunded.</li><li>301: Creation failed.</li><li>302: Scale-out failed.</li>
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
                     * 获取<p>Addition time.</p>
                     * @return AddTime <p>Addition time.</p>
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置<p>Addition time.</p>
                     * @param _addTime <p>Addition time.</p>
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
                     * 获取<p>Execution duration.</p>
                     * @return RunTime <p>Execution duration.</p>
                     * 
                     */
                    std::string GetRunTime() const;

                    /**
                     * 设置<p>Execution duration.</p>
                     * @param _runTime <p>Execution duration.</p>
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
                     * 获取<p>Cluster product configuration information.</p>
                     * @return Config <p>Cluster product configuration information.</p>
                     * @deprecated
                     */
                    EmrProductConfigOutter GetConfig() const;

                    /**
                     * 设置<p>Cluster product configuration information.</p>
                     * @param _config <p>Cluster product configuration information.</p>
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
                     * 获取<p>Public IP address of the Master node.</p>
                     * @return MasterIp <p>Public IP address of the Master node.</p>
                     * 
                     */
                    std::string GetMasterIp() const;

                    /**
                     * 设置<p>Public IP address of the Master node.</p>
                     * @param _masterIp <p>Public IP address of the Master node.</p>
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
                     * 获取<p>EMR version.</p>
                     * @return EmrVersion <p>EMR version.</p>
                     * 
                     */
                    std::string GetEmrVersion() const;

                    /**
                     * 设置<p>EMR version.</p>
                     * @param _emrVersion <p>EMR version.</p>
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
                     * 获取<p>Billing mode.</p>
                     * @return ChargeType <p>Billing mode.</p>
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置<p>Billing mode.</p>
                     * @param _chargeType <p>Billing mode.</p>
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
                     * 获取<p>Transaction version.</p>
                     * @return TradeVersion <p>Transaction version.</p>
                     * 
                     */
                    int64_t GetTradeVersion() const;

                    /**
                     * 设置<p>Transaction version.</p>
                     * @param _tradeVersion <p>Transaction version.</p>
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
                     * 获取<p>Resource order ID.</p>
                     * @return ResourceOrderId <p>Resource order ID.</p>
                     * 
                     */
                    int64_t GetResourceOrderId() const;

                    /**
                     * 设置<p>Resource order ID.</p>
                     * @param _resourceOrderId <p>Resource order ID.</p>
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
                     * 获取<p>Whether it is a billable cluster.</p>
                     * @return IsTradeCluster <p>Whether it is a billable cluster.</p>
                     * 
                     */
                    int64_t GetIsTradeCluster() const;

                    /**
                     * 设置<p>Whether it is a billable cluster.</p>
                     * @param _isTradeCluster <p>Whether it is a billable cluster.</p>
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
                     * 获取<p>Cluster error status alarm information.</p>
                     * @return AlarmInfo <p>Cluster error status alarm information.</p>
                     * 
                     */
                    std::string GetAlarmInfo() const;

                    /**
                     * 设置<p>Cluster error status alarm information.</p>
                     * @param _alarmInfo <p>Cluster error status alarm information.</p>
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
                     * 获取<p>Whether a new architecture is used.</p>
                     * @return IsWoodpeckerCluster <p>Whether a new architecture is used.</p>
                     * 
                     */
                    int64_t GetIsWoodpeckerCluster() const;

                    /**
                     * 设置<p>Whether a new architecture is used.</p>
                     * @param _isWoodpeckerCluster <p>Whether a new architecture is used.</p>
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
                     * 获取<p>Meta database information.</p>
                     * @return MetaDb <p>Meta database information.</p>
                     * 
                     */
                    std::string GetMetaDb() const;

                    /**
                     * 设置<p>Meta database information.</p>
                     * @param _metaDb <p>Meta database information.</p>
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
                     * 获取<p>Tag information.</p>
                     * @return Tags <p>Tag information.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag information.</p>
                     * @param _tags <p>Tag information.</p>
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
                     * 获取<p>Hive metadata information.</p>
                     * @return HiveMetaDb <p>Hive metadata information.</p>
                     * 
                     */
                    std::string GetHiveMetaDb() const;

                    /**
                     * 设置<p>Hive metadata information.</p>
                     * @param _hiveMetaDb <p>Hive metadata information.</p>
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
                     * 获取<p>Cluster type. Valid values: EMR, CLICKHOUSE, and DRUID.</p>
                     * @return ServiceClass <p>Cluster type. Valid values: EMR, CLICKHOUSE, and DRUID.</p>
                     * 
                     */
                    std::string GetServiceClass() const;

                    /**
                     * 设置<p>Cluster type. Valid values: EMR, CLICKHOUSE, and DRUID.</p>
                     * @param _serviceClass <p>Cluster type. Valid values: EMR, CLICKHOUSE, and DRUID.</p>
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
                     * 获取<p>Serialization of the aliases of all nodes in the cluster.</p>
                     * @return AliasInfo <p>Serialization of the aliases of all nodes in the cluster.</p>
                     * 
                     */
                    std::string GetAliasInfo() const;

                    /**
                     * 设置<p>Serialization of the aliases of all nodes in the cluster.</p>
                     * @param _aliasInfo <p>Serialization of the aliases of all nodes in the cluster.</p>
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
                     * 获取<p>Cluster version ID.</p>
                     * @return ProductId <p>Cluster version ID.</p>
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置<p>Cluster version ID.</p>
                     * @param _productId <p>Cluster version ID.</p>
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
                     * 获取<p>Region ID.</p>
                     * @return Zone <p>Region ID.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Region ID.</p>
                     * @param _zone <p>Region ID.</p>
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
                     * 获取<p>Scenario name.</p>
                     * @return SceneName <p>Scenario name.</p>
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置<p>Scenario name.</p>
                     * @param _sceneName <p>Scenario name.</p>
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
                     * 获取<p>Scenario-based cluster type.</p>
                     * @return SceneServiceClass <p>Scenario-based cluster type.</p>
                     * 
                     */
                    std::string GetSceneServiceClass() const;

                    /**
                     * 设置<p>Scenario-based cluster type.</p>
                     * @param _sceneServiceClass <p>Scenario-based cluster type.</p>
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
                     * 获取<p>Scenario-based EMR version.</p>
                     * @return SceneEmrVersion <p>Scenario-based EMR version.</p>
                     * 
                     */
                    std::string GetSceneEmrVersion() const;

                    /**
                     * 设置<p>Scenario-based EMR version.</p>
                     * @param _sceneEmrVersion <p>Scenario-based EMR version.</p>
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
                     * 获取<p>Scenario-based cluster type.</p>
                     * @return DisplayName <p>Scenario-based cluster type.</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>Scenario-based cluster type.</p>
                     * @param _displayName <p>Scenario-based cluster type.</p>
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
                     * 获取<p>vpc name</p>
                     * @return VpcName <p>vpc name</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>vpc name</p>
                     * @param _vpcName <p>vpc name</p>
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
                     * 获取<p>subnet name</p>
                     * @return SubnetName <p>subnet name</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>subnet name</p>
                     * @param _subnetName <p>subnet name</p>
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
                     * 获取<p>Cluster dependency.</p>
                     * @return ClusterExternalServiceInfo <p>Cluster dependency.</p>
                     * 
                     */
                    std::vector<ClusterExternalServiceInfo> GetClusterExternalServiceInfo() const;

                    /**
                     * 设置<p>Cluster dependency.</p>
                     * @param _clusterExternalServiceInfo <p>Cluster dependency.</p>
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
                     * 获取<p>Cluster VPC ID, string type.</p>
                     * @return UniqVpcId <p>Cluster VPC ID, string type.</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>Cluster VPC ID, string type.</p>
                     * @param _uniqVpcId <p>Cluster VPC ID, string type.</p>
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
                     * 获取<p>Subnet ID, string type.</p>
                     * @return UniqSubnetId <p>Subnet ID, string type.</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>Subnet ID, string type.</p>
                     * @param _uniqSubnetId <p>Subnet ID, string type.</p>
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
                     * 获取<p>Node information.</p>
                     * @return TopologyInfoList <p>Node information.</p>
                     * 
                     */
                    std::vector<TopologyInfo> GetTopologyInfoList() const;

                    /**
                     * 设置<p>Node information.</p>
                     * @param _topologyInfoList <p>Node information.</p>
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
                     * 获取<p>Whether it is a cross-AZ cluster.</p>
                     * @return IsMultiZoneCluster <p>Whether it is a cross-AZ cluster.</p>
                     * 
                     */
                    bool GetIsMultiZoneCluster() const;

                    /**
                     * 设置<p>Whether it is a cross-AZ cluster.</p>
                     * @param _isMultiZoneCluster <p>Whether it is a cross-AZ cluster.</p>
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
                     * 获取<p>Whether automatic compensation for abnormal nodes is enabled.</p>
                     * @return IsCvmReplace <p>Whether automatic compensation for abnormal nodes is enabled.</p>
                     * 
                     */
                    bool GetIsCvmReplace() const;

                    /**
                     * 设置<p>Whether automatic compensation for abnormal nodes is enabled.</p>
                     * @param _isCvmReplace <p>Whether automatic compensation for abnormal nodes is enabled.</p>
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
                     * 获取<p>Title.</p>
                     * @return ClusterTitle <p>Title.</p>
                     * 
                     */
                    std::string GetClusterTitle() const;

                    /**
                     * 设置<p>Title.</p>
                     * @param _clusterTitle <p>Title.</p>
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
                     * 获取<p>Cluster product configuration information.</p>
                     * @return ConfigDetail <p>Cluster product configuration information.</p>
                     * 
                     */
                    EmrProductConfigDetail GetConfigDetail() const;

                    /**
                     * 设置<p>Cluster product configuration information.</p>
                     * @param _configDetail <p>Cluster product configuration information.</p>
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
                     * 获取<p>Number of file systems bound to the cluster.</p>
                     * @return BindFileSystemNum <p>Number of file systems bound to the cluster.</p>
                     * 
                     */
                    int64_t GetBindFileSystemNum() const;

                    /**
                     * 设置<p>Number of file systems bound to the cluster.</p>
                     * @param _bindFileSystemNum <p>Number of file systems bound to the cluster.</p>
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
                     * 获取<p>Binding list of the RSS cluster.</p>
                     * @return ClusterRelationInfoList <p>Binding list of the RSS cluster.</p>
                     * 
                     */
                    std::vector<ClusterRelationMeta> GetClusterRelationInfoList() const;

                    /**
                     * 设置<p>Binding list of the RSS cluster.</p>
                     * @param _clusterRelationInfoList <p>Binding list of the RSS cluster.</p>
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
                     * 获取<p>Redis information.</p>
                     * @return RedisId <p>Redis information.</p>
                     * 
                     */
                    std::string GetRedisId() const;

                    /**
                     * 设置<p>Redis information.</p>
                     * @param _redisId <p>Redis information.</p>
                     * 
                     */
                    void SetRedisId(const std::string& _redisId);

                    /**
                     * 判断参数 RedisId 是否已赋值
                     * @return RedisId 是否已赋值
                     * 
                     */
                    bool RedisIdHasBeenSet() const;

                    /**
                     * 获取<p>Whether IO fault self-healing is enabled.</p>
                     * @return IsIOHungSelfRecovery <p>Whether IO fault self-healing is enabled.</p>
                     * 
                     */
                    bool GetIsIOHungSelfRecovery() const;

                    /**
                     * 设置<p>Whether IO fault self-healing is enabled.</p>
                     * @param _isIOHungSelfRecovery <p>Whether IO fault self-healing is enabled.</p>
                     * 
                     */
                    void SetIsIOHungSelfRecovery(const bool& _isIOHungSelfRecovery);

                    /**
                     * 判断参数 IsIOHungSelfRecovery 是否已赋值
                     * @return IsIOHungSelfRecovery 是否已赋值
                     * 
                     */
                    bool IsIOHungSelfRecoveryHasBeenSet() const;

                    /**
                     * 获取<p>Metadata information.</p>
                     * @return MetaDBGroupInfo <p>Metadata information.</p>
                     * 
                     */
                    std::vector<CustomMetaDBInfo> GetMetaDBGroupInfo() const;

                    /**
                     * 设置<p>Metadata information.</p>
                     * @param _metaDBGroupInfo <p>Metadata information.</p>
                     * 
                     */
                    void SetMetaDBGroupInfo(const std::vector<CustomMetaDBInfo>& _metaDBGroupInfo);

                    /**
                     * 判断参数 MetaDBGroupInfo 是否已赋值
                     * @return MetaDBGroupInfo 是否已赋值
                     * 
                     */
                    bool MetaDBGroupInfoHasBeenSet() const;

                private:

                    /**
                     * <p>ID.</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Title.</p>
                     */
                    std::string m_ftitle;
                    bool m_ftitleHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Region ID.</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>Region ID.</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>User APPID.</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>User UIN.</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Project ID.</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Cluster VPC ID.</p>
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID.</p>
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Status code of the instance. Valid values:</p><li>2: The cluster is running.</li><li>3: The cluster is being created.</li><li>4: The cluster is being scaled out.</li><li>5: Router nodes are being added to the cluster.</li><li>6: Components are being installed in the cluster.</li><li>7: The cluster is executing a command.</li><li>8: The service is being restarted.</li><li>9: The cluster is entering maintenance.</li><li>10: The service is being paused.</li><li>11: The cluster is exiting maintenance.</li><li>12: The cluster is exiting the pause status.</li><li>13: The configuration is being delivered.</li><li>14: The cluster is being terminated.</li><li>15: Core nodes are being terminated.</li><li>16: Task nodes are being terminated.</li><li>17: Router nodes are being terminated.</li><li>18: The webproxy password is being changed.</li><li>19: The cluster is being isolated.</li><li>20: The cluster is being reconciled.</li><li>21: The cluster is being reclaimed.</li><li>22: The configuration change is waiting.</li><li>23: The cluster has been isolated.</li><li>24: Nodes are being scaled in.</li><li>33: The cluster is waiting for a refund.</li><li>34: The cluster has been refunded.</li><li>301: Creation failed.</li><li>302: Scale-out failed.</li>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Addition time.</p>
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * <p>Execution duration.</p>
                     */
                    std::string m_runTime;
                    bool m_runTimeHasBeenSet;

                    /**
                     * <p>Cluster product configuration information.</p>
                     */
                    EmrProductConfigOutter m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>Public IP address of the Master node.</p>
                     */
                    std::string m_masterIp;
                    bool m_masterIpHasBeenSet;

                    /**
                     * <p>EMR version.</p>
                     */
                    std::string m_emrVersion;
                    bool m_emrVersionHasBeenSet;

                    /**
                     * <p>Billing mode.</p>
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>Transaction version.</p>
                     */
                    int64_t m_tradeVersion;
                    bool m_tradeVersionHasBeenSet;

                    /**
                     * <p>Resource order ID.</p>
                     */
                    int64_t m_resourceOrderId;
                    bool m_resourceOrderIdHasBeenSet;

                    /**
                     * <p>Whether it is a billable cluster.</p>
                     */
                    int64_t m_isTradeCluster;
                    bool m_isTradeClusterHasBeenSet;

                    /**
                     * <p>Cluster error status alarm information.</p>
                     */
                    std::string m_alarmInfo;
                    bool m_alarmInfoHasBeenSet;

                    /**
                     * <p>Whether a new architecture is used.</p>
                     */
                    int64_t m_isWoodpeckerCluster;
                    bool m_isWoodpeckerClusterHasBeenSet;

                    /**
                     * <p>Meta database information.</p>
                     */
                    std::string m_metaDb;
                    bool m_metaDbHasBeenSet;

                    /**
                     * <p>Tag information.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Hive metadata information.</p>
                     */
                    std::string m_hiveMetaDb;
                    bool m_hiveMetaDbHasBeenSet;

                    /**
                     * <p>Cluster type. Valid values: EMR, CLICKHOUSE, and DRUID.</p>
                     */
                    std::string m_serviceClass;
                    bool m_serviceClassHasBeenSet;

                    /**
                     * <p>Serialization of the aliases of all nodes in the cluster.</p>
                     */
                    std::string m_aliasInfo;
                    bool m_aliasInfoHasBeenSet;

                    /**
                     * <p>Cluster version ID.</p>
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>Region ID.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Scenario name.</p>
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * <p>Scenario-based cluster type.</p>
                     */
                    std::string m_sceneServiceClass;
                    bool m_sceneServiceClassHasBeenSet;

                    /**
                     * <p>Scenario-based EMR version.</p>
                     */
                    std::string m_sceneEmrVersion;
                    bool m_sceneEmrVersionHasBeenSet;

                    /**
                     * <p>Scenario-based cluster type.</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>vpc name</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>subnet name</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>Cluster dependency.</p>
                     */
                    std::vector<ClusterExternalServiceInfo> m_clusterExternalServiceInfo;
                    bool m_clusterExternalServiceInfoHasBeenSet;

                    /**
                     * <p>Cluster VPC ID, string type.</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID, string type.</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>Node information.</p>
                     */
                    std::vector<TopologyInfo> m_topologyInfoList;
                    bool m_topologyInfoListHasBeenSet;

                    /**
                     * <p>Whether it is a cross-AZ cluster.</p>
                     */
                    bool m_isMultiZoneCluster;
                    bool m_isMultiZoneClusterHasBeenSet;

                    /**
                     * <p>Whether automatic compensation for abnormal nodes is enabled.</p>
                     */
                    bool m_isCvmReplace;
                    bool m_isCvmReplaceHasBeenSet;

                    /**
                     * <p>Title.</p>
                     */
                    std::string m_clusterTitle;
                    bool m_clusterTitleHasBeenSet;

                    /**
                     * <p>Cluster product configuration information.</p>
                     */
                    EmrProductConfigDetail m_configDetail;
                    bool m_configDetailHasBeenSet;

                    /**
                     * <p>Number of file systems bound to the cluster.</p>
                     */
                    int64_t m_bindFileSystemNum;
                    bool m_bindFileSystemNumHasBeenSet;

                    /**
                     * <p>Binding list of the RSS cluster.</p>
                     */
                    std::vector<ClusterRelationMeta> m_clusterRelationInfoList;
                    bool m_clusterRelationInfoListHasBeenSet;

                    /**
                     * <p>Redis information.</p>
                     */
                    std::string m_redisId;
                    bool m_redisIdHasBeenSet;

                    /**
                     * <p>Whether IO fault self-healing is enabled.</p>
                     */
                    bool m_isIOHungSelfRecovery;
                    bool m_isIOHungSelfRecoveryHasBeenSet;

                    /**
                     * <p>Metadata information.</p>
                     */
                    std::vector<CustomMetaDBInfo> m_metaDBGroupInfo;
                    bool m_metaDBGroupInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINSTANCESINFO_H_
