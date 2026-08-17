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
                     * 获取Task type. Valid values:
<li>Classification: intelligent classification.</li>
<li>Cover: intelligent cover</li>
<li>Tag: intelligent tagging.</li>
<li>FrameTag: intelligent frame tagging.</li>
<li>Highlight: Intelligent Highlights</li>
<li>DeLogo: intelligent removal.</li>
<li>Description: large model summarization.</li>
<li>Dubbing: Intelligent Dubbing</li>
<li>VideoRemake: Video deduplication</li>
<li>VideoComprehension: video (audio) recognition.</li>
<li>Cutout: Video matting</li>
<li>Reel: intelligent video editing.</li>
                     * @return Type Task type. Valid values:
<li>Classification: intelligent classification.</li>
<li>Cover: intelligent cover</li>
<li>Tag: intelligent tagging.</li>
<li>FrameTag: intelligent frame tagging.</li>
<li>Highlight: Intelligent Highlights</li>
<li>DeLogo: intelligent removal.</li>
<li>Description: large model summarization.</li>
<li>Dubbing: Intelligent Dubbing</li>
<li>VideoRemake: Video deduplication</li>
<li>VideoComprehension: video (audio) recognition.</li>
<li>Cutout: Video matting</li>
<li>Reel: intelligent video editing.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
<li>Classification: intelligent classification.</li>
<li>Cover: intelligent cover</li>
<li>Tag: intelligent tagging.</li>
<li>FrameTag: intelligent frame tagging.</li>
<li>Highlight: Intelligent Highlights</li>
<li>DeLogo: intelligent removal.</li>
<li>Description: large model summarization.</li>
<li>Dubbing: Intelligent Dubbing</li>
<li>VideoRemake: Video deduplication</li>
<li>VideoComprehension: video (audio) recognition.</li>
<li>Cutout: Video matting</li>
<li>Reel: intelligent video editing.</li>
                     * @param _type Task type. Valid values:
