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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SCRIPTINFO_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SCRIPTINFO_H_

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
                * Performance test script information.
                */
                class ScriptInfo : public AbstractModel
                {
                public:
                    ScriptInfo();
                    ~ScriptInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filename.

Note: This field may return null, indicating that no valid value is found.
                     * @return Name Filename.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filename.

Note: This field may return null, indicating that no valid value is found.
                     * @param _name Filename.

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
                     * 获取File size.

Note: This field may return null, indicating that no valid value is found.
                     * @return Size File size.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置File size.

Note: This field may return null, indicating that no valid value is found.
                     * @param _size File size.

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
                     * 获取File type.

Note: This field may return null, indicating that no valid value is found.
                     * @return Type File type.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置File type.

Note: This field may return null, indicating that no valid value is found.
                     * @param _type File type.

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
                     * 获取Update time.

Note: This field may return null, indicating that no valid value is found.
                     * @return UpdatedAt Update time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _updatedAt Update time.

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
                     * 获取Base64-encoded file content.

Note: This field may return null, indicating that no valid value is found.
                     * @return EncodedContent Base64-encoded file content.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetEncodedContent() const;

                    /**
                     * 设置Base64-encoded file content.

Note: This field may return null, indicating that no valid value is found.
                     * @param _encodedContent Base64-encoded file content.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetEncodedContent(const std::string& _encodedContent);

                    /**
                     * 判断参数 EncodedContent 是否已赋值
                     * @return EncodedContent 是否已赋值
                     * 
                     */
                    bool EncodedContentHasBeenSet() const;

                    /**
                     * 获取Base64-encoded har structure.

Note: This field may return null, indicating that no valid value is found.
                     * @return EncodedHttpArchive Base64-encoded har structure.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetEncodedHttpArchive() const;

                    /**
                     * 设置Base64-encoded har structure.

Note: This field may return null, indicating that no valid value is found.
                     * @param _encodedHttpArchive Base64-encoded har structure.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetEncodedHttpArchive(const std::string& _encodedHttpArchive);

                    /**
                     * 判断参数 EncodedHttpArchive 是否已赋值
                     * @return EncodedHttpArchive 是否已赋值
                     * 
                     */
                    bool EncodedHttpArchiveHasBeenSet() const;

                    /**
                     * 获取Script weight, range 1-100.

Note: This field may return null, indicating that no valid value is found.
                     * @return LoadWeight Script weight, range 1-100.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetLoadWeight() const;

                    /**
                     * 设置Script weight, range 1-100.

Note: This field may return null, indicating that no valid value is found.
                     * @param _loadWeight Script weight, range 1-100.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetLoadWeight(const int64_t& _loadWeight);

                    /**
                     * 判断参数 LoadWeight 是否已赋值
                     * @return LoadWeight 是否已赋值
                     * 
                     */
                    bool LoadWeightHasBeenSet() const;

                    /**
                     * 获取File ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return FileId File ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置File ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _fileId File ID.

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
                     * Filename.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * File size.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * File type.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Update time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Base64-encoded file content.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_encodedContent;
                    bool m_encodedContentHasBeenSet;

                    /**
                     * Base64-encoded har structure.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_encodedHttpArchive;
                    bool m_encodedHttpArchiveHasBeenSet;

                    /**
                     * Script weight, range 1-100.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_loadWeight;
                    bool m_loadWeightHasBeenSet;

                    /**
                     * File ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SCRIPTINFO_H_
