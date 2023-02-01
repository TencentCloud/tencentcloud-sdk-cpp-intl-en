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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMSTATSLOGLISTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMSTATSLOGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeRumStatsLogList request structure.
                */
                class DescribeRumStatsLogListRequest : public AbstractModel
                {
                public:
                    DescribeRumStatsLogListRequest();
                    ~DescribeRumStatsLogListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time (required)
                     * @return StartTime Start time (required)
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time (required)
                     * @param StartTime Start time (required)
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The number of raw logs returned for a single query. This parameter is required. Maximum value: `100`.
                     * @return Limit The number of raw logs returned for a single query. This parameter is required. Maximum value: `100`.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of raw logs returned for a single query. This parameter is required. Maximum value: `100`.
                     * @param Limit The number of raw logs returned for a single query. This parameter is required. Maximum value: `100`.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Query statement, which is required and can contain up to 4,096 characters.
                     * @return Query Query statement, which is required and can contain up to 4,096 characters.
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query statement, which is required and can contain up to 4,096 characters.
                     * @param Query Query statement, which is required and can contain up to 4,096 characters.
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取End time (required)
                     * @return EndTime End time (required)
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time (required)
                     * @param EndTime End time (required)
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Project ID (required)
                     * @return ID Project ID (required)
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Project ID (required)
                     * @param ID Project ID (required)
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * Start time (required)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The number of raw logs returned for a single query. This parameter is required. Maximum value: `100`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Query statement, which is required and can contain up to 4,096 characters.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * End time (required)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Project ID (required)
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMSTATSLOGLISTREQUEST_H_
