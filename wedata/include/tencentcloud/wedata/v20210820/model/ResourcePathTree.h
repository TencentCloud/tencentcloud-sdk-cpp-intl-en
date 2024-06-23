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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RESOURCEPATHTREE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RESOURCEPATHTREE_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Resource Management Directory Tree Node
                */
                class ResourcePathTree : public AbstractModel
                {
                public:
                    ResourcePathTree();
                    ~ResourcePathTree() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Name Resource name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Resource name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _name Resource name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Is leaf node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IsLeaf Is leaf node
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置Is leaf node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _isLeaf Is leaf node
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIsLeaf(const bool& _isLeaf);

                    /**
                     * 判断参数 IsLeaf 是否已赋值
                     * @return IsLeaf 是否已赋值
                     * 
                     */
                    bool IsLeafHasBeenSet() const;

                    /**
                     * 获取Resource ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ResourceId Resource ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _resourceId Resource ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Local path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LocalPath Local path
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLocalPath() const;

                    /**
                     * 设置Local path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _localPath Local path
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Remote path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RemotePath Remote path
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置Remote path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _remotePath Remote path
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取File TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return FileExtensionType File TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFileExtensionType() const;

                    /**
                     * 设置File TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _fileExtensionType File TypeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取File sizeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Size File sizeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置File sizeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _size File sizeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取File MD5 value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Md5Value File MD5 value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMd5Value() const;

                    /**
                     * 设置File MD5 value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _md5Value File MD5 value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMd5Value(const std::string& _md5Value);

                    /**
                     * 判断参数 Md5Value 是否已赋值
                     * @return Md5Value 是否已赋值
                     * 
                     */
                    bool Md5ValueHasBeenSet() const;

                    /**
                     * 获取File Owner's Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerName File Owner's Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置File Owner's Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerName File Owner's Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取Updater
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateUser Updater
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置Updater
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateUser Updater
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateUser(const std::string& _updateUser);

                    /**
                     * 判断参数 UpdateUser 是否已赋值
                     * @return UpdateUser 是否已赋值
                     * 
                     */
                    bool UpdateUserHasBeenSet() const;

                    /**
                     * 获取File Updater UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateUserId File Updater UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateUserId() const;

                    /**
                     * 设置File Updater UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateUserId File Updater UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateUserId(const std::string& _updateUserId);

                    /**
                     * 判断参数 UpdateUserId 是否已赋值
                     * @return UpdateUserId 是否已赋值
                     * 
                     */
                    bool UpdateUserIdHasBeenSet() const;

                    /**
                     * 获取Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取COS Bucket Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CosBucket COS Bucket Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置COS Bucket Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cosBucket COS Bucket Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取COS Region
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CosRegion COS Region
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置COS Region
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cosRegion COS Region
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Additional InformationNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ExtraInfo Additional InformationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置Additional InformationNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _extraInfo Additional InformationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                private:

                    /**
                     * Resource name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Is leaf node
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * Resource ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Local path
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                    /**
                     * Remote path
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * File TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_fileExtensionType;
                    bool m_fileExtensionTypeHasBeenSet;

                    /**
                     * File sizeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * File MD5 value
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_md5Value;
                    bool m_md5ValueHasBeenSet;

                    /**
                     * File Owner's Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * Updater
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * File Updater UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateUserId;
                    bool m_updateUserIdHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * COS Bucket Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * COS Region
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * Additional InformationNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RESOURCEPATHTREE_H_
