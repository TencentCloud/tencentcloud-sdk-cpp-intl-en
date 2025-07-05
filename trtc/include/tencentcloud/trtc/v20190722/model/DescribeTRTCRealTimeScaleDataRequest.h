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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCREALTIMESCALEDATAREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCREALTIMESCALEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeTRTCRealTimeScaleData request structure.
                */
                class DescribeTRTCRealTimeScaleDataRequest : public AbstractModel
                {
                public:
                    DescribeTRTCRealTimeScaleDataRequest();
                    ~DescribeTRTCRealTimeScaleDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User SDKAppId (e.g., 1400xxxxxx)
                     * @return SdkAppId User SDKAppId (e.g., 1400xxxxxx)
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置User SDKAppId (e.g., 1400xxxxxx)
                     * @param _sdkAppId User SDKAppId (e.g., 1400xxxxxx)
                     * 
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Start time, unix timestamp, Unit: seconds (Query time range depends on the function version of the monitoring dashboard, premium edition can query up to 1 hours)
                     * @return StartTime Start time, unix timestamp, Unit: seconds (Query time range depends on the function version of the monitoring dashboard, premium edition can query up to 1 hours)
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time, unix timestamp, Unit: seconds (Query time range depends on the function version of the monitoring dashboard, premium edition can query up to 1 hours)
                     * @param _startTime Start time, unix timestamp, Unit: seconds (Query time range depends on the function version of the monitoring dashboard, premium edition can query up to 1 hours)
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time, unix timestamp, Unit: seconds
                     * @return EndTime End time, unix timestamp, Unit: seconds
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time, unix timestamp, Unit: seconds
                     * @param _endTime End time, unix timestamp, Unit: seconds
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Room ID
                     * @return RoomId Room ID
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置Room ID
                     * @param _roomId Room ID
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                private:

                    /**
                     * User SDKAppId (e.g., 1400xxxxxx)
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Start time, unix timestamp, Unit: seconds (Query time range depends on the function version of the monitoring dashboard, premium edition can query up to 1 hours)
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, unix timestamp, Unit: seconds
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Room ID
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCREALTIMESCALEDATAREQUEST_H_
