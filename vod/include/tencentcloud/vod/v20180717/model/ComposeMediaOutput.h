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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIAOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIAOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/OutputVideoStream.h>
#include <tencentcloud/vod/v20180717/model/OutputAudioStream.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Information of output media file.
                */
                class ComposeMediaOutput : public AbstractModel
                {
                public:
                    ComposeMediaOutput();
                    ~ComposeMediaOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filename of up to 64 characters.
                     * @return FileName Filename of up to 64 characters.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename of up to 64 characters.
                     * @param _fileName Filename of up to 64 characters.
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Description, which can contain up to 128 characters.
                     * @return Description Description, which can contain up to 128 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description, which can contain up to 128 characters.
                     * @param _description Description, which can contain up to 128 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Category ID, which is used to categorize the media for management. A category can be created and its ID can be obtained by using the [category creating](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, which means "Other".</li>
                     * @return ClassId Category ID, which is used to categorize the media for management. A category can be created and its ID can be obtained by using the [category creating](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, which means "Other".</li>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID, which is used to categorize the media for management. A category can be created and its ID can be obtained by using the [category creating](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, which means "Other".</li>
                     * @param _classId Category ID, which is used to categorize the media for management. A category can be created and its ID can be obtained by using the [category creating](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, which means "Other".</li>
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取Expiration time of output media file in ISO 8601 format, after which the file will be deleted. Files will never expire by default. For more information, please see [Notes on ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return ExpireTime Expiration time of output media file in ISO 8601 format, after which the file will be deleted. Files will never expire by default. For more information, please see [Notes on ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time of output media file in ISO 8601 format, after which the file will be deleted. Files will never expire by default. For more information, please see [Notes on ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _expireTime Expiration time of output media file in ISO 8601 format, after which the file will be deleted. Files will never expire by default. For more information, please see [Notes on ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Container. Valid values: mp4, mp3. mp3 is for audio files.
                     * @return Container Container. Valid values: mp4, mp3. mp3 is for audio files.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Container. Valid values: mp4, mp3. mp3 is for audio files.
                     * @param _container Container. Valid values: mp4, mp3. mp3 is for audio files.
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
                     * 获取Information of output video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VideoStream Information of output video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    OutputVideoStream GetVideoStream() const;

                    /**
                     * 设置Information of output video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _videoStream Information of output video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVideoStream(const OutputVideoStream& _videoStream);

                    /**
                     * 判断参数 VideoStream 是否已赋值
                     * @return VideoStream 是否已赋值
                     * 
                     */
                    bool VideoStreamHasBeenSet() const;

                    /**
                     * 获取Information of output audio.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AudioStream Information of output audio.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    OutputAudioStream GetAudioStream() const;

                    /**
                     * 设置Information of output audio.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _audioStream Information of output audio.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAudioStream(const OutputAudioStream& _audioStream);

                    /**
                     * 判断参数 AudioStream 是否已赋值
                     * @return AudioStream 是否已赋值
                     * 
                     */
                    bool AudioStreamHasBeenSet() const;

                    /**
                     * 获取Whether to remove video data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     * @return RemoveVideo Whether to remove video data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置Whether to remove video data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     * @param _removeVideo Whether to remove video data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     * 
                     */
                    void SetRemoveVideo(const int64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     * 
                     */
                    bool RemoveVideoHasBeenSet() const;

                    /**
                     * 获取Whether to remove audio data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     * @return RemoveAudio Whether to remove audio data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置Whether to remove audio data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     * @param _removeAudio Whether to remove audio data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     * 
                     */
                    void SetRemoveAudio(const int64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     * 
                     */
                    bool RemoveAudioHasBeenSet() const;

                private:

                    /**
                     * Filename of up to 64 characters.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Description, which can contain up to 128 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Category ID, which is used to categorize the media for management. A category can be created and its ID can be obtained by using the [category creating](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, which means "Other".</li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * Expiration time of output media file in ISO 8601 format, after which the file will be deleted. Files will never expire by default. For more information, please see [Notes on ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Container. Valid values: mp4, mp3. mp3 is for audio files.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Information of output video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OutputVideoStream m_videoStream;
                    bool m_videoStreamHasBeenSet;

                    /**
                     * Information of output audio.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OutputAudioStream m_audioStream;
                    bool m_audioStreamHasBeenSet;

                    /**
                     * Whether to remove video data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * Whether to remove audio data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
Default value: 0.
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIAOUTPUT_H_
