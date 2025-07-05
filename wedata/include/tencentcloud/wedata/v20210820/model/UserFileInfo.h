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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_USERFILEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_USERFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ParamInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Development Space - Data Development Script Information Response Body
                */
                class UserFileInfo : public AbstractModel
                {
                public:
                    UserFileInfo();
                    ~UserFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取File NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return FileName File NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置File NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _fileName File NameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取File Type, such as jar, zip, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FileExtensionType File Type, such as jar, zip, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFileExtensionType() const;

                    /**
                     * 设置File Type, such as jar, zip, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fileExtensionType File Type, such as jar, zip, etc.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取File Upload Type, Resource Management as resource
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Type File Upload Type, Resource Management as resource
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置File Upload Type, Resource Management as resource
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _type File Upload Type, Resource Management as resource
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取File MD5 Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Md5Value File MD5 Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMd5Value() const;

                    /**
                     * 设置File MD5 Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _md5Value File MD5 Value
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
                     * 获取Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

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
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取File Size, in bytes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Size File Size, in bytes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置File Size, in bytes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _size File Size, in bytes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Local Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LocalPath Local Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLocalPath() const;

                    /**
                     * 设置Local Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _localPath Local Path
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
                     * 获取Local Temporary Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LocalTempPath Local Temporary Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLocalTempPath() const;

                    /**
                     * 设置Local Temporary Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _localTempPath Local Temporary Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLocalTempPath(const std::string& _localTempPath);

                    /**
                     * 判断参数 LocalTempPath 是否已赋值
                     * @return LocalTempPath 是否已赋值
                     * 
                     */
                    bool LocalTempPathHasBeenSet() const;

                    /**
                     * 获取Remote Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RemotePath Remote Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置Remote Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _remotePath Remote Path
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
                     * 获取File owner's uin
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Owner File owner's uin
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置File owner's uin
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _owner File owner's uin
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取File depth
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PathDepth File depth
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPathDepth() const;

                    /**
                     * 设置File depth
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _pathDepth File depth
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPathDepth(const int64_t& _pathDepth);

                    /**
                     * 判断参数 PathDepth 是否已赋值
                     * @return PathDepth 是否已赋值
                     * 
                     */
                    bool PathDepthHasBeenSet() const;

                    /**
                     * 获取Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ProjectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _projectId Project IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Additional information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExtraInfo Additional information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<ParamInfo> GetExtraInfo() const;

                    /**
                     * 设置Additional information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _extraInfo Additional information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExtraInfo(const std::vector<ParamInfo>& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取Absolute path of local temporary compressed file
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ZipPath Absolute path of local temporary compressed file
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetZipPath() const;

                    /**
                     * 设置Absolute path of local temporary compressed file
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _zipPath Absolute path of local temporary compressed file
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetZipPath(const std::string& _zipPath);

                    /**
                     * 判断参数 ZipPath 是否已赋值
                     * @return ZipPath 是否已赋值
                     * 
                     */
                    bool ZipPathHasBeenSet() const;

                    /**
                     * 获取File's belonging bucket 
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Bucket File's belonging bucket 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置File's belonging bucket 
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _bucket File's belonging bucket 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取Region of the file's belonging bucket
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Region Region of the file's belonging bucket
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the file's belonging bucket
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _region Region of the file's belonging bucket
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取NoNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DeleteName NoNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDeleteName() const;

                    /**
                     * 设置NoNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _deleteName NoNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDeleteName(const std::string& _deleteName);

                    /**
                     * 判断参数 DeleteName 是否已赋值
                     * @return DeleteName 是否已赋值
                     * 
                     */
                    bool DeleteNameHasBeenSet() const;

                    /**
                     * 获取NoNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DeleteOwner NoNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDeleteOwner() const;

                    /**
                     * 设置NoNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _deleteOwner NoNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDeleteOwner(const std::string& _deleteOwner);

                    /**
                     * 判断参数 DeleteOwner 是否已赋值
                     * @return DeleteOwner 是否已赋值
                     * 
                     */
                    bool DeleteOwnerHasBeenSet() const;

                    /**
                     * 获取NoNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Operator NoNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置NoNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _operator NoNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取NoNote: This field may return null, indicating that no valid value can be obtained.
                     * @return OperatorName NoNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置NoNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _operatorName NoNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                    /**
                     * 获取Additional information base64 encoded
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EncodeExtraInfo Additional information base64 encoded
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEncodeExtraInfo() const;

                    /**
                     * 设置Additional information base64 encoded
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _encodeExtraInfo Additional information base64 encoded
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEncodeExtraInfo(const std::string& _encodeExtraInfo);

                    /**
                     * 判断参数 EncodeExtraInfo 是否已赋值
                     * @return EncodeExtraInfo 是否已赋值
                     * 
                     */
                    bool EncodeExtraInfoHasBeenSet() const;

                private:

                    /**
                     * Resource ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * File NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File Type, such as jar, zip, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_fileExtensionType;
                    bool m_fileExtensionTypeHasBeenSet;

                    /**
                     * File Upload Type, Resource Management as resource
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * File MD5 Value
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_md5Value;
                    bool m_md5ValueHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * File Size, in bytes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Local Path
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                    /**
                     * Local Temporary Path
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_localTempPath;
                    bool m_localTempPathHasBeenSet;

                    /**
                     * Remote Path
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * File Owner's Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * File owner's uin
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * File depth
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_pathDepth;
                    bool m_pathDepthHasBeenSet;

                    /**
                     * Project IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Additional information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<ParamInfo> m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * Absolute path of local temporary compressed file
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_zipPath;
                    bool m_zipPathHasBeenSet;

                    /**
                     * File's belonging bucket 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Region of the file's belonging bucket
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * NoNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_deleteName;
                    bool m_deleteNameHasBeenSet;

                    /**
                     * NoNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_deleteOwner;
                    bool m_deleteOwnerHasBeenSet;

                    /**
                     * NoNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * NoNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * Additional information base64 encoded
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_encodeExtraInfo;
                    bool m_encodeExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_USERFILEINFO_H_
