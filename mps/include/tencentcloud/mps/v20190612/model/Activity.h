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
                * 
                */
                class Activity : public AbstractModel
                {
                public:
                    Activity();
                    ~Activity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Atomic task type:</p><li>input: starting node</li><li>output: termination node</li><li>action-trans: transcode</li><li>action-samplesnapshot: sampled screenshot</li><li>action-AIAnalysis: analysis</li><li>action-AIRecognition: recognition</li><li>action-aiReview: review</li><li>action-animated-graphics: animated image</li><li>action-image-sprite: sprite sheet</li><li>action-snapshotByTimeOffset: time point screenshot</li><li>action-adaptive-substream: adaptive bitrate stream</li><li>action-AIQualityControl: media quality inspection</li><li>action-SmartSubtitles: smart subtitling</li><li>action-exec-rules: judgment rule</li><li>action-SmartErase: intelligent erasure</li>
                     * @return ActivityType <p>Atomic task type:</p><li>input: starting node</li><li>output: termination node</li><li>action-trans: transcode</li><li>action-samplesnapshot: sampled screenshot</li><li>action-AIAnalysis: analysis</li><li>action-AIRecognition: recognition</li><li>action-aiReview: review</li><li>action-animated-graphics: animated image</li><li>action-image-sprite: sprite sheet</li><li>action-snapshotByTimeOffset: time point screenshot</li><li>action-adaptive-substream: adaptive bitrate stream</li><li>action-AIQualityControl: media quality inspection</li><li>action-SmartSubtitles: smart subtitling</li><li>action-exec-rules: judgment rule</li><li>action-SmartErase: intelligent erasure</li>
                     * 
                     */
                    std::string GetActivityType() const;

                    /**
                     * 设置<p>Atomic task type:</p><li>input: starting node</li><li>output: termination node</li><li>action-trans: transcode</li><li>action-samplesnapshot: sampled screenshot</li><li>action-AIAnalysis: analysis</li><li>action-AIRecognition: recognition</li><li>action-aiReview: review</li><li>action-animated-graphics: animated image</li><li>action-image-sprite: sprite sheet</li><li>action-snapshotByTimeOffset: time point screenshot</li><li>action-adaptive-substream: adaptive bitrate stream</li><li>action-AIQualityControl: media quality inspection</li><li>action-SmartSubtitles: smart subtitling</li><li>action-exec-rules: judgment rule</li><li>action-SmartErase: intelligent erasure</li>
                     * @param _activityType <p>Atomic task type:</p><li>input: starting node</li><li>output: termination node</li><li>action-trans: transcode</li><li>action-samplesnapshot: sampled screenshot</li><li>action-AIAnalysis: analysis</li><li>action-AIRecognition: recognition</li><li>action-aiReview: review</li><li>action-animated-graphics: animated image</li><li>action-image-sprite: sprite sheet</li><li>action-snapshotByTimeOffset: time point screenshot</li><li>action-adaptive-substream: adaptive bitrate stream</li><li>action-AIQualityControl: media quality inspection</li><li>action-SmartSubtitles: smart subtitling</li><li>action-exec-rules: judgment rule</li><li>action-SmartErase: intelligent erasure</li>
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
                     * 获取<p>Index array of predecessor nodes.<br>Note: This parameter is invalid when creating or modifying an orchestration. It is automatically generated by the server.</p>
                     * @return PredriveIndex <p>Index array of predecessor nodes.<br>Note: This parameter is invalid when creating or modifying an orchestration. It is automatically generated by the server.</p>
                     * 
                     */
                    std::vector<int64_t> GetPredriveIndex() const;

                    /**
                     * 设置<p>Index array of predecessor nodes.<br>Note: This parameter is invalid when creating or modifying an orchestration. It is automatically generated by the server.</p>
                     * @param _predriveIndex <p>Index array of predecessor nodes.<br>Note: This parameter is invalid when creating or modifying an orchestration. It is automatically generated by the server.</p>
                     * 
                     */
                    void SetPredriveIndex(const std::vector<int64_t>& _predriveIndex);

                    /**
                     * 判断参数 PredriveIndex 是否已赋值
                     * @return PredriveIndex 是否已赋值
                     * 
                     */
                    bool PredriveIndexHasBeenSet() const;

                    /**
                     * 获取<p>Array of successor node indexes</p>
                     * @return ReardriveIndex <p>Array of successor node indexes</p>
                     * 
                     */
                    std::vector<int64_t> GetReardriveIndex() const;

                    /**
                     * 设置<p>Array of successor node indexes</p>
                     * @param _reardriveIndex <p>Array of successor node indexes</p>
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
                     * 获取<p>Atomic task parameter</p>
                     * @return ActivityPara <p>Atomic task parameter</p>
                     * 
                     */
                    ActivityPara GetActivityPara() const;

                    /**
                     * 设置<p>Atomic task parameter</p>
                     * @param _activityPara <p>Atomic task parameter</p>
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
                     * <p>Atomic task type:</p><li>input: starting node</li><li>output: termination node</li><li>action-trans: transcode</li><li>action-samplesnapshot: sampled screenshot</li><li>action-AIAnalysis: analysis</li><li>action-AIRecognition: recognition</li><li>action-aiReview: review</li><li>action-animated-graphics: animated image</li><li>action-image-sprite: sprite sheet</li><li>action-snapshotByTimeOffset: time point screenshot</li><li>action-adaptive-substream: adaptive bitrate stream</li><li>action-AIQualityControl: media quality inspection</li><li>action-SmartSubtitles: smart subtitling</li><li>action-exec-rules: judgment rule</li><li>action-SmartErase: intelligent erasure</li>
                     */
                    std::string m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * <p>Index array of predecessor nodes.<br>Note: This parameter is invalid when creating or modifying an orchestration. It is automatically generated by the server.</p>
                     */
                    std::vector<int64_t> m_predriveIndex;
                    bool m_predriveIndexHasBeenSet;

                    /**
                     * <p>Array of successor node indexes</p>
                     */
                    std::vector<int64_t> m_reardriveIndex;
                    bool m_reardriveIndexHasBeenSet;

                    /**
                     * <p>Atomic task parameter</p>
                     */
                    ActivityPara m_activityPara;
                    bool m_activityParaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITY_H_
