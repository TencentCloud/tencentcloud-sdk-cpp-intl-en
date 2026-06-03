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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ADDRESSINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ADDRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Instance address information.
                */
                class AddressInfo : public AbstractModel
                {
                public:
                    AddressInfo();
                    ~AddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID identifier of the address.
                     * @return ResourceId Resource ID identifier of the address.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID identifier of the address.
                     * @param _resourceId Resource ID identifier of the address.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取The vpc where the address resides.
                     * @return UniqVpcId The vpc where the address resides.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置The vpc where the address resides.
                     * @param _uniqVpcId The vpc where the address resides.
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取The subnet where the address resides.
                     * @return UniqSubnetId The subnet where the address resides.
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置The subnet where the address resides.
                     * @param _uniqSubnetId The subnet where the address resides.
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取vip address.
                     * @return Vip vip address.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置vip address.
                     * @param _vip vip address.
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
                     * 获取The port of the address.
                     * @return VPort The port of the address.
                     * 
                     */
                    int64_t GetVPort() const;

                    /**
                     * 设置The port of the address.
                     * @param _vPort The port of the address.
                     * 
                     */
                    void SetVPort(const int64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取Public network address domain name.
                     * @return WanDomain Public network address domain name.
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置Public network address domain name.
                     * @param _wanDomain Public network address domain name.
                     * 
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取Public network address port.
                     * @return WanPort Public network address port.
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置Public network address port.
                     * @param _wanPort Public network address port.
                     * 
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     * 
                     */
                    bool WanPortHasBeenSet() const;

                private:

                    /**
                     * Resource ID identifier of the address.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * The vpc where the address resides.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * The subnet where the address resides.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * vip address.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * The port of the address.
                     */
                    int64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * Public network address domain name.
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * Public network address port.
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ADDRESSINFO_H_
