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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEVIDEOSTREAM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEVIDEOSTREAM_H_

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
                * The video stream information of a video edit/compositing task.
                */
                class ComposeVideoStream : public AbstractModel
                {
                public:
                    ComposeVideoStream();
                    ~ComposeVideoStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The codec. Valid values:
<li>`H.264` (default) </li>
                     * @return Codec The codec. Valid values:
<li>`H.264` (default) </li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置The codec. Valid values:
<li>`H.264` (default) </li>
                     * @param _codec The codec. Valid values:
<li>`H.264` (default) </li>
                     * 
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     * 
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取The video frame rate (Hz). Value range: 0–60.  
The default value is `0`, which means that the frame rate will be the same as that of the first video.
                     * @return Fps The video frame rate (Hz). Value range: 0–60.  
The default value is `0`, which means that the frame rate will be the same as that of the first video.
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置The video frame rate (Hz). Value range: 0–60.  
The default value is `0`, which means that the frame rate will be the same as that of the first video.
                     * @param _fps The video frame rate (Hz). Value range: 0–60.  
The default value is `0`, which means that the frame rate will be the same as that of the first video.
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Reference bitrate, in kbps. Value range: 50-35000.
If set, the encoder will try to encode at this bitrate.
If not set, the service will automatically adopt a suitable bitrate based on the complexity of an image.
                     * @return Bitrate Reference bitrate, in kbps. Value range: 50-35000.
If set, the encoder will try to encode at this bitrate.
If not set, the service will automatically adopt a suitable bitrate based on the complexity of an image.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Reference bitrate, in kbps. Value range: 50-35000.
If set, the encoder will try to encode at this bitrate.
If not set, the service will automatically adopt a suitable bitrate based on the complexity of an image.
                     * @param _bitrate Reference bitrate, in kbps. Value range: 50-35000.
If set, the encoder will try to encode at this bitrate.
If not set, the service will automatically adopt a suitable bitrate based on the complexity of an image.
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                private:

                    /**
                     * The codec. Valid values:
<li>`H.264` (default) </li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * The video frame rate (Hz). Value range: 0–60.  
The default value is `0`, which means that the frame rate will be the same as that of the first video.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Reference bitrate, in kbps. Value range: 50-35000.
If set, the encoder will try to encode at this bitrate.
If not set, the service will automatically adopt a suitable bitrate based on the complexity of an image.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEVIDEOSTREAM_H_
