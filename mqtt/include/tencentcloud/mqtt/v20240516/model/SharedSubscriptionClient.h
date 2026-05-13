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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_SHAREDSUBSCRIPTIONCLIENT_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_SHAREDSUBSCRIPTIONCLIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * Shared subscription group client
                */
                class SharedSubscriptionClient : public AbstractModel
                {
                public:
                    SharedSubscriptionClient();
                    ~SharedSubscriptionClient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client ID
                     * @return ClientId Client ID
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置Client ID
                     * @param _clientId Client ID
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取Shared subscription group name
                     * @return SharedName Shared subscription group name
                     * 
                     */
                    std::string GetSharedName() const;

                    /**
                     * 设置Shared subscription group name
                     * @param _sharedName Shared subscription group name
                     * 
                     */
                    void SetSharedName(const std::string& _sharedName);

                    /**
                     * 判断参数 SharedName 是否已赋值
                     * @return SharedName 是否已赋值
                     * 
                     */
                    bool SharedNameHasBeenSet() const;

                    /**
                     * 获取Expression list of subscriptions under the shared group
                     * @return TopicFilter Expression list of subscriptions under the shared group
                     * 
                     */
                    std::string GetTopicFilter() const;

                    /**
                     * 设置Expression list of subscriptions under the shared group
                     * @param _topicFilter Expression list of subscriptions under the shared group
                     * 
                     */
                    void SetTopicFilter(const std::string& _topicFilter);

                    /**
                     * 判断参数 TopicFilter 是否已赋值
                     * @return TopicFilter 是否已赋值
                     * 
                     */
                    bool TopicFilterHasBeenSet() const;

                    /**
                     * 获取Online status
                     * @return Online Online status
                     * 
                     */
                    bool GetOnline() const;

                    /**
                     * 设置Online status
                     * @param _online Online status
                     * 
                     */
                    void SetOnline(const bool& _online);

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     * 
                     */
                    bool OnlineHasBeenSet() const;

                private:

                    /**
                     * Client ID
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Shared subscription group name
                     */
                    std::string m_sharedName;
                    bool m_sharedNameHasBeenSet;

                    /**
                     * Expression list of subscriptions under the shared group
                     */
                    std::string m_topicFilter;
                    bool m_topicFilterHasBeenSet;

                    /**
                     * Online status
                     */
                    bool m_online;
                    bool m_onlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_SHAREDSUBSCRIPTIONCLIENT_H_
