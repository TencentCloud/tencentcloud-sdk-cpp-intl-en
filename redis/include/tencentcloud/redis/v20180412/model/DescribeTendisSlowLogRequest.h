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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETENDISSLOWLOGREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETENDISSLOWLOGREQUEST_H_

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
                * DescribeTendisSlowLog request structure.
                */
                class DescribeTendisSlowLogRequest : public AbstractModel
                {
                public:
                    DescribeTendisSlowLogRequest();
                    ~DescribeTendisSlowLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. Log in to the [Tendis console](https://console.cloud.tencent.com/tendis) and copy it in the instance list.
                     * @return InstanceId Instance ID. Log in to the [Tendis console](https://console.cloud.tencent.com/tendis) and copy it in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [Tendis console](https://console.cloud.tencent.com/tendis) and copy it in the instance list.
                     * @param _instanceId Instance ID. Log in to the [Tendis console](https://console.cloud.tencent.com/tendis) and copy it in the instance list.
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
                     * 获取Start time for a query, for example, 2019-09-08 12:12:41, with a maximum query span of 30 days.
                     * @return BeginTime Start time for a query, for example, 2019-09-08 12:12:41, with a maximum query span of 30 days.
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Start time for a query, for example, 2019-09-08 12:12:41, with a maximum query span of 30 days.
                     * @param _beginTime Start time for a query, for example, 2019-09-08 12:12:41, with a maximum query span of 30 days.
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time for a query, for example, 2019-09-09 12:12:41, with a maximum query span of 30 days.
                     * @return EndTime End time for a query, for example, 2019-09-09 12:12:41, with a maximum query span of 30 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time for a query, for example, 2019-09-09 12:12:41, with a maximum query span of 30 days.
                     * @param _endTime End time for a query, for example, 2019-09-09 12:12:41, with a maximum query span of 30 days.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Slow query threshold in ms
                     * @return MinQueryTime Slow query threshold in ms
                     * 
                     */
                    int64_t GetMinQueryTime() const;

                    /**
                     * 设置Slow query threshold in ms
                     * @param _minQueryTime Slow query threshold in ms
                     * 
                     */
                    void SetMinQueryTime(const int64_t& _minQueryTime);

                    /**
                     * 判断参数 MinQueryTime 是否已赋值
                     * @return MinQueryTime 是否已赋值
                     * 
                     */
                    bool MinQueryTimeHasBeenSet() const;

                    /**
                     * 获取Page size. Default value 20. Maximum value 100.
                     * @return Limit Page size. Default value 20. Maximum value 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Page size. Default value 20. Maximum value 100.
                     * @param _limit Page size. Default value 20. Maximum value 100.
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
                     * 获取Pagination offset, which is an integer multiple of Limit. Calculation formula: Offset = Limit x (Page number - 1).
                     * @return Offset Pagination offset, which is an integer multiple of Limit. Calculation formula: Offset = Limit x (Page number - 1).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset, which is an integer multiple of Limit. Calculation formula: Offset = Limit x (Page number - 1).
                     * @param _offset Pagination offset, which is an integer multiple of Limit. Calculation formula: Offset = Limit x (Page number - 1).
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Instance ID. Log in to the [Tendis console](https://console.cloud.tencent.com/tendis) and copy it in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time for a query, for example, 2019-09-08 12:12:41, with a maximum query span of 30 days.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time for a query, for example, 2019-09-09 12:12:41, with a maximum query span of 30 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Slow query threshold in ms
                     */
                    int64_t m_minQueryTime;
                    bool m_minQueryTimeHasBeenSet;

                    /**
                     * Page size. Default value 20. Maximum value 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset, which is an integer multiple of Limit. Calculation formula: Offset = Limit x (Page number - 1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETENDISSLOWLOGREQUEST_H_
