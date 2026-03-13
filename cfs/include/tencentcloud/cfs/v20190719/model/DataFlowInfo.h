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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DATAFLOWINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DATAFLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Data flow information.
                */
                class DataFlowInfo : public AbstractModel
                {
                public:
                    DataFlowInfo();
                    ~DataFlowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data flow manage ID.
                     * @return DataFlowId Data flow manage ID.
                     * 
                     */
                    std::string GetDataFlowId() const;

                    /**
                     * 设置Data flow manage ID.
                     * @param _dataFlowId Data flow manage ID.
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
                     * 获取Data flow name.
                     * @return DataFlowName Data flow name.
                     * 
                     */
                    std::string GetDataFlowName() const;

                    /**
                     * 设置Data flow name.
                     * @param _dataFlowName Data flow name.
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
                     * 获取Source data type.
                     * @return SourceStorageType Source data type.
                     * 
                     */
                    std::string GetSourceStorageType() const;

                    /**
                     * 设置Source data type.
                     * @param _sourceStorageType Source data type.
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
                     * 获取Directory path.
                     * @return TargetPath Directory path.
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置Directory path.
                     * @param _targetPath Directory path.
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
                     * 获取available: effective.
pending: configuring.
unavailable.
Deleting: deleting.
                     * @return Status available: effective.
pending: configuring.
unavailable.
Deleting: deleting.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置available: effective.
pending: configuring.
unavailable.
Deleting: deleting.
                     * @param _status available: effective.
pending: configuring.
unavailable.
Deleting: deleting.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreationTime Creation time.
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置Creation time.
                     * @param _creationTime Creation time.
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取File system ID
                     * @return FileSystemId File system ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID
                     * @param _fileSystemId File system ID
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
                     * 获取0: disable auto-update.

1: enable auto-update.
                     * @return AutoRefresh 0: disable auto-update.

1: enable auto-update.
                     * 
                     */
                    uint64_t GetAutoRefresh() const;

                    /**
                     * 设置0: disable auto-update.

1: enable auto-update.
                     * @param _autoRefresh 0: disable auto-update.

1: enable auto-update.
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
                     * 获取Kafka consuming user name.
                     * @return UserName Kafka consuming user name.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Kafka consuming user name.
                     * @param _userName Kafka consuming user name.
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
                     * 获取Auto refresh status, available: in effect.
pending: configuring.
unavailable.
                     * @return AutoRefreshStatus Auto refresh status, available: in effect.
pending: configuring.
unavailable.
                     * 
                     */
                    std::string GetAutoRefreshStatus() const;

                    /**
                     * 设置Auto refresh status, available: in effect.
pending: configuring.
unavailable.
                     * @param _autoRefreshStatus Auto refresh status, available: in effect.
pending: configuring.
unavailable.
                     * 
                     */
                    void SetAutoRefreshStatus(const std::string& _autoRefreshStatus);

                    /**
                     * 判断参数 AutoRefreshStatus 是否已赋值
                     * @return AutoRefreshStatus 是否已赋值
                     * 
                     */
                    bool AutoRefreshStatusHasBeenSet() const;

                    /**
                     * 获取Automatically refresh start time.
                     * @return AutoRefreshTime Automatically refresh start time.
                     * 
                     */
                    std::string GetAutoRefreshTime() const;

                    /**
                     * 设置Automatically refresh start time.
                     * @param _autoRefreshTime Automatically refresh start time.
                     * 
                     */
                    void SetAutoRefreshTime(const std::string& _autoRefreshTime);

                    /**
                     * 判断参数 AutoRefreshTime 是否已赋值
                     * @return AutoRefreshTime 是否已赋值
                     * 
                     */
                    bool AutoRefreshTimeHasBeenSet() const;

                private:

                    /**
                     * Data flow manage ID.
                     */
                    std::string m_dataFlowId;
                    bool m_dataFlowIdHasBeenSet;

                    /**
                     * Data flow name.
                     */
                    std::string m_dataFlowName;
                    bool m_dataFlowNameHasBeenSet;

                    /**
                     * Source data type.
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
                     * Directory path.
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                    /**
                     * available: effective.
pending: configuring.
unavailable.
Deleting: deleting.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * File system ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 0: disable auto-update.

1: enable auto-update.
                     */
                    uint64_t m_autoRefresh;
                    bool m_autoRefreshHasBeenSet;

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
                     * Kafka consuming user name.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Auto refresh status, available: in effect.
pending: configuring.
unavailable.
                     */
                    std::string m_autoRefreshStatus;
                    bool m_autoRefreshStatusHasBeenSet;

                    /**
                     * Automatically refresh start time.
                     */
                    std::string m_autoRefreshTime;
                    bool m_autoRefreshTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DATAFLOWINFO_H_
