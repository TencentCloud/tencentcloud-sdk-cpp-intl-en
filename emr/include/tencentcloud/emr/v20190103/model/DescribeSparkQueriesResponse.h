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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESPARKQUERIESRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESPARKQUERIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/SparkQuery.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeSparkQueries response structure.
                */
                class DescribeSparkQueriesResponse : public AbstractModel
                {
                public:
                    DescribeSparkQueriesResponse();
                    ~DescribeSparkQueriesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number.
                     * @return Total Total number.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Results Result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SparkQuery> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * Total number.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SparkQuery> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESPARKQUERIESRESPONSE_H_
