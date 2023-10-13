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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETRACKTIME_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETRACKTIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The time information of an element on the output video track of a video editing/compositing task.
                */
                class ComposeTrackTime : public AbstractModel
                {
                public:
                    ComposeTrackTime();
                    ~ComposeTrackTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The time when the element starts on the track.
<li>The value of this parameter ends with `s`, which means seconds. For example, `3.5s` indicates the time when 3.5 seconds of the video elapses.</li>
Note: If this parameter is not specified, the start time will be the end time of the previous element. Therefore, you can also use the placeholder parameter `ComposeEmptyItem` to configure the start time.
                     * @return Start The time when the element starts on the track.
<li>The value of this parameter ends with `s`, which means seconds. For example, `3.5s` indicates the time when 3.5 seconds of the video elapses.</li>
Note: If this parameter is not specified, the start time will be the end time of the previous element. Therefore, you can also use the placeholder parameter `ComposeEmptyItem` to configure the start time.
                     * 
                     */
                    std::string GetStart() const;

                    /**
                     * 设置The time when the element starts on the track.
<li>The value of this parameter ends with `s`, which means seconds. For example, `3.5s` indicates the time when 3.5 seconds of the video elapses.</li>
Note: If this parameter is not specified, the start time will be the end time of the previous element. Therefore, you can also use the placeholder parameter `ComposeEmptyItem` to configure the start time.
                     * @param _start The time when the element starts on the track.
<li>The value of this parameter ends with `s`, which means seconds. For example, `3.5s` indicates the time when 3.5 seconds of the video elapses.</li>
Note: If this parameter is not specified, the start time will be the end time of the previous element. Therefore, you can also use the placeholder parameter `ComposeEmptyItem` to configure the start time.
                     * 
                     */
                    void SetStart(const std::string& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取The element duration.
<li>The value of this parameter ends with `s`, which means seconds. For example, `3.5s` means 3.5 seconds.</li>
The default value is the material duration, which is determined by `EndTime` and `StartTime` of `ComposeSourceMedia`. If `ComposeSourceMedia` is not specified, the duration will be 1 second.
                     * @return Duration The element duration.
<li>The value of this parameter ends with `s`, which means seconds. For example, `3.5s` means 3.5 seconds.</li>
The default value is the material duration, which is determined by `EndTime` and `StartTime` of `ComposeSourceMedia`. If `ComposeSourceMedia` is not specified, the duration will be 1 second.
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置The element duration.
<li>The value of this parameter ends with `s`, which means seconds. For example, `3.5s` means 3.5 seconds.</li>
The default value is the material duration, which is determined by `EndTime` and `StartTime` of `ComposeSourceMedia`. If `ComposeSourceMedia` is not specified, the duration will be 1 second.
                     * @param _duration The element duration.
<li>The value of this parameter ends with `s`, which means seconds. For example, `3.5s` means 3.5 seconds.</li>
The default value is the material duration, which is determined by `EndTime` and `StartTime` of `ComposeSourceMedia`. If `ComposeSourceMedia` is not specified, the duration will be 1 second.
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * The time when the element starts on the track.
<li>The value of this parameter ends with `s`, which means seconds. For example, `3.5s` indicates the time when 3.5 seconds of the video elapses.</li>
Note: If this parameter is not specified, the start time will be the end time of the previous element. Therefore, you can also use the placeholder parameter `ComposeEmptyItem` to configure the start time.
                     */
                    std::string m_start;
                    bool m_startHasBeenSet;

                    /**
                     * The element duration.
<li>The value of this parameter ends with `s`, which means seconds. For example, `3.5s` means 3.5 seconds.</li>
The default value is the material duration, which is determined by `EndTime` and `StartTime` of `ComposeSourceMedia`. If `ComposeSourceMedia` is not specified, the duration will be 1 second.
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETRACKTIME_H_
