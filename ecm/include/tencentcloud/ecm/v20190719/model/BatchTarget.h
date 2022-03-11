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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_BATCHTARGET_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_BATCHTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CLB batch targets
                */
                class BatchTarget : public AbstractModel
                {
                public:
                    BatchTarget();
                    ~BatchTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Listener ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ListenerId Listener ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ListenerId Listener ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Bound port
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Port Bound port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Bound port
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Port Bound port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取CVM instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId CVM instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CVM instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InstanceId CVM instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取ENI IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EniIp ENI IP
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEniIp() const;

                    /**
                     * 设置ENI IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EniIp ENI IP
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEniIp(const std::string& _eniIp);

                    /**
                     * 判断参数 EniIp 是否已赋值
                     * @return EniIp 是否已赋值
                     */
                    bool EniIpHasBeenSet() const;

                    /**
                     * 获取Weight of the CVM instance. Value range: [0, 100]. If it is not specified for binding the instance, 10 will be used by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Weight Weight of the CVM instance. Value range: [0, 100]. If it is not specified for binding the instance, 10 will be used by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Weight of the CVM instance. Value range: [0, 100]. If it is not specified for binding the instance, 10 will be used by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Weight Weight of the CVM instance. Value range: [0, 100]. If it is not specified for binding the instance, 10 will be used by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * Listener ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Bound port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * CVM instance ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ENI IP
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eniIp;
                    bool m_eniIpHasBeenSet;

                    /**
                     * Weight of the CVM instance. Value range: [0, 100]. If it is not specified for binding the instance, 10 will be used by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_BATCHTARGET_H_
