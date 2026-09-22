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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIANALYSISTEMPLATEFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIANALYSISTEMPLATEFORUPDATE_H_

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
                * Input of the MPS intelligent analysis template
                */
                class MPSAIAnalysisTemplateForUpdate : public AbstractModel
                {
                public:
                    MPSAIAnalysisTemplateForUpdate();
                    ~MPSAIAnalysisTemplateForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Unique identifier of the video content analysis template.</p>
                     * @return Definition <p>Unique identifier of the video content analysis template.</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>Unique identifier of the video content analysis template.</p>
                     * @param _definition <p>Unique identifier of the video content analysis template.</p>
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>Video analysis template name. Length limit: 64 characters.</p>
                     * @return Name <p>Video analysis template name. Length limit: 64 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Video analysis template name. Length limit: 64 characters.</p>
                     * @param _name <p>Video analysis template name. Length limit: 64 characters.</p>
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
                     * 获取<p>Video analysis template description. Length limit: 256 characters.</p>
                     * @return Comment <p>Video analysis template description. Length limit: 256 characters.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Video analysis template description. Length limit: 256 characters.</p>
                     * @param _comment <p>Video analysis template description. Length limit: 256 characters.</p>
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
                     * 获取<p>Intelligent Classification Task Control Parameters.</p>
                     * @return ClassificationConfigure <p>Intelligent Classification Task Control Parameters.</p>
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetClassificationConfigure() const;

                    /**
                     * 设置<p>Intelligent Classification Task Control Parameters.</p>
                     * @param _classificationConfigure <p>Intelligent Classification Task Control Parameters.</p>
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
                     * 获取<p>Control parameters for the intelligent tag task.</p>
                     * @return TagConfigure <p>Control parameters for the intelligent tag task.</p>
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetTagConfigure() const;

                    /**
                     * 设置<p>Control parameters for the intelligent tag task.</p>
                     * @param _tagConfigure <p>Control parameters for the intelligent tag task.</p>
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
                     * 获取<p>Intelligent Cover Task Control Parameters.</p>
                     * @return CoverConfigure <p>Intelligent Cover Task Control Parameters.</p>
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetCoverConfigure() const;

                    /**
                     * 设置<p>Intelligent Cover Task Control Parameters.</p>
                     * @param _coverConfigure <p>Intelligent Cover Task Control Parameters.</p>
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
                     * 获取<p>Control parameters for the intelligent frame tagging task.</p>
                     * @return FrameTagConfigure <p>Control parameters for the intelligent frame tagging task.</p>
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetFrameTagConfigure() const;

                    /**
                     * 设置<p>Control parameters for the intelligent frame tagging task.</p>
                     * @param _frameTagConfigure <p>Control parameters for the intelligent frame tagging task.</p>
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
                     * 获取<p>Intelligent splitting task control parameter.</p>
                     * @return SplitConfigure <p>Intelligent splitting task control parameter.</p>
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetSplitConfigure() const;

                    /**
                     * 设置<p>Intelligent splitting task control parameter.</p>
                     * @param _splitConfigure <p>Intelligent splitting task control parameter.</p>
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
                     * 获取<p>Control parameters for the intelligent highlights task.</p>
                     * @return HighlightConfigure <p>Control parameters for the intelligent highlights task.</p>
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetHighlightConfigure() const;

                    /**
                     * 设置<p>Control parameters for the intelligent highlights task.</p>
                     * @param _highlightConfigure <p>Control parameters for the intelligent highlights task.</p>
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
                     * 获取<p>Control parameters for the intelligent opening and ending sequences task.</p>
                     * @return OpeningAndEndingConfigure <p>Control parameters for the intelligent opening and ending sequences task.</p>
                     * 
                     */
                    MPSAIAnalysisConfigureInfo GetOpeningAndEndingConfigure() const;

                    /**
                     * 设置<p>Control parameters for the intelligent opening and ending sequences task.</p>
                     * @param _openingAndEndingConfigure <p>Control parameters for the intelligent opening and ending sequences task.</p>
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
                     * <p>Unique identifier of the video content analysis template.</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Video analysis template name. Length limit: 64 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Video analysis template description. Length limit: 256 characters.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Intelligent Classification Task Control Parameters.</p>
                     */
                    MPSAIAnalysisConfigureInfo m_classificationConfigure;
                    bool m_classificationConfigureHasBeenSet;

                    /**
                     * <p>Control parameters for the intelligent tag task.</p>
                     */
                    MPSAIAnalysisConfigureInfo m_tagConfigure;
                    bool m_tagConfigureHasBeenSet;

                    /**
                     * <p>Intelligent Cover Task Control Parameters.</p>
                     */
                    MPSAIAnalysisConfigureInfo m_coverConfigure;
                    bool m_coverConfigureHasBeenSet;

                    /**
                     * <p>Control parameters for the intelligent frame tagging task.</p>
                     */
                    MPSAIAnalysisConfigureInfo m_frameTagConfigure;
                    bool m_frameTagConfigureHasBeenSet;

                    /**
                     * <p>Intelligent splitting task control parameter.</p>
                     */
                    MPSAIAnalysisConfigureInfo m_splitConfigure;
                    bool m_splitConfigureHasBeenSet;

                    /**
                     * <p>Control parameters for the intelligent highlights task.</p>
                     */
                    MPSAIAnalysisConfigureInfo m_highlightConfigure;
                    bool m_highlightConfigureHasBeenSet;

                    /**
                     * <p>Control parameters for the intelligent opening and ending sequences task.</p>
                     */
                    MPSAIAnalysisConfigureInfo m_openingAndEndingConfigure;
                    bool m_openingAndEndingConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIANALYSISTEMPLATEFORUPDATE_H_
