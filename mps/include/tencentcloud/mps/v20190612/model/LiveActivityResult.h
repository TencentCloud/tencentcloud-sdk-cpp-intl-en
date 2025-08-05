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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVEACTIVITYRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVEACTIVITYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveActivityResItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The output of a live scheme subtask.
                */
                class LiveActivityResult : public AbstractModel
                {
                public:
                    LiveActivityResult();
                    ~LiveActivityResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Atomic task type.
<li>LiveRecord: live recording</li>
<li>AiQualityControl: media quality inspection</li>
                     * @return ActivityType Atomic task type.
<li>LiveRecord: live recording</li>
<li>AiQualityControl: media quality inspection</li>
                     * 
                     */
                    std::string GetActivityType() const;

                    /**
                     * 设置Atomic task type.
<li>LiveRecord: live recording</li>
<li>AiQualityControl: media quality inspection</li>
                     * @param _activityType Atomic task type.
<li>LiveRecord: live recording</li>
<li>AiQualityControl: media quality inspection</li>
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
                     * 获取The task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LiveActivityResItem The task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LiveActivityResItem GetLiveActivityResItem() const;

                    /**
                     * 设置The task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _liveActivityResItem The task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLiveActivityResItem(const LiveActivityResItem& _liveActivityResItem);

                    /**
                     * 判断参数 LiveActivityResItem 是否已赋值
                     * @return LiveActivityResItem 是否已赋值
                     * 
                     */
                    bool LiveActivityResItemHasBeenSet() const;

                private:

                    /**
                     * Atomic task type.
<li>LiveRecord: live recording</li>
<li>AiQualityControl: media quality inspection</li>
                     */
                    std::string m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * The task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LiveActivityResItem m_liveActivityResItem;
                    bool m_liveActivityResItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVEACTIVITYRESULT_H_
