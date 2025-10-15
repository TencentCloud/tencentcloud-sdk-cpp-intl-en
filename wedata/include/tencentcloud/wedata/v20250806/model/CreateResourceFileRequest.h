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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEFILEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEFILEREQUEST_H_

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
                * CreateResourceFile request structure.
                */
                class CreateResourceFileRequest : public AbstractModel
                {
                public:
                    CreateResourceFileRequest();
                    ~CreateResourceFileRequest() = default;
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
                     * 获取Resource file name. should be consistent with the uploaded file name.
                     * @return ResourceName Resource file name. should be consistent with the uploaded file name.
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Resource file name. should be consistent with the uploaded file name.
                     * @param _resourceName Resource file name. should be consistent with the uploaded file name.
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
                     * 获取Bucket name. can be obtained from the GetResourceCosPath api.
                     * @return BucketName Bucket name. can be obtained from the GetResourceCosPath api.
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置Bucket name. can be obtained from the GetResourceCosPath api.
                     * @param _bucketName Bucket name. can be obtained from the GetResourceCosPath api.
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取BucketName specifies the cos storage bucket region.
                     * @return CosRegion BucketName specifies the cos storage bucket region.
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置BucketName specifies the cos storage bucket region.
                     * @param _cosRegion BucketName specifies the cos storage bucket region.
                     * 
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取Upload path for resource files in the project. value example: /wedata/qxxxm/. root directory, please use /.
                     * @return ParentFolderPath Upload path for resource files in the project. value example: /wedata/qxxxm/. root directory, please use /.
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置Upload path for resource files in the project. value example: /wedata/qxxxm/. root directory, please use /.
                     * @param _parentFolderPath Upload path for resource files in the project. value example: /wedata/qxxxm/. root directory, please use /.
                     * 
                     */
                    void SetParentFolderPath(const std::string& _parentFolderPath);

                    /**
                     * 判断参数 ParentFolderPath 是否已赋值
                     * @return ParentFolderPath 是否已赋值
                     * 
                     */
                    bool ParentFolderPathHasBeenSet() const;

                    /**
                     * 获取-Upload file and manual entry are two methods, choose one. if both are provided, the sequence is file > manual entry.
-The manually entered value must be an existing cos path. /datastudio/resource/ is the fixed prefix. projectId is the project ID. import a specific value. parentFolderPath is the folder path. name is the file name. value example: /datastudio/resource/projectId/parentFolderPath/name. 

                     * @return ResourceFile -Upload file and manual entry are two methods, choose one. if both are provided, the sequence is file > manual entry.
-The manually entered value must be an existing cos path. /datastudio/resource/ is the fixed prefix. projectId is the project ID. import a specific value. parentFolderPath is the folder path. name is the file name. value example: /datastudio/resource/projectId/parentFolderPath/name. 

                     * 
                     */
                    std::string GetResourceFile() const;

                    /**
                     * 设置-Upload file and manual entry are two methods, choose one. if both are provided, the sequence is file > manual entry.
-The manually entered value must be an existing cos path. /datastudio/resource/ is the fixed prefix. projectId is the project ID. import a specific value. parentFolderPath is the folder path. name is the file name. value example: /datastudio/resource/projectId/parentFolderPath/name. 

                     * @param _resourceFile -Upload file and manual entry are two methods, choose one. if both are provided, the sequence is file > manual entry.
-The manually entered value must be an existing cos path. /datastudio/resource/ is the fixed prefix. projectId is the project ID. import a specific value. parentFolderPath is the folder path. name is the file name. value example: /datastudio/resource/projectId/parentFolderPath/name. 

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
                     * 获取bundle client info.
                     * @return BundleInfo bundle client info.
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置bundle client info.
                     * @param _bundleInfo bundle client info.
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
                     * Resource file name. should be consistent with the uploaded file name.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Bucket name. can be obtained from the GetResourceCosPath api.
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * BucketName specifies the cos storage bucket region.
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * Upload path for resource files in the project. value example: /wedata/qxxxm/. root directory, please use /.
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * -Upload file and manual entry are two methods, choose one. if both are provided, the sequence is file > manual entry.
-The manually entered value must be an existing cos path. /datastudio/resource/ is the fixed prefix. projectId is the project ID. import a specific value. parentFolderPath is the folder path. name is the file name. value example: /datastudio/resource/projectId/parentFolderPath/name. 

                     */
                    std::string m_resourceFile;
                    bool m_resourceFileHasBeenSet;

                    /**
                     * Bundle Client ID.
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * bundle client info.
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEFILEREQUEST_H_
