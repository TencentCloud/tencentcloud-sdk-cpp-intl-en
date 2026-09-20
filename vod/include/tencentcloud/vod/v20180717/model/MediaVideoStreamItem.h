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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAVIDEOSTREAMITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAVIDEOSTREAMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/DynamicRangeInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Video stream information of VOD files.
                */
                class MediaVideoStreamItem : public AbstractModel
                {
                public:
                    MediaVideoStreamItem();
                    ~MediaVideoStreamItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bitrate of video stream, unit: bps.
                     * @return Bitrate Bitrate of video stream, unit: bps.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Bitrate of video stream, unit: bps.
                     * @param _bitrate Bitrate of video stream, unit: bps.
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
                     * 获取Video stream height. Unit: px.
                     * @return Height Video stream height. Unit: px.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Video stream height. Unit: px.
                     * @param _height Video stream height. Unit: px.
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
                     * 获取Frame rate. Unit: hz.
                     * @return Fps Frame rate. Unit: hz.
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置Frame rate. Unit: hz.
                     * @param _fps Frame rate. Unit: hz.
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
                     * 获取Encoding tag. It is valid only when Codec is hevc.
                     * @return CodecTag Encoding tag. It is valid only when Codec is hevc.
                     * 
                     */
                    std::string GetCodecTag() const;

                    /**
                     * 设置Encoding tag. It is valid only when Codec is hevc.
                     * @param _codecTag Encoding tag. It is valid only when Codec is hevc.
                     * 
                     */
                    void SetCodecTag(const std::string& _codecTag);

                    /**
                     * 判断参数 CodecTag 是否已赋值
                     * @return CodecTag 是否已赋值
                     * 
                     */
                    bool CodecTagHasBeenSet() const;

                    /**
                     * 获取Dynamic range information of the frame.
<li><font color=red>Note:</font> This field is valid for transcoded files processed after 2023-01-10T00:00:00Z.</li>
                     * @return DynamicRangeInfo Dynamic range information of the frame.
<li><font color=red>Note:</font> This field is valid for transcoded files processed after 2023-01-10T00:00:00Z.</li>
                     * 
                     */
                    DynamicRangeInfo GetDynamicRangeInfo() const;

                    /**
                     * 设置Dynamic range information of the frame.
<li><font color=red>Note:</font> This field is valid for transcoded files processed after 2023-01-10T00:00:00Z.</li>
                     * @param _dynamicRangeInfo Dynamic range information of the frame.
<li><font color=red>Note:</font> This field is valid for transcoded files processed after 2023-01-10T00:00:00Z.</li>
                     * 
                     */
                    void SetDynamicRangeInfo(const DynamicRangeInfo& _dynamicRangeInfo);

                    /**
                     * 判断参数 DynamicRangeInfo 是否已赋值
                     * @return DynamicRangeInfo 是否已赋值
                     * 
                     */
                    bool DynamicRangeInfoHasBeenSet() const;

                private:

                    /**
                     * Bitrate of video stream, unit: bps.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Video stream height. Unit: px.
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
                     * Frame rate. Unit: hz.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Encoding tag. It is valid only when Codec is hevc.
                     */
                    std::string m_codecTag;
                    bool m_codecTagHasBeenSet;

                    /**
                     * Dynamic range information of the frame.
<li><font color=red>Note:</font> This field is valid for transcoded files processed after 2023-01-10T00:00:00Z.</li>
                     */
                    DynamicRangeInfo m_dynamicRangeInfo;
                    bool m_dynamicRangeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAVIDEOSTREAMITEM_H_
