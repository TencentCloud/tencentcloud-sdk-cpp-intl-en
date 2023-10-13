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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETRANSITIONITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETRANSITIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeTransitionOperation.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The transition element information of a video editing/compositing task.
                */
                class ComposeTransitionItem : public AbstractModel
                {
                public:
                    ComposeTransitionItem();
                    ~ComposeTransitionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The element duration. <li>The value of this parameter ends with `s`, which means seconds. For example, `3s` indicates 3 seconds. </li>
Default value: `1s`.
Note
<li>The number before `s` must be an integer. Non-integers will be rounded down to the nearest integer. </li>
<li>The transition element must be between two non-empty elements. </li>
<li>The duration of the transition element must be shorter than that of the preceding element and the following element. </li>
u200c<li>The start time of the following element on the track will be automatically changed to the end time of the preceding element minus the duration of the transition element. </li>
                     * @return Duration The element duration. <li>The value of this parameter ends with `s`, which means seconds. For example, `3s` indicates 3 seconds. </li>
Default value: `1s`.
Note
<li>The number before `s` must be an integer. Non-integers will be rounded down to the nearest integer. </li>
<li>The transition element must be between two non-empty elements. </li>
<li>The duration of the transition element must be shorter than that of the preceding element and the following element. </li>
u200c<li>The start time of the following element on the track will be automatically changed to the end time of the preceding element minus the duration of the transition element. </li>
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置The element duration. <li>The value of this parameter ends with `s`, which means seconds. For example, `3s` indicates 3 seconds. </li>
Default value: `1s`.
Note
<li>The number before `s` must be an integer. Non-integers will be rounded down to the nearest integer. </li>
<li>The transition element must be between two non-empty elements. </li>
<li>The duration of the transition element must be shorter than that of the preceding element and the following element. </li>
u200c<li>The start time of the following element on the track will be automatically changed to the end time of the preceding element minus the duration of the transition element. </li>
                     * @param _duration The element duration. <li>The value of this parameter ends with `s`, which means seconds. For example, `3s` indicates 3 seconds. </li>
Default value: `1s`.
Note
<li>The number before `s` must be an integer. Non-integers will be rounded down to the nearest integer. </li>
<li>The transition element must be between two non-empty elements. </li>
<li>The duration of the transition element must be shorter than that of the preceding element and the following element. </li>
u200c<li>The start time of the following element on the track will be automatically changed to the end time of the preceding element minus the duration of the transition element. </li>
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取The transition effects.
The default transition effect is fade.
Note: You can add at most one image transition and one audio transition.
                     * @return Transitions The transition effects.
The default transition effect is fade.
Note: You can add at most one image transition and one audio transition.
                     * 
                     */
                    std::vector<ComposeTransitionOperation> GetTransitions() const;

                    /**
                     * 设置The transition effects.
The default transition effect is fade.
Note: You can add at most one image transition and one audio transition.
                     * @param _transitions The transition effects.
The default transition effect is fade.
Note: You can add at most one image transition and one audio transition.
                     * 
                     */
                    void SetTransitions(const std::vector<ComposeTransitionOperation>& _transitions);

                    /**
                     * 判断参数 Transitions 是否已赋值
                     * @return Transitions 是否已赋值
                     * 
                     */
                    bool TransitionsHasBeenSet() const;

                private:

                    /**
                     * The element duration. <li>The value of this parameter ends with `s`, which means seconds. For example, `3s` indicates 3 seconds. </li>
Default value: `1s`.
Note
<li>The number before `s` must be an integer. Non-integers will be rounded down to the nearest integer. </li>
<li>The transition element must be between two non-empty elements. </li>
<li>The duration of the transition element must be shorter than that of the preceding element and the following element. </li>
u200c<li>The start time of the following element on the track will be automatically changed to the end time of the preceding element minus the duration of the transition element. </li>
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * The transition effects.
The default transition effect is fade.
Note: You can add at most one image transition and one audio transition.
                     */
                    std::vector<ComposeTransitionOperation> m_transitions;
                    bool m_transitionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETRANSITIONITEM_H_
