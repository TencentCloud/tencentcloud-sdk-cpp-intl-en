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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SERVICESETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SERVICESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Service settings
                */
                class ServiceSettings : public AbstractModel
                {
                public:
                    ServiceSettings();
                    ~ServiceSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enables unhealthy instance replacement. If this feature is enabled, AS will replace instances that are flagged as unhealthy by Cloud Monitor. If this parameter is not specified, the value will be False by default.
                     * @return ReplaceMonitorUnhealthy Enables unhealthy instance replacement. If this feature is enabled, AS will replace instances that are flagged as unhealthy by Cloud Monitor. If this parameter is not specified, the value will be False by default.
                     * 
                     */
                    bool GetReplaceMonitorUnhealthy() const;

                    /**
                     * 设置Enables unhealthy instance replacement. If this feature is enabled, AS will replace instances that are flagged as unhealthy by Cloud Monitor. If this parameter is not specified, the value will be False by default.
                     * @param _replaceMonitorUnhealthy Enables unhealthy instance replacement. If this feature is enabled, AS will replace instances that are flagged as unhealthy by Cloud Monitor. If this parameter is not specified, the value will be False by default.
                     * 
                     */
                    void SetReplaceMonitorUnhealthy(const bool& _replaceMonitorUnhealthy);

                    /**
                     * 判断参数 ReplaceMonitorUnhealthy 是否已赋值
                     * @return ReplaceMonitorUnhealthy 是否已赋值
                     * 
                     */
                    bool ReplaceMonitorUnhealthyHasBeenSet() const;

                    /**
                     * 获取Valid values: 
CLASSIC_SCALING: this is the typical scaling method, which creates and terminates instances to perform scaling operations. 
WAKE_UP_STOPPED_SCALING: this scaling method first tries to start stopped instances. If the number of instances woken up is insufficient, the system creates new instances for scale-out. For scale-in, instances are terminated as in the typical method. You can use the StopAutoScalingInstances API to stop instances in the scaling group. Scale-out operations triggered by alarms will still create new instances.
Default value: CLASSIC_SCALING
                     * @return ScalingMode Valid values: 
CLASSIC_SCALING: this is the typical scaling method, which creates and terminates instances to perform scaling operations. 
WAKE_UP_STOPPED_SCALING: this scaling method first tries to start stopped instances. If the number of instances woken up is insufficient, the system creates new instances for scale-out. For scale-in, instances are terminated as in the typical method. You can use the StopAutoScalingInstances API to stop instances in the scaling group. Scale-out operations triggered by alarms will still create new instances.
Default value: CLASSIC_SCALING
                     * 
                     */
                    std::string GetScalingMode() const;

                    /**
                     * 设置Valid values: 
CLASSIC_SCALING: this is the typical scaling method, which creates and terminates instances to perform scaling operations. 
WAKE_UP_STOPPED_SCALING: this scaling method first tries to start stopped instances. If the number of instances woken up is insufficient, the system creates new instances for scale-out. For scale-in, instances are terminated as in the typical method. You can use the StopAutoScalingInstances API to stop instances in the scaling group. Scale-out operations triggered by alarms will still create new instances.
Default value: CLASSIC_SCALING
                     * @param _scalingMode Valid values: 
CLASSIC_SCALING: this is the typical scaling method, which creates and terminates instances to perform scaling operations. 
WAKE_UP_STOPPED_SCALING: this scaling method first tries to start stopped instances. If the number of instances woken up is insufficient, the system creates new instances for scale-out. For scale-in, instances are terminated as in the typical method. You can use the StopAutoScalingInstances API to stop instances in the scaling group. Scale-out operations triggered by alarms will still create new instances.
Default value: CLASSIC_SCALING
                     * 
                     */
                    void SetScalingMode(const std::string& _scalingMode);

                    /**
                     * 判断参数 ScalingMode 是否已赋值
                     * @return ScalingMode 是否已赋值
                     * 
                     */
                    bool ScalingModeHasBeenSet() const;

                    /**
                     * 获取Enable unhealthy instance replacement. If this feature is enabled, AS will replace instances that are found unhealthy in the CLB health check. If this parameter is not specified, the default value `False` will be used.
                     * @return ReplaceLoadBalancerUnhealthy Enable unhealthy instance replacement. If this feature is enabled, AS will replace instances that are found unhealthy in the CLB health check. If this parameter is not specified, the default value `False` will be used.
                     * 
                     */
                    bool GetReplaceLoadBalancerUnhealthy() const;

                    /**
                     * 设置Enable unhealthy instance replacement. If this feature is enabled, AS will replace instances that are found unhealthy in the CLB health check. If this parameter is not specified, the default value `False` will be used.
                     * @param _replaceLoadBalancerUnhealthy Enable unhealthy instance replacement. If this feature is enabled, AS will replace instances that are found unhealthy in the CLB health check. If this parameter is not specified, the default value `False` will be used.
                     * 
                     */
                    void SetReplaceLoadBalancerUnhealthy(const bool& _replaceLoadBalancerUnhealthy);

                    /**
                     * 判断参数 ReplaceLoadBalancerUnhealthy 是否已赋值
                     * @return ReplaceLoadBalancerUnhealthy 是否已赋值
                     * 
                     */
                    bool ReplaceLoadBalancerUnhealthyHasBeenSet() const;

                    /**
                     * 获取Replace mode of unhealthy replacement service. Valid values:
RECREATE: Rebuild an instance to replace the original unhealthy instance.
RESET: Performing a system reinstallation on unhealthy instances to keep information such as data disks, private IP addresses, and instance IDs unchanged. The instance login settings, HostName, enhanced services, and UserData will remain consistent with the current launch configuration.
Default value: RECREATE.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReplaceMode Replace mode of unhealthy replacement service. Valid values:
RECREATE: Rebuild an instance to replace the original unhealthy instance.
RESET: Performing a system reinstallation on unhealthy instances to keep information such as data disks, private IP addresses, and instance IDs unchanged. The instance login settings, HostName, enhanced services, and UserData will remain consistent with the current launch configuration.
Default value: RECREATE.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReplaceMode() const;

                    /**
                     * 设置Replace mode of unhealthy replacement service. Valid values:
RECREATE: Rebuild an instance to replace the original unhealthy instance.
RESET: Performing a system reinstallation on unhealthy instances to keep information such as data disks, private IP addresses, and instance IDs unchanged. The instance login settings, HostName, enhanced services, and UserData will remain consistent with the current launch configuration.
Default value: RECREATE.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _replaceMode Replace mode of unhealthy replacement service. Valid values:
RECREATE: Rebuild an instance to replace the original unhealthy instance.
RESET: Performing a system reinstallation on unhealthy instances to keep information such as data disks, private IP addresses, and instance IDs unchanged. The instance login settings, HostName, enhanced services, and UserData will remain consistent with the current launch configuration.
Default value: RECREATE.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReplaceMode(const std::string& _replaceMode);

                    /**
                     * 判断参数 ReplaceMode 是否已赋值
                     * @return ReplaceMode 是否已赋值
                     * 
                     */
                    bool ReplaceModeHasBeenSet() const;

                    /**
                     * 获取Automatic instance tag update. The default value is false. If this feature is enabled, tags of running instances in a scaling group will be updated as well if the scaling group tags are updated. (This feature takes effect for tag creation and editing but not tag deletion.) The update does not take effect immediately due to certain latency.
                     * @return AutoUpdateInstanceTags Automatic instance tag update. The default value is false. If this feature is enabled, tags of running instances in a scaling group will be updated as well if the scaling group tags are updated. (This feature takes effect for tag creation and editing but not tag deletion.) The update does not take effect immediately due to certain latency.
                     * 
                     */
                    bool GetAutoUpdateInstanceTags() const;

                    /**
                     * 设置Automatic instance tag update. The default value is false. If this feature is enabled, tags of running instances in a scaling group will be updated as well if the scaling group tags are updated. (This feature takes effect for tag creation and editing but not tag deletion.) The update does not take effect immediately due to certain latency.
                     * @param _autoUpdateInstanceTags Automatic instance tag update. The default value is false. If this feature is enabled, tags of running instances in a scaling group will be updated as well if the scaling group tags are updated. (This feature takes effect for tag creation and editing but not tag deletion.) The update does not take effect immediately due to certain latency.
                     * 
                     */
                    void SetAutoUpdateInstanceTags(const bool& _autoUpdateInstanceTags);

                    /**
                     * 判断参数 AutoUpdateInstanceTags 是否已赋值
                     * @return AutoUpdateInstanceTags 是否已赋值
                     * 
                     */
                    bool AutoUpdateInstanceTagsHasBeenSet() const;

                private:

                    /**
                     * Enables unhealthy instance replacement. If this feature is enabled, AS will replace instances that are flagged as unhealthy by Cloud Monitor. If this parameter is not specified, the value will be False by default.
                     */
                    bool m_replaceMonitorUnhealthy;
                    bool m_replaceMonitorUnhealthyHasBeenSet;

                    /**
                     * Valid values: 
CLASSIC_SCALING: this is the typical scaling method, which creates and terminates instances to perform scaling operations. 
WAKE_UP_STOPPED_SCALING: this scaling method first tries to start stopped instances. If the number of instances woken up is insufficient, the system creates new instances for scale-out. For scale-in, instances are terminated as in the typical method. You can use the StopAutoScalingInstances API to stop instances in the scaling group. Scale-out operations triggered by alarms will still create new instances.
Default value: CLASSIC_SCALING
                     */
                    std::string m_scalingMode;
                    bool m_scalingModeHasBeenSet;

                    /**
                     * Enable unhealthy instance replacement. If this feature is enabled, AS will replace instances that are found unhealthy in the CLB health check. If this parameter is not specified, the default value `False` will be used.
                     */
                    bool m_replaceLoadBalancerUnhealthy;
                    bool m_replaceLoadBalancerUnhealthyHasBeenSet;

                    /**
                     * Replace mode of unhealthy replacement service. Valid values:
RECREATE: Rebuild an instance to replace the original unhealthy instance.
RESET: Performing a system reinstallation on unhealthy instances to keep information such as data disks, private IP addresses, and instance IDs unchanged. The instance login settings, HostName, enhanced services, and UserData will remain consistent with the current launch configuration.
Default value: RECREATE.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_replaceMode;
                    bool m_replaceModeHasBeenSet;

                    /**
                     * Automatic instance tag update. The default value is false. If this feature is enabled, tags of running instances in a scaling group will be updated as well if the scaling group tags are updated. (This feature takes effect for tag creation and editing but not tag deletion.) The update does not take effect immediately due to certain latency.
                     */
                    bool m_autoUpdateInstanceTags;
                    bool m_autoUpdateInstanceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SERVICESETTINGS_H_
