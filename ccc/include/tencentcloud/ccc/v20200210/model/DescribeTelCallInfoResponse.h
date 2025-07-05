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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCALLINFORESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCALLINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeTelCallInfo response structure.
                */
                class DescribeTelCallInfoResponse : public AbstractModel
                {
                public:
                    DescribeTelCallInfoResponse();
                    ~DescribeTelCallInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of minutes consumed by outbound package.
                     * @return TelCallOutCount Number of minutes consumed by outbound package.
                     * 
                     */
                    int64_t GetTelCallOutCount() const;

                    /**
                     * 判断参数 TelCallOutCount 是否已赋值
                     * @return TelCallOutCount 是否已赋值
                     * 
                     */
                    bool TelCallOutCountHasBeenSet() const;

                    /**
                     * 获取Number of minutes consumed by inbound package.
                     * @return TelCallInCount Number of minutes consumed by inbound package.
                     * 
                     */
                    int64_t GetTelCallInCount() const;

                    /**
                     * 判断参数 TelCallInCount 是否已赋值
                     * @return TelCallInCount 是否已赋值
                     * 
                     */
                    bool TelCallInCountHasBeenSet() const;

                    /**
                     * 获取Number of agent usage statistics.
                     * @return SeatUsedCount Number of agent usage statistics.
                     * 
                     */
                    int64_t GetSeatUsedCount() const;

                    /**
                     * 判断参数 SeatUsedCount 是否已赋值
                     * @return SeatUsedCount 是否已赋值
                     * 
                     */
                    bool SeatUsedCountHasBeenSet() const;

                    /**
                     * 获取Number of minutes consumed by audio package.
                     * @return VoipCallInCount Number of minutes consumed by audio package.
                     * @deprecated
                     */
                    int64_t GetVoipCallInCount() const;

                    /**
                     * 判断参数 VoipCallInCount 是否已赋值
                     * @return VoipCallInCount 是否已赋值
                     * @deprecated
                     */
                    bool VoipCallInCountHasBeenSet() const;

                    /**
                     * 获取Number of minutes consumed by audio package.
                     * @return VOIPCallInCount Number of minutes consumed by audio package.
                     * 
                     */
                    int64_t GetVOIPCallInCount() const;

                    /**
                     * 判断参数 VOIPCallInCount 是否已赋值
                     * @return VOIPCallInCount 是否已赋值
                     * 
                     */
                    bool VOIPCallInCountHasBeenSet() const;

                    /**
                     * 获取Number of minutes consumed by offline speech-to-text package.
                     * @return AsrOfflineCount Number of minutes consumed by offline speech-to-text package.
                     * 
                     */
                    int64_t GetAsrOfflineCount() const;

                    /**
                     * 判断参数 AsrOfflineCount 是否已赋值
                     * @return AsrOfflineCount 是否已赋值
                     * 
                     */
                    bool AsrOfflineCountHasBeenSet() const;

                    /**
                     * 获取Number of minutes consumed by real-time speech-to-text package.
                     * @return AsrRealtimeCount Number of minutes consumed by real-time speech-to-text package.
                     * 
                     */
                    int64_t GetAsrRealtimeCount() const;

                    /**
                     * 判断参数 AsrRealtimeCount 是否已赋值
                     * @return AsrRealtimeCount 是否已赋值
                     * 
                     */
                    bool AsrRealtimeCountHasBeenSet() const;

                private:

                    /**
                     * Number of minutes consumed by outbound package.
                     */
                    int64_t m_telCallOutCount;
                    bool m_telCallOutCountHasBeenSet;

                    /**
                     * Number of minutes consumed by inbound package.
                     */
                    int64_t m_telCallInCount;
                    bool m_telCallInCountHasBeenSet;

                    /**
                     * Number of agent usage statistics.
                     */
                    int64_t m_seatUsedCount;
                    bool m_seatUsedCountHasBeenSet;

                    /**
                     * Number of minutes consumed by audio package.
                     */
                    int64_t m_voipCallInCount;
                    bool m_voipCallInCountHasBeenSet;

                    /**
                     * Number of minutes consumed by audio package.
                     */
                    int64_t m_vOIPCallInCount;
                    bool m_vOIPCallInCountHasBeenSet;

                    /**
                     * Number of minutes consumed by offline speech-to-text package.
                     */
                    int64_t m_asrOfflineCount;
                    bool m_asrOfflineCountHasBeenSet;

                    /**
                     * Number of minutes consumed by real-time speech-to-text package.
                     */
                    int64_t m_asrRealtimeCount;
                    bool m_asrRealtimeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCALLINFORESPONSE_H_
