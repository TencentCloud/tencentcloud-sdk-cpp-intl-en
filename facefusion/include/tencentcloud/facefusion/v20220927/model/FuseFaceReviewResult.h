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
                * Face Fusion Inappropriate Content Detection Response Parameter item
                */
                class FuseFaceReviewResult : public AbstractModel
                {
                public:
                    FuseFaceReviewResult();
                    ~FuseFaceReviewResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Reserved field
                     * @return Category Reserved field
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Reserved field
                     * @param _category Reserved field
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
                     * 获取Status code. 0 indicates successful processing; other values indicate failure.
                     * @return Code Status code. 0 indicates successful processing; other values indicate failure.
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Status code. 0 indicates successful processing; other values indicate failure.
                     * @param _code Status code. 0 indicates successful processing; other values indicate failure.
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
                     * 获取Corresponding Status Code Description
                     * @return CodeDescription Corresponding Status Code Description
                     * 
                     */
                    std::string GetCodeDescription() const;

                    /**
                     * 设置Corresponding Status Code Description
                     * @param _codeDescription Corresponding Status Code Description
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
                     * 获取Reserved field
                     * @return Confidence Reserved field
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Reserved field
                     * @param _confidence Reserved field
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
                     * 获取Reserved field
                     * @return Suggestion Reserved field
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Reserved field
                     * @param _suggestion Reserved field
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
                     * 获取Detailed Moderation Content
                     * @return DetailSet Detailed Moderation Content
                     * 
                     */
                    std::vector<FuseFaceReviewDetail> GetDetailSet() const;

                    /**
                     * 设置Detailed Moderation Content
                     * @param _detailSet Detailed Moderation Content
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
                     * Reserved field
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Status code. 0 indicates successful processing; other values indicate failure.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Corresponding Status Code Description
                     */
                    std::string m_codeDescription;
                    bool m_codeDescriptionHasBeenSet;

                    /**
                     * Reserved field
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Reserved field
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Detailed Moderation Content
                     */
                    std::vector<FuseFaceReviewDetail> m_detailSet;
                    bool m_detailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEREVIEWRESULT_H_
