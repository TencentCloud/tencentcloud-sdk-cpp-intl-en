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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_SMOOTHMIGRATIONTASKITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_SMOOTHMIGRATIONTASKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * Hitless migration task.
                */
                class SmoothMigrationTaskItem : public AbstractModel
                {
                public:
                    SmoothMigrationTaskItem();
                    ~SmoothMigrationTaskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task name.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskName Task name.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskName Task name.	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Source cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceClusterName Source cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceClusterName() const;

                    /**
                     * 设置Source cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceClusterName Source cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceClusterName(const std::string& _sourceClusterName);

                    /**
                     * 判断参数 SourceClusterName 是否已赋值
                     * @return SourceClusterName 是否已赋值
                     * 
                     */
                    bool SourceClusterNameHasBeenSet() const;

                    /**
                     * 获取Destination cluster instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Destination cluster instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Destination cluster instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Destination cluster instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Specifies the network connection type. 
PUBLIC network. 
Specifies the VPC virtual private cloud. 
OTHER.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConnectionType Specifies the network connection type. 
PUBLIC network. 
Specifies the VPC virtual private cloud. 
OTHER.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConnectionType() const;

                    /**
                     * 设置Specifies the network connection type. 
PUBLIC network. 
Specifies the VPC virtual private cloud. 
OTHER.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _connectionType Specifies the network connection type. 
PUBLIC network. 
Specifies the VPC virtual private cloud. 
OTHER.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConnectionType(const std::string& _connectionType);

                    /**
                     * 判断参数 ConnectionType 是否已赋值
                     * @return ConnectionType 是否已赋值
                     * 
                     */
                    bool ConnectionTypeHasBeenSet() const;

                    /**
                     * 获取Source cluster NameServer address.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceNameServer Source cluster NameServer address.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceNameServer() const;

                    /**
                     * 设置Source cluster NameServer address.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceNameServer Source cluster NameServer address.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceNameServer(const std::string& _sourceNameServer);

                    /**
                     * 判断参数 SourceNameServer 是否已赋值
                     * @return SourceNameServer 是否已赋值
                     * 
                     */
                    bool SourceNameServerHasBeenSet() const;

                    /**
                     * 获取Task status.
Migration Configuration. specifies the migration Configuration.
SourceConnecting specifies connecting to source cluster.
MetaDataImport specifies metadata import.
EndpointSetup specifies the access point switchover.
Service migration is in progress.
Completed.
Cancelled: canceled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskStatus Task status.
Migration Configuration. specifies the migration Configuration.
SourceConnecting specifies connecting to source cluster.
MetaDataImport specifies metadata import.
EndpointSetup specifies the access point switchover.
Service migration is in progress.
Completed.
Cancelled: canceled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置Task status.
Migration Configuration. specifies the migration Configuration.
SourceConnecting specifies connecting to source cluster.
MetaDataImport specifies metadata import.
EndpointSetup specifies the access point switchover.
Service migration is in progress.
Completed.
Cancelled: canceled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskStatus Task status.
Migration Configuration. specifies the migration Configuration.
SourceConnecting specifies connecting to source cluster.
MetaDataImport specifies metadata import.
EndpointSetup specifies the access point switchover.
Service migration is in progress.
Completed.
Cancelled: canceled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Specifies the target cluster instance version.
4 indicates version 4.x.
5 indicates version 5.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceVersion Specifies the target cluster instance version.
4 indicates version 4.x.
5 indicates version 5.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置Specifies the target cluster instance version.
4 indicates version 4.x.
5 indicates version 5.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceVersion Specifies the target cluster instance version.
4 indicates version 4.x.
5 indicates version 5.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceVersion(const std::string& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                private:

                    /**
                     * Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task name.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Source cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceClusterName;
                    bool m_sourceClusterNameHasBeenSet;

                    /**
                     * Destination cluster instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the network connection type. 
PUBLIC network. 
Specifies the VPC virtual private cloud. 
OTHER.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_connectionType;
                    bool m_connectionTypeHasBeenSet;

                    /**
                     * Source cluster NameServer address.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceNameServer;
                    bool m_sourceNameServerHasBeenSet;

                    /**
                     * Task status.
Migration Configuration. specifies the migration Configuration.
SourceConnecting specifies connecting to source cluster.
MetaDataImport specifies metadata import.
EndpointSetup specifies the access point switchover.
Service migration is in progress.
Completed.
Cancelled: canceled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Specifies the target cluster instance version.
4 indicates version 4.x.
5 indicates version 5.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_SMOOTHMIGRATIONTASKITEM_H_
