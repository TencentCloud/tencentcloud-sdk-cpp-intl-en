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
                * The execution result of a scheme.
                */
                class ActivityResult : public AbstractModel
                {
                public:
                    ActivityResult();
                    ~ActivityResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The type of the scheme’s subtask.
<li>Transcode: Transcoding</li>
<li>SampleSnapshot: Sampled screenshot</li>
<li>AnimatedGraphics: Animated image generating</li>
<li>SnapshotByTimeOffset: Time point screenshot</li>
<li>ImageSprites: Image sprite generating</li>
<li>AdaptiveDynamicStreaming: Adaptive bitrate streaming</li>
<li>AiContentReview: Content moderation</li>
<li>AIRecognition: Content recognition</li>
<li>AIAnalysis: Content analysis</li>
                     * @return ActivityType The type of the scheme’s subtask.
<li>Transcode: Transcoding</li>
<li>SampleSnapshot: Sampled screenshot</li>
<li>AnimatedGraphics: Animated image generating</li>
<li>SnapshotByTimeOffset: Time point screenshot</li>
<li>ImageSprites: Image sprite generating</li>
<li>AdaptiveDynamicStreaming: Adaptive bitrate streaming</li>
<li>AiContentReview: Content moderation</li>
<li>AIRecognition: Content recognition</li>
<li>AIAnalysis: Content analysis</li>
                     * 
                     */
                    std::string GetActivityType() const;

                    /**
                     * 设置The type of the scheme’s subtask.
<li>Transcode: Transcoding</li>
<li>SampleSnapshot: Sampled screenshot</li>
<li>AnimatedGraphics: Animated image generating</li>
<li>SnapshotByTimeOffset: Time point screenshot</li>
<li>ImageSprites: Image sprite generating</li>
<li>AdaptiveDynamicStreaming: Adaptive bitrate streaming</li>
<li>AiContentReview: Content moderation</li>
<li>AIRecognition: Content recognition</li>
<li>AIAnalysis: Content analysis</li>
                     * @param _activityType The type of the scheme’s subtask.
<li>Transcode: Transcoding</li>
<li>SampleSnapshot: Sampled screenshot</li>
<li>AnimatedGraphics: Animated image generating</li>
<li>SnapshotByTimeOffset: Time point screenshot</li>
<li>ImageSprites: Image sprite generating</li>
<li>AdaptiveDynamicStreaming: Adaptive bitrate streaming</li>
<li>AiContentReview: Content moderation</li>
<li>AIRecognition: Content recognition</li>
<li>AIAnalysis: Content analysis</li>
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
                     * 获取The execution results of the subtasks of the scheme.
                     * @return ActivityResItem The execution results of the subtasks of the scheme.
                     * 
                     */
                    ActivityResItem GetActivityResItem() const;

                    /**
                     * 设置The execution results of the subtasks of the scheme.
                     * @param _activityResItem The execution results of the subtasks of the scheme.
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
                     * The type of the scheme’s subtask.
<li>Transcode: Transcoding</li>
<li>SampleSnapshot: Sampled screenshot</li>
<li>AnimatedGraphics: Animated image generating</li>
<li>SnapshotByTimeOffset: Time point screenshot</li>
<li>ImageSprites: Image sprite generating</li>
<li>AdaptiveDynamicStreaming: Adaptive bitrate streaming</li>
<li>AiContentReview: Content moderation</li>
<li>AIRecognition: Content recognition</li>
<li>AIAnalysis: Content analysis</li>
                     */
                    std::string m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * The execution results of the subtasks of the scheme.
                     */
                    ActivityResItem m_activityResItem;
                    bool m_activityResItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESULT_H_
