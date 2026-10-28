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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELPARAMS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Model parameters
                */
                class ModelParams : public AbstractModel
                {
                public:
                    ModelParams();
                    ~ModelParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether deep thinking is enabled</p>
                     * @return DeepThinking <p>Whether deep thinking is enabled</p>
                     * 
                     */
                    std::string GetDeepThinking() const;

                    /**
                     * 设置<p>Whether deep thinking is enabled</p>
                     * @param _deepThinking <p>Whether deep thinking is enabled</p>
                     * 
                     */
                    void SetDeepThinking(const std::string& _deepThinking);

                    /**
                     * 判断参数 DeepThinking 是否已赋值
                     * @return DeepThinking 是否已赋值
                     * 
                     */
                    bool DeepThinkingHasBeenSet() const;

                    /**
                     * 获取<p>Frequency penalty</p>
                     * @return FrequencyPenalty <p>Frequency penalty</p>
                     * 
                     */
                    double GetFrequencyPenalty() const;

                    /**
                     * 设置<p>Frequency penalty</p>
                     * @param _frequencyPenalty <p>Frequency penalty</p>
                     * 
                     */
                    void SetFrequencyPenalty(const double& _frequencyPenalty);

                    /**
                     * 判断参数 FrequencyPenalty 是否已赋值
                     * @return FrequencyPenalty 是否已赋值
                     * 
                     */
                    bool FrequencyPenaltyHasBeenSet() const;

                    /**
                     * 获取<p>Maximum output length</p>
                     * @return MaxTokens <p>Maximum output length</p>
                     * 
                     */
                    int64_t GetMaxTokens() const;

                    /**
                     * 设置<p>Maximum output length</p>
                     * @param _maxTokens <p>Maximum output length</p>
                     * 
                     */
                    void SetMaxTokens(const int64_t& _maxTokens);

                    /**
                     * 判断参数 MaxTokens 是否已赋值
                     * @return MaxTokens 是否已赋值
                     * 
                     */
                    bool MaxTokensHasBeenSet() const;

                    /**
                     * 获取<p>Existence penalty</p>
                     * @return PresencePenalty <p>Existence penalty</p>
                     * 
                     */
                    double GetPresencePenalty() const;

                    /**
                     * 设置<p>Existence penalty</p>
                     * @param _presencePenalty <p>Existence penalty</p>
                     * 
                     */
                    void SetPresencePenalty(const double& _presencePenalty);

                    /**
                     * 判断参数 PresencePenalty 是否已赋值
                     * @return PresencePenalty 是否已赋值
                     * 
                     */
                    bool PresencePenaltyHasBeenSet() const;

                    /**
                     * 获取<p>Deep thinking effect</p>
                     * @return ReasoningEffort <p>Deep thinking effect</p>
                     * 
                     */
                    std::string GetReasoningEffort() const;

                    /**
                     * 设置<p>Deep thinking effect</p>
                     * @param _reasoningEffort <p>Deep thinking effect</p>
                     * 
                     */
                    void SetReasoningEffort(const std::string& _reasoningEffort);

                    /**
                     * 判断参数 ReasoningEffort 是否已赋值
                     * @return ReasoningEffort 是否已赋值
                     * 
                     */
                    bool ReasoningEffortHasBeenSet() const;

                    /**
                     * 获取<p>Repetition penalty</p>
                     * @return RepetitionPenalty <p>Repetition penalty</p>
                     * 
                     */
                    double GetRepetitionPenalty() const;

                    /**
                     * 设置<p>Repetition penalty</p>
                     * @param _repetitionPenalty <p>Repetition penalty</p>
                     * 
                     */
                    void SetRepetitionPenalty(const double& _repetitionPenalty);

                    /**
                     * 判断参数 RepetitionPenalty 是否已赋值
                     * @return RepetitionPenalty 是否已赋值
                     * 
                     */
                    bool RepetitionPenaltyHasBeenSet() const;

                    /**
                     * 获取<p>Output format (text, json_object)</p>
                     * @return ReplyFormat <p>Output format (text, json_object)</p>
                     * 
                     */
                    std::string GetReplyFormat() const;

                    /**
                     * 设置<p>Output format (text, json_object)</p>
                     * @param _replyFormat <p>Output format (text, json_object)</p>
                     * 
                     */
                    void SetReplyFormat(const std::string& _replyFormat);

                    /**
                     * 判断参数 ReplyFormat 是否已赋值
                     * @return ReplyFormat 是否已赋值
                     * 
                     */
                    bool ReplyFormatHasBeenSet() const;

                    /**
                     * 获取<p>Random seed</p>
                     * @return Seed <p>Random seed</p>
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置<p>Random seed</p>
                     * @param _seed <p>Random seed</p>
                     * 
                     */
                    void SetSeed(const int64_t& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取<p>Stop sequence</p>
                     * @return StopSequenceList <p>Stop sequence</p>
                     * 
                     */
                    std::vector<std::string> GetStopSequenceList() const;

                    /**
                     * 设置<p>Stop sequence</p>
                     * @param _stopSequenceList <p>Stop sequence</p>
                     * 
                     */
                    void SetStopSequenceList(const std::vector<std::string>& _stopSequenceList);

                    /**
                     * 判断参数 StopSequenceList 是否已赋值
                     * @return StopSequenceList 是否已赋值
                     * 
                     */
                    bool StopSequenceListHasBeenSet() const;

                    /**
                     * 获取<p>Temperature</p>
                     * @return Temperature <p>Temperature</p>
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置<p>Temperature</p>
                     * @param _temperature <p>Temperature</p>
                     * 
                     */
                    void SetTemperature(const double& _temperature);

                    /**
                     * 判断参数 Temperature 是否已赋值
                     * @return Temperature 是否已赋值
                     * 
                     */
                    bool TemperatureHasBeenSet() const;

                    /**
                     * 获取<p>top_p</p>
                     * @return TopP <p>top_p</p>
                     * 
                     */
                    double GetTopP() const;

                    /**
                     * 设置<p>top_p</p>
                     * @param _topP <p>top_p</p>
                     * 
                     */
                    void SetTopP(const double& _topP);

                    /**
                     * 判断参数 TopP 是否已赋值
                     * @return TopP 是否已赋值
                     * 
                     */
                    bool TopPHasBeenSet() const;

                    /**
                     * 获取<p>top_k</p>
                     * @return TopK <p>top_k</p>
                     * 
                     */
                    int64_t GetTopK() const;

                    /**
                     * 设置<p>top_k</p>
                     * @param _topK <p>top_k</p>
                     * 
                     */
                    void SetTopK(const int64_t& _topK);

                    /**
                     * 判断参数 TopK 是否已赋值
                     * @return TopK 是否已赋值
                     * 
                     */
                    bool TopKHasBeenSet() const;

                private:

                    /**
                     * <p>Whether deep thinking is enabled</p>
                     */
                    std::string m_deepThinking;
                    bool m_deepThinkingHasBeenSet;

                    /**
                     * <p>Frequency penalty</p>
                     */
                    double m_frequencyPenalty;
                    bool m_frequencyPenaltyHasBeenSet;

                    /**
                     * <p>Maximum output length</p>
                     */
                    int64_t m_maxTokens;
                    bool m_maxTokensHasBeenSet;

                    /**
                     * <p>Existence penalty</p>
                     */
                    double m_presencePenalty;
                    bool m_presencePenaltyHasBeenSet;

                    /**
                     * <p>Deep thinking effect</p>
                     */
                    std::string m_reasoningEffort;
                    bool m_reasoningEffortHasBeenSet;

                    /**
                     * <p>Repetition penalty</p>
                     */
                    double m_repetitionPenalty;
                    bool m_repetitionPenaltyHasBeenSet;

                    /**
                     * <p>Output format (text, json_object)</p>
                     */
                    std::string m_replyFormat;
                    bool m_replyFormatHasBeenSet;

                    /**
                     * <p>Random seed</p>
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * <p>Stop sequence</p>
                     */
                    std::vector<std::string> m_stopSequenceList;
                    bool m_stopSequenceListHasBeenSet;

                    /**
                     * <p>Temperature</p>
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * <p>top_p</p>
                     */
                    double m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * <p>top_k</p>
                     */
                    int64_t m_topK;
                    bool m_topKHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELPARAMS_H_
