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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCALLINFOREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCALLINFOREQUEST_H_

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
                * DescribeTelCallInfo request structure.
                */
                class DescribeTelCallInfoRequest : public AbstractModel
                {
                public:
                    DescribeTelCallInfoRequest();
                    ~DescribeTelCallInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start timestamp, Unix timestamp (query dimension supports only daily. For example, to query May 1st, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-01 23:59:59" timestamp. To query May 1st and May 2nd, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-02 23:59:59" timestamp)
                     * @return StartTimeStamp Start timestamp, Unix timestamp (query dimension supports only daily. For example, to query May 1st, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-01 23:59:59" timestamp. To query May 1st and May 2nd, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-02 23:59:59" timestamp)
                     * 
                     */
                    int64_t GetStartTimeStamp() const;

                    /**
                     * 设置Start timestamp, Unix timestamp (query dimension supports only daily. For example, to query May 1st, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-01 23:59:59" timestamp. To query May 1st and May 2nd, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-02 23:59:59" timestamp)
                     * @param _startTimeStamp Start timestamp, Unix timestamp (query dimension supports only daily. For example, to query May 1st, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-01 23:59:59" timestamp. To query May 1st and May 2nd, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-02 23:59:59" timestamp)
                     * 
                     */
                    void SetStartTimeStamp(const int64_t& _startTimeStamp);

                    /**
                     * 判断参数 StartTimeStamp 是否已赋值
                     * @return StartTimeStamp 是否已赋值
                     * 
                     */
                    bool StartTimeStampHasBeenSet() const;

                    /**
                     * 获取End timestamp, Unix timestamp, the query time range is up to 90 days (query dimension supports only daily. For example, to query May 1st, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-01 23:59:59" timestamp. To query May 1st and May 2nd, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-02 23:59:59" timestamp)
                     * @return EndTimeStamp End timestamp, Unix timestamp, the query time range is up to 90 days (query dimension supports only daily. For example, to query May 1st, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-01 23:59:59" timestamp. To query May 1st and May 2nd, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-02 23:59:59" timestamp)
                     * 
                     */
                    int64_t GetEndTimeStamp() const;

                    /**
                     * 设置End timestamp, Unix timestamp, the query time range is up to 90 days (query dimension supports only daily. For example, to query May 1st, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-01 23:59:59" timestamp. To query May 1st and May 2nd, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-02 23:59:59" timestamp)
                     * @param _endTimeStamp End timestamp, Unix timestamp, the query time range is up to 90 days (query dimension supports only daily. For example, to query May 1st, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-01 23:59:59" timestamp. To query May 1st and May 2nd, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-02 23:59:59" timestamp)
                     * 
                     */
                    void SetEndTimeStamp(const int64_t& _endTimeStamp);

                    /**
                     * 判断参数 EndTimeStamp 是否已赋值
                     * @return EndTimeStamp 是否已赋值
                     * 
                     */
                    bool EndTimeStampHasBeenSet() const;

                    /**
                     * 获取Application ID list, when having multiple IDs, the returned value is the sum of all the IDs.
                     * @return SdkAppIdList Application ID list, when having multiple IDs, the returned value is the sum of all the IDs.
                     * 
                     */
                    std::vector<int64_t> GetSdkAppIdList() const;

                    /**
                     * 设置Application ID list, when having multiple IDs, the returned value is the sum of all the IDs.
                     * @param _sdkAppIdList Application ID list, when having multiple IDs, the returned value is the sum of all the IDs.
                     * 
                     */
                    void SetSdkAppIdList(const std::vector<int64_t>& _sdkAppIdList);

                    /**
                     * 判断参数 SdkAppIdList 是否已赋值
                     * @return SdkAppIdList 是否已赋值
                     * 
                     */
                    bool SdkAppIdListHasBeenSet() const;

                private:

                    /**
                     * Start timestamp, Unix timestamp (query dimension supports only daily. For example, to query May 1st, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-01 23:59:59" timestamp. To query May 1st and May 2nd, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-02 23:59:59" timestamp)
                     */
                    int64_t m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * End timestamp, Unix timestamp, the query time range is up to 90 days (query dimension supports only daily. For example, to query May 1st, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-01 23:59:59" timestamp. To query May 1st and May 2nd, pass startTime:"2023-05-01 00:00:00","endTime":"2023-05-02 23:59:59" timestamp)
                     */
                    int64_t m_endTimeStamp;
                    bool m_endTimeStampHasBeenSet;

                    /**
                     * Application ID list, when having multiple IDs, the returned value is the sum of all the IDs.
                     */
                    std::vector<int64_t> m_sdkAppIdList;
                    bool m_sdkAppIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCALLINFOREQUEST_H_
