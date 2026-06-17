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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINSTANCESTATUS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINSTANCESTATUS_H_

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
                * It is used for the health check status of the target group backend RS.
                */
                class TargetGroupInstanceStatus : public AbstractModel
                {
                public:
                    TargetGroupInstanceStatus();
                    ~TargetGroupInstanceStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP of backend RS
                     * @return InstanceIp IP of backend RS
                     * 
                     */
                    std::string GetInstanceIp() const;

                    /**
                     * 设置IP of backend RS
                     * @param _instanceIp IP of backend RS
                     * 
                     */
                    void SetInstanceIp(const std::string& _instanceIp);

                    /**
                     * 判断参数 InstanceIp 是否已赋值
                     * @return InstanceIp 是否已赋值
                     * 
                     */
                    bool InstanceIpHasBeenSet() const;

                    /**
                     * 获取Health check status. Parameter values and meanings are as follows:
● on: Indicates checking.
● off: means health check disabled.
● Health: Indicates healthy.
● unhealth: indicates being abnormal.
                     * @return Status Health check status. Parameter values and meanings are as follows:
● on: Indicates checking.
● off: means health check disabled.
● Health: Indicates healthy.
● unhealth: indicates being abnormal.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Health check status. Parameter values and meanings are as follows:
● on: Indicates checking.
● off: means health check disabled.
● Health: Indicates healthy.
● unhealth: indicates being abnormal.
                     * @param _status Health check status. Parameter values and meanings are as follows:
● on: Indicates checking.
● off: means health check disabled.
● Health: Indicates healthy.
● unhealth: indicates being abnormal.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Port.
                     * @return Port Port.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port.
                     * @param _port Port.
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
                     * 获取NIC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EniId NIC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEniId() const;

                    /**
                     * 设置NIC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eniId NIC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEniId(const std::string& _eniId);

                    /**
                     * 判断参数 EniId 是否已赋值
                     * @return EniId 是否已赋值
                     * 
                     */
                    bool EniIdHasBeenSet() const;

                private:

                    /**
                     * IP of backend RS
                     */
                    std::string m_instanceIp;
                    bool m_instanceIpHasBeenSet;

                    /**
                     * Health check status. Parameter values and meanings are as follows:
● on: Indicates checking.
● off: means health check disabled.
● Health: Indicates healthy.
● unhealth: indicates being abnormal.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Port.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * NIC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eniId;
                    bool m_eniIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINSTANCESTATUS_H_
