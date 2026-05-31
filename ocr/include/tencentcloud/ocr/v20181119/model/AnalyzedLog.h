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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ANALYZEDLOG_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ANALYZEDLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Intelligent review log
                */
                class AnalyzedLog : public AbstractModel
                {
                public:
                    AnalyzedLog();
                    ~AnalyzedLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Indexes of the procedure.</p><p>Enumeration value:</p><ul><li>L1_IMAGE_QUALITY: Image quality detection</li><li>L2_RULE_ENGINE: Rule verification</li><li>L3_LLM_JUDGE: Large model judgment</li></ul>
                     * @return StepKey <p>Indexes of the procedure.</p><p>Enumeration value:</p><ul><li>L1_IMAGE_QUALITY: Image quality detection</li><li>L2_RULE_ENGINE: Rule verification</li><li>L3_LLM_JUDGE: Large model judgment</li></ul>
                     * 
                     */
                    std::string GetStepKey() const;

                    /**
                     * 设置<p>Indexes of the procedure.</p><p>Enumeration value:</p><ul><li>L1_IMAGE_QUALITY: Image quality detection</li><li>L2_RULE_ENGINE: Rule verification</li><li>L3_LLM_JUDGE: Large model judgment</li></ul>
                     * @param _stepKey <p>Indexes of the procedure.</p><p>Enumeration value:</p><ul><li>L1_IMAGE_QUALITY: Image quality detection</li><li>L2_RULE_ENGINE: Rule verification</li><li>L3_LLM_JUDGE: Large model judgment</li></ul>
                     * 
                     */
                    void SetStepKey(const std::string& _stepKey);

                    /**
                     * 判断参数 StepKey 是否已赋值
                     * @return StepKey 是否已赋值
                     * 
                     */
                    bool StepKeyHasBeenSet() const;

                    /**
                     * 获取<p>Compliant and non-compliant are final states; to be determined is an intermediate state. Judgment status of each layer: Compliant Non-Compliant Pending.</p>
                     * @return Decision <p>Compliant and non-compliant are final states; to be determined is an intermediate state. Judgment status of each layer: Compliant Non-Compliant Pending.</p>
                     * 
                     */
                    std::string GetDecision() const;

                    /**
                     * 设置<p>Compliant and non-compliant are final states; to be determined is an intermediate state. Judgment status of each layer: Compliant Non-Compliant Pending.</p>
                     * @param _decision <p>Compliant and non-compliant are final states; to be determined is an intermediate state. Judgment status of each layer: Compliant Non-Compliant Pending.</p>
                     * 
                     */
                    void SetDecision(const std::string& _decision);

                    /**
                     * 判断参数 Decision 是否已赋值
                     * @return Decision 是否已赋值
                     * 
                     */
                    bool DecisionHasBeenSet() const;

                    /**
                     * 获取<p>Reason for the current layer judgment</p>
                     * @return DecisionMessage <p>Reason for the current layer judgment</p>
                     * 
                     */
                    std::string GetDecisionMessage() const;

                    /**
                     * 设置<p>Reason for the current layer judgment</p>
                     * @param _decisionMessage <p>Reason for the current layer judgment</p>
                     * 
                     */
                    void SetDecisionMessage(const std::string& _decisionMessage);

                    /**
                     * 判断参数 DecisionMessage 是否已赋值
                     * @return DecisionMessage 是否已赋值
                     * 
                     */
                    bool DecisionMessageHasBeenSet() const;

                    /**
                     * 获取<p>Time taken by the current layer</p><p>Unit: ms</p>
                     * @return CostTime <p>Time taken by the current layer</p><p>Unit: ms</p>
                     * 
                     */
                    int64_t GetCostTime() const;

                    /**
                     * 设置<p>Time taken by the current layer</p><p>Unit: ms</p>
                     * @param _costTime <p>Time taken by the current layer</p><p>Unit: ms</p>
                     * 
                     */
                    void SetCostTime(const int64_t& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Indexes of the procedure.</p><p>Enumeration value:</p><ul><li>L1_IMAGE_QUALITY: Image quality detection</li><li>L2_RULE_ENGINE: Rule verification</li><li>L3_LLM_JUDGE: Large model judgment</li></ul>
                     */
                    std::string m_stepKey;
                    bool m_stepKeyHasBeenSet;

                    /**
                     * <p>Compliant and non-compliant are final states; to be determined is an intermediate state. Judgment status of each layer: Compliant Non-Compliant Pending.</p>
                     */
                    std::string m_decision;
                    bool m_decisionHasBeenSet;

                    /**
                     * <p>Reason for the current layer judgment</p>
                     */
                    std::string m_decisionMessage;
                    bool m_decisionMessageHasBeenSet;

                    /**
                     * <p>Time taken by the current layer</p><p>Unit: ms</p>
                     */
                    int64_t m_costTime;
                    bool m_costTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ANALYZEDLOG_H_
