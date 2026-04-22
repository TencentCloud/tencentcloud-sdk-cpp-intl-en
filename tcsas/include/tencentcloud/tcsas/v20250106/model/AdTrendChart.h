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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_ADTRENDCHART_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_ADTRENDCHART_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/AnalysisData.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Advertising line chart data
                */
                class AdTrendChart : public AbstractModel
                {
                public:
                    AdTrendChart();
                    ~AdTrendChart() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Estimated revenue
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EstimatedEarnings Estimated revenue
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalysisData> GetEstimatedEarnings() const;

                    /**
                     * 设置Estimated revenue
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _estimatedEarnings Estimated revenue
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEstimatedEarnings(const std::vector<AnalysisData>& _estimatedEarnings);

                    /**
                     * 判断参数 EstimatedEarnings 是否已赋值
                     * @return EstimatedEarnings 是否已赋值
                     * 
                     */
                    bool EstimatedEarningsHasBeenSet() const;

                    /**
                     * 获取Requests
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RequestsNumber Requests
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalysisData> GetRequestsNumber() const;

                    /**
                     * 设置Requests
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _requestsNumber Requests
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRequestsNumber(const std::vector<AnalysisData>& _requestsNumber);

                    /**
                     * 判断参数 RequestsNumber 是否已赋值
                     * @return RequestsNumber 是否已赋值
                     * 
                     */
                    bool RequestsNumberHasBeenSet() const;

                    /**
                     * 获取Impressions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Impressions Impressions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalysisData> GetImpressions() const;

                    /**
                     * 设置Impressions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _impressions Impressions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImpressions(const std::vector<AnalysisData>& _impressions);

                    /**
                     * 判断参数 Impressions 是否已赋值
                     * @return Impressions 是否已赋值
                     * 
                     */
                    bool ImpressionsHasBeenSet() const;

                    /**
                     * 获取Effective Cost Per Mille
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ECPM Effective Cost Per Mille
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalysisData> GetECPM() const;

                    /**
                     * 设置Effective Cost Per Mille
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eCPM Effective Cost Per Mille
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetECPM(const std::vector<AnalysisData>& _eCPM);

                    /**
                     * 判断参数 ECPM 是否已赋值
                     * @return ECPM 是否已赋值
                     * 
                     */
                    bool ECPMHasBeenSet() const;

                    /**
                     * 获取Taps
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClicksNumber Taps
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalysisData> GetClicksNumber() const;

                    /**
                     * 设置Taps
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clicksNumber Taps
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClicksNumber(const std::vector<AnalysisData>& _clicksNumber);

                    /**
                     * 判断参数 ClicksNumber 是否已赋值
                     * @return ClicksNumber 是否已赋值
                     * 
                     */
                    bool ClicksNumberHasBeenSet() const;

                private:

                    /**
                     * Estimated revenue
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalysisData> m_estimatedEarnings;
                    bool m_estimatedEarningsHasBeenSet;

                    /**
                     * Requests
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalysisData> m_requestsNumber;
                    bool m_requestsNumberHasBeenSet;

                    /**
                     * Impressions
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalysisData> m_impressions;
                    bool m_impressionsHasBeenSet;

                    /**
                     * Effective Cost Per Mille
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalysisData> m_eCPM;
                    bool m_eCPMHasBeenSet;

                    /**
                     * Taps
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalysisData> m_clicksNumber;
                    bool m_clicksNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_ADTRENDCHART_H_
