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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MIXTRANSCODEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MIXTRANSCODEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/VideoParams.h>
#include <tencentcloud/trtc/v20190722/model/AudioParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The audio and video parameters for recording.
                */
                class MixTranscodeParams : public AbstractModel
                {
                public:
                    MixTranscodeParams();
                    ~MixTranscodeParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The video transcoding parameters for recording. If you set this parameter, you must specify all its fields. If you do not set it, the default will be used.
                     * @return VideoParams The video transcoding parameters for recording. If you set this parameter, you must specify all its fields. If you do not set it, the default will be used.
                     * 
                     */
                    VideoParams GetVideoParams() const;

                    /**
                     * 设置The video transcoding parameters for recording. If you set this parameter, you must specify all its fields. If you do not set it, the default will be used.
                     * @param _videoParams The video transcoding parameters for recording. If you set this parameter, you must specify all its fields. If you do not set it, the default will be used.
                     * 
                     */
                    void SetVideoParams(const VideoParams& _videoParams);

                    /**
                     * 判断参数 VideoParams 是否已赋值
                     * @return VideoParams 是否已赋值
                     * 
                     */
                    bool VideoParamsHasBeenSet() const;

                    /**
                     * 获取The audio transcoding parameters for recording. If you set this parameter, you must specify all its fields. If you do not set it, the default will be used.
                     * @return AudioParams The audio transcoding parameters for recording. If you set this parameter, you must specify all its fields. If you do not set it, the default will be used.
                     * 
                     */
                    AudioParams GetAudioParams() const;

                    /**
                     * 设置The audio transcoding parameters for recording. If you set this parameter, you must specify all its fields. If you do not set it, the default will be used.
                     * @param _audioParams The audio transcoding parameters for recording. If you set this parameter, you must specify all its fields. If you do not set it, the default will be used.
                     * 
                     */
                    void SetAudioParams(const AudioParams& _audioParams);

                    /**
                     * 判断参数 AudioParams 是否已赋值
                     * @return AudioParams 是否已赋值
                     * 
                     */
                    bool AudioParamsHasBeenSet() const;

                private:

                    /**
                     * The video transcoding parameters for recording. If you set this parameter, you must specify all its fields. If you do not set it, the default will be used.
                     */
                    VideoParams m_videoParams;
                    bool m_videoParamsHasBeenSet;

                    /**
                     * The audio transcoding parameters for recording. If you set this parameter, you must specify all its fields. If you do not set it, the default will be used.
                     */
                    AudioParams m_audioParams;
                    bool m_audioParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MIXTRANSCODEPARAMS_H_
