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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYDATAFLOWREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYDATAFLOWREQUEST_H_

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
                * ModifyDataFlow request structure.
                */
                class ModifyDataFlowRequest : public AbstractModel
                {
                public:
                    ModifyDataFlowRequest();
                    ~ModifyDataFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data flow manage ID, obtained through the api for querying data flow.
                     * @return DataFlowId Data flow manage ID, obtained through the api for querying data flow.
                     * 
                     */
                    std::string GetDataFlowId() const;

                    /**
                     * 设置Data flow manage ID, obtained through the api for querying data flow.
                     * @param _dataFlowId Data flow manage ID, obtained through the api for querying data flow.
                     * 
                     */
                    void SetDataFlowId(const std::string& _dataFlowId);

                    /**
                     * 判断参数 DataFlowId 是否已赋值
                     * @return DataFlowId 是否已赋值
                     * 
                     */
                    bool DataFlowIdHasBeenSet() const;

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
                     * 获取Service address.
                     * @return ServerAddr Service address.
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置Service address.
                     * @param _serverAddr Service address.
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
                     * 获取name
                     * @return UserName name
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置name
                     * @param _userName name
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
                     * 获取Kafka consuming user password.
                     * @return Password Kafka consuming user password.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Kafka consuming user password.
                     * @param _password Kafka consuming user password.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Metadata incremental update switch; 1 enables, 0 disables.
                     * @return AutoRefresh Metadata incremental update switch; 1 enables, 0 disables.
                     * 
                     */
                    uint64_t GetAutoRefresh() const;

                    /**
                     * 设置Metadata incremental update switch; 1 enables, 0 disables.
                     * @param _autoRefresh Metadata incremental update switch; 1 enables, 0 disables.
                     * 
                     */
                    void SetAutoRefresh(const uint64_t& _autoRefresh);

                    /**
                     * 判断参数 AutoRefresh 是否已赋值
                     * @return AutoRefresh 是否已赋值
                     * 
                     */
                    bool AutoRefreshHasBeenSet() const;

                private:

                    /**
                     * Data flow manage ID, obtained through the api for querying data flow.
                     */
                    std::string m_dataFlowId;
                    bool m_dataFlowIdHasBeenSet;

                    /**
                     * File system ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Data flow name, supports no more than 64 characters in length, supports chinese, numbers, _, and -.
                     */
                    std::string m_dataFlowName;
                    bool m_dataFlowNameHasBeenSet;

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
                     * Topic Parameter used by KafkaConsumer during consumption
                     */
                    std::string m_userKafkaTopic;
                    bool m_userKafkaTopicHasBeenSet;

                    /**
                     * Service address.
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * name
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Kafka consuming user password.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Metadata incremental update switch; 1 enables, 0 disables.
                     */
                    uint64_t m_autoRefresh;
                    bool m_autoRefreshHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYDATAFLOWREQUEST_H_
