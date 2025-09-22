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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskClassificationResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskCoverResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskTagResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskFrameTagResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskHighlightResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskDelLogoResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskSegmentResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskHeadTailResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskDescriptionResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskHorizontalToVerticalResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskDubbingResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent analysis results
                */
                class AiAnalysisResult : public AbstractModel
                {
                public:
                    AiAnalysisResult();
                    ~AiAnalysisResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task type. valid values:.
<Li>Classification: intelligent classification.</li>.
<Li>Cover: specifies the intelligent cover.</li>.
<Li>Tag: intelligent tag.</li>.
<Li>FrameTag: specifies intelligent frame-by-frame tagging.</li>.
<Li>Highlight: intelligent highlights</li>.
<Li>DeLogo: intelligent removal.</li>.
<li>Description: large model summarization.</li>

<Li>Dubbing: intelligent dubbing.</li>.
                     * @return Type Task type. valid values:.
<Li>Classification: intelligent classification.</li>.
<Li>Cover: specifies the intelligent cover.</li>.
<Li>Tag: intelligent tag.</li>.
<Li>FrameTag: specifies intelligent frame-by-frame tagging.</li>.
<Li>Highlight: intelligent highlights</li>.
<Li>DeLogo: intelligent removal.</li>.
<li>Description: large model summarization.</li>

<Li>Dubbing: intelligent dubbing.</li>.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. valid values:.
<Li>Classification: intelligent classification.</li>.
<Li>Cover: specifies the intelligent cover.</li>.
<Li>Tag: intelligent tag.</li>.
<Li>FrameTag: specifies intelligent frame-by-frame tagging.</li>.
<Li>Highlight: intelligent highlights</li>.
<Li>DeLogo: intelligent removal.</li>.
<li>Description: large model summarization.</li>

<Li>Dubbing: intelligent dubbing.</li>.
                     * @param _type Task type. valid values:.
<Li>Classification: intelligent classification.</li>.
<Li>Cover: specifies the intelligent cover.</li>.
<Li>Tag: intelligent tag.</li>.
<Li>FrameTag: specifies intelligent frame-by-frame tagging.</li>.
<Li>Highlight: intelligent highlights</li>.
<Li>DeLogo: intelligent removal.</li>.
<li>Description: large model summarization.</li>

<Li>Dubbing: intelligent dubbing.</li>.
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
                     * 获取Query result of intelligent categorization task in video content analysis, which is valid if task type is `Classification`.
                     * @return ClassificationTask Query result of intelligent categorization task in video content analysis, which is valid if task type is `Classification`.
                     * 
                     */
                    AiAnalysisTaskClassificationResult GetClassificationTask() const;

                    /**
                     * 设置Query result of intelligent categorization task in video content analysis, which is valid if task type is `Classification`.
                     * @param _classificationTask Query result of intelligent categorization task in video content analysis, which is valid if task type is `Classification`.
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
                     * 获取Query result of intelligent cover generating task in video content analysis, which is valid if task type is `Cover`.
                     * @return CoverTask Query result of intelligent cover generating task in video content analysis, which is valid if task type is `Cover`.
                     * 
                     */
                    AiAnalysisTaskCoverResult GetCoverTask() const;

                    /**
                     * 设置Query result of intelligent cover generating task in video content analysis, which is valid if task type is `Cover`.
                     * @param _coverTask Query result of intelligent cover generating task in video content analysis, which is valid if task type is `Cover`.
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
                     * 获取Query result of intelligent tagging task in video content analysis, which is valid if task type is `Tag`.
                     * @return TagTask Query result of intelligent tagging task in video content analysis, which is valid if task type is `Tag`.
                     * 
                     */
                    AiAnalysisTaskTagResult GetTagTask() const;

                    /**
                     * 设置Query result of intelligent tagging task in video content analysis, which is valid if task type is `Tag`.
                     * @param _tagTask Query result of intelligent tagging task in video content analysis, which is valid if task type is `Tag`.
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
                     * 获取Query result of intelligent frame-specific tagging task in video content analysis, which is valid if task type is `FrameTag`.
                     * @return FrameTagTask Query result of intelligent frame-specific tagging task in video content analysis, which is valid if task type is `FrameTag`.
                     * 
                     */
                    AiAnalysisTaskFrameTagResult GetFrameTagTask() const;

                    /**
                     * 设置Query result of intelligent frame-specific tagging task in video content analysis, which is valid if task type is `FrameTag`.
                     * @param _frameTagTask Query result of intelligent frame-specific tagging task in video content analysis, which is valid if task type is `FrameTag`.
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
                     * 获取The result of a highlight generation task. This parameter is valid if `Type` is `Highlight`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HighlightTask The result of a highlight generation task. This parameter is valid if `Type` is `Highlight`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskHighlightResult GetHighlightTask() const;

                    /**
                     * 设置The result of a highlight generation task. This parameter is valid if `Type` is `Highlight`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _highlightTask The result of a highlight generation task. This parameter is valid if `Type` is `Highlight`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHighlightTask(const AiAnalysisTaskHighlightResult& _highlightTask);

                    /**
                     * 判断参数 HighlightTask 是否已赋值
                     * @return HighlightTask 是否已赋值
                     * 
                     */
                    bool HighlightTaskHasBeenSet() const;

                    /**
                     * 获取The query result of an intelligent removal task for video analysis, which is valid when the task type is DeLogo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeLogoTask The query result of an intelligent removal task for video analysis, which is valid when the task type is DeLogo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskDelLogoResult GetDeLogoTask() const;

                    /**
                     * 设置The query result of an intelligent removal task for video analysis, which is valid when the task type is DeLogo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _deLogoTask The query result of an intelligent removal task for video analysis, which is valid when the task type is DeLogo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeLogoTask(const AiAnalysisTaskDelLogoResult& _deLogoTask);

                    /**
                     * 判断参数 DeLogoTask 是否已赋值
                     * @return DeLogoTask 是否已赋值
                     * 
                     */
                    bool DeLogoTaskHasBeenSet() const;

                    /**
                     * 获取The query result of a splitting task for video analysis, which is valid when the task type is SegmentRecognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SegmentTask The query result of a splitting task for video analysis, which is valid when the task type is SegmentRecognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskSegmentResult GetSegmentTask() const;

                    /**
                     * 设置The query result of a splitting task for video analysis, which is valid when the task type is SegmentRecognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _segmentTask The query result of a splitting task for video analysis, which is valid when the task type is SegmentRecognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSegmentTask(const AiAnalysisTaskSegmentResult& _segmentTask);

                    /**
                     * 判断参数 SegmentTask 是否已赋值
                     * @return SegmentTask 是否已赋值
                     * 
                     */
                    bool SegmentTaskHasBeenSet() const;

                    /**
                     * 获取The query result of an opening and closing segments recognition task for video analysis, which is valid when the task type is HeadTailRecognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HeadTailTask The query result of an opening and closing segments recognition task for video analysis, which is valid when the task type is HeadTailRecognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskHeadTailResult GetHeadTailTask() const;

                    /**
                     * 设置The query result of an opening and closing segments recognition task for video analysis, which is valid when the task type is HeadTailRecognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _headTailTask The query result of an opening and closing segments recognition task for video analysis, which is valid when the task type is HeadTailRecognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHeadTailTask(const AiAnalysisTaskHeadTailResult& _headTailTask);

                    /**
                     * 判断参数 HeadTailTask 是否已赋值
                     * @return HeadTailTask 是否已赋值
                     * 
                     */
                    bool HeadTailTaskHasBeenSet() const;

                    /**
                     * 获取The query result of a video analysis summarization task, which is valid when the task type is Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DescriptionTask The query result of a video analysis summarization task, which is valid when the task type is Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskDescriptionResult GetDescriptionTask() const;

                    /**
                     * 设置The query result of a video analysis summarization task, which is valid when the task type is Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _descriptionTask The query result of a video analysis summarization task, which is valid when the task type is Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescriptionTask(const AiAnalysisTaskDescriptionResult& _descriptionTask);

                    /**
                     * 判断参数 DescriptionTask 是否已赋值
                     * @return DescriptionTask 是否已赋值
                     * 
                     */
                    bool DescriptionTaskHasBeenSet() const;

                    /**
                     * 获取The query result of a landscape-to-portrait task for video analysis, which is valid when the task type is HorizontalToVertical.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HorizontalToVerticalTask The query result of a landscape-to-portrait task for video analysis, which is valid when the task type is HorizontalToVertical.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiAnalysisTaskHorizontalToVerticalResult GetHorizontalToVerticalTask() const;

                    /**
                     * 设置The query result of a landscape-to-portrait task for video analysis, which is valid when the task type is HorizontalToVertical.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _horizontalToVerticalTask The query result of a landscape-to-portrait task for video analysis, which is valid when the task type is HorizontalToVertical.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHorizontalToVerticalTask(const AiAnalysisTaskHorizontalToVerticalResult& _horizontalToVerticalTask);

                    /**
                     * 判断参数 HorizontalToVerticalTask 是否已赋值
                     * @return HorizontalToVerticalTask 是否已赋值
                     * 
                     */
                    bool HorizontalToVerticalTaskHasBeenSet() const;

                    /**
                     * 获取The query result of a Dubbing task for video content analysis, which is valid when the task type is Dubbing.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DubbingTask The query result of a Dubbing task for video content analysis, which is valid when the task type is Dubbing.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    AiAnalysisTaskDubbingResult GetDubbingTask() const;

                    /**
                     * 设置The query result of a Dubbing task for video content analysis, which is valid when the task type is Dubbing.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dubbingTask The query result of a Dubbing task for video content analysis, which is valid when the task type is Dubbing.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDubbingTask(const AiAnalysisTaskDubbingResult& _dubbingTask);

                    /**
                     * 判断参数 DubbingTask 是否已赋值
                     * @return DubbingTask 是否已赋值
                     * 
                     */
                    bool DubbingTaskHasBeenSet() const;

                private:

                    /**
                     * Task type. valid values:.
<Li>Classification: intelligent classification.</li>.
<Li>Cover: specifies the intelligent cover.</li>.
<Li>Tag: intelligent tag.</li>.
<Li>FrameTag: specifies intelligent frame-by-frame tagging.</li>.
<Li>Highlight: intelligent highlights</li>.
<Li>DeLogo: intelligent removal.</li>.
<li>Description: large model summarization.</li>

<Li>Dubbing: intelligent dubbing.</li>.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Query result of intelligent categorization task in video content analysis, which is valid if task type is `Classification`.
                     */
                    AiAnalysisTaskClassificationResult m_classificationTask;
                    bool m_classificationTaskHasBeenSet;

                    /**
                     * Query result of intelligent cover generating task in video content analysis, which is valid if task type is `Cover`.
                     */
                    AiAnalysisTaskCoverResult m_coverTask;
                    bool m_coverTaskHasBeenSet;

                    /**
                     * Query result of intelligent tagging task in video content analysis, which is valid if task type is `Tag`.
                     */
                    AiAnalysisTaskTagResult m_tagTask;
                    bool m_tagTaskHasBeenSet;

                    /**
                     * Query result of intelligent frame-specific tagging task in video content analysis, which is valid if task type is `FrameTag`.
                     */
                    AiAnalysisTaskFrameTagResult m_frameTagTask;
                    bool m_frameTagTaskHasBeenSet;

                    /**
                     * The result of a highlight generation task. This parameter is valid if `Type` is `Highlight`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskHighlightResult m_highlightTask;
                    bool m_highlightTaskHasBeenSet;

                    /**
                     * The query result of an intelligent removal task for video analysis, which is valid when the task type is DeLogo.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskDelLogoResult m_deLogoTask;
                    bool m_deLogoTaskHasBeenSet;

                    /**
                     * The query result of a splitting task for video analysis, which is valid when the task type is SegmentRecognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskSegmentResult m_segmentTask;
                    bool m_segmentTaskHasBeenSet;

                    /**
                     * The query result of an opening and closing segments recognition task for video analysis, which is valid when the task type is HeadTailRecognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskHeadTailResult m_headTailTask;
                    bool m_headTailTaskHasBeenSet;

                    /**
                     * The query result of a video analysis summarization task, which is valid when the task type is Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskDescriptionResult m_descriptionTask;
                    bool m_descriptionTaskHasBeenSet;

                    /**
                     * The query result of a landscape-to-portrait task for video analysis, which is valid when the task type is HorizontalToVertical.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiAnalysisTaskHorizontalToVerticalResult m_horizontalToVerticalTask;
                    bool m_horizontalToVerticalTaskHasBeenSet;

                    /**
                     * The query result of a Dubbing task for video content analysis, which is valid when the task type is Dubbing.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    AiAnalysisTaskDubbingResult m_dubbingTask;
                    bool m_dubbingTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISRESULT_H_
