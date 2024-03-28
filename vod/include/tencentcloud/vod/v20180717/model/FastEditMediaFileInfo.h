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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * VOD  fast media editing information
                */
                class FastEditMediaFileInfo : public AbstractModel
                {
                public:
                    FastEditMediaFileInfo();
                    ~FastEditMediaFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media file ID.
                     * @return FileId Media file ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID.
                     * @param _fileId Media file ID.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取The types of media. Valid values: <li>Transcode:Transcoded output; </li> <li>Original: Original audio and video. </li>The audio and video being operated on must be in HLS format.
                     * @return AudioVideoType The types of media. Valid values: <li>Transcode:Transcoded output; </li> <li>Original: Original audio and video. </li>The audio and video being operated on must be in HLS format.
                     * 
                     */
                    std::string GetAudioVideoType() const;

                    /**
                     * 设置The types of media. Valid values: <li>Transcode:Transcoded output; </li> <li>Original: Original audio and video. </li>The audio and video being operated on must be in HLS format.
                     * @param _audioVideoType The types of media. Valid values: <li>Transcode:Transcoded output; </li> <li>Original: Original audio and video. </li>The audio and video being operated on must be in HLS format.
                     * 
                     */
                    void SetAudioVideoType(const std::string& _audioVideoType);

                    /**
                     * 判断参数 AudioVideoType 是否已赋值
                     * @return AudioVideoType 是否已赋值
                     * 
                     */
                    bool AudioVideoTypeHasBeenSet() const;

                    /**
                     * 获取When AudioVideoType is set to Transcode, it is valid and indicates the transcoding template ID for the media being operated on.
                     * @return TranscodeDefinition When AudioVideoType is set to Transcode, it is valid and indicates the transcoding template ID for the media being operated on.
                     * 
                     */
                    int64_t GetTranscodeDefinition() const;

                    /**
                     * 设置When AudioVideoType is set to Transcode, it is valid and indicates the transcoding template ID for the media being operated on.
                     * @param _transcodeDefinition When AudioVideoType is set to Transcode, it is valid and indicates the transcoding template ID for the media being operated on.
                     * 
                     */
                    void SetTranscodeDefinition(const int64_t& _transcodeDefinition);

                    /**
                     * 判断参数 TranscodeDefinition 是否已赋值
                     * @return TranscodeDefinition 是否已赋值
                     * 
                     */
                    bool TranscodeDefinitionHasBeenSet() const;

                    /**
                     * 获取Offset time of the start of the video clip, unit: seconds.
                     * @return StartTimeOffset Offset time of the start of the video clip, unit: seconds.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Offset time of the start of the video clip, unit: seconds.
                     * @param _startTimeOffset Offset time of the start of the video clip, unit: seconds.
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Offset time at the end of the video clip, unit: seconds.
                     * @return EndTimeOffset Offset time at the end of the video clip, unit: seconds.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置Offset time at the end of the video clip, unit: seconds.
                     * @param _endTimeOffset Offset time at the end of the video clip, unit: seconds.
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * Media file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * The types of media. Valid values: <li>Transcode:Transcoded output; </li> <li>Original: Original audio and video. </li>The audio and video being operated on must be in HLS format.
                     */
                    std::string m_audioVideoType;
                    bool m_audioVideoTypeHasBeenSet;

                    /**
                     * When AudioVideoType is set to Transcode, it is valid and indicates the transcoding template ID for the media being operated on.
                     */
                    int64_t m_transcodeDefinition;
                    bool m_transcodeDefinitionHasBeenSet;

                    /**
                     * Offset time of the start of the video clip, unit: seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * Offset time at the end of the video clip, unit: seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAFILEINFO_H_
