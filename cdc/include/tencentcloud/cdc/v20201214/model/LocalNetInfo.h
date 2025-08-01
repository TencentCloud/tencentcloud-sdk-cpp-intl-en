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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_LOCALNETINFO_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_LOCALNETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * Local network information
                */
                class LocalNetInfo : public AbstractModel
                {
                public:
                    LocalNetInfo();
                    ~LocalNetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Protocol 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return Protocol Protocol 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _protocol Protocol 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Network id 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return VpcId Network id 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Network id 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _vpcId Network id 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Routing information 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return BGPRoute Routing information 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetBGPRoute() const;

                    /**
                     * 设置Routing information 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _bGPRoute Routing information 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetBGPRoute(const std::string& _bGPRoute);

                    /**
                     * 判断参数 BGPRoute 是否已赋值
                     * @return BGPRoute 是否已赋值
                     * 
                     */
                    bool BGPRouteHasBeenSet() const;

                    /**
                     * 获取Local IP 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return LocalIp Local IP 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetLocalIp() const;

                    /**
                     * 设置Local IP 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _localIp Local IP 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetLocalIp(const std::string& _localIp);

                    /**
                     * 判断参数 LocalIp 是否已赋值
                     * @return LocalIp 是否已赋值
                     * 
                     */
                    bool LocalIpHasBeenSet() const;

                private:

                    /**
                     * Protocol 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Network id 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Routing information 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_bGPRoute;
                    bool m_bGPRouteHasBeenSet;

                    /**
                     * Local IP 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_localIp;
                    bool m_localIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_LOCALNETINFO_H_
