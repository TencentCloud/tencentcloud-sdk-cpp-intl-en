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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STORAGEFILE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STORAGEFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The information of the recording files, which is returned by the `DescribeCloudRecording` API.
                */
                class StorageFile : public AbstractModel
                {
                public:
                    StorageFile();
                    ~StorageFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The user whose stream is recorded into the file. In the mixed-stream recording mode, this parameter will be empty.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return UserId The user whose stream is recorded into the file. In the mixed-stream recording mode, this parameter will be empty.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The user whose stream is recorded into the file. In the mixed-stream recording mode, this parameter will be empty.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _userId The user whose stream is recorded into the file. In the mixed-stream recording mode, this parameter will be empty.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取The filename.
                     * @return FileName The filename.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置The filename.
                     * @param _fileName The filename.
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
                     * 获取The type of the media recorded.
video
audio
audio_video
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TrackType The type of the media recorded.
video
audio
audio_video
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTrackType() const;

                    /**
                     * 设置The type of the media recorded.
video
audio
audio_video
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _trackType The type of the media recorded.
video
audio
audio_video
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTrackType(const std::string& _trackType);

                    /**
                     * 判断参数 TrackType 是否已赋值
                     * @return TrackType 是否已赋值
                     * 
                     */
                    bool TrackTypeHasBeenSet() const;

                    /**
                     * 获取The start time (Unix timestamp) of the recording file.
                     * @return BeginTimeStamp The start time (Unix timestamp) of the recording file.
                     * 
                     */
                    uint64_t GetBeginTimeStamp() const;

                    /**
                     * 设置The start time (Unix timestamp) of the recording file.
                     * @param _beginTimeStamp The start time (Unix timestamp) of the recording file.
                     * 
                     */
                    void SetBeginTimeStamp(const uint64_t& _beginTimeStamp);

                    /**
                     * 判断参数 BeginTimeStamp 是否已赋值
                     * @return BeginTimeStamp 是否已赋值
                     * 
                     */
                    bool BeginTimeStampHasBeenSet() const;

                private:

                    /**
                     * The user whose stream is recorded into the file. In the mixed-stream recording mode, this parameter will be empty.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * The filename.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * The type of the media recorded.
video
audio
audio_video
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_trackType;
                    bool m_trackTypeHasBeenSet;

                    /**
                     * The start time (Unix timestamp) of the recording file.
                     */
                    uint64_t m_beginTimeStamp;
                    bool m_beginTimeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STORAGEFILE_H_
