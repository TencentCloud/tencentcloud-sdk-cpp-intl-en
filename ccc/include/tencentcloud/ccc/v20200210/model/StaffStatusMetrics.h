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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUSMETRICS_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUSMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/StaffStatusExtra.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Agent status information.
                */
                class StaffStatusMetrics : public AbstractModel
                {
                public:
                    StaffStatusMetrics();
                    ~StaffStatusMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent email.
                     * @return Email Agent email.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Agent email.
                     * @param _email Agent email.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Agent status: Free for Available | busy for Busy | rest for Break | notReady for Not Ready | afterCallWork for After Call Work | offline for Offline.
                     * @return Status Agent status: Free for Available | busy for Busy | rest for Break | notReady for Not Ready | afterCallWork for After Call Work | offline for Offline.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Agent status: Free for Available | busy for Busy | rest for Break | notReady for Not Ready | afterCallWork for After Call Work | offline for Offline.
                     * @param _status Agent status: Free for Available | busy for Busy | rest for Break | notReady for Not Ready | afterCallWork for After Call Work | offline for Offline.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Supplementary agent status information.
                     * @return StatusExtra Supplementary agent status information.
                     * 
                     */
                    StaffStatusExtra GetStatusExtra() const;

                    /**
                     * 设置Supplementary agent status information.
                     * @param _statusExtra Supplementary agent status information.
                     * 
                     */
                    void SetStatusExtra(const StaffStatusExtra& _statusExtra);

                    /**
                     * 判断参数 StatusExtra 是否已赋值
                     * @return StatusExtra 是否已赋值
                     * 
                     */
                    bool StatusExtraHasBeenSet() const;

                    /**
                     * 获取Total Online duration of the day.
                     * @return OnlineDuration Total Online duration of the day.
                     * 
                     */
                    int64_t GetOnlineDuration() const;

                    /**
                     * 设置Total Online duration of the day.
                     * @param _onlineDuration Total Online duration of the day.
                     * 
                     */
                    void SetOnlineDuration(const int64_t& _onlineDuration);

                    /**
                     * 判断参数 OnlineDuration 是否已赋值
                     * @return OnlineDuration 是否已赋值
                     * 
                     */
                    bool OnlineDurationHasBeenSet() const;

                    /**
                     * 获取Total Available duration of the day.
                     * @return FreeDuration Total Available duration of the day.
                     * 
                     */
                    int64_t GetFreeDuration() const;

                    /**
                     * 设置Total Available duration of the day.
                     * @param _freeDuration Total Available duration of the day.
                     * 
                     */
                    void SetFreeDuration(const int64_t& _freeDuration);

                    /**
                     * 判断参数 FreeDuration 是否已赋值
                     * @return FreeDuration 是否已赋值
                     * 
                     */
                    bool FreeDurationHasBeenSet() const;

                    /**
                     * 获取Total Busy duration of the day.
                     * @return BusyDuration Total Busy duration of the day.
                     * 
                     */
                    int64_t GetBusyDuration() const;

                    /**
                     * 设置Total Busy duration of the day.
                     * @param _busyDuration Total Busy duration of the day.
                     * 
                     */
                    void SetBusyDuration(const int64_t& _busyDuration);

                    /**
                     * 判断参数 BusyDuration 是否已赋值
                     * @return BusyDuration 是否已赋值
                     * 
                     */
                    bool BusyDurationHasBeenSet() const;

                    /**
                     * 获取Total Not Ready status duration of the day.
                     * @return NotReadyDuration Total Not Ready status duration of the day.
                     * 
                     */
                    int64_t GetNotReadyDuration() const;

                    /**
                     * 设置Total Not Ready status duration of the day.
                     * @param _notReadyDuration Total Not Ready status duration of the day.
                     * 
                     */
                    void SetNotReadyDuration(const int64_t& _notReadyDuration);

                    /**
                     * 判断参数 NotReadyDuration 是否已赋值
                     * @return NotReadyDuration 是否已赋值
                     * 
                     */
                    bool NotReadyDurationHasBeenSet() const;

                    /**
                     * 获取Total Break duration of the day.
                     * @return RestDuration Total Break duration of the day.
                     * 
                     */
                    int64_t GetRestDuration() const;

                    /**
                     * 设置Total Break duration of the day.
                     * @param _restDuration Total Break duration of the day.
                     * 
                     */
                    void SetRestDuration(const int64_t& _restDuration);

                    /**
                     * 判断参数 RestDuration 是否已赋值
                     * @return RestDuration 是否已赋值
                     * 
                     */
                    bool RestDurationHasBeenSet() const;

                    /**
                     * 获取Total After Call Work duration of the day.
                     * @return AfterCallWorkDuration Total After Call Work duration of the day.
                     * 
                     */
                    int64_t GetAfterCallWorkDuration() const;

                    /**
                     * 设置Total After Call Work duration of the day.
                     * @param _afterCallWorkDuration Total After Call Work duration of the day.
                     * 
                     */
                    void SetAfterCallWorkDuration(const int64_t& _afterCallWorkDuration);

                    /**
                     * 判断参数 AfterCallWorkDuration 是否已赋值
                     * @return AfterCallWorkDuration 是否已赋值
                     * 
                     */
                    bool AfterCallWorkDurationHasBeenSet() const;

                    /**
                     * 获取Reason for Break.
                     * @return Reason Reason for Break.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reason for Break.
                     * @param _reason Reason for Break.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Whether to reserve Break status.
                     * @return ReserveRest Whether to reserve Break status.
                     * 
                     */
                    bool GetReserveRest() const;

                    /**
                     * 设置Whether to reserve Break status.
                     * @param _reserveRest Whether to reserve Break status.
                     * 
                     */
                    void SetReserveRest(const bool& _reserveRest);

                    /**
                     * 判断参数 ReserveRest 是否已赋值
                     * @return ReserveRest 是否已赋值
                     * 
                     */
                    bool ReserveRestHasBeenSet() const;

                    /**
                     * 获取Whether to reserve Not Ready status.
                     * @return ReserveNotReady Whether to reserve Not Ready status.
                     * 
                     */
                    bool GetReserveNotReady() const;

                    /**
                     * 设置Whether to reserve Not Ready status.
                     * @param _reserveNotReady Whether to reserve Not Ready status.
                     * 
                     */
                    void SetReserveNotReady(const bool& _reserveNotReady);

                    /**
                     * 判断参数 ReserveNotReady 是否已赋值
                     * @return ReserveNotReady 是否已赋值
                     * 
                     */
                    bool ReserveNotReadyHasBeenSet() const;

                    /**
                     * 获取Cell phone answering pattern: 0 - Off | 1 - Only when Offline | 2 - Always.
                     * @return UseMobileAccept Cell phone answering pattern: 0 - Off | 1 - Only when Offline | 2 - Always.
                     * 
                     */
                    int64_t GetUseMobileAccept() const;

                    /**
                     * 设置Cell phone answering pattern: 0 - Off | 1 - Only when Offline | 2 - Always.
                     * @param _useMobileAccept Cell phone answering pattern: 0 - Off | 1 - Only when Offline | 2 - Always.
                     * 
                     */
                    void SetUseMobileAccept(const int64_t& _useMobileAccept);

                    /**
                     * 判断参数 UseMobileAccept 是否已赋值
                     * @return UseMobileAccept 是否已赋值
                     * 
                     */
                    bool UseMobileAcceptHasBeenSet() const;

                    /**
                     * 获取Cell phone outbound call switch.
                     * @return UseMobileCallOut Cell phone outbound call switch.
                     * 
                     */
                    bool GetUseMobileCallOut() const;

                    /**
                     * 设置Cell phone outbound call switch.
                     * @param _useMobileCallOut Cell phone outbound call switch.
                     * 
                     */
                    void SetUseMobileCallOut(const bool& _useMobileCallOut);

                    /**
                     * 判断参数 UseMobileCallOut 是否已赋值
                     * @return UseMobileCallOut 是否已赋值
                     * 
                     */
                    bool UseMobileCallOutHasBeenSet() const;

                    /**
                     * 获取Last online timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastOnlineTimestamp Last online timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLastOnlineTimestamp() const;

                    /**
                     * 设置Last online timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastOnlineTimestamp Last online timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastOnlineTimestamp(const int64_t& _lastOnlineTimestamp);

                    /**
                     * 判断参数 LastOnlineTimestamp 是否已赋值
                     * @return LastOnlineTimestamp 是否已赋值
                     * 
                     */
                    bool LastOnlineTimestampHasBeenSet() const;

                    /**
                     * 获取Last status timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastStatusTimestamp Last status timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLastStatusTimestamp() const;

                    /**
                     * 设置Last status timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastStatusTimestamp Last status timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastStatusTimestamp(const int64_t& _lastStatusTimestamp);

                    /**
                     * 判断参数 LastStatusTimestamp 是否已赋值
                     * @return LastStatusTimestamp 是否已赋值
                     * 
                     */
                    bool LastStatusTimestampHasBeenSet() const;

                private:

                    /**
                     * Agent email.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Agent status: Free for Available | busy for Busy | rest for Break | notReady for Not Ready | afterCallWork for After Call Work | offline for Offline.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Supplementary agent status information.
                     */
                    StaffStatusExtra m_statusExtra;
                    bool m_statusExtraHasBeenSet;

                    /**
                     * Total Online duration of the day.
                     */
                    int64_t m_onlineDuration;
                    bool m_onlineDurationHasBeenSet;

                    /**
                     * Total Available duration of the day.
                     */
                    int64_t m_freeDuration;
                    bool m_freeDurationHasBeenSet;

                    /**
                     * Total Busy duration of the day.
                     */
                    int64_t m_busyDuration;
                    bool m_busyDurationHasBeenSet;

                    /**
                     * Total Not Ready status duration of the day.
                     */
                    int64_t m_notReadyDuration;
                    bool m_notReadyDurationHasBeenSet;

                    /**
                     * Total Break duration of the day.
                     */
                    int64_t m_restDuration;
                    bool m_restDurationHasBeenSet;

                    /**
                     * Total After Call Work duration of the day.
                     */
                    int64_t m_afterCallWorkDuration;
                    bool m_afterCallWorkDurationHasBeenSet;

                    /**
                     * Reason for Break.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Whether to reserve Break status.
                     */
                    bool m_reserveRest;
                    bool m_reserveRestHasBeenSet;

                    /**
                     * Whether to reserve Not Ready status.
                     */
                    bool m_reserveNotReady;
                    bool m_reserveNotReadyHasBeenSet;

                    /**
                     * Cell phone answering pattern: 0 - Off | 1 - Only when Offline | 2 - Always.
                     */
                    int64_t m_useMobileAccept;
                    bool m_useMobileAcceptHasBeenSet;

                    /**
                     * Cell phone outbound call switch.
                     */
                    bool m_useMobileCallOut;
                    bool m_useMobileCallOutHasBeenSet;

                    /**
                     * Last online timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_lastOnlineTimestamp;
                    bool m_lastOnlineTimestampHasBeenSet;

                    /**
                     * Last status timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_lastStatusTimestamp;
                    bool m_lastStatusTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUSMETRICS_H_
