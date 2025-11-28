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
                     * 获取Replacement mode of the unhealthy replacement service. valid values:.
RECREATE: rebuild an instance to replace the unhealthy instance.
RESET: performs a system reinstallation on unhealthy instances while keeping the data disk, private IP address, instance id, and other information unchanged. the instance login settings, hostname, enhanced services, and UserData remain consistent with the current launch configuration.
Default value: RECREATE.
                     * @return ReplaceMode Replacement mode of the unhealthy replacement service. valid values:.
RECREATE: rebuild an instance to replace the unhealthy instance.
RESET: performs a system reinstallation on unhealthy instances while keeping the data disk, private IP address, instance id, and other information unchanged. the instance login settings, hostname, enhanced services, and UserData remain consistent with the current launch configuration.
Default value: RECREATE.
                     * 
                     */
                    std::string GetReplaceMode() const;

                    /**
                     * 设置Replacement mode of the unhealthy replacement service. valid values:.
RECREATE: rebuild an instance to replace the unhealthy instance.
RESET: performs a system reinstallation on unhealthy instances while keeping the data disk, private IP address, instance id, and other information unchanged. the instance login settings, hostname, enhanced services, and UserData remain consistent with the current launch configuration.
Default value: RECREATE.
                     * @param _replaceMode Replacement mode of the unhealthy replacement service. valid values:.
RECREATE: rebuild an instance to replace the unhealthy instance.
RESET: performs a system reinstallation on unhealthy instances while keeping the data disk, private IP address, instance id, and other information unchanged. the instance login settings, hostname, enhanced services, and UserData remain consistent with the current launch configuration.
Default value: RECREATE.
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
                     * 获取Automatic instance Tag update. the default value is False. if this feature is enabled, tags of running instances in a scaling group will be updated as well if the scaling group tags are updated. (this feature takes effect for Tag creation and editing but not Tag deletion.) the update does not take effect immediately due to certain latency.
                     * @return AutoUpdateInstanceTags Automatic instance Tag update. the default value is False. if this feature is enabled, tags of running instances in a scaling group will be updated as well if the scaling group tags are updated. (this feature takes effect for Tag creation and editing but not Tag deletion.) the update does not take effect immediately due to certain latency.
                     * 
                     */
                    bool GetAutoUpdateInstanceTags() const;

                    /**
                     * 设置Automatic instance Tag update. the default value is False. if this feature is enabled, tags of running instances in a scaling group will be updated as well if the scaling group tags are updated. (this feature takes effect for Tag creation and editing but not Tag deletion.) the update does not take effect immediately due to certain latency.
                     * @param _autoUpdateInstanceTags Automatic instance Tag update. the default value is False. if this feature is enabled, tags of running instances in a scaling group will be updated as well if the scaling group tags are updated. (this feature takes effect for Tag creation and editing but not Tag deletion.) the update does not take effect immediately due to certain latency.
                     * 
                     */
                    void SetAutoUpdateInstanceTags(const bool& _autoUpdateInstanceTags);

                    /**
                     * 判断参数 AutoUpdateInstanceTags 是否已赋值
                     * @return AutoUpdateInstanceTags 是否已赋值
                     * 
                     */
                    bool AutoUpdateInstanceTagsHasBeenSet() const;

                    /**
                     * 获取Expected number of instances sync minimum and maximum value. default value is False. this parameter only takes effect in scenarios where the expected number is not passed in to modify scaling group api.
<Li>True: when modifying the maximum or minimum value, if a conflict exists with the current expected value, synchronously adjust the expected value. for example, if the input minimum value is 2 while the current expected value is 1, the expected value will be synchronously adjusted to 2.</li>.
<Li>False: if a conflict exists between the current expected value when modifying the maximum or minimum value, an error message indicates it is not allowed to be modified.</li>.
                     * @return DesiredCapacitySyncWithMaxMinSize Expected number of instances sync minimum and maximum value. default value is False. this parameter only takes effect in scenarios where the expected number is not passed in to modify scaling group api.
<Li>True: when modifying the maximum or minimum value, if a conflict exists with the current expected value, synchronously adjust the expected value. for example, if the input minimum value is 2 while the current expected value is 1, the expected value will be synchronously adjusted to 2.</li>.
<Li>False: if a conflict exists between the current expected value when modifying the maximum or minimum value, an error message indicates it is not allowed to be modified.</li>.
                     * 
                     */
                    bool GetDesiredCapacitySyncWithMaxMinSize() const;

                    /**
                     * 设置Expected number of instances sync minimum and maximum value. default value is False. this parameter only takes effect in scenarios where the expected number is not passed in to modify scaling group api.
<Li>True: when modifying the maximum or minimum value, if a conflict exists with the current expected value, synchronously adjust the expected value. for example, if the input minimum value is 2 while the current expected value is 1, the expected value will be synchronously adjusted to 2.</li>.
<Li>False: if a conflict exists between the current expected value when modifying the maximum or minimum value, an error message indicates it is not allowed to be modified.</li>.
                     * @param _desiredCapacitySyncWithMaxMinSize Expected number of instances sync minimum and maximum value. default value is False. this parameter only takes effect in scenarios where the expected number is not passed in to modify scaling group api.
<Li>True: when modifying the maximum or minimum value, if a conflict exists with the current expected value, synchronously adjust the expected value. for example, if the input minimum value is 2 while the current expected value is 1, the expected value will be synchronously adjusted to 2.</li>.
<Li>False: if a conflict exists between the current expected value when modifying the maximum or minimum value, an error message indicates it is not allowed to be modified.</li>.
                     * 
                     */
                    void SetDesiredCapacitySyncWithMaxMinSize(const bool& _desiredCapacitySyncWithMaxMinSize);

                    /**
                     * 判断参数 DesiredCapacitySyncWithMaxMinSize 是否已赋值
                     * @return DesiredCapacitySyncWithMaxMinSize 是否已赋值
                     * 
                     */
                    bool DesiredCapacitySyncWithMaxMinSizeHasBeenSet() const;

                    /**
                     * 获取Scaling in unhealthy instances first. If enabled, preferentially selects unhealthy instances during scale in. Default value: False.
                     * @return PriorityScaleInUnhealthy Scaling in unhealthy instances first. If enabled, preferentially selects unhealthy instances during scale in. Default value: False.
                     * 
                     */
                    bool GetPriorityScaleInUnhealthy() const;

                    /**
                     * 设置Scaling in unhealthy instances first. If enabled, preferentially selects unhealthy instances during scale in. Default value: False.
                     * @param _priorityScaleInUnhealthy Scaling in unhealthy instances first. If enabled, preferentially selects unhealthy instances during scale in. Default value: False.
                     * 
                     */
                    void SetPriorityScaleInUnhealthy(const bool& _priorityScaleInUnhealthy);

                    /**
                     * 判断参数 PriorityScaleInUnhealthy 是否已赋值
                     * @return PriorityScaleInUnhealthy 是否已赋值
                     * 
                     */
                    bool PriorityScaleInUnhealthyHasBeenSet() const;

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
                     * Replacement mode of the unhealthy replacement service. valid values:.
