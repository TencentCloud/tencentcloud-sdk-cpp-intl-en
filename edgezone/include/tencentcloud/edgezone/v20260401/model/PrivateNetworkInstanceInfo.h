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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PRIVATENETWORKINSTANCEINFO_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PRIVATENETWORKINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Private network instance information
                */
                class PrivateNetworkInstanceInfo : public AbstractModel
                {
                public:
                    PrivateNetworkInstanceInfo();
                    ~PrivateNetworkInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Private network instance ID
                     * @return NetworkInstanceId Private network instance ID
                     * 
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置Private network instance ID
                     * @param _networkInstanceId Private network instance ID
                     * 
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     * 
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取Private network instance name
                     * @return NetworkInstanceName Private network instance name
                     * 
                     */
                    std::string GetNetworkInstanceName() const;

                    /**
                     * 设置Private network instance name
                     * @param _networkInstanceName Private network instance name
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
                     * 获取Network address.
                     * @return Network Network address.
                     * 
                     */
                    std::string GetNetwork() const;

                    /**
                     * 设置Network address.
                     * @param _network Network address.
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
                     * 获取Network mask
                     * @return Mask Network mask
                     * 
                     */
                    int64_t GetMask() const;

                    /**
                     * 设置Network mask
                     * @param _mask Network mask
                     * 
                     */
                    void SetMask(const int64_t& _mask);

                    /**
                     * 判断参数 Mask 是否已赋值
                     * @return Mask 是否已赋值
                     * 
                     */
                    bool MaskHasBeenSet() const;

                    /**
                     * 获取Number of associated physical machines
                     * @return ServerCount Number of associated physical machines
                     * 
                     */
                    int64_t GetServerCount() const;

                    /**
                     * 设置Number of associated physical machines
                     * @param _serverCount Number of associated physical machines
                     * 
                     */
                    void SetServerCount(const int64_t& _serverCount);

                    /**
                     * 判断参数 ServerCount 是否已赋值
                     * @return ServerCount 是否已赋值
                     * 
                     */
                    bool ServerCountHasBeenSet() const;

                    /**
                     * 获取Available Ip quantity
                     * @return AvailableIpCount Available Ip quantity
                     * 
                     */
                    int64_t GetAvailableIpCount() const;

                    /**
                     * 设置Available Ip quantity
                     * @param _availableIpCount Available Ip quantity
                     * 
                     */
                    void SetAvailableIpCount(const int64_t& _availableIpCount);

                    /**
                     * 判断参数 AvailableIpCount 是否已赋值
                     * @return AvailableIpCount 是否已赋值
                     * 
                     */
                    bool AvailableIpCountHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreatedAt Creation time.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time.
                     * @param _createdAt Creation time.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdatedAt Update time
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time
                     * @param _updatedAt Update time
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * Private network instance ID
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * Private network instance name
                     */
                    std::string m_networkInstanceName;
                    bool m_networkInstanceNameHasBeenSet;

                    /**
                     * Availability zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Network address.
                     */
                    std::string m_network;
                    bool m_networkHasBeenSet;

                    /**
                     * Network mask
                     */
                    int64_t m_mask;
                    bool m_maskHasBeenSet;

                    /**
                     * Number of associated physical machines
                     */
                    int64_t m_serverCount;
                    bool m_serverCountHasBeenSet;

                    /**
                     * Available Ip quantity
                     */
                    int64_t m_availableIpCount;
                    bool m_availableIpCountHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PRIVATENETWORKINSTANCEINFO_H_
