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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_TESTDATA_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_TESTDATA_H_

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
                * Test dataset.
                */
                class TestData : public AbstractModel
                {
                public:
                    TestData();
                    ~TestData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File name of the test dataset.

Note: This field may return null, indicating that no valid value is found.
                     * @return Name File name of the test dataset.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置File name of the test dataset.

Note: This field may return null, indicating that no valid value is found.
                     * @param _name File name of the test dataset.

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
                     * 获取Whether the dataset is sharded.

Note: This field may return null, indicating that no valid value is found.
                     * @return Split Whether the dataset is sharded.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    bool GetSplit() const;

                    /**
                     * 设置Whether the dataset is sharded.

Note: This field may return null, indicating that no valid value is found.
                     * @param _split Whether the dataset is sharded.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetSplit(const bool& _split);

                    /**
                     * 判断参数 Split 是否已赋值
                     * @return Split 是否已赋值
                     * 
                     */
                    bool SplitHasBeenSet() const;

                    /**
                     * 获取Whether the first row is parameter name.

Note: This field may return null, indicating that no valid value is found.
                     * @return HeaderInFile Whether the first row is parameter name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    bool GetHeaderInFile() const;

                    /**
                     * 设置Whether the first row is parameter name.

Note: This field may return null, indicating that no valid value is found.
                     * @param _headerInFile Whether the first row is parameter name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetHeaderInFile(const bool& _headerInFile);

                    /**
                     * 判断参数 HeaderInFile 是否已赋值
                     * @return HeaderInFile 是否已赋值
                     * 
                     */
                    bool HeaderInFileHasBeenSet() const;

                    /**
                     * 获取Array of parameter name.

Note: This field may return null, indicating that no valid value is found.
                     * @return HeaderColumns Array of parameter name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetHeaderColumns() const;

                    /**
                     * 设置Array of parameter name.

Note: This field may return null, indicating that no valid value is found.
                     * @param _headerColumns Array of parameter name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetHeaderColumns(const std::vector<std::string>& _headerColumns);

                    /**
                     * 判断参数 HeaderColumns 是否已赋值
                     * @return HeaderColumns 是否已赋值
                     * 
                     */
                    bool HeaderColumnsHasBeenSet() const;

                    /**
                     * 获取Number of file lines.

Note: This field may return null, indicating that no valid value is found.
                     * @return LineCount Number of file lines.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetLineCount() const;

                    /**
                     * 设置Number of file lines.

Note: This field may return null, indicating that no valid value is found.
                     * @param _lineCount Number of file lines.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetLineCount(const int64_t& _lineCount);

                    /**
                     * 判断参数 LineCount 是否已赋值
                     * @return LineCount 是否已赋值
                     * 
                     */
                    bool LineCountHasBeenSet() const;

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
                     * 获取First few rows of dataset.

Note: This field may return null, indicating that no valid value is found.
                     * @return HeadLines First few rows of dataset.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetHeadLines() const;

                    /**
                     * 设置First few rows of dataset.

Note: This field may return null, indicating that no valid value is found.
                     * @param _headLines First few rows of dataset.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetHeadLines(const std::vector<std::string>& _headLines);

                    /**
                     * 判断参数 HeadLines 是否已赋值
                     * @return HeadLines 是否已赋值
                     * 
                     */
                    bool HeadLinesHasBeenSet() const;

                    /**
                     * 获取Last few rows of dataset.

Note: This field may return null, indicating that no valid value is found.
                     * @return TailLines Last few rows of dataset.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetTailLines() const;

                    /**
                     * 设置Last few rows of dataset.

Note: This field may return null, indicating that no valid value is found.
                     * @param _tailLines Last few rows of dataset.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetTailLines(const std::vector<std::string>& _tailLines);

                    /**
                     * 判断参数 TailLines 是否已赋值
                     * @return TailLines 是否已赋值
                     * 
                     */
                    bool TailLinesHasBeenSet() const;

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
                     * File name of the test dataset.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether the dataset is sharded.

Note: This field may return null, indicating that no valid value is found.
                     */
                    bool m_split;
                    bool m_splitHasBeenSet;

                    /**
                     * Whether the first row is parameter name.

Note: This field may return null, indicating that no valid value is found.
                     */
                    bool m_headerInFile;
                    bool m_headerInFileHasBeenSet;

                    /**
                     * Array of parameter name.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_headerColumns;
                    bool m_headerColumnsHasBeenSet;

                    /**
                     * Number of file lines.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_lineCount;
                    bool m_lineCountHasBeenSet;

                    /**
                     * Update time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * File size.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * First few rows of dataset.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_headLines;
                    bool m_headLinesHasBeenSet;

                    /**
                     * Last few rows of dataset.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_tailLines;
                    bool m_tailLinesHasBeenSet;

                    /**
                     * File type.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

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

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_TESTDATA_H_
