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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_AUDIOSEGMENTS_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_AUDIOSEGMENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20201229/model/AudioResult.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Indicates audio segment information
                */
                class AudioSegments : public AbstractModel
                {
                public:
                    AudioSegments();
                    ~AudioSegments() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is used to return the start time of an audio segment in seconds. For audio on demand files, this parameter indicates the time offset of the audio from the complete audio track, such as 0 (no offset), 5 (5 seconds after the start of the audio track), and 10 (10 seconds after the start of the audio track). For live audio stream files, this parameter returns the Unix timestamp of the start of the audio segment, such as `1594650717`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OffsetTime This field is used to return the start time of an audio segment in seconds. For audio on demand files, this parameter indicates the time offset of the audio from the complete audio track, such as 0 (no offset), 5 (5 seconds after the start of the audio track), and 10 (10 seconds after the start of the audio track). For live audio stream files, this parameter returns the Unix timestamp of the start of the audio segment, such as `1594650717`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOffsetTime() const;

                    /**
                     * 设置This field is used to return the start time of an audio segment in seconds. For audio on demand files, this parameter indicates the time offset of the audio from the complete audio track, such as 0 (no offset), 5 (5 seconds after the start of the audio track), and 10 (10 seconds after the start of the audio track). For live audio stream files, this parameter returns the Unix timestamp of the start of the audio segment, such as `1594650717`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OffsetTime This field is used to return the start time of an audio segment in seconds. For audio on demand files, this parameter indicates the time offset of the audio from the complete audio track, such as 0 (no offset), 5 (5 seconds after the start of the audio track), and 10 (10 seconds after the start of the audio track). For live audio stream files, this parameter returns the Unix timestamp of the start of the audio segment, such as `1594650717`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOffsetTime(const std::string& _offsetTime);

                    /**
                     * 判断参数 OffsetTime 是否已赋值
                     * @return OffsetTime 是否已赋值
                     */
                    bool OffsetTimeHasBeenSet() const;

                    /**
                     * 获取This field is used to return the specific moderation result of an audio segment. For details, see the description of the `AudioResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Result This field is used to return the specific moderation result of an audio segment. For details, see the description of the `AudioResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AudioResult GetResult() const;

                    /**
                     * 设置This field is used to return the specific moderation result of an audio segment. For details, see the description of the `AudioResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Result This field is used to return the specific moderation result of an audio segment. For details, see the description of the `AudioResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResult(const AudioResult& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the start time of an audio segment in seconds. For audio on demand files, this parameter indicates the time offset of the audio from the complete audio track, such as 0 (no offset), 5 (5 seconds after the start of the audio track), and 10 (10 seconds after the start of the audio track). For live audio stream files, this parameter returns the Unix timestamp of the start of the audio segment, such as `1594650717`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_offsetTime;
                    bool m_offsetTimeHasBeenSet;

                    /**
                     * This field is used to return the specific moderation result of an audio segment. For details, see the description of the `AudioResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AudioResult m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_AUDIOSEGMENTS_H_
