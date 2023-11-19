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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSCODEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSCODEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaVideoStreamItem.h>
#include <tencentcloud/vod/v20180717/model/MediaAudioStreamItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Transcoding information
                */
                class MediaTranscodeItem : public AbstractModel
                {
                public:
                    MediaTranscodeItem();
                    ~MediaTranscodeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Address of output video file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Url Address of output video file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Address of output video file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _url Address of output video file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取For transcoding specification ID, see [Transcoding Parameter Template](https://intl.cloud.tencent.com/document/product/266/33476?from_cn_redirect=1). 
<font color=red>Note: A value of 0 represents the original file. </font>
                     * @return Definition For transcoding specification ID, see [Transcoding Parameter Template](https://intl.cloud.tencent.com/document/product/266/33476?from_cn_redirect=1). 
<font color=red>Note: A value of 0 represents the original file. </font>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置For transcoding specification ID, see [Transcoding Parameter Template](https://intl.cloud.tencent.com/document/product/266/33476?from_cn_redirect=1). 
<font color=red>Note: A value of 0 represents the original file. </font>
                     * @param _definition For transcoding specification ID, see [Transcoding Parameter Template](https://intl.cloud.tencent.com/document/product/266/33476?from_cn_redirect=1). 
<font color=red>Note: A value of 0 represents the original file. </font>
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Sum of the average bitrate of a video stream and that of an audio stream in bps.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Bitrate Sum of the average bitrate of a video stream and that of an audio stream in bps.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Sum of the average bitrate of a video stream and that of an audio stream in bps.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _bitrate Sum of the average bitrate of a video stream and that of an audio stream in bps.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum value of the height of a video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Height Maximum value of the height of a video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Maximum value of the height of a video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _height Maximum value of the height of a video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum value of the width of a video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Width Maximum value of the width of a video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Maximum value of the width of a video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _width Maximum value of the width of a video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取The file size (bytes).
<li>If the file is an HLS file, the value of this parameter is the sum of the size of the M3U8 and TS files.</li>
                     * @return Size The file size (bytes).
<li>If the file is an HLS file, the value of this parameter is the sum of the size of the M3U8 and TS files.</li>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置The file size (bytes).
<li>If the file is an HLS file, the value of this parameter is the sum of the size of the M3U8 and TS files.</li>
                     * @param _size The file size (bytes).
<li>If the file is an HLS file, the value of this parameter is the sum of the size of the M3U8 and TS files.</li>
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Video duration in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Duration Video duration in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Video duration in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _duration Video duration in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取MD5 value of video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Md5 MD5 value of video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置MD5 value of video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _md5 MD5 value of video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取Container, such as m4a and mp4.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Container Container, such as m4a and mp4.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Container, such as m4a and mp4.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _container Container, such as m4a and mp4.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取Video stream information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VideoStreamSet Video stream information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MediaVideoStreamItem> GetVideoStreamSet() const;

                    /**
                     * 设置Video stream information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _videoStreamSet Video stream information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVideoStreamSet(const std::vector<MediaVideoStreamItem>& _videoStreamSet);

                    /**
                     * 判断参数 VideoStreamSet 是否已赋值
                     * @return VideoStreamSet 是否已赋值
                     * 
                     */
                    bool VideoStreamSetHasBeenSet() const;

                    /**
                     * 获取Audio stream information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AudioStreamSet Audio stream information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MediaAudioStreamItem> GetAudioStreamSet() const;

                    /**
                     * 设置Audio stream information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _audioStreamSet Audio stream information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAudioStreamSet(const std::vector<MediaAudioStreamItem>& _audioStreamSet);

                    /**
                     * 判断参数 AudioStreamSet 是否已赋值
                     * @return AudioStreamSet 是否已赋值
                     * 
                     */
                    bool AudioStreamSetHasBeenSet() const;

                    /**
                     * 获取The watermark type. Valid values:
<li>Trace: Digital watermark</li>
<li>None: Regular watermark</li>
                     * @return DigitalWatermarkType The watermark type. Valid values:
<li>Trace: Digital watermark</li>
<li>None: Regular watermark</li>
                     * 
                     */
                    std::string GetDigitalWatermarkType() const;

                    /**
                     * 设置The watermark type. Valid values:
<li>Trace: Digital watermark</li>
<li>None: Regular watermark</li>
                     * @param _digitalWatermarkType The watermark type. Valid values:
<li>Trace: Digital watermark</li>
<li>None: Regular watermark</li>
                     * 
                     */
                    void SetDigitalWatermarkType(const std::string& _digitalWatermarkType);

                    /**
                     * 判断参数 DigitalWatermarkType 是否已赋值
                     * @return DigitalWatermarkType 是否已赋值
                     * 
                     */
                    bool DigitalWatermarkTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return CopyRightWatermarkText 
                     * 
                     */
                    std::string GetCopyRightWatermarkText() const;

                    /**
                     * 设置
                     * @param _copyRightWatermarkText 
                     * 
                     */
                    void SetCopyRightWatermarkText(const std::string& _copyRightWatermarkText);

                    /**
                     * 判断参数 CopyRightWatermarkText 是否已赋值
                     * @return CopyRightWatermarkText 是否已赋值
                     * 
                     */
                    bool CopyRightWatermarkTextHasBeenSet() const;

                private:

                    /**
                     * Address of output video file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * For transcoding specification ID, see [Transcoding Parameter Template](https://intl.cloud.tencent.com/document/product/266/33476?from_cn_redirect=1). 
<font color=red>Note: A value of 0 represents the original file. </font>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Sum of the average bitrate of a video stream and that of an audio stream in bps.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Maximum value of the height of a video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Maximum value of the width of a video stream in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The file size (bytes).
<li>If the file is an HLS file, the value of this parameter is the sum of the size of the M3U8 and TS files.</li>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Video duration in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * MD5 value of video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * Container, such as m4a and mp4.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Video stream information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaVideoStreamItem> m_videoStreamSet;
                    bool m_videoStreamSetHasBeenSet;

                    /**
                     * Audio stream information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaAudioStreamItem> m_audioStreamSet;
                    bool m_audioStreamSetHasBeenSet;

                    /**
                     * The watermark type. Valid values:
<li>Trace: Digital watermark</li>
<li>None: Regular watermark</li>
                     */
                    std::string m_digitalWatermarkType;
                    bool m_digitalWatermarkTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_copyRightWatermarkText;
                    bool m_copyRightWatermarkTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSCODEITEM_H_
