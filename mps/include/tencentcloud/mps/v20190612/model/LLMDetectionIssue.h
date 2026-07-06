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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LLMDETECTIONISSUE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LLMDETECTIONISSUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Issue detected by the LLM.
                */
                class LLMDetectionIssue : public AbstractModel
                {
                public:
                    LLMDetectionIssue();
                    ~LLMDetectionIssue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Issue category tag.</p>
                     * @return Tag <p>Issue category tag.</p>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>Issue category tag.</p>
                     * @param _tag <p>Issue category tag.</p>
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>Issue description.</p>
                     * @return Description <p>Issue description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Issue description.</p>
                     * @param _description <p>Issue description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Quality score of the issue. Value range: [0, 100].</p>
                     * @return Score <p>Quality score of the issue. Value range: [0, 100].</p>
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置<p>Quality score of the issue. Value range: [0, 100].</p>
                     * @param _score <p>Quality score of the issue. Value range: [0, 100].</p>
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取<p>Detection confidence for the issue. Value range: [0, 100].</p>
                     * @return Confidence <p>Detection confidence for the issue. Value range: [0, 100].</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>Detection confidence for the issue. Value range: [0, 100].</p>
                     * @param _confidence <p>Detection confidence for the issue. Value range: [0, 100].</p>
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取<p>Issue start time (ms).</p>
                     * @return StartTimeMs <p>Issue start time (ms).</p>
                     * 
                     */
                    int64_t GetStartTimeMs() const;

                    /**
                     * 设置<p>Issue start time (ms).</p>
                     * @param _startTimeMs <p>Issue start time (ms).</p>
                     * 
                     */
                    void SetStartTimeMs(const int64_t& _startTimeMs);

                    /**
                     * 判断参数 StartTimeMs 是否已赋值
                     * @return StartTimeMs 是否已赋值
                     * 
                     */
                    bool StartTimeMsHasBeenSet() const;

                    /**
                     * 获取<p>Issue end time (ms).</p>
                     * @return EndTimeMs <p>Issue end time (ms).</p>
                     * 
                     */
                    int64_t GetEndTimeMs() const;

                    /**
                     * 设置<p>Issue end time (ms).</p>
                     * @param _endTimeMs <p>Issue end time (ms).</p>
                     * 
                     */
                    void SetEndTimeMs(const int64_t& _endTimeMs);

                    /**
                     * 判断参数 EndTimeMs 是否已赋值
                     * @return EndTimeMs 是否已赋值
                     * 
                     */
                    bool EndTimeMsHasBeenSet() const;

                    /**
                     * 获取<p>Additional data (JSON format), such as severity and other supplementary information.</p>
                     * @return ExtraData <p>Additional data (JSON format), such as severity and other supplementary information.</p>
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置<p>Additional data (JSON format), such as severity and other supplementary information.</p>
                     * @param _extraData <p>Additional data (JSON format), such as severity and other supplementary information.</p>
                     * 
                     */
                    void SetExtraData(const std::string& _extraData);

                    /**
                     * 判断参数 ExtraData 是否已赋值
                     * @return ExtraData 是否已赋值
                     * 
                     */
                    bool ExtraDataHasBeenSet() const;

                private:

                    /**
                     * <p>Issue category tag.</p>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>Issue description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Quality score of the issue. Value range: [0, 100].</p>
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>Detection confidence for the issue. Value range: [0, 100].</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>Issue start time (ms).</p>
                     */
                    int64_t m_startTimeMs;
                    bool m_startTimeMsHasBeenSet;

                    /**
                     * <p>Issue end time (ms).</p>
                     */
                    int64_t m_endTimeMs;
                    bool m_endTimeMsHasBeenSet;

                    /**
                     * <p>Additional data (JSON format), such as severity and other supplementary information.</p>
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LLMDETECTIONISSUE_H_
