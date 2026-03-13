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
                     * 获取File system ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
                     * @return FileSystemId File system ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
                     * @param _fileSystemId File system ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
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
                     * 获取Source data type; includes S3_COS, S3_L5.
                     * @return SourceStorageType Source data type; includes S3_COS, S3_L5.
                     * 
                     */
                    std::string GetSourceStorageType() const;

                    /**
                     * 设置Source data type; includes S3_COS, S3_L5.
                     * @param _sourceStorageType Source data type; includes S3_COS, S3_L5.
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
                     * 获取Source storage address.
                     * @return SourceStorageAddress Source storage address.
                     * 
                     */
                    std::string GetSourceStorageAddress() const;

                    /**
                     * 设置Source storage address.
                     * @param _sourceStorageAddress Source storage address.
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
                     * 获取Source path.
                     * @return SourcePath Source path.
                     * 
                     */
                    std::string GetSourcePath() const;

                    /**
                     * 设置Source path.
                     * @param _sourcePath Source path.
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
                     * 获取Target path in the file system.
                     * @return TargetPath Target path in the file system.
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置Target path in the file system.
                     * @param _targetPath Target path in the file system.
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
                     * 获取Key ID.
                     * @return SecretId Key ID.
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置Key ID.
                     * @param _secretId Key ID.
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
                     * 获取key.
                     * @return SecretKey key.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置key.
                     * @param _secretKey key.
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
                     * 获取Data flow name, supports no more than 64 characters in length, supports chinese, numbers, _, and -.
                     * @return DataFlowName Data flow name, supports no more than 64 characters in length, supports chinese, numbers, _, and -.
                     * 
                     */
                    std::string GetDataFlowName() const;

                    /**
                     * 设置Data flow name, supports no more than 64 characters in length, supports chinese, numbers, _, and -.
                     * @param _dataFlowName Data flow name, supports no more than 64 characters in length, supports chinese, numbers, _, and -.
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
                     * 获取0: disable auto-update  1: enable auto-update.
                     * @return AutoRefresh 0: disable auto-update  1: enable auto-update.
                     * 
                     */
                    uint64_t GetAutoRefresh() const;

                    /**
                     * 设置0: disable auto-update  1: enable auto-update.
                     * @param _autoRefresh 0: disable auto-update  1: enable auto-update.
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
                     * 获取Topic Parameter used by KafkaConsumer during consumption
                     * @return UserKafkaTopic Topic Parameter used by KafkaConsumer during consumption
                     * 
                     */
                    std::string GetUserKafkaTopic() const;

                    /**
                     * 设置Topic Parameter used by KafkaConsumer during consumption
                     * @param _userKafkaTopic Topic Parameter used by KafkaConsumer during consumption
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
                     * 获取	Service address example value: kafkaconsumer-ap-beijing.cls.tencentyun.com:9095.
                     * @return ServerAddr 	Service address example value: kafkaconsumer-ap-beijing.cls.tencentyun.com:9095.
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置	Service address example value: kafkaconsumer-ap-beijing.cls.tencentyun.com:9095.
                     * @param _serverAddr 	Service address example value: kafkaconsumer-ap-beijing.cls.tencentyun.com:9095.
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
                     * 获取Kafka consuming user name. example value: name.
                     * @return UserName Kafka consuming user name. example value: name.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Kafka consuming user name. example value: name.
                     * @param _userName Kafka consuming user name. example value: name.
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
                     * 获取Kafka consuming user password. default ${SecretId}#${SecretKey}.
                     * @return Password Kafka consuming user password. default ${SecretId}#${SecretKey}.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Kafka consuming user password. default ${SecretId}#${SecretKey}.
                     * @param _password Kafka consuming user password. default ${SecretId}#${SecretKey}.
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
                     * File system ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Source data type; includes S3_COS, S3_L5.
                     */
                    std::string m_sourceStorageType;
                    bool m_sourceStorageTypeHasBeenSet;

                    /**
                     * Source storage address.
                     */
                    std::string m_sourceStorageAddress;
                    bool m_sourceStorageAddressHasBeenSet;

                    /**
                     * Source path.
                     */
                    std::string m_sourcePath;
                    bool m_sourcePathHasBeenSet;

                    /**
                     * Target path in the file system.
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                    /**
                     * Key ID.
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * key.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Data flow name, supports no more than 64 characters in length, supports chinese, numbers, _, and -.
                     */
                    std::string m_dataFlowName;
                    bool m_dataFlowNameHasBeenSet;

                    /**
                     * 0: disable auto-update  1: enable auto-update.
                     */
                    uint64_t m_autoRefresh;
                    bool m_autoRefreshHasBeenSet;

                    /**
                     * Topic Parameter used by KafkaConsumer during consumption
                     */
                    std::string m_userKafkaTopic;
                    bool m_userKafkaTopicHasBeenSet;

                    /**
                     * 	Service address example value: kafkaconsumer-ap-beijing.cls.tencentyun.com:9095.
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * Kafka consuming user name. example value: name.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Kafka consuming user password. default ${SecretId}#${SecretKey}.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEDATAFLOWREQUEST_H_
