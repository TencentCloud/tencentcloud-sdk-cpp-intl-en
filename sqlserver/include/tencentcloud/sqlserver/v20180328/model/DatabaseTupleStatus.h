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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DATABASETUPLESTATUS_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DATABASETUPLESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * This data structure represents two databases with a publish-subscribe relationship, along with the status information of that relationship between them.
                */
                class DatabaseTupleStatus : public AbstractModel
                {
                public:
                    DatabaseTupleStatus();
                    ~DatabaseTupleStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Publish Database Name
                     * @return PublishDatabase Publish Database Name
                     * 
                     */
                    std::string GetPublishDatabase() const;

                    /**
                     * 设置Publish Database Name
                     * @param _publishDatabase Publish Database Name
                     * 
                     */
                    void SetPublishDatabase(const std::string& _publishDatabase);

                    /**
                     * 判断参数 PublishDatabase 是否已赋值
                     * @return PublishDatabase 是否已赋值
                     * 
                     */
                    bool PublishDatabaseHasBeenSet() const;

                    /**
                     * 获取Subscription Database Name
                     * @return SubscribeDatabase Subscription Database Name
                     * 
                     */
                    std::string GetSubscribeDatabase() const;

                    /**
                     * 设置Subscription Database Name
                     * @param _subscribeDatabase Subscription Database Name
                     * 
                     */
                    void SetSubscribeDatabase(const std::string& _subscribeDatabase);

                    /**
                     * 判断参数 SubscribeDatabase 是否已赋值
                     * @return SubscribeDatabase 是否已赋值
                     * 
                     */
                    bool SubscribeDatabaseHasBeenSet() const;

                    /**
                     * 获取Latest Synchronization Time
                     * @return LastSyncTime Latest Synchronization Time
                     * 
                     */
                    std::string GetLastSyncTime() const;

                    /**
                     * 设置Latest Synchronization Time
                     * @param _lastSyncTime Latest Synchronization Time
                     * 
                     */
                    void SetLastSyncTime(const std::string& _lastSyncTime);

                    /**
                     * 判断参数 LastSyncTime 是否已赋值
                     * @return LastSyncTime 是否已赋值
                     * 
                     */
                    bool LastSyncTimeHasBeenSet() const;

                    /**
                     * 获取Publish/Subscribe Status Between Databases: running, success, fail, unknow
                     * @return Status Publish/Subscribe Status Between Databases: running, success, fail, unknow
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Publish/Subscribe Status Between Databases: running, success, fail, unknow
                     * @param _status Publish/Subscribe Status Between Databases: running, success, fail, unknow
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Publish Database Name
                     */
                    std::string m_publishDatabase;
                    bool m_publishDatabaseHasBeenSet;

                    /**
                     * Subscription Database Name
                     */
                    std::string m_subscribeDatabase;
                    bool m_subscribeDatabaseHasBeenSet;

                    /**
                     * Latest Synchronization Time
                     */
                    std::string m_lastSyncTime;
                    bool m_lastSyncTimeHasBeenSet;

                    /**
                     * Publish/Subscribe Status Between Databases: running, success, fail, unknow
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DATABASETUPLESTATUS_H_
