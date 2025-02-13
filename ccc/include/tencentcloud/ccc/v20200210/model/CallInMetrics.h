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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CALLINMETRICS_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CALLINMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Real-Time inbound metric.
                */
                class CallInMetrics : public AbstractModel
                {
                public:
                    CallInMetrics();
                    ~CallInMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of ivr residency.
                     * @return IvrCount Number of ivr residency.
                     * 
                     */
                    int64_t GetIvrCount() const;

                    /**
                     * 设置Number of ivr residency.
                     * @param _ivrCount Number of ivr residency.
                     * 
                     */
                    void SetIvrCount(const int64_t& _ivrCount);

                    /**
                     * 判断参数 IvrCount 是否已赋值
                     * @return IvrCount 是否已赋值
                     * 
                     */
                    bool IvrCountHasBeenSet() const;

                    /**
                     * 获取Number in queue.
                     * @return QueueCount Number in queue.
                     * 
                     */
                    int64_t GetQueueCount() const;

                    /**
                     * 设置Number in queue.
                     * @param _queueCount Number in queue.
                     * 
                     */
                    void SetQueueCount(const int64_t& _queueCount);

                    /**
                     * 判断参数 QueueCount 是否已赋值
                     * @return QueueCount 是否已赋值
                     * 
                     */
                    bool QueueCountHasBeenSet() const;

                    /**
                     * 获取Number in ringing.
                     * @return RingCount Number in ringing.
                     * 
                     */
                    int64_t GetRingCount() const;

                    /**
                     * 设置Number in ringing.
                     * @param _ringCount Number in ringing.
                     * 
                     */
                    void SetRingCount(const int64_t& _ringCount);

                    /**
                     * 判断参数 RingCount 是否已赋值
                     * @return RingCount 是否已赋值
                     * 
                     */
                    bool RingCountHasBeenSet() const;

                    /**
                     * 获取Number of connections.
                     * @return AcceptCount Number of connections.
                     * 
                     */
                    int64_t GetAcceptCount() const;

                    /**
                     * 设置Number of connections.
                     * @param _acceptCount Number of connections.
                     * 
                     */
                    void SetAcceptCount(const int64_t& _acceptCount);

                    /**
                     * 判断参数 AcceptCount 是否已赋值
                     * @return AcceptCount 是否已赋值
                     * 
                     */
                    bool AcceptCountHasBeenSet() const;

                    /**
                     * 获取Number of customer service transferring to the external line.
                     * @return TransferOuterCount Number of customer service transferring to the external line.
                     * 
                     */
                    int64_t GetTransferOuterCount() const;

                    /**
                     * 设置Number of customer service transferring to the external line.
                     * @param _transferOuterCount Number of customer service transferring to the external line.
                     * 
                     */
                    void SetTransferOuterCount(const int64_t& _transferOuterCount);

                    /**
                     * 判断参数 TransferOuterCount 是否已赋值
                     * @return TransferOuterCount 是否已赋值
                     * 
                     */
                    bool TransferOuterCountHasBeenSet() const;

                    /**
                     * 获取Maximum queue duration.
                     * @return MaxQueueDuration Maximum queue duration.
                     * 
                     */
                    int64_t GetMaxQueueDuration() const;

                    /**
                     * 设置Maximum queue duration.
                     * @param _maxQueueDuration Maximum queue duration.
                     * 
                     */
                    void SetMaxQueueDuration(const int64_t& _maxQueueDuration);

                    /**
                     * 判断参数 MaxQueueDuration 是否已赋值
                     * @return MaxQueueDuration 是否已赋值
                     * 
                     */
                    bool MaxQueueDurationHasBeenSet() const;

                    /**
                     * 获取Average queue duration.
                     * @return AvgQueueDuration Average queue duration.
                     * 
                     */
                    int64_t GetAvgQueueDuration() const;

                    /**
                     * 设置Average queue duration.
                     * @param _avgQueueDuration Average queue duration.
                     * 
                     */
                    void SetAvgQueueDuration(const int64_t& _avgQueueDuration);

                    /**
                     * 判断参数 AvgQueueDuration 是否已赋值
                     * @return AvgQueueDuration 是否已赋值
                     * 
                     */
                    bool AvgQueueDurationHasBeenSet() const;

                    /**
                     * 获取Maximum ringing duration.
                     * @return MaxRingDuration Maximum ringing duration.
                     * 
                     */
                    int64_t GetMaxRingDuration() const;

                    /**
                     * 设置Maximum ringing duration.
                     * @param _maxRingDuration Maximum ringing duration.
                     * 
                     */
                    void SetMaxRingDuration(const int64_t& _maxRingDuration);

                    /**
                     * 判断参数 MaxRingDuration 是否已赋值
                     * @return MaxRingDuration 是否已赋值
                     * 
                     */
                    bool MaxRingDurationHasBeenSet() const;

                    /**
                     * 获取Average ringing duration.
                     * @return AvgRingDuration Average ringing duration.
                     * 
                     */
                    int64_t GetAvgRingDuration() const;

                    /**
                     * 设置Average ringing duration.
                     * @param _avgRingDuration Average ringing duration.
                     * 
                     */
                    void SetAvgRingDuration(const int64_t& _avgRingDuration);

                    /**
                     * 判断参数 AvgRingDuration 是否已赋值
                     * @return AvgRingDuration 是否已赋值
                     * 
                     */
                    bool AvgRingDurationHasBeenSet() const;

                    /**
                     * 获取Maximum connection duration.
                     * @return MaxAcceptDuration Maximum connection duration.
                     * 
                     */
                    int64_t GetMaxAcceptDuration() const;

                    /**
                     * 设置Maximum connection duration.
                     * @param _maxAcceptDuration Maximum connection duration.
                     * 
                     */
                    void SetMaxAcceptDuration(const int64_t& _maxAcceptDuration);

                    /**
                     * 判断参数 MaxAcceptDuration 是否已赋值
                     * @return MaxAcceptDuration 是否已赋值
                     * 
                     */
                    bool MaxAcceptDurationHasBeenSet() const;

                    /**
                     * 获取Average connection duration.
                     * @return AvgAcceptDuration Average connection duration.
                     * 
                     */
                    int64_t GetAvgAcceptDuration() const;

                    /**
                     * 设置Average connection duration.
                     * @param _avgAcceptDuration Average connection duration.
                     * 
                     */
                    void SetAvgAcceptDuration(const int64_t& _avgAcceptDuration);

                    /**
                     * 判断参数 AvgAcceptDuration 是否已赋值
                     * @return AvgAcceptDuration 是否已赋值
                     * 
                     */
                    bool AvgAcceptDurationHasBeenSet() const;

                private:

                    /**
                     * Number of ivr residency.
                     */
                    int64_t m_ivrCount;
                    bool m_ivrCountHasBeenSet;

                    /**
                     * Number in queue.
                     */
                    int64_t m_queueCount;
                    bool m_queueCountHasBeenSet;

                    /**
                     * Number in ringing.
                     */
                    int64_t m_ringCount;
                    bool m_ringCountHasBeenSet;

                    /**
                     * Number of connections.
                     */
                    int64_t m_acceptCount;
                    bool m_acceptCountHasBeenSet;

                    /**
                     * Number of customer service transferring to the external line.
                     */
                    int64_t m_transferOuterCount;
                    bool m_transferOuterCountHasBeenSet;

                    /**
                     * Maximum queue duration.
                     */
                    int64_t m_maxQueueDuration;
                    bool m_maxQueueDurationHasBeenSet;

                    /**
                     * Average queue duration.
                     */
                    int64_t m_avgQueueDuration;
                    bool m_avgQueueDurationHasBeenSet;

                    /**
                     * Maximum ringing duration.
                     */
                    int64_t m_maxRingDuration;
                    bool m_maxRingDurationHasBeenSet;

                    /**
                     * Average ringing duration.
                     */
                    int64_t m_avgRingDuration;
                    bool m_avgRingDurationHasBeenSet;

                    /**
                     * Maximum connection duration.
                     */
                    int64_t m_maxAcceptDuration;
                    bool m_maxAcceptDurationHasBeenSet;

                    /**
                     * Average connection duration.
                     */
                    int64_t m_avgAcceptDuration;
                    bool m_avgAcceptDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CALLINMETRICS_H_
