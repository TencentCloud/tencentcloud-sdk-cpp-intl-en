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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_PLAYSOUNDCALLREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_PLAYSOUNDCALLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * PlaySoundCall request structure.
                */
                class PlaySoundCallRequest : public AbstractModel
                {
                public:
                    PlaySoundCallRequest();
                    ~PlaySoundCallRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取App ID (required). you can view it at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId App ID (required). you can view it at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置App ID (required). you can view it at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId App ID (required). you can view it at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Session ID.
                     * @return SessionId Session ID.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session ID.
                     * @param _sessionId Session ID.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Audio file ID. please refer to the management console - telephone customer service - audio file management.
                     * @return FileId Audio file ID. please refer to the management console - telephone customer service - audio file management.
                     * 
                     */
                    int64_t GetFileId() const;

                    /**
                     * 设置Audio file ID. please refer to the management console - telephone customer service - audio file management.
                     * @param _fileId Audio file ID. please refer to the management console - telephone customer service - audio file management.
                     * 
                     */
                    void SetFileId(const int64_t& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Number of playbacks. default 1.
                     * @return PlayTimes Number of playbacks. default 1.
                     * 
                     */
                    int64_t GetPlayTimes() const;

                    /**
                     * 设置Number of playbacks. default 1.
                     * @param _playTimes Number of playbacks. default 1.
                     * 
                     */
                    void SetPlayTimes(const int64_t& _playTimes);

                    /**
                     * 判断参数 PlayTimes 是否已赋值
                     * @return PlayTimes 是否已赋值
                     * 
                     */
                    bool PlayTimesHasBeenSet() const;

                private:

                    /**
                     * App ID (required). you can view it at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Session ID.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Audio file ID. please refer to the management console - telephone customer service - audio file management.
                     */
                    int64_t m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Number of playbacks. default 1.
                     */
                    int64_t m_playTimes;
                    bool m_playTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_PLAYSOUNDCALLREQUEST_H_
