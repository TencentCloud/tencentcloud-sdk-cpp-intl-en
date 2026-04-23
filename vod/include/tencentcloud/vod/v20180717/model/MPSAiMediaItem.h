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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIAITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSAiMediaTask.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MPS AI media task item
                */
                class MPSAiMediaItem : public AbstractModel
                {
                public:
                    MPSAiMediaItem();
                    ~MPSAiMediaItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MPS intelligent processing task type. Valid values:
<li>AiAnalysis.ClassificationTask: intelligent classification task.</li>
<li>AiAnalysis.CoverTask: intelligent thumbnail generating.</li>
<li>AiAnalysis.TagTask: intelligent tag task.</li>
<li>AiAnalysis.FrameTagTask: intelligent frame-by-frame tagging task.</li>
<li>AiAnalysis.HighlightTask: Intelligent highlight task.</li>
<li>AiAnalysis.SegmentTask: Intelligent video splitting task.</li>
<li>AiAnalysis.HeadTailTask: Intelligent opening and closing credits task.</li>
<li>AiAnalysis.DescriptionTask: Intelligent summary task.</li>
<li>AiAnalysis.HorizontalToVerticalTask: Intelligent Landscape to Portrait Task.</li>
<li>AiAnalysis.DubbingTask: Intelligent dubbing task.</li>
<li>AiAnalysis.VideoRemakeTask: Intelligent deduplication task.</li>
<li>AiAnalysis.VideoComprehensionTask: Video understanding task.</li>
<li>SmartSubtitle.AsrFullTextTask: Intelligent speech full-text recognition task.</li>
<li>SmartSubtitle.TransTextTask: Translation result.</li>
<li>SmartSubtitle.PureSubtitleTransTask: Returns the pure subtitle file translation result.</li>
<li>SmartSubtitle.OcrFullTextTask: Intelligent text extraction subtitle task.</li>
                     * @return TaskType MPS intelligent processing task type. Valid values:
<li>AiAnalysis.ClassificationTask: intelligent classification task.</li>
<li>AiAnalysis.CoverTask: intelligent thumbnail generating.</li>
<li>AiAnalysis.TagTask: intelligent tag task.</li>
<li>AiAnalysis.FrameTagTask: intelligent frame-by-frame tagging task.</li>
<li>AiAnalysis.HighlightTask: Intelligent highlight task.</li>
<li>AiAnalysis.SegmentTask: Intelligent video splitting task.</li>
<li>AiAnalysis.HeadTailTask: Intelligent opening and closing credits task.</li>
<li>AiAnalysis.DescriptionTask: Intelligent summary task.</li>
<li>AiAnalysis.HorizontalToVerticalTask: Intelligent Landscape to Portrait Task.</li>
<li>AiAnalysis.DubbingTask: Intelligent dubbing task.</li>
<li>AiAnalysis.VideoRemakeTask: Intelligent deduplication task.</li>
<li>AiAnalysis.VideoComprehensionTask: Video understanding task.</li>
<li>SmartSubtitle.AsrFullTextTask: Intelligent speech full-text recognition task.</li>
<li>SmartSubtitle.TransTextTask: Translation result.</li>
<li>SmartSubtitle.PureSubtitleTransTask: Returns the pure subtitle file translation result.</li>
<li>SmartSubtitle.OcrFullTextTask: Intelligent text extraction subtitle task.</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置MPS intelligent processing task type. Valid values:
<li>AiAnalysis.ClassificationTask: intelligent classification task.</li>
<li>AiAnalysis.CoverTask: intelligent thumbnail generating.</li>
<li>AiAnalysis.TagTask: intelligent tag task.</li>
<li>AiAnalysis.FrameTagTask: intelligent frame-by-frame tagging task.</li>
<li>AiAnalysis.HighlightTask: Intelligent highlight task.</li>
<li>AiAnalysis.SegmentTask: Intelligent video splitting task.</li>
<li>AiAnalysis.HeadTailTask: Intelligent opening and closing credits task.</li>
<li>AiAnalysis.DescriptionTask: Intelligent summary task.</li>
<li>AiAnalysis.HorizontalToVerticalTask: Intelligent Landscape to Portrait Task.</li>
<li>AiAnalysis.DubbingTask: Intelligent dubbing task.</li>
<li>AiAnalysis.VideoRemakeTask: Intelligent deduplication task.</li>
<li>AiAnalysis.VideoComprehensionTask: Video understanding task.</li>
<li>SmartSubtitle.AsrFullTextTask: Intelligent speech full-text recognition task.</li>
<li>SmartSubtitle.TransTextTask: Translation result.</li>
<li>SmartSubtitle.PureSubtitleTransTask: Returns the pure subtitle file translation result.</li>
<li>SmartSubtitle.OcrFullTextTask: Intelligent text extraction subtitle task.</li>
                     * @param _taskType MPS intelligent processing task type. Valid values:
<li>AiAnalysis.ClassificationTask: intelligent classification task.</li>
<li>AiAnalysis.CoverTask: intelligent thumbnail generating.</li>
<li>AiAnalysis.TagTask: intelligent tag task.</li>
<li>AiAnalysis.FrameTagTask: intelligent frame-by-frame tagging task.</li>
<li>AiAnalysis.HighlightTask: Intelligent highlight task.</li>
<li>AiAnalysis.SegmentTask: Intelligent video splitting task.</li>
<li>AiAnalysis.HeadTailTask: Intelligent opening and closing credits task.</li>
<li>AiAnalysis.DescriptionTask: Intelligent summary task.</li>
<li>AiAnalysis.HorizontalToVerticalTask: Intelligent Landscape to Portrait Task.</li>
<li>AiAnalysis.DubbingTask: Intelligent dubbing task.</li>
<li>AiAnalysis.VideoRemakeTask: Intelligent deduplication task.</li>
<li>AiAnalysis.VideoComprehensionTask: Video understanding task.</li>
<li>SmartSubtitle.AsrFullTextTask: Intelligent speech full-text recognition task.</li>
<li>SmartSubtitle.TransTextTask: Translation result.</li>
<li>SmartSubtitle.PureSubtitleTransTask: Returns the pure subtitle file translation result.</li>
<li>SmartSubtitle.OcrFullTextTask: Intelligent text extraction subtitle task.</li>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取MPS intelligent processing task result set
                     * @return AiMediaTasks MPS intelligent processing task result set
                     * 
                     */
                    std::vector<MPSAiMediaTask> GetAiMediaTasks() const;

                    /**
                     * 设置MPS intelligent processing task result set
                     * @param _aiMediaTasks MPS intelligent processing task result set
                     * 
                     */
                    void SetAiMediaTasks(const std::vector<MPSAiMediaTask>& _aiMediaTasks);

                    /**
                     * 判断参数 AiMediaTasks 是否已赋值
                     * @return AiMediaTasks 是否已赋值
                     * 
                     */
                    bool AiMediaTasksHasBeenSet() const;

                private:

                    /**
                     * MPS intelligent processing task type. Valid values:
<li>AiAnalysis.ClassificationTask: intelligent classification task.</li>
<li>AiAnalysis.CoverTask: intelligent thumbnail generating.</li>
<li>AiAnalysis.TagTask: intelligent tag task.</li>
<li>AiAnalysis.FrameTagTask: intelligent frame-by-frame tagging task.</li>
<li>AiAnalysis.HighlightTask: Intelligent highlight task.</li>
<li>AiAnalysis.SegmentTask: Intelligent video splitting task.</li>
<li>AiAnalysis.HeadTailTask: Intelligent opening and closing credits task.</li>
<li>AiAnalysis.DescriptionTask: Intelligent summary task.</li>
<li>AiAnalysis.HorizontalToVerticalTask: Intelligent Landscape to Portrait Task.</li>
<li>AiAnalysis.DubbingTask: Intelligent dubbing task.</li>
<li>AiAnalysis.VideoRemakeTask: Intelligent deduplication task.</li>
<li>AiAnalysis.VideoComprehensionTask: Video understanding task.</li>
<li>SmartSubtitle.AsrFullTextTask: Intelligent speech full-text recognition task.</li>
<li>SmartSubtitle.TransTextTask: Translation result.</li>
<li>SmartSubtitle.PureSubtitleTransTask: Returns the pure subtitle file translation result.</li>
<li>SmartSubtitle.OcrFullTextTask: Intelligent text extraction subtitle task.</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * MPS intelligent processing task result set
                     */
                    std::vector<MPSAiMediaTask> m_aiMediaTasks;
                    bool m_aiMediaTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIAITEM_H_
