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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BATCHTARGET_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BATCHTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Batch binding type
                */
                class BatchTarget : public AbstractModel
                {
                public:
                    BatchTarget();
                    ~BatchTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Listener ID.
                     * @return ListenerId Listener ID.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID.
                     * @param _listenerId Listener ID.
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取The port to Bind
                     * @return Port The port to Bind
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置The port to Bind
                     * @param _port The port to Bind
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取CVM instance ID. The primary IP of the primary ENI will be bound.
                     * @return InstanceId CVM instance ID. The primary IP of the primary ENI will be bound.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CVM instance ID. The primary IP of the primary ENI will be bound.
                     * @param _instanceId CVM instance ID. The primary IP of the primary ENI will be bound.
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
                     * 获取It is required for binding an IP. It supports an ENI IP or any other private IP. To bind an ENI IP, the ENI should be bound to a CVM instance before being bound to a CLB instance.
Note: either `InstanceId` or `EniIp` must be passed in, which is required for binding a dual-stack IPv6 CVM instance.
                     * @return EniIp It is required for binding an IP. It supports an ENI IP or any other private IP. To bind an ENI IP, the ENI should be bound to a CVM instance before being bound to a CLB instance.
Note: either `InstanceId` or `EniIp` must be passed in, which is required for binding a dual-stack IPv6 CVM instance.
                     * 
                     */
                    std::string GetEniIp() const;

                    /**
                     * 设置It is required for binding an IP. It supports an ENI IP or any other private IP. To bind an ENI IP, the ENI should be bound to a CVM instance before being bound to a CLB instance.
Note: either `InstanceId` or `EniIp` must be passed in, which is required for binding a dual-stack IPv6 CVM instance.
                     * @param _eniIp It is required for binding an IP. It supports an ENI IP or any other private IP. To bind an ENI IP, the ENI should be bound to a CVM instance before being bound to a CLB instance.
Note: either `InstanceId` or `EniIp` must be passed in, which is required for binding a dual-stack IPv6 CVM instance.
                     * 
                     */
                    void SetEniIp(const std::string& _eniIp);

                    /**
                     * 判断参数 EniIp 是否已赋值
                     * @return EniIp 是否已赋值
                     * 
                     */
                    bool EniIpHasBeenSet() const;

                    /**
                     * 获取Weight of the CVM instance. Value range: [0, 100]. If it is not specified for binding the instance, 10 will be used by default.
                     * @return Weight Weight of the CVM instance. Value range: [0, 100]. If it is not specified for binding the instance, 10 will be used by default.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Weight of the CVM instance. Value range: [0, 100]. If it is not specified for binding the instance, 10 will be used by default.
                     * @param _weight Weight of the CVM instance. Value range: [0, 100]. If it is not specified for binding the instance, 10 will be used by default.
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Layer-7 rule ID. This parameter is required for Layer-7 CLB.
                     * @return LocationId Layer-7 rule ID. This parameter is required for Layer-7 CLB.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Layer-7 rule ID. This parameter is required for Layer-7 CLB.
                     * @param _locationId Layer-7 rule ID. This parameter is required for Layer-7 CLB.
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return Tag Tag.
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Tag.
                     * @param _tag Tag.
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * Listener ID.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * The port to Bind
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * CVM instance ID. The primary IP of the primary ENI will be bound.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * It is required for binding an IP. It supports an ENI IP or any other private IP. To bind an ENI IP, the ENI should be bound to a CVM instance before being bound to a CLB instance.
Note: either `InstanceId` or `EniIp` must be passed in, which is required for binding a dual-stack IPv6 CVM instance.
                     */
                    std::string m_eniIp;
                    bool m_eniIpHasBeenSet;

                    /**
                     * Weight of the CVM instance. Value range: [0, 100]. If it is not specified for binding the instance, 10 will be used by default.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Layer-7 rule ID. This parameter is required for Layer-7 CLB.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BATCHTARGET_H_
