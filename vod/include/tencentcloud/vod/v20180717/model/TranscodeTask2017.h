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
                * Video transcoding task information. This structure is only used for tasks initiated via the 2017 [video transcoding](https://www.tencentcloud.com/document/product/266/7822?from_cn_redirect=1) API.
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
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Transcoding task ID.
                     * @param _taskId Transcoding task ID.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Error code.
<li>0: success;</li>
<li>Other value: failure.</li>
                     * @return ErrCode Error code.
<li>0: success;</li>
<li>Other value: failure.</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code.
<li>0: success;</li>
<li>Other value: failure.</li>
                     * @param _errCode Error code.
<li>0: success;</li>
<li>Other value: failure.</li>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Error message.
                     * @return Message Error message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
                     * @param _message Error message.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Transcoded file ID.
                     * @return FileId Transcoded file ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Transcoded file ID.
                     * @param _fileId Transcoded file ID.
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
                     * 获取Name of the transcoded file.
                     * @return FileName Name of the transcoded file.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Name of the transcoded file.
                     * @param _fileName Name of the transcoded file.
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
                     * 获取Video duration, in seconds.
                     * @return Duration Video duration, in seconds.
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置Video duration, in seconds.
                     * @param _duration Video duration, in seconds.
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Address of a cover.
                     * @return CoverUrl Address of a cover.
                     * 
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 设置Address of a cover.
                     * @param _coverUrl Address of a cover.
                     * 
                     */
                    void SetCoverUrl(const std::string& _coverUrl);

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     * 
                     */
                    bool CoverUrlHasBeenSet() const;

                    /**
                     * 获取Playback information generated after video transcoding.
                     * @return PlayInfoSet Playback information generated after video transcoding.
                     * 
                     */
                    std::vector<TranscodePlayInfo2017> GetPlayInfoSet() const;

                    /**
                     * 设置Playback information generated after video transcoding.
                     * @param _playInfoSet Playback information generated after video transcoding.
                     * 
                     */
                    void SetPlayInfoSet(const std::vector<TranscodePlayInfo2017>& _playInfoSet);

                    /**
                     * 判断参数 PlayInfoSet 是否已赋值
                     * @return PlayInfoSet 是否已赋值
                     * 
                     */
                    bool PlayInfoSetHasBeenSet() const;

                private:

                    /**
                     * Transcoding task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Error code.
<li>0: success;</li>
<li>Other value: failure.</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Transcoded file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Name of the transcoded file.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Video duration, in seconds.
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Address of a cover.
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

                    /**
                     * Playback information generated after video transcoding.
                     */
                    std::vector<TranscodePlayInfo2017> m_playInfoSet;
                    bool m_playInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASK2017_H_
