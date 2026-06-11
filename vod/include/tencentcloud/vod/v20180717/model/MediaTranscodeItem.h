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
                     * 获取<p>File URL of the transcoded video.</p>
                     * @return Url <p>File URL of the transcoded video.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>File URL of the transcoded video.</p>
                     * @param _url <p>File URL of the transcoded video.</p>
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
                     * 获取<p>Transcoding specification ID. Please refer to <a href="https://www.tencentcloud.com/document/product/266/33476?from_cn_redirect=1">transcoding parameter template</a>.<br><font color="red">Note: A value of 0 means the raw file.</font></p>
                     * @return Definition <p>Transcoding specification ID. Please refer to <a href="https://www.tencentcloud.com/document/product/266/33476?from_cn_redirect=1">transcoding parameter template</a>.<br><font color="red">Note: A value of 0 means the raw file.</font></p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>Transcoding specification ID. Please refer to <a href="https://www.tencentcloud.com/document/product/266/33476?from_cn_redirect=1">transcoding parameter template</a>.<br><font color="red">Note: A value of 0 means the raw file.</font></p>
                     * @param _definition <p>Transcoding specification ID. Please refer to <a href="https://www.tencentcloud.com/document/product/266/33476?from_cn_redirect=1">transcoding parameter template</a>.<br><font color="red">Note: A value of 0 means the raw file.</font></p>
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
                     * 获取<p>Sum of the mean bitrate of a stream and the mean audio stream bit rate, unit: bps.</p>
                     * @return Bitrate <p>Sum of the mean bitrate of a stream and the mean audio stream bit rate, unit: bps.</p>
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置<p>Sum of the mean bitrate of a stream and the mean audio stream bit rate, unit: bps.</p>
                     * @param _bitrate <p>Sum of the mean bitrate of a stream and the mean audio stream bit rate, unit: bps.</p>
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
                     * 获取<p>Maximum value of video stream height. Unit: px.</p>
                     * @return Height <p>Maximum value of video stream height. Unit: px.</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>Maximum value of video stream height. Unit: px.</p>
                     * @param _height <p>Maximum value of video stream height. Unit: px.</p>
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
                     * 获取<p>Maximum value of video stream width. Unit: px.</p>
                     * @return Width <p>Maximum value of video stream width. Unit: px.</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>Maximum value of video stream width. Unit: px.</p>
                     * @param _width <p>Maximum value of video stream width. Unit: px.</p>
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
                     * 获取<p>Total size of media files, measurement unit: byte.</p><li>When the media file is HLS, the size is the sum of m3u8 and ts file sizes.</li>
                     * @return Size <p>Total size of media files, measurement unit: byte.</p><li>When the media file is HLS, the size is the sum of m3u8 and ts file sizes.</li>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>Total size of media files, measurement unit: byte.</p><li>When the media file is HLS, the size is the sum of m3u8 and ts file sizes.</li>
                     * @param _size <p>Total size of media files, measurement unit: byte.</p><li>When the media file is HLS, the size is the sum of m3u8 and ts file sizes.</li>
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
                     * 获取<p>Video duration, in seconds.</p>
                     * @return Duration <p>Video duration, in seconds.</p>
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置<p>Video duration, in seconds.</p>
                     * @param _duration <p>Video duration, in seconds.</p>
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
                     * 获取<p>md5 value of the video.</p>
                     * @return Md5 <p>md5 value of the video.</p>
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置<p>md5 value of the video.</p>
                     * @param _md5 <p>md5 value of the video.</p>
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
                     * 获取<p>Container type, such as m4a, mp4.</p>
                     * @return Container <p>Container type, such as m4a, mp4.</p>
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置<p>Container type, such as m4a, mp4.</p>
                     * @param _container <p>Container type, such as m4a, mp4.</p>
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
                     * 获取<p>Video stream information.</p>
                     * @return VideoStreamSet <p>Video stream information.</p>
                     * 
                     */
                    std::vector<MediaVideoStreamItem> GetVideoStreamSet() const;

                    /**
                     * 设置<p>Video stream information.</p>
                     * @param _videoStreamSet <p>Video stream information.</p>
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
                     * 获取<p>Audio stream information.</p>
                     * @return AudioStreamSet <p>Audio stream information.</p>
                     * 
                     */
                    std::vector<MediaAudioStreamItem> GetAudioStreamSet() const;

                    /**
                     * 设置<p>Audio stream information.</p>
                     * @param _audioStreamSet <p>Audio stream information.</p>
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
                     * 获取<p>Digital watermark type. Available values:</p><li>Trace means transit watermark processing;</li><li>CopyRight means copyright watermark processing;</li><li>None means no digital watermark processing.</li>
                     * @return DigitalWatermarkType <p>Digital watermark type. Available values:</p><li>Trace means transit watermark processing;</li><li>CopyRight means copyright watermark processing;</li><li>None means no digital watermark processing.</li>
                     * 
                     */
                    std::string GetDigitalWatermarkType() const;

                    /**
                     * 设置<p>Digital watermark type. Available values:</p><li>Trace means transit watermark processing;</li><li>CopyRight means copyright watermark processing;</li><li>None means no digital watermark processing.</li>
                     * @param _digitalWatermarkType <p>Digital watermark type. Available values:</p><li>Trace means transit watermark processing;</li><li>CopyRight means copyright watermark processing;</li><li>None means no digital watermark processing.</li>
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
                     * 获取<p>Copyright information.</p>
                     * @return CopyRightWatermarkText <p>Copyright information.</p>
                     * 
                     */
                    std::string GetCopyRightWatermarkText() const;

                    /**
                     * 设置<p>Copyright information.</p>
                     * @param _copyRightWatermarkText <p>Copyright information.</p>
                     * 
                     */
                    void SetCopyRightWatermarkText(const std::string& _copyRightWatermarkText);

                    /**
                     * 判断参数 CopyRightWatermarkText 是否已赋值
                     * @return CopyRightWatermarkText 是否已赋值
                     * 
                     */
                    bool CopyRightWatermarkTextHasBeenSet() const;

                    /**
                     * 获取<p>Digital watermark template id.</p>
                     * @return BlindWatermarkDefinition <p>Digital watermark template id.</p>
                     * 
                     */
                    int64_t GetBlindWatermarkDefinition() const;

                    /**
                     * 设置<p>Digital watermark template id.</p>
                     * @param _blindWatermarkDefinition <p>Digital watermark template id.</p>
                     * 
                     */
                    void SetBlindWatermarkDefinition(const int64_t& _blindWatermarkDefinition);

                    /**
                     * 判断参数 BlindWatermarkDefinition 是否已赋值
                     * @return BlindWatermarkDefinition 是否已赋值
                     * 
                     */
                    bool BlindWatermarkDefinitionHasBeenSet() const;

                    /**
                     * 获取<p>Generated new FileId for transcoding. Valid when requesting to enable independence media output.</p>
                     * @return FileId <p>Generated new FileId for transcoding. Valid when requesting to enable independence media output.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>Generated new FileId for transcoding. Valid when requesting to enable independence media output.</p>
                     * @param _fileId <p>Generated new FileId for transcoding. Valid when requesting to enable independence media output.</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * <p>File URL of the transcoded video.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Transcoding specification ID. Please refer to <a href="https://www.tencentcloud.com/document/product/266/33476?from_cn_redirect=1">transcoding parameter template</a>.<br><font color="red">Note: A value of 0 means the raw file.</font></p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Sum of the mean bitrate of a stream and the mean audio stream bit rate, unit: bps.</p>
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * <p>Maximum value of video stream height. Unit: px.</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>Maximum value of video stream width. Unit: px.</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>Total size of media files, measurement unit: byte.</p><li>When the media file is HLS, the size is the sum of m3u8 and ts file sizes.</li>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>Video duration, in seconds.</p>
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>md5 value of the video.</p>
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * <p>Container type, such as m4a, mp4.</p>
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * <p>Video stream information.</p>
                     */
                    std::vector<MediaVideoStreamItem> m_videoStreamSet;
                    bool m_videoStreamSetHasBeenSet;

                    /**
                     * <p>Audio stream information.</p>
                     */
                    std::vector<MediaAudioStreamItem> m_audioStreamSet;
                    bool m_audioStreamSetHasBeenSet;

                    /**
                     * <p>Digital watermark type. Available values:</p><li>Trace means transit watermark processing;</li><li>CopyRight means copyright watermark processing;</li><li>None means no digital watermark processing.</li>
                     */
                    std::string m_digitalWatermarkType;
                    bool m_digitalWatermarkTypeHasBeenSet;

                    /**
                     * <p>Copyright information.</p>
                     */
                    std::string m_copyRightWatermarkText;
                    bool m_copyRightWatermarkTextHasBeenSet;

                    /**
                     * <p>Digital watermark template id.</p>
                     */
                    int64_t m_blindWatermarkDefinition;
                    bool m_blindWatermarkDefinitionHasBeenSet;

                    /**
                     * <p>Generated new FileId for transcoding. Valid when requesting to enable independence media output.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSCODEITEM_H_
