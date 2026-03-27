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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEREVIEWDETAIL_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEREVIEWDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * Face Fusion is not suitable for CR facial information.
                */
                class FuseFaceReviewDetail : public AbstractModel
                {
                public:
                    FuseFaceReviewDetail();
                    ~FuseFaceReviewDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Reserved Field
                     * @return Field Reserved Field
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置Reserved Field
                     * @param _field Reserved Field
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取Tag name matched in audit
                     * @return Label Tag name matched in audit
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tag name matched in audit
                     * @param _label Tag name matched in audit
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Confidence score corresponding to the identified label. A higher score indicates a higher probability of violation.

0 to 70: Suggestion is PASS;

70 to 80: Suggestion is REVIEW;

80 to 100: Suggestion is BLOCK.
                     * @return Confidence Confidence score corresponding to the identified label. A higher score indicates a higher probability of violation.

0 to 70: Suggestion is PASS;

70 to 80: Suggestion is REVIEW;

80 to 100: Suggestion is BLOCK.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence score corresponding to the identified label. A higher score indicates a higher probability of violation.

0 to 70: Suggestion is PASS;

70 to 80: Suggestion is REVIEW;

80 to 100: Suggestion is BLOCK.
                     * @param _confidence Confidence score corresponding to the identified label. A higher score indicates a higher probability of violation.

0 to 70: Suggestion is PASS;

70 to 80: Suggestion is REVIEW;

80 to 100: Suggestion is BLOCK.
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
                     * 获取Audit conclusion for identified scenarios:

PASS: Normal

REVIEW: Suspected

BLOCK: Violation
                     * @return Suggestion Audit conclusion for identified scenarios:

PASS: Normal

REVIEW: Suspected

BLOCK: Violation
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Audit conclusion for identified scenarios:

PASS: Normal

REVIEW: Suspected

BLOCK: Violation
                     * @param _suggestion Audit conclusion for identified scenarios:

PASS: Normal

REVIEW: Suspected

BLOCK: Violation
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                private:

                    /**
                     * Reserved Field
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * Tag name matched in audit
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Confidence score corresponding to the identified label. A higher score indicates a higher probability of violation.

0 to 70: Suggestion is PASS;

70 to 80: Suggestion is REVIEW;

80 to 100: Suggestion is BLOCK.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Audit conclusion for identified scenarios:

PASS: Normal

REVIEW: Suspected

BLOCK: Violation
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEREVIEWDETAIL_H_
