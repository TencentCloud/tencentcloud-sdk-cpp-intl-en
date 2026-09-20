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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ANIMATEDGRAPHICTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ANIMATEDGRAPHICTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Rotation image task type
                */
                class AnimatedGraphicTaskInput : public AbstractModel
                {
                public:
                    AnimatedGraphicTaskInput();
                    ~AnimatedGraphicTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video-to-GIF conversion template ID.
                     * @return Definition Video-to-GIF conversion template ID.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Video-to-GIF conversion template ID.
                     * @param _definition Video-to-GIF conversion template ID.
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Start time offset of the GIF in the video, in seconds.
<li>If not set or set to 0, it starts from the beginning of the video.</li>
<li>When the value is greater than 0 (assuming n), it means starting from the nth second of the video;</li>
<li>When the value is less than 0 (assuming -n), it means starting from the position n seconds before the video ends.</li>
                     * @return StartTimeOffset Start time offset of the GIF in the video, in seconds.
<li>If not set or set to 0, it starts from the beginning of the video.</li>
<li>When the value is greater than 0 (assuming n), it means starting from the nth second of the video;</li>
<li>When the value is less than 0 (assuming -n), it means starting from the position n seconds before the video ends.</li>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of the GIF in the video, in seconds.
<li>If not set or set to 0, it starts from the beginning of the video.</li>
<li>When the value is greater than 0 (assuming n), it means starting from the nth second of the video;</li>
<li>When the value is less than 0 (assuming -n), it means starting from the position n seconds before the video ends.</li>
                     * @param _startTimeOffset Start time offset of the GIF in the video, in seconds.
<li>If not set or set to 0, it starts from the beginning of the video.</li>
<li>When the value is greater than 0 (assuming n), it means starting from the nth second of the video;</li>
<li>When the value is less than 0 (assuming -n), it means starting from the position n seconds before the video ends.</li>
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Termination time offset of the GIF in the video, in seconds.
<li>If not set or set to 0, it will last until the end of a video.</li>
<li>When the value is greater than 0 (assuming n), it means to terminate at the nth second of the video;</li>
<li>When the value is less than 0 (assuming -n), it means the video will terminate n seconds before the end.</li>
                     * @return EndTimeOffset Termination time offset of the GIF in the video, in seconds.
<li>If not set or set to 0, it will last until the end of a video.</li>
<li>When the value is greater than 0 (assuming n), it means to terminate at the nth second of the video;</li>
<li>When the value is less than 0 (assuming -n), it means the video will terminate n seconds before the end.</li>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置Termination time offset of the GIF in the video, in seconds.
<li>If not set or set to 0, it will last until the end of a video.</li>
<li>When the value is greater than 0 (assuming n), it means to terminate at the nth second of the video;</li>
<li>When the value is less than 0 (assuming -n), it means the video will terminate n seconds before the end.</li>
                     * @param _endTimeOffset Termination time offset of the GIF in the video, in seconds.
<li>If not set or set to 0, it will last until the end of a video.</li>
<li>When the value is greater than 0 (assuming n), it means to terminate at the nth second of the video;</li>
<li>When the value is less than 0 (assuming -n), it means the video will terminate n seconds before the end.</li>
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * Video-to-GIF conversion template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Start time offset of the GIF in the video, in seconds.
<li>If not set or set to 0, it starts from the beginning of the video.</li>
<li>When the value is greater than 0 (assuming n), it means starting from the nth second of the video;</li>
<li>When the value is less than 0 (assuming -n), it means starting from the position n seconds before the video ends.</li>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * Termination time offset of the GIF in the video, in seconds.
<li>If not set or set to 0, it will last until the end of a video.</li>
<li>When the value is greater than 0 (assuming n), it means to terminate at the nth second of the video;</li>
<li>When the value is less than 0 (assuming -n), it means the video will terminate n seconds before the end.</li>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ANIMATEDGRAPHICTASKINPUT_H_
