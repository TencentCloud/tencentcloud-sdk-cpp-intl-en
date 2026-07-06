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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LLMDETECTIONRESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LLMDETECTIONRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LLMDetectionIssue.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Aggregation results of each LLM detection item.
                */
                class LLMDetectionResultItem : public AbstractModel
                {
                public:
                    LLMDetectionResultItem();
                    ~LLMDetectionResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Detection category.</p><p>Enumeration value:</p><ul><li>AIGCQualityCharacteristics: AIGC quality characteristics.</li></ul>
                     * @return Category <p>Detection category.</p><p>Enumeration value:</p><ul><li>AIGCQualityCharacteristics: AIGC quality characteristics.</li></ul>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>Detection category.</p><p>Enumeration value:</p><ul><li>AIGCQualityCharacteristics: AIGC quality characteristics.</li></ul>
                     * @param _category <p>Detection category.</p><p>Enumeration value:</p><ul><li>AIGCQualityCharacteristics: AIGC quality characteristics.</li></ul>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>Detection group.</p><p>Enumeration values:</p><ul><li>AIGCAuthenticity: AIGC authenticity, including human body plausibility, physical plausibility, and cross-frame consistency.</li><li>AIGCTechQuality: AIGC technology quality, including aspect ratio, black border, and forced portrait mode.</li></ul>
                     * @return Group <p>Detection group.</p><p>Enumeration values:</p><ul><li>AIGCAuthenticity: AIGC authenticity, including human body plausibility, physical plausibility, and cross-frame consistency.</li><li>AIGCTechQuality: AIGC technology quality, including aspect ratio, black border, and forced portrait mode.</li></ul>
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置<p>Detection group.</p><p>Enumeration values:</p><ul><li>AIGCAuthenticity: AIGC authenticity, including human body plausibility, physical plausibility, and cross-frame consistency.</li><li>AIGCTechQuality: AIGC technology quality, including aspect ratio, black border, and forced portrait mode.</li></ul>
                     * @param _group <p>Detection group.</p><p>Enumeration values:</p><ul><li>AIGCAuthenticity: AIGC authenticity, including human body plausibility, physical plausibility, and cross-frame consistency.</li><li>AIGCTechQuality: AIGC technology quality, including aspect ratio, black border, and forced portrait mode.</li></ul>
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取<p>Detection type name.</p><p>Enumeration values:</p><ul><li>BodyPoseCheck: Human body pose plausibility, which belongs to AIGCAuthenticity.</li><li>BodyDetailCheck: Human body detail plausibility, including finger count and facial symmetry, which belongs to AIGCAuthenticity.</li><li>PhysicRulesCheck: Physics rules plausibility, including perspective, lighting, and gravity, which belongs to AIGCAuthenticity.</li><li>ObjectConsistencyCheck: Cross-frame object consistency, which belongs to AIGCAuthenticity.</li><li>FormatCheck: Aspect ratio, black border, forced portrait mode, and other format issues, which belong to AIGCTechQuality.</li></ul>
                     * @return Type <p>Detection type name.</p><p>Enumeration values:</p><ul><li>BodyPoseCheck: Human body pose plausibility, which belongs to AIGCAuthenticity.</li><li>BodyDetailCheck: Human body detail plausibility, including finger count and facial symmetry, which belongs to AIGCAuthenticity.</li><li>PhysicRulesCheck: Physics rules plausibility, including perspective, lighting, and gravity, which belongs to AIGCAuthenticity.</li><li>ObjectConsistencyCheck: Cross-frame object consistency, which belongs to AIGCAuthenticity.</li><li>FormatCheck: Aspect ratio, black border, forced portrait mode, and other format issues, which belong to AIGCTechQuality.</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Detection type name.</p><p>Enumeration values:</p><ul><li>BodyPoseCheck: Human body pose plausibility, which belongs to AIGCAuthenticity.</li><li>BodyDetailCheck: Human body detail plausibility, including finger count and facial symmetry, which belongs to AIGCAuthenticity.</li><li>PhysicRulesCheck: Physics rules plausibility, including perspective, lighting, and gravity, which belongs to AIGCAuthenticity.</li><li>ObjectConsistencyCheck: Cross-frame object consistency, which belongs to AIGCAuthenticity.</li><li>FormatCheck: Aspect ratio, black border, forced portrait mode, and other format issues, which belong to AIGCTechQuality.</li></ul>
                     * @param _type <p>Detection type name.</p><p>Enumeration values:</p><ul><li>BodyPoseCheck: Human body pose plausibility, which belongs to AIGCAuthenticity.</li><li>BodyDetailCheck: Human body detail plausibility, including finger count and facial symmetry, which belongs to AIGCAuthenticity.</li><li>PhysicRulesCheck: Physics rules plausibility, including perspective, lighting, and gravity, which belongs to AIGCAuthenticity.</li><li>ObjectConsistencyCheck: Cross-frame object consistency, which belongs to AIGCAuthenticity.</li><li>FormatCheck: Aspect ratio, black border, forced portrait mode, and other format issues, which belong to AIGCTechQuality.</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Overall quality score. Value range: [0, 100]. Higher values indicate better quality.</p>
                     * @return Score <p>Overall quality score. Value range: [0, 100]. Higher values indicate better quality.</p>
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置<p>Overall quality score. Value range: [0, 100]. Higher values indicate better quality.</p>
                     * @param _score <p>Overall quality score. Value range: [0, 100]. Higher values indicate better quality.</p>
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
                     * 获取<p>Detection confidence. Value range: [0, 100]. Higher values indicate greater certainty.</p>
                     * @return Confidence <p>Detection confidence. Value range: [0, 100]. Higher values indicate greater certainty.</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>Detection confidence. Value range: [0, 100]. Higher values indicate greater certainty.</p>
                     * @param _confidence <p>Detection confidence. Value range: [0, 100]. Higher values indicate greater certainty.</p>
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
                     * 获取<p>List of issues detected. This is empty if no issue is detected.</p>
                     * @return IssueSet <p>List of issues detected. This is empty if no issue is detected.</p>
                     * 
                     */
                    std::vector<LLMDetectionIssue> GetIssueSet() const;

                    /**
                     * 设置<p>List of issues detected. This is empty if no issue is detected.</p>
                     * @param _issueSet <p>List of issues detected. This is empty if no issue is detected.</p>
                     * 
                     */
                    void SetIssueSet(const std::vector<LLMDetectionIssue>& _issueSet);

                    /**
                     * 判断参数 IssueSet 是否已赋值
                     * @return IssueSet 是否已赋值
                     * 
                     */
                    bool IssueSetHasBeenSet() const;

                private:

                    /**
                     * <p>Detection category.</p><p>Enumeration value:</p><ul><li>AIGCQualityCharacteristics: AIGC quality characteristics.</li></ul>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>Detection group.</p><p>Enumeration values:</p><ul><li>AIGCAuthenticity: AIGC authenticity, including human body plausibility, physical plausibility, and cross-frame consistency.</li><li>AIGCTechQuality: AIGC technology quality, including aspect ratio, black border, and forced portrait mode.</li></ul>
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * <p>Detection type name.</p><p>Enumeration values:</p><ul><li>BodyPoseCheck: Human body pose plausibility, which belongs to AIGCAuthenticity.</li><li>BodyDetailCheck: Human body detail plausibility, including finger count and facial symmetry, which belongs to AIGCAuthenticity.</li><li>PhysicRulesCheck: Physics rules plausibility, including perspective, lighting, and gravity, which belongs to AIGCAuthenticity.</li><li>ObjectConsistencyCheck: Cross-frame object consistency, which belongs to AIGCAuthenticity.</li><li>FormatCheck: Aspect ratio, black border, forced portrait mode, and other format issues, which belong to AIGCTechQuality.</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Overall quality score. Value range: [0, 100]. Higher values indicate better quality.</p>
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>Detection confidence. Value range: [0, 100]. Higher values indicate greater certainty.</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>List of issues detected. This is empty if no issue is detected.</p>
                     */
                    std::vector<LLMDetectionIssue> m_issueSet;
                    bool m_issueSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LLMDETECTIONRESULTITEM_H_
