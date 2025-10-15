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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATERESOURCEFILEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATERESOURCEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateResourceFile request structure.
                */
                class UpdateResourceFileRequest : public AbstractModel
                {
                public:
                    UpdateResourceFileRequest();
                    ~UpdateResourceFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Resource file ID. Can be obtained through the ListResourceFiles API.
                     * @return ResourceId Resource file ID. Can be obtained through the ListResourceFiles API.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource file ID. Can be obtained through the ListResourceFiles API.
                     * @param _resourceId Resource file ID. Can be obtained through the ListResourceFiles API.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取-Upload file and manual entry are two methods, choose one. if both are provided, the sequence is file > manual entry.
-The hand-filled value must be an existing cos path. /datastudio/resource/ is the fixed prefix. projectId is the project ID and requires a specific value. parentFolderPath is the parent folder path. name is the file name. 
Hand-filled value example:.
   /datastudio/resource/projectId/parentFolderPath/name 

                     * @return ResourceFile -Upload file and manual entry are two methods, choose one. if both are provided, the sequence is file > manual entry.
-The hand-filled value must be an existing cos path. /datastudio/resource/ is the fixed prefix. projectId is the project ID and requires a specific value. parentFolderPath is the parent folder path. name is the file name. 
Hand-filled value example:.
   /datastudio/resource/projectId/parentFolderPath/name 

                     * 
                     */
                    std::string GetResourceFile() const;

                    /**
                     * 设置-Upload file and manual entry are two methods, choose one. if both are provided, the sequence is file > manual entry.
-The hand-filled value must be an existing cos path. /datastudio/resource/ is the fixed prefix. projectId is the project ID and requires a specific value. parentFolderPath is the parent folder path. name is the file name. 
Hand-filled value example:.
   /datastudio/resource/projectId/parentFolderPath/name 

                     * @param _resourceFile -Upload file and manual entry are two methods, choose one. if both are provided, the sequence is file > manual entry.
-The hand-filled value must be an existing cos path. /datastudio/resource/ is the fixed prefix. projectId is the project ID and requires a specific value. parentFolderPath is the parent folder path. name is the file name. 
Hand-filled value example:.
   /datastudio/resource/projectId/parentFolderPath/name 

                     * 
                     */
                    void SetResourceFile(const std::string& _resourceFile);

                    /**
                     * 判断参数 ResourceFile 是否已赋值
                     * @return ResourceFile 是否已赋值
                     * 
                     */
                    bool ResourceFileHasBeenSet() const;

                    /**
                     * 获取Resource name, preferably kept consistent with the file name.
                     * @return ResourceName Resource name, preferably kept consistent with the file name.
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Resource name, preferably kept consistent with the file name.
                     * @param _resourceName Resource name, preferably kept consistent with the file name.
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Bundle Client ID.
                     * @return BundleId Bundle Client ID.
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置Bundle Client ID.
                     * @param _bundleId Bundle Client ID.
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取Bundle Client Name
                     * @return BundleInfo Bundle Client Name
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置Bundle Client Name
                     * @param _bundleInfo Bundle Client Name
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Resource file ID. Can be obtained through the ListResourceFiles API.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * -Upload file and manual entry are two methods, choose one. if both are provided, the sequence is file > manual entry.
-The hand-filled value must be an existing cos path. /datastudio/resource/ is the fixed prefix. projectId is the project ID and requires a specific value. parentFolderPath is the parent folder path. name is the file name. 
Hand-filled value example:.
   /datastudio/resource/projectId/parentFolderPath/name 

                     */
                    std::string m_resourceFile;
                    bool m_resourceFileHasBeenSet;

                    /**
                     * Resource name, preferably kept consistent with the file name.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Bundle Client ID.
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Bundle Client Name
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATERESOURCEFILEREQUEST_H_
