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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESLOWLOGPATTERNSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESLOWLOGPATTERNSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeSlowLogPatterns request structure.
                */
                class DescribeSlowLogPatternsRequest : public AbstractModel
                {
                public:
                    DescribeSlowLogPatternsRequest();
                    ~DescribeSlowLogPatternsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of `cmgo-p8vnipr5`, which is the same as the instance ID displayed on the TencentDB Console page
                     * @return InstanceId Instance ID in the format of `cmgo-p8vnipr5`, which is the same as the instance ID displayed on the TencentDB Console page
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of `cmgo-p8vnipr5`, which is the same as the instance ID displayed on the TencentDB Console page
                     * @param InstanceId Instance ID in the format of `cmgo-p8vnipr5`, which is the same as the instance ID displayed on the TencentDB Console page
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Start time of slow log in the format of `yyyy-mm-dd hh:mm:ss`, such as 2019-06-01 10:00:00. The query time range cannot exceed 24 hours. Only slow logs for the last 7 days can be queried.
                     * @return StartTime Start time of slow log in the format of `yyyy-mm-dd hh:mm:ss`, such as 2019-06-01 10:00:00. The query time range cannot exceed 24 hours. Only slow logs for the last 7 days can be queried.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of slow log in the format of `yyyy-mm-dd hh:mm:ss`, such as 2019-06-01 10:00:00. The query time range cannot exceed 24 hours. Only slow logs for the last 7 days can be queried.
                     * @param StartTime Start time of slow log in the format of `yyyy-mm-dd hh:mm:ss`, such as 2019-06-01 10:00:00. The query time range cannot exceed 24 hours. Only slow logs for the last 7 days can be queried.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of slow log in the format of `yyyy-mm-dd hh:mm:ss`, such as 2019-06-02 12:00:00. The query time range cannot exceed 24 hours. Only slow logs for the last 7 days can be queried.
                     * @return EndTime End time of slow log in the format of `yyyy-mm-dd hh:mm:ss`, such as 2019-06-02 12:00:00. The query time range cannot exceed 24 hours. Only slow logs for the last 7 days can be queried.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of slow log in the format of `yyyy-mm-dd hh:mm:ss`, such as 2019-06-02 12:00:00. The query time range cannot exceed 24 hours. Only slow logs for the last 7 days can be queried.
                     * @param EndTime End time of slow log in the format of `yyyy-mm-dd hh:mm:ss`, such as 2019-06-02 12:00:00. The query time range cannot exceed 24 hours. Only slow logs for the last 7 days can be queried.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Threshold of slow log execution time in milliseconds. Minimum value: 100. Slow logs whose execution time exceeds the threshold will be returned.
                     * @return SlowMS Threshold of slow log execution time in milliseconds. Minimum value: 100. Slow logs whose execution time exceeds the threshold will be returned.
                     */
                    uint64_t GetSlowMS() const;

                    /**
                     * 设置Threshold of slow log execution time in milliseconds. Minimum value: 100. Slow logs whose execution time exceeds the threshold will be returned.
                     * @param SlowMS Threshold of slow log execution time in milliseconds. Minimum value: 100. Slow logs whose execution time exceeds the threshold will be returned.
                     */
                    void SetSlowMS(const uint64_t& _slowMS);

                    /**
                     * 判断参数 SlowMS 是否已赋值
                     * @return SlowMS 是否已赋值
                     */
                    bool SlowMSHasBeenSet() const;

                    /**
                     * 获取Offset. Minimum value: 0. Maximum value: 10000. Default value: 0.
                     * @return Offset Offset. Minimum value: 0. Maximum value: 10000. Default value: 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Minimum value: 0. Maximum value: 10000. Default value: 0.
                     * @param Offset Offset. Minimum value: 0. Maximum value: 10000. Default value: 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Minimum value: 1. Maximum value: 100. Default value: 20.
                     * @return Limit Number of entries per page. Minimum value: 1. Maximum value: 100. Default value: 20.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Minimum value: 1. Maximum value: 100. Default value: 20.
                     * @param Limit Number of entries per page. Minimum value: 1. Maximum value: 100. Default value: 20.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Slow log format, which can be JSON. If this parameter is left empty, the slow log will be returned in its native format.
                     * @return Format Slow log format, which can be JSON. If this parameter is left empty, the slow log will be returned in its native format.
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Slow log format, which can be JSON. If this parameter is left empty, the slow log will be returned in its native format.
                     * @param Format Slow log format, which can be JSON. If this parameter is left empty, the slow log will be returned in its native format.
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of `cmgo-p8vnipr5`, which is the same as the instance ID displayed on the TencentDB Console page
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time of slow log in the format of `yyyy-mm-dd hh:mm:ss`, such as 2019-06-01 10:00:00. The query time range cannot exceed 24 hours. Only slow logs for the last 7 days can be queried.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of slow log in the format of `yyyy-mm-dd hh:mm:ss`, such as 2019-06-02 12:00:00. The query time range cannot exceed 24 hours. Only slow logs for the last 7 days can be queried.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Threshold of slow log execution time in milliseconds. Minimum value: 100. Slow logs whose execution time exceeds the threshold will be returned.
                     */
                    uint64_t m_slowMS;
                    bool m_slowMSHasBeenSet;

                    /**
                     * Offset. Minimum value: 0. Maximum value: 10000. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page. Minimum value: 1. Maximum value: 100. Default value: 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Slow log format, which can be JSON. If this parameter is left empty, the slow log will be returned in its native format.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESLOWLOGPATTERNSREQUEST_H_
