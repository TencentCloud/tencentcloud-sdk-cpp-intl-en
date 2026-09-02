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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAISCHEDULELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAISCHEDULELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAIScheduleList request structure.
                */
                class DescribeAIScheduleListRequest : public AbstractModel
                {
                public:
                    DescribeAIScheduleListRequest();
                    ~DescribeAIScheduleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Pagination offset. Default: 0.</p>
                     * @return Offset <p>Pagination offset. Default: 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset. Default: 0.</p>
                     * @param _offset <p>Pagination offset. Default: 0.</p>
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
                     * 获取<p>Pagination size. Default: 20. Maximum: 100.</p>
                     * @return Limit <p>Pagination size. Default: 20. Maximum: 100.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Pagination size. Default: 20. Maximum: 100.</p>
                     * @param _limit <p>Pagination size. Default: 20. Maximum: 100.</p>
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
                     * 获取<p>Status filtering. Value: 0 (all), 1 (enabled), 2 (disabled). Default: 0.</p>
                     * @return Status <p>Status filtering. Value: 0 (all), 1 (enabled), 2 (disabled). Default: 0.</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Status filtering. Value: 0 (all), 1 (enabled), 2 (disabled). Default: 0.</p>
                     * @param _status <p>Status filtering. Value: 0 (all), 1 (enabled), 2 (disabled). Default: 0.</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Scheduled task ID, optional. If empty, a full query is performed.</p>
                     * @return ScheduleId <p>Scheduled task ID, optional. If empty, a full query is performed.</p>
                     * 
                     */
                    std::string GetScheduleId() const;

                    /**
                     * 设置<p>Scheduled task ID, optional. If empty, a full query is performed.</p>
                     * @param _scheduleId <p>Scheduled task ID, optional. If empty, a full query is performed.</p>
                     * 
                     */
                    void SetScheduleId(const std::string& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                private:

                    /**
                     * <p>Pagination offset. Default: 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Pagination size. Default: 20. Maximum: 100.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Status filtering. Value: 0 (all), 1 (enabled), 2 (disabled). Default: 0.</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Scheduled task ID, optional. If empty, a full query is performed.</p>
                     */
                    std::string m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAISCHEDULELISTREQUEST_H_
