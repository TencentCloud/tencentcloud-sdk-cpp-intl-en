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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIANALYSISTEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIANALYSISTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSAIAnalysisConfigureInfo.h>


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
                class MPSAIAnalysisTemplate : public AbstractModel
                {
                public:
                    MPSAIAnalysisTemplate();
                    ~MPSAIAnalysisTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取
                     * @return Comment 
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置
                     * @param _comment 
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClassificationConfigure 
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetClassificationConfigure() const;

                    /**
                     * 设置
                     * @param _classificationConfigure 
                     * 
                     */
                    void SetClassificationConfigure(const MPSAIAnalysisConfigureInfo& _classificationConfigure);

                    /**
                     * 判断参数 ClassificationConfigure 是否已赋值
                     * @return ClassificationConfigure 是否已赋值
                     * 
                     */
                    bool ClassificationConfigureHasBeenSet() const;

                    /**
                     * 获取
                     * @return TagConfigure 
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetTagConfigure() const;

                    /**
                     * 设置
                     * @param _tagConfigure 
                     * 
                     */
                    void SetTagConfigure(const MPSAIAnalysisConfigureInfo& _tagConfigure);

                    /**
                     * 判断参数 TagConfigure 是否已赋值
                     * @return TagConfigure 是否已赋值
                     * 
                     */
                    bool TagConfigureHasBeenSet() const;

                    /**
                     * 获取
                     * @return CoverConfigure 
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetCoverConfigure() const;

                    /**
                     * 设置
                     * @param _coverConfigure 
                     * 
                     */
                    void SetCoverConfigure(const MPSAIAnalysisConfigureInfo& _coverConfigure);

                    /**
                     * 判断参数 CoverConfigure 是否已赋值
                     * @return CoverConfigure 是否已赋值
                     * 
                     */
                    bool CoverConfigureHasBeenSet() const;

                    /**
                     * 获取
                     * @return FrameTagConfigure 
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetFrameTagConfigure() const;

                    /**
                     * 设置
                     * @param _frameTagConfigure 
                     * 
                     */
                    void SetFrameTagConfigure(const MPSAIAnalysisConfigureInfo& _frameTagConfigure);

                    /**
                     * 判断参数 FrameTagConfigure 是否已赋值
                     * @return FrameTagConfigure 是否已赋值
                     * 
                     */
                    bool FrameTagConfigureHasBeenSet() const;

                    /**
                     * 获取
                     * @return SplitConfigure 
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetSplitConfigure() const;

                    /**
                     * 设置
                     * @param _splitConfigure 
                     * 
                     */
                    void SetSplitConfigure(const MPSAIAnalysisConfigureInfo& _splitConfigure);

                    /**
                     * 判断参数 SplitConfigure 是否已赋值
                     * @return SplitConfigure 是否已赋值
                     * 
                     */
                    bool SplitConfigureHasBeenSet() const;

                    /**
                     * 获取
                     * @return HighlightConfigure 
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetHighlightConfigure() const;

                    /**
                     * 设置
                     * @param _highlightConfigure 
                     * 
                     */
                    void SetHighlightConfigure(const MPSAIAnalysisConfigureInfo& _highlightConfigure);

                    /**
                     * 判断参数 HighlightConfigure 是否已赋值
                     * @return HighlightConfigure 是否已赋值
                     * 
                     */
                    bool HighlightConfigureHasBeenSet() const;

                    /**
                     * 获取
                     * @return OpeningAndEndingConfigure 
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetOpeningAndEndingConfigure() const;

                    /**
                     * 设置
                     * @param _openingAndEndingConfigure 
                     * 
                     */
                    void SetOpeningAndEndingConfigure(const MPSAIAnalysisConfigureInfo& _openingAndEndingConfigure);

                    /**
                     * 判断参数 OpeningAndEndingConfigure 是否已赋值
                     * @return OpeningAndEndingConfigure 是否已赋值
                     * 
                     */
                    bool OpeningAndEndingConfigureHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 
                     */
                    MPSAIAnalysisConfigureInfo m_classificationConfigure;
                    bool m_classificationConfigureHasBeenSet;

                    /**
                     * 
                     */
                    MPSAIAnalysisConfigureInfo m_tagConfigure;
                    bool m_tagConfigureHasBeenSet;

                    /**
                     * 
                     */
                    MPSAIAnalysisConfigureInfo m_coverConfigure;
                    bool m_coverConfigureHasBeenSet;

                    /**
                     * 
                     */
                    MPSAIAnalysisConfigureInfo m_frameTagConfigure;
                    bool m_frameTagConfigureHasBeenSet;

                    /**
                     * 
                     */
                    MPSAIAnalysisConfigureInfo m_splitConfigure;
                    bool m_splitConfigureHasBeenSet;

                    /**
                     * 
                     */
                    MPSAIAnalysisConfigureInfo m_highlightConfigure;
                    bool m_highlightConfigureHasBeenSet;

                    /**
                     * 
                     */
                    MPSAIAnalysisConfigureInfo m_openingAndEndingConfigure;
                    bool m_openingAndEndingConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIANALYSISTEMPLATE_H_
