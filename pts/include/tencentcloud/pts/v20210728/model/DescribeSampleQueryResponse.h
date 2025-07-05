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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEQUERYRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEQUERYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/CustomSample.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeSampleQuery response structure.
                */
                class DescribeSampleQueryResponse : public AbstractModel
                {
                public:
                    DescribeSampleQueryResponse();
                    ~DescribeSampleQueryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Returned metric.

Note: This field may return null, indicating that no valid value is found.
                     * @return MetricSample Returned metric.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    CustomSample GetMetricSample() const;

                    /**
                     * 判断参数 MetricSample 是否已赋值
                     * @return MetricSample 是否已赋值
                     * 
                     */
                    bool MetricSampleHasBeenSet() const;

                private:

                    /**
                     * Returned metric.

Note: This field may return null, indicating that no valid value is found.
                     */
                    CustomSample m_metricSample;
                    bool m_metricSampleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEQUERYRESPONSE_H_
