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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DETAIL_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/AnalysisItems.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Details returned by the `DescribeSlowQueryAnalysis` API
                */
                class Detail : public AbstractModel
                {
                public:
                    Detail();
                    ~Detail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The total execution time (in ms) of all slow query statements during the specified period of time
                     * @return TotalTime The total execution time (in ms) of all slow query statements during the specified period of time
                     * 
                     */
                    double GetTotalTime() const;

                    /**
                     * 设置The total execution time (in ms) of all slow query statements during the specified period of time
                     * @param _totalTime The total execution time (in ms) of all slow query statements during the specified period of time
                     * 
                     */
                    void SetTotalTime(const double& _totalTime);

                    /**
                     * 判断参数 TotalTime 是否已赋值
                     * @return TotalTime 是否已赋值
                     * 
                     */
                    bool TotalTimeHasBeenSet() const;

                    /**
                     * 获取The total number of all slow query statements during the specified period of time
                     * @return TotalCallNum The total number of all slow query statements during the specified period of time
                     * 
                     */
                    uint64_t GetTotalCallNum() const;

                    /**
                     * 设置The total number of all slow query statements during the specified period of time
                     * @param _totalCallNum The total number of all slow query statements during the specified period of time
                     * 
                     */
                    void SetTotalCallNum(const uint64_t& _totalCallNum);

                    /**
                     * 判断参数 TotalCallNum 是否已赋值
                     * @return TotalCallNum 是否已赋值
                     * 
                     */
                    bool TotalCallNumHasBeenSet() const;

                    /**
                     * 获取The statistical analysis list of slow queries
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AnalysisItems The statistical analysis list of slow queries
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalysisItems> GetAnalysisItems() const;

                    /**
                     * 设置The statistical analysis list of slow queries
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _analysisItems The statistical analysis list of slow queries
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAnalysisItems(const std::vector<AnalysisItems>& _analysisItems);

                    /**
                     * 判断参数 AnalysisItems 是否已赋值
                     * @return AnalysisItems 是否已赋值
                     * 
                     */
                    bool AnalysisItemsHasBeenSet() const;

                private:

                    /**
                     * The total execution time (in ms) of all slow query statements during the specified period of time
                     */
                    double m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * The total number of all slow query statements during the specified period of time
                     */
                    uint64_t m_totalCallNum;
                    bool m_totalCallNumHasBeenSet;

                    /**
                     * The statistical analysis list of slow queries
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalysisItems> m_analysisItems;
                    bool m_analysisItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DETAIL_H_