RECREATE: rebuild an instance to replace the unhealthy instance.
RESET: performs a system reinstallation on unhealthy instances while keeping the data disk, private IP address, instance id, and other information unchanged. the instance login settings, hostname, enhanced services, and UserData remain consistent with the current launch configuration.
Default value: RECREATE.
                     */
                    std::string m_replaceMode;
                    bool m_replaceModeHasBeenSet;

                    /**
                     * Automatic instance Tag update. the default value is False. if this feature is enabled, tags of running instances in a scaling group will be updated as well if the scaling group tags are updated. (this feature takes effect for Tag creation and editing but not Tag deletion.) the update does not take effect immediately due to certain latency.
                     */
                    bool m_autoUpdateInstanceTags;
                    bool m_autoUpdateInstanceTagsHasBeenSet;

                    /**
                     * Expected number of instances sync minimum and maximum value. default value is False. this parameter only takes effect in scenarios where the expected number is not passed in to modify scaling group api.
<Li>True: when modifying the maximum or minimum value, if a conflict exists with the current expected value, synchronously adjust the expected value. for example, if the input minimum value is 2 while the current expected value is 1, the expected value will be synchronously adjusted to 2.</li>.
<Li>False: if a conflict exists between the current expected value when modifying the maximum or minimum value, an error message indicates it is not allowed to be modified.</li>.
                     */
                    bool m_desiredCapacitySyncWithMaxMinSize;
                    bool m_desiredCapacitySyncWithMaxMinSizeHasBeenSet;

                    /**
                     * Scaling in unhealthy instances first. If enabled, preferentially selects unhealthy instances during scale in. Default value: False.
                     */
                    bool m_priorityScaleInUnhealthy;
                    bool m_priorityScaleInUnhealthyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SERVICESETTINGS_H_
