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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/TargetGroupHealthCheck.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * ModifyTargetGroupAttribute request structure.
                */
                class ModifyTargetGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifyTargetGroupAttributeRequest();
                    ~ModifyTargetGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Target group ID.
                     * @return TargetGroupId Target group ID.
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置Target group ID.
                     * @param _targetGroupId Target group ID.
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取New name of target group.
                     * @return TargetGroupName New name of target group.
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置New name of target group.
                     * @param _targetGroupName New name of target group.
                     * 
                     */
                    void SetTargetGroupName(const std::string& _targetGroupName);

                    /**
                     * 判断参数 TargetGroupName 是否已赋值
                     * @return TargetGroupName 是否已赋值
                     * 
                     */
                    bool TargetGroupNameHasBeenSet() const;

                    /**
                     * 获取Health check details.
                     * @return HealthCheck Health check details.
                     * 
                     */
                    TargetGroupHealthCheck GetHealthCheck() const;

                    /**
                     * 设置Health check details.
                     * @param _healthCheck Health check details.
                     * 
                     */
                    void SetHealthCheck(const TargetGroupHealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取Whether "All Dead, All Alive" is supported.
                     * @return AllDeadToAlive Whether "All Dead, All Alive" is supported.
                     * 
                     */
                    bool GetAllDeadToAlive() const;

                    /**
                     * 设置Whether "All Dead, All Alive" is supported.
                     * @param _allDeadToAlive Whether "All Dead, All Alive" is supported.
                     * 
                     */
                    void SetAllDeadToAlive(const bool& _allDeadToAlive);

                    /**
                     * 判断参数 AllDeadToAlive 是否已赋值
                     * @return AllDeadToAlive 是否已赋值
                     * 
                     */
                    bool AllDeadToAliveHasBeenSet() const;

                    /**
                     * 获取
                     * @return RescheduleUnbindRs 
                     * 
                     */
                    bool GetRescheduleUnbindRs() const;

                    /**
                     * 设置
                     * @param _rescheduleUnbindRs 
                     * 
                     */
                    void SetRescheduleUnbindRs(const bool& _rescheduleUnbindRs);

                    /**
                     * 判断参数 RescheduleUnbindRs 是否已赋值
                     * @return RescheduleUnbindRs 是否已赋值
                     * 
                     */
                    bool RescheduleUnbindRsHasBeenSet() const;

                    /**
                     * 获取
                     * @return RescheduleUnbindRsStartTime 
                     * 
                     */
                    int64_t GetRescheduleUnbindRsStartTime() const;

                    /**
                     * 设置
                     * @param _rescheduleUnbindRsStartTime 
                     * 
                     */
                    void SetRescheduleUnbindRsStartTime(const int64_t& _rescheduleUnbindRsStartTime);

                    /**
                     * 判断参数 RescheduleUnbindRsStartTime 是否已赋值
                     * @return RescheduleUnbindRsStartTime 是否已赋值
                     * 
                     */
                    bool RescheduleUnbindRsStartTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return RescheduleUnhealthy 
                     * 
                     */
                    bool GetRescheduleUnhealthy() const;

                    /**
                     * 设置
                     * @param _rescheduleUnhealthy 
                     * 
                     */
                    void SetRescheduleUnhealthy(const bool& _rescheduleUnhealthy);

                    /**
                     * 判断参数 RescheduleUnhealthy 是否已赋值
                     * @return RescheduleUnhealthy 是否已赋值
                     * 
                     */
                    bool RescheduleUnhealthyHasBeenSet() const;

                    /**
                     * 获取
                     * @return RescheduleUnhealthyStartTime 
                     * 
                     */
                    int64_t GetRescheduleUnhealthyStartTime() const;

                    /**
                     * 设置
                     * @param _rescheduleUnhealthyStartTime 
                     * 
                     */
                    void SetRescheduleUnhealthyStartTime(const int64_t& _rescheduleUnhealthyStartTime);

                    /**
                     * 判断参数 RescheduleUnhealthyStartTime 是否已赋值
                     * @return RescheduleUnhealthyStartTime 是否已赋值
                     * 
                     */
                    bool RescheduleUnhealthyStartTimeHasBeenSet() const;

                private:

                    /**
                     * Target group ID.
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * New name of target group.
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * Health check details.
                     */
                    TargetGroupHealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Whether "All Dead, All Alive" is supported.
                     */
                    bool m_allDeadToAlive;
                    bool m_allDeadToAliveHasBeenSet;

                    /**
                     * 
                     */
                    bool m_rescheduleUnbindRs;
                    bool m_rescheduleUnbindRsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_rescheduleUnbindRsStartTime;
                    bool m_rescheduleUnbindRsStartTimeHasBeenSet;

                    /**
                     * 
                     */
                    bool m_rescheduleUnhealthy;
                    bool m_rescheduleUnhealthyHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_rescheduleUnhealthyStartTime;
                    bool m_rescheduleUnhealthyStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_
