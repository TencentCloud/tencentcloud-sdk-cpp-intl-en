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
                     * 获取Migration method flags, default is 0. 0: bucket migration; 1: inventory migration.
                     * @return MigrationType Migration method flags, default is 0. 0: bucket migration; 1: inventory migration.
                     * 
                     */
                    uint64_t GetMigrationType() const;

                    /**
                     * 设置Migration method flags, default is 0. 0: bucket migration; 1: inventory migration.
                     * @param _migrationType Migration method flags, default is 0. 0: bucket migration; 1: inventory migration.
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
                     * 获取SecretId of the data source account.
                     * @return SrcSecretId SecretId of the data source account.
                     * 
                     */
                    std::string GetSrcSecretId() const;

                    /**
                     * 设置SecretId of the data source account.
                     * @param _srcSecretId SecretId of the data source account.
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
                     * 获取SecretKey of the data source account.
                     * @return SrcSecretKey SecretKey of the data source account.
                     * 
                     */
                    std::string GetSrcSecretKey() const;

                    /**
                     * 设置SecretKey of the data source account.
                     * @param _srcSecretKey SecretKey of the data source account.
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
                     * 获取File system instance ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
                     * @return FileSystemId File system instance ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system instance ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
                     * @param _fileSystemId File system instance ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
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
                     * 获取Data source service providers. COS: tencent cloud COS, OSS: alibaba cloud OSS, OBS: huawei cloud OBS.
                     * @return SrcService Data source service providers. COS: tencent cloud COS, OSS: alibaba cloud OSS, OBS: huawei cloud OBS.
                     * 
                     */
                    std::string GetSrcService() const;

                    /**
                     * 设置Data source service providers. COS: tencent cloud COS, OSS: alibaba cloud OSS, OBS: huawei cloud OBS.
                     * @param _srcService Data source service providers. COS: tencent cloud COS, OSS: alibaba cloud OSS, OBS: huawei cloud OBS.
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
                     * 获取Data source bucket name. specifies the bucket name for migration. either BucketName or BucketAddress is required for bucket migration. this parameter is not required for inventory migration.
                     * @return BucketName Data source bucket name. specifies the bucket name for migration. either BucketName or BucketAddress is required for bucket migration. this parameter is not required for inventory migration.
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置Data source bucket name. specifies the bucket name for migration. either BucketName or BucketAddress is required for bucket migration. this parameter is not required for inventory migration.
                     * @param _bucketName Data source bucket name. specifies the bucket name for migration. either BucketName or BucketAddress is required for bucket migration. this parameter is not required for inventory migration.
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
                     * 获取Source bucket address. specifies the bucket address of the data source. for bucket migration, either BucketName or BucketAddress is required. this parameter is not required for inventory migration.
                     * @return BucketAddress Source bucket address. specifies the bucket address of the data source. for bucket migration, either BucketName or BucketAddress is required. this parameter is not required for inventory migration.
                     * 
                     */
                    std::string GetBucketAddress() const;

                    /**
                     * 设置Source bucket address. specifies the bucket address of the data source. for bucket migration, either BucketName or BucketAddress is required. this parameter is not required for inventory migration.
                     * @param _bucketAddress Source bucket address. specifies the bucket address of the data source. for bucket migration, either BucketName or BucketAddress is required. this parameter is not required for inventory migration.
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
                     * 获取Source bucket path, defaults to /.
                     * @return BucketPath Source bucket path, defaults to /.
                     * 
                     */
                    std::string GetBucketPath() const;

                    /**
                     * 设置Source bucket path, defaults to /.
                     * @param _bucketPath Source bucket path, defaults to /.
                     * 
                     */
                    void SetBucketPath(const std::string& _bucketPath);

                    /**
                     * 判断参数 BucketPath 是否已赋值
                     * @return BucketPath 是否已赋值
                     * 
                     */
                    bool BucketPathHasBeenSet() const;

                    /**
                     * 获取Migration direction. valid values: 0 (cos migration to file system), 1 (file system migration to cos). default is 0.
                     * @return Direction Migration direction. valid values: 0 (cos migration to file system), 1 (file system migration to cos). default is 0.
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Migration direction. valid values: 0 (cos migration to file system), 1 (file system migration to cos). default is 0.
                     * @param _direction Migration direction. valid values: 0 (cos migration to file system), 1 (file system migration to cos). default is 0.
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * Migration task name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Migration method flags, default is 0. 0: bucket migration; 1: inventory migration.
                     */
                    uint64_t m_migrationType;
                    bool m_migrationTypeHasBeenSet;

                    /**
                     * Migration mode. Default value: `0` (full migration).
                     */
                    uint64_t m_migrationMode;
                    bool m_migrationModeHasBeenSet;

                    /**
                     * SecretId of the data source account.
                     */
                    std::string m_srcSecretId;
                    bool m_srcSecretIdHasBeenSet;

                    /**
                     * SecretKey of the data source account.
                     */
                    std::string m_srcSecretKey;
                    bool m_srcSecretKeyHasBeenSet;

                    /**
                     * File system instance ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
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
                     * Data source service providers. COS: tencent cloud COS, OSS: alibaba cloud OSS, OBS: huawei cloud OBS.
                     */
                    std::string m_srcService;
                    bool m_srcServiceHasBeenSet;

                    /**
                     * Data source bucket name. specifies the bucket name for migration. either BucketName or BucketAddress is required for bucket migration. this parameter is not required for inventory migration.
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * Data source bucket region
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * Source bucket address. specifies the bucket address of the data source. for bucket migration, either BucketName or BucketAddress is required. this parameter is not required for inventory migration.
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
                     * Source bucket path, defaults to /.
                     */
                    std::string m_bucketPath;
                    bool m_bucketPathHasBeenSet;

                    /**
                     * Migration direction. valid values: 0 (cos migration to file system), 1 (file system migration to cos). default is 0.
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEMIGRATIONTASKREQUEST_H_
