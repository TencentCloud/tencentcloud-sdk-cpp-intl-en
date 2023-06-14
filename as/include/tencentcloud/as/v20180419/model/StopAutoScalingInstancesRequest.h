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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_STOPAUTOSCALINGINSTANCESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_STOPAUTOSCALINGINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * StopAutoScalingInstances request structure.
                */
                class StopAutoScalingInstancesRequest : public AbstractModel
                {
                public:
                    StopAutoScalingInstancesRequest();
                    ~StopAutoScalingInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The scaling group ID.
                     * @return AutoScalingGroupId The scaling group ID.
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置The scaling group ID.
                     * @param _autoScalingGroupId The scaling group ID.
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取The list of the CVM instances you want to shut down.
                     * @return InstanceIds The list of the CVM instances you want to shut down.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置The list of the CVM instances you want to shut down.
                     * @param _instanceIds The list of the CVM instances you want to shut down.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Whether the shutdown instances will be charged. Valid values:  
KEEP_CHARGING: keep charging after shutdown.  
STOP_CHARGING: stop charging after shutdown.
Default value: KEEP_CHARGING.
                     * @return StoppedMode Whether the shutdown instances will be charged. Valid values:  
KEEP_CHARGING: keep charging after shutdown.  
STOP_CHARGING: stop charging after shutdown.
Default value: KEEP_CHARGING.
                     * 
                     */
                    std::string GetStoppedMode() const;

                    /**
                     * 设置Whether the shutdown instances will be charged. Valid values:  
KEEP_CHARGING: keep charging after shutdown.  
STOP_CHARGING: stop charging after shutdown.
Default value: KEEP_CHARGING.
                     * @param _stoppedMode Whether the shutdown instances will be charged. Valid values:  
KEEP_CHARGING: keep charging after shutdown.  
STOP_CHARGING: stop charging after shutdown.
Default value: KEEP_CHARGING.
                     * 
                     */
                    void SetStoppedMode(const std::string& _stoppedMode);

                    /**
                     * 判断参数 StoppedMode 是否已赋值
                     * @return StoppedMode 是否已赋值
                     * 
                     */
                    bool StoppedModeHasBeenSet() const;

                private:

                    /**
                     * The scaling group ID.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * The list of the CVM instances you want to shut down.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Whether the shutdown instances will be charged. Valid values:  
KEEP_CHARGING: keep charging after shutdown.  
STOP_CHARGING: stop charging after shutdown.
Default value: KEEP_CHARGING.
                     */
                    std::string m_stoppedMode;
                    bool m_stoppedModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_STOPAUTOSCALINGINSTANCESREQUEST_H_
