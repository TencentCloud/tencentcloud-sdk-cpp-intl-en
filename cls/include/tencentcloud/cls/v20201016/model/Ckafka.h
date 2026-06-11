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
                     * 获取InstanceId of Ckafka.
- Obtain the instance id by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
- Obtain the instance id by [creating an instance](https://www.tencentcloud.com/document/product/597/53207?from_cn_redirect=1).
                     * @return InstanceId InstanceId of Ckafka.
- Obtain the instance id by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
- Obtain the instance id by [creating an instance](https://www.tencentcloud.com/document/product/597/53207?from_cn_redirect=1).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置InstanceId of Ckafka.
- Obtain the instance id by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
- Obtain the instance id by [creating an instance](https://www.tencentcloud.com/document/product/597/53207?from_cn_redirect=1).
                     * @param _instanceId InstanceId of Ckafka.
- Obtain the instance id by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
- Obtain the instance id by [creating an instance](https://www.tencentcloud.com/document/product/597/53207?from_cn_redirect=1).
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取TopicName of Ckafka
-Obtain the TopicName by creating a topic (https://www.tencentcloud.com/document/product/597/73566?from_cn_redirect=1).
-Obtain the TopicName through [Get Topic List](https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1).
                     * @return TopicName TopicName of Ckafka
-Obtain the TopicName by creating a topic (https://www.tencentcloud.com/document/product/597/73566?from_cn_redirect=1).
-Obtain the TopicName through [Get Topic List](https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置TopicName of Ckafka
-Obtain the TopicName by creating a topic (https://www.tencentcloud.com/document/product/597/73566?from_cn_redirect=1).
-Obtain the TopicName through [Get Topic List](https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1).
                     * @param _topicName TopicName of Ckafka
-Obtain the TopicName by creating a topic (https://www.tencentcloud.com/document/product/597/73566?from_cn_redirect=1).
-Obtain the TopicName through [Get Topic List](https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1).
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
                     * 获取Vip of Ckafka.
- Obtain vip information by searching the instance attributes (https://www.tencentcloud.com/document/product/597/40836?from_cn_redirect=1).
-If the delivery task is created via the role ARN method, the Vip field can be empty.
                     * @return Vip Vip of Ckafka.
- Obtain vip information by searching the instance attributes (https://www.tencentcloud.com/document/product/597/40836?from_cn_redirect=1).
-If the delivery task is created via the role ARN method, the Vip field can be empty.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Vip of Ckafka.
- Obtain vip information by searching the instance attributes (https://www.tencentcloud.com/document/product/597/40836?from_cn_redirect=1).
-If the delivery task is created via the role ARN method, the Vip field can be empty.
                     * @param _vip Vip of Ckafka.
- Obtain vip information by searching the instance attributes (https://www.tencentcloud.com/document/product/597/40836?from_cn_redirect=1).
-If the delivery task is created via the role ARN method, the Vip field can be empty.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Vport of Ckafka.
-Obtain vip port information by [obtaining instance attributes](https://www.tencentcloud.com/document/product/597/40836?from_cn_redirect=1).
-If it is created by the role ARN method, the Vport field can be empty.
                     * @return Vport Vport of Ckafka.
-Obtain vip port information by [obtaining instance attributes](https://www.tencentcloud.com/document/product/597/40836?from_cn_redirect=1).
-If it is created by the role ARN method, the Vport field can be empty.
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置Vport of Ckafka.
-Obtain vip port information by [obtaining instance attributes](https://www.tencentcloud.com/document/product/597/40836?from_cn_redirect=1).
-If it is created by the role ARN method, the Vport field can be empty.
                     * @param _vport Vport of Ckafka.
-Obtain vip port information by [obtaining instance attributes](https://www.tencentcloud.com/document/product/597/40836?from_cn_redirect=1).
-If it is created by the role ARN method, the Vport field can be empty.
                     * 
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取InstanceName of Ckafka.
- Obtain the InstanceName by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
-Get InstanceName by [creating an instance](https://www.tencentcloud.com/document/product/597/53207?from_cn_redirect=1).
- If the delivery task is created via the role ARN method, the InstanceName field can be empty.
                     * @return InstanceName InstanceName of Ckafka.
- Obtain the InstanceName by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
-Get InstanceName by [creating an instance](https://www.tencentcloud.com/document/product/597/53207?from_cn_redirect=1).
- If the delivery task is created via the role ARN method, the InstanceName field can be empty.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置InstanceName of Ckafka.
- Obtain the InstanceName by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
-Get InstanceName by [creating an instance](https://www.tencentcloud.com/document/product/597/53207?from_cn_redirect=1).
- If the delivery task is created via the role ARN method, the InstanceName field can be empty.
                     * @param _instanceName InstanceName of Ckafka.
- Obtain the InstanceName by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
-Get InstanceName by [creating an instance](https://www.tencentcloud.com/document/product/597/53207?from_cn_redirect=1).
- If the delivery task is created via the role ARN method, the InstanceName field can be empty.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Topic ID of Ckafka.
-Obtain the TopicId by creating a topic (https://www.tencentcloud.com/document/product/597/73566?from_cn_redirect=1).
-Obtain the TopicId through [Get Topic List](https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1).
- If the delivery task is created via the role ARN method, the TopicId field can be empty.
                     * @return TopicId Topic ID of Ckafka.
-Obtain the TopicId by creating a topic (https://www.tencentcloud.com/document/product/597/73566?from_cn_redirect=1).
-Obtain the TopicId through [Get Topic List](https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1).
- If the delivery task is created via the role ARN method, the TopicId field can be empty.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic ID of Ckafka.
-Obtain the TopicId by creating a topic (https://www.tencentcloud.com/document/product/597/73566?from_cn_redirect=1).
-Obtain the TopicId through [Get Topic List](https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1).
- If the delivery task is created via the role ARN method, the TopicId field can be empty.
                     * @param _topicId Topic ID of Ckafka.
-Obtain the TopicId by creating a topic (https://www.tencentcloud.com/document/product/597/73566?from_cn_redirect=1).
-Obtain the TopicId through [Get Topic List](https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1).
- If the delivery task is created via the role ARN method, the TopicId field can be empty.
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * InstanceId of Ckafka.
- Obtain the instance id by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
- Obtain the instance id by [creating an instance](https://www.tencentcloud.com/document/product/597/53207?from_cn_redirect=1).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * TopicName of Ckafka
-Obtain the TopicName by creating a topic (https://www.tencentcloud.com/document/product/597/73566?from_cn_redirect=1).
-Obtain the TopicName through [Get Topic List](https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1).
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Vip of Ckafka.
- Obtain vip information by searching the instance attributes (https://www.tencentcloud.com/document/product/597/40836?from_cn_redirect=1).
-If the delivery task is created via the role ARN method, the Vip field can be empty.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Vport of Ckafka.
-Obtain vip port information by [obtaining instance attributes](https://www.tencentcloud.com/document/product/597/40836?from_cn_redirect=1).
-If it is created by the role ARN method, the Vport field can be empty.
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * InstanceName of Ckafka.
- Obtain the InstanceName by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
-Get InstanceName by [creating an instance](https://www.tencentcloud.com/document/product/597/53207?from_cn_redirect=1).
- If the delivery task is created via the role ARN method, the InstanceName field can be empty.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Topic ID of Ckafka.
-Obtain the TopicId by creating a topic (https://www.tencentcloud.com/document/product/597/73566?from_cn_redirect=1).
-Obtain the TopicId through [Get Topic List](https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1).
- If the delivery task is created via the role ARN method, the TopicId field can be empty.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CKAFKA_H_
