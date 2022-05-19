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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASK2017_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASK2017_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TranscodePlayInfo2017.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * The details of a video transcoding task. This parameter is only valid for tasks initiated by the v2017 video transcoding API.
                */
                class TranscodeTask2017 : public AbstractModel
                {
                public:
                    TranscodeTask2017();
                    ~TranscodeTask2017() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Transcoding task ID.
                     * @return TaskId Transcoding task ID.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Transcoding task ID.
                     * @param TaskId Transcoding task ID.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ErrCode Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ErrCode Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Message Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Message Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取ID of transcoded file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileId ID of transcoded file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置ID of transcoded file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FileId ID of transcoded file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Name of transcoded file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileName Name of transcoded file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Name of transcoded file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FileName Name of transcoded file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Video duration in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Duration Video duration in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置Video duration in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Duration Video duration in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Cover address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CoverUrl Cover address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 设置Cover address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CoverUrl Cover address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCoverUrl(const std::string& _coverUrl);

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     */
                    bool CoverUrlHasBeenSet() const;

                    /**
                     * 获取Playback information generated after video transcoding.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PlayInfoSet Playback information generated after video transcoding.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TranscodePlayInfo2017> GetPlayInfoSet() const;

                    /**
                     * 设置Playback information generated after video transcoding.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PlayInfoSet Playback information generated after video transcoding.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPlayInfoSet(const std::vector<TranscodePlayInfo2017>& _playInfoSet);

                    /**
                     * 判断参数 PlayInfoSet 是否已赋值
                     * @return PlayInfoSet 是否已赋值
                     */
                    bool PlayInfoSetHasBeenSet() const;

                private:

                    /**
                     * Transcoding task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * ID of transcoded file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Name of transcoded file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Video duration in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Cover address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

                    /**
                     * Playback information generated after video transcoding.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TranscodePlayInfo2017> m_playInfoSet;
                    bool m_playInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASK2017_H_
