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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSITIONITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSITIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TransitionOpertion.h>
#include <tencentcloud/vod/v20180717/model/TransitionOperation.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Transition information
                */
                class MediaTransitionItem : public AbstractModel
                {
                public:
                    MediaTransitionItem();
                    ~MediaTransitionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Transition duration in seconds. For two media segments that use a transition, the start time of the second segment on the track will be automatically set to the end time of the first segment minus the transition duration.
                     * @return Duration Transition duration in seconds. For two media segments that use a transition, the start time of the second segment on the track will be automatically set to the end time of the first segment minus the transition duration.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Transition duration in seconds. For two media segments that use a transition, the start time of the second segment on the track will be automatically set to the end time of the first segment minus the transition duration.
                     * @param _duration Transition duration in seconds. For two media segments that use a transition, the start time of the second segment on the track will be automatically set to the end time of the first segment minus the transition duration.
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取List of transition operations. Up to one video image or audio transition operation is supported.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Transitions List of transition operations. Up to one video image or audio transition operation is supported.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::vector<TransitionOpertion> GetTransitions() const;

                    /**
                     * 设置List of transition operations. Up to one video image or audio transition operation is supported.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _transitions List of transition operations. Up to one video image or audio transition operation is supported.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetTransitions(const std::vector<TransitionOpertion>& _transitions);

                    /**
                     * 判断参数 Transitions 是否已赋值
                     * @return Transitions 是否已赋值
                     * @deprecated
                     */
                    bool TransitionsHasBeenSet() const;

                    /**
                     * 获取Transition operation list. Image transition operations and audio transition operations support at most one each.
                     * @return MediaTransitions Transition operation list. Image transition operations and audio transition operations support at most one each.
                     * 
                     */
                    std::vector<TransitionOperation> GetMediaTransitions() const;

                    /**
                     * 设置Transition operation list. Image transition operations and audio transition operations support at most one each.
                     * @param _mediaTransitions Transition operation list. Image transition operations and audio transition operations support at most one each.
                     * 
                     */
                    void SetMediaTransitions(const std::vector<TransitionOperation>& _mediaTransitions);

                    /**
                     * 判断参数 MediaTransitions 是否已赋值
                     * @return MediaTransitions 是否已赋值
                     * 
                     */
                    bool MediaTransitionsHasBeenSet() const;

                private:

                    /**
                     * Transition duration in seconds. For two media segments that use a transition, the start time of the second segment on the track will be automatically set to the end time of the first segment minus the transition duration.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * List of transition operations. Up to one video image or audio transition operation is supported.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TransitionOpertion> m_transitions;
                    bool m_transitionsHasBeenSet;

                    /**
                     * Transition operation list. Image transition operations and audio transition operations support at most one each.
                     */
                    std::vector<TransitionOperation> m_mediaTransitions;
                    bool m_mediaTransitionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSITIONITEM_H_
