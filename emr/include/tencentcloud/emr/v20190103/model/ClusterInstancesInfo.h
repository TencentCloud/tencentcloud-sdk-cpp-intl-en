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
                     * 获取ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Id ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetId() const;

                    /**
                     * 设置ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Id ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Cluster ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClusterId Cluster ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ClusterId Cluster ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Title
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Ftitle Title
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFtitle() const;

                    /**
                     * 设置Title
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Ftitle Title
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFtitle(const std::string& _ftitle);

                    /**
                     * 判断参数 Ftitle 是否已赋值
                     * @return Ftitle 是否已赋值
                     */
                    bool FtitleHasBeenSet() const;

                    /**
                     * 获取Cluster name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClusterName Cluster name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ClusterName Cluster name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Region ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RegionId Region ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RegionId Region ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ZoneId Region ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Region ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ZoneId Region ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取User APPID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AppId User APPID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User APPID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AppId User APPID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取User UIN
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Uin User UIN
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Uin User UIN
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ProjectId Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Cluster `VPCID`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VpcId Cluster `VPCID`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置Cluster `VPCID`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param VpcId Cluster `VPCID`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置Subnet ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SubnetId Subnet ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Instance status code. Value range:
<li>2: cluster running</li>
<li>3: creating cluster.</li>
<li>4: scaling out cluster.</li>
<li>5: adding router node in cluster.</li>
<li>6: installing component in cluster.</li>
<li>7: cluster executing command.</li>
<li>8: restarting service.</li>
<li>9: entering maintenance.</li>
<li>10: suspending service.</li>
<li>11: exiting maintenance.</li>
<li>12: exiting suspension.</li>
<li>13: delivering configuration.</li>
<li>14: terminating cluster.</li>
<li>15: terminating core node.</li>
<li>16: terminating task node.</li>
<li>17: terminating router node.</li>
<li>18: changing webproxy password.</li>
<li>19: isolating cluster.</li>
<li>20: resuming cluster.</li>
<li>21: repossessing cluster.</li>
<li>22: waiting for configuration adjustment.</li>
<li>23: cluster isolated.</li>
<li>24: removing node.</li>
<li>33: waiting for refund.</li>
<li>34: refunded.</li>
<li>301: creation failed.</li>
<li>302: scale-out failed.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status Instance status code. Value range:
<li>2: cluster running</li>
<li>3: creating cluster.</li>
<li>4: scaling out cluster.</li>
<li>5: adding router node in cluster.</li>
<li>6: installing component in cluster.</li>
<li>7: cluster executing command.</li>
<li>8: restarting service.</li>
<li>9: entering maintenance.</li>
<li>10: suspending service.</li>
<li>11: exiting maintenance.</li>
<li>12: exiting suspension.</li>
<li>13: delivering configuration.</li>
<li>14: terminating cluster.</li>
<li>15: terminating core node.</li>
<li>16: terminating task node.</li>
<li>17: terminating router node.</li>
<li>18: changing webproxy password.</li>
<li>19: isolating cluster.</li>
<li>20: resuming cluster.</li>
<li>21: repossessing cluster.</li>
<li>22: waiting for configuration adjustment.</li>
<li>23: cluster isolated.</li>
<li>24: removing node.</li>
<li>33: waiting for refund.</li>
<li>34: refunded.</li>
<li>301: creation failed.</li>
<li>302: scale-out failed.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status code. Value range:
<li>2: cluster running</li>
<li>3: creating cluster.</li>
<li>4: scaling out cluster.</li>
<li>5: adding router node in cluster.</li>
<li>6: installing component in cluster.</li>
<li>7: cluster executing command.</li>
<li>8: restarting service.</li>
<li>9: entering maintenance.</li>
<li>10: suspending service.</li>
<li>11: exiting maintenance.</li>
<li>12: exiting suspension.</li>
<li>13: delivering configuration.</li>
<li>14: terminating cluster.</li>
<li>15: terminating core node.</li>
<li>16: terminating task node.</li>
<li>17: terminating router node.</li>
<li>18: changing webproxy password.</li>
<li>19: isolating cluster.</li>
<li>20: resuming cluster.</li>
<li>21: repossessing cluster.</li>
<li>22: waiting for configuration adjustment.</li>
<li>23: cluster isolated.</li>
<li>24: removing node.</li>
<li>33: waiting for refund.</li>
<li>34: refunded.</li>
<li>301: creation failed.</li>
<li>302: scale-out failed.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Status Instance status code. Value range:
<li>2: cluster running</li>
<li>3: creating cluster.</li>
<li>4: scaling out cluster.</li>
<li>5: adding router node in cluster.</li>
<li>6: installing component in cluster.</li>
<li>7: cluster executing command.</li>
<li>8: restarting service.</li>
<li>9: entering maintenance.</li>
<li>10: suspending service.</li>
<li>11: exiting maintenance.</li>
<li>12: exiting suspension.</li>
<li>13: delivering configuration.</li>
<li>14: terminating cluster.</li>
<li>15: terminating core node.</li>
<li>16: terminating task node.</li>
<li>17: terminating router node.</li>
<li>18: changing webproxy password.</li>
<li>19: isolating cluster.</li>
<li>20: resuming cluster.</li>
<li>21: repossessing cluster.</li>
<li>22: waiting for configuration adjustment.</li>
<li>23: cluster isolated.</li>
<li>24: removing node.</li>
<li>33: waiting for refund.</li>
<li>34: refunded.</li>
<li>301: creation failed.</li>
<li>302: scale-out failed.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AddTime Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AddTime Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Execution duration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RunTime Execution duration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRunTime() const;

                    /**
                     * 设置Execution duration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RunTime Execution duration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRunTime(const std::string& _runTime);

                    /**
                     * 判断参数 RunTime 是否已赋值
                     * @return RunTime 是否已赋值
                     */
                    bool RunTimeHasBeenSet() const;

                    /**
                     * 获取Cluster product configuration information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Config Cluster product configuration information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    EmrProductConfigOutter GetConfig() const;

                    /**
                     * 设置Cluster product configuration information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Config Cluster product configuration information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConfig(const EmrProductConfigOutter& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Public IP of master node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MasterIp Public IP of master node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMasterIp() const;

                    /**
                     * 设置Public IP of master node
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MasterIp Public IP of master node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMasterIp(const std::string& _masterIp);

                    /**
                     * 判断参数 MasterIp 是否已赋值
                     * @return MasterIp 是否已赋值
                     */
                    bool MasterIpHasBeenSet() const;

                    /**
                     * 获取EMR version
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EmrVersion EMR version
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEmrVersion() const;

                    /**
                     * 设置EMR version
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EmrVersion EMR version
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEmrVersion(const std::string& _emrVersion);

                    /**
                     * 判断参数 EmrVersion 是否已赋值
                     * @return EmrVersion 是否已赋值
                     */
                    bool EmrVersionHasBeenSet() const;

                    /**
                     * 获取Billing mode
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ChargeType Billing mode
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置Billing mode
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ChargeType Billing mode
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Transaction version
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TradeVersion Transaction version
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetTradeVersion() const;

                    /**
                     * 设置Transaction version
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TradeVersion Transaction version
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTradeVersion(const int64_t& _tradeVersion);

                    /**
                     * 判断参数 TradeVersion 是否已赋值
                     * @return TradeVersion 是否已赋值
                     */
                    bool TradeVersionHasBeenSet() const;

                    /**
                     * 获取Resource order ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResourceOrderId Resource order ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetResourceOrderId() const;

                    /**
                     * 设置Resource order ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ResourceOrderId Resource order ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResourceOrderId(const int64_t& _resourceOrderId);

                    /**
                     * 判断参数 ResourceOrderId 是否已赋值
                     * @return ResourceOrderId 是否已赋值
                     */
                    bool ResourceOrderIdHasBeenSet() const;

                    /**
                     * 获取Whether this is a paid cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsTradeCluster Whether this is a paid cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetIsTradeCluster() const;

                    /**
                     * 设置Whether this is a paid cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IsTradeCluster Whether this is a paid cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsTradeCluster(const int64_t& _isTradeCluster);

                    /**
                     * 判断参数 IsTradeCluster 是否已赋值
                     * @return IsTradeCluster 是否已赋值
                     */
                    bool IsTradeClusterHasBeenSet() const;

                    /**
                     * 获取Alarm information for cluster error
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AlarmInfo Alarm information for cluster error
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAlarmInfo() const;

                    /**
                     * 设置Alarm information for cluster error
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AlarmInfo Alarm information for cluster error
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAlarmInfo(const std::string& _alarmInfo);

                    /**
                     * 判断参数 AlarmInfo 是否已赋值
                     * @return AlarmInfo 是否已赋值
                     */
                    bool AlarmInfoHasBeenSet() const;

                    /**
                     * 获取Whether the new architecture is used
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsWoodpeckerCluster Whether the new architecture is used
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetIsWoodpeckerCluster() const;

                    /**
                     * 设置Whether the new architecture is used
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IsWoodpeckerCluster Whether the new architecture is used
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsWoodpeckerCluster(const int64_t& _isWoodpeckerCluster);

                    /**
                     * 判断参数 IsWoodpeckerCluster 是否已赋值
                     * @return IsWoodpeckerCluster 是否已赋值
                     */
                    bool IsWoodpeckerClusterHasBeenSet() const;

                    /**
                     * 获取Metadatabase information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MetaDb Metadatabase information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMetaDb() const;

                    /**
                     * 设置Metadatabase information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MetaDb Metadatabase information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMetaDb(const std::string& _metaDb);

                    /**
                     * 判断参数 MetaDb 是否已赋值
                     * @return MetaDb 是否已赋值
                     */
                    bool MetaDbHasBeenSet() const;

                    /**
                     * 获取Tag information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Tags Tag information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Hive metadata
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HiveMetaDb Hive metadata
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHiveMetaDb() const;

                    /**
                     * 设置Hive metadata
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param HiveMetaDb Hive metadata
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHiveMetaDb(const std::string& _hiveMetaDb);

                    /**
                     * 判断参数 HiveMetaDb 是否已赋值
                     * @return HiveMetaDb 是否已赋值
                     */
                    bool HiveMetaDbHasBeenSet() const;

                    /**
                     * 获取Cluster type: EMR, CLICKHOUSE, DRUID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceClass Cluster type: EMR, CLICKHOUSE, DRUID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceClass() const;

                    /**
                     * 设置Cluster type: EMR, CLICKHOUSE, DRUID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceClass Cluster type: EMR, CLICKHOUSE, DRUID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceClass(const std::string& _serviceClass);

                    /**
                     * 判断参数 ServiceClass 是否已赋值
                     * @return ServiceClass 是否已赋值
                     */
                    bool ServiceClassHasBeenSet() const;

                    /**
                     * 获取Alias serialization of all nodes in cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AliasInfo Alias serialization of all nodes in cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAliasInfo() const;

                    /**
                     * 设置Alias serialization of all nodes in cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AliasInfo Alias serialization of all nodes in cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAliasInfo(const std::string& _aliasInfo);

                    /**
                     * 判断参数 AliasInfo 是否已赋值
                     * @return AliasInfo 是否已赋值
                     */
                    bool AliasInfoHasBeenSet() const;

                    /**
                     * 获取Cluster version ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProductId Cluster version ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置Cluster version ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ProductId Cluster version ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Availability zone
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return Zone Availability zone
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param Zone Availability zone
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Scenario name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SceneName Scenario name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置Scenario name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param SceneName Scenario name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取Scenario-based cluster type
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SceneServiceClass Scenario-based cluster type
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetSceneServiceClass() const;

                    /**
                     * 设置Scenario-based cluster type
Note: This field may return `null`, indicating that no valid value was found.
                     * @param SceneServiceClass Scenario-based cluster type
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetSceneServiceClass(const std::string& _sceneServiceClass);

                    /**
                     * 判断参数 SceneServiceClass 是否已赋值
                     * @return SceneServiceClass 是否已赋值
                     */
                    bool SceneServiceClassHasBeenSet() const;

                    /**
                     * 获取Scenario-based EMR version
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SceneEmrVersion Scenario-based EMR version
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetSceneEmrVersion() const;

                    /**
                     * 设置Scenario-based EMR version
Note: This field may return `null`, indicating that no valid value was found.
                     * @param SceneEmrVersion Scenario-based EMR version
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetSceneEmrVersion(const std::string& _sceneEmrVersion);

                    /**
                     * 判断参数 SceneEmrVersion 是否已赋值
                     * @return SceneEmrVersion 是否已赋值
                     */
                    bool SceneEmrVersionHasBeenSet() const;

                    /**
                     * 获取Scenario-based cluster type
Note: This field may return `null`, indicating that no valid value was found.
                     * @return DisplayName Scenario-based cluster type
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Scenario-based cluster type
Note: This field may return `null`, indicating that no valid value was found.
                     * @param DisplayName Scenario-based cluster type
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取VPC name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return VpcName VPC name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param VpcName VPC name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取Subnet name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SubnetName Subnet name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置Subnet name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param SubnetName Subnet name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     */
                    bool SubnetNameHasBeenSet() const;

                private:

                    /**
                     * ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Cluster ID
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Cluster name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Region ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * User APPID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User UIN
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Cluster `VPCID`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance status code. Value range:
<li>2: cluster running</li>
<li>3: creating cluster.</li>
<li>4: scaling out cluster.</li>
<li>5: adding router node in cluster.</li>
<li>6: installing component in cluster.</li>
<li>7: cluster executing command.</li>
<li>8: restarting service.</li>
<li>9: entering maintenance.</li>
<li>10: suspending service.</li>
<li>11: exiting maintenance.</li>
<li>12: exiting suspension.</li>
<li>13: delivering configuration.</li>
<li>14: terminating cluster.</li>
<li>15: terminating core node.</li>
<li>16: terminating task node.</li>
<li>17: terminating router node.</li>
<li>18: changing webproxy password.</li>
<li>19: isolating cluster.</li>
<li>20: resuming cluster.</li>
<li>21: repossessing cluster.</li>
<li>22: waiting for configuration adjustment.</li>
<li>23: cluster isolated.</li>
<li>24: removing node.</li>
<li>33: waiting for refund.</li>
<li>34: refunded.</li>
<li>301: creation failed.</li>
<li>302: scale-out failed.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Execution duration
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Public IP of master node
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_masterIp;
                    bool m_masterIpHasBeenSet;

                    /**
                     * EMR version
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_emrVersion;
                    bool m_emrVersionHasBeenSet;

                    /**
                     * Billing mode
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Transaction version
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tradeVersion;
                    bool m_tradeVersionHasBeenSet;

                    /**
                     * Resource order ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_resourceOrderId;
                    bool m_resourceOrderIdHasBeenSet;

                    /**
                     * Whether this is a paid cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isTradeCluster;
                    bool m_isTradeClusterHasBeenSet;

                    /**
                     * Alarm information for cluster error
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_alarmInfo;
                    bool m_alarmInfoHasBeenSet;

                    /**
                     * Whether the new architecture is used
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isWoodpeckerCluster;
                    bool m_isWoodpeckerClusterHasBeenSet;

                    /**
                     * Metadatabase information
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Hive metadata
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hiveMetaDb;
                    bool m_hiveMetaDbHasBeenSet;

                    /**
                     * Cluster type: EMR, CLICKHOUSE, DRUID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceClass;
                    bool m_serviceClassHasBeenSet;

                    /**
                     * Alias serialization of all nodes in cluster
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aliasInfo;
                    bool m_aliasInfoHasBeenSet;

                    /**
                     * Cluster version ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Availability zone
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Scenario name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * Scenario-based cluster type
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_sceneServiceClass;
                    bool m_sceneServiceClassHasBeenSet;

                    /**
                     * Scenario-based EMR version
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_sceneEmrVersion;
                    bool m_sceneEmrVersionHasBeenSet;

                    /**
                     * Scenario-based cluster type
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * VPC name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Subnet name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINSTANCESINFO_H_
