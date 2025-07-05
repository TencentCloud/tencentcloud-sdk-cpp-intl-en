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
                * 
                */
                class FuseFaceReviewDetail : public AbstractModel
                {
                public:
                    FuseFaceReviewDetail();
                    ~FuseFaceReviewDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Field 
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置
                     * @param _field 
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
                     * 获取
                     * @return Label 
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置
                     * @param _label 
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
                     * @return Suggestion 
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置
                     * @param _suggestion 
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
                     * 
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEREVIEWDETAIL_H_
