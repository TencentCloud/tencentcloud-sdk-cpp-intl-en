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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PUBLISHSUBSCRIBE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PUBLISHSUBSCRIBE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DatabaseTupleStatus.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Pub/Sub Object
                */
                class PublishSubscribe : public AbstractModel
                {
                public:
                    PublishSubscribe();
                    ~PublishSubscribe() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pub/Sub ID
                     * @return Id Pub/Sub ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Pub/Sub ID
                     * @param _id Pub/Sub ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Pub/Sub Name
                     * @return Name Pub/Sub Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Pub/Sub Name
                     * @param _name Pub/Sub Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Published Instance ID
                     * @return PublishInstanceId Published Instance ID
                     * 
                     */
                    std::string GetPublishInstanceId() const;

                    /**
                     * 设置Published Instance ID
                     * @param _publishInstanceId Published Instance ID
                     * 
                     */
                    void SetPublishInstanceId(const std::string& _publishInstanceId);

                    /**
                     * 判断参数 PublishInstanceId 是否已赋值
                     * @return PublishInstanceId 是否已赋值
                     * 
                     */
                    bool PublishInstanceIdHasBeenSet() const;

                    /**
                     * 获取Published Instance Name
                     * @return PublishInstanceName Published Instance Name
                     * 
                     */
                    std::string GetPublishInstanceName() const;

                    /**
                     * 设置Published Instance Name
                     * @param _publishInstanceName Published Instance Name
                     * 
                     */
                    void SetPublishInstanceName(const std::string& _publishInstanceName);

                    /**
                     * 判断参数 PublishInstanceName 是否已赋值
                     * @return PublishInstanceName 是否已赋值
                     * 
                     */
                    bool PublishInstanceNameHasBeenSet() const;

                    /**
                     * 获取Published Instance IP
                     * @return PublishInstanceIp Published Instance IP
                     * 
                     */
                    std::string GetPublishInstanceIp() const;

                    /**
                     * 设置Published Instance IP
                     * @param _publishInstanceIp Published Instance IP
                     * 
                     */
                    void SetPublishInstanceIp(const std::string& _publishInstanceIp);

                    /**
                     * 判断参数 PublishInstanceIp 是否已赋值
                     * @return PublishInstanceIp 是否已赋值
                     * 
                     */
                    bool PublishInstanceIpHasBeenSet() const;

                    /**
                     * 获取Subscription Instance ID
                     * @return SubscribeInstanceId Subscription Instance ID
                     * 
                     */
                    std::string GetSubscribeInstanceId() const;

                    /**
                     * 设置Subscription Instance ID
                     * @param _subscribeInstanceId Subscription Instance ID
                     * 
                     */
                    void SetSubscribeInstanceId(const std::string& _subscribeInstanceId);

                    /**
                     * 判断参数 SubscribeInstanceId 是否已赋值
                     * @return SubscribeInstanceId 是否已赋值
                     * 
                     */
                    bool SubscribeInstanceIdHasBeenSet() const;

                    /**
                     * 获取Subscription Instance Name
                     * @return SubscribeInstanceName Subscription Instance Name
                     * 
                     */
                    std::string GetSubscribeInstanceName() const;

                    /**
                     * 设置Subscription Instance Name
                     * @param _subscribeInstanceName Subscription Instance Name
                     * 
                     */
                    void SetSubscribeInstanceName(const std::string& _subscribeInstanceName);

                    /**
                     * 判断参数 SubscribeInstanceName 是否已赋值
                     * @return SubscribeInstanceName 是否已赋值
                     * 
                     */
                    bool SubscribeInstanceNameHasBeenSet() const;

                    /**
                     * 获取Subscription Instance IP
                     * @return SubscribeInstanceIp Subscription Instance IP
                     * 
                     */
                    std::string GetSubscribeInstanceIp() const;

                    /**
                     * 设置Subscription Instance IP
                     * @param _subscribeInstanceIp Subscription Instance IP
                     * 
                     */
                    void SetSubscribeInstanceIp(const std::string& _subscribeInstanceIp);

                    /**
                     * 判断参数 SubscribeInstanceIp 是否已赋值
                     * @return SubscribeInstanceIp 是否已赋值
                     * 
                     */
                    bool SubscribeInstanceIpHasBeenSet() const;

                    /**
                     * 获取Publication-Subscription Relationship Collection of Database
                     * @return DatabaseTupleSet Publication-Subscription Relationship Collection of Database
                     * 
                     */
                    std::vector<DatabaseTupleStatus> GetDatabaseTupleSet() const;

                    /**
                     * 设置Publication-Subscription Relationship Collection of Database
                     * @param _databaseTupleSet Publication-Subscription Relationship Collection of Database
                     * 
                     */
                    void SetDatabaseTupleSet(const std::vector<DatabaseTupleStatus>& _databaseTupleSet);

                    /**
                     * 判断参数 DatabaseTupleSet 是否已赋值
                     * @return DatabaseTupleSet 是否已赋值
                     * 
                     */
                    bool DatabaseTupleSetHasBeenSet() const;

                private:

                    /**
                     * Pub/Sub ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Pub/Sub Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Published Instance ID
                     */
                    std::string m_publishInstanceId;
                    bool m_publishInstanceIdHasBeenSet;

                    /**
                     * Published Instance Name
                     */
                    std::string m_publishInstanceName;
                    bool m_publishInstanceNameHasBeenSet;

                    /**
                     * Published Instance IP
                     */
                    std::string m_publishInstanceIp;
                    bool m_publishInstanceIpHasBeenSet;

                    /**
                     * Subscription Instance ID
                     */
                    std::string m_subscribeInstanceId;
                    bool m_subscribeInstanceIdHasBeenSet;

                    /**
                     * Subscription Instance Name
                     */
                    std::string m_subscribeInstanceName;
                    bool m_subscribeInstanceNameHasBeenSet;

                    /**
                     * Subscription Instance IP
                     */
                    std::string m_subscribeInstanceIp;
                    bool m_subscribeInstanceIpHasBeenSet;

                    /**
                     * Publication-Subscription Relationship Collection of Database
                     */
                    std::vector<DatabaseTupleStatus> m_databaseTupleSet;
                    bool m_databaseTupleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PUBLISHSUBSCRIBE_H_
