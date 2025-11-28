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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MIGRATINGTOPIC_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MIGRATINGTOPIC_H_

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
                * Migrating topic.
                */
                class MigratingTopic : public AbstractModel
                {
                public:
                    MigratingTopic();
                    ~MigratingTopic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic name
                     * @return TopicName Topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name
                     * @param _topicName Topic name
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Migration status. 
S_RW_D_NA source cluster read/write.
S_RW_D_R specifies read and write permissions for the source cluster and read permissions for the target cluster.
S_RW_D_RW specifies read-write for the source cluster and read-write for the target cluster.
SRDRW specifies source cluster read and destination cluster read/write.
S_NA_D_RW specifies the read-write target cluster.
                     * @return MigrationStatus Migration status. 
S_RW_D_NA source cluster read/write.
S_RW_D_R specifies read and write permissions for the source cluster and read permissions for the target cluster.
S_RW_D_RW specifies read-write for the source cluster and read-write for the target cluster.
SRDRW specifies source cluster read and destination cluster read/write.
S_NA_D_RW specifies the read-write target cluster.
                     * 
                     */
                    std::string GetMigrationStatus() const;

                    /**
                     * 设置Migration status. 
S_RW_D_NA source cluster read/write.
S_RW_D_R specifies read and write permissions for the source cluster and read permissions for the target cluster.
S_RW_D_RW specifies read-write for the source cluster and read-write for the target cluster.
SRDRW specifies source cluster read and destination cluster read/write.
S_NA_D_RW specifies the read-write target cluster.
                     * @param _migrationStatus Migration status. 
S_RW_D_NA source cluster read/write.
S_RW_D_R specifies read and write permissions for the source cluster and read permissions for the target cluster.
S_RW_D_RW specifies read-write for the source cluster and read-write for the target cluster.
SRDRW specifies source cluster read and destination cluster read/write.
S_NA_D_RW specifies the read-write target cluster.
                     * 
                     */
                    void SetMigrationStatus(const std::string& _migrationStatus);

                    /**
                     * 判断参数 MigrationStatus 是否已赋值
                     * @return MigrationStatus 是否已赋值
                     * 
                     */
                    bool MigrationStatusHasBeenSet() const;

                    /**
                     * 获取Specifies whether the health check is completed.	
                     * @return HealthCheckPassed Specifies whether the health check is completed.	
                     * 
                     */
                    bool GetHealthCheckPassed() const;

                    /**
                     * 设置Specifies whether the health check is completed.	
                     * @param _healthCheckPassed Specifies whether the health check is completed.	
                     * 
                     */
                    void SetHealthCheckPassed(const bool& _healthCheckPassed);

                    /**
                     * 判断参数 HealthCheckPassed 是否已赋值
                     * @return HealthCheckPassed 是否已赋值
                     * 
                     */
                    bool HealthCheckPassedHasBeenSet() const;

                    /**
                     * 获取Error information returned by the last health check is valid only when HealthCheckPassed is false. NotChecked: check not executed. Unknown: Unknown error. TopicNotImported: topic not imported. TopicNotExistsInSourceCluster: topic does not exist in the source cluster. TopicNotExistsInTargetCluster: topic does not exist in the target cluster. ConsumerConnectedOnTarget: consumer connections exist on the target cluster. SourceTopicHasNewMessagesIn5Minutes: new messages were written to the source cluster topic in the last 5 Minutes. TargetTopicHasNewMessagesIn5Minutes: new messages were written to the target cluster topic in the last 5 Minutes. SourceTopicHasNoMessagesIn5Minutes: no new messages were written to the source cluster in the last 5 Minutes. TargetTopicHasNoMessagesIn5Minutes: no new messages were written to the target cluster in the last 5 Minutes. ConsumerGroupCountNotMatch: inconsistent number of subscription groups. SourceTopicHasUnconsumedMessages: unconsumed messages exist in the source cluster topic.
                     * @return HealthCheckError Error information returned by the last health check is valid only when HealthCheckPassed is false. NotChecked: check not executed. Unknown: Unknown error. TopicNotImported: topic not imported. TopicNotExistsInSourceCluster: topic does not exist in the source cluster. TopicNotExistsInTargetCluster: topic does not exist in the target cluster. ConsumerConnectedOnTarget: consumer connections exist on the target cluster. SourceTopicHasNewMessagesIn5Minutes: new messages were written to the source cluster topic in the last 5 Minutes. TargetTopicHasNewMessagesIn5Minutes: new messages were written to the target cluster topic in the last 5 Minutes. SourceTopicHasNoMessagesIn5Minutes: no new messages were written to the source cluster in the last 5 Minutes. TargetTopicHasNoMessagesIn5Minutes: no new messages were written to the target cluster in the last 5 Minutes. ConsumerGroupCountNotMatch: inconsistent number of subscription groups. SourceTopicHasUnconsumedMessages: unconsumed messages exist in the source cluster topic.
                     * 
                     */
                    std::string GetHealthCheckError() const;

                    /**
                     * 设置Error information returned by the last health check is valid only when HealthCheckPassed is false. NotChecked: check not executed. Unknown: Unknown error. TopicNotImported: topic not imported. TopicNotExistsInSourceCluster: topic does not exist in the source cluster. TopicNotExistsInTargetCluster: topic does not exist in the target cluster. ConsumerConnectedOnTarget: consumer connections exist on the target cluster. SourceTopicHasNewMessagesIn5Minutes: new messages were written to the source cluster topic in the last 5 Minutes. TargetTopicHasNewMessagesIn5Minutes: new messages were written to the target cluster topic in the last 5 Minutes. SourceTopicHasNoMessagesIn5Minutes: no new messages were written to the source cluster in the last 5 Minutes. TargetTopicHasNoMessagesIn5Minutes: no new messages were written to the target cluster in the last 5 Minutes. ConsumerGroupCountNotMatch: inconsistent number of subscription groups. SourceTopicHasUnconsumedMessages: unconsumed messages exist in the source cluster topic.
                     * @param _healthCheckError Error information returned by the last health check is valid only when HealthCheckPassed is false. NotChecked: check not executed. Unknown: Unknown error. TopicNotImported: topic not imported. TopicNotExistsInSourceCluster: topic does not exist in the source cluster. TopicNotExistsInTargetCluster: topic does not exist in the target cluster. ConsumerConnectedOnTarget: consumer connections exist on the target cluster. SourceTopicHasNewMessagesIn5Minutes: new messages were written to the source cluster topic in the last 5 Minutes. TargetTopicHasNewMessagesIn5Minutes: new messages were written to the target cluster topic in the last 5 Minutes. SourceTopicHasNoMessagesIn5Minutes: no new messages were written to the source cluster in the last 5 Minutes. TargetTopicHasNoMessagesIn5Minutes: no new messages were written to the target cluster in the last 5 Minutes. ConsumerGroupCountNotMatch: inconsistent number of subscription groups. SourceTopicHasUnconsumedMessages: unconsumed messages exist in the source cluster topic.
                     * 
                     */
                    void SetHealthCheckError(const std::string& _healthCheckError);

                    /**
                     * 判断参数 HealthCheckError 是否已赋值
                     * @return HealthCheckError 是否已赋值
                     * 
                     */
                    bool HealthCheckErrorHasBeenSet() const;

                    /**
                     * 获取Namespace. specifies that it is only valid for 4.x clusters.
                     * @return Namespace Namespace. specifies that it is only valid for 4.x clusters.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace. specifies that it is only valid for 4.x clusters.
                     * @param _namespace Namespace. specifies that it is only valid for 4.x clusters.
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Namespace of 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NamespaceV4 Namespace of 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNamespaceV4() const;

                    /**
                     * 设置Namespace of 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _namespaceV4 Namespace of 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNamespaceV4(const std::string& _namespaceV4);

                    /**
                     * 判断参数 NamespaceV4 是否已赋值
                     * @return NamespaceV4 是否已赋值
                     * 
                     */
                    bool NamespaceV4HasBeenSet() const;

                    /**
                     * 获取Topic name for version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicNameV4 Topic name for version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopicNameV4() const;

                    /**
                     * 设置Topic name for version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicNameV4 Topic name for version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicNameV4(const std::string& _topicNameV4);

                    /**
                     * 判断参数 TopicNameV4 是否已赋值
                     * @return TopicNameV4 是否已赋值
                     * 
                     */
                    bool TopicNameV4HasBeenSet() const;

                    /**
                     * 获取Complete namespace for 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullNamespaceV4 Complete namespace for 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullNamespaceV4() const;

                    /**
                     * 设置Complete namespace for 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullNamespaceV4 Complete namespace for 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFullNamespaceV4(const std::string& _fullNamespaceV4);

                    /**
                     * 判断参数 FullNamespaceV4 是否已赋值
                     * @return FullNamespaceV4 是否已赋值
                     * 
                     */
                    bool FullNamespaceV4HasBeenSet() const;

                    /**
                     * 获取Error list returned from the last health check.
                     * @return HealthCheckErrorList Error list returned from the last health check.
                     * 
                     */
                    std::vector<std::string> GetHealthCheckErrorList() const;

                    /**
                     * 设置Error list returned from the last health check.
                     * @param _healthCheckErrorList Error list returned from the last health check.
                     * 
                     */
                    void SetHealthCheckErrorList(const std::vector<std::string>& _healthCheckErrorList);

                    /**
                     * 判断参数 HealthCheckErrorList 是否已赋值
                     * @return HealthCheckErrorList 是否已赋值
                     * 
                     */
                    bool HealthCheckErrorListHasBeenSet() const;

                private:

                    /**
                     * Topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Migration status. 
S_RW_D_NA source cluster read/write.
S_RW_D_R specifies read and write permissions for the source cluster and read permissions for the target cluster.
S_RW_D_RW specifies read-write for the source cluster and read-write for the target cluster.
SRDRW specifies source cluster read and destination cluster read/write.
S_NA_D_RW specifies the read-write target cluster.
                     */
                    std::string m_migrationStatus;
                    bool m_migrationStatusHasBeenSet;

                    /**
                     * Specifies whether the health check is completed.	
                     */
                    bool m_healthCheckPassed;
                    bool m_healthCheckPassedHasBeenSet;

                    /**
                     * Error information returned by the last health check is valid only when HealthCheckPassed is false. NotChecked: check not executed. Unknown: Unknown error. TopicNotImported: topic not imported. TopicNotExistsInSourceCluster: topic does not exist in the source cluster. TopicNotExistsInTargetCluster: topic does not exist in the target cluster. ConsumerConnectedOnTarget: consumer connections exist on the target cluster. SourceTopicHasNewMessagesIn5Minutes: new messages were written to the source cluster topic in the last 5 Minutes. TargetTopicHasNewMessagesIn5Minutes: new messages were written to the target cluster topic in the last 5 Minutes. SourceTopicHasNoMessagesIn5Minutes: no new messages were written to the source cluster in the last 5 Minutes. TargetTopicHasNoMessagesIn5Minutes: no new messages were written to the target cluster in the last 5 Minutes. ConsumerGroupCountNotMatch: inconsistent number of subscription groups. SourceTopicHasUnconsumedMessages: unconsumed messages exist in the source cluster topic.
                     */
                    std::string m_healthCheckError;
                    bool m_healthCheckErrorHasBeenSet;

                    /**
                     * Namespace. specifies that it is only valid for 4.x clusters.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Namespace of 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespaceV4;
                    bool m_namespaceV4HasBeenSet;

                    /**
                     * Topic name for version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicNameV4;
                    bool m_topicNameV4HasBeenSet;

                    /**
                     * Complete namespace for 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullNamespaceV4;
                    bool m_fullNamespaceV4HasBeenSet;

                    /**
                     * Error list returned from the last health check.
                     */
                    std::vector<std::string> m_healthCheckErrorList;
                    bool m_healthCheckErrorListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MIGRATINGTOPIC_H_
