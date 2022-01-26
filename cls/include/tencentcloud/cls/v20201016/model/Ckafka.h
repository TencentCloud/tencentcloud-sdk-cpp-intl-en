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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CKAFKA_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CKAFKA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Information of the CKafka instance to ship to
                */
                class Ckafka : public AbstractModel
                {
                public:
                    Ckafka();
                    ~Ckafka() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CKafka VIP
                     * @return Vip CKafka VIP
                     */
                    std::string GetVip() const;

                    /**
                     * 设置CKafka VIP
                     * @param Vip CKafka VIP
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取CKafka Vport
                     * @return Vport CKafka Vport
                     */
                    std::string GetVport() const;

                    /**
                     * 设置CKafka Vport
                     * @param Vport CKafka Vport
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取CKafka instance ID
                     * @return InstanceId CKafka instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CKafka instance ID
                     * @param InstanceId CKafka instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取CKafka instance name
                     * @return InstanceName CKafka instance name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置CKafka instance name
                     * @param InstanceName CKafka instance name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取CKafka topic ID
                     * @return TopicId CKafka topic ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置CKafka topic ID
                     * @param TopicId CKafka topic ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取CKafka topic name
                     * @return TopicName CKafka topic name
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置CKafka topic name
                     * @param TopicName CKafka topic name
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                private:

                    /**
                     * CKafka VIP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * CKafka Vport
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * CKafka instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * CKafka instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * CKafka topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * CKafka topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CKAFKA_H_
