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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCENETWORKLIMITCONFIG_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCENETWORKLIMITCONFIG_H_

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
                * Network resource limit of the instance
                */
                class InstanceNetworkLimitConfig : public AbstractModel
                {
                public:
                    InstanceNetworkLimitConfig();
                    ~InstanceNetworkLimitConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of CPU cores
                     * @return CpuNum Number of CPU cores
                     * 
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置Number of CPU cores
                     * @param _cpuNum Number of CPU cores
                     * 
                     */
                    void SetCpuNum(const int64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取ENI quantity limit
                     * @return NetworkInterfaceLimit ENI quantity limit
                     * 
                     */
                    int64_t GetNetworkInterfaceLimit() const;

                    /**
                     * 设置ENI quantity limit
                     * @param _networkInterfaceLimit ENI quantity limit
                     * 
                     */
                    void SetNetworkInterfaceLimit(const int64_t& _networkInterfaceLimit);

                    /**
                     * 判断参数 NetworkInterfaceLimit 是否已赋值
                     * @return NetworkInterfaceLimit 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceLimitHasBeenSet() const;

                    /**
                     * 获取Private IP quantity limit per ENI
                     * @return InnerIpPerNetworkInterface Private IP quantity limit per ENI
                     * 
                     */
                    int64_t GetInnerIpPerNetworkInterface() const;

                    /**
                     * 设置Private IP quantity limit per ENI
                     * @param _innerIpPerNetworkInterface Private IP quantity limit per ENI
                     * 
                     */
                    void SetInnerIpPerNetworkInterface(const int64_t& _innerIpPerNetworkInterface);

                    /**
                     * 判断参数 InnerIpPerNetworkInterface 是否已赋值
                     * @return InnerIpPerNetworkInterface 是否已赋值
                     * 
                     */
                    bool InnerIpPerNetworkInterfaceHasBeenSet() const;

                    /**
                     * 获取Public IP limit per instance
                     * @return PublicIpPerInstance Public IP limit per instance
                     * 
                     */
                    int64_t GetPublicIpPerInstance() const;

                    /**
                     * 设置Public IP limit per instance
                     * @param _publicIpPerInstance Public IP limit per instance
                     * 
                     */
                    void SetPublicIpPerInstance(const int64_t& _publicIpPerInstance);

                    /**
                     * 判断参数 PublicIpPerInstance 是否已赋值
                     * @return PublicIpPerInstance 是否已赋值
                     * 
                     */
                    bool PublicIpPerInstanceHasBeenSet() const;

                private:

                    /**
                     * Number of CPU cores
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * ENI quantity limit
                     */
                    int64_t m_networkInterfaceLimit;
                    bool m_networkInterfaceLimitHasBeenSet;

                    /**
                     * Private IP quantity limit per ENI
                     */
                    int64_t m_innerIpPerNetworkInterface;
                    bool m_innerIpPerNetworkInterfaceHasBeenSet;

                    /**
                     * Public IP limit per instance
                     */
                    int64_t m_publicIpPerInstance;
                    bool m_publicIpPerInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCENETWORKLIMITCONFIG_H_
