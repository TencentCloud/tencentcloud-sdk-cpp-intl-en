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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVIDEODOWNLOADTASKREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVIDEODOWNLOADTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * CreateVideoDownloadTask request structure.
                */
                class CreateVideoDownloadTaskRequest : public AbstractModel
                {
                public:
                    CreateVideoDownloadTaskRequest();
                    ~CreateVideoDownloadTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel ID
                     * @return ChannelId Channel ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID
                     * @param _channelId Channel ID
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return BeginTime Start time.
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置Start time.
                     * @param _beginTime Start time.
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Default: 1x. Supports 1x, 2x, 4x, and 8x playback speeds.
                     * @return Scale Default: 1x. Supports 1x, 2x, 4x, and 8x playback speeds.
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置Default: 1x. Supports 1x, 2x, 4x, and 8x playback speeds.
                     * @param _scale Default: 1x. Supports 1x, 2x, 4x, and 8x playback speeds.
                     * 
                     */
                    void SetScale(const int64_t& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取Expiration time of the transcoded mp4 file (7, 15, 30, 60, 90, 180, and 365 are supported)
                     * @return Expire Expiration time of the transcoded mp4 file (7, 15, 30, 60, 90, 180, and 365 are supported)
                     * 
                     */
                    int64_t GetExpire() const;

                    /**
                     * 设置Expiration time of the transcoded mp4 file (7, 15, 30, 60, 90, 180, and 365 are supported)
                     * @param _expire Expiration time of the transcoded mp4 file (7, 15, 30, 60, 90, 180, and 365 are supported)
                     * 
                     */
                    void SetExpire(const int64_t& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                    /**
                     * 获取Download file format. Currently only supports (1: mp4)
                     * @return FileType Download file format. Currently only supports (1: mp4)
                     * 
                     */
                    int64_t GetFileType() const;

                    /**
                     * 设置Download file format. Currently only supports (1: mp4)
                     * @param _fileType Download file format. Currently only supports (1: mp4)
                     * 
                     */
                    void SetFileType(const int64_t& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取Completion policy (0: The task fails and no MP4 is generated if the stream pull fails but the video recording is incomplete. 1: The task succeeds and an MP4 is generated if the stream pull fails but the video recording is incomplete.)
                     * @return CompletionPolicy Completion policy (0: The task fails and no MP4 is generated if the stream pull fails but the video recording is incomplete. 1: The task succeeds and an MP4 is generated if the stream pull fails but the video recording is incomplete.)
                     * 
                     */
                    int64_t GetCompletionPolicy() const;

                    /**
                     * 设置Completion policy (0: The task fails and no MP4 is generated if the stream pull fails but the video recording is incomplete. 1: The task succeeds and an MP4 is generated if the stream pull fails but the video recording is incomplete.)
                     * @param _completionPolicy Completion policy (0: The task fails and no MP4 is generated if the stream pull fails but the video recording is incomplete. 1: The task succeeds and an MP4 is generated if the stream pull fails but the video recording is incomplete.)
                     * 
                     */
                    void SetCompletionPolicy(const int64_t& _completionPolicy);

                    /**
                     * 判断参数 CompletionPolicy 是否已赋值
                     * @return CompletionPolicy 是否已赋值
                     * 
                     */
                    bool CompletionPolicyHasBeenSet() const;

                private:

                    /**
                     * Channel ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Start time.
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Default: 1x. Supports 1x, 2x, 4x, and 8x playback speeds.
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * Expiration time of the transcoded mp4 file (7, 15, 30, 60, 90, 180, and 365 are supported)
                     */
                    int64_t m_expire;
                    bool m_expireHasBeenSet;

                    /**
                     * Download file format. Currently only supports (1: mp4)
                     */
                    int64_t m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Completion policy (0: The task fails and no MP4 is generated if the stream pull fails but the video recording is incomplete. 1: The task succeeds and an MP4 is generated if the stream pull fails but the video recording is incomplete.)
                     */
                    int64_t m_completionPolicy;
                    bool m_completionPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVIDEODOWNLOADTASKREQUEST_H_
