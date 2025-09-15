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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESPARKQUERIESREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESPARKQUERIESREQUEST_H_

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
                * DescribeSparkQueries request structure.
                */
                class DescribeSparkQueriesRequest : public AbstractModel
                {
                public:
                    DescribeSparkQueriesRequest();
                    ~DescribeSparkQueriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return InstanceId Cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _instanceId Cluster ID.
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
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
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
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
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
                     * 获取Starting offset for pages, starting from 0.
                     * @return Offset Starting offset for pages, starting from 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Starting offset for pages, starting from 0.
                     * @param _offset Starting offset for pages, starting from 0.
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
                     * 获取Page size. Valid range: [1,100].
                     * @return Limit Page size. Valid range: [1,100].
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Page size. Valid range: [1,100].
                     * @param _limit Page size. Valid range: [1,100].
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
                     * 获取Execution status: RUNNING,COMPLETED, FAILED.
                     * @return Status Execution status: RUNNING,COMPLETED, FAILED.
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置Execution status: RUNNING,COMPLETED, FAILED.
                     * @param _status Execution status: RUNNING,COMPLETED, FAILED.
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Starting offset for pages, starting from 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page size. Valid range: [1,100].
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Execution status: RUNNING,COMPLETED, FAILED.
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESPARKQUERIESREQUEST_H_
