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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CDNDATA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CDNDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/TimestampData.h>
#include <tencentcloud/cdn/v20180606/model/SummarizedData.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Detailed access data
                */
                class CdnData : public AbstractModel
                {
                public:
                    CdnData();
                    ~CdnData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Queries by the specified metric:
`flux`: Traffic (in bytes)
`bandwidth`: Bandwidth (in bps)
`request`: Number of requests
`fluxHitRate`: Traffic hit rate (in %)
`statusCode`: Status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx status codes will be returned (in entries)
`2XX`: Returns the aggregate list of 2xx status codes and the data for status codes starting with 2 (in entries)
`3XX`: Returns the aggregate list of 3xx status codes and the data for status codes starting with 3 (in entries)
`4XX`: Returns the aggregate list of 4xx status codes and the data for status codes starting with 4 (in entries)
`5XX`: Returns the aggregate list of 5xx status codes and the data for status codes starting with 5 (in entries)
You can also specify a status code for querying.
                     * @return Metric Queries by the specified metric:
`flux`: Traffic (in bytes)
`bandwidth`: Bandwidth (in bps)
`request`: Number of requests
`fluxHitRate`: Traffic hit rate (in %)
`statusCode`: Status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx status codes will be returned (in entries)
`2XX`: Returns the aggregate list of 2xx status codes and the data for status codes starting with 2 (in entries)
`3XX`: Returns the aggregate list of 3xx status codes and the data for status codes starting with 3 (in entries)
`4XX`: Returns the aggregate list of 4xx status codes and the data for status codes starting with 4 (in entries)
`5XX`: Returns the aggregate list of 5xx status codes and the data for status codes starting with 5 (in entries)
You can also specify a status code for querying.
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Queries by the specified metric:
`flux`: Traffic (in bytes)
`bandwidth`: Bandwidth (in bps)
`request`: Number of requests
`fluxHitRate`: Traffic hit rate (in %)
`statusCode`: Status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx status codes will be returned (in entries)
`2XX`: Returns the aggregate list of 2xx status codes and the data for status codes starting with 2 (in entries)
`3XX`: Returns the aggregate list of 3xx status codes and the data for status codes starting with 3 (in entries)
`4XX`: Returns the aggregate list of 4xx status codes and the data for status codes starting with 4 (in entries)
`5XX`: Returns the aggregate list of 5xx status codes and the data for status codes starting with 5 (in entries)
You can also specify a status code for querying.
                     * @param Metric Queries by the specified metric:
`flux`: Traffic (in bytes)
`bandwidth`: Bandwidth (in bps)
`request`: Number of requests
`fluxHitRate`: Traffic hit rate (in %)
`statusCode`: Status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx status codes will be returned (in entries)
`2XX`: Returns the aggregate list of 2xx status codes and the data for status codes starting with 2 (in entries)
`3XX`: Returns the aggregate list of 3xx status codes and the data for status codes starting with 3 (in entries)
`4XX`: Returns the aggregate list of 4xx status codes and the data for status codes starting with 4 (in entries)
`5XX`: Returns the aggregate list of 5xx status codes and the data for status codes starting with 5 (in entries)
You can also specify a status code for querying.
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取Detailed data combination
                     * @return DetailData Detailed data combination
                     */
                    std::vector<TimestampData> GetDetailData() const;

                    /**
                     * 设置Detailed data combination
                     * @param DetailData Detailed data combination
                     */
                    void SetDetailData(const std::vector<TimestampData>& _detailData);

                    /**
                     * 判断参数 DetailData 是否已赋值
                     * @return DetailData 是否已赋值
                     */
                    bool DetailDataHasBeenSet() const;

                    /**
                     * 获取Aggregate data combination
                     * @return SummarizedData Aggregate data combination
                     */
                    SummarizedData GetSummarizedData() const;

                    /**
                     * 设置Aggregate data combination
                     * @param SummarizedData Aggregate data combination
                     */
                    void SetSummarizedData(const SummarizedData& _summarizedData);

                    /**
                     * 判断参数 SummarizedData 是否已赋值
                     * @return SummarizedData 是否已赋值
                     */
                    bool SummarizedDataHasBeenSet() const;

                private:

                    /**
                     * Queries by the specified metric:
`flux`: Traffic (in bytes)
`bandwidth`: Bandwidth (in bps)
`request`: Number of requests
`fluxHitRate`: Traffic hit rate (in %)
`statusCode`: Status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx status codes will be returned (in entries)
`2XX`: Returns the aggregate list of 2xx status codes and the data for status codes starting with 2 (in entries)
`3XX`: Returns the aggregate list of 3xx status codes and the data for status codes starting with 3 (in entries)
`4XX`: Returns the aggregate list of 4xx status codes and the data for status codes starting with 4 (in entries)
`5XX`: Returns the aggregate list of 5xx status codes and the data for status codes starting with 5 (in entries)
You can also specify a status code for querying.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Detailed data combination
                     */
                    std::vector<TimestampData> m_detailData;
                    bool m_detailDataHasBeenSet;

                    /**
                     * Aggregate data combination
                     */
                    SummarizedData m_summarizedData;
                    bool m_summarizedDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CDNDATA_H_
