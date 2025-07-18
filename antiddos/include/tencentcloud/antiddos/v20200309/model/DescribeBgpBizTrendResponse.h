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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBGPBIZTRENDRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBGPBIZTRENDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeBgpBizTrend response structure.
                */
                class DescribeBgpBizTrendResponse : public AbstractModel
                {
                public:
                    DescribeBgpBizTrendResponse();
                    ~DescribeBgpBizTrendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Values of the samples
                     * @return DataList Values of the samples
                     * 
                     */
                    std::vector<uint64_t> GetDataList() const;

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                    /**
                     * 获取Number of samples
                     * @return Total Number of samples
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Statistical metric
                     * @return MetricName Statistical metric
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Maximum value of the arrays returned
                     * @return MaxData Maximum value of the arrays returned
                     * 
                     */
                    uint64_t GetMaxData() const;

                    /**
                     * 判断参数 MaxData 是否已赋值
                     * @return MaxData 是否已赋值
                     * 
                     */
                    bool MaxDataHasBeenSet() const;

                private:

                    /**
                     * Values of the samples
                     */
                    std::vector<uint64_t> m_dataList;
                    bool m_dataListHasBeenSet;

                    /**
                     * Number of samples
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Statistical metric
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Maximum value of the arrays returned
                     */
                    uint64_t m_maxData;
                    bool m_maxDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBGPBIZTRENDRESPONSE_H_
