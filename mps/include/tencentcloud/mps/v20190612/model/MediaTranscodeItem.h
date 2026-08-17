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


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Transcoding info
                */
                class MediaTranscodeItem : public AbstractModel
                {
                public:
                    MediaTranscodeItem();
                    ~MediaTranscodeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target storage of the transcoded file.
                     * @return OutputStorage Target storage of the transcoded file.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Target storage of the transcoded file.
                     * @param _outputStorage Target storage of the transcoded file.
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
                     * 获取Video file path after transcoding.
                     * @return Path Video file path after transcoding.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Video file path after transcoding.
                     * @param _path Video file path after transcoding.
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
                     * 获取Transcoding specification ID. Please refer to the transcoding parameter template (https://www.tencentcloud.com/document/product/862/37042?from_cn_redirect=1).
                     * @return Definition Transcoding specification ID. Please refer to the transcoding parameter template (https://www.tencentcloud.com/document/product/862/37042?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Transcoding specification ID. Please refer to the transcoding parameter template (https://www.tencentcloud.com/document/product/862/37042?from_cn_redirect=1).
                     * @param _definition Transcoding specification ID. Please refer to the transcoding parameter template (https://www.tencentcloud.com/document/product/862/37042?from_cn_redirect=1).
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
                     * 获取Sum of the average video stream bitrate and the average audio stream bit rate. Measurement unit: bps.
                     * @return Bitrate Sum of the average video stream bitrate and the average audio stream bit rate. Measurement unit: bps.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Sum of the average video stream bitrate and the average audio stream bit rate. Measurement unit: bps.
                     * @param _bitrate Sum of the average video stream bitrate and the average audio stream bit rate. Measurement unit: bps.
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
                     * 获取Maximum value of video stream height, measurement unit: px.
                     * @return Height Maximum value of video stream height, measurement unit: px.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Maximum value of video stream height, measurement unit: px.
                     * @param _height Maximum value of video stream height, measurement unit: px.
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
                     * 获取Maximum value of the video stream width in px.
                     * @return Width Maximum value of the video stream width in px.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Maximum value of the video stream width in px.
                     * @param _width Maximum value of the video stream width in px.
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
                     * 获取Total size of media files (when the video is HLS, the size is the sum of m3u8 and ts file sizes), measurement unit: byte.
                     * @return Size Total size of media files (when the video is HLS, the size is the sum of m3u8 and ts file sizes), measurement unit: byte.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Total size of media files (when the video is HLS, the size is the sum of m3u8 and ts file sizes), measurement unit: byte.
                     * @param _size Total size of media files (when the video is HLS, the size is the sum of m3u8 and ts file sizes), measurement unit: byte.
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
                     * 获取Video duration, in seconds.
                     * @return Duration Video duration, in seconds.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Video duration, in seconds.
                     * @param _duration Video duration, in seconds.
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
                     * 获取Container type, such as m4a and mp4.
                     * @return Container Container type, such as m4a and mp4.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Container type, such as m4a and mp4.
                     * @param _container Container type, such as m4a and mp4.
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
                     * 获取md5 value of the video.
                     * @return Md5 md5 value of the video.
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置md5 value of the video.
                     * @param _md5 md5 value of the video.
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
                     * @return AudioStreamSet Audio stream information.
                     * 
                     */
                    std::vector<MediaAudioStreamItem> GetAudioStreamSet() const;

                    /**
                     * 设置Audio stream information.
                     * @param _audioStreamSet Audio stream information.
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
                     * @return VideoStreamSet Video stream information.
                     * 
                     */
                    std::vector<MediaVideoStreamItem> GetVideoStreamSet() const;

                    /**
                     * 设置Video stream information.
                     * @param _videoStreamSet Video stream information.
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
                     * 获取
                     * @return CallBackExtInfo 
                     * 
                     */
                    std::string GetCallBackExtInfo() const;

                    /**
                     * 设置
                     * @param _callBackExtInfo 
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
                     * Target storage of the transcoded file.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Video file path after transcoding.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Transcoding specification ID. Please refer to the transcoding parameter template (https://www.tencentcloud.com/document/product/862/37042?from_cn_redirect=1).
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Sum of the average video stream bitrate and the average audio stream bit rate. Measurement unit: bps.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Maximum value of video stream height, measurement unit: px.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Maximum value of the video stream width in px.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Total size of media files (when the video is HLS, the size is the sum of m3u8 and ts file sizes), measurement unit: byte.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Video duration, in seconds.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Container type, such as m4a and mp4.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * md5 value of the video.
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * Audio stream information.
                     */
                    std::vector<MediaAudioStreamItem> m_audioStreamSet;
                    bool m_audioStreamSetHasBeenSet;

                    /**
                     * Video stream information.
                     */
                    std::vector<MediaVideoStreamItem> m_videoStreamSet;
                    bool m_videoStreamSetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_callBackExtInfo;
                    bool m_callBackExtInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIATRANSCODEITEM_H_
