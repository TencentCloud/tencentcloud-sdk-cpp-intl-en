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
                * 
                */
                class DatabaseTupleStatus : public AbstractModel
                {
                public:
                    DatabaseTupleStatus();
                    ~DatabaseTupleStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return PublishDatabase 
                     * 
                     */
                    std::string GetPublishDatabase() const;

                    /**
                     * 设置
                     * @param _publishDatabase 
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
                     * 获取
                     * @return SubscribeDatabase 
                     * 
                     */
                    std::string GetSubscribeDatabase() const;

                    /**
                     * 设置
                     * @param _subscribeDatabase 
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
                     * 获取
                     * @return LastSyncTime 
                     * 
                     */
                    std::string GetLastSyncTime() const;

                    /**
                     * 设置
                     * @param _lastSyncTime 
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
                     * 获取
                     * @return Status 
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置
                     * @param _status 
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
                     * 
                     */
                    std::string m_publishDatabase;
                    bool m_publishDatabaseHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subscribeDatabase;
                    bool m_subscribeDatabaseHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_lastSyncTime;
                    bool m_lastSyncTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DATABASETUPLESTATUS_H_
