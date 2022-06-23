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
                     * 获取Instance ID in the format of crs-ngvou0i1
                     * @return InstanceId Instance ID in the format of crs-ngvou0i1
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of crs-ngvou0i1
                     * @param InstanceId Instance ID in the format of crs-ngvou0i1
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Start time in the format of 2019-09-08 12:12:41
                     * @return BeginTime Start time in the format of 2019-09-08 12:12:41
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Start time in the format of 2019-09-08 12:12:41
                     * @param BeginTime Start time in the format of 2019-09-08 12:12:41
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time in the format of 2019-09-09 12:12:41
                     * @return EndTime End time in the format of 2019-09-09 12:12:41
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in the format of 2019-09-09 12:12:41
                     * @param EndTime End time in the format of 2019-09-09 12:12:41
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Slow query threshold in ms
                     * @return MinQueryTime Slow query threshold in ms
                     */
                    int64_t GetMinQueryTime() const;

                    /**
                     * 设置Slow query threshold in ms
                     * @param MinQueryTime Slow query threshold in ms
                     */
                    void SetMinQueryTime(const int64_t& _minQueryTime);

                    /**
                     * 判断参数 MinQueryTime 是否已赋值
                     * @return MinQueryTime 是否已赋值
                     */
                    bool MinQueryTimeHasBeenSet() const;

                    /**
                     * 获取The maximum number of results returned per page. Default value: `20`
                     * @return Limit The maximum number of results returned per page. Default value: `20`
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The maximum number of results returned per page. Default value: `20`
                     * @param Limit The maximum number of results returned per page. Default value: `20`
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset, which is an integral multiple of `Limit`
                     * @return Offset Offset, which is an integral multiple of `Limit`
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, which is an integral multiple of `Limit`
                     * @param Offset Offset, which is an integral multiple of `Limit`
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of crs-ngvou0i1
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time in the format of 2019-09-08 12:12:41
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time in the format of 2019-09-09 12:12:41
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Slow query threshold in ms
                     */
                    int64_t m_minQueryTime;
                    bool m_minQueryTimeHasBeenSet;

                    /**
                     * The maximum number of results returned per page. Default value: `20`
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which is an integral multiple of `Limit`
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETENDISSLOWLOGREQUEST_H_
