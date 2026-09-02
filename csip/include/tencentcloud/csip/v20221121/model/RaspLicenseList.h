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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RASPLICENSELIST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RASPLICENSELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tags.h>
#include <tencentcloud/csip/v20221121/model/OrderDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * List of authorization packages for major event protection.
                */
                class RaspLicenseList : public AbstractModel
                {
                public:
                    RaspLicenseList();
                    ~RaspLicenseList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Unique machine ID</p>
                     * @return QUUID <p>Unique machine ID</p>
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置<p>Unique machine ID</p>
                     * @param _qUUID <p>Unique machine ID</p>
                     * 
                     */
                    void SetQUUID(const std::string& _qUUID);

                    /**
                     * 判断参数 QUUID 是否已赋值
                     * @return QUUID 是否已赋值
                     * 
                     */
                    bool QUUIDHasBeenSet() const;

                    /**
                     * 获取<p>Instance name.</p>
                     * @return InstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _instanceName <p>Instance name.</p>
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
                     * 获取<p>Public IP Address</p>
                     * @return PublicIP <p>Public IP Address</p>
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置<p>Public IP Address</p>
                     * @param _publicIP <p>Public IP Address</p>
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取<p>Private IP address.</p>
                     * @return PrivateIP <p>Private IP address.</p>
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置<p>Private IP address.</p>
                     * @param _privateIP <p>Private IP address.</p>
                     * 
                     */
                    void SetPrivateIP(const std::string& _privateIP);

                    /**
                     * 判断参数 PrivateIP 是否已赋值
                     * @return PrivateIP 是否已赋值
                     * 
                     */
                    bool PrivateIPHasBeenSet() const;

                    /**
                     * 获取<p>Cloud tag information</p>
                     * @return Tags <p>Cloud tag information</p>
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置<p>Cloud tag information</p>
                     * @param _tags <p>Cloud tag information</p>
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Protection edition information</p><ul><li>CriticalProtection Prioritized Protection package</li><li>Pro Container security-Pro Edition</li><li>Ultimate CWP-Flagship Edition</li></ul>
                     * @return ProtectionVersion <p>Protection edition information</p><ul><li>CriticalProtection Prioritized Protection package</li><li>Pro Container security-Pro Edition</li><li>Ultimate CWP-Flagship Edition</li></ul>
                     * 
                     */
                    std::vector<std::string> GetProtectionVersion() const;

                    /**
                     * 设置<p>Protection edition information</p><ul><li>CriticalProtection Prioritized Protection package</li><li>Pro Container security-Pro Edition</li><li>Ultimate CWP-Flagship Edition</li></ul>
                     * @param _protectionVersion <p>Protection edition information</p><ul><li>CriticalProtection Prioritized Protection package</li><li>Pro Container security-Pro Edition</li><li>Ultimate CWP-Flagship Edition</li></ul>
                     * 
                     */
                    void SetProtectionVersion(const std::vector<std::string>& _protectionVersion);

                    /**
                     * 判断参数 ProtectionVersion 是否已赋值
                     * @return ProtectionVersion 是否已赋值
                     * 
                     */
                    bool ProtectionVersionHasBeenSet() const;

                    /**
                     * 获取<p>Protection setting</p><ul><li>0 No configuration</li><li>1 Configured</li></ul>
                     * @return ConfigurationSetting <p>Protection setting</p><ul><li>0 No configuration</li><li>1 Configured</li></ul>
                     * 
                     */
                    uint64_t GetConfigurationSetting() const;

                    /**
                     * 设置<p>Protection setting</p><ul><li>0 No configuration</li><li>1 Configured</li></ul>
                     * @param _configurationSetting <p>Protection setting</p><ul><li>0 No configuration</li><li>1 Configured</li></ul>
                     * 
                     */
                    void SetConfigurationSetting(const uint64_t& _configurationSetting);

                    /**
                     * 判断参数 ConfigurationSetting 是否已赋值
                     * @return ConfigurationSetting 是否已赋值
                     * 
                     */
                    bool ConfigurationSettingHasBeenSet() const;

                    /**
                     * 获取<p>Master switch</p><ul><li>0 Not enabled</li><li>1 Enabled</li></ul>
                     * @return Enable <p>Master switch</p><ul><li>0 Not enabled</li><li>1 Enabled</li></ul>
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置<p>Master switch</p><ul><li>0 Not enabled</li><li>1 Enabled</li></ul>
                     * @param _enable <p>Master switch</p><ul><li>0 Not enabled</li><li>1 Enabled</li></ul>
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability defense switch</p><ul><li>0 Not enabled</li><li>1 Enable</li></ul>
                     * @return VulDefEnable <p>Vulnerability defense switch</p><ul><li>0 Not enabled</li><li>1 Enable</li></ul>
                     * 
                     */
                    uint64_t GetVulDefEnable() const;

                    /**
                     * 设置<p>Vulnerability defense switch</p><ul><li>0 Not enabled</li><li>1 Enable</li></ul>
                     * @param _vulDefEnable <p>Vulnerability defense switch</p><ul><li>0 Not enabled</li><li>1 Enable</li></ul>
                     * 
                     */
                    void SetVulDefEnable(const uint64_t& _vulDefEnable);

                    /**
                     * 判断参数 VulDefEnable 是否已赋值
                     * @return VulDefEnable 是否已赋值
                     * 
                     */
                    bool VulDefEnableHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability defense mode</p><ul><li>0: standard</li><li>1: major event protection</li></ul>
                     * @return VulDefMode <p>Vulnerability defense mode</p><ul><li>0: standard</li><li>1: major event protection</li></ul>
                     * 
                     */
                    uint64_t GetVulDefMode() const;

                    /**
                     * 设置<p>Vulnerability defense mode</p><ul><li>0: standard</li><li>1: major event protection</li></ul>
                     * @param _vulDefMode <p>Vulnerability defense mode</p><ul><li>0: standard</li><li>1: major event protection</li></ul>
                     * 
                     */
                    void SetVulDefMode(const uint64_t& _vulDefMode);

                    /**
                     * 判断参数 VulDefMode 是否已赋值
                     * @return VulDefMode 是否已赋值
                     * 
                     */
                    bool VulDefModeHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability defense action</p><ul><li>0: Detection only</li><li>1: Detection and prevention</li></ul>
                     * @return VulDefAction <p>Vulnerability defense action</p><ul><li>0: Detection only</li><li>1: Detection and prevention</li></ul>
                     * 
                     */
                    uint64_t GetVulDefAction() const;

                    /**
                     * 设置<p>Vulnerability defense action</p><ul><li>0: Detection only</li><li>1: Detection and prevention</li></ul>
                     * @param _vulDefAction <p>Vulnerability defense action</p><ul><li>0: Detection only</li><li>1: Detection and prevention</li></ul>
                     * 
                     */
                    void SetVulDefAction(const uint64_t& _vulDefAction);

                    /**
                     * 判断参数 VulDefAction 是否已赋值
                     * @return VulDefAction 是否已赋值
                     * 
                     */
                    bool VulDefActionHasBeenSet() const;

                    /**
                     * 获取<p>Java Webshell Defense switch</p><ul><li>0 Not enabled</li><li>1 Enable</li></ul>
                     * @return MemShellDefEnable <p>Java Webshell Defense switch</p><ul><li>0 Not enabled</li><li>1 Enable</li></ul>
                     * 
                     */
                    uint64_t GetMemShellDefEnable() const;

                    /**
                     * 设置<p>Java Webshell Defense switch</p><ul><li>0 Not enabled</li><li>1 Enable</li></ul>
                     * @param _memShellDefEnable <p>Java Webshell Defense switch</p><ul><li>0 Not enabled</li><li>1 Enable</li></ul>
                     * 
                     */
                    void SetMemShellDefEnable(const uint64_t& _memShellDefEnable);

                    /**
                     * 判断参数 MemShellDefEnable 是否已赋值
                     * @return MemShellDefEnable 是否已赋值
                     * 
                     */
                    bool MemShellDefEnableHasBeenSet() const;

                    /**
                     * 获取<p>More protection</p><ul><li>0: Do not inject into processes that will restart </li><li>1: Inject into processes that will restart</li></ul>
                     * @return SafeInject <p>More protection</p><ul><li>0: Do not inject into processes that will restart </li><li>1: Inject into processes that will restart</li></ul>
                     * 
                     */
                    uint64_t GetSafeInject() const;

                    /**
                     * 设置<p>More protection</p><ul><li>0: Do not inject into processes that will restart </li><li>1: Inject into processes that will restart</li></ul>
                     * @param _safeInject <p>More protection</p><ul><li>0: Do not inject into processes that will restart </li><li>1: Inject into processes that will restart</li></ul>
                     * 
                     */
                    void SetSafeInject(const uint64_t& _safeInject);

                    /**
                     * 判断参数 SafeInject 是否已赋值
                     * @return SafeInject 是否已赋值
                     * 
                     */
                    bool SafeInjectHasBeenSet() const;

                    /**
                     * 获取<p>Performance threshold configuration switch</p><ul><li>0 Not enabled</li><li>1 Enabled</li></ul>
                     * @return PerformanceLimit <p>Performance threshold configuration switch</p><ul><li>0 Not enabled</li><li>1 Enabled</li></ul>
                     * 
                     */
                    uint64_t GetPerformanceLimit() const;

                    /**
                     * 设置<p>Performance threshold configuration switch</p><ul><li>0 Not enabled</li><li>1 Enabled</li></ul>
                     * @param _performanceLimit <p>Performance threshold configuration switch</p><ul><li>0 Not enabled</li><li>1 Enabled</li></ul>
                     * 
                     */
                    void SetPerformanceLimit(const uint64_t& _performanceLimit);

                    /**
                     * 判断参数 PerformanceLimit 是否已赋值
                     * @return PerformanceLimit 是否已赋值
                     * 
                     */
                    bool PerformanceLimitHasBeenSet() const;

                    /**
                     * 获取<p>CPU threshold. Value range: 1–99.</p>
                     * @return PerformanceLimitCpu <p>CPU threshold. Value range: 1–99.</p>
                     * 
                     */
                    uint64_t GetPerformanceLimitCpu() const;

                    /**
                     * 设置<p>CPU threshold. Value range: 1–99.</p>
                     * @param _performanceLimitCpu <p>CPU threshold. Value range: 1–99.</p>
                     * 
                     */
                    void SetPerformanceLimitCpu(const uint64_t& _performanceLimitCpu);

                    /**
                     * 判断参数 PerformanceLimitCpu 是否已赋值
                     * @return PerformanceLimitCpu 是否已赋值
                     * 
                     */
                    bool PerformanceLimitCpuHasBeenSet() const;

                    /**
                     * 获取<p>Memory threshold. Value range: 1–99</p>
                     * @return PerformanceLimitMem <p>Memory threshold. Value range: 1–99</p>
                     * 
                     */
                    uint64_t GetPerformanceLimitMem() const;

                    /**
                     * 设置<p>Memory threshold. Value range: 1–99</p>
                     * @param _performanceLimitMem <p>Memory threshold. Value range: 1–99</p>
                     * 
                     */
                    void SetPerformanceLimitMem(const uint64_t& _performanceLimitMem);

                    /**
                     * 判断参数 PerformanceLimitMem 是否已赋值
                     * @return PerformanceLimitMem 是否已赋值
                     * 
                     */
                    bool PerformanceLimitMemHasBeenSet() const;

                    /**
                     * 获取<p>Remaining memory threshold</p>
                     * @return PerformanceLimitMemAmount <p>Remaining memory threshold</p>
                     * 
                     */
                    uint64_t GetPerformanceLimitMemAmount() const;

                    /**
                     * 设置<p>Remaining memory threshold</p>
                     * @param _performanceLimitMemAmount <p>Remaining memory threshold</p>
                     * 
                     */
                    void SetPerformanceLimitMemAmount(const uint64_t& _performanceLimitMemAmount);

                    /**
                     * 判断参数 PerformanceLimitMemAmount 是否已赋值
                     * @return PerformanceLimitMemAmount 是否已赋值
                     * 
                     */
                    bool PerformanceLimitMemAmountHasBeenSet() const;

                    /**
                     * 获取<p>Plug-in status</p><ul><li>0 Used normally</li><li>1 Anomaly exists</li><li>2 Inactive</li></ul>
                     * @return RaspException <p>Plug-in status</p><ul><li>0 Used normally</li><li>1 Anomaly exists</li><li>2 Inactive</li></ul>
                     * 
                     */
                    uint64_t GetRaspException() const;

                    /**
                     * 设置<p>Plug-in status</p><ul><li>0 Used normally</li><li>1 Anomaly exists</li><li>2 Inactive</li></ul>
                     * @param _raspException <p>Plug-in status</p><ul><li>0 Used normally</li><li>1 Anomaly exists</li><li>2 Inactive</li></ul>
                     * 
                     */
                    void SetRaspException(const uint64_t& _raspException);

                    /**
                     * 判断参数 RaspException 是否已赋值
                     * @return RaspException 是否已赋值
                     * 
                     */
                    bool RaspExceptionHasBeenSet() const;

                    /**
                     * 获取<p>Latest update time.</p>
                     * @return LatestUpdateTime <p>Latest update time.</p>
                     * 
                     */
                    std::string GetLatestUpdateTime() const;

                    /**
                     * 设置<p>Latest update time.</p>
                     * @param _latestUpdateTime <p>Latest update time.</p>
                     * 
                     */
                    void SetLatestUpdateTime(const std::string& _latestUpdateTime);

                    /**
                     * 判断参数 LatestUpdateTime 是否已赋值
                     * @return LatestUpdateTime 是否已赋值
                     * 
                     */
                    bool LatestUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID, available only for container assets</p>
                     * @return ClusterName <p>Cluster ID, available only for container assets</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster ID, available only for container assets</p>
                     * @param _clusterName <p>Cluster ID, available only for container assets</p>
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
                     * 获取<p>Cluster name, only available for container assets</p>
                     * @return ClusterId <p>Cluster name, only available for container assets</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster name, only available for container assets</p>
                     * @param _clusterId <p>Cluster name, only available for container assets</p>
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
                     * 获取<p>Order information</p>
                     * @return OrderDetail <p>Order information</p>
                     * 
                     */
                    OrderDetail GetOrderDetail() const;

                    /**
                     * 设置<p>Order information</p>
                     * @param _orderDetail <p>Order information</p>
                     * 
                     */
                    void SetOrderDetail(const OrderDetail& _orderDetail);

                    /**
                     * 判断参数 OrderDetail 是否已赋值
                     * @return OrderDetail 是否已赋值
                     * 
                     */
                    bool OrderDetailHasBeenSet() const;

                    /**
                     * 获取<p>Whether unbinding is allowed. false: not allowed; true: permission</p>
                     * @return IsUnBind <p>Whether unbinding is allowed. false: not allowed; true: permission</p>
                     * 
                     */
                    bool GetIsUnBind() const;

                    /**
                     * 设置<p>Whether unbinding is allowed. false: not allowed; true: permission</p>
                     * @param _isUnBind <p>Whether unbinding is allowed. false: not allowed; true: permission</p>
                     * 
                     */
                    void SetIsUnBind(const bool& _isUnBind);

                    /**
                     * 判断参数 IsUnBind 是否已赋值
                     * @return IsUnBind 是否已赋值
                     * 
                     */
                    bool IsUnBindHasBeenSet() const;

                    /**
                     * 获取<p>uuid: unique ID of a machine. It has a value only when AssetType is CWP.</p>
                     * @return UUID <p>uuid: unique ID of a machine. It has a value only when AssetType is CWP.</p>
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置<p>uuid: unique ID of a machine. It has a value only when AssetType is CWP.</p>
                     * @param _uUID <p>uuid: unique ID of a machine. It has a value only when AssetType is CWP.</p>
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取<p>No injection/failure reason</p><p>Default value: empty</p><p>Values are available only if injection fails</p>
                     * @return Reason <p>No injection/failure reason</p><p>Default value: empty</p><p>Values are available only if injection fails</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>No injection/failure reason</p><p>Default value: empty</p><p>Values are available only if injection fails</p>
                     * @param _reason <p>No injection/failure reason</p><p>Default value: empty</p><p>Values are available only if injection fails</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * <p>Unique machine ID</p>
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Public IP Address</p>
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * <p>Private IP address.</p>
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * <p>Cloud tag information</p>
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Protection edition information</p><ul><li>CriticalProtection Prioritized Protection package</li><li>Pro Container security-Pro Edition</li><li>Ultimate CWP-Flagship Edition</li></ul>
                     */
                    std::vector<std::string> m_protectionVersion;
                    bool m_protectionVersionHasBeenSet;

                    /**
                     * <p>Protection setting</p><ul><li>0 No configuration</li><li>1 Configured</li></ul>
                     */
                    uint64_t m_configurationSetting;
                    bool m_configurationSettingHasBeenSet;

                    /**
                     * <p>Master switch</p><ul><li>0 Not enabled</li><li>1 Enabled</li></ul>
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Vulnerability defense switch</p><ul><li>0 Not enabled</li><li>1 Enable</li></ul>
                     */
                    uint64_t m_vulDefEnable;
                    bool m_vulDefEnableHasBeenSet;

                    /**
                     * <p>Vulnerability defense mode</p><ul><li>0: standard</li><li>1: major event protection</li></ul>
                     */
                    uint64_t m_vulDefMode;
                    bool m_vulDefModeHasBeenSet;

                    /**
                     * <p>Vulnerability defense action</p><ul><li>0: Detection only</li><li>1: Detection and prevention</li></ul>
                     */
                    uint64_t m_vulDefAction;
                    bool m_vulDefActionHasBeenSet;

                    /**
                     * <p>Java Webshell Defense switch</p><ul><li>0 Not enabled</li><li>1 Enable</li></ul>
                     */
                    uint64_t m_memShellDefEnable;
                    bool m_memShellDefEnableHasBeenSet;

                    /**
                     * <p>More protection</p><ul><li>0: Do not inject into processes that will restart </li><li>1: Inject into processes that will restart</li></ul>
                     */
                    uint64_t m_safeInject;
                    bool m_safeInjectHasBeenSet;

                    /**
                     * <p>Performance threshold configuration switch</p><ul><li>0 Not enabled</li><li>1 Enabled</li></ul>
                     */
                    uint64_t m_performanceLimit;
                    bool m_performanceLimitHasBeenSet;

                    /**
                     * <p>CPU threshold. Value range: 1–99.</p>
                     */
                    uint64_t m_performanceLimitCpu;
                    bool m_performanceLimitCpuHasBeenSet;

                    /**
                     * <p>Memory threshold. Value range: 1–99</p>
                     */
                    uint64_t m_performanceLimitMem;
                    bool m_performanceLimitMemHasBeenSet;

                    /**
                     * <p>Remaining memory threshold</p>
                     */
                    uint64_t m_performanceLimitMemAmount;
                    bool m_performanceLimitMemAmountHasBeenSet;

                    /**
                     * <p>Plug-in status</p><ul><li>0 Used normally</li><li>1 Anomaly exists</li><li>2 Inactive</li></ul>
                     */
                    uint64_t m_raspException;
                    bool m_raspExceptionHasBeenSet;

                    /**
                     * <p>Latest update time.</p>
                     */
                    std::string m_latestUpdateTime;
                    bool m_latestUpdateTimeHasBeenSet;

                    /**
                     * <p>Cluster ID, available only for container assets</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Cluster name, only available for container assets</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Order information</p>
                     */
                    OrderDetail m_orderDetail;
                    bool m_orderDetailHasBeenSet;

                    /**
                     * <p>Whether unbinding is allowed. false: not allowed; true: permission</p>
                     */
                    bool m_isUnBind;
                    bool m_isUnBindHasBeenSet;

                    /**
                     * <p>uuid: unique ID of a machine. It has a value only when AssetType is CWP.</p>
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * <p>No injection/failure reason</p><p>Default value: empty</p><p>Values are available only if injection fails</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RASPLICENSELIST_H_
