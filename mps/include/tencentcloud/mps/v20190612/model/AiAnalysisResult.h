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
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskVideoRemakeResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskVideoComprehensionResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskCutoutResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskReelResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskGenericResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
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
                     * 获取<p>Task type. Valid values:</p><li>Classification: intelligent classification</li><li>Cover: intelligent cover</li><li>Tag: intelligent tag</li><li>FrameTag: intelligent frame tagging</li><li>Highlight: intelligent highlights</li><li>DeLogo: smart erasing</li><li>Description: LLM summarization</li><li>Dubbing: intelligent dubbing</li><li>VideoRemake: video deduplication</li><li>VideoComprehension: video (audio) understanding</li><li>Cutout: video matting</li><li>Reel: intelligent video creation</li>
                     * @return Type <p>Task type. Valid values:</p><li>Classification: intelligent classification</li><li>Cover: intelligent cover</li><li>Tag: intelligent tag</li><li>FrameTag: intelligent frame tagging</li><li>Highlight: intelligent highlights</li><li>DeLogo: smart erasing</li><li>Description: LLM summarization</li><li>Dubbing: intelligent dubbing</li><li>VideoRemake: video deduplication</li><li>VideoComprehension: video (audio) understanding</li><li>Cutout: video matting</li><li>Reel: intelligent video creation</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Task type. Valid values:</p><li>Classification: intelligent classification</li><li>Cover: intelligent cover</li><li>Tag: intelligent tag</li><li>FrameTag: intelligent frame tagging</li><li>Highlight: intelligent highlights</li><li>DeLogo: smart erasing</li><li>Description: LLM summarization</li><li>Dubbing: intelligent dubbing</li><li>VideoRemake: video deduplication</li><li>VideoComprehension: video (audio) understanding</li><li>Cutout: video matting</li><li>Reel: intelligent video creation</li>
                     * @param _type <p>Task type. Valid values:</p><li>Classification: intelligent classification</li><li>Cover: intelligent cover</li><li>Tag: intelligent tag</li><li>FrameTag: intelligent frame tagging</li><li>Highlight: intelligent highlights</li><li>DeLogo: smart erasing</li><li>Description: LLM summarization</li><li>Dubbing: intelligent dubbing</li><li>VideoRemake: video deduplication</li><li>VideoComprehension: video (audio) understanding</li><li>Cutout: video matting</li><li>Reel: intelligent video creation</li>
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
                     * 获取<p>Query result of the video content analysis intelligent categorization task. Valid when the task type is Classification.</p>
                     * @return ClassificationTask <p>Query result of the video content analysis intelligent categorization task. Valid when the task type is Classification.</p>
                     * 
                     */
                    AiAnalysisTaskClassificationResult GetClassificationTask() const;

                    /**
                     * 设置<p>Query result of the video content analysis intelligent categorization task. Valid when the task type is Classification.</p>
                     * @param _classificationTask <p>Query result of the video content analysis intelligent categorization task. Valid when the task type is Classification.</p>
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
                     * 获取<p>Query result of the video content analysis Intelligent Cover Task. Valid when the task type is Cover.</p>
                     * @return CoverTask <p>Query result of the video content analysis Intelligent Cover Task. Valid when the task type is Cover.</p>
                     * 
                     */
                    AiAnalysisTaskCoverResult GetCoverTask() const;

                    /**
                     * 设置<p>Query result of the video content analysis Intelligent Cover Task. Valid when the task type is Cover.</p>
                     * @param _coverTask <p>Query result of the video content analysis Intelligent Cover Task. Valid when the task type is Cover.</p>
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
                     * 获取<p>Query result of the video content analysis intelligent tag task. Valid when the task type is Tag.</p>
                     * @return TagTask <p>Query result of the video content analysis intelligent tag task. Valid when the task type is Tag.</p>
                     * 
                     */
                    AiAnalysisTaskTagResult GetTagTask() const;

                    /**
                     * 设置<p>Query result of the video content analysis intelligent tag task. Valid when the task type is Tag.</p>
                     * @param _tagTask <p>Query result of the video content analysis intelligent tag task. Valid when the task type is Tag.</p>
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
                     * 获取<p>Query result of the intelligent frame tagging task for video content analysis. Valid when the task type is FrameTag.</p>
                     * @return FrameTagTask <p>Query result of the intelligent frame tagging task for video content analysis. Valid when the task type is FrameTag.</p>
                     * 
                     */
                    AiAnalysisTaskFrameTagResult GetFrameTagTask() const;

                    /**
                     * 设置<p>Query result of the intelligent frame tagging task for video content analysis. Valid when the task type is FrameTag.</p>
                     * @param _frameTagTask <p>Query result of the intelligent frame tagging task for video content analysis. Valid when the task type is FrameTag.</p>
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
                     * 获取<p>Query result of the video content analysis highlight task. Valid when the task type is Highlight.</p>
                     * @return HighlightTask <p>Query result of the video content analysis highlight task. Valid when the task type is Highlight.</p>
                     * 
                     */
                    AiAnalysisTaskHighlightResult GetHighlightTask() const;

                    /**
                     * 设置<p>Query result of the video content analysis highlight task. Valid when the task type is Highlight.</p>
                     * @param _highlightTask <p>Query result of the video content analysis highlight task. Valid when the task type is Highlight.</p>
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
                     * 获取<p>Query result of the video content analysis smart erasing task. Valid when the task type is DeLogo.</p>
                     * @return DeLogoTask <p>Query result of the video content analysis smart erasing task. Valid when the task type is DeLogo.</p>
                     * 
                     */
                    AiAnalysisTaskDelLogoResult GetDeLogoTask() const;

                    /**
                     * 设置<p>Query result of the video content analysis smart erasing task. Valid when the task type is DeLogo.</p>
                     * @param _deLogoTask <p>Query result of the video content analysis smart erasing task. Valid when the task type is DeLogo.</p>
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
                     * 获取<p>The query result of a splitting task for video analysis, which is valid when the task type is SegmentRecognition.</p>
                     * @return SegmentTask <p>The query result of a splitting task for video analysis, which is valid when the task type is SegmentRecognition.</p>
                     * 
                     */
                    AiAnalysisTaskSegmentResult GetSegmentTask() const;

                    /**
                     * 设置<p>The query result of a splitting task for video analysis, which is valid when the task type is SegmentRecognition.</p>
                     * @param _segmentTask <p>The query result of a splitting task for video analysis, which is valid when the task type is SegmentRecognition.</p>
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
                     * 获取<p>The query result of an opening and closing segments recognition task for video analysis, which is valid when the task type is HeadTailRecognition.</p>
                     * @return HeadTailTask <p>The query result of an opening and closing segments recognition task for video analysis, which is valid when the task type is HeadTailRecognition.</p>
                     * 
                     */
                    AiAnalysisTaskHeadTailResult GetHeadTailTask() const;

                    /**
                     * 设置<p>The query result of an opening and closing segments recognition task for video analysis, which is valid when the task type is HeadTailRecognition.</p>
                     * @param _headTailTask <p>The query result of an opening and closing segments recognition task for video analysis, which is valid when the task type is HeadTailRecognition.</p>
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
                     * 获取<p>The query result of a video content analysis summary task, valid when the task type is Description.</p>
                     * @return DescriptionTask <p>The query result of a video content analysis summary task, valid when the task type is Description.</p>
                     * 
                     */
                    AiAnalysisTaskDescriptionResult GetDescriptionTask() const;

                    /**
                     * 设置<p>The query result of a video content analysis summary task, valid when the task type is Description.</p>
                     * @param _descriptionTask <p>The query result of a video content analysis summary task, valid when the task type is Description.</p>
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
                     * 获取<p>The query result of a landscape-to-portrait task for video content analysis, which is valid when the task type is HorizontalToVertical.</p>
                     * @return HorizontalToVerticalTask <p>The query result of a landscape-to-portrait task for video content analysis, which is valid when the task type is HorizontalToVertical.</p>
                     * 
                     */
                    AiAnalysisTaskHorizontalToVerticalResult GetHorizontalToVerticalTask() const;

                    /**
                     * 设置<p>The query result of a landscape-to-portrait task for video content analysis, which is valid when the task type is HorizontalToVertical.</p>
                     * @param _horizontalToVerticalTask <p>The query result of a landscape-to-portrait task for video content analysis, which is valid when the task type is HorizontalToVertical.</p>
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
                     * 获取<p>Query result of the video content analysis dubbing task. Valid when the task type is Dubbing.</p>
                     * @return DubbingTask <p>Query result of the video content analysis dubbing task. Valid when the task type is Dubbing.</p>
                     * 
                     */
                    AiAnalysisTaskDubbingResult GetDubbingTask() const;

                    /**
                     * 设置<p>Query result of the video content analysis dubbing task. Valid when the task type is Dubbing.</p>
                     * @param _dubbingTask <p>Query result of the video content analysis dubbing task. Valid when the task type is Dubbing.</p>
                     * 
                     */
                    void SetDubbingTask(const AiAnalysisTaskDubbingResult& _dubbingTask);

                    /**
                     * 判断参数 DubbingTask 是否已赋值
                     * @return DubbingTask 是否已赋值
                     * 
                     */
                    bool DubbingTaskHasBeenSet() const;

                    /**
                     * 获取<p>The query result of a deduplication task for video content analysis, which is valid when the task type is VideoRemake.</p>
                     * @return VideoRemakeTask <p>The query result of a deduplication task for video content analysis, which is valid when the task type is VideoRemake.</p>
                     * 
                     */
                    AiAnalysisTaskVideoRemakeResult GetVideoRemakeTask() const;

                    /**
                     * 设置<p>The query result of a deduplication task for video content analysis, which is valid when the task type is VideoRemake.</p>
                     * @param _videoRemakeTask <p>The query result of a deduplication task for video content analysis, which is valid when the task type is VideoRemake.</p>
                     * 
                     */
                    void SetVideoRemakeTask(const AiAnalysisTaskVideoRemakeResult& _videoRemakeTask);

                    /**
                     * 判断参数 VideoRemakeTask 是否已赋值
                     * @return VideoRemakeTask 是否已赋值
                     * 
                     */
                    bool VideoRemakeTaskHasBeenSet() const;

                    /**
                     * 获取<p>Query result of the video (audio) understanding task. This parameter is valid when the task type is VideoComprehension.</p>
                     * @return VideoComprehensionTask <p>Query result of the video (audio) understanding task. This parameter is valid when the task type is VideoComprehension.</p>
                     * 
                     */
                    AiAnalysisTaskVideoComprehensionResult GetVideoComprehensionTask() const;

                    /**
                     * 设置<p>Query result of the video (audio) understanding task. This parameter is valid when the task type is VideoComprehension.</p>
                     * @param _videoComprehensionTask <p>Query result of the video (audio) understanding task. This parameter is valid when the task type is VideoComprehension.</p>
                     * 
                     */
                    void SetVideoComprehensionTask(const AiAnalysisTaskVideoComprehensionResult& _videoComprehensionTask);

                    /**
                     * 判断参数 VideoComprehensionTask 是否已赋值
                     * @return VideoComprehensionTask 是否已赋值
                     * 
                     */
                    bool VideoComprehensionTaskHasBeenSet() const;

                    /**
                     * 获取<p>Query result of the video content analysis intelligent image masking task. Valid when the task type is Cutout.</p>
                     * @return CutoutTask <p>Query result of the video content analysis intelligent image masking task. Valid when the task type is Cutout.</p>
                     * 
                     */
                    AiAnalysisTaskCutoutResult GetCutoutTask() const;

                    /**
                     * 设置<p>Query result of the video content analysis intelligent image masking task. Valid when the task type is Cutout.</p>
                     * @param _cutoutTask <p>Query result of the video content analysis intelligent image masking task. Valid when the task type is Cutout.</p>
                     * 
                     */
                    void SetCutoutTask(const AiAnalysisTaskCutoutResult& _cutoutTask);

                    /**
                     * 判断参数 CutoutTask 是否已赋值
                     * @return CutoutTask 是否已赋值
                     * 
                     */
                    bool CutoutTaskHasBeenSet() const;

                    /**
                     * 获取<p>Query result of the video content analysis AI narration and video re-creation task. Valid when the task type is Reel.</p>
                     * @return ReelTask <p>Query result of the video content analysis AI narration and video re-creation task. Valid when the task type is Reel.</p>
                     * 
                     */
                    AiAnalysisTaskReelResult GetReelTask() const;

                    /**
                     * 设置<p>Query result of the video content analysis AI narration and video re-creation task. Valid when the task type is Reel.</p>
                     * @param _reelTask <p>Query result of the video content analysis AI narration and video re-creation task. Valid when the task type is Reel.</p>
                     * 
                     */
                    void SetReelTask(const AiAnalysisTaskReelResult& _reelTask);

                    /**
                     * 判断参数 ReelTask 是否已赋值
                     * @return ReelTask 是否已赋值
                     * 
                     */
                    bool ReelTaskHasBeenSet() const;

                    /**
                     * 获取<p>Query result of the intelligent analysis common task. Valid when the task type is Generic.</p>
                     * @return GenericTask <p>Query result of the intelligent analysis common task. Valid when the task type is Generic.</p>
                     * 
                     */
                    AiAnalysisTaskGenericResult GetGenericTask() const;

                    /**
                     * 设置<p>Query result of the intelligent analysis common task. Valid when the task type is Generic.</p>
                     * @param _genericTask <p>Query result of the intelligent analysis common task. Valid when the task type is Generic.</p>
                     * 
                     */
                    void SetGenericTask(const AiAnalysisTaskGenericResult& _genericTask);

                    /**
                     * 判断参数 GenericTask 是否已赋值
                     * @return GenericTask 是否已赋值
                     * 
                     */
                    bool GenericTaskHasBeenSet() const;

                private:

                    /**
                     * <p>Task type. Valid values:</p><li>Classification: intelligent classification</li><li>Cover: intelligent cover</li><li>Tag: intelligent tag</li><li>FrameTag: intelligent frame tagging</li><li>Highlight: intelligent highlights</li><li>DeLogo: smart erasing</li><li>Description: LLM summarization</li><li>Dubbing: intelligent dubbing</li><li>VideoRemake: video deduplication</li><li>VideoComprehension: video (audio) understanding</li><li>Cutout: video matting</li><li>Reel: intelligent video creation</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Query result of the video content analysis intelligent categorization task. Valid when the task type is Classification.</p>
                     */
                    AiAnalysisTaskClassificationResult m_classificationTask;
                    bool m_classificationTaskHasBeenSet;

                    /**
                     * <p>Query result of the video content analysis Intelligent Cover Task. Valid when the task type is Cover.</p>
                     */
                    AiAnalysisTaskCoverResult m_coverTask;
                    bool m_coverTaskHasBeenSet;

                    /**
                     * <p>Query result of the video content analysis intelligent tag task. Valid when the task type is Tag.</p>
                     */
                    AiAnalysisTaskTagResult m_tagTask;
                    bool m_tagTaskHasBeenSet;

                    /**
                     * <p>Query result of the intelligent frame tagging task for video content analysis. Valid when the task type is FrameTag.</p>
                     */
                    AiAnalysisTaskFrameTagResult m_frameTagTask;
                    bool m_frameTagTaskHasBeenSet;

                    /**
                     * <p>Query result of the video content analysis highlight task. Valid when the task type is Highlight.</p>
                     */
                    AiAnalysisTaskHighlightResult m_highlightTask;
                    bool m_highlightTaskHasBeenSet;

                    /**
                     * <p>Query result of the video content analysis smart erasing task. Valid when the task type is DeLogo.</p>
                     */
                    AiAnalysisTaskDelLogoResult m_deLogoTask;
                    bool m_deLogoTaskHasBeenSet;

                    /**
                     * <p>The query result of a splitting task for video analysis, which is valid when the task type is SegmentRecognition.</p>
                     */
                    AiAnalysisTaskSegmentResult m_segmentTask;
                    bool m_segmentTaskHasBeenSet;

                    /**
                     * <p>The query result of an opening and closing segments recognition task for video analysis, which is valid when the task type is HeadTailRecognition.</p>
                     */
                    AiAnalysisTaskHeadTailResult m_headTailTask;
                    bool m_headTailTaskHasBeenSet;

                    /**
                     * <p>The query result of a video content analysis summary task, valid when the task type is Description.</p>
                     */
                    AiAnalysisTaskDescriptionResult m_descriptionTask;
                    bool m_descriptionTaskHasBeenSet;

                    /**
                     * <p>The query result of a landscape-to-portrait task for video content analysis, which is valid when the task type is HorizontalToVertical.</p>
                     */
                    AiAnalysisTaskHorizontalToVerticalResult m_horizontalToVerticalTask;
                    bool m_horizontalToVerticalTaskHasBeenSet;

                    /**
                     * <p>Query result of the video content analysis dubbing task. Valid when the task type is Dubbing.</p>
                     */
                    AiAnalysisTaskDubbingResult m_dubbingTask;
                    bool m_dubbingTaskHasBeenSet;

                    /**
                     * <p>The query result of a deduplication task for video content analysis, which is valid when the task type is VideoRemake.</p>
                     */
                    AiAnalysisTaskVideoRemakeResult m_videoRemakeTask;
                    bool m_videoRemakeTaskHasBeenSet;

                    /**
                     * <p>Query result of the video (audio) understanding task. This parameter is valid when the task type is VideoComprehension.</p>
                     */
                    AiAnalysisTaskVideoComprehensionResult m_videoComprehensionTask;
                    bool m_videoComprehensionTaskHasBeenSet;

                    /**
                     * <p>Query result of the video content analysis intelligent image masking task. Valid when the task type is Cutout.</p>
                     */
                    AiAnalysisTaskCutoutResult m_cutoutTask;
                    bool m_cutoutTaskHasBeenSet;

                    /**
                     * <p>Query result of the video content analysis AI narration and video re-creation task. Valid when the task type is Reel.</p>
                     */
                    AiAnalysisTaskReelResult m_reelTask;
                    bool m_reelTaskHasBeenSet;

                    /**
                     * <p>Query result of the intelligent analysis common task. Valid when the task type is Generic.</p>
                     */
                    AiAnalysisTaskGenericResult m_genericTask;
                    bool m_genericTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISRESULT_H_
