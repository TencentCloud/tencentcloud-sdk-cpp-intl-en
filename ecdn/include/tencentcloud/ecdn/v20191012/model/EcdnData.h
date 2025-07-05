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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_ECDNDATA_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_ECDNDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/TimestampData.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * Detailed access data type
                */
                class EcdnData : public AbstractModel
                {
                public:
                    EcdnData();
                    ~EcdnData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Queries the specified metric. Valid values: Bandwidth, Flux, Request, Delay, status code, LogBandwidth, LogFlux, LogRequest
                     * @return Metrics Queries the specified metric. Valid values: Bandwidth, Flux, Request, Delay, status code, LogBandwidth, LogFlux, LogRequest
                     * 
                     */
                    std::vector<std::string> GetMetrics() const;

                    /**
                     * 设置Queries the specified metric. Valid values: Bandwidth, Flux, Request, Delay, status code, LogBandwidth, LogFlux, LogRequest
                     * @param _metrics Queries the specified metric. Valid values: Bandwidth, Flux, Request, Delay, status code, LogBandwidth, LogFlux, LogRequest
                     * 
                     */
                    void SetMetrics(const std::vector<std::string>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取Detailed data collection
                     * @return DetailData Detailed data collection
                     * 
                     */
                    std::vector<TimestampData> GetDetailData() const;

                    /**
                     * 设置Detailed data collection
                     * @param _detailData Detailed data collection
                     * 
                     */
                    void SetDetailData(const std::vector<TimestampData>& _detailData);

                    /**
                     * 判断参数 DetailData 是否已赋值
                     * @return DetailData 是否已赋值
                     * 
                     */
                    bool DetailDataHasBeenSet() const;

                private:

                    /**
                     * Queries the specified metric. Valid values: Bandwidth, Flux, Request, Delay, status code, LogBandwidth, LogFlux, LogRequest
                     */
                    std::vector<std::string> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Detailed data collection
                     */
                    std::vector<TimestampData> m_detailData;
                    bool m_detailDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_ECDNDATA_H_
