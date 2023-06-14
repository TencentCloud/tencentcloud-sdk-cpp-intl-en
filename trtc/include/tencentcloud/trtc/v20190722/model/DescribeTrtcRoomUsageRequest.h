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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCROOMUSAGEREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCROOMUSAGEREQUEST_H_

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
                * DescribeTrtcRoomUsage request structure.
                */
                class DescribeTrtcRoomUsageRequest : public AbstractModel
                {
                public:
                    DescribeTrtcRoomUsageRequest();
                    ~DescribeTrtcRoomUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The `SDKAppID` of the room.
                     * @return SdkAppid The `SDKAppID` of the room.
                     * 
                     */
                    uint64_t GetSdkAppid() const;

                    /**
                     * 设置The `SDKAppID` of the room.
                     * @param _sdkAppid The `SDKAppID` of the room.
                     * 
                     */
                    void SetSdkAppid(const uint64_t& _sdkAppid);

                    /**
                     * 判断参数 SdkAppid 是否已赋值
                     * @return SdkAppid 是否已赋值
                     * 
                     */
                    bool SdkAppidHasBeenSet() const;

                    /**
                     * 获取The start time in the format of `YYYY-MM-DD HH:MM` (accurate to the minute).
                     * @return StartTime The start time in the format of `YYYY-MM-DD HH:MM` (accurate to the minute).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time in the format of `YYYY-MM-DD HH:MM` (accurate to the minute).
                     * @param _startTime The start time in the format of `YYYY-MM-DD HH:MM` (accurate to the minute).
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time in the format of `YYYY-MM-DD HH:MM`. The start and end time cannot be more than 24 hours apart.
                     * @return EndTime The end time in the format of `YYYY-MM-DD HH:MM`. The start and end time cannot be more than 24 hours apart.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time in the format of `YYYY-MM-DD HH:MM`. The start and end time cannot be more than 24 hours apart.
                     * @param _endTime The end time in the format of `YYYY-MM-DD HH:MM`. The start and end time cannot be more than 24 hours apart.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * The `SDKAppID` of the room.
                     */
                    uint64_t m_sdkAppid;
                    bool m_sdkAppidHasBeenSet;

                    /**
                     * The start time in the format of `YYYY-MM-DD HH:MM` (accurate to the minute).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time in the format of `YYYY-MM-DD HH:MM`. The start and end time cannot be more than 24 hours apart.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCROOMUSAGEREQUEST_H_
