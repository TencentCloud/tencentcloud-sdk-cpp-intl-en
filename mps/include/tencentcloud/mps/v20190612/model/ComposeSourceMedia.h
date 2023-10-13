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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESOURCEMEDIA_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESOURCEMEDIA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The material source of a video editing/compositing task.
                */
                class ComposeSourceMedia : public AbstractModel
                {
                public:
                    ComposeSourceMedia();
                    ~ComposeSourceMedia() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The material ID, which can be found in `FileInfos`.
                     * @return FileId The material ID, which can be found in `FileInfos`.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置The material ID, which can be found in `FileInfos`.
                     * @param _fileId The material ID, which can be found in `FileInfos`.
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
                     * 获取The start time of the material. The following two formats are supported.
<li>If the value of this parameter ends with `s`, it specifies the time in seconds. For example, `3.5s` indicates the time when 3.5 seconds of the material elapses.</li>
u200c<li>If the value of this parameter ends with `%`, it specifies the time as a percentage of the material's duration. For example, `10%` indicates the time when 10% of the material's duration elapses. </li>
Default value: `0s`.
                     * @return StartTime The start time of the material. The following two formats are supported.
<li>If the value of this parameter ends with `s`, it specifies the time in seconds. For example, `3.5s` indicates the time when 3.5 seconds of the material elapses.</li>
u200c<li>If the value of this parameter ends with `%`, it specifies the time as a percentage of the material's duration. For example, `10%` indicates the time when 10% of the material's duration elapses. </li>
Default value: `0s`.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time of the material. The following two formats are supported.
<li>If the value of this parameter ends with `s`, it specifies the time in seconds. For example, `3.5s` indicates the time when 3.5 seconds of the material elapses.</li>
u200c<li>If the value of this parameter ends with `%`, it specifies the time as a percentage of the material's duration. For example, `10%` indicates the time when 10% of the material's duration elapses. </li>
Default value: `0s`.
                     * @param _startTime The start time of the material. The following two formats are supported.
<li>If the value of this parameter ends with `s`, it specifies the time in seconds. For example, `3.5s` indicates the time when 3.5 seconds of the material elapses.</li>
u200c<li>If the value of this parameter ends with `%`, it specifies the time as a percentage of the material's duration. For example, `10%` indicates the time when 10% of the material's duration elapses. </li>
Default value: `0s`.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time of the material. This parameter and `StartTime` determine which time segment of the material is used. The following two formats are supported:
<li>If the value of this parameter ends with `s`, it specifies the time in seconds. For example, `3.5s` indicates the time when 3.5 seconds of the material elapses.</li>
u200c<li>If the value of this parameter ends with `%`, it specifies the time as a percentage of the material's duration. For example, `10%` indicates the time when 10% of the material's duration elapses. </li>
If the track duration is set, the default value is `StartTime` plus the track duration. If not, the default value is `StartTime` plus 1 second.
Note: `EndTime` must be at least 0.02 seconds later than `StartTime`.

                     * @return EndTime The end time of the material. This parameter and `StartTime` determine which time segment of the material is used. The following two formats are supported:
<li>If the value of this parameter ends with `s`, it specifies the time in seconds. For example, `3.5s` indicates the time when 3.5 seconds of the material elapses.</li>
u200c<li>If the value of this parameter ends with `%`, it specifies the time as a percentage of the material's duration. For example, `10%` indicates the time when 10% of the material's duration elapses. </li>
If the track duration is set, the default value is `StartTime` plus the track duration. If not, the default value is `StartTime` plus 1 second.
Note: `EndTime` must be at least 0.02 seconds later than `StartTime`.

                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time of the material. This parameter and `StartTime` determine which time segment of the material is used. The following two formats are supported:
<li>If the value of this parameter ends with `s`, it specifies the time in seconds. For example, `3.5s` indicates the time when 3.5 seconds of the material elapses.</li>
u200c<li>If the value of this parameter ends with `%`, it specifies the time as a percentage of the material's duration. For example, `10%` indicates the time when 10% of the material's duration elapses. </li>
If the track duration is set, the default value is `StartTime` plus the track duration. If not, the default value is `StartTime` plus 1 second.
Note: `EndTime` must be at least 0.02 seconds later than `StartTime`.

                     * @param _endTime The end time of the material. This parameter and `StartTime` determine which time segment of the material is used. The following two formats are supported:
<li>If the value of this parameter ends with `s`, it specifies the time in seconds. For example, `3.5s` indicates the time when 3.5 seconds of the material elapses.</li>
u200c<li>If the value of this parameter ends with `%`, it specifies the time as a percentage of the material's duration. For example, `10%` indicates the time when 10% of the material's duration elapses. </li>
If the track duration is set, the default value is `StartTime` plus the track duration. If not, the default value is `StartTime` plus 1 second.
Note: `EndTime` must be at least 0.02 seconds later than `StartTime`.

                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * The material ID, which can be found in `FileInfos`.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * The start time of the material. The following two formats are supported.
<li>If the value of this parameter ends with `s`, it specifies the time in seconds. For example, `3.5s` indicates the time when 3.5 seconds of the material elapses.</li>
u200c<li>If the value of this parameter ends with `%`, it specifies the time as a percentage of the material's duration. For example, `10%` indicates the time when 10% of the material's duration elapses. </li>
Default value: `0s`.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time of the material. This parameter and `StartTime` determine which time segment of the material is used. The following two formats are supported:
<li>If the value of this parameter ends with `s`, it specifies the time in seconds. For example, `3.5s` indicates the time when 3.5 seconds of the material elapses.</li>
u200c<li>If the value of this parameter ends with `%`, it specifies the time as a percentage of the material's duration. For example, `10%` indicates the time when 10% of the material's duration elapses. </li>
If the track duration is set, the default value is `StartTime` plus the track duration. If not, the default value is `StartTime` plus 1 second.
Note: `EndTime` must be at least 0.02 seconds later than `StartTime`.

                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESOURCEMEDIA_H_
