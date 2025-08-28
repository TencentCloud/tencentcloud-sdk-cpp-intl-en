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
                * 
                */
                class PublishSubscribe : public AbstractModel
                {
                public:
                    PublishSubscribe();
                    ~PublishSubscribe() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Id 
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置
                     * @param _id 
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
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
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
                     * 获取
                     * @return PublishInstanceId 
                     * 
                     */
                    std::string GetPublishInstanceId() const;

                    /**
                     * 设置
                     * @param _publishInstanceId 
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
                     * 获取
                     * @return PublishInstanceName 
                     * 
                     */
                    std::string GetPublishInstanceName() const;

                    /**
                     * 设置
                     * @param _publishInstanceName 
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
                     * 获取
                     * @return PublishInstanceIp 
                     * 
                     */
                    std::string GetPublishInstanceIp() const;

                    /**
                     * 设置
                     * @param _publishInstanceIp 
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
                     * 获取
                     * @return SubscribeInstanceId 
                     * 
                     */
                    std::string GetSubscribeInstanceId() const;

                    /**
                     * 设置
                     * @param _subscribeInstanceId 
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
                     * 获取
                     * @return SubscribeInstanceName 
                     * 
                     */
                    std::string GetSubscribeInstanceName() const;

                    /**
                     * 设置
                     * @param _subscribeInstanceName 
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
                     * 获取
                     * @return SubscribeInstanceIp 
                     * 
                     */
                    std::string GetSubscribeInstanceIp() const;

                    /**
                     * 设置
                     * @param _subscribeInstanceIp 
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
                     * 获取
                     * @return DatabaseTupleSet 
                     * 
                     */
                    std::vector<DatabaseTupleStatus> GetDatabaseTupleSet() const;

                    /**
                     * 设置
                     * @param _databaseTupleSet 
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
                     * 
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_publishInstanceId;
                    bool m_publishInstanceIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_publishInstanceName;
                    bool m_publishInstanceNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_publishInstanceIp;
                    bool m_publishInstanceIpHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subscribeInstanceId;
                    bool m_subscribeInstanceIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subscribeInstanceName;
                    bool m_subscribeInstanceNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subscribeInstanceIp;
                    bool m_subscribeInstanceIpHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<DatabaseTupleStatus> m_databaseTupleSet;
                    bool m_databaseTupleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PUBLISHSUBSCRIBE_H_
