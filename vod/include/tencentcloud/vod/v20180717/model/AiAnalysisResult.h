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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskClassificationResult.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskCoverResult.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskTagResult.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskFrameTagResult.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskHighlightResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Intelligent analysis result
                */
                class AiAnalysisResult : public AbstractModel
                {
                public:
                    AiAnalysisResult();
                    ~AiAnalysisResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task type. Valid values:
<li>Classification: intelligent categorization</li>
<li>Cover: intelligent cover generating</li>
<li>Tag: intelligent tagging</li>
<li>FrameTag: intelligent frame tagging</li>
<li>Highlight: intelligent highlight generating</li>
                     * @return Type Task type. Valid values:
<li>Classification: intelligent categorization</li>
<li>Cover: intelligent cover generating</li>
<li>Tag: intelligent tagging</li>
<li>FrameTag: intelligent frame tagging</li>
<li>Highlight: intelligent highlight generating</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
<li>Classification: intelligent categorization</li>
<li>Cover: intelligent cover generating</li>
<li>Tag: intelligent tagging</li>
<li>FrameTag: intelligent frame tagging</li>
<li>Highlight: intelligent highlight generating</li>
                     * @param _type Task type. Valid values:
<li>Classification: intelligent categorization</li>
<li>Cover: intelligent cover generating</li>
<li>Tag: intelligent tagging</li>
<li>FrameTag: intelligent frame tagging</li>
<li>Highlight: intelligent highlight generating</li>
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
                     * 获取Query result of the intelligent video content analysis classification task. Valid when the task type is Classification.
                     * @return ClassificationTask Query result of the intelligent video content analysis classification task. Valid when the task type is Classification.
                     * 
                     */
                    AiAnalysisTaskClassificationResult GetClassificationTask() const;

                    /**
                     * 设置Query result of the intelligent video content analysis classification task. Valid when the task type is Classification.
                     * @param _classificationTask Query result of the intelligent video content analysis classification task. Valid when the task type is Classification.
                     * 
                     */
                    void SetClassificationTask(const AiAnalysisTaskClassificationResult& _classificationTask);

                    /**
                     * 判断参数 ClassificationTask 是否已赋值
                     * @return ClassificationTask 是否已赋值
                     * 
                     */
                    bool ClassificationTaskHasBeenSet() const;

                    /**
                     * 获取Query result of the Intelligent Cover Task for video content analysis. Valid when the task type is Cover.
                     * @return CoverTask Query result of the Intelligent Cover Task for video content analysis. Valid when the task type is Cover.
                     * 
                     */
                    AiAnalysisTaskCoverResult GetCoverTask() const;

                    /**
                     * 设置Query result of the Intelligent Cover Task for video content analysis. Valid when the task type is Cover.
                     * @param _coverTask Query result of the Intelligent Cover Task for video content analysis. Valid when the task type is Cover.
                     * 
                     */
                    void SetCoverTask(const AiAnalysisTaskCoverResult& _coverTask);

                    /**
                     * 判断参数 CoverTask 是否已赋值
                     * @return CoverTask 是否已赋值
                     * 
                     */
                    bool CoverTaskHasBeenSet() const;

                    /**
                     * 获取Query result of the video content analysis intelligent tag task. Valid at that time when the task type is Tag.
                     * @return TagTask Query result of the video content analysis intelligent tag task. Valid at that time when the task type is Tag.
                     * 
                     */
                    AiAnalysisTaskTagResult GetTagTask() const;

                    /**
                     * 设置Query result of the video content analysis intelligent tag task. Valid at that time when the task type is Tag.
                     * @param _tagTask Query result of the video content analysis intelligent tag task. Valid at that time when the task type is Tag.
                     * 
                     */
                    void SetTagTask(const AiAnalysisTaskTagResult& _tagTask);

                    /**
                     * 判断参数 TagTask 是否已赋值
                     * @return TagTask 是否已赋值
                     * 
                     */
                    bool TagTaskHasBeenSet() const;

                    /**
                     * 获取Query result of the intelligent frame-specific tagging task for video content analysis. Valid when the task type is FrameTag.
                     * @return FrameTagTask Query result of the intelligent frame-specific tagging task for video content analysis. Valid when the task type is FrameTag.
                     * 
                     */
                    AiAnalysisTaskFrameTagResult GetFrameTagTask() const;

                    /**
                     * 设置Query result of the intelligent frame-specific tagging task for video content analysis. Valid when the task type is FrameTag.
                     * @param _frameTagTask Query result of the intelligent frame-specific tagging task for video content analysis. Valid when the task type is FrameTag.
                     * 
                     */
                    void SetFrameTagTask(const AiAnalysisTaskFrameTagResult& _frameTagTask);

                    /**
                     * 判断参数 FrameTagTask 是否已赋值
                     * @return FrameTagTask 是否已赋值
                     * 
                     */
                    bool FrameTagTaskHasBeenSet() const;

                    /**
                     * 获取Query result of the intelligent video content analysis highlight task. Valid when the task type is Highlight.
                     * @return HighlightTask Query result of the intelligent video content analysis highlight task. Valid when the task type is Highlight.
                     * 
                     */
                    AiAnalysisTaskHighlightResult GetHighlightTask() const;

                    /**
                     * 设置Query result of the intelligent video content analysis highlight task. Valid when the task type is Highlight.
                     * @param _highlightTask Query result of the intelligent video content analysis highlight task. Valid when the task type is Highlight.
                     * 
                     */
                    void SetHighlightTask(const AiAnalysisTaskHighlightResult& _highlightTask);

                    /**
                     * 判断参数 HighlightTask 是否已赋值
                     * @return HighlightTask 是否已赋值
                     * 
                     */
                    bool HighlightTaskHasBeenSet() const;

                private:

                    /**
                     * Task type. Valid values:
<li>Classification: intelligent categorization</li>
<li>Cover: intelligent cover generating</li>
<li>Tag: intelligent tagging</li>
<li>FrameTag: intelligent frame tagging</li>
<li>Highlight: intelligent highlight generating</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Query result of the intelligent video content analysis classification task. Valid when the task type is Classification.
                     */
                    AiAnalysisTaskClassificationResult m_classificationTask;
                    bool m_classificationTaskHasBeenSet;

                    /**
                     * Query result of the Intelligent Cover Task for video content analysis. Valid when the task type is Cover.
                     */
                    AiAnalysisTaskCoverResult m_coverTask;
                    bool m_coverTaskHasBeenSet;

                    /**
                     * Query result of the video content analysis intelligent tag task. Valid at that time when the task type is Tag.
                     */
                    AiAnalysisTaskTagResult m_tagTask;
                    bool m_tagTaskHasBeenSet;

                    /**
                     * Query result of the intelligent frame-specific tagging task for video content analysis. Valid when the task type is FrameTag.
                     */
                    AiAnalysisTaskFrameTagResult m_frameTagTask;
                    bool m_frameTagTaskHasBeenSet;

                    /**
                     * Query result of the intelligent video content analysis highlight task. Valid when the task type is Highlight.
                     */
                    AiAnalysisTaskHighlightResult m_highlightTask;
                    bool m_highlightTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISRESULT_H_
