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
<li>input: start node</li>
<li>output: end node</li>
<li>action-trans: transcoding</li>
<li>action-samplesnapshot: sampled screenshot</li>
<li>action-AIAnalysis: analysis</li>
<li>action-AIRecognition: recognition</li>
<li>action-aiReview: review</li>
<li>action-animated-graphics: conversion to GIF</li>
<li>action-image-sprite: image sprite</li>
<li>action-snapshotByTimeOffset: time point screenshot</li>
<li>action-adaptive-substream: adaptive bitrate stream</li>
<li>action-AIQualityControl: media quality inspection</li>
<li>action-SmartSubtitles: smart subtitle</li>



Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ActivityType Atomic task type.
<li>input: start node</li>
<li>output: end node</li>
<li>action-trans: transcoding</li>
<li>action-samplesnapshot: sampled screenshot</li>
<li>action-AIAnalysis: analysis</li>
<li>action-AIRecognition: recognition</li>
<li>action-aiReview: review</li>
<li>action-animated-graphics: conversion to GIF</li>
<li>action-image-sprite: image sprite</li>
<li>action-snapshotByTimeOffset: time point screenshot</li>
<li>action-adaptive-substream: adaptive bitrate stream</li>
<li>action-AIQualityControl: media quality inspection</li>
<li>action-SmartSubtitles: smart subtitle</li>



Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetActivityType() const;

                    /**
                     * 设置Atomic task type.
<li>input: start node</li>
<li>output: end node</li>
<li>action-trans: transcoding</li>
<li>action-samplesnapshot: sampled screenshot</li>
<li>action-AIAnalysis: analysis</li>
<li>action-AIRecognition: recognition</li>
<li>action-aiReview: review</li>
<li>action-animated-graphics: conversion to GIF</li>
<li>action-image-sprite: image sprite</li>
<li>action-snapshotByTimeOffset: time point screenshot</li>
<li>action-adaptive-substream: adaptive bitrate stream</li>
<li>action-AIQualityControl: media quality inspection</li>
<li>action-SmartSubtitles: smart subtitle</li>



Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _activityType Atomic task type.
<li>input: start node</li>
<li>output: end node</li>
<li>action-trans: transcoding</li>
<li>action-samplesnapshot: sampled screenshot</li>
<li>action-AIAnalysis: analysis</li>
<li>action-AIRecognition: recognition</li>
<li>action-aiReview: review</li>
<li>action-animated-graphics: conversion to GIF</li>
<li>action-image-sprite: image sprite</li>
<li>action-snapshotByTimeOffset: time point screenshot</li>
<li>action-adaptive-substream: adaptive bitrate stream</li>
<li>action-AIQualityControl: media quality inspection</li>
<li>action-SmartSubtitles: smart subtitle</li>



Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取The indexes of the subsequent actions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReardriveIndex The indexes of the subsequent actions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetReardriveIndex() const;

                    /**
                     * 设置The indexes of the subsequent actions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reardriveIndex The indexes of the subsequent actions.
Note: This field may return null, indicating that no valid values can be obtained.
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
<li>input: start node</li>
<li>output: end node</li>
<li>action-trans: transcoding</li>
<li>action-samplesnapshot: sampled screenshot</li>
<li>action-AIAnalysis: analysis</li>
<li>action-AIRecognition: recognition</li>
<li>action-aiReview: review</li>
<li>action-animated-graphics: conversion to GIF</li>
<li>action-image-sprite: image sprite</li>
<li>action-snapshotByTimeOffset: time point screenshot</li>
<li>action-adaptive-substream: adaptive bitrate stream</li>
<li>action-AIQualityControl: media quality inspection</li>
<li>action-SmartSubtitles: smart subtitle</li>



Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * The indexes of the subsequent actions.
Note: This field may return null, indicating that no valid values can be obtained.
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
