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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSSPEEDLIMITCONFIGREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSSPEEDLIMITCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/DDoSSpeedLimitConfig.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * ModifyDDoSSpeedLimitConfig request structure.
                */
                class ModifyDDoSSpeedLimitConfigRequest : public AbstractModel
                {
                public:
                    ModifyDDoSSpeedLimitConfigRequest();
                    ~ModifyDDoSSpeedLimitConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS instance ID
                     * @return InstanceId Anti-DDoS instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param InstanceId Anti-DDoS instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Access rate limit configuration. The configuration ID cannot be empty when you set this parameter.
                     * @return DDoSSpeedLimitConfig Access rate limit configuration. The configuration ID cannot be empty when you set this parameter.
                     */
                    DDoSSpeedLimitConfig GetDDoSSpeedLimitConfig() const;

                    /**
                     * 设置Access rate limit configuration. The configuration ID cannot be empty when you set this parameter.
                     * @param DDoSSpeedLimitConfig Access rate limit configuration. The configuration ID cannot be empty when you set this parameter.
                     */
                    void SetDDoSSpeedLimitConfig(const DDoSSpeedLimitConfig& _dDoSSpeedLimitConfig);

                    /**
                     * 判断参数 DDoSSpeedLimitConfig 是否已赋值
                     * @return DDoSSpeedLimitConfig 是否已赋值
                     */
                    bool DDoSSpeedLimitConfigHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Access rate limit configuration. The configuration ID cannot be empty when you set this parameter.
                     */
                    DDoSSpeedLimitConfig m_dDoSSpeedLimitConfig;
                    bool m_dDoSSpeedLimitConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSSPEEDLIMITCONFIGREQUEST_H_
