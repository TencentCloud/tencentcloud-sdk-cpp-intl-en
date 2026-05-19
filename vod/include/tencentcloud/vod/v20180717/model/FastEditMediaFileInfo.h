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
                     * 获取Media ID.
                     * @return FileId Media ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media ID.
                     * @param _fileId Media ID.
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
                     * 获取Audio and video type for operation. Valid values:
<li>Transcode: transcoding output;</li>
<li>Original: original audio/video.</li>
Note: The audio and video to operate must be in HLS format.
                     * @return AudioVideoType Audio and video type for operation. Valid values:
<li>Transcode: transcoding output;</li>
<li>Original: original audio/video.</li>
Note: The audio and video to operate must be in HLS format.
                     * 
                     */
                    std::string GetAudioVideoType() const;

                    /**
                     * 设置Audio and video type for operation. Valid values:
<li>Transcode: transcoding output;</li>
<li>Original: original audio/video.</li>
Note: The audio and video to operate must be in HLS format.
                     * @param _audioVideoType Audio and video type for operation. Valid values:
<li>Transcode: transcoding output;</li>
<li>Original: original audio/video.</li>
Note: The audio and video to operate must be in HLS format.
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
                     * 获取Valid when AudioVideoType is Transcode. Represents the transcoding template ID for media operation.
                     * @return TranscodeDefinition Valid when AudioVideoType is Transcode. Represents the transcoding template ID for media operation.
                     * 
                     */
                    int64_t GetTranscodeDefinition() const;

                    /**
                     * 设置Valid when AudioVideoType is Transcode. Represents the transcoding template ID for media operation.
                     * @param _transcodeDefinition Valid when AudioVideoType is Transcode. Represents the transcoding template ID for media operation.
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
                     * 获取Start time offset of media editing, in seconds.
                     * @return StartTimeOffset Start time offset of media editing, in seconds.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of media editing, in seconds.
                     * @param _startTimeOffset Start time offset of media editing, in seconds.
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
                     * 获取End time offset of media editing, in seconds.
                     * @return EndTimeOffset End time offset of media editing, in seconds.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of media editing, in seconds.
                     * @param _endTimeOffset End time offset of media editing, in seconds.
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
                     * Media ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Audio and video type for operation. Valid values:
<li>Transcode: transcoding output;</li>
<li>Original: original audio/video.</li>
Note: The audio and video to operate must be in HLS format.
                     */
                    std::string m_audioVideoType;
                    bool m_audioVideoTypeHasBeenSet;

                    /**
                     * Valid when AudioVideoType is Transcode. Represents the transcoding template ID for media operation.
                     */
                    int64_t m_transcodeDefinition;
                    bool m_transcodeDefinitionHasBeenSet;

                    /**
                     * Start time offset of media editing, in seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of media editing, in seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAFILEINFO_H_
