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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CLIENTSUBSCRIPTIONINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CLIENTSUBSCRIPTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Client subscription details, which are used to help determine clients with inconsistent subscription relationships.
                */
                class ClientSubscriptionInfo : public AbstractModel
                {
                public:
                    ClientSubscriptionInfo();
                    ~ClientSubscriptionInfo() = default;
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
                     * 获取Client IP.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientAddr Client IP.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClientAddr() const;

                    /**
                     * 设置Client IP.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clientAddr Client IP.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClientAddr(const std::string& _clientAddr);

                    /**
                     * 判断参数 ClientAddr 是否已赋值
                     * @return ClientAddr 是否已赋值
                     * 
                     */
                    bool ClientAddrHasBeenSet() const;

                    /**
                     * 获取Subscribed topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Topic Subscribed topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Subscribed topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topic Subscribed topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Subscription expression.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubString Subscription expression.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubString() const;

                    /**
                     * 设置Subscription expression.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subString Subscription expression.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubString(const std::string& _subString);

                    /**
                     * 判断参数 SubString 是否已赋值
                     * @return SubString 是否已赋值
                     * 
                     */
                    bool SubStringHasBeenSet() const;

                    /**
                     * 获取Subscription method.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpressionType Subscription method.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpressionType() const;

                    /**
                     * 设置Subscription method.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expressionType Subscription method.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpressionType(const std::string& _expressionType);

                    /**
                     * 判断参数 ExpressionType 是否已赋值
                     * @return ExpressionType 是否已赋值
                     * 
                     */
                    bool ExpressionTypeHasBeenSet() const;

                private:

                    /**
                     * Client ID
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Client IP.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientAddr;
                    bool m_clientAddrHasBeenSet;

                    /**
                     * Subscribed topic.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Subscription expression.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subString;
                    bool m_subStringHasBeenSet;

                    /**
                     * Subscription method.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expressionType;
                    bool m_expressionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CLIENTSUBSCRIPTIONINFO_H_
