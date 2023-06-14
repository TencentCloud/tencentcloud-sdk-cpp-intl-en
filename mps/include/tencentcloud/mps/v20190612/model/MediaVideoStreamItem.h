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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAVIDEOSTREAMITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAVIDEOSTREAMITEM_H_

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
                * Information of the video stream in a VOD file
                */
                class MediaVideoStreamItem : public AbstractModel
                {
                public:
                    MediaVideoStreamItem();
                    ~MediaVideoStreamItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bitrate of a video stream in bps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Bitrate Bitrate of a video stream in bps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Bitrate of a video stream in bps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bitrate Bitrate of a video stream in bps.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取Height of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Height Height of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Height of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _height Height of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Width of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Width Width of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Width of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _width Width of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Video stream codec, such as h264.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Codec Video stream codec, such as h264.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Video stream codec, such as h264.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _codec Video stream codec, such as h264.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Frame rate in Hz.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Fps Frame rate in Hz.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置Frame rate in Hz.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fps Frame rate in Hz.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Color primaries
Note: this field may return `null`, indicating that no valid value was found.
                     * @return ColorPrimaries Color primaries
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetColorPrimaries() const;

                    /**
                     * 设置Color primaries
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _colorPrimaries Color primaries
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetColorPrimaries(const std::string& _colorPrimaries);

                    /**
                     * 判断参数 ColorPrimaries 是否已赋值
                     * @return ColorPrimaries 是否已赋值
                     * 
                     */
                    bool ColorPrimariesHasBeenSet() const;

                    /**
                     * 获取Color space
Note: this field may return `null`, indicating that no valid value was found.
                     * @return ColorSpace Color space
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetColorSpace() const;

                    /**
                     * 设置Color space
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _colorSpace Color space
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetColorSpace(const std::string& _colorSpace);

                    /**
                     * 判断参数 ColorSpace 是否已赋值
                     * @return ColorSpace 是否已赋值
                     * 
                     */
                    bool ColorSpaceHasBeenSet() const;

                    /**
                     * 获取Color transfer
Note: this field may return `null`, indicating that no valid value was found.
                     * @return ColorTransfer Color transfer
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetColorTransfer() const;

                    /**
                     * 设置Color transfer
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _colorTransfer Color transfer
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetColorTransfer(const std::string& _colorTransfer);

                    /**
                     * 判断参数 ColorTransfer 是否已赋值
                     * @return ColorTransfer 是否已赋值
                     * 
                     */
                    bool ColorTransferHasBeenSet() const;

                    /**
                     * 获取HDR type
Note: This field may return `null`, indicating that no valid value was found.
                     * @return HdrType HDR type
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetHdrType() const;

                    /**
                     * 设置HDR type
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _hdrType HDR type
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetHdrType(const std::string& _hdrType);

                    /**
                     * 判断参数 HdrType 是否已赋值
                     * @return HdrType 是否已赋值
                     * 
                     */
                    bool HdrTypeHasBeenSet() const;

                private:

                    /**
                     * Bitrate of a video stream in bps.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Height of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Width of a video stream in px.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Video stream codec, such as h264.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Frame rate in Hz.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Color primaries
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_colorPrimaries;
                    bool m_colorPrimariesHasBeenSet;

                    /**
                     * Color space
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_colorSpace;
                    bool m_colorSpaceHasBeenSet;

                    /**
                     * Color transfer
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_colorTransfer;
                    bool m_colorTransferHasBeenSet;

                    /**
                     * HDR type
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_hdrType;
                    bool m_hdrTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAVIDEOSTREAMITEM_H_
