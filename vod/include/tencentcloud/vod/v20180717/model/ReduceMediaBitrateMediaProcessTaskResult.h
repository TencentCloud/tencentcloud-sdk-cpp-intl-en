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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REDUCEMEDIABITRATEMEDIAPROCESSTASKRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REDUCEMEDIABITRATEMEDIAPROCESSTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ReduceMediaBitrateTranscodeResult.h>
#include <tencentcloud/vod/v20180717/model/ReduceMediaBitrateAdaptiveDynamicStreamingResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * The result of a bitrate reduction task.
                */
                class ReduceMediaBitrateMediaProcessTaskResult : public AbstractModel
                {
                public:
                    ReduceMediaBitrateMediaProcessTaskResult();
                    ~ReduceMediaBitrateMediaProcessTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The task type. Valid values:
<li>Transcode</li>
<li>AdaptiveDynamicStreaming</li>
                     * @return Type The task type. Valid values:
<li>Transcode</li>
<li>AdaptiveDynamicStreaming</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The task type. Valid values:
<li>Transcode</li>
<li>AdaptiveDynamicStreaming</li>
                     * @param _type The task type. Valid values:
<li>Transcode</li>
<li>AdaptiveDynamicStreaming</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The result of a transcoding task. This parameter is valid if `Type` is `Transcode`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranscodeTask The result of a transcoding task. This parameter is valid if `Type` is `Transcode`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ReduceMediaBitrateTranscodeResult GetTranscodeTask() const;

                    /**
                     * 设置The result of a transcoding task. This parameter is valid if `Type` is `Transcode`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transcodeTask The result of a transcoding task. This parameter is valid if `Type` is `Transcode`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTranscodeTask(const ReduceMediaBitrateTranscodeResult& _transcodeTask);

                    /**
                     * 判断参数 TranscodeTask 是否已赋值
                     * @return TranscodeTask 是否已赋值
                     * 
                     */
                    bool TranscodeTaskHasBeenSet() const;

                    /**
                     * 获取The result of an adaptive bitrate task. This parameter is valid if `Type` is `AdaptiveDynamicStreaming`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AdaptiveDynamicStreamingTask The result of an adaptive bitrate task. This parameter is valid if `Type` is `AdaptiveDynamicStreaming`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ReduceMediaBitrateAdaptiveDynamicStreamingResult GetAdaptiveDynamicStreamingTask() const;

                    /**
                     * 设置The result of an adaptive bitrate task. This parameter is valid if `Type` is `AdaptiveDynamicStreaming`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _adaptiveDynamicStreamingTask The result of an adaptive bitrate task. This parameter is valid if `Type` is `AdaptiveDynamicStreaming`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAdaptiveDynamicStreamingTask(const ReduceMediaBitrateAdaptiveDynamicStreamingResult& _adaptiveDynamicStreamingTask);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingTask 是否已赋值
                     * @return AdaptiveDynamicStreamingTask 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingTaskHasBeenSet() const;

                private:

                    /**
                     * The task type. Valid values:
<li>Transcode</li>
<li>AdaptiveDynamicStreaming</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The result of a transcoding task. This parameter is valid if `Type` is `Transcode`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ReduceMediaBitrateTranscodeResult m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * The result of an adaptive bitrate task. This parameter is valid if `Type` is `AdaptiveDynamicStreaming`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ReduceMediaBitrateAdaptiveDynamicStreamingResult m_adaptiveDynamicStreamingTask;
                    bool m_adaptiveDynamicStreamingTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REDUCEMEDIABITRATEMEDIAPROCESSTASKRESULT_H_
