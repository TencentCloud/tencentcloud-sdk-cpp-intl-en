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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATEDATAFLOWREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATEDATAFLOWREQUEST_H_

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
                * CreateDataFlow request structure.
                */
                class CreateDataFlowRequest : public AbstractModel
                {
                public:
                    CreateDataFlowRequest();
                    ~CreateDataFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>File system ID, which can be obtained through the API for querying file systems <a href="https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1">DescribeCfsFileSystems</a>.</p>
                     * @return FileSystemId <p>File system ID, which can be obtained through the API for querying file systems <a href="https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1">DescribeCfsFileSystems</a>.</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>File system ID, which can be obtained through the API for querying file systems <a href="https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1">DescribeCfsFileSystems</a>.</p>
                     * @param _fileSystemId <p>File system ID, which can be obtained through the API for querying file systems <a href="https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1">DescribeCfsFileSystems</a>.</p>
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
                     * 获取<p>Source data type. Valid values: S3_COS and S3_L5.</p>
                     * @return SourceStorageType <p>Source data type. Valid values: S3_COS and S3_L5.</p>
                     * 
                     */
                    std::string GetSourceStorageType() const;

                    /**
                     * 设置<p>Source data type. Valid values: S3_COS and S3_L5.</p>
                     * @param _sourceStorageType <p>Source data type. Valid values: S3_COS and S3_L5.</p>
                     * 
                     */
                    void SetSourceStorageType(const std::string& _sourceStorageType);

                    /**
                     * 判断参数 SourceStorageType 是否已赋值
                     * @return SourceStorageType 是否已赋值
                     * 
                     */
                    bool SourceStorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>Source storage address</p>
                     * @return SourceStorageAddress <p>Source storage address</p>
                     * 
                     */
                    std::string GetSourceStorageAddress() const;

                    /**
                     * 设置<p>Source storage address</p>
                     * @param _sourceStorageAddress <p>Source storage address</p>
                     * 
                     */
                    void SetSourceStorageAddress(const std::string& _sourceStorageAddress);

                    /**
                     * 判断参数 SourceStorageAddress 是否已赋值
                     * @return SourceStorageAddress 是否已赋值
                     * 
                     */
                    bool SourceStorageAddressHasBeenSet() const;

                    /**
                     * 获取<p>Source path</p>
                     * @return SourcePath <p>Source path</p>
                     * 
                     */
                    std::string GetSourcePath() const;

                    /**
                     * 设置<p>Source path</p>
                     * @param _sourcePath <p>Source path</p>
                     * 
                     */
                    void SetSourcePath(const std::string& _sourcePath);

                    /**
                     * 判断参数 SourcePath 是否已赋值
                     * @return SourcePath 是否已赋值
                     * 
                     */
                    bool SourcePathHasBeenSet() const;

                    /**
                     * 获取<p>Target path in the file system specified when setting data flow. It must start with /cfs/ and represents a logical path inside the file storage instance, not a local mount point path.<br>Example:</p><ul><li>If the CFS root directory / is mounted, and you need to map the source directory on object storage to test1/test2 under the mount path, the value of this parameter is /cfs/test1/test2.</li><li>If the CFS subdirectory /subdir is mounted, and you need to map the source directory on object storage to test1/test2 under the mount path, the value of this parameter is /cfs/subdir/test1/test2.</li></ul>
                     * @return TargetPath <p>Target path in the file system specified when setting data flow. It must start with /cfs/ and represents a logical path inside the file storage instance, not a local mount point path.<br>Example:</p><ul><li>If the CFS root directory / is mounted, and you need to map the source directory on object storage to test1/test2 under the mount path, the value of this parameter is /cfs/test1/test2.</li><li>If the CFS subdirectory /subdir is mounted, and you need to map the source directory on object storage to test1/test2 under the mount path, the value of this parameter is /cfs/subdir/test1/test2.</li></ul>
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置<p>Target path in the file system specified when setting data flow. It must start with /cfs/ and represents a logical path inside the file storage instance, not a local mount point path.<br>Example:</p><ul><li>If the CFS root directory / is mounted, and you need to map the source directory on object storage to test1/test2 under the mount path, the value of this parameter is /cfs/test1/test2.</li><li>If the CFS subdirectory /subdir is mounted, and you need to map the source directory on object storage to test1/test2 under the mount path, the value of this parameter is /cfs/subdir/test1/test2.</li></ul>
                     * @param _targetPath <p>Target path in the file system specified when setting data flow. It must start with /cfs/ and represents a logical path inside the file storage instance, not a local mount point path.<br>Example:</p><ul><li>If the CFS root directory / is mounted, and you need to map the source directory on object storage to test1/test2 under the mount path, the value of this parameter is /cfs/test1/test2.</li><li>If the CFS subdirectory /subdir is mounted, and you need to map the source directory on object storage to test1/test2 under the mount path, the value of this parameter is /cfs/subdir/test1/test2.</li></ul>
                     * 
                     */
                    void SetTargetPath(const std::string& _targetPath);

                    /**
                     * 判断参数 TargetPath 是否已赋值
                     * @return TargetPath 是否已赋值
                     * 
                     */
                    bool TargetPathHasBeenSet() const;

                    /**
                     * 获取<p>Secret ID</p>
                     * @return SecretId <p>Secret ID</p>
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置<p>Secret ID</p>
                     * @param _secretId <p>Secret ID</p>
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取<p>Secret key</p>
                     * @return SecretKey <p>Secret key</p>
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>Secret key</p>
                     * @param _secretKey <p>Secret key</p>
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>Data flow name. It supports up to 64 characters, including Chinese characters, digits, underscores (_), and hyphens (-).</p>
                     * @return DataFlowName <p>Data flow name. It supports up to 64 characters, including Chinese characters, digits, underscores (_), and hyphens (-).</p>
                     * 
                     */
                    std::string GetDataFlowName() const;

                    /**
                     * 设置<p>Data flow name. It supports up to 64 characters, including Chinese characters, digits, underscores (_), and hyphens (-).</p>
                     * @param _dataFlowName <p>Data flow name. It supports up to 64 characters, including Chinese characters, digits, underscores (_), and hyphens (-).</p>
                     * 
                     */
                    void SetDataFlowName(const std::string& _dataFlowName);

                    /**
                     * 判断参数 DataFlowName 是否已赋值
                     * @return DataFlowName 是否已赋值
                     * 
                     */
                    bool DataFlowNameHasBeenSet() const;

                    /**
                     * 获取<p>0: Automatic update disabled. 1: Automatic update enabled.</p>
                     * @return AutoRefresh <p>0: Automatic update disabled. 1: Automatic update enabled.</p>
                     * 
                     */
                    uint64_t GetAutoRefresh() const;

                    /**
                     * 设置<p>0: Automatic update disabled. 1: Automatic update enabled.</p>
                     * @param _autoRefresh <p>0: Automatic update disabled. 1: Automatic update enabled.</p>
                     * 
                     */
                    void SetAutoRefresh(const uint64_t& _autoRefresh);

                    /**
                     * 判断参数 AutoRefresh 是否已赋值
                     * @return AutoRefresh 是否已赋值
                     * 
                     */
                    bool AutoRefreshHasBeenSet() const;

                    /**
                     * 获取<p>Topic parameter used by KafkaConsumer for consumption</p>
                     * @return UserKafkaTopic <p>Topic parameter used by KafkaConsumer for consumption</p>
                     * 
                     */
                    std::string GetUserKafkaTopic() const;

                    /**
                     * 设置<p>Topic parameter used by KafkaConsumer for consumption</p>
                     * @param _userKafkaTopic <p>Topic parameter used by KafkaConsumer for consumption</p>
                     * 
                     */
                    void SetUserKafkaTopic(const std::string& _userKafkaTopic);

                    /**
                     * 判断参数 UserKafkaTopic 是否已赋值
                     * @return UserKafkaTopic 是否已赋值
                     * 
                     */
                    bool UserKafkaTopicHasBeenSet() const;

                    /**
                     * 获取<p>Service address. Example: kafkaconsumer-ap-beijing.cls.tencentyun.com:9095</p>
                     * @return ServerAddr <p>Service address. Example: kafkaconsumer-ap-beijing.cls.tencentyun.com:9095</p>
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置<p>Service address. Example: kafkaconsumer-ap-beijing.cls.tencentyun.com:9095</p>
                     * @param _serverAddr <p>Service address. Example: kafkaconsumer-ap-beijing.cls.tencentyun.com:9095</p>
                     * 
                     */
                    void SetServerAddr(const std::string& _serverAddr);

                    /**
                     * 判断参数 ServerAddr 是否已赋值
                     * @return ServerAddr 是否已赋值
                     * 
                     */
                    bool ServerAddrHasBeenSet() const;

                    /**
                     * 获取<p>Kafka consumer username. Example: name</p>
                     * @return UserName <p>Kafka consumer username. Example: name</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Kafka consumer username. Example: name</p>
                     * @param _userName <p>Kafka consumer username. Example: name</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>Kafka consumer password. Default value: ${SecretId}#${SecretKey}.</p>
                     * @return Password <p>Kafka consumer password. Default value: ${SecretId}#${SecretKey}.</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Kafka consumer password. Default value: ${SecretId}#${SecretKey}.</p>
                     * @param _password <p>Kafka consumer password. Default value: ${SecretId}#${SecretKey}.</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * <p>File system ID, which can be obtained through the API for querying file systems <a href="https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1">DescribeCfsFileSystems</a>.</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>Source data type. Valid values: S3_COS and S3_L5.</p>
                     */
                    std::string m_sourceStorageType;
                    bool m_sourceStorageTypeHasBeenSet;

                    /**
                     * <p>Source storage address</p>
                     */
                    std::string m_sourceStorageAddress;
                    bool m_sourceStorageAddressHasBeenSet;

                    /**
                     * <p>Source path</p>
                     */
                    std::string m_sourcePath;
                    bool m_sourcePathHasBeenSet;

                    /**
                     * <p>Target path in the file system specified when setting data flow. It must start with /cfs/ and represents a logical path inside the file storage instance, not a local mount point path.<br>Example:</p><ul><li>If the CFS root directory / is mounted, and you need to map the source directory on object storage to test1/test2 under the mount path, the value of this parameter is /cfs/test1/test2.</li><li>If the CFS subdirectory /subdir is mounted, and you need to map the source directory on object storage to test1/test2 under the mount path, the value of this parameter is /cfs/subdir/test1/test2.</li></ul>
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                    /**
                     * <p>Secret ID</p>
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * <p>Secret key</p>
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * <p>Data flow name. It supports up to 64 characters, including Chinese characters, digits, underscores (_), and hyphens (-).</p>
                     */
                    std::string m_dataFlowName;
                    bool m_dataFlowNameHasBeenSet;

                    /**
                     * <p>0: Automatic update disabled. 1: Automatic update enabled.</p>
                     */
                    uint64_t m_autoRefresh;
                    bool m_autoRefreshHasBeenSet;

                    /**
                     * <p>Topic parameter used by KafkaConsumer for consumption</p>
                     */
                    std::string m_userKafkaTopic;
                    bool m_userKafkaTopicHasBeenSet;

                    /**
                     * <p>Service address. Example: kafkaconsumer-ap-beijing.cls.tencentyun.com:9095</p>
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * <p>Kafka consumer username. Example: name</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Kafka consumer password. Default value: ${SecretId}#${SecretKey}.</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEDATAFLOWREQUEST_H_
