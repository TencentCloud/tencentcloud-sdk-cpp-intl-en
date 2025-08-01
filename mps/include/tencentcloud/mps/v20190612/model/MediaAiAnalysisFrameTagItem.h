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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISFRAMETAGITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISFRAMETAGITEM_H_

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
                * Result information of intelligent frame-specific tagging
                */
                class MediaAiAnalysisFrameTagItem : public AbstractModel
                {
                public:
                    MediaAiAnalysisFrameTagItem();
                    ~MediaAiAnalysisFrameTagItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Frame-specific tag name.
                     * @return Tag Frame-specific tag name.
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Frame-specific tag name.
                     * @param _tag Frame-specific tag name.
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
                     * 获取
                     * @return CategorySet 
                     * 
                     */
                    std::vector<std::string> GetCategorySet() const;

                    /**
                     * 设置
                     * @param _categorySet 
                     * 
                     */
                    void SetCategorySet(const std::vector<std::string>& _categorySet);

                    /**
                     * 判断参数 CategorySet 是否已赋值
                     * @return CategorySet 是否已赋值
                     * 
                     */
                    bool CategorySetHasBeenSet() const;

                    /**
                     * 获取Confidence of intelligently generated frame-specific tag between 0 and 100.
                     * @return Confidence Confidence of intelligently generated frame-specific tag between 0 and 100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence of intelligently generated frame-specific tag between 0 and 100.
                     * @param _confidence Confidence of intelligently generated frame-specific tag between 0 and 100.
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * Frame-specific tag name.
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_categorySet;
                    bool m_categorySetHasBeenSet;

                    /**
                     * Confidence of intelligently generated frame-specific tag between 0 and 100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISFRAMETAGITEM_H_
