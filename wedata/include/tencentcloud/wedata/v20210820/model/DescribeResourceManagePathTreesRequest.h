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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERESOURCEMANAGEPATHTREESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERESOURCEMANAGEPATHTREESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeResourceManagePathTrees request structure.
                */
                class DescribeResourceManagePathTreesRequest : public AbstractModel
                {
                public:
                    DescribeResourceManagePathTreesRequest();
                    ~DescribeResourceManagePathTreesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Name, for search
                     * @return Name Name, for search
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name, for search
                     * @param _name Name, for search
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
                     * 获取File Type
                     * @return FileType File Type
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File Type
                     * @param _fileType File Type
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取File path
                     * @return FilePath File path
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置File path
                     * @param _filePath File path
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取Folder Type
personal individual
project Item
resource
                     * @return DirType Folder Type
personal individual
project Item
resource
                     * 
                     */
                    std::string GetDirType() const;

                    /**
                     * 设置Folder Type
personal individual
project Item
resource
                     * @param _dirType Folder Type
personal individual
project Item
resource
                     * 
                     */
                    void SetDirType(const std::string& _dirType);

                    /**
                     * 判断参数 DirType 是否已赋值
                     * @return DirType 是否已赋值
                     * 
                     */
                    bool DirTypeHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Name, for search
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * File Type
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * File path
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * Folder Type
personal individual
project Item
resource
                     */
                    std::string m_dirType;
                    bool m_dirTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERESOURCEMANAGEPATHTREESREQUEST_H_
