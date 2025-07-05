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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AILATENCYSTATISTICS_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AILATENCYSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AILatencyStatisticsInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * AI latency statistics.
                */
                class AILatencyStatistics : public AbstractModel
                {
                public:
                    AILatencyStatistics();
                    ~AILatencyStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the asr latency statistics.
                     * @return ASRLatency Specifies the asr latency statistics.
                     * 
                     */
                    AILatencyStatisticsInfo GetASRLatency() const;

                    /**
                     * 设置Specifies the asr latency statistics.
                     * @param _aSRLatency Specifies the asr latency statistics.
                     * 
                     */
                    void SetASRLatency(const AILatencyStatisticsInfo& _aSRLatency);

                    /**
                     * 判断参数 ASRLatency 是否已赋值
                     * @return ASRLatency 是否已赋值
                     * 
                     */
                    bool ASRLatencyHasBeenSet() const;

                    /**
                     * 获取Specifies the statistics of tts delay.
                     * @return TTSLatency Specifies the statistics of tts delay.
                     * 
                     */
                    AILatencyStatisticsInfo GetTTSLatency() const;

                    /**
                     * 设置Specifies the statistics of tts delay.
                     * @param _tTSLatency Specifies the statistics of tts delay.
                     * 
                     */
                    void SetTTSLatency(const AILatencyStatisticsInfo& _tTSLatency);

                    /**
                     * 判断参数 TTSLatency 是否已赋值
                     * @return TTSLatency 是否已赋值
                     * 
                     */
                    bool TTSLatencyHasBeenSet() const;

                    /**
                     * 获取llm latency statistics.
                     * @return LLMLatency llm latency statistics.
                     * 
                     */
                    AILatencyStatisticsInfo GetLLMLatency() const;

                    /**
                     * 设置llm latency statistics.
                     * @param _lLMLatency llm latency statistics.
                     * 
                     */
                    void SetLLMLatency(const AILatencyStatisticsInfo& _lLMLatency);

                    /**
                     * 判断参数 LLMLatency 是否已赋值
                     * @return LLMLatency 是否已赋值
                     * 
                     */
                    bool LLMLatencyHasBeenSet() const;

                    /**
                     * 获取Specifies the end-to-end latency statistics.
                     * @return ETELatency Specifies the end-to-end latency statistics.
                     * 
                     */
                    AILatencyStatisticsInfo GetETELatency() const;

                    /**
                     * 设置Specifies the end-to-end latency statistics.
                     * @param _eTELatency Specifies the end-to-end latency statistics.
                     * 
                     */
                    void SetETELatency(const AILatencyStatisticsInfo& _eTELatency);

                    /**
                     * 判断参数 ETELatency 是否已赋值
                     * @return ETELatency 是否已赋值
                     * 
                     */
                    bool ETELatencyHasBeenSet() const;

                private:

                    /**
                     * Specifies the asr latency statistics.
                     */
                    AILatencyStatisticsInfo m_aSRLatency;
                    bool m_aSRLatencyHasBeenSet;

                    /**
                     * Specifies the statistics of tts delay.
                     */
                    AILatencyStatisticsInfo m_tTSLatency;
                    bool m_tTSLatencyHasBeenSet;

                    /**
                     * llm latency statistics.
                     */
                    AILatencyStatisticsInfo m_lLMLatency;
                    bool m_lLMLatencyHasBeenSet;

                    /**
                     * Specifies the end-to-end latency statistics.
                     */
                    AILatencyStatisticsInfo m_eTELatency;
                    bool m_eTELatencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AILATENCYSTATISTICS_H_
