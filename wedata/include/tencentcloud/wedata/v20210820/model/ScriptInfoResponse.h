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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SCRIPTINFORESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SCRIPTINFORESPONSE_H_

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
                * Development Space - Script-related Response
                */
                class ScriptInfoResponse : public AbstractModel
                {
                public:
                    ScriptInfoResponse();
                    ~ScriptInfoResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ResourceId Resource IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _resourceId Resource IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Script Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FileName Script Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Script Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fileName Script Name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取File Extension Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FileExtensionType File Extension Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFileExtensionType() const;

                    /**
                     * 设置File Extension Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fileExtensionType File Extension Type
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
                     * 获取File TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Type File TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置File TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _type File TypeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取md5 Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Md5Value md5 Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMd5Value() const;

                    /**
                     * 设置md5 Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _md5Value md5 Value
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
                     * 获取File sizeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Size File sizeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetSize() const;

                    /**
                     * 设置File sizeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _size File sizeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSize(const double& _size);

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
                     * 获取UsernameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return OwnerName UsernameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置UsernameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _ownerName UsernameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Owner User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _owner User ID
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
                     * 获取Path Depth
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PathDepth Path Depth
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPathDepth() const;

                    /**
                     * 设置Path Depth
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _pathDepth Path Depth
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
                     * 获取Additional Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExtraInfo Additional Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置Additional Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _extraInfo Additional Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取Local Temporary File Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LocalTempPath Local Temporary File Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLocalTempPath() const;

                    /**
                     * 设置Local Temporary File Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _localTempPath Local Temporary File Path
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
                     * 获取Local Compressed File Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ZipPath Local Compressed File Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetZipPath() const;

                    /**
                     * 设置Local Compressed File Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _zipPath Local Compressed File Path
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
                     * 获取COS Bucket Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Bucket COS Bucket Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS Bucket Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _bucket COS Bucket Name
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
                     * 获取COS Region
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Region COS Region
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置COS Region
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _region COS Region
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

                private:

                    /**
                     * Resource IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Script Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File Extension Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_fileExtensionType;
                    bool m_fileExtensionTypeHasBeenSet;

                    /**
                     * File TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * md5 Value
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
                     * File sizeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Local Path
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                    /**
                     * Remote Path
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * UsernameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * User ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Path Depth
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
                     * Additional Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * Local Temporary File Path
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_localTempPath;
                    bool m_localTempPathHasBeenSet;

                    /**
                     * Local Compressed File Path
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_zipPath;
                    bool m_zipPathHasBeenSet;

                    /**
                     * COS Bucket Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * COS Region
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SCRIPTINFORESPONSE_H_
