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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITY_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ActivityPara.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * A subtask of a scheme.
                */
                class Activity : public AbstractModel
                {
                public:
                    Activity();
                    ~Activity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Atomic task type.
<li>input: starting node.</li>.
<li>`output`: termination node</li>.
<li>action-trans: transcoding.</li>.
<li>action-samplesnapshot: specifies sampled screenshot taking.</li>.
<li>action-AIAnalysis: analysis.</li>.
<li>action-AIRecognition: specifies recognition.</li>.
<li>action-aiReview: specifies the review action.</li>.
<li>action-animated-graphics: specifies the animated image.</li>.
<li>action-image-sprite: specifies the sprite sheet.</li>.
<li>action-snapshotByTimeOffset: specifies time point screenshot taking.</li>.
<li>action-adaptive-substream: specifies the adaptive bitrate stream.</li>.
<li>action-AIQualityControl: media quality inspection.</li>.
<li>action-SmartSubtitles: specifies smart subtitling.</li>.



                     * @return ActivityType Atomic task type.
<li>input: starting node.</li>.
<li>`output`: termination node</li>.
<li>action-trans: transcoding.</li>.
<li>action-samplesnapshot: specifies sampled screenshot taking.</li>.
<li>action-AIAnalysis: analysis.</li>.
<li>action-AIRecognition: specifies recognition.</li>.
<li>action-aiReview: specifies the review action.</li>.
<li>action-animated-graphics: specifies the animated image.</li>.
<li>action-image-sprite: specifies the sprite sheet.</li>.
<li>action-snapshotByTimeOffset: specifies time point screenshot taking.</li>.
<li>action-adaptive-substream: specifies the adaptive bitrate stream.</li>.
<li>action-AIQualityControl: media quality inspection.</li>.
<li>action-SmartSubtitles: specifies smart subtitling.</li>.



                     * 
                     */
                    std::string GetActivityType() const;

                    /**
                     * 设置Atomic task type.
<li>input: starting node.</li>.
<li>`output`: termination node</li>.
<li>action-trans: transcoding.</li>.
<li>action-samplesnapshot: specifies sampled screenshot taking.</li>.
<li>action-AIAnalysis: analysis.</li>.
<li>action-AIRecognition: specifies recognition.</li>.
<li>action-aiReview: specifies the review action.</li>.
<li>action-animated-graphics: specifies the animated image.</li>.
<li>action-image-sprite: specifies the sprite sheet.</li>.
<li>action-snapshotByTimeOffset: specifies time point screenshot taking.</li>.
<li>action-adaptive-substream: specifies the adaptive bitrate stream.</li>.
<li>action-AIQualityControl: media quality inspection.</li>.
<li>action-SmartSubtitles: specifies smart subtitling.</li>.



                     * @param _activityType Atomic task type.
<li>input: starting node.</li>.
<li>`output`: termination node</li>.
<li>action-trans: transcoding.</li>.
<li>action-samplesnapshot: specifies sampled screenshot taking.</li>.
<li>action-AIAnalysis: analysis.</li>.
<li>action-AIRecognition: specifies recognition.</li>.
<li>action-aiReview: specifies the review action.</li>.
<li>action-animated-graphics: specifies the animated image.</li>.
<li>action-image-sprite: specifies the sprite sheet.</li>.
<li>action-snapshotByTimeOffset: specifies time point screenshot taking.</li>.
<li>action-adaptive-substream: specifies the adaptive bitrate stream.</li>.
<li>action-AIQualityControl: media quality inspection.</li>.
<li>action-SmartSubtitles: specifies smart subtitling.</li>.



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
                     * 获取Rear node index array.
                     * @return ReardriveIndex Rear node index array.
                     * 
                     */
                    std::vector<int64_t> GetReardriveIndex() const;

                    /**
                     * 设置Rear node index array.
                     * @param _reardriveIndex Rear node index array.
                     * 
                     */
                    void SetReardriveIndex(const std::vector<int64_t>& _reardriveIndex);

                    /**
                     * 判断参数 ReardriveIndex 是否已赋值
                     * @return ReardriveIndex 是否已赋值
                     * 
                     */
                    bool ReardriveIndexHasBeenSet() const;

                    /**
                     * 获取The parameters of a subtask.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActivityPara The parameters of a subtask.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ActivityPara GetActivityPara() const;

                    /**
                     * 设置The parameters of a subtask.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _activityPara The parameters of a subtask.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActivityPara(const ActivityPara& _activityPara);

                    /**
                     * 判断参数 ActivityPara 是否已赋值
                     * @return ActivityPara 是否已赋值
                     * 
                     */
                    bool ActivityParaHasBeenSet() const;

                private:

                    /**
                     * Atomic task type.
<li>input: starting node.</li>.
<li>`output`: termination node</li>.
<li>action-trans: transcoding.</li>.
<li>action-samplesnapshot: specifies sampled screenshot taking.</li>.
<li>action-AIAnalysis: analysis.</li>.
<li>action-AIRecognition: specifies recognition.</li>.
<li>action-aiReview: specifies the review action.</li>.
<li>action-animated-graphics: specifies the animated image.</li>.
<li>action-image-sprite: specifies the sprite sheet.</li>.
<li>action-snapshotByTimeOffset: specifies time point screenshot taking.</li>.
<li>action-adaptive-substream: specifies the adaptive bitrate stream.</li>.
<li>action-AIQualityControl: media quality inspection.</li>.
<li>action-SmartSubtitles: specifies smart subtitling.</li>.



                     */
                    std::string m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * Rear node index array.
                     */
                    std::vector<int64_t> m_reardriveIndex;
                    bool m_reardriveIndexHasBeenSet;

                    /**
                     * The parameters of a subtask.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ActivityPara m_activityPara;
                    bool m_activityParaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITY_H_
