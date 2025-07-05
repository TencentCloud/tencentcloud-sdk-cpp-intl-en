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
                     * 获取File id.
                     * @return FileId File id.
                     * 
                     */
                    uint64_t GetFileId() const;

                    /**
                     * 设置File id.
                     * @param _fileId File id.
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
                     * 获取File alias.
                     * @return CustomFileName File alias.
                     * 
                     */
                    std::string GetCustomFileName() const;

                    /**
                     * 设置File alias.
                     * @param _customFileName File alias.
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
                     * 获取Filename.
                     * @return AudioFileName Filename.
                     * 
                     */
                    std::string GetAudioFileName() const;

                    /**
                     * 设置Filename.
                     * @param _audioFileName Filename.
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
                     * 获取Review status: 0 - unreviewed, 1 - approved, 2 - rejected.
                     * @return Status Review status: 0 - unreviewed, 1 - approved, 2 - rejected.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Review status: 0 - unreviewed, 1 - approved, 2 - rejected.
                     * @param _status Review status: 0 - unreviewed, 1 - approved, 2 - rejected.
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
                     * File id.
                     */
                    uint64_t m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * File alias.
                     */
                    std::string m_customFileName;
                    bool m_customFileNameHasBeenSet;

                    /**
                     * Filename.
                     */
                    std::string m_audioFileName;
                    bool m_audioFileNameHasBeenSet;

                    /**
                     * Review status: 0 - unreviewed, 1 - approved, 2 - rejected.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AUDIOFILEINFO_H_
