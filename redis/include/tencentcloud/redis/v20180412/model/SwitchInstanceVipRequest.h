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
                     * 获取Source instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @return SrcInstanceId Source instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置Source instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @param _srcInstanceId Source instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取Target instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @return DstInstanceId Target instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    std::string GetDstInstanceId() const;

                    /**
                     * 设置Target instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @param _dstInstanceId Target instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    void SetDstInstanceId(const std::string& _dstInstanceId);

                    /**
                     * 判断参数 DstInstanceId 是否已赋值
                     * @return DstInstanceId 是否已赋值
                     * 
                     */
                    bool DstInstanceIdHasBeenSet() const;

                    /**
                     * 获取DTS disconnection time between the source instance and target instance. Unit: second. If the DTS disconnection time exceeds TimeDelay, the VIP will not be switched. It is recommended to set an acceptable value based on business needs.
                     * @return TimeDelay DTS disconnection time between the source instance and target instance. Unit: second. If the DTS disconnection time exceeds TimeDelay, the VIP will not be switched. It is recommended to set an acceptable value based on business needs.
                     * 
                     */
                    int64_t GetTimeDelay() const;

                    /**
                     * 设置DTS disconnection time between the source instance and target instance. Unit: second. If the DTS disconnection time exceeds TimeDelay, the VIP will not be switched. It is recommended to set an acceptable value based on business needs.
                     * @param _timeDelay DTS disconnection time between the source instance and target instance. Unit: second. If the DTS disconnection time exceeds TimeDelay, the VIP will not be switched. It is recommended to set an acceptable value based on business needs.
                     * 
                     */
                    void SetTimeDelay(const int64_t& _timeDelay);

                    /**
                     * 判断参数 TimeDelay 是否已赋值
                     * @return TimeDelay 是否已赋值
                     * 
                     */
                    bool TimeDelayHasBeenSet() const;

                    /**
                     * 获取Whether to force a switch in the case of a DTS disconnection.
- 1: Force the switch.
- 0: Do not force the switch.
                     * @return ForceSwitch Whether to force a switch in the case of a DTS disconnection.
- 1: Force the switch.
- 0: Do not force the switch.
                     * 
                     */
                    int64_t GetForceSwitch() const;

                    /**
                     * 设置Whether to force a switch in the case of a DTS disconnection.
- 1: Force the switch.
- 0: Do not force the switch.
                     * @param _forceSwitch Whether to force a switch in the case of a DTS disconnection.
- 1: Force the switch.
- 0: Do not force the switch.
                     * 
                     */
                    void SetForceSwitch(const int64_t& _forceSwitch);

                    /**
                     * 判断参数 ForceSwitch 是否已赋值
                     * @return ForceSwitch 是否已赋值
                     * 
                     */
                    bool ForceSwitchHasBeenSet() const;

                    /**
                     * 获取now: switch now; syncComplete: switch after sync is completed
                     * @return SwitchTime now: switch now; syncComplete: switch after sync is completed
                     * 
                     */
                    std::string GetSwitchTime() const;

                    /**
                     * 设置now: switch now; syncComplete: switch after sync is completed
                     * @param _switchTime now: switch now; syncComplete: switch after sync is completed
                     * 
                     */
                    void SetSwitchTime(const std::string& _switchTime);

                    /**
                     * 判断参数 SwitchTime 是否已赋值
                     * @return SwitchTime 是否已赋值
                     * 
                     */
                    bool SwitchTimeHasBeenSet() const;

                private:

                    /**
                     * Source instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * Target instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     */
                    std::string m_dstInstanceId;
                    bool m_dstInstanceIdHasBeenSet;

                    /**
                     * DTS disconnection time between the source instance and target instance. Unit: second. If the DTS disconnection time exceeds TimeDelay, the VIP will not be switched. It is recommended to set an acceptable value based on business needs.
                     */
                    int64_t m_timeDelay;
                    bool m_timeDelayHasBeenSet;

                    /**
                     * Whether to force a switch in the case of a DTS disconnection.
- 1: Force the switch.
- 0: Do not force the switch.
                     */
                    int64_t m_forceSwitch;
                    bool m_forceSwitchHasBeenSet;

                    /**
                     * now: switch now; syncComplete: switch after sync is completed
                     */
                    std::string m_switchTime;
                    bool m_switchTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_SWITCHINSTANCEVIPREQUEST_H_
