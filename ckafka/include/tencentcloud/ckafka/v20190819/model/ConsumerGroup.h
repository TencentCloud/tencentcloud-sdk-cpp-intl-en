/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERGROUP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/SubscribedInfo.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * User group entity
                */
                class ConsumerGroup : public AbstractModel
                {
                public:
                    ConsumerGroup();
                    ~ConsumerGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User group name
                     * @return ConsumerGroupName User group name
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置User group name
                     * @param _consumerGroupName User group name
                     * 
                     */
                    void SetConsumerGroupName(const std::string& _consumerGroupName);

                    /**
                     * 判断参数 ConsumerGroupName 是否已赋值
                     * @return ConsumerGroupName 是否已赋值
                     * 
                     */
                    bool ConsumerGroupNameHasBeenSet() const;

                    /**
                     * 获取Subscribed message entity
                     * @return SubscribedInfo Subscribed message entity
                     * 
                     */
                    std::vector<SubscribedInfo> GetSubscribedInfo() const;

                    /**
                     * 设置Subscribed message entity
                     * @param _subscribedInfo Subscribed message entity
                     * 
                     */
                    void SetSubscribedInfo(const std::vector<SubscribedInfo>& _subscribedInfo);

                    /**
                     * 判断参数 SubscribedInfo 是否已赋值
                     * @return SubscribedInfo 是否已赋值
                     * 
                     */
                    bool SubscribedInfoHasBeenSet() const;

                private:

                    /**
                     * User group name
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * Subscribed message entity
                     */
                    std::vector<SubscribedInfo> m_subscribedInfo;
                    bool m_subscribedInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERGROUP_H_
