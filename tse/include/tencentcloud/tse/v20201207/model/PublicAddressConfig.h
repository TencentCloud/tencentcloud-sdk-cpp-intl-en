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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_PUBLICADDRESSCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_PUBLICADDRESSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Public IP address info
                */
                class PublicAddressConfig : public AbstractModel
                {
                public:
                    PublicAddressConfig();
                    ~PublicAddressConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Public ip address
                     * @return Vip Public ip address
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Public ip address
                     * @param _vip Public ip address
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Maximum public network bandwidth
                     * @return InternetMaxBandwidthOut Maximum public network bandwidth
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Maximum public network bandwidth
                     * @param _internetMaxBandwidthOut Maximum public network bandwidth
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取public network associated group id
                     * @return GroupId public network associated group id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置public network associated group id
                     * @param _groupId public network associated group id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Public network associated group name
                     * @return GroupName Public network associated group name
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Public network associated group name
                     * @param _groupName Public network associated group name
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Public network CLB id
                     * @return NetworkId Public network CLB id
                     * 
                     */
                    std::string GetNetworkId() const;

                    /**
                     * 设置Public network CLB id
                     * @param _networkId Public network CLB id
                     * 
                     */
                    void SetNetworkId(const std::string& _networkId);

                    /**
                     * 判断参数 NetworkId 是否已赋值
                     * @return NetworkId 是否已赋值
                     * 
                     */
                    bool NetworkIdHasBeenSet() const;

                    /**
                     * 获取Description of public network CLB
                     * @return Description Description of public network CLB
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of public network CLB
                     * @param _description Description of public network CLB
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Public ip address
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Maximum public network bandwidth
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * public network associated group id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Public network associated group name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Public network CLB id
                     */
                    std::string m_networkId;
                    bool m_networkIdHasBeenSet;

                    /**
                     * Description of public network CLB
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_PUBLICADDRESSCONFIG_H_
