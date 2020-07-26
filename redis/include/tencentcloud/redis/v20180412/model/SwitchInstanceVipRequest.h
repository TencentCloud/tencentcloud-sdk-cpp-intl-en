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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_SWITCHINSTANCEVIPREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_SWITCHINSTANCEVIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * SwitchInstanceVip request structure.
                */
                class SwitchInstanceVipRequest : public AbstractModel
                {
                public:
                    SwitchInstanceVipRequest();
                    ~SwitchInstanceVipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Source instance ID.
                     * @return SrcInstanceId Source instance ID.
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置Source instance ID.
                     * @param SrcInstanceId Source instance ID.
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取Target instance ID.
                     * @return DstInstanceId Target instance ID.
                     */
                    std::string GetDstInstanceId() const;

                    /**
                     * 设置Target instance ID.
                     * @param DstInstanceId Target instance ID.
                     */
                    void SetDstInstanceId(const std::string& _dstInstanceId);

                    /**
                     * 判断参数 DstInstanceId 是否已赋值
                     * @return DstInstanceId 是否已赋值
                     */
                    bool DstInstanceIdHasBeenSet() const;

                    /**
                     * 获取The time that lapses in seconds since DTS is disconnected between the source instance and the target instance. If the DTS disconnection time period is greater than `TimeDelay`, the VIP will not be switched. We recommend setting an acceptable value based on the actual business conditions.
                     * @return TimeDelay The time that lapses in seconds since DTS is disconnected between the source instance and the target instance. If the DTS disconnection time period is greater than `TimeDelay`, the VIP will not be switched. We recommend setting an acceptable value based on the actual business conditions.
                     */
                    int64_t GetTimeDelay() const;

                    /**
                     * 设置The time that lapses in seconds since DTS is disconnected between the source instance and the target instance. If the DTS disconnection time period is greater than `TimeDelay`, the VIP will not be switched. We recommend setting an acceptable value based on the actual business conditions.
                     * @param TimeDelay The time that lapses in seconds since DTS is disconnected between the source instance and the target instance. If the DTS disconnection time period is greater than `TimeDelay`, the VIP will not be switched. We recommend setting an acceptable value based on the actual business conditions.
                     */
                    void SetTimeDelay(const int64_t& _timeDelay);

                    /**
                     * 判断参数 TimeDelay 是否已赋值
                     * @return TimeDelay 是否已赋值
                     */
                    bool TimeDelayHasBeenSet() const;

                    /**
                     * 获取Whether to force the switch when DTS is disconnected. Valid values: 1 (yes), 0 (no).
                     * @return ForceSwitch Whether to force the switch when DTS is disconnected. Valid values: 1 (yes), 0 (no).
                     */
                    int64_t GetForceSwitch() const;

                    /**
                     * 设置Whether to force the switch when DTS is disconnected. Valid values: 1 (yes), 0 (no).
                     * @param ForceSwitch Whether to force the switch when DTS is disconnected. Valid values: 1 (yes), 0 (no).
                     */
                    void SetForceSwitch(const int64_t& _forceSwitch);

                    /**
                     * 判断参数 ForceSwitch 是否已赋值
                     * @return ForceSwitch 是否已赋值
                     */
                    bool ForceSwitchHasBeenSet() const;

                    /**
                     * 获取Valid values: now (switch now), syncComplete (switch after sync is completed).
                     * @return SwitchTime Valid values: now (switch now), syncComplete (switch after sync is completed).
                     */
                    std::string GetSwitchTime() const;

                    /**
                     * 设置Valid values: now (switch now), syncComplete (switch after sync is completed).
                     * @param SwitchTime Valid values: now (switch now), syncComplete (switch after sync is completed).
                     */
                    void SetSwitchTime(const std::string& _switchTime);

                    /**
                     * 判断参数 SwitchTime 是否已赋值
                     * @return SwitchTime 是否已赋值
                     */
                    bool SwitchTimeHasBeenSet() const;

                private:

                    /**
                     * Source instance ID.
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * Target instance ID.
                     */
                    std::string m_dstInstanceId;
                    bool m_dstInstanceIdHasBeenSet;

                    /**
                     * The time that lapses in seconds since DTS is disconnected between the source instance and the target instance. If the DTS disconnection time period is greater than `TimeDelay`, the VIP will not be switched. We recommend setting an acceptable value based on the actual business conditions.
                     */
                    int64_t m_timeDelay;
                    bool m_timeDelayHasBeenSet;

                    /**
                     * Whether to force the switch when DTS is disconnected. Valid values: 1 (yes), 0 (no).
                     */
                    int64_t m_forceSwitch;
                    bool m_forceSwitchHasBeenSet;

                    /**
                     * Valid values: now (switch now), syncComplete (switch after sync is completed).
                     */
                    std::string m_switchTime;
                    bool m_switchTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_SWITCHINSTANCEVIPREQUEST_H_
