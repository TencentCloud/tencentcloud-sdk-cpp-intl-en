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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DATABASETUPLE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DATABASETUPLE_H_

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
                * This data structure represents two databases that have a publish-subscribe relationship.
                */
                class DatabaseTuple : public AbstractModel
                {
                public:
                    DatabaseTuple();
                    ~DatabaseTuple() = default;
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DATABASETUPLE_H_
