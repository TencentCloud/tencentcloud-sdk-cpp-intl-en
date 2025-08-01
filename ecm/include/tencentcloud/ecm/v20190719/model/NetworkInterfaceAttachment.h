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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_NETWORKINTERFACEATTACHMENT_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_NETWORKINTERFACEATTACHMENT_H_

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
                * Binding relationship of the ENI
                */
                class NetworkInterfaceAttachment : public AbstractModel
                {
                public:
                    NetworkInterfaceAttachment();
                    ~NetworkInterfaceAttachment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CVM instance ID.
                     * @return InstanceId CVM instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CVM instance ID.
                     * @param _instanceId CVM instance ID.
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
                     * 获取Serial number of the ENI in the CVM instance.
                     * @return DeviceIndex Serial number of the ENI in the CVM instance.
                     * 
                     */
                    uint64_t GetDeviceIndex() const;

                    /**
                     * 设置Serial number of the ENI in the CVM instance.
                     * @param _deviceIndex Serial number of the ENI in the CVM instance.
                     * 
                     */
                    void SetDeviceIndex(const uint64_t& _deviceIndex);

                    /**
                     * 判断参数 DeviceIndex 是否已赋值
                     * @return DeviceIndex 是否已赋值
                     * 
                     */
                    bool DeviceIndexHasBeenSet() const;

                    /**
                     * 获取Account information of the CVM instance owner.
                     * @return InstanceAccountId Account information of the CVM instance owner.
                     * 
                     */
                    std::string GetInstanceAccountId() const;

                    /**
                     * 设置Account information of the CVM instance owner.
                     * @param _instanceAccountId Account information of the CVM instance owner.
                     * 
                     */
                    void SetInstanceAccountId(const std::string& _instanceAccountId);

                    /**
                     * 判断参数 InstanceAccountId 是否已赋值
                     * @return InstanceAccountId 是否已赋值
                     * 
                     */
                    bool InstanceAccountIdHasBeenSet() const;

                    /**
                     * 获取Binding time.
                     * @return AttachTime Binding time.
                     * 
                     */
                    std::string GetAttachTime() const;

                    /**
                     * 设置Binding time.
                     * @param _attachTime Binding time.
                     * 
                     */
                    void SetAttachTime(const std::string& _attachTime);

                    /**
                     * 判断参数 AttachTime 是否已赋值
                     * @return AttachTime 是否已赋值
                     * 
                     */
                    bool AttachTimeHasBeenSet() const;

                private:

                    /**
                     * CVM instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Serial number of the ENI in the CVM instance.
                     */
                    uint64_t m_deviceIndex;
                    bool m_deviceIndexHasBeenSet;

                    /**
                     * Account information of the CVM instance owner.
                     */
                    std::string m_instanceAccountId;
                    bool m_instanceAccountIdHasBeenSet;

                    /**
                     * Binding time.
                     */
                    std::string m_attachTime;
                    bool m_attachTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_NETWORKINTERFACEATTACHMENT_H_
