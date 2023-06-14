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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_ACTIVATESUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_ACTIVATESUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/SubscribeObject.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * ActivateSubscribe request structure.
                */
                class ActivateSubscribeRequest : public AbstractModel
                {
                public:
                    ActivateSubscribeRequest();
                    ~ActivateSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Subscription instance ID.
                     * @return SubscribeId Subscription instance ID.
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置Subscription instance ID.
                     * @param _subscribeId Subscription instance ID.
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取Database Instance ID
                     * @return InstanceId Database Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Database Instance ID
                     * @param _instanceId Database Instance ID
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
                     * 获取Data subscription type. 0: full instance subscription, 1: data subscription, 2: structure subscription, 3: data subscription and structure subscription
                     * @return SubscribeObjectType Data subscription type. 0: full instance subscription, 1: data subscription, 2: structure subscription, 3: data subscription and structure subscription
                     * 
                     */
                    int64_t GetSubscribeObjectType() const;

                    /**
                     * 设置Data subscription type. 0: full instance subscription, 1: data subscription, 2: structure subscription, 3: data subscription and structure subscription
                     * @param _subscribeObjectType Data subscription type. 0: full instance subscription, 1: data subscription, 2: structure subscription, 3: data subscription and structure subscription
                     * 
                     */
                    void SetSubscribeObjectType(const int64_t& _subscribeObjectType);

                    /**
                     * 判断参数 SubscribeObjectType 是否已赋值
                     * @return SubscribeObjectType 是否已赋值
                     * 
                     */
                    bool SubscribeObjectTypeHasBeenSet() const;

                    /**
                     * 获取Subscription object
                     * @return Objects Subscription object
                     * 
                     */
                    SubscribeObject GetObjects() const;

                    /**
                     * 设置Subscription object
                     * @param _objects Subscription object
                     * 
                     */
                    void SetObjects(const SubscribeObject& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     * 
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取Subnet of data subscription service, which is the subnet of the database instance by default.
                     * @return UniqSubnetId Subnet of data subscription service, which is the subnet of the database instance by default.
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Subnet of data subscription service, which is the subnet of the database instance by default.
                     * @param _uniqSubnetId Subnet of data subscription service, which is the subnet of the database instance by default.
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Subscription service port. Default value: 7507
                     * @return Vport Subscription service port. Default value: 7507
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Subscription service port. Default value: 7507
                     * @param _vport Subscription service port. Default value: 7507
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                private:

                    /**
                     * Subscription instance ID.
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * Database Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Data subscription type. 0: full instance subscription, 1: data subscription, 2: structure subscription, 3: data subscription and structure subscription
                     */
                    int64_t m_subscribeObjectType;
                    bool m_subscribeObjectTypeHasBeenSet;

                    /**
                     * Subscription object
                     */
                    SubscribeObject m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * Subnet of data subscription service, which is the subnet of the database instance by default.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Subscription service port. Default value: 7507
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_ACTIVATESUBSCRIBEREQUEST_H_
