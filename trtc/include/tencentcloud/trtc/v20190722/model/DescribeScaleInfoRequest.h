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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBESCALEINFOREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBESCALEINFOREQUEST_H_

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
                * DescribeScaleInfo request structure.
                */
                class DescribeScaleInfoRequest : public AbstractModel
                {
                public:
                    DescribeScaleInfoRequest();
                    ~DescribeScaleInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The application ID, such as `1400xxxxxx`.
                     * @return SdkAppId The application ID, such as `1400xxxxxx`.
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The application ID, such as `1400xxxxxx`.
                     * @param SdkAppId The application ID, such as `1400xxxxxx`.
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The start time, which is a Unix timestamp (seconds) in local time, such as `1590065777`.
Note: Only data in the last 14 days can be queried.
                     * @return StartTime The start time, which is a Unix timestamp (seconds) in local time, such as `1590065777`.
Note: Only data in the last 14 days can be queried.
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置The start time, which is a Unix timestamp (seconds) in local time, such as `1590065777`.
Note: Only data in the last 14 days can be queried.
                     * @param StartTime The start time, which is a Unix timestamp (seconds) in local time, such as `1590065777`.
Note: Only data in the last 14 days can be queried.
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time, which is a Unix timestamp (seconds) in local time, such as `1590065877`. The end time and start time should preferably be more than 24 hours apart.
Note: Data is collected on a daily basis. To query the data of a day, make sure the end time is later than 00:00 on that day. Otherwise, no data will be returned. For example, to query the data on the 20th, the end time must be later than 00:00 on the 20th.
                     * @return EndTime The end time, which is a Unix timestamp (seconds) in local time, such as `1590065877`. The end time and start time should preferably be more than 24 hours apart.
Note: Data is collected on a daily basis. To query the data of a day, make sure the end time is later than 00:00 on that day. Otherwise, no data will be returned. For example, to query the data on the 20th, the end time must be later than 00:00 on the 20th.
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置The end time, which is a Unix timestamp (seconds) in local time, such as `1590065877`. The end time and start time should preferably be more than 24 hours apart.
Note: Data is collected on a daily basis. To query the data of a day, make sure the end time is later than 00:00 on that day. Otherwise, no data will be returned. For example, to query the data on the 20th, the end time must be later than 00:00 on the 20th.
                     * @param EndTime The end time, which is a Unix timestamp (seconds) in local time, such as `1590065877`. The end time and start time should preferably be more than 24 hours apart.
Note: Data is collected on a daily basis. To query the data of a day, make sure the end time is later than 00:00 on that day. Otherwise, no data will be returned. For example, to query the data on the 20th, the end time must be later than 00:00 on the 20th.
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * The application ID, such as `1400xxxxxx`.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The start time, which is a Unix timestamp (seconds) in local time, such as `1590065777`.
Note: Only data in the last 14 days can be queried.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time, which is a Unix timestamp (seconds) in local time, such as `1590065877`. The end time and start time should preferably be more than 24 hours apart.
Note: Data is collected on a daily basis. To query the data of a day, make sure the end time is later than 00:00 on that day. Otherwise, no data will be returned. For example, to query the data on the 20th, the end time must be later than 00:00 on the 20th.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBESCALEINFOREQUEST_H_
