/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISDESCRIPTIONITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISDESCRIPTIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiParagraphInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent description information.
                */
                class MediaAiAnalysisDescriptionItem : public AbstractModel
                {
                public:
                    MediaAiAnalysisDescriptionItem();
                    ~MediaAiAnalysisDescriptionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Intelligent description.
                     * @return Description Intelligent description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Intelligent description.
                     * @param _description Intelligent description.
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
                     * 获取Confidence of the intelligent description, with a value range from 0 to 100.
                     * @return Confidence Confidence of the intelligent description, with a value range from 0 to 100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence of the intelligent description, with a value range from 0 to 100.
                     * @param _confidence Confidence of the intelligent description, with a value range from 0 to 100.
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
                     * 获取Intelligent description title.
                     * @return Title Intelligent description title.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Intelligent description title.
                     * @param _title Intelligent description title.
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Intelligent description keywords.
                     * @return Keywords Intelligent description keywords.
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置Intelligent description keywords.
                     * @param _keywords Intelligent description keywords.
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取Segmentation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Paragraphs Segmentation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AiParagraphInfo> GetParagraphs() const;

                    /**
                     * 设置Segmentation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _paragraphs Segmentation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParagraphs(const std::vector<AiParagraphInfo>& _paragraphs);

                    /**
                     * 判断参数 Paragraphs 是否已赋值
                     * @return Paragraphs 是否已赋值
                     * 
                     */
                    bool ParagraphsHasBeenSet() const;

                private:

                    /**
                     * Intelligent description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Confidence of the intelligent description, with a value range from 0 to 100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Intelligent description title.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Intelligent description keywords.
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * Segmentation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AiParagraphInfo> m_paragraphs;
                    bool m_paragraphsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISDESCRIPTIONITEM_H_
