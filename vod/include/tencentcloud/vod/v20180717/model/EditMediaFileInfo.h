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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAFILEINFO_H_

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
                * VOD video file editing information
                */
                class EditMediaFileInfo : public AbstractModel
                {
                public:
                    EditMediaFileInfo();
                    ~EditMediaFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video ID.
                     * @return FileId Video ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Video ID.
                     * @param _fileId Video ID.
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
                     * 获取Start time offset of video clipping in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StartTimeOffset Start time offset of video clipping in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of video clipping in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _startTimeOffset Start time offset of video clipping in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取End time offset of video clipping in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EndTimeOffset End time offset of video clipping in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of video clipping in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _endTimeOffset End time offset of video clipping in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Video ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Start time offset of video clipping in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of video clipping in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAFILEINFO_H_
