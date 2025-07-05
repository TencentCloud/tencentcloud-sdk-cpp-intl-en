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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHIVEQUERIESREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHIVEQUERIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeHiveQueries request structure.
                */
                class DescribeHiveQueriesRequest : public AbstractModel
                {
                public:
                    DescribeHiveQueriesRequest();
                    ~DescribeHiveQueriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The cluster ID.
                     * @return InstanceId The cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The cluster ID.
                     * @param _instanceId The cluster ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The start time in seconds.
                     * @return StartTime The start time in seconds.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置The start time in seconds.
                     * @param _startTime The start time in seconds.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time in seconds. EndTime-StartTime should not exceed one day's duration, which is 86400 seconds.
                     * @return EndTime The end time in seconds. EndTime-StartTime should not exceed one day's duration, which is 86400 seconds.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置The end time in seconds. EndTime-StartTime should not exceed one day's duration, which is 86400 seconds.
                     * @param _endTime The end time in seconds. EndTime-StartTime should not exceed one day's duration, which is 86400 seconds.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Starting offset for pagination. Start value: 0
                     * @return Offset Starting offset for pagination. Start value: 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting offset for pagination. Start value: 0
                     * @param _offset Starting offset for pagination. Start value: 0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Page size. Valid range: [1,100]
                     * @return Limit Page size. Valid range: [1,100]
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Page size. Valid range: [1,100]
                     * @param _limit Page size. Valid range: [1,100]
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The start time in seconds.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time in seconds. EndTime-StartTime should not exceed one day's duration, which is 86400 seconds.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Starting offset for pagination. Start value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page size. Valid range: [1,100]
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHIVEQUERIESREQUEST_H_
