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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIATRANSCODEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIATRANSCODEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/MediaAudioStreamItem.h>
#include <tencentcloud/mps/v20190612/model/MediaVideoStreamItem.h>
#include <tencentcloud/mps/v20190612/model/MediaUsageItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
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
                     * 获取<p>Target storage for the transcoded file.</p>
                     * @return OutputStorage <p>Target storage for the transcoded file.</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>Target storage for the transcoded file.</p>
                     * @param _outputStorage <p>Target storage for the transcoded file.</p>
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取<p>Transcoded video file path.</p>
                     * @return Path <p>Transcoded video file path.</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Transcoded video file path.</p>
                     * @param _path <p>Transcoded video file path.</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>Transcoding specification ID. Please refer to <a href="https://www.tencentcloud.com/document/product/862/37042?from_cn_redirect=1">transcoding parameter template</a>.</p>
                     * @return Definition <p>Transcoding specification ID. Please refer to <a href="https://www.tencentcloud.com/document/product/862/37042?from_cn_redirect=1">transcoding parameter template</a>.</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>Transcoding specification ID. Please refer to <a href="https://www.tencentcloud.com/document/product/862/37042?from_cn_redirect=1">transcoding parameter template</a>.</p>
                     * @param _definition <p>Transcoding specification ID. Please refer to <a href="https://www.tencentcloud.com/document/product/862/37042?from_cn_redirect=1">transcoding parameter template</a>.</p>
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
                     * 获取<p>Sum of the mean video stream bitrate and the mean audio stream bitrate. Unit: bps.</p>
                     * @return Bitrate <p>Sum of the mean video stream bitrate and the mean audio stream bitrate. Unit: bps.</p>
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置<p>Sum of the mean video stream bitrate and the mean audio stream bitrate. Unit: bps.</p>
                     * @param _bitrate <p>Sum of the mean video stream bitrate and the mean audio stream bitrate. Unit: bps.</p>
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
                     * 获取<p>Maximum height of the video stream. Unit: px.</p>
                     * @return Height <p>Maximum height of the video stream. Unit: px.</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>Maximum height of the video stream. Unit: px.</p>
                     * @param _height <p>Maximum height of the video stream. Unit: px.</p>
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
                     * 获取<p>Maximum video stream width. Unit: px.</p>
                     * @return Width <p>Maximum video stream width. Unit: px.</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>Maximum video stream width. Unit: px.</p>
                     * @param _width <p>Maximum video stream width. Unit: px.</p>
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
                     * 获取<p>Total size of media files (for HLS videos, the size is the sum of m3u8 and ts file sizes), unit: byte.</p>
                     * @return Size <p>Total size of media files (for HLS videos, the size is the sum of m3u8 and ts file sizes), unit: byte.</p>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>Total size of media files (for HLS videos, the size is the sum of m3u8 and ts file sizes), unit: byte.</p>
                     * @param _size <p>Total size of media files (for HLS videos, the size is the sum of m3u8 and ts file sizes), unit: byte.</p>
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
                     * 获取<p>Container type, for example, m4a, mp4.</p>
                     * @return Container <p>Container type, for example, m4a, mp4.</p>
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置<p>Container type, for example, m4a, mp4.</p>
                     * @param _container <p>Container type, for example, m4a, mp4.</p>
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
                     * 获取<p>Video transcoding enhancement item descriptions and explanations</p><li>hdr: HDR configuration</li><li>wd_fps: Frame interpolation frame rate configuration</li><li>video_super_resolution: Super-resolution configuration</li><li>repair: Comprehensive enhancement configuration</li><li>denoise: Video noise reduction configuration</li><li>color_enhance: Color enhancement configuration</li><li>scratch: Scratches removal configuration</li><li>artifact: Artifacts removal (burrs) configuration</li><li>sharp: Detail enhancement configuration</li><li>low_light: Low-light enhancement configuration</li><li>face_enhance: Face enhancement configuration</li>
                     * @return CallBackExtInfo <p>Video transcoding enhancement item descriptions and explanations</p><li>hdr: HDR configuration</li><li>wd_fps: Frame interpolation frame rate configuration</li><li>video_super_resolution: Super-resolution configuration</li><li>repair: Comprehensive enhancement configuration</li><li>denoise: Video noise reduction configuration</li><li>color_enhance: Color enhancement configuration</li><li>scratch: Scratches removal configuration</li><li>artifact: Artifacts removal (burrs) configuration</li><li>sharp: Detail enhancement configuration</li><li>low_light: Low-light enhancement configuration</li><li>face_enhance: Face enhancement configuration</li>
                     * 
                     */
                    std::string GetCallBackExtInfo() const;

                    /**
                     * 设置<p>Video transcoding enhancement item descriptions and explanations</p><li>hdr: HDR configuration</li><li>wd_fps: Frame interpolation frame rate configuration</li><li>video_super_resolution: Super-resolution configuration</li><li>repair: Comprehensive enhancement configuration</li><li>denoise: Video noise reduction configuration</li><li>color_enhance: Color enhancement configuration</li><li>scratch: Scratches removal configuration</li><li>artifact: Artifacts removal (burrs) configuration</li><li>sharp: Detail enhancement configuration</li><li>low_light: Low-light enhancement configuration</li><li>face_enhance: Face enhancement configuration</li>
                     * @param _callBackExtInfo <p>Video transcoding enhancement item descriptions and explanations</p><li>hdr: HDR configuration</li><li>wd_fps: Frame interpolation frame rate configuration</li><li>video_super_resolution: Super-resolution configuration</li><li>repair: Comprehensive enhancement configuration</li><li>denoise: Video noise reduction configuration</li><li>color_enhance: Color enhancement configuration</li><li>scratch: Scratches removal configuration</li><li>artifact: Artifacts removal (burrs) configuration</li><li>sharp: Detail enhancement configuration</li><li>low_light: Low-light enhancement configuration</li><li>face_enhance: Face enhancement configuration</li>
                     * 
                     */
                    void SetCallBackExtInfo(const std::string& _callBackExtInfo);

                    /**
                     * 判断参数 CallBackExtInfo 是否已赋值
                     * @return CallBackExtInfo 是否已赋值
                     * 
                     */
                    bool CallBackExtInfoHasBeenSet() const;

                    /**
                     * 获取<p>MediaTranscodeItem</p>
                     * @return Usage <p>MediaTranscodeItem</p>
                     * 
                     */
                    MediaUsageItem GetUsage() const;

                    /**
                     * 设置<p>MediaTranscodeItem</p>
                     * @param _usage <p>MediaTranscodeItem</p>
                     * 
                     */
                    void SetUsage(const MediaUsageItem& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * <p>Target storage for the transcoded file.</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>Transcoded video file path.</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>Transcoding specification ID. Please refer to <a href="https://www.tencentcloud.com/document/product/862/37042?from_cn_redirect=1">transcoding parameter template</a>.</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Sum of the mean video stream bitrate and the mean audio stream bitrate. Unit: bps.</p>
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * <p>Maximum height of the video stream. Unit: px.</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>Maximum video stream width. Unit: px.</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>Total size of media files (for HLS videos, the size is the sum of m3u8 and ts file sizes), unit: byte.</p>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>Video duration, in seconds.</p>
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>Container type, for example, m4a, mp4.</p>
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * <p>md5 value of the video.</p>
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * <p>Audio stream information.</p>
                     */
                    std::vector<MediaAudioStreamItem> m_audioStreamSet;
                    bool m_audioStreamSetHasBeenSet;

                    /**
                     * <p>Video stream information.</p>
                     */
                    std::vector<MediaVideoStreamItem> m_videoStreamSet;
                    bool m_videoStreamSetHasBeenSet;

                    /**
                     * <p>Video transcoding enhancement item descriptions and explanations</p><li>hdr: HDR configuration</li><li>wd_fps: Frame interpolation frame rate configuration</li><li>video_super_resolution: Super-resolution configuration</li><li>repair: Comprehensive enhancement configuration</li><li>denoise: Video noise reduction configuration</li><li>color_enhance: Color enhancement configuration</li><li>scratch: Scratches removal configuration</li><li>artifact: Artifacts removal (burrs) configuration</li><li>sharp: Detail enhancement configuration</li><li>low_light: Low-light enhancement configuration</li><li>face_enhance: Face enhancement configuration</li>
                     */
                    std::string m_callBackExtInfo;
                    bool m_callBackExtInfoHasBeenSet;

                    /**
                     * <p>MediaTranscodeItem</p>
                     */
                    MediaUsageItem m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIATRANSCODEITEM_H_
