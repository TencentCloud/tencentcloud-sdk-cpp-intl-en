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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPLICENSELIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPLICENSELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>
#include <tencentcloud/cwp/v20180228/model/OrderDetail.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * List object of authorization packages
                */
                class RaspLicenseList : public AbstractModel
                {
                public:
                    RaspLicenseList();
                    ~RaspLicenseList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Machine unique ID
                     * @return QUUID Machine unique ID
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置Machine unique ID
                     * @param _qUUID Machine unique ID
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
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Public IP address
                     * @return PublicIP Public IP address
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置Public IP address
                     * @param _publicIP Public IP address
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
                     * 获取Private IP address
                     * @return PrivateIP Private IP address
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置Private IP address
                     * @param _privateIP Private IP address
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
                     * 获取Cloud Tag Information
                     * @return Tags Cloud Tag Information
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置Cloud Tag Information
                     * @param _tags Cloud Tag Information
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
                     * 获取Version information
-Prioritized Protection package
-Container Security - Pro Edition
-CWP - Flagship Edition
                     * @return ProtectionVersion Version information
-Prioritized Protection package
-Container Security - Pro Edition
-CWP - Flagship Edition
                     * 
                     */
                    std::vector<std::string> GetProtectionVersion() const;

                    /**
                     * 设置Version information
-Prioritized Protection package
-Container Security - Pro Edition
-CWP - Flagship Edition
                     * @param _protectionVersion Version information
-Prioritized Protection package
-Container Security - Pro Edition
-CWP - Flagship Edition
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
                     * 获取Protection setting
-0 unconfigured
-Configured
                     * @return ConfigurationSetting Protection setting
-0 unconfigured
-Configured
                     * 
                     */
                    uint64_t GetConfigurationSetting() const;

                    /**
                     * 设置Protection setting
-0 unconfigured
-Configured
                     * @param _configurationSetting Protection setting
-0 unconfigured
-Configured
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
                     * 获取Master switch
-0 Not enabled
- 1: enabled.
                     * @return Enable Master switch
-0 Not enabled
- 1: enabled.
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Master switch
-0 Not enabled
- 1: enabled.
                     * @param _enable Master switch
-0 Not enabled
- 1: enabled.
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
                     * 获取Vulnerability defense switch
-0 Not enabled
- 1: enabled.
                     * @return VulDefEnable Vulnerability defense switch
-0 Not enabled
- 1: enabled.
                     * 
                     */
                    uint64_t GetVulDefEnable() const;

                    /**
                     * 设置Vulnerability defense switch
-0 Not enabled
- 1: enabled.
                     * @param _vulDefEnable Vulnerability defense switch
-0 Not enabled
- 1: enabled.
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
                     * 获取Vulnerability defense mode
-0 Standard
-1. Major Event Support
                     * @return VulDefMode Vulnerability defense mode
-0 Standard
-1. Major Event Support
                     * 
                     */
                    uint64_t GetVulDefMode() const;

                    /**
                     * 设置Vulnerability defense mode
-0 Standard
-1. Major Event Support
                     * @param _vulDefMode Vulnerability defense mode
-0 Standard
-1. Major Event Support
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
                     * 获取Vulnerability defense action
-0 Detect only
-Detect + defend
                     * @return VulDefAction Vulnerability defense action
-0 Detect only
-Detect + defend
                     * 
                     */
                    uint64_t GetVulDefAction() const;

                    /**
                     * 设置Vulnerability defense action
-0 Detect only
-Detect + defend
                     * @param _vulDefAction Vulnerability defense action
-0 Detect only
-Detect + defend
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
                     * 获取Java Webshell Defense switch
-0 Not enabled
- 1: enabled.
                     * @return MemShellDefEnable Java Webshell Defense switch
-0 Not enabled
- 1: enabled.
                     * 
                     */
                    uint64_t GetMemShellDefEnable() const;

                    /**
                     * 设置Java Webshell Defense switch
-0 Not enabled
- 1: enabled.
                     * @param _memShellDefEnable Java Webshell Defense switch
-0 Not enabled
- 1: enabled.
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
                     * 获取More protection
-0 Do not inject processes that will restart 
-Inject a process that will restart
                     * @return SafeInject More protection
-0 Do not inject processes that will restart 
-Inject a process that will restart
                     * 
                     */
                    uint64_t GetSafeInject() const;

                    /**
                     * 设置More protection
-0 Do not inject processes that will restart 
-Inject a process that will restart
                     * @param _safeInject More protection
-0 Do not inject processes that will restart 
-Inject a process that will restart
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
                     * 获取Performance threshold configuration switch
-0 Not enabled
- 1: enabled.
                     * @return PerformanceLimit Performance threshold configuration switch
-0 Not enabled
- 1: enabled.
                     * 
                     */
                    uint64_t GetPerformanceLimit() const;

                    /**
                     * 设置Performance threshold configuration switch
-0 Not enabled
- 1: enabled.
                     * @param _performanceLimit Performance threshold configuration switch
-0 Not enabled
- 1: enabled.
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
                     * 获取CPU threshold, Value 1-99
                     * @return PerformanceLimitCpu CPU threshold, Value 1-99
                     * 
                     */
                    uint64_t GetPerformanceLimitCpu() const;

                    /**
                     * 设置CPU threshold, Value 1-99
                     * @param _performanceLimitCpu CPU threshold, Value 1-99
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
                     * 获取Memory threshold, value 1-99
                     * @return PerformanceLimitMem Memory threshold, value 1-99
                     * 
                     */
                    uint64_t GetPerformanceLimitMem() const;

                    /**
                     * 设置Memory threshold, value 1-99
                     * @param _performanceLimitMem Memory threshold, value 1-99
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
                     * 获取Memory remaining threshold
                     * @return PerformanceLimitMemAmount Memory remaining threshold
                     * 
                     */
                    uint64_t GetPerformanceLimitMemAmount() const;

                    /**
                     * 设置Memory remaining threshold
                     * @param _performanceLimitMemAmount Memory remaining threshold
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
                     * 获取Plug-in status
-0 Use normally
-1: Existence of anomalies
-2 inactive
                     * @return RaspException Plug-in status
-0 Use normally
-1: Existence of anomalies
-2 inactive
                     * 
                     */
                    uint64_t GetRaspException() const;

                    /**
                     * 设置Plug-in status
-0 Use normally
-1: Existence of anomalies
-2 inactive
                     * @param _raspException Plug-in status
-0 Use normally
-1: Existence of anomalies
-2 inactive
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
                     * 获取Latest update time
                     * @return LatestUpdateTime Latest update time
                     * 
                     */
                    std::string GetLatestUpdateTime() const;

                    /**
                     * 设置Latest update time
                     * @param _latestUpdateTime Latest update time
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
                     * 获取Cluster ID, only valid for container assets
                     * @return ClusterName Cluster ID, only valid for container assets
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster ID, only valid for container assets
                     * @param _clusterName Cluster ID, only valid for container assets
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
                     * 获取Cluster name, only container assets have values
                     * @return ClusterId Cluster name, only container assets have values
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster name, only container assets have values
                     * @param _clusterId Cluster name, only container assets have values
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
                     * 获取Order information
                     * @return OrderDetail Order information
                     * 
                     */
                    OrderDetail GetOrderDetail() const;

                    /**
                     * 设置Order information
                     * @param _orderDetail Order information
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
                     * 获取Whether unbinding is allowed: false - not allowed, true - allowed.
                     * @return IsUnBind Whether unbinding is allowed: false - not allowed, true - allowed.
                     * 
                     */
                    bool GetIsUnBind() const;

                    /**
                     * 设置Whether unbinding is allowed: false - not allowed, true - allowed.
                     * @param _isUnBind Whether unbinding is allowed: false - not allowed, true - allowed.
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
                     * 获取uuid. Unique ID of the machine. Only valid when AssetType = CWP.
                     * @return UUID uuid. Unique ID of the machine. Only valid when AssetType = CWP.
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置uuid. Unique ID of the machine. Only valid when AssetType = CWP.
                     * @param _uUID uuid. Unique ID of the machine. Only valid when AssetType = CWP.
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
                     * 获取No injection/Failure reason of injection
                     * @return Reason No injection/Failure reason of injection
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置No injection/Failure reason of injection
                     * @param _reason No injection/Failure reason of injection
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
                     * Machine unique ID
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * Private IP address
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * Cloud Tag Information
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Version information
-Prioritized Protection package
-Container Security - Pro Edition
-CWP - Flagship Edition
                     */
                    std::vector<std::string> m_protectionVersion;
                    bool m_protectionVersionHasBeenSet;

                    /**
                     * Protection setting
-0 unconfigured
-Configured
                     */
                    uint64_t m_configurationSetting;
                    bool m_configurationSettingHasBeenSet;

                    /**
                     * Master switch
-0 Not enabled
- 1: enabled.
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Vulnerability defense switch
-0 Not enabled
- 1: enabled.
                     */
                    uint64_t m_vulDefEnable;
                    bool m_vulDefEnableHasBeenSet;

                    /**
                     * Vulnerability defense mode
-0 Standard
-1. Major Event Support
                     */
                    uint64_t m_vulDefMode;
                    bool m_vulDefModeHasBeenSet;

                    /**
                     * Vulnerability defense action
-0 Detect only
-Detect + defend
                     */
                    uint64_t m_vulDefAction;
                    bool m_vulDefActionHasBeenSet;

                    /**
                     * Java Webshell Defense switch
-0 Not enabled
- 1: enabled.
                     */
                    uint64_t m_memShellDefEnable;
                    bool m_memShellDefEnableHasBeenSet;

                    /**
                     * More protection
-0 Do not inject processes that will restart 
-Inject a process that will restart
                     */
                    uint64_t m_safeInject;
                    bool m_safeInjectHasBeenSet;

                    /**
                     * Performance threshold configuration switch
-0 Not enabled
- 1: enabled.
                     */
                    uint64_t m_performanceLimit;
                    bool m_performanceLimitHasBeenSet;

                    /**
                     * CPU threshold, Value 1-99
                     */
                    uint64_t m_performanceLimitCpu;
                    bool m_performanceLimitCpuHasBeenSet;

                    /**
                     * Memory threshold, value 1-99
                     */
                    uint64_t m_performanceLimitMem;
                    bool m_performanceLimitMemHasBeenSet;

                    /**
                     * Memory remaining threshold
                     */
                    uint64_t m_performanceLimitMemAmount;
                    bool m_performanceLimitMemAmountHasBeenSet;

                    /**
                     * Plug-in status
-0 Use normally
-1: Existence of anomalies
-2 inactive
                     */
                    uint64_t m_raspException;
                    bool m_raspExceptionHasBeenSet;

                    /**
                     * Latest update time
                     */
                    std::string m_latestUpdateTime;
                    bool m_latestUpdateTimeHasBeenSet;

                    /**
                     * Cluster ID, only valid for container assets
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Cluster name, only container assets have values
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Order information
                     */
                    OrderDetail m_orderDetail;
                    bool m_orderDetailHasBeenSet;

                    /**
                     * Whether unbinding is allowed: false - not allowed, true - allowed.
                     */
                    bool m_isUnBind;
                    bool m_isUnBindHasBeenSet;

                    /**
                     * uuid. Unique ID of the machine. Only valid when AssetType = CWP.
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * No injection/Failure reason of injection
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPLICENSELIST_H_
