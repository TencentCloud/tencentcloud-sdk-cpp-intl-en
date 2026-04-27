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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEPRIVATENETWORKINSTANCEREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEPRIVATENETWORKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * CreatePrivateNetworkInstance request structure.
                */
                class CreatePrivateNetworkInstanceRequest : public AbstractModel
                {
                public:
                    CreatePrivateNetworkInstanceRequest();
                    ~CreatePrivateNetworkInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取New instance name
                     * @return NetworkInstanceName New instance name
                     * 
                     */
                    std::string GetNetworkInstanceName() const;

                    /**
                     * 设置New instance name
                     * @param _networkInstanceName New instance name
                     * 
                     */
                    void SetNetworkInstanceName(const std::string& _networkInstanceName);

                    /**
                     * 判断参数 NetworkInstanceName 是否已赋值
                     * @return NetworkInstanceName 是否已赋值
                     * 
                     */
                    bool NetworkInstanceNameHasBeenSet() const;

                    /**
                     * 获取Availability zone ID.
                     * @return ZoneId Availability zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Availability zone ID.
                     * @param _zoneId Availability zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The network address (host bits must be all 0s) must fall into one of the following RFC 1918 private ranges: `10.0.0.0/8`, `172.16.0.0/12`, `192.168.0.0/16`.
                     * @return Network The network address (host bits must be all 0s) must fall into one of the following RFC 1918 private ranges: `10.0.0.0/8`, `172.16.0.0/12`, `192.168.0.0/16`.
                     * 
                     */
                    std::string GetNetwork() const;

                    /**
                     * 设置The network address (host bits must be all 0s) must fall into one of the following RFC 1918 private ranges: `10.0.0.0/8`, `172.16.0.0/12`, `192.168.0.0/16`.
                     * @param _network The network address (host bits must be all 0s) must fall into one of the following RFC 1918 private ranges: `10.0.0.0/8`, `172.16.0.0/12`, `192.168.0.0/16`.
                     * 
                     */
                    void SetNetwork(const std::string& _network);

                    /**
                     * 判断参数 Network 是否已赋值
                     * @return Network 是否已赋值
                     * 
                     */
                    bool NetworkHasBeenSet() const;

                    /**
                     * 获取Mask digits. The upper limit is fixed at `28`, while the lower limit depends on the private segment it belongs to: `10.0.0.0/8` allows `8~28`, `172.16.0.0/12` allows `12~28`, `192.168.0.0/16` allows `16~28`. It must together form a valid network address with Network (host bits all set to 0).
                     * @return Mask Mask digits. The upper limit is fixed at `28`, while the lower limit depends on the private segment it belongs to: `10.0.0.0/8` allows `8~28`, `172.16.0.0/12` allows `12~28`, `192.168.0.0/16` allows `16~28`. It must together form a valid network address with Network (host bits all set to 0).
                     * 
                     */
                    int64_t GetMask() const;

                    /**
                     * 设置Mask digits. The upper limit is fixed at `28`, while the lower limit depends on the private segment it belongs to: `10.0.0.0/8` allows `8~28`, `172.16.0.0/12` allows `12~28`, `192.168.0.0/16` allows `16~28`. It must together form a valid network address with Network (host bits all set to 0).
                     * @param _mask Mask digits. The upper limit is fixed at `28`, while the lower limit depends on the private segment it belongs to: `10.0.0.0/8` allows `8~28`, `172.16.0.0/12` allows `12~28`, `192.168.0.0/16` allows `16~28`. It must together form a valid network address with Network (host bits all set to 0).
                     * 
                     */
                    void SetMask(const int64_t& _mask);

                    /**
                     * 判断参数 Mask 是否已赋值
                     * @return Mask 是否已赋值
                     * 
                     */
                    bool MaskHasBeenSet() const;

                private:

                    /**
                     * New instance name
                     */
                    std::string m_networkInstanceName;
                    bool m_networkInstanceNameHasBeenSet;

                    /**
                     * Availability zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The network address (host bits must be all 0s) must fall into one of the following RFC 1918 private ranges: `10.0.0.0/8`, `172.16.0.0/12`, `192.168.0.0/16`.
                     */
                    std::string m_network;
                    bool m_networkHasBeenSet;

                    /**
                     * Mask digits. The upper limit is fixed at `28`, while the lower limit depends on the private segment it belongs to: `10.0.0.0/8` allows `8~28`, `172.16.0.0/12` allows `12~28`, `192.168.0.0/16` allows `16~28`. It must together form a valid network address with Network (host bits all set to 0).
                     */
                    int64_t m_mask;
                    bool m_maskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEPRIVATENETWORKINSTANCEREQUEST_H_
