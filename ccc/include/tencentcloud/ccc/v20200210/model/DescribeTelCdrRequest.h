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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCDRREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCDRREQUEST_H_

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
                * DescribeTelCdr request structure.
                */
                class DescribeTelCdrRequest : public AbstractModel
                {
                public:
                    DescribeTelCdrRequest();
                    ~DescribeTelCdrRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start timestamp, Unix Timestamp in Seconds. Supports up to the past 180 days.
                     * @return StartTimeStamp Start timestamp, Unix Timestamp in Seconds. Supports up to the past 180 days.
                     * 
                     */
                    int64_t GetStartTimeStamp() const;

                    /**
                     * 设置Start timestamp, Unix Timestamp in Seconds. Supports up to the past 180 days.
                     * @param _startTimeStamp Start timestamp, Unix Timestamp in Seconds. Supports up to the past 180 days.
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
                     * 获取End timestamp, Unix Timestamp in Seconds. The range between the end time and start time is less than 90 days.
                     * @return EndTimeStamp End timestamp, Unix Timestamp in Seconds. The range between the end time and start time is less than 90 days.
                     * 
                     */
                    int64_t GetEndTimeStamp() const;

                    /**
                     * 设置End timestamp, Unix Timestamp in Seconds. The range between the end time and start time is less than 90 days.
                     * @param _endTimeStamp End timestamp, Unix Timestamp in Seconds. The range between the end time and start time is less than 90 days.
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
                     * 获取Instance ID (deprecated).
                     * @return InstanceId Instance ID (deprecated).
                     * @deprecated
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置Instance ID (deprecated).
                     * @param _instanceId Instance ID (deprecated).
                     * @deprecated
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * @deprecated
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Maximum number of returned entries (deprecated).
                     * @return Limit Maximum number of returned entries (deprecated).
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of returned entries (deprecated).
                     * @param _limit Maximum number of returned entries (deprecated).
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset (deprecated).
                     * @return Offset Offset (deprecated).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset (deprecated).
                     * @param _offset Offset (deprecated).
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Page size (required), up to 100.
                     * @return PageSize Page size (required), up to 100.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size (required), up to 100.
                     * @param _pageSize Page size (required), up to 100.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Page number (required), starting from 0.
                     * @return PageNumber Page number (required), starting from 0.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number (required), starting from 0.
                     * @param _pageNumber Page number (required), starting from 0.
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Filter by Phone Number.
                     * @return Phones Filter by Phone Number.
                     * 
                     */
                    std::vector<std::string> GetPhones() const;

                    /**
                     * 设置Filter by Phone Number.
                     * @param _phones Filter by Phone Number.
                     * 
                     */
                    void SetPhones(const std::vector<std::string>& _phones);

                    /**
                     * 判断参数 Phones 是否已赋值
                     * @return Phones 是否已赋值
                     * 
                     */
                    bool PhonesHasBeenSet() const;

                    /**
                     * 获取Filter by SessionId.
                     * @return SessionIds Filter by SessionId.
                     * 
                     */
                    std::vector<std::string> GetSessionIds() const;

                    /**
                     * 设置Filter by SessionId.
                     * @param _sessionIds Filter by SessionId.
                     * 
                     */
                    void SetSessionIds(const std::vector<std::string>& _sessionIds);

                    /**
                     * 判断参数 SessionIds 是否已赋值
                     * @return SessionIds 是否已赋值
                     * 
                     */
                    bool SessionIdsHasBeenSet() const;

                private:

                    /**
                     * Start timestamp, Unix Timestamp in Seconds. Supports up to the past 180 days.
                     */
                    int64_t m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * End timestamp, Unix Timestamp in Seconds. The range between the end time and start time is less than 90 days.
                     */
                    int64_t m_endTimeStamp;
                    bool m_endTimeStampHasBeenSet;

                    /**
                     * Instance ID (deprecated).
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Maximum number of returned entries (deprecated).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset (deprecated).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Page size (required), up to 100.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number (required), starting from 0.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Filter by Phone Number.
                     */
                    std::vector<std::string> m_phones;
                    bool m_phonesHasBeenSet;

                    /**
                     * Filter by SessionId.
                     */
                    std::vector<std::string> m_sessionIds;
                    bool m_sessionIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCDRREQUEST_H_
