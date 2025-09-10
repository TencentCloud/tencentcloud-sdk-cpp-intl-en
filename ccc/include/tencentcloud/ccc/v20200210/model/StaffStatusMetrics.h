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
#include <tencentcloud/ccc/v20200210/model/ClientInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Agent status-related information
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
                     * 获取Agent status free available | busy busy | rest on break | notready not ready | aftercallwork post-call adjustment | offline offline.
                     * @return Status Agent status free available | busy busy | rest on break | notready not ready | aftercallwork post-call adjustment | offline offline.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Agent status free available | busy busy | rest on break | notready not ready | aftercallwork post-call adjustment | offline offline.
                     * @param _status Agent status free available | busy busy | rest on break | notready not ready | aftercallwork post-call adjustment | offline offline.
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
                     * 获取Supplementary information on agent status.
                     * @return StatusExtra Supplementary information on agent status.
                     * 
                     */
                    StaffStatusExtra GetStatusExtra() const;

                    /**
                     * 设置Supplementary information on agent status.
                     * @param _statusExtra Supplementary information on agent status.
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
                     * 获取Total online duration of the day.
                     * @return OnlineDuration Total online duration of the day.
                     * 
                     */
                    int64_t GetOnlineDuration() const;

                    /**
                     * 设置Total online duration of the day.
                     * @param _onlineDuration Total online duration of the day.
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
                     * 获取Total available duration of the day.
                     * @return FreeDuration Total available duration of the day.
                     * 
                     */
                    int64_t GetFreeDuration() const;

                    /**
                     * 设置Total available duration of the day.
                     * @param _freeDuration Total available duration of the day.
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
                     * 获取Total busy duration of the day.
                     * @return BusyDuration Total busy duration of the day.
                     * 
                     */
                    int64_t GetBusyDuration() const;

                    /**
                     * 设置Total busy duration of the day.
                     * @param _busyDuration Total busy duration of the day.
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
                     * 获取Total not ready status duration of the day.
                     * @return NotReadyDuration Total not ready status duration of the day.
                     * 
                     */
                    int64_t GetNotReadyDuration() const;

                    /**
                     * 设置Total not ready status duration of the day.
                     * @param _notReadyDuration Total not ready status duration of the day.
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
                     * 获取Total break duration of the day.
                     * @return RestDuration Total break duration of the day.
                     * 
                     */
                    int64_t GetRestDuration() const;

                    /**
                     * 设置Total break duration of the day.
                     * @param _restDuration Total break duration of the day.
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
                     * 获取Adjust the total duration of after-call work for the day.
                     * @return AfterCallWorkDuration Adjust the total duration of after-call work for the day.
                     * 
                     */
                    int64_t GetAfterCallWorkDuration() const;

                    /**
                     * 设置Adjust the total duration of after-call work for the day.
                     * @param _afterCallWorkDuration Adjust the total duration of after-call work for the day.
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
                     * 获取Reason for break.
                     * @return Reason Reason for break.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reason for break.
                     * @param _reason Reason for break.
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
                     * 获取Whether to reserve break status.
                     * @return ReserveRest Whether to reserve break status.
                     * 
                     */
                    bool GetReserveRest() const;

                    /**
                     * 设置Whether to reserve break status.
                     * @param _reserveRest Whether to reserve break status.
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
                     * 获取Whether to reserve not ready status.
                     * @return ReserveNotReady Whether to reserve not ready status.
                     * 
                     */
                    bool GetReserveNotReady() const;

                    /**
                     * 设置Whether to reserve not ready status.
                     * @param _reserveNotReady Whether to reserve not ready status.
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
                     * 获取Cell phone answering pattern: 0 - off | 1 - only when offline | 2 - always.
                     * @return UseMobileAccept Cell phone answering pattern: 0 - off | 1 - only when offline | 2 - always.
                     * 
                     */
                    int64_t GetUseMobileAccept() const;

                    /**
                     * 设置Cell phone answering pattern: 0 - off | 1 - only when offline | 2 - always.
                     * @param _useMobileAccept Cell phone answering pattern: 0 - off | 1 - only when offline | 2 - always.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastOnlineTimestamp Last online timestamp.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLastOnlineTimestamp() const;

                    /**
                     * 设置Last online timestamp.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _lastOnlineTimestamp Last online timestamp.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastStatusTimestamp Last status timestamp.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLastStatusTimestamp() const;

                    /**
                     * 设置Last status timestamp.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _lastStatusTimestamp Last status timestamp.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastStatusTimestamp(const int64_t& _lastStatusTimestamp);

                    /**
                     * 判断参数 LastStatusTimestamp 是否已赋值
                     * @return LastStatusTimestamp 是否已赋值
                     * 
                     */
                    bool LastStatusTimestampHasBeenSet() const;

                    /**
                     * 获取Specifies the endpoint information for customer service logon.
                     * @return ClientInfo Specifies the endpoint information for customer service logon.
                     * 
                     */
                    std::vector<ClientInfo> GetClientInfo() const;

                    /**
                     * 设置Specifies the endpoint information for customer service logon.
                     * @param _clientInfo Specifies the endpoint information for customer service logon.
                     * 
                     */
                    void SetClientInfo(const std::vector<ClientInfo>& _clientInfo);

                    /**
                     * 判断参数 ClientInfo 是否已赋值
                     * @return ClientInfo 是否已赋值
                     * 
                     */
                    bool ClientInfoHasBeenSet() const;

                private:

                    /**
                     * Agent email.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Agent status free available | busy busy | rest on break | notready not ready | aftercallwork post-call adjustment | offline offline.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Supplementary information on agent status.
                     */
                    StaffStatusExtra m_statusExtra;
                    bool m_statusExtraHasBeenSet;

                    /**
                     * Total online duration of the day.
                     */
                    int64_t m_onlineDuration;
                    bool m_onlineDurationHasBeenSet;

                    /**
                     * Total available duration of the day.
                     */
                    int64_t m_freeDuration;
                    bool m_freeDurationHasBeenSet;

                    /**
                     * Total busy duration of the day.
                     */
                    int64_t m_busyDuration;
                    bool m_busyDurationHasBeenSet;

                    /**
                     * Total not ready status duration of the day.
                     */
                    int64_t m_notReadyDuration;
                    bool m_notReadyDurationHasBeenSet;

                    /**
                     * Total break duration of the day.
                     */
                    int64_t m_restDuration;
                    bool m_restDurationHasBeenSet;

                    /**
                     * Adjust the total duration of after-call work for the day.
                     */
                    int64_t m_afterCallWorkDuration;
                    bool m_afterCallWorkDurationHasBeenSet;

                    /**
                     * Reason for break.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Whether to reserve break status.
                     */
                    bool m_reserveRest;
                    bool m_reserveRestHasBeenSet;

                    /**
                     * Whether to reserve not ready status.
                     */
                    bool m_reserveNotReady;
                    bool m_reserveNotReadyHasBeenSet;

                    /**
                     * Cell phone answering pattern: 0 - off | 1 - only when offline | 2 - always.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_lastOnlineTimestamp;
                    bool m_lastOnlineTimestampHasBeenSet;

                    /**
                     * Last status timestamp.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_lastStatusTimestamp;
                    bool m_lastStatusTimestampHasBeenSet;

                    /**
                     * Specifies the endpoint information for customer service logon.
                     */
                    std::vector<ClientInfo> m_clientInfo;
                    bool m_clientInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUSMETRICS_H_
