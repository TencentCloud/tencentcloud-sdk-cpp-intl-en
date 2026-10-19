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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYALARMRISKSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYALARMRISKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosAlarmRiskIdInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyAlarmRiskStatus request structure.
                */
                class ModifyAlarmRiskStatusRequest : public AbstractModel
                {
                public:
                    ModifyAlarmRiskStatusRequest();
                    ~ModifyAlarmRiskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm or risk id
                     * @return AlarmRiskIdSet Alarm or risk id
                     * 
                     */
                    std::vector<CosAlarmRiskIdInfo> GetAlarmRiskIdSet() const;

                    /**
                     * 设置Alarm or risk id
                     * @param _alarmRiskIdSet Alarm or risk id
                     * 
                     */
                    void SetAlarmRiskIdSet(const std::vector<CosAlarmRiskIdInfo>& _alarmRiskIdSet);

                    /**
                     * 判断参数 AlarmRiskIdSet 是否已赋值
                     * @return AlarmRiskIdSet 是否已赋值
                     * 
                     */
                    bool AlarmRiskIdSetHasBeenSet() const;

                    /**
                     * 获取Risk or alarm status. 1: alarm, 2: risk
                     * @return AlarmRiskType Risk or alarm status. 1: alarm, 2: risk
                     * 
                     */
                    int64_t GetAlarmRiskType() const;

                    /**
                     * 设置Risk or alarm status. 1: alarm, 2: risk
                     * @param _alarmRiskType Risk or alarm status. 1: alarm, 2: risk
                     * 
                     */
                    void SetAlarmRiskType(const int64_t& _alarmRiskType);

                    /**
                     * 判断参数 AlarmRiskType 是否已赋值
                     * @return AlarmRiskType 是否已赋值
                     * 
                     */
                    bool AlarmRiskTypeHasBeenSet() const;

                    /**
                     * 获取Handling status
                     * @return HandleStatus Handling status
                     * 
                     */
                    int64_t GetHandleStatus() const;

                    /**
                     * 设置Handling status
                     * @param _handleStatus Handling status
                     * 
                     */
                    void SetHandleStatus(const int64_t& _handleStatus);

                    /**
                     * 判断参数 HandleStatus 是否已赋值
                     * @return HandleStatus 是否已赋值
                     * 
                     */
                    bool HandleStatusHasBeenSet() const;

                private:

                    /**
                     * Alarm or risk id
                     */
                    std::vector<CosAlarmRiskIdInfo> m_alarmRiskIdSet;
                    bool m_alarmRiskIdSetHasBeenSet;

                    /**
                     * Risk or alarm status. 1: alarm, 2: risk
                     */
                    int64_t m_alarmRiskType;
                    bool m_alarmRiskTypeHasBeenSet;

                    /**
                     * Handling status
                     */
                    int64_t m_handleStatus;
                    bool m_handleStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYALARMRISKSTATUSREQUEST_H_
