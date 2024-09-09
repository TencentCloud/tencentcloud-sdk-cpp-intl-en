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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AUDIOFILEINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AUDIOFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Audio file review information
                */
                class AudioFileInfo : public AbstractModel
                {
                public:
                    AudioFileInfo();
                    ~AudioFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileId File ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFileId() const;

                    /**
                     * 设置File ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileId File ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFileId(const uint64_t& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取File alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CustomFileName File alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCustomFileName() const;

                    /**
                     * 设置File alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _customFileName File alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCustomFileName(const std::string& _customFileName);

                    /**
                     * 判断参数 CustomFileName 是否已赋值
                     * @return CustomFileName 是否已赋值
                     * 
                     */
                    bool CustomFileNameHasBeenSet() const;

                    /**
                     * 获取Filename
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AudioFileName Filename
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAudioFileName() const;

                    /**
                     * 设置Filename
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _audioFileName Filename
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAudioFileName(const std::string& _audioFileName);

                    /**
                     * 判断参数 AudioFileName 是否已赋值
                     * @return AudioFileName 是否已赋值
                     * 
                     */
                    bool AudioFileNameHasBeenSet() const;

                    /**
                     * 获取Review status, 0-Not reviewed, 1-Approved, 2-Rejected
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Review status, 0-Not reviewed, 1-Approved, 2-Rejected
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Review status, 0-Not reviewed, 1-Approved, 2-Rejected
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Review status, 0-Not reviewed, 1-Approved, 2-Rejected
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * File ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * File alias
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_customFileName;
                    bool m_customFileNameHasBeenSet;

                    /**
                     * Filename
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_audioFileName;
                    bool m_audioFileNameHasBeenSet;

                    /**
                     * Review status, 0-Not reviewed, 1-Approved, 2-Rejected
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AUDIOFILEINFO_H_
