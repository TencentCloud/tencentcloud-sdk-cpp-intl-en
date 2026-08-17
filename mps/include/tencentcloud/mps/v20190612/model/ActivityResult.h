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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ActivityResItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Orchestration task output
                */
                class ActivityResult : public AbstractModel
                {
                public:
                    ActivityResult();
                    ~ActivityResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Atomic task type.
<li>Transcode: transcoding.</li>
<li>SampleSnapshot: sampled screenshot taking.</li>
<li>AnimatedGraphics: Animated image.</li>
<li>SnapshotByTimeOffset: time point screenshot taking.</li>
<li>ImageSprites: sprite sheet.</li>
<li>AdaptiveDynamicStreaming: adaptive bitrate streaming.</li>
<li>AiContentReview: content moderation.</li>
<li>AIRecognition: intelligent recognition.</li>
<li>AIAnalysis: AI analysis.</li>
<li>AiQualityControl: media quality inspection</li>
<Li>SmartSubtitles: smart subtitle</li>
<li>SmartErase: intelligent removal.</li>
                     * @return ActivityType Atomic task type.
<li>Transcode: transcoding.</li>
<li>SampleSnapshot: sampled screenshot taking.</li>
<li>AnimatedGraphics: Animated image.</li>
<li>SnapshotByTimeOffset: time point screenshot taking.</li>
<li>ImageSprites: sprite sheet.</li>
<li>AdaptiveDynamicStreaming: adaptive bitrate streaming.</li>
<li>AiContentReview: content moderation.</li>
<li>AIRecognition: intelligent recognition.</li>
<li>AIAnalysis: AI analysis.</li>
<li>AiQualityControl: media quality inspection</li>
<Li>SmartSubtitles: smart subtitle</li>
<li>SmartErase: intelligent removal.</li>
                     * 
                     */
                    std::string GetActivityType() const;

                    /**
                     * 设置Atomic task type.
<li>Transcode: transcoding.</li>
<li>SampleSnapshot: sampled screenshot taking.</li>
<li>AnimatedGraphics: Animated image.</li>
<li>SnapshotByTimeOffset: time point screenshot taking.</li>
<li>ImageSprites: sprite sheet.</li>
<li>AdaptiveDynamicStreaming: adaptive bitrate streaming.</li>
<li>AiContentReview: content moderation.</li>
<li>AIRecognition: intelligent recognition.</li>
<li>AIAnalysis: AI analysis.</li>
<li>AiQualityControl: media quality inspection</li>
<Li>SmartSubtitles: smart subtitle</li>
<li>SmartErase: intelligent removal.</li>
                     * @param _activityType Atomic task type.
<li>Transcode: transcoding.</li>
<li>SampleSnapshot: sampled screenshot taking.</li>
<li>AnimatedGraphics: Animated image.</li>
<li>SnapshotByTimeOffset: time point screenshot taking.</li>
<li>ImageSprites: sprite sheet.</li>
<li>AdaptiveDynamicStreaming: adaptive bitrate streaming.</li>
<li>AiContentReview: content moderation.</li>
<li>AIRecognition: intelligent recognition.</li>
<li>AIAnalysis: AI analysis.</li>
<li>AiQualityControl: media quality inspection</li>
<Li>SmartSubtitles: smart subtitle</li>
<li>SmartErase: intelligent removal.</li>
                     * 
                     */
                    void SetActivityType(const std::string& _activityType);

                    /**
                     * 判断参数 ActivityType 是否已赋值
                     * @return ActivityType 是否已赋值
                     * 
                     */
                    bool ActivityTypeHasBeenSet() const;

                    /**
                     * 获取Atomic task output.
                     * @return ActivityResItem Atomic task output.
                     * 
                     */
                    ActivityResItem GetActivityResItem() const;

                    /**
                     * 设置Atomic task output.
                     * @param _activityResItem Atomic task output.
                     * 
                     */
                    void SetActivityResItem(const ActivityResItem& _activityResItem);

                    /**
                     * 判断参数 ActivityResItem 是否已赋值
                     * @return ActivityResItem 是否已赋值
                     * 
                     */
                    bool ActivityResItemHasBeenSet() const;

                private:

                    /**
                     * Atomic task type.
<li>Transcode: transcoding.</li>
<li>SampleSnapshot: sampled screenshot taking.</li>
<li>AnimatedGraphics: Animated image.</li>
<li>SnapshotByTimeOffset: time point screenshot taking.</li>
<li>ImageSprites: sprite sheet.</li>
<li>AdaptiveDynamicStreaming: adaptive bitrate streaming.</li>
<li>AiContentReview: content moderation.</li>
<li>AIRecognition: intelligent recognition.</li>
<li>AIAnalysis: AI analysis.</li>
<li>AiQualityControl: media quality inspection</li>
<Li>SmartSubtitles: smart subtitle</li>
<li>SmartErase: intelligent removal.</li>
                     */
                    std::string m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * Atomic task output.
                     */
                    ActivityResItem m_activityResItem;
                    bool m_activityResItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESULT_H_
