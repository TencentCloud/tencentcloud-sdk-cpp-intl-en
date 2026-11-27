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
                     * 获取<p>Migration task name.</p>
                     * @return TaskName <p>Migration task name.</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>Migration task name.</p>
                     * @param _taskName <p>Migration task name.</p>
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
                     * 获取<p>Migration mode flag. Default value: 0. 0: Bucket migration; 1: Inventory migration.</p>
                     * @return MigrationType <p>Migration mode flag. Default value: 0. 0: Bucket migration; 1: Inventory migration.</p>
                     * 
                     */
                    uint64_t GetMigrationType() const;

                    /**
                     * 设置<p>Migration mode flag. Default value: 0. 0: Bucket migration; 1: Inventory migration.</p>
                     * @param _migrationType <p>Migration mode flag. Default value: 0. 0: Bucket migration; 1: Inventory migration.</p>
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
                     * 获取<p>Migration mode. Default value: 0. 0: Full migration.</p>
                     * @return MigrationMode <p>Migration mode. Default value: 0. 0: Full migration.</p>
                     * 
                     */
                    uint64_t GetMigrationMode() const;

                    /**
                     * 设置<p>Migration mode. Default value: 0. 0: Full migration.</p>
                     * @param _migrationMode <p>Migration mode. Default value: 0. 0: Full migration.</p>
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
                     * 获取<p>SecretId of the data source account.</p>
                     * @return SrcSecretId <p>SecretId of the data source account.</p>
                     * 
                     */
                    std::string GetSrcSecretId() const;

                    /**
                     * 设置<p>SecretId of the data source account.</p>
                     * @param _srcSecretId <p>SecretId of the data source account.</p>
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
                     * 获取<p>SecretKey of the data source account.</p>
                     * @return SrcSecretKey <p>SecretKey of the data source account.</p>
                     * 
                     */
                    std::string GetSrcSecretKey() const;

                    /**
                     * 设置<p>SecretKey of the data source account.</p>
                     * @param _srcSecretKey <p>SecretKey of the data source account.</p>
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
                     * 获取<p>File system instance ID, which can be obtained through <a href="https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1">DescribeCfsFileSystems</a>.</p>
                     * @return FileSystemId <p>File system instance ID, which can be obtained through <a href="https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1">DescribeCfsFileSystems</a>.</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>File system instance ID, which can be obtained through <a href="https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1">DescribeCfsFileSystems</a>.</p>
                     * @param _fileSystemId <p>File system instance ID, which can be obtained through <a href="https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1">DescribeCfsFileSystems</a>.</p>
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
                     * 获取<p>Directory path in the file system. It does not involve the actual mounted subdirectory or root directory, and does not need to be prefixed with /cfs/.</p>
                     * @return FsPath <p>Directory path in the file system. It does not involve the actual mounted subdirectory or root directory, and does not need to be prefixed with /cfs/.</p>
                     * 
                     */
                    std::string GetFsPath() const;

                    /**
                     * 设置<p>Directory path in the file system. It does not involve the actual mounted subdirectory or root directory, and does not need to be prefixed with /cfs/.</p>
                     * @param _fsPath <p>Directory path in the file system. It does not involve the actual mounted subdirectory or root directory, and does not need to be prefixed with /cfs/.</p>
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
                     * 获取<p>Overwrite policy for files with the same name during migration. Default value: 0. 0: The file with the latest modification time takes precedence; 1: Full overwrite; 2: No overwrite.</p>
                     * @return CoverType <p>Overwrite policy for files with the same name during migration. Default value: 0. 0: The file with the latest modification time takes precedence; 1: Full overwrite; 2: No overwrite.</p>
                     * 
                     */
                    uint64_t GetCoverType() const;

                    /**
                     * 设置<p>Overwrite policy for files with the same name during migration. Default value: 0. 0: The file with the latest modification time takes precedence; 1: Full overwrite; 2: No overwrite.</p>
                     * @param _coverType <p>Overwrite policy for files with the same name during migration. Default value: 0. 0: The file with the latest modification time takes precedence; 1: Full overwrite; 2: No overwrite.</p>
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
                     * 获取<p>Data source service provider.</p><p>Valid values:</p><ul><li>COS: Tencent Cloud COS</li><li>OSS: Alibaba Cloud OSS</li><li>OBS: Huawei Cloud OBS</li><li>BOS: Baidu Cloud BOS</li><li>TOS: Volcano Engine TOS</li></ul>
                     * @return SrcService <p>Data source service provider.</p><p>Valid values:</p><ul><li>COS: Tencent Cloud COS</li><li>OSS: Alibaba Cloud OSS</li><li>OBS: Huawei Cloud OBS</li><li>BOS: Baidu Cloud BOS</li><li>TOS: Volcano Engine TOS</li></ul>
                     * 
                     */
                    std::string GetSrcService() const;

                    /**
                     * 设置<p>Data source service provider.</p><p>Valid values:</p><ul><li>COS: Tencent Cloud COS</li><li>OSS: Alibaba Cloud OSS</li><li>OBS: Huawei Cloud OBS</li><li>BOS: Baidu Cloud BOS</li><li>TOS: Volcano Engine TOS</li></ul>
                     * @param _srcService <p>Data source service provider.</p><p>Valid values:</p><ul><li>COS: Tencent Cloud COS</li><li>OSS: Alibaba Cloud OSS</li><li>OBS: Huawei Cloud OBS</li><li>BOS: Baidu Cloud BOS</li><li>TOS: Volcano Engine TOS</li></ul>
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
                     * 获取<p>Name of the data source bucket. For bucket migration, either BucketName or BucketAddress is required. For inventory migration, this parameter is not required.</p>
                     * @return BucketName <p>Name of the data source bucket. For bucket migration, either BucketName or BucketAddress is required. For inventory migration, this parameter is not required.</p>
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>Name of the data source bucket. For bucket migration, either BucketName or BucketAddress is required. For inventory migration, this parameter is not required.</p>
                     * @param _bucketName <p>Name of the data source bucket. For bucket migration, either BucketName or BucketAddress is required. For inventory migration, this parameter is not required.</p>
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
                     * 获取<p>Region of the data source bucket.</p>
                     * @return BucketRegion <p>Region of the data source bucket.</p>
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置<p>Region of the data source bucket.</p>
                     * @param _bucketRegion <p>Region of the data source bucket.</p>
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
                     * 获取<p>Address of the data source bucket. For bucket migration, either BucketName or BucketAddress is required. For inventory migration, this parameter is not required.</p>
                     * @return BucketAddress <p>Address of the data source bucket. For bucket migration, either BucketName or BucketAddress is required. For inventory migration, this parameter is not required.</p>
                     * 
                     */
                    std::string GetBucketAddress() const;

                    /**
                     * 设置<p>Address of the data source bucket. For bucket migration, either BucketName or BucketAddress is required. For inventory migration, this parameter is not required.</p>
                     * @param _bucketAddress <p>Address of the data source bucket. For bucket migration, either BucketName or BucketAddress is required. For inventory migration, this parameter is not required.</p>
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
                     * 获取<p>Inventory address. Required when the migration mode is inventory migration.</p>
                     * @return ListAddress <p>Inventory address. Required when the migration mode is inventory migration.</p>
                     * 
                     */
                    std::string GetListAddress() const;

                    /**
                     * 设置<p>Inventory address. Required when the migration mode is inventory migration.</p>
                     * @param _listAddress <p>Inventory address. Required when the migration mode is inventory migration.</p>
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
                     * 获取<p>Name of the destination file system.</p>
                     * @return FsName <p>Name of the destination file system.</p>
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置<p>Name of the destination file system.</p>
                     * @param _fsName <p>Name of the destination file system.</p>
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
                     * 获取<p>Source bucket path. Default value: /.</p>
                     * @return BucketPath <p>Source bucket path. Default value: /.</p>
                     * 
                     */
                    std::string GetBucketPath() const;

                    /**
                     * 设置<p>Source bucket path. Default value: /.</p>
                     * @param _bucketPath <p>Source bucket path. Default value: /.</p>
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
                     * 获取<p>Migration direction. 0: Migrate from object storage to file system. 1: Migrate from file system to object storage. Default value: 0.</p>
                     * @return Direction <p>Migration direction. 0: Migrate from object storage to file system. 1: Migrate from file system to object storage. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置<p>Migration direction. 0: Migrate from object storage to file system. 1: Migrate from file system to object storage. Default value: 0.</p>
                     * @param _direction <p>Migration direction. 0: Migrate from object storage to file system. 1: Migrate from file system to object storage. Default value: 0.</p>
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
                     * <p>Migration task name.</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>Migration mode flag. Default value: 0. 0: Bucket migration; 1: Inventory migration.</p>
                     */
                    uint64_t m_migrationType;
                    bool m_migrationTypeHasBeenSet;

                    /**
                     * <p>Migration mode. Default value: 0. 0: Full migration.</p>
                     */
                    uint64_t m_migrationMode;
                    bool m_migrationModeHasBeenSet;

                    /**
                     * <p>SecretId of the data source account.</p>
                     */
                    std::string m_srcSecretId;
                    bool m_srcSecretIdHasBeenSet;

                    /**
                     * <p>SecretKey of the data source account.</p>
                     */
                    std::string m_srcSecretKey;
                    bool m_srcSecretKeyHasBeenSet;

                    /**
                     * <p>File system instance ID, which can be obtained through <a href="https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1">DescribeCfsFileSystems</a>.</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>Directory path in the file system. It does not involve the actual mounted subdirectory or root directory, and does not need to be prefixed with /cfs/.</p>
                     */
                    std::string m_fsPath;
                    bool m_fsPathHasBeenSet;

                    /**
                     * <p>Overwrite policy for files with the same name during migration. Default value: 0. 0: The file with the latest modification time takes precedence; 1: Full overwrite; 2: No overwrite.</p>
                     */
                    uint64_t m_coverType;
                    bool m_coverTypeHasBeenSet;

                    /**
                     * <p>Data source service provider.</p><p>Valid values:</p><ul><li>COS: Tencent Cloud COS</li><li>OSS: Alibaba Cloud OSS</li><li>OBS: Huawei Cloud OBS</li><li>BOS: Baidu Cloud BOS</li><li>TOS: Volcano Engine TOS</li></ul>
                     */
                    std::string m_srcService;
                    bool m_srcServiceHasBeenSet;

                    /**
                     * <p>Name of the data source bucket. For bucket migration, either BucketName or BucketAddress is required. For inventory migration, this parameter is not required.</p>
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * <p>Region of the data source bucket.</p>
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * <p>Address of the data source bucket. For bucket migration, either BucketName or BucketAddress is required. For inventory migration, this parameter is not required.</p>
                     */
                    std::string m_bucketAddress;
                    bool m_bucketAddressHasBeenSet;

                    /**
                     * <p>Inventory address. Required when the migration mode is inventory migration.</p>
                     */
                    std::string m_listAddress;
                    bool m_listAddressHasBeenSet;

                    /**
                     * <p>Name of the destination file system.</p>
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * <p>Source bucket path. Default value: /.</p>
                     */
                    std::string m_bucketPath;
                    bool m_bucketPathHasBeenSet;

                    /**
                     * <p>Migration direction. 0: Migrate from object storage to file system. 1: Migrate from file system to object storage. Default value: 0.</p>
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEMIGRATIONTASKREQUEST_H_
