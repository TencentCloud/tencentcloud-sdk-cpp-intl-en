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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTLLMDETECTIONRESULTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTLLMDETECTIONRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectLLMDetectionIssue.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class QualityInspectLLMDetectionResultItem : public AbstractModel
                {
                public:
                    QualityInspectLLMDetectionResultItem();
                    ~QualityInspectLLMDetectionResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Category 
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置
                     * @param _category 
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
                     * 获取
                     * @return Group 
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置
                     * @param _group 
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
                     * 获取
                     * @return Type 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param _type 
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
                     * 获取
                     * @return Score 
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置
                     * @param _score 
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
                     * 获取
                     * @return Confidence 
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置
                     * @param _confidence 
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
                     * 获取
                     * @return IssueSet 
                     * 
                     */
                    std::vector<QualityInspectLLMDetectionIssue> GetIssueSet() const;

                    /**
                     * 设置
                     * @param _issueSet 
                     * 
                     */
                    void SetIssueSet(const std::vector<QualityInspectLLMDetectionIssue>& _issueSet);

                    /**
                     * 判断参数 IssueSet 是否已赋值
                     * @return IssueSet 是否已赋值
                     * 
                     */
                    bool IssueSetHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<QualityInspectLLMDetectionIssue> m_issueSet;
                    bool m_issueSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTLLMDETECTIONRESULTITEM_H_
