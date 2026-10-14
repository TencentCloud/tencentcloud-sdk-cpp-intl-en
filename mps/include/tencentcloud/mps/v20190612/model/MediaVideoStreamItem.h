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
                * Video stream information of VOD files
                */
                class MediaVideoStreamItem : public AbstractModel
                {
                public:
                    MediaVideoStreamItem();
                    ~MediaVideoStreamItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bitrate of the video stream. Unit: bps.
                     * @return Bitrate Bitrate of the video stream. Unit: bps.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Bitrate of the video stream. Unit: bps.
                     * @param _bitrate Bitrate of the video stream. Unit: bps.
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
                     * 获取Height of the video stream. Unit: px.
                     * @return Height Height of the video stream. Unit: px.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Height of the video stream. Unit: px.
                     * @param _height Height of the video stream. Unit: px.
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
                     * 获取Video stream width. Unit: px.
                     * @return Width Video stream width. Unit: px.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Video stream width. Unit: px.
                     * @param _width Video stream width. Unit: px.
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
                     * 获取Video stream encoding format, for example, h264.
                     * @return Codec Video stream encoding format, for example, h264.
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Video stream encoding format, for example, h264.
                     * @param _codec Video stream encoding format, for example, h264.
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
                     * 获取Frame rate. Measurement unit: hz.
                     * @return Fps Frame rate. Measurement unit: hz.
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置Frame rate. Measurement unit: hz.
                     * @param _fps Frame rate. Measurement unit: hz.
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
                     * 获取Colorspace.
                     * @return ColorPrimaries Colorspace.
                     * 
                     */
                    std::string GetColorPrimaries() const;

                    /**
                     * 设置Colorspace.
                     * @param _colorPrimaries Colorspace.
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
                     * 获取Colorspace.
                     * @return ColorSpace Colorspace.
                     * 
                     */
                    std::string GetColorSpace() const;

                    /**
                     * 设置Colorspace.
                     * @param _colorSpace Colorspace.
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
                     * 获取Colorspace.
                     * @return ColorTransfer Colorspace.
                     * 
                     */
                    std::string GetColorTransfer() const;

                    /**
                     * 设置Colorspace.
                     * @param _colorTransfer Colorspace.
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
                     * 获取HDR type.
                     * @return HdrType HDR type.
                     * 
                     */
                    std::string GetHdrType() const;

                    /**
                     * 设置HDR type.
                     * @param _hdrType HDR type.
                     * 
                     */
                    void SetHdrType(const std::string& _hdrType);

                    /**
                     * 判断参数 HdrType 是否已赋值
                     * @return HdrType 是否已赋值
                     * 
                     */
                    bool HdrTypeHasBeenSet() const;

                    /**
                     * 获取Video Codecs.
                     * @return Codecs Video Codecs.
                     * 
                     */
                    std::string GetCodecs() const;

                    /**
                     * 设置Video Codecs.
                     * @param _codecs Video Codecs.
                     * 
                     */
                    void SetCodecs(const std::string& _codecs);

                    /**
                     * 判断参数 Codecs 是否已赋值
                     * @return Codecs 是否已赋值
                     * 
                     */
                    bool CodecsHasBeenSet() const;

                    /**
                     * 获取Numerator of the frame rate.
                     * @return FpsNumerator Numerator of the frame rate.
                     * 
                     */
                    int64_t GetFpsNumerator() const;

                    /**
                     * 设置Numerator of the frame rate.
                     * @param _fpsNumerator Numerator of the frame rate.
                     * 
                     */
                    void SetFpsNumerator(const int64_t& _fpsNumerator);

                    /**
                     * 判断参数 FpsNumerator 是否已赋值
                     * @return FpsNumerator 是否已赋值
                     * 
                     */
                    bool FpsNumeratorHasBeenSet() const;

                    /**
                     * 获取Denominator of the frame rate.
                     * @return FpsDenominator Denominator of the frame rate.
                     * 
                     */
                    int64_t GetFpsDenominator() const;

                    /**
                     * 设置Denominator of the frame rate.
                     * @param _fpsDenominator Denominator of the frame rate.
                     * 
                     */
                    void SetFpsDenominator(const int64_t& _fpsDenominator);

                    /**
                     * 判断参数 FpsDenominator 是否已赋值
                     * @return FpsDenominator 是否已赋值
                     * 
                     */
                    bool FpsDenominatorHasBeenSet() const;

                private:

                    /**
                     * Bitrate of the video stream. Unit: bps.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Height of the video stream. Unit: px.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Video stream width. Unit: px.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Video stream encoding format, for example, h264.
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Frame rate. Measurement unit: hz.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Colorspace.
                     */
                    std::string m_colorPrimaries;
                    bool m_colorPrimariesHasBeenSet;

                    /**
                     * Colorspace.
                     */
                    std::string m_colorSpace;
                    bool m_colorSpaceHasBeenSet;

                    /**
                     * Colorspace.
                     */
                    std::string m_colorTransfer;
                    bool m_colorTransferHasBeenSet;

                    /**
                     * HDR type.
                     */
                    std::string m_hdrType;
                    bool m_hdrTypeHasBeenSet;

                    /**
                     * Video Codecs.
                     */
                    std::string m_codecs;
                    bool m_codecsHasBeenSet;

                    /**
                     * Numerator of the frame rate.
                     */
                    int64_t m_fpsNumerator;
                    bool m_fpsNumeratorHasBeenSet;

                    /**
                     * Denominator of the frame rate.
                     */
                    int64_t m_fpsDenominator;
                    bool m_fpsDenominatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAVIDEOSTREAMITEM_H_
