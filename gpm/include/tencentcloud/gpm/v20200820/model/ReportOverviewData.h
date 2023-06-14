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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_REPORTOVERVIEWDATA_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_REPORTOVERVIEWDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * Matchmaking statistics overview
                */
                class ReportOverviewData : public AbstractModel
                {
                public:
                    ReportOverviewData();
                    ~ReportOverviewData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total count
                     * @return TotalTimes Total count
                     * 
                     */
                    std::string GetTotalTimes() const;

                    /**
                     * 设置Total count
                     * @param _totalTimes Total count
                     * 
                     */
                    void SetTotalTimes(const std::string& _totalTimes);

                    /**
                     * 判断参数 TotalTimes 是否已赋值
                     * @return TotalTimes 是否已赋值
                     * 
                     */
                    bool TotalTimesHasBeenSet() const;

                    /**
                     * 获取Success rate
                     * @return SuccessPercent Success rate
                     * 
                     */
                    double GetSuccessPercent() const;

                    /**
                     * 设置Success rate
                     * @param _successPercent Success rate
                     * 
                     */
                    void SetSuccessPercent(const double& _successPercent);

                    /**
                     * 判断参数 SuccessPercent 是否已赋值
                     * @return SuccessPercent 是否已赋值
                     * 
                     */
                    bool SuccessPercentHasBeenSet() const;

                    /**
                     * 获取Timeout rate
                     * @return TimeoutPercent Timeout rate
                     * 
                     */
                    double GetTimeoutPercent() const;

                    /**
                     * 设置Timeout rate
                     * @param _timeoutPercent Timeout rate
                     * 
                     */
                    void SetTimeoutPercent(const double& _timeoutPercent);

                    /**
                     * 判断参数 TimeoutPercent 是否已赋值
                     * @return TimeoutPercent 是否已赋值
                     * 
                     */
                    bool TimeoutPercentHasBeenSet() const;

                    /**
                     * 获取Failure rate
                     * @return FailPercent Failure rate
                     * 
                     */
                    double GetFailPercent() const;

                    /**
                     * 设置Failure rate
                     * @param _failPercent Failure rate
                     * 
                     */
                    void SetFailPercent(const double& _failPercent);

                    /**
                     * 判断参数 FailPercent 是否已赋值
                     * @return FailPercent 是否已赋值
                     * 
                     */
                    bool FailPercentHasBeenSet() const;

                    /**
                     * 获取Average matching time
                     * @return AverageSec Average matching time
                     * 
                     */
                    double GetAverageSec() const;

                    /**
                     * 设置Average matching time
                     * @param _averageSec Average matching time
                     * 
                     */
                    void SetAverageSec(const double& _averageSec);

                    /**
                     * 判断参数 AverageSec 是否已赋值
                     * @return AverageSec 是否已赋值
                     * 
                     */
                    bool AverageSecHasBeenSet() const;

                private:

                    /**
                     * Total count
                     */
                    std::string m_totalTimes;
                    bool m_totalTimesHasBeenSet;

                    /**
                     * Success rate
                     */
                    double m_successPercent;
                    bool m_successPercentHasBeenSet;

                    /**
                     * Timeout rate
                     */
                    double m_timeoutPercent;
                    bool m_timeoutPercentHasBeenSet;

                    /**
                     * Failure rate
                     */
                    double m_failPercent;
                    bool m_failPercentHasBeenSet;

                    /**
                     * Average matching time
                     */
                    double m_averageSec;
                    bool m_averageSecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_REPORTOVERVIEWDATA_H_
