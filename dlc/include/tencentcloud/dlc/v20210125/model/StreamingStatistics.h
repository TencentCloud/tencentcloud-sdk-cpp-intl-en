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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_STREAMINGSTATISTICS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_STREAMINGSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Statistics of the Spark flow task
                */
                class StreamingStatistics : public AbstractModel
                {
                public:
                    StreamingStatistics();
                    ~StreamingStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task start time
                     * @return StartTime Task start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task start time
                     * @param _startTime Task start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Number of data receivers
                     * @return Receivers Number of data receivers
                     * 
                     */
                    int64_t GetReceivers() const;

                    /**
                     * 设置Number of data receivers
                     * @param _receivers Number of data receivers
                     * 
                     */
                    void SetReceivers(const int64_t& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     * 
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取Number of receivers in service
                     * @return NumActiveReceivers Number of receivers in service
                     * 
                     */
                    int64_t GetNumActiveReceivers() const;

                    /**
                     * 设置Number of receivers in service
                     * @param _numActiveReceivers Number of receivers in service
                     * 
                     */
                    void SetNumActiveReceivers(const int64_t& _numActiveReceivers);

                    /**
                     * 判断参数 NumActiveReceivers 是否已赋值
                     * @return NumActiveReceivers 是否已赋值
                     * 
                     */
                    bool NumActiveReceiversHasBeenSet() const;

                    /**
                     * 获取Number of inactive receivers
                     * @return NumInactiveReceivers Number of inactive receivers
                     * 
                     */
                    int64_t GetNumInactiveReceivers() const;

                    /**
                     * 设置Number of inactive receivers
                     * @param _numInactiveReceivers Number of inactive receivers
                     * 
                     */
                    void SetNumInactiveReceivers(const int64_t& _numInactiveReceivers);

                    /**
                     * 判断参数 NumInactiveReceivers 是否已赋值
                     * @return NumInactiveReceivers 是否已赋值
                     * 
                     */
                    bool NumInactiveReceiversHasBeenSet() const;

                    /**
                     * 获取Number of running batches
                     * @return NumActiveBatches Number of running batches
                     * 
                     */
                    int64_t GetNumActiveBatches() const;

                    /**
                     * 设置Number of running batches
                     * @param _numActiveBatches Number of running batches
                     * 
                     */
                    void SetNumActiveBatches(const int64_t& _numActiveBatches);

                    /**
                     * 判断参数 NumActiveBatches 是否已赋值
                     * @return NumActiveBatches 是否已赋值
                     * 
                     */
                    bool NumActiveBatchesHasBeenSet() const;

                    /**
                     * 获取Number of batches to be processed
                     * @return NumRetainedCompletedBatches Number of batches to be processed
                     * 
                     */
                    int64_t GetNumRetainedCompletedBatches() const;

                    /**
                     * 设置Number of batches to be processed
                     * @param _numRetainedCompletedBatches Number of batches to be processed
                     * 
                     */
                    void SetNumRetainedCompletedBatches(const int64_t& _numRetainedCompletedBatches);

                    /**
                     * 判断参数 NumRetainedCompletedBatches 是否已赋值
                     * @return NumRetainedCompletedBatches 是否已赋值
                     * 
                     */
                    bool NumRetainedCompletedBatchesHasBeenSet() const;

                    /**
                     * 获取Number of completed batches
                     * @return NumTotalCompletedBatches Number of completed batches
                     * 
                     */
                    int64_t GetNumTotalCompletedBatches() const;

                    /**
                     * 设置Number of completed batches
                     * @param _numTotalCompletedBatches Number of completed batches
                     * 
                     */
                    void SetNumTotalCompletedBatches(const int64_t& _numTotalCompletedBatches);

                    /**
                     * 判断参数 NumTotalCompletedBatches 是否已赋值
                     * @return NumTotalCompletedBatches 是否已赋值
                     * 
                     */
                    bool NumTotalCompletedBatchesHasBeenSet() const;

                    /**
                     * 获取Average input speed
                     * @return AverageInputRate Average input speed
                     * 
                     */
                    double GetAverageInputRate() const;

                    /**
                     * 设置Average input speed
                     * @param _averageInputRate Average input speed
                     * 
                     */
                    void SetAverageInputRate(const double& _averageInputRate);

                    /**
                     * 判断参数 AverageInputRate 是否已赋值
                     * @return AverageInputRate 是否已赋值
                     * 
                     */
                    bool AverageInputRateHasBeenSet() const;

                    /**
                     * 获取Average queue time
                     * @return AverageSchedulingDelay Average queue time
                     * 
                     */
                    double GetAverageSchedulingDelay() const;

                    /**
                     * 设置Average queue time
                     * @param _averageSchedulingDelay Average queue time
                     * 
                     */
                    void SetAverageSchedulingDelay(const double& _averageSchedulingDelay);

                    /**
                     * 判断参数 AverageSchedulingDelay 是否已赋值
                     * @return AverageSchedulingDelay 是否已赋值
                     * 
                     */
                    bool AverageSchedulingDelayHasBeenSet() const;

                    /**
                     * 获取Average processing time
                     * @return AverageProcessingTime Average processing time
                     * 
                     */
                    double GetAverageProcessingTime() const;

                    /**
                     * 设置Average processing time
                     * @param _averageProcessingTime Average processing time
                     * 
                     */
                    void SetAverageProcessingTime(const double& _averageProcessingTime);

                    /**
                     * 判断参数 AverageProcessingTime 是否已赋值
                     * @return AverageProcessingTime 是否已赋值
                     * 
                     */
                    bool AverageProcessingTimeHasBeenSet() const;

                    /**
                     * 获取Average latency
                     * @return AverageTotalDelay Average latency
                     * 
                     */
                    double GetAverageTotalDelay() const;

                    /**
                     * 设置Average latency
                     * @param _averageTotalDelay Average latency
                     * 
                     */
                    void SetAverageTotalDelay(const double& _averageTotalDelay);

                    /**
                     * 判断参数 AverageTotalDelay 是否已赋值
                     * @return AverageTotalDelay 是否已赋值
                     * 
                     */
                    bool AverageTotalDelayHasBeenSet() const;

                private:

                    /**
                     * Task start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Number of data receivers
                     */
                    int64_t m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * Number of receivers in service
                     */
                    int64_t m_numActiveReceivers;
                    bool m_numActiveReceiversHasBeenSet;

                    /**
                     * Number of inactive receivers
                     */
                    int64_t m_numInactiveReceivers;
                    bool m_numInactiveReceiversHasBeenSet;

                    /**
                     * Number of running batches
                     */
                    int64_t m_numActiveBatches;
                    bool m_numActiveBatchesHasBeenSet;

                    /**
                     * Number of batches to be processed
                     */
                    int64_t m_numRetainedCompletedBatches;
                    bool m_numRetainedCompletedBatchesHasBeenSet;

                    /**
                     * Number of completed batches
                     */
                    int64_t m_numTotalCompletedBatches;
                    bool m_numTotalCompletedBatchesHasBeenSet;

                    /**
                     * Average input speed
                     */
                    double m_averageInputRate;
                    bool m_averageInputRateHasBeenSet;

                    /**
                     * Average queue time
                     */
                    double m_averageSchedulingDelay;
                    bool m_averageSchedulingDelayHasBeenSet;

                    /**
                     * Average processing time
                     */
                    double m_averageProcessingTime;
                    bool m_averageProcessingTimeHasBeenSet;

                    /**
                     * Average latency
                     */
                    double m_averageTotalDelay;
                    bool m_averageTotalDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_STREAMINGSTATISTICS_H_