<li>Classification: intelligent classification.</li>
<li>Cover: intelligent cover</li>
<li>Tag: intelligent tagging.</li>
<li>FrameTag: intelligent frame tagging.</li>
<li>Highlight: Intelligent Highlights</li>
<li>DeLogo: intelligent removal.</li>
<li>Description: large model summarization.</li>
<li>Dubbing: Intelligent Dubbing</li>
<li>VideoRemake: Video deduplication</li>
<li>VideoComprehension: video (audio) recognition.</li>
<li>Cutout: Video matting</li>
<li>Reel: intelligent video editing.</li>
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
                     * 获取
                     * @return ClassificationTask 
                     * 
                     */
                    AiAnalysisTaskClassificationResult GetClassificationTask() const;

                    /**
                     * 设置
                     * @param _classificationTask 
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
                     * 获取
                     * @return CoverTask 
                     * 
                     */
                    AiAnalysisTaskCoverResult GetCoverTask() const;

                    /**
                     * 设置
                     * @param _coverTask 
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
                     * 获取
                     * @return TagTask 
                     * 
                     */
                    AiAnalysisTaskTagResult GetTagTask() const;

                    /**
                     * 设置
                     * @param _tagTask 
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
                     * 获取
                     * @return FrameTagTask 
                     * 
                     */
                    AiAnalysisTaskFrameTagResult GetFrameTagTask() const;

                    /**
                     * 设置
                     * @param _frameTagTask 
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
                     * 获取
                     * @return HighlightTask 
                     * 
                     */
                    AiAnalysisTaskHighlightResult GetHighlightTask() const;

                    /**
                     * 设置
                     * @param _highlightTask 
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
                     * 获取
                     * @return DeLogoTask 
                     * 
                     */
                    AiAnalysisTaskDelLogoResult GetDeLogoTask() const;

                    /**
                     * 设置
                     * @param _deLogoTask 
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
                     * 获取
                     * @return SegmentTask 
                     * 
                     */
                    AiAnalysisTaskSegmentResult GetSegmentTask() const;

                    /**
                     * 设置
                     * @param _segmentTask 
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
                     * 获取
                     * @return HeadTailTask 
                     * 
                     */
                    AiAnalysisTaskHeadTailResult GetHeadTailTask() const;

                    /**
                     * 设置
                     * @param _headTailTask 
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
                     * 获取
                     * @return DescriptionTask 
                     * 
                     */
                    AiAnalysisTaskDescriptionResult GetDescriptionTask() const;

                    /**
                     * 设置
                     * @param _descriptionTask 
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
                     * 获取
                     * @return HorizontalToVerticalTask 
                     * 
                     */
                    AiAnalysisTaskHorizontalToVerticalResult GetHorizontalToVerticalTask() const;

                    /**
                     * 设置
                     * @param _horizontalToVerticalTask 
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
                     * 获取
                     * @return DubbingTask 
                     * 
                     */
                    AiAnalysisTaskDubbingResult GetDubbingTask() const;

                    /**
                     * 设置
                     * @param _dubbingTask 
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
                     * 获取
                     * @return VideoRemakeTask 
                     * 
                     */
                    AiAnalysisTaskVideoRemakeResult GetVideoRemakeTask() const;

                    /**
                     * 设置
                     * @param _videoRemakeTask 
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
                     * 获取
                     * @return VideoComprehensionTask 
                     * 
                     */
                    AiAnalysisTaskVideoComprehensionResult GetVideoComprehensionTask() const;

                    /**
                     * 设置
                     * @param _videoComprehensionTask 
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
                     * 获取
                     * @return CutoutTask 
                     * 
                     */
                    AiAnalysisTaskCutoutResult GetCutoutTask() const;

                    /**
                     * 设置
                     * @param _cutoutTask 
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
                     * 获取
                     * @return ReelTask 
                     * 
                     */
                    AiAnalysisTaskReelResult GetReelTask() const;

                    /**
                     * 设置
                     * @param _reelTask 
                     * 
                     */
                    void SetReelTask(const AiAnalysisTaskReelResult& _reelTask);

                    /**
                     * 判断参数 ReelTask 是否已赋值
                     * @return ReelTask 是否已赋值
                     * 
                     */
                    bool ReelTaskHasBeenSet() const;

                private:

                    /**
                     * Task type. Valid values:
<li>Classification: intelligent classification.</li>
<li>Cover: intelligent cover</li>
<li>Tag: intelligent tagging.</li>
<li>FrameTag: intelligent frame tagging.</li>
<li>Highlight: Intelligent Highlights</li>
<li>DeLogo: intelligent removal.</li>
<li>Description: large model summarization.</li>
<li>Dubbing: Intelligent Dubbing</li>
<li>VideoRemake: Video deduplication</li>
<li>VideoComprehension: video (audio) recognition.</li>
<li>Cutout: Video matting</li>
<li>Reel: intelligent video editing.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskClassificationResult m_classificationTask;
                    bool m_classificationTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskCoverResult m_coverTask;
                    bool m_coverTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskTagResult m_tagTask;
                    bool m_tagTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskFrameTagResult m_frameTagTask;
                    bool m_frameTagTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskHighlightResult m_highlightTask;
                    bool m_highlightTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskDelLogoResult m_deLogoTask;
                    bool m_deLogoTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskSegmentResult m_segmentTask;
                    bool m_segmentTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskHeadTailResult m_headTailTask;
                    bool m_headTailTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskDescriptionResult m_descriptionTask;
                    bool m_descriptionTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskHorizontalToVerticalResult m_horizontalToVerticalTask;
                    bool m_horizontalToVerticalTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskDubbingResult m_dubbingTask;
                    bool m_dubbingTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskVideoRemakeResult m_videoRemakeTask;
                    bool m_videoRemakeTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskVideoComprehensionResult m_videoComprehensionTask;
                    bool m_videoComprehensionTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskCutoutResult m_cutoutTask;
                    bool m_cutoutTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskReelResult m_reelTask;
                    bool m_reelTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISRESULT_H_
