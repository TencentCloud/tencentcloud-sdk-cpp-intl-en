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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CSIPMACHINEEXTRAINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CSIPMACHINEEXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Additional asset information of the host in the CSIP scan task
                */
                class CSIPMachineExtraInfo : public AbstractModel
                {
                public:
                    CSIPMachineExtraInfo();
                    ~CSIPMachineExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Public IP address</p>
                     * @return WanIP <p>Public IP address</p>
                     * 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置<p>Public IP address</p>
                     * @param _wanIP <p>Public IP address</p>
                     * 
                     */
                    void SetWanIP(const std::string& _wanIP);

                    /**
                     * 判断参数 WanIP 是否已赋值
                     * @return WanIP 是否已赋值
                     * 
                     */
                    bool WanIPHasBeenSet() const;

                    /**
                     * 获取<p>Private IP address.</p>
                     * @return PrivateIP <p>Private IP address.</p>
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置<p>Private IP address.</p>
                     * @param _privateIP <p>Private IP address.</p>
                     * 
                     */
                    void SetPrivateIP(const std::string& _privateIP);

                    /**
                     * 判断参数 PrivateIP 是否已赋值
                     * @return PrivateIP 是否已赋值
                     * 
                     */
                    bool PrivateIPHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID (unique ID of CVM/BM/ECM)</p>
                     * @return InstanceID <p>Instance ID (unique ID of CVM/BM/ECM)</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>Instance ID (unique ID of CVM/BM/ECM)</p>
                     * @param _instanceID <p>Instance ID (unique ID of CVM/BM/ECM)</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                private:

                    /**
                     * <p>Public IP address</p>
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * <p>Private IP address.</p>
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * <p>Instance ID (unique ID of CVM/BM/ECM)</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CSIPMACHINEEXTRAINFO_H_
