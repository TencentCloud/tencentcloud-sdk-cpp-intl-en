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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSTASKSTATUSTRENDRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSTASKSTATUSTRENDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationStatisticsTrendResult.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeIntegrationStatisticsTaskStatusTrend response structure.
                */
                class DescribeIntegrationStatisticsTaskStatusTrendResponse : public AbstractModel
                {
                public:
                    DescribeIntegrationStatisticsTaskStatusTrendResponse();
                    ~DescribeIntegrationStatisticsTaskStatusTrendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Statistical Results
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TrendsData Statistical Results
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<IntegrationStatisticsTrendResult> GetTrendsData() const;

                    /**
                     * 判断参数 TrendsData 是否已赋值
                     * @return TrendsData 是否已赋值
                     * 
                     */
                    bool TrendsDataHasBeenSet() const;

                private:

                    /**
                     * Statistical Results
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<IntegrationStatisticsTrendResult> m_trendsData;
                    bool m_trendsDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSTASKSTATUSTRENDRESPONSE_H_
