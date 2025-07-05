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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AILATENCYDETAIL_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AILATENCYDETAIL_H_

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
                * AI latency details.
                */
                class AILatencyDetail : public AbstractModel
                {
                public:
                    AILatencyDetail();
                    ~AILatencyDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dialog ID.
                     * @return RoundId Dialog ID.
                     * 
                     */
                    std::string GetRoundId() const;

                    /**
                     * 设置Dialog ID.
                     * @param _roundId Dialog ID.
                     * 
                     */
                    void SetRoundId(const std::string& _roundId);

                    /**
                     * 判断参数 RoundId 是否已赋值
                     * @return RoundId 是否已赋值
                     * 
                     */
                    bool RoundIdHasBeenSet() const;

                    /**
                     * 获取Specifies the asr latency in milliseconds.
                     * @return ASRLatency Specifies the asr latency in milliseconds.
                     * 
                     */
                    int64_t GetASRLatency() const;

                    /**
                     * 设置Specifies the asr latency in milliseconds.
                     * @param _aSRLatency Specifies the asr latency in milliseconds.
                     * 
                     */
                    void SetASRLatency(const int64_t& _aSRLatency);

                    /**
                     * 判断参数 ASRLatency 是否已赋值
                     * @return ASRLatency 是否已赋值
                     * 
                     */
                    bool ASRLatencyHasBeenSet() const;

                    /**
                     * 获取Specifies the tts delay in milliseconds.
                     * @return TTSLatency Specifies the tts delay in milliseconds.
                     * 
                     */
                    int64_t GetTTSLatency() const;

                    /**
                     * 设置Specifies the tts delay in milliseconds.
                     * @param _tTSLatency Specifies the tts delay in milliseconds.
                     * 
                     */
                    void SetTTSLatency(const int64_t& _tTSLatency);

                    /**
                     * 判断参数 TTSLatency 是否已赋值
                     * @return TTSLatency 是否已赋值
                     * 
                     */
                    bool TTSLatencyHasBeenSet() const;

                    /**
                     * 获取llm latency (ms).
                     * @return LLMLatency llm latency (ms).
                     * 
                     */
                    int64_t GetLLMLatency() const;

                    /**
                     * 设置llm latency (ms).
                     * @param _lLMLatency llm latency (ms).
                     * 
                     */
                    void SetLLMLatency(const int64_t& _lLMLatency);

                    /**
                     * 判断参数 LLMLatency 是否已赋值
                     * @return LLMLatency 是否已赋值
                     * 
                     */
                    bool LLMLatencyHasBeenSet() const;

                    /**
                     * 获取End-To-End delay (ms).
                     * @return ETELatency End-To-End delay (ms).
                     * 
                     */
                    int64_t GetETELatency() const;

                    /**
                     * 设置End-To-End delay (ms).
                     * @param _eTELatency End-To-End delay (ms).
                     * 
                     */
                    void SetETELatency(const int64_t& _eTELatency);

                    /**
                     * 判断参数 ETELatency 是否已赋值
                     * @return ETELatency 是否已赋值
                     * 
                     */
                    bool ETELatencyHasBeenSet() const;

                private:

                    /**
                     * Dialog ID.
                     */
                    std::string m_roundId;
                    bool m_roundIdHasBeenSet;

                    /**
                     * Specifies the asr latency in milliseconds.
                     */
                    int64_t m_aSRLatency;
                    bool m_aSRLatencyHasBeenSet;

                    /**
                     * Specifies the tts delay in milliseconds.
                     */
                    int64_t m_tTSLatency;
                    bool m_tTSLatencyHasBeenSet;

                    /**
                     * llm latency (ms).
                     */
                    int64_t m_lLMLatency;
                    bool m_lLMLatencyHasBeenSet;

                    /**
                     * End-To-End delay (ms).
                     */
                    int64_t m_eTELatency;
                    bool m_eTELatencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AILATENCYDETAIL_H_
