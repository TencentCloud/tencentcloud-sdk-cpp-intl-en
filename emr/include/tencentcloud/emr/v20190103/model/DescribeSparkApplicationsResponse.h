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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESPARKAPPLICATIONSRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESPARKAPPLICATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/SparkApplicationsList.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeSparkApplications response structure.
                */
                class DescribeSparkApplicationsResponse : public AbstractModel
                {
                public:
                    DescribeSparkApplicationsResponse();
                    ~DescribeSparkApplicationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of returns.
                     * @return TotalCount The number of returns.
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
                     * 获取Spark application list.
                     * @return ResultList Spark application list.
                     * 
                     */
                    std::vector<SparkApplicationsList> GetResultList() const;

                    /**
                     * 判断参数 ResultList 是否已赋值
                     * @return ResultList 是否已赋值
                     * 
                     */
                    bool ResultListHasBeenSet() const;

                private:

                    /**
                     * The number of returns.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Spark application list.
                     */
                    std::vector<SparkApplicationsList> m_resultList;
                    bool m_resultListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESPARKAPPLICATIONSRESPONSE_H_
