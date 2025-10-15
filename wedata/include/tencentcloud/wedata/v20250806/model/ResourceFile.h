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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFILE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Resource file details.
                */
                class ResourceFile : public AbstractModel
                {
                public:
                    ResourceFile();
                    ~ResourceFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Resource file ID.
                     * @return ResourceId Resource file ID.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource file ID.
                     * @param _resourceId Resource file ID.
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
                     * 获取Resource file name.
                     * @return ResourceName Resource file name.
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Resource file name.
                     * @param _resourceName Resource file name.
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
                     * 获取Source file path.
                     * @return LocalPath Source file path.
                     * 
                     */
                    std::string GetLocalPath() const;

                    /**
                     * 设置Source file path.
                     * @param _localPath Source file path.
                     * 
                     */
                    void SetLocalPath(const std::string& _localPath);

                    /**
                     * 判断参数 LocalPath 是否已赋值
                     * @return LocalPath 是否已赋值
                     * 
                     */
                    bool LocalPathHasBeenSet() const;

                    /**
                     * 获取Specifies the COS storage path of the resource object.
                     * @return RemotePath Specifies the COS storage path of the resource object.
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置Specifies the COS storage path of the resource object.
                     * @param _remotePath Specifies the COS storage path of the resource object.
                     * 
                     */
                    void SetRemotePath(const std::string& _remotePath);

                    /**
                     * 判断参数 RemotePath 是否已赋值
                     * @return RemotePath 是否已赋值
                     * 
                     */
                    bool RemotePathHasBeenSet() const;

                    /**
                     * 获取Specifies the resource file type.

                     * @return FileExtensionType Specifies the resource file type.

                     * 
                     */
                    std::string GetFileExtensionType() const;

                    /**
                     * 设置Specifies the resource file type.

                     * @param _fileExtensionType Specifies the resource file type.

                     * 
                     */
                    void SetFileExtensionType(const std::string& _fileExtensionType);

                    /**
                     * 判断参数 FileExtensionType 是否已赋值
                     * @return FileExtensionType 是否已赋值
                     * 
                     */
                    bool FileExtensionTypeHasBeenSet() const;

                    /**
                     * 获取Resource size
                     * @return Size Resource size
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置Resource size
                     * @param _size Resource size
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Creator user ID 
                     * @return CreatorUserUin Creator user ID 
                     * 
                     */
                    std::string GetCreatorUserUin() const;

                    /**
                     * 设置Creator user ID 
                     * @param _creatorUserUin Creator user ID 
                     * 
                     */
                    void SetCreatorUserUin(const std::string& _creatorUserUin);

                    /**
                     * 判断参数 CreatorUserUin 是否已赋值
                     * @return CreatorUserUin 是否已赋值
                     * 
                     */
                    bool CreatorUserUinHasBeenSet() const;

                    /**
                     * 获取Creator name
                     * @return CreatorUserName Creator name
                     * 
                     */
                    std::string GetCreatorUserName() const;

                    /**
                     * 设置Creator name
                     * @param _creatorUserName Creator name
                     * 
                     */
                    void SetCreatorUserName(const std::string& _creatorUserName);

                    /**
                     * 判断参数 CreatorUserName 是否已赋值
                     * @return CreatorUserName 是否已赋值
                     * 
                     */
                    bool CreatorUserNameHasBeenSet() const;

                    /**
                     * 获取Last updated username.

                     * @return UpdateUserName Last updated username.

                     * 
                     */
                    std::string GetUpdateUserName() const;

                    /**
                     * 设置Last updated username.

                     * @param _updateUserName Last updated username.

                     * 
                     */
                    void SetUpdateUserName(const std::string& _updateUserName);

                    /**
                     * 判断参数 UpdateUserName 是否已赋值
                     * @return UpdateUserName 是否已赋值
                     * 
                     */
                    bool UpdateUserNameHasBeenSet() const;

                    /**
                     * 获取Last updated user ID.

                     * @return UpdateUserUin Last updated user ID.

                     * 
                     */
                    std::string GetUpdateUserUin() const;

                    /**
                     * 设置Last updated user ID.

                     * @param _updateUserUin Last updated user ID.

                     * 
                     */
                    void SetUpdateUserUin(const std::string& _updateUserUin);

                    /**
                     * 判断参数 UpdateUserUin 是否已赋值
                     * @return UpdateUserUin 是否已赋值
                     * 
                     */
                    bool UpdateUserUinHasBeenSet() const;

                    /**
                     * 获取COS bucket.
                     * @return BucketName COS bucket.
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置COS bucket.
                     * @param _bucketName COS bucket.
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
                     * 获取COS region
                     * @return CosRegion COS region
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置COS region
                     * @param _cosRegion COS region
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
                     * 获取Specifies the resource source mode.
                     * @return ResourceSourceMode Specifies the resource source mode.
                     * 
                     */
                    std::string GetResourceSourceMode() const;

                    /**
                     * 设置Specifies the resource source mode.
                     * @param _resourceSourceMode Specifies the resource source mode.
                     * 
                     */
                    void SetResourceSourceMode(const std::string& _resourceSourceMode);

                    /**
                     * 判断参数 ResourceSourceMode 是否已赋值
                     * @return ResourceSourceMode 是否已赋值
                     * 
                     */
                    bool ResourceSourceModeHasBeenSet() const;

                    /**
                     * 获取Local project ID.

                     * @return BundleId Local project ID.

                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置Local project ID.

                     * @param _bundleId Local project ID.

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
                     * 获取Local project information.

                     * @return BundleInfo Local project information.

                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置Local project information.

                     * @param _bundleInfo Local project information.

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
                     * Resource file ID.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Resource file name.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Source file path.
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                    /**
                     * Specifies the COS storage path of the resource object.
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * Specifies the resource file type.

                     */
                    std::string m_fileExtensionType;
                    bool m_fileExtensionTypeHasBeenSet;

                    /**
                     * Resource size
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Creator user ID 
                     */
                    std::string m_creatorUserUin;
                    bool m_creatorUserUinHasBeenSet;

                    /**
                     * Creator name
                     */
                    std::string m_creatorUserName;
                    bool m_creatorUserNameHasBeenSet;

                    /**
                     * Last updated username.

                     */
                    std::string m_updateUserName;
                    bool m_updateUserNameHasBeenSet;

                    /**
                     * Last updated user ID.

                     */
                    std::string m_updateUserUin;
                    bool m_updateUserUinHasBeenSet;

                    /**
                     * COS bucket.
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * COS region
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * Specifies the resource source mode.
                     */
                    std::string m_resourceSourceMode;
                    bool m_resourceSourceModeHasBeenSet;

                    /**
                     * Local project ID.

                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Local project information.

                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFILE_H_
