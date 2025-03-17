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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_REQUESTSUMMARY_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_REQUESTSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Request details in performance test.
                */
                class RequestSummary : public AbstractModel
                {
                public:
                    RequestSummary();
                    ~RequestSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Request URL.
                     * @return Service Request URL.
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置Request URL.
                     * @param _service Request URL.
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取Request method.
                     * @return Method Request method.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Request method.
                     * @param _method Request method.
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Number of requests.
                     * @return Count Number of requests.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of requests.
                     * @param _count Number of requests.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Average request response time (seconds).
                     * @return Average Average request response time (seconds).
                     * 
                     */
                    double GetAverage() const;

                    /**
                     * 设置Average request response time (seconds).
                     * @param _average Average request response time (seconds).
                     * 
                     */
                    void SetAverage(const double& _average);

                    /**
                     * 判断参数 Average 是否已赋值
                     * @return Average 是否已赋值
                     * 
                     */
                    bool AverageHasBeenSet() const;

                    /**
                     * 获取Request p90 latency (seconds).
                     * @return P90 Request p90 latency (seconds).
                     * 
                     */
                    double GetP90() const;

                    /**
                     * 设置Request p90 latency (seconds).
                     * @param _p90 Request p90 latency (seconds).
                     * 
                     */
                    void SetP90(const double& _p90);

                    /**
                     * 判断参数 P90 是否已赋值
                     * @return P90 是否已赋值
                     * 
                     */
                    bool P90HasBeenSet() const;

                    /**
                     * 获取Request p95 latency (seconds).
                     * @return P95 Request p95 latency (seconds).
                     * 
                     */
                    double GetP95() const;

                    /**
                     * 设置Request p95 latency (seconds).
                     * @param _p95 Request p95 latency (seconds).
                     * 
                     */
                    void SetP95(const double& _p95);

                    /**
                     * 判断参数 P95 是否已赋值
                     * @return P95 是否已赋值
                     * 
                     */
                    bool P95HasBeenSet() const;

                    /**
                     * 获取Minimum request latency (seconds).
                     * @return Min Minimum request latency (seconds).
                     * 
                     */
                    double GetMin() const;

                    /**
                     * 设置Minimum request latency (seconds).
                     * @param _min Minimum request latency (seconds).
                     * 
                     */
                    void SetMin(const double& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Maximum request latency (seconds).
                     * @return Max Maximum request latency (seconds).
                     * 
                     */
                    double GetMax() const;

                    /**
                     * 设置Maximum request latency (seconds).
                     * @param _max Maximum request latency (seconds).
                     * 
                     */
                    void SetMax(const double& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取Request error rate.
                     * @return ErrorPercentage Request error rate.
                     * 
                     */
                    double GetErrorPercentage() const;

                    /**
                     * 设置Request error rate.
                     * @param _errorPercentage Request error rate.
                     * 
                     */
                    void SetErrorPercentage(const double& _errorPercentage);

                    /**
                     * 判断参数 ErrorPercentage 是否已赋值
                     * @return ErrorPercentage 是否已赋值
                     * 
                     */
                    bool ErrorPercentageHasBeenSet() const;

                    /**
                     * 获取Request p99 latency (seconds).
                     * @return P99 Request p99 latency (seconds).
                     * 
                     */
                    double GetP99() const;

                    /**
                     * 设置Request p99 latency (seconds).
                     * @param _p99 Request p99 latency (seconds).
                     * 
                     */
                    void SetP99(const double& _p99);

                    /**
                     * 判断参数 P99 是否已赋值
                     * @return P99 是否已赋值
                     * 
                     */
                    bool P99HasBeenSet() const;

                    /**
                     * 获取Response status code.
                     * @return Status Response status code.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Response status code.
                     * @param _status Response status code.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Response details.
                     * @return Result Response details.
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置Response details.
                     * @param _result Response details.
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Request per seconds, unit req/s.
                     * @return RPS Request per seconds, unit req/s.
                     * 
                     */
                    double GetRPS() const;

                    /**
                     * 设置Request per seconds, unit req/s.
                     * @param _rPS Request per seconds, unit req/s.
                     * 
                     */
                    void SetRPS(const double& _rPS);

                    /**
                     * 判断参数 RPS 是否已赋值
                     * @return RPS 是否已赋值
                     * 
                     */
                    bool RPSHasBeenSet() const;

                private:

                    /**
                     * Request URL.
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * Request method.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Number of requests.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Average request response time (seconds).
                     */
                    double m_average;
                    bool m_averageHasBeenSet;

                    /**
                     * Request p90 latency (seconds).
                     */
                    double m_p90;
                    bool m_p90HasBeenSet;

                    /**
                     * Request p95 latency (seconds).
                     */
                    double m_p95;
                    bool m_p95HasBeenSet;

                    /**
                     * Minimum request latency (seconds).
                     */
                    double m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Maximum request latency (seconds).
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Request error rate.
                     */
                    double m_errorPercentage;
                    bool m_errorPercentageHasBeenSet;

                    /**
                     * Request p99 latency (seconds).
                     */
                    double m_p99;
                    bool m_p99HasBeenSet;

                    /**
                     * Response status code.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Response details.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Request per seconds, unit req/s.
                     */
                    double m_rPS;
                    bool m_rPSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_REQUESTSUMMARY_H_
