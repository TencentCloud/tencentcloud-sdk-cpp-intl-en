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
                     * 获取Target bucket of an output file.
                     * @return OutputStorage Target bucket of an output file.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Target bucket of an output file.
                     * @param _outputStorage Target bucket of an output file.
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
                     * 获取Path to an output video file.
                     * @return Path Path to an output video file.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path to an output video file.
                     * @param _path Path to an output video file.
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
                     * 获取Transcoding specification ID. For more information, please see [Transcoding Parameter Template](https://intl.cloud.tencent.com/document/product/266/33478?from_cn_redirect=1#.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
                     * @return Definition Transcoding specification ID. For more information, please see [Transcoding Parameter Template](https://intl.cloud.tencent.com/document/product/266/33478?from_cn_redirect=1#.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Transcoding specification ID. For more information, please see [Transcoding Parameter Template](https://intl.cloud.tencent.com/document/product/266/33478?from_cn_redirect=1#.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
                     * @param _definition Transcoding specification ID. For more information, please see [Transcoding Parameter Template](https://intl.cloud.tencent.com/document/product/266/33478?from_cn_redirect=1#.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
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
                     * @return Bitrate Sum of the average bitrate of a video stream and that of an audio stream in bps.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Sum of the average bitrate of a video stream and that of an audio stream in bps.
                     * @param _bitrate Sum of the average bitrate of a video stream and that of an audio stream in bps.
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
                     * @return Height Maximum value of the height of a video stream in px.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Maximum value of the height of a video stream in px.
                     * @param _height Maximum value of the height of a video stream in px.
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
                     * @return Width Maximum value of the width of a video stream in px.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Maximum value of the width of a video stream in px.
                     * @param _width Maximum value of the width of a video stream in px.
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
                     * 获取Total size of a media file in bytes (which is the sum of size of m3u8 and ts files if the video is in HLS format).
                     * @return Size Total size of a media file in bytes (which is the sum of size of m3u8 and ts files if the video is in HLS format).
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Total size of a media file in bytes (which is the sum of size of m3u8 and ts files if the video is in HLS format).
                     * @param _size Total size of a media file in bytes (which is the sum of size of m3u8 and ts files if the video is in HLS format).
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
                     * @return Duration Video duration in seconds.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Video duration in seconds.
                     * @param _duration Video duration in seconds.
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
                     * 获取Container, such as m4a and mp4.
                     * @return Container Container, such as m4a and mp4.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Container, such as m4a and mp4.
                     * @param _container Container, such as m4a and mp4.
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
                     * 获取MD5 value of a video.
                     * @return Md5 MD5 value of a video.
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置MD5 value of a video.
                     * @param _md5 MD5 value of a video.
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
                     * 获取Audio stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AudioStreamSet Audio stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MediaAudioStreamItem> GetAudioStreamSet() const;

                    /**
                     * 设置Audio stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _audioStreamSet Audio stream information.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Video stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VideoStreamSet Video stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MediaVideoStreamItem> GetVideoStreamSet() const;

                    /**
                     * 设置Video stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _videoStreamSet Video stream information.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Enhancement items used for video transcoding. Descriptions of enhancement items:
<li>hdr: HDR configuration</li>
<li>wd_fps: configuration of frame interpolation for higher frame rate</li>
<li>video_super_resolution: 	super-resolution configuration</li>
<li>repair: comprehensive enhancement configuration</li>
<li>denoise: video denoising configuration</li>
<Li>color_enhance: color enhancement configuration</li>
<Li>scratch: scratch removal configuration</li>
<li>artifact: artifact (glitch) removal configuration</li>
<li>sharp: detail enhancement configuration</li>
<Li>low_light: low-light enhancement configuration</li>
<Li>face_enhance: face enhancement configuration</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CallBackExtInfo Enhancement items used for video transcoding. Descriptions of enhancement items:
<li>hdr: HDR configuration</li>
<li>wd_fps: configuration of frame interpolation for higher frame rate</li>
<li>video_super_resolution: 	super-resolution configuration</li>
<li>repair: comprehensive enhancement configuration</li>
<li>denoise: video denoising configuration</li>
<Li>color_enhance: color enhancement configuration</li>
<Li>scratch: scratch removal configuration</li>
<li>artifact: artifact (glitch) removal configuration</li>
<li>sharp: detail enhancement configuration</li>
<Li>low_light: low-light enhancement configuration</li>
<Li>face_enhance: face enhancement configuration</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCallBackExtInfo() const;

                    /**
                     * 设置Enhancement items used for video transcoding. Descriptions of enhancement items:
<li>hdr: HDR configuration</li>
<li>wd_fps: configuration of frame interpolation for higher frame rate</li>
<li>video_super_resolution: 	super-resolution configuration</li>
<li>repair: comprehensive enhancement configuration</li>
<li>denoise: video denoising configuration</li>
<Li>color_enhance: color enhancement configuration</li>
<Li>scratch: scratch removal configuration</li>
<li>artifact: artifact (glitch) removal configuration</li>
<li>sharp: detail enhancement configuration</li>
<Li>low_light: low-light enhancement configuration</li>
<Li>face_enhance: face enhancement configuration</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _callBackExtInfo Enhancement items used for video transcoding. Descriptions of enhancement items:
<li>hdr: HDR configuration</li>
<li>wd_fps: configuration of frame interpolation for higher frame rate</li>
<li>video_super_resolution: 	super-resolution configuration</li>
<li>repair: comprehensive enhancement configuration</li>
<li>denoise: video denoising configuration</li>
<Li>color_enhance: color enhancement configuration</li>
<Li>scratch: scratch removal configuration</li>
<li>artifact: artifact (glitch) removal configuration</li>
<li>sharp: detail enhancement configuration</li>
<Li>low_light: low-light enhancement configuration</li>
<Li>face_enhance: face enhancement configuration</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCallBackExtInfo(const std::string& _callBackExtInfo);

                    /**
                     * 判断参数 CallBackExtInfo 是否已赋值
                     * @return CallBackExtInfo 是否已赋值
                     * 
                     */
                    bool CallBackExtInfoHasBeenSet() const;

                private:

                    /**
                     * Target bucket of an output file.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Path to an output video file.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Transcoding specification ID. For more information, please see [Transcoding Parameter Template](https://intl.cloud.tencent.com/document/product/266/33478?from_cn_redirect=1#.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Sum of the average bitrate of a video stream and that of an audio stream in bps.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Maximum value of the height of a video stream in px.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Maximum value of the width of a video stream in px.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Total size of a media file in bytes (which is the sum of size of m3u8 and ts files if the video is in HLS format).
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Video duration in seconds.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Container, such as m4a and mp4.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * MD5 value of a video.
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * Audio stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaAudioStreamItem> m_audioStreamSet;
                    bool m_audioStreamSetHasBeenSet;

                    /**
                     * Video stream information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaVideoStreamItem> m_videoStreamSet;
                    bool m_videoStreamSetHasBeenSet;

                    /**
                     * Enhancement items used for video transcoding. Descriptions of enhancement items:
<li>hdr: HDR configuration</li>
<li>wd_fps: configuration of frame interpolation for higher frame rate</li>
<li>video_super_resolution: 	super-resolution configuration</li>
<li>repair: comprehensive enhancement configuration</li>
<li>denoise: video denoising configuration</li>
<Li>color_enhance: color enhancement configuration</li>
<Li>scratch: scratch removal configuration</li>
<li>artifact: artifact (glitch) removal configuration</li>
<li>sharp: detail enhancement configuration</li>
<Li>low_light: low-light enhancement configuration</li>
<Li>face_enhance: face enhancement configuration</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_callBackExtInfo;
                    bool m_callBackExtInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIATRANSCODEITEM_H_
