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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEREVIEWRESULT_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEREVIEWRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20220927/model/FuseFaceReviewDetail.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * Face Fusion is not suitable for the returned parameter item in CR.
                */
                class FuseFaceReviewResult : public AbstractModel
                {
                public:
                    FuseFaceReviewResult();
                    ~FuseFaceReviewResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Reserved Field
                     * @return Category Reserved Field
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Reserved Field
                     * @param _category Reserved Field
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
                     * 获取Status code; 0 indicates successful processing, other values indicate processing failure
                     * @return Code Status code; 0 indicates successful processing, other values indicate processing failure
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Status code; 0 indicates successful processing, other values indicate processing failure
                     * @param _code Status code; 0 indicates successful processing, other values indicate processing failure
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Description for the status code
                     * @return CodeDescription Description for the status code
                     * 
                     */
                    std::string GetCodeDescription() const;

                    /**
                     * 设置Description for the status code
                     * @param _codeDescription Description for the status code
                     * 
                     */
                    void SetCodeDescription(const std::string& _codeDescription);

                    /**
                     * 判断参数 CodeDescription 是否已赋值
                     * @return CodeDescription 是否已赋值
                     * 
                     */
                    bool CodeDescriptionHasBeenSet() const;

                    /**
                     * 获取Reserved Field
                     * @return Confidence Reserved Field
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Reserved Field
                     * @param _confidence Reserved Field
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
                     * 获取Reserved Field
                     * @return Suggestion Reserved Field
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Reserved Field
                     * @param _suggestion Reserved Field
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取Audit Details
                     * @return DetailSet Audit Details
                     * 
                     */
                    std::vector<FuseFaceReviewDetail> GetDetailSet() const;

                    /**
                     * 设置Audit Details
                     * @param _detailSet Audit Details
                     * 
                     */
                    void SetDetailSet(const std::vector<FuseFaceReviewDetail>& _detailSet);

                    /**
                     * 判断参数 DetailSet 是否已赋值
                     * @return DetailSet 是否已赋值
                     * 
                     */
                    bool DetailSetHasBeenSet() const;

                private:

                    /**
                     * Reserved Field
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Status code; 0 indicates successful processing, other values indicate processing failure
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Description for the status code
                     */
                    std::string m_codeDescription;
                    bool m_codeDescriptionHasBeenSet;

                    /**
                     * Reserved Field
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Reserved Field
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Audit Details
                     */
                    std::vector<FuseFaceReviewDetail> m_detailSet;
                    bool m_detailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEREVIEWRESULT_H_
