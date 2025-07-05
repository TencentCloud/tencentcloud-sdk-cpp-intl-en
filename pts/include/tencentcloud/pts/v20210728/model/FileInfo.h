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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_FILEINFO_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_FILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Basic file information
                */
                class FileInfo : public AbstractModel
                {
                public:
                    FileInfo();
                    ~FileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filename

Note: This field may return null, indicating that no valid value is found.
                     * @return Name Filename

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filename

Note: This field may return null, indicating that no valid value is found.
                     * @param _name Filename

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取File size

Note: This field may return null, indicating that no valid value is found.
                     * @return Size File size

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置File size

Note: This field may return null, indicating that no valid value is found.
                     * @param _size File size

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取File type

Note: This field may return null, indicating that no valid value is found.
                     * @return Type File type

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置File type

Note: This field may return null, indicating that no valid value is found.
                     * @param _type File type

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Update time

Note: This field may return null, indicating that no valid value is found.
                     * @return UpdatedAt Update time

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time

Note: This field may return null, indicating that no valid value is found.
                     * @param _updatedAt Update time

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取File ID

Note: This field may return null, indicating that no valid value is found.
                     * @return FileId File ID

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置File ID

Note: This field may return null, indicating that no valid value is found.
                     * @param _fileId File ID

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * Filename

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * File size

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * File type

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Update time

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * File ID

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_FILEINFO_H_
