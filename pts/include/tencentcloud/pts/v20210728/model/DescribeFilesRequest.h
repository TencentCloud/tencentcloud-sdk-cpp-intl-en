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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEFILESREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeFiles request structure.
                */
                class DescribeFilesRequest : public AbstractModel
                {
                public:
                    DescribeFilesRequest();
                    ~DescribeFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of Project ID.
                     * @return ProjectIds Array of Project ID.
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置Array of Project ID.
                     * @param _projectIds Array of Project ID.
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Array of File ID.
                     * @return FileIds Array of File ID.
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置Array of File ID.
                     * @param _fileIds Array of File ID.
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取Filename
                     * @return FileName Filename
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename
                     * @param _fileName Filename
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
                     * 获取Offset. Default value is 0.
                     * @return Offset Offset. Default value is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value is 0.
                     * @param _offset Offset. Default value is 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returns. Default value is 20, maximum is 100
                     * @return Limit Number of returns. Default value is 20, maximum is 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returns. Default value is 20, maximum is 100
                     * @param _limit Number of returns. Default value is 20, maximum is 100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取File type. 1 represents parameter file, 2 represents protocol file, 3 represents request file.
                     * @return Kind File type. 1 represents parameter file, 2 represents protocol file, 3 represents request file.
                     * 
                     */
                    int64_t GetKind() const;

                    /**
                     * 设置File type. 1 represents parameter file, 2 represents protocol file, 3 represents request file.
                     * @param _kind File type. 1 represents parameter file, 2 represents protocol file, 3 represents request file.
                     * 
                     */
                    void SetKind(const int64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                private:

                    /**
                     * Array of Project ID.
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Array of File ID.
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * Filename
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Offset. Default value is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returns. Default value is 20, maximum is 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * File type. 1 represents parameter file, 2 represents protocol file, 3 represents request file.
                     */
                    int64_t m_kind;
                    bool m_kindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEFILESREQUEST_H_
