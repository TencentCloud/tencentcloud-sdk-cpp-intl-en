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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * EDR alarm list information
                */
                class EdrAlertItem : public AbstractModel
                {
                public:
                    EdrAlertItem();
                    ~EdrAlertItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Alarm table id</p>
                     * @return Id <p>Alarm table id</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>Alarm table id</p>
                     * @param _id <p>Alarm table id</p>
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
                     * 获取<p>APPID</p>
                     * @return AppId <p>APPID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>APPID</p>
                     * @param _appId <p>APPID</p>
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
                     * 获取<p>Alarm ID</p>
                     * @return AlertId <p>Alarm ID</p>
                     * 
                     */
                    std::string GetAlertId() const;

                    /**
                     * 设置<p>Alarm ID</p>
                     * @param _alertId <p>Alarm ID</p>
                     * 
                     */
                    void SetAlertId(const std::string& _alertId);

                    /**
                     * 判断参数 AlertId 是否已赋值
                     * @return AlertId 是否已赋值
                     * 
                     */
                    bool AlertIdHasBeenSet() const;

                    /**
                     * 获取<p>Major category of alarm</p>
                     * @return AlertCategory <p>Major category of alarm</p>
                     * 
                     */
                    std::string GetAlertCategory() const;

                    /**
                     * 设置<p>Major category of alarm</p>
                     * @param _alertCategory <p>Major category of alarm</p>
                     * 
                     */
                    void SetAlertCategory(const std::string& _alertCategory);

                    /**
                     * 判断参数 AlertCategory 是否已赋值
                     * @return AlertCategory 是否已赋值
                     * 
                     */
                    bool AlertCategoryHasBeenSet() const;

                    /**
                     * 获取<p>Alarm subcategory</p>
                     * @return AlertSubType <p>Alarm subcategory</p>
                     * 
                     */
                    std::string GetAlertSubType() const;

                    /**
                     * 设置<p>Alarm subcategory</p>
                     * @param _alertSubType <p>Alarm subcategory</p>
                     * 
                     */
                    void SetAlertSubType(const std::string& _alertSubType);

                    /**
                     * 判断参数 AlertSubType 是否已赋值
                     * @return AlertSubType 是否已赋值
                     * 
                     */
                    bool AlertSubTypeHasBeenSet() const;

                    /**
                     * 获取<p>Policy ID.</p>
                     * @return RuleId <p>Policy ID.</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>Policy ID.</p>
                     * @param _ruleId <p>Policy ID.</p>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>Policy type</p>
                     * @return RuleType <p>Policy type</p>
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置<p>Policy type</p>
                     * @param _ruleType <p>Policy type</p>
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>Alarm level.</p>
                     * @return Level <p>Alarm level.</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>Alarm level.</p>
                     * @param _level <p>Alarm level.</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>Alarm status</p>
                     * @return Status <p>Alarm status</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Alarm status</p>
                     * @param _status <p>Alarm status</p>
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
                     * 获取<p>Attack phase</p>
                     * @return AttackStage <p>Attack phase</p>
                     * 
                     */
                    std::string GetAttackStage() const;

                    /**
                     * 设置<p>Attack phase</p>
                     * @param _attackStage <p>Attack phase</p>
                     * 
                     */
                    void SetAttackStage(const std::string& _attackStage);

                    /**
                     * 判断参数 AttackStage 是否已赋值
                     * @return AttackStage 是否已赋值
                     * 
                     */
                    bool AttackStageHasBeenSet() const;

                    /**
                     * 获取<p>Detection mode</p>
                     * @return DetectMode <p>Detection mode</p>
                     * 
                     */
                    std::string GetDetectMode() const;

                    /**
                     * 设置<p>Detection mode</p>
                     * @param _detectMode <p>Detection mode</p>
                     * 
                     */
                    void SetDetectMode(const std::string& _detectMode);

                    /**
                     * 判断参数 DetectMode 是否已赋值
                     * @return DetectMode 是否已赋值
                     * 
                     */
                    bool DetectModeHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
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
                     * 获取<p>QUUID</p>
                     * @return Quuid <p>QUUID</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>QUUID</p>
                     * @param _quuid <p>QUUID</p>
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取<p>Whether to pay</p>
                     * @return IsProVersion <p>Whether to pay</p>
                     * 
                     */
                    int64_t GetIsProVersion() const;

                    /**
                     * 设置<p>Whether to pay</p>
                     * @param _isProVersion <p>Whether to pay</p>
                     * 
                     */
                    void SetIsProVersion(const int64_t& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     * 
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取<p>Alarm source</p>
                     * @return AlertSource <p>Alarm source</p>
                     * 
                     */
                    std::string GetAlertSource() const;

                    /**
                     * 设置<p>Alarm source</p>
                     * @param _alertSource <p>Alarm source</p>
                     * 
                     */
                    void SetAlertSource(const std::string& _alertSource);

                    /**
                     * 判断参数 AlertSource 是否已赋值
                     * @return AlertSource 是否已赋值
                     * 
                     */
                    bool AlertSourceHasBeenSet() const;

                    /**
                     * 获取<p>Machine type (specific to the list API; not limited to container alerts, and the same is returned for host alerts). Enriched from machines.machine_type by Quuid. The original enumeration value is passed through as-is without i18n translation, and the frontend performs row mapping for display. Parameter values include CVM / LH / Other / EKS-NATIVE. If no corresponding machine information is found, it is downgraded to an empty string "" (consistent with the downgrade action for asset enrichment fields such as InstanceName / PublicIp / PrivateIp). This field will not be returned by the alert details API (DescribeEdrAlertInfo)</p>
                     * @return MachineType <p>Machine type (specific to the list API; not limited to container alerts, and the same is returned for host alerts). Enriched from machines.machine_type by Quuid. The original enumeration value is passed through as-is without i18n translation, and the frontend performs row mapping for display. Parameter values include CVM / LH / Other / EKS-NATIVE. If no corresponding machine information is found, it is downgraded to an empty string "" (consistent with the downgrade action for asset enrichment fields such as InstanceName / PublicIp / PrivateIp). This field will not be returned by the alert details API (DescribeEdrAlertInfo)</p>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p>Machine type (specific to the list API; not limited to container alerts, and the same is returned for host alerts). Enriched from machines.machine_type by Quuid. The original enumeration value is passed through as-is without i18n translation, and the frontend performs row mapping for display. Parameter values include CVM / LH / Other / EKS-NATIVE. If no corresponding machine information is found, it is downgraded to an empty string "" (consistent with the downgrade action for asset enrichment fields such as InstanceName / PublicIp / PrivateIp). This field will not be returned by the alert details API (DescribeEdrAlertInfo)</p>
                     * @param _machineType <p>Machine type (specific to the list API; not limited to container alerts, and the same is returned for host alerts). Enriched from machines.machine_type by Quuid. The original enumeration value is passed through as-is without i18n translation, and the frontend performs row mapping for display. Parameter values include CVM / LH / Other / EKS-NATIVE. If no corresponding machine information is found, it is downgraded to an empty string "" (consistent with the downgrade action for asset enrichment fields such as InstanceName / PublicIp / PrivateIp). This field will not be returned by the alert details API (DescribeEdrAlertInfo)</p>
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取<p>Image ID.</p>
                     * @return ImageId <p>Image ID.</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>Image ID.</p>
                     * @param _imageId <p>Image ID.</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>Container id</p>
                     * @return ContainerId <p>Container id</p>
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置<p>Container id</p>
                     * @param _containerId <p>Container id</p>
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

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
                     * 获取<p>Number of alarms.</p>
                     * @return EventCount <p>Number of alarms.</p>
                     * 
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置<p>Number of alarms.</p>
                     * @param _eventCount <p>Number of alarms.</p>
                     * 
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取<p>Initial discovery time</p>
                     * @return FirstDetectTime <p>Initial discovery time</p>
                     * 
                     */
                    std::string GetFirstDetectTime() const;

                    /**
                     * 设置<p>Initial discovery time</p>
                     * @param _firstDetectTime <p>Initial discovery time</p>
                     * 
                     */
                    void SetFirstDetectTime(const std::string& _firstDetectTime);

                    /**
                     * 判断参数 FirstDetectTime 是否已赋值
                     * @return FirstDetectTime 是否已赋值
                     * 
                     */
                    bool FirstDetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>Most recent discovery time</p>
                     * @return LatestDetectTime <p>Most recent discovery time</p>
                     * 
                     */
                    std::string GetLatestDetectTime() const;

                    /**
                     * 设置<p>Most recent discovery time</p>
                     * @param _latestDetectTime <p>Most recent discovery time</p>
                     * 
                     */
                    void SetLatestDetectTime(const std::string& _latestDetectTime);

                    /**
                     * 判断参数 LatestDetectTime 是否已赋值
                     * @return LatestDetectTime 是否已赋值
                     * 
                     */
                    bool LatestDetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>Rule name.</p>
                     * @return RuleName <p>Rule name.</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>Rule name.</p>
                     * @param _ruleName <p>Rule name.</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>Policy type</p>
                     * @return ContentType <p>Policy type</p>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>Policy type</p>
                     * @param _contentType <p>Policy type</p>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>Instance name</p>
                     * @return InstanceName <p>Instance name</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name</p>
                     * @param _instanceName <p>Instance name</p>
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
                     * 获取<p>Public IP</p>
                     * @return PublicIp <p>Public IP</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>Public IP</p>
                     * @param _publicIp <p>Public IP</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>Private IP address.</p>
                     * @return PrivateIp <p>Private IP address.</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>Private IP address.</p>
                     * @param _privateIp <p>Private IP address.</p>
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>Whether application protection is enabled for this machine</p>
                     * @return RaspOpen <p>Whether application protection is enabled for this machine</p>
                     * 
                     */
                    bool GetRaspOpen() const;

                    /**
                     * 设置<p>Whether application protection is enabled for this machine</p>
                     * @param _raspOpen <p>Whether application protection is enabled for this machine</p>
                     * 
                     */
                    void SetRaspOpen(const bool& _raspOpen);

                    /**
                     * 判断参数 RaspOpen 是否已赋值
                     * @return RaspOpen 是否已赋值
                     * 
                     */
                    bool RaspOpenHasBeenSet() const;

                    /**
                     * 获取<p>Container name</p>
                     * @return ContainerName <p>Container name</p>
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置<p>Container name</p>
                     * @param _containerName <p>Container name</p>
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取<p>Container image name</p>
                     * @return ImageName <p>Container image name</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置<p>Container image name</p>
                     * @param _imageName <p>Container image name</p>
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

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

                private:

                    /**
                     * <p>Alarm table id</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>APPID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Alarm ID</p>
                     */
                    std::string m_alertId;
                    bool m_alertIdHasBeenSet;

                    /**
                     * <p>Major category of alarm</p>
                     */
                    std::string m_alertCategory;
                    bool m_alertCategoryHasBeenSet;

                    /**
                     * <p>Alarm subcategory</p>
                     */
                    std::string m_alertSubType;
                    bool m_alertSubTypeHasBeenSet;

                    /**
                     * <p>Policy ID.</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Policy type</p>
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>Alarm level.</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Alarm status</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Attack phase</p>
                     */
                    std::string m_attackStage;
                    bool m_attackStageHasBeenSet;

                    /**
                     * <p>Detection mode</p>
                     */
                    std::string m_detectMode;
                    bool m_detectModeHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>QUUID</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>Whether to pay</p>
                     */
                    int64_t m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * <p>Alarm source</p>
                     */
                    std::string m_alertSource;
                    bool m_alertSourceHasBeenSet;

                    /**
                     * <p>Machine type (specific to the list API; not limited to container alerts, and the same is returned for host alerts). Enriched from machines.machine_type by Quuid. The original enumeration value is passed through as-is without i18n translation, and the frontend performs row mapping for display. Parameter values include CVM / LH / Other / EKS-NATIVE. If no corresponding machine information is found, it is downgraded to an empty string "" (consistent with the downgrade action for asset enrichment fields such as InstanceName / PublicIp / PrivateIp). This field will not be returned by the alert details API (DescribeEdrAlertInfo)</p>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>Image ID.</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>Container id</p>
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Number of alarms.</p>
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * <p>Initial discovery time</p>
                     */
                    std::string m_firstDetectTime;
                    bool m_firstDetectTimeHasBeenSet;

                    /**
                     * <p>Most recent discovery time</p>
                     */
                    std::string m_latestDetectTime;
                    bool m_latestDetectTimeHasBeenSet;

                    /**
                     * <p>Rule name.</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Policy type</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>Instance name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Public IP</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>Private IP address.</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>Whether application protection is enabled for this machine</p>
                     */
                    bool m_raspOpen;
                    bool m_raspOpenHasBeenSet;

                    /**
                     * <p>Container name</p>
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * <p>Container image name</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTITEM_H_
