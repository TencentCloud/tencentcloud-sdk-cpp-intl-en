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
                * Animated image generating task type
                */
                class AnimatedGraphicTaskInput : public AbstractModel
                {
                public:
                    AnimatedGraphicTaskInput();
                    ~AnimatedGraphicTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Animated image generating template ID
                     * @return Definition Animated image generating template ID
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Animated image generating template ID
                     * @param Definition Animated image generating template ID
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Start time of animated image in video in seconds.
                     * @return StartTimeOffset Start time of animated image in video in seconds.
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time of animated image in video in seconds.
                     * @param StartTimeOffset Start time of animated image in video in seconds.
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取End time of animated image in video in seconds.
                     * @return EndTimeOffset End time of animated image in video in seconds.
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time of animated image in video in seconds.
                     * @param EndTimeOffset End time of animated image in video in seconds.
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * Animated image generating template ID
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Start time of animated image in video in seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time of animated image in video in seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ANIMATEDGRAPHICTASKINPUT_H_
