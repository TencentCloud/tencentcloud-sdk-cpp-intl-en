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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATEMIGRATIONTASKREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATEMIGRATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateMigrationTask request structure.
                */
                class CreateMigrationTaskRequest : public AbstractModel
                {
                public:
                    CreateMigrationTaskRequest();
                    ~CreateMigrationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Migration task name
                     * @return TaskName Migration task name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Migration task name
                     * @param _taskName Migration task name
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Migration type. Valid values: `0` (bucket) and `1` (list). Default value: `0`.
                     * @return MigrationType Migration type. Valid values: `0` (bucket) and `1` (list). Default value: `0`.
                     * 
                     */
                    uint64_t GetMigrationType() const;

                    /**
                     * 设置Migration type. Valid values: `0` (bucket) and `1` (list). Default value: `0`.
                     * @param _migrationType Migration type. Valid values: `0` (bucket) and `1` (list). Default value: `0`.
                     * 
                     */
                    void SetMigrationType(const uint64_t& _migrationType);

                    /**
                     * 判断参数 MigrationType 是否已赋值
                     * @return MigrationType 是否已赋值
                     * 
                     */
                    bool MigrationTypeHasBeenSet() const;

                    /**
                     * 获取Migration mode. Default value: `0` (full migration).
                     * @return MigrationMode Migration mode. Default value: `0` (full migration).
                     * 
                     */
                    uint64_t GetMigrationMode() const;

                    /**
                     * 设置Migration mode. Default value: `0` (full migration).
                     * @param _migrationMode Migration mode. Default value: `0` (full migration).
                     * 
                     */
                    void SetMigrationMode(const uint64_t& _migrationMode);

                    /**
                     * 判断参数 MigrationMode 是否已赋值
                     * @return MigrationMode 是否已赋值
                     * 
                     */
                    bool MigrationModeHasBeenSet() const;

                    /**
                     * 获取SecretId of the data source account
                     * @return SrcSecretId SecretId of the data source account
                     * 
                     */
                    std::string GetSrcSecretId() const;

                    /**
                     * 设置SecretId of the data source account
                     * @param _srcSecretId SecretId of the data source account
                     * 
                     */
                    void SetSrcSecretId(const std::string& _srcSecretId);

                    /**
                     * 判断参数 SrcSecretId 是否已赋值
                     * @return SrcSecretId 是否已赋值
                     * 
                     */
                    bool SrcSecretIdHasBeenSet() const;

                    /**
                     * 获取SecretKey of the data source account
                     * @return SrcSecretKey SecretKey of the data source account
                     * 
                     */
                    std::string GetSrcSecretKey() const;

                    /**
                     * 设置SecretKey of the data source account
                     * @param _srcSecretKey SecretKey of the data source account
                     * 
                     */
                    void SetSrcSecretKey(const std::string& _srcSecretKey);

                    /**
                     * 判断参数 SrcSecretKey 是否已赋值
                     * @return SrcSecretKey 是否已赋值
                     * 
                     */
                    bool SrcSecretKeyHasBeenSet() const;

                    /**
                     * 获取File system instance ID
                     * @return FileSystemId File system instance ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system instance ID
                     * @param _fileSystemId File system instance ID
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取File system path
                     * @return FsPath File system path
                     * 
                     */
                    std::string GetFsPath() const;

                    /**
                     * 设置File system path
                     * @param _fsPath File system path
                     * 
                     */
                    void SetFsPath(const std::string& _fsPath);

                    /**
                     * 判断参数 FsPath 是否已赋值
                     * @return FsPath 是否已赋值
                     * 
                     */
                    bool FsPathHasBeenSet() const;

                    /**
                     * 获取Overwrite policy for files with the same name. Valid values: `0` (retain the file with the latest modified time), `1` (overwrite); and `2` (not overwrite). Default value: `0`.
                     * @return CoverType Overwrite policy for files with the same name. Valid values: `0` (retain the file with the latest modified time), `1` (overwrite); and `2` (not overwrite). Default value: `0`.
                     * 
                     */
                    uint64_t GetCoverType() const;

                    /**
                     * 设置Overwrite policy for files with the same name. Valid values: `0` (retain the file with the latest modified time), `1` (overwrite); and `2` (not overwrite). Default value: `0`.
                     * @param _coverType Overwrite policy for files with the same name. Valid values: `0` (retain the file with the latest modified time), `1` (overwrite); and `2` (not overwrite). Default value: `0`.
                     * 
                     */
                    void SetCoverType(const uint64_t& _coverType);

                    /**
                     * 判断参数 CoverType 是否已赋值
                     * @return CoverType 是否已赋值
                     * 
                     */
                    bool CoverTypeHasBeenSet() const;

                    /**
                     * 获取Data source service provider. Valid values: `COS` (Tencent Cloud COS), `OSS` (Alibaba Cloud OSS), and `OBS` (Huawei Cloud OBS).
                     * @return SrcService Data source service provider. Valid values: `COS` (Tencent Cloud COS), `OSS` (Alibaba Cloud OSS), and `OBS` (Huawei Cloud OBS).
                     * 
                     */
                    std::string GetSrcService() const;

                    /**
                     * 设置Data source service provider. Valid values: `COS` (Tencent Cloud COS), `OSS` (Alibaba Cloud OSS), and `OBS` (Huawei Cloud OBS).
                     * @param _srcService Data source service provider. Valid values: `COS` (Tencent Cloud COS), `OSS` (Alibaba Cloud OSS), and `OBS` (Huawei Cloud OBS).
                     * 
                     */
                    void SetSrcService(const std::string& _srcService);

                    /**
                     * 判断参数 SrcService 是否已赋值
                     * @return SrcService 是否已赋值
                     * 
                     */
                    bool SrcServiceHasBeenSet() const;

                    /**
                     * 获取Data source bucket name. Specify at least one of the bucket name or address.
                     * @return BucketName Data source bucket name. Specify at least one of the bucket name or address.
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置Data source bucket name. Specify at least one of the bucket name or address.
                     * @param _bucketName Data source bucket name. Specify at least one of the bucket name or address.
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
                     * 获取Data source bucket region
                     * @return BucketRegion Data source bucket region
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置Data source bucket region
                     * @param _bucketRegion Data source bucket region
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取Data source bucket address. Specify at least one of the bucket name or address.
                     * @return BucketAddress Data source bucket address. Specify at least one of the bucket name or address.
                     * 
                     */
                    std::string GetBucketAddress() const;

                    /**
                     * 设置Data source bucket address. Specify at least one of the bucket name or address.
                     * @param _bucketAddress Data source bucket address. Specify at least one of the bucket name or address.
                     * 
                     */
                    void SetBucketAddress(const std::string& _bucketAddress);

                    /**
                     * 判断参数 BucketAddress 是否已赋值
                     * @return BucketAddress 是否已赋值
                     * 
                     */
                    bool BucketAddressHasBeenSet() const;

                    /**
                     * 获取List address. This parameter is required if `MigrationType` is set to `1` (list).
                     * @return ListAddress List address. This parameter is required if `MigrationType` is set to `1` (list).
                     * 
                     */
                    std::string GetListAddress() const;

                    /**
                     * 设置List address. This parameter is required if `MigrationType` is set to `1` (list).
                     * @param _listAddress List address. This parameter is required if `MigrationType` is set to `1` (list).
                     * 
                     */
                    void SetListAddress(const std::string& _listAddress);

                    /**
                     * 判断参数 ListAddress 是否已赋值
                     * @return ListAddress 是否已赋值
                     * 
                     */
                    bool ListAddressHasBeenSet() const;

                    /**
                     * 获取Target file system name
                     * @return FsName Target file system name
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置Target file system name
                     * @param _fsName Target file system name
                     * 
                     */
                    void SetFsName(const std::string& _fsName);

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     * 
                     */
                    bool FsNameHasBeenSet() const;

                    /**
                     * 获取Source bucket path, which defaults to `/`
                     * @return BucketPath Source bucket path, which defaults to `/`
                     * 
                     */
                    std::string GetBucketPath() const;

                    /**
                     * 设置Source bucket path, which defaults to `/`
                     * @param _bucketPath Source bucket path, which defaults to `/`
                     * 
                     */
                    void SetBucketPath(const std::string& _bucketPath);

                    /**
                     * 判断参数 BucketPath 是否已赋值
                     * @return BucketPath 是否已赋值
                     * 
                     */
                    bool BucketPathHasBeenSet() const;

                private:

                    /**
                     * Migration task name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Migration type. Valid values: `0` (bucket) and `1` (list). Default value: `0`.
                     */
                    uint64_t m_migrationType;
                    bool m_migrationTypeHasBeenSet;

                    /**
                     * Migration mode. Default value: `0` (full migration).
                     */
                    uint64_t m_migrationMode;
                    bool m_migrationModeHasBeenSet;

                    /**
                     * SecretId of the data source account
                     */
                    std::string m_srcSecretId;
                    bool m_srcSecretIdHasBeenSet;

                    /**
                     * SecretKey of the data source account
                     */
                    std::string m_srcSecretKey;
                    bool m_srcSecretKeyHasBeenSet;

                    /**
                     * File system instance ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * File system path
                     */
                    std::string m_fsPath;
                    bool m_fsPathHasBeenSet;

                    /**
                     * Overwrite policy for files with the same name. Valid values: `0` (retain the file with the latest modified time), `1` (overwrite); and `2` (not overwrite). Default value: `0`.
                     */
                    uint64_t m_coverType;
                    bool m_coverTypeHasBeenSet;

                    /**
                     * Data source service provider. Valid values: `COS` (Tencent Cloud COS), `OSS` (Alibaba Cloud OSS), and `OBS` (Huawei Cloud OBS).
                     */
                    std::string m_srcService;
                    bool m_srcServiceHasBeenSet;

                    /**
                     * Data source bucket name. Specify at least one of the bucket name or address.
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * Data source bucket region
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * Data source bucket address. Specify at least one of the bucket name or address.
                     */
                    std::string m_bucketAddress;
                    bool m_bucketAddressHasBeenSet;

                    /**
                     * List address. This parameter is required if `MigrationType` is set to `1` (list).
                     */
                    std::string m_listAddress;
                    bool m_listAddressHasBeenSet;

                    /**
                     * Target file system name
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * Source bucket path, which defaults to `/`
                     */
                    std::string m_bucketPath;
                    bool m_bucketPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEMIGRATIONTASKREQUEST_H_
