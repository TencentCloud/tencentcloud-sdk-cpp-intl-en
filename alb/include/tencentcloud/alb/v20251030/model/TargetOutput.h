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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_TARGETOUTPUT_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_TARGETOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Backend service output parameter.
                */
                class TargetOutput : public AbstractModel
                {
                public:
                    TargetOutput();
                    ~TargetOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network-interface ID.
                     * @return EniId Network-interface ID.
                     * 
                     */
                    std::string GetEniId() const;

                    /**
                     * 设置Network-interface ID.
                     * @param _eniId Network-interface ID.
                     * 
                     */
                    void SetEniId(const std::string& _eniId);

                    /**
                     * 判断参数 EniId 是否已赋值
                     * @return EniId 是否已赋值
                     * 
                     */
                    bool EniIdHasBeenSet() const;

                    /**
                     * 获取Port used by the real server. Value range: **1-65535**.
                     * @return Port Port used by the real server. Value range: **1-65535**.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port used by the real server. Value range: **1-65535**.
                     * @param _port Port used by the real server. Value range: **1-65535**.
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Backend service instance ID. For a CVM instance, the format is "ins-" followed by 8 alphanumeric characters.
                     * @return TargetId Backend service instance ID. For a CVM instance, the format is "ins-" followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置Backend service instance ID. For a CVM instance, the format is "ins-" followed by 8 alphanumeric characters.
                     * @param _targetId Backend service instance ID. For a CVM instance, the format is "ins-" followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取Backend service IP. At least one of **TargetIp** and **TargetId** is required.

- When the server group is of the **Instance** type, this parameter is the primary or secondary private IP of **Eni**.

                     * @return TargetIp Backend service IP. At least one of **TargetIp** and **TargetId** is required.

- When the server group is of the **Instance** type, this parameter is the primary or secondary private IP of **Eni**.

                     * 
                     */
                    std::string GetTargetIp() const;

                    /**
                     * 设置Backend service IP. At least one of **TargetIp** and **TargetId** is required.

- When the server group is of the **Instance** type, this parameter is the primary or secondary private IP of **Eni**.

                     * @param _targetIp Backend service IP. At least one of **TargetIp** and **TargetId** is required.

- When the server group is of the **Instance** type, this parameter is the primary or secondary private IP of **Eni**.

                     * 
                     */
                    void SetTargetIp(const std::string& _targetIp);

                    /**
                     * 判断参数 TargetIp 是否已赋值
                     * @return TargetIp 是否已赋值
                     * 
                     */
                    bool TargetIpHasBeenSet() const;

                    /**
                     * 获取Backend service name. Currently, only CVM backend services return a valid name.
                     * @return TargetName Backend service name. Currently, only CVM backend services return a valid name.
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置Backend service name. Currently, only CVM backend services return a valid name.
                     * @param _targetName Backend service name. Currently, only CVM backend services return a valid name.
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取Backend service status. Valid values:
- **Adding**: Adding.
- **Active**: available status.
- **Configuring**: configuration in progress.
- **Removing**: removing.
                     * @return TargetStatus Backend service status. Valid values:
- **Adding**: Adding.
- **Active**: available status.
- **Configuring**: configuration in progress.
- **Removing**: removing.
                     * 
                     */
                    std::string GetTargetStatus() const;

                    /**
                     * 设置Backend service status. Valid values:
- **Adding**: Adding.
- **Active**: available status.
- **Configuring**: configuration in progress.
- **Removing**: removing.
                     * @param _targetStatus Backend service status. Valid values:
- **Adding**: Adding.
- **Active**: available status.
- **Configuring**: configuration in progress.
- **Removing**: removing.
                     * 
                     */
                    void SetTargetStatus(const std::string& _targetStatus);

                    /**
                     * 判断参数 TargetStatus 是否已赋值
                     * @return TargetStatus 是否已赋值
                     * 
                     */
                    bool TargetStatusHasBeenSet() const;

                    /**
                     * 获取Backend service type.
                     * @return TargetType Backend service type.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Backend service type.
                     * @param _targetType Backend service type.
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取Weight of the backend service. Value range: **0-100**. Default value: **100**. If the weight is set to **0**, no request will be forwarded to this backend service.
                     * @return Weight Weight of the backend service. Value range: **0-100**. Default value: **100**. If the weight is set to **0**, no request will be forwarded to this backend service.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Weight of the backend service. Value range: **0-100**. Default value: **100**. If the weight is set to **0**, no request will be forwarded to this backend service.
                     * @param _weight Weight of the backend service. Value range: **0-100**. Default value: **100**. If the weight is set to **0**, no request will be forwarded to this backend service.
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * Network-interface ID.
                     */
                    std::string m_eniId;
                    bool m_eniIdHasBeenSet;

                    /**
                     * Port used by the real server. Value range: **1-65535**.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Backend service instance ID. For a CVM instance, the format is "ins-" followed by 8 alphanumeric characters.
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * Backend service IP. At least one of **TargetIp** and **TargetId** is required.

- When the server group is of the **Instance** type, this parameter is the primary or secondary private IP of **Eni**.

                     */
                    std::string m_targetIp;
                    bool m_targetIpHasBeenSet;

                    /**
                     * Backend service name. Currently, only CVM backend services return a valid name.
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * Backend service status. Valid values:
- **Adding**: Adding.
- **Active**: available status.
- **Configuring**: configuration in progress.
- **Removing**: removing.
                     */
                    std::string m_targetStatus;
                    bool m_targetStatusHasBeenSet;

                    /**
                     * Backend service type.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Weight of the backend service. Value range: **0-100**. Default value: **100**. If the weight is set to **0**, no request will be forwarded to this backend service.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_TARGETOUTPUT_H_
