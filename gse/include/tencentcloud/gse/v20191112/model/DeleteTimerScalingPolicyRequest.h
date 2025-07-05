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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DELETETIMERSCALINGPOLICYREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DELETETIMERSCALINGPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DeleteTimerScalingPolicy request structure.
                */
                class DeleteTimerScalingPolicyRequest : public AbstractModel
                {
                public:
                    DeleteTimerScalingPolicyRequest();
                    ~DeleteTimerScalingPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the policy
                     * @return TimerId Unique ID of the policy
                     * 
                     */
                    std::string GetTimerId() const;

                    /**
                     * 设置Unique ID of the policy
                     * @param _timerId Unique ID of the policy
                     * 
                     */
                    void SetTimerId(const std::string& _timerId);

                    /**
                     * 判断参数 TimerId 是否已赋值
                     * @return TimerId 是否已赋值
                     * 
                     */
                    bool TimerIdHasBeenSet() const;

                    /**
                     * 获取ID of the fleet to be bound with the policy
                     * @return FleetId ID of the fleet to be bound with the policy
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置ID of the fleet to be bound with the policy
                     * @param _fleetId ID of the fleet to be bound with the policy
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取Scheduled scaling policy name
                     * @return TimerName Scheduled scaling policy name
                     * 
                     */
                    std::string GetTimerName() const;

                    /**
                     * 设置Scheduled scaling policy name
                     * @param _timerName Scheduled scaling policy name
                     * 
                     */
                    void SetTimerName(const std::string& _timerName);

                    /**
                     * 判断参数 TimerName 是否已赋值
                     * @return TimerName 是否已赋值
                     * 
                     */
                    bool TimerNameHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the policy
                     */
                    std::string m_timerId;
                    bool m_timerIdHasBeenSet;

                    /**
                     * ID of the fleet to be bound with the policy
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * Scheduled scaling policy name
                     */
                    std::string m_timerName;
                    bool m_timerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DELETETIMERSCALINGPOLICYREQUEST_H_
