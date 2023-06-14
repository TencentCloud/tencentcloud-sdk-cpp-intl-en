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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYLISTRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DurationAnalysis.h>
#include <tencentcloud/postgres/v20170312/model/RawSlowQuery.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSlowQueryList response structure.
                */
                class DescribeSlowQueryListResponse : public AbstractModel
                {
                public:
                    DescribeSlowQueryListResponse();
                    ~DescribeSlowQueryListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of slow query statements during the specified period of time.
                     * @return TotalCount The total number of slow query statements during the specified period of time.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Analysis of the execution time of slow query statements by classifying them to different time ranges. These slow query statements fall within the query range you specified in the request parameters.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DurationAnalysis Analysis of the execution time of slow query statements by classifying them to different time ranges. These slow query statements fall within the query range you specified in the request parameters.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DurationAnalysis> GetDurationAnalysis() const;

                    /**
                     * 判断参数 DurationAnalysis 是否已赋值
                     * @return DurationAnalysis 是否已赋值
                     * 
                     */
                    bool DurationAnalysisHasBeenSet() const;

                    /**
                     * 获取The list of slow query details during the specified period of time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RawSlowQueryList The list of slow query details during the specified period of time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RawSlowQuery> GetRawSlowQueryList() const;

                    /**
                     * 判断参数 RawSlowQueryList 是否已赋值
                     * @return RawSlowQueryList 是否已赋值
                     * 
                     */
                    bool RawSlowQueryListHasBeenSet() const;

                private:

                    /**
                     * The total number of slow query statements during the specified period of time.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Analysis of the execution time of slow query statements by classifying them to different time ranges. These slow query statements fall within the query range you specified in the request parameters.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<DurationAnalysis> m_durationAnalysis;
                    bool m_durationAnalysisHasBeenSet;

                    /**
                     * The list of slow query details during the specified period of time.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<RawSlowQuery> m_rawSlowQueryList;
                    bool m_rawSlowQueryListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYLISTRESPONSE_H_
