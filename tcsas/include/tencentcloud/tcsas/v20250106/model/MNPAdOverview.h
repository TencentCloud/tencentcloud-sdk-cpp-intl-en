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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPADOVERVIEW_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPADOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Mini program ad overview.
                */
                class MNPAdOverview : public AbstractModel
                {
                public:
                    MNPAdOverview();
                    ~MNPAdOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Estimated revenue.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EstimatedEarnings Estimated revenue.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEstimatedEarnings() const;

                    /**
                     * 设置Estimated revenue.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _estimatedEarnings Estimated revenue.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEstimatedEarnings(const std::string& _estimatedEarnings);

                    /**
                     * 判断参数 EstimatedEarnings 是否已赋值
                     * @return EstimatedEarnings 是否已赋值
                     * 
                     */
                    bool EstimatedEarningsHasBeenSet() const;

                    /**
                     * 获取eCPM (effective cost per mille).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ECPM eCPM (effective cost per mille).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetECPM() const;

                    /**
                     * 设置eCPM (effective cost per mille).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eCPM eCPM (effective cost per mille).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetECPM(const std::string& _eCPM);

                    /**
                     * 判断参数 ECPM 是否已赋值
                     * @return ECPM 是否已赋值
                     * 
                     */
                    bool ECPMHasBeenSet() const;

                    /**
                     * 获取Number of requests.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RequestsNumber Number of requests.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRequestsNumber() const;

                    /**
                     * 设置Number of requests.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _requestsNumber Number of requests.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRequestsNumber(const int64_t& _requestsNumber);

                    /**
                     * 判断参数 RequestsNumber 是否已赋值
                     * @return RequestsNumber 是否已赋值
                     * 
                     */
                    bool RequestsNumberHasBeenSet() const;

                    /**
                     * 获取Number of impressions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Impressions Number of impressions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetImpressions() const;

                    /**
                     * 设置Number of impressions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _impressions Number of impressions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImpressions(const int64_t& _impressions);

                    /**
                     * 判断参数 Impressions 是否已赋值
                     * @return Impressions 是否已赋值
                     * 
                     */
                    bool ImpressionsHasBeenSet() const;

                    /**
                     * 获取Number of taps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClicksNumber Number of taps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetClicksNumber() const;

                    /**
                     * 设置Number of taps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clicksNumber Number of taps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClicksNumber(const int64_t& _clicksNumber);

                    /**
                     * 判断参数 ClicksNumber 是否已赋值
                     * @return ClicksNumber 是否已赋值
                     * 
                     */
                    bool ClicksNumberHasBeenSet() const;

                private:

                    /**
                     * Estimated revenue.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_estimatedEarnings;
                    bool m_estimatedEarningsHasBeenSet;

                    /**
                     * eCPM (effective cost per mille).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eCPM;
                    bool m_eCPMHasBeenSet;

                    /**
                     * Number of requests.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_requestsNumber;
                    bool m_requestsNumberHasBeenSet;

                    /**
                     * Number of impressions.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_impressions;
                    bool m_impressionsHasBeenSet;

                    /**
                     * Number of taps.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_clicksNumber;
                    bool m_clicksNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPADOVERVIEW_H_
