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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETERESOURCEFILESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETERESOURCEFILESREQUEST_H_

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
                * DeleteResourceFiles request structure.
                */
                class DeleteResourceFilesRequest : public AbstractModel
                {
                public:
                    DeleteResourceFilesRequest();
                    ~DeleteResourceFilesRequest() = default;
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
                     * 获取Usage Status
                     * @return UseStatus Usage Status
                     * 
                     */
                    bool GetUseStatus() const;

                    /**
                     * 设置Usage Status
                     * @param _useStatus Usage Status
                     * 
                     */
                    void SetUseStatus(const bool& _useStatus);

                    /**
                     * 判断参数 UseStatus 是否已赋值
                     * @return UseStatus 是否已赋值
                     * 
                     */
                    bool UseStatusHasBeenSet() const;

                    /**
                     * 获取Resource ID List
                     * @return ResourceIds Resource ID List
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置Resource ID List
                     * @param _resourceIds Resource ID List
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取Resource Path List
                     * @return FilePaths Resource Path List
                     * 
                     */
                    std::vector<std::string> GetFilePaths() const;

                    /**
                     * 设置Resource Path List
                     * @param _filePaths Resource Path List
                     * 
                     */
                    void SetFilePaths(const std::vector<std::string>& _filePaths);

                    /**
                     * 判断参数 FilePaths 是否已赋值
                     * @return FilePaths 是否已赋值
                     * 
                     */
                    bool FilePathsHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Usage Status
                     */
                    bool m_useStatus;
                    bool m_useStatusHasBeenSet;

                    /**
                     * Resource ID List
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * Resource Path List
                     */
                    std::vector<std::string> m_filePaths;
                    bool m_filePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETERESOURCEFILESREQUEST_H_
