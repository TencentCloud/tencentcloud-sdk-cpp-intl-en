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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYBLOCKIPLISTREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYBLOCKIPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyBlockIPList request structure.
                */
                class ModifyBlockIPListRequest : public AbstractModel
                {
                public:
                    ModifyBlockIPListRequest();
                    ~ModifyBlockIPListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB instance ID
                     * @return LoadBalancerIds CLB instance ID
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置CLB instance ID
                     * @param _loadBalancerIds CLB instance ID
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取Operation type. Valid values:
<li> add_customized_field (sets header initially to enable the blocklist feature)</li>
<li> set_customized_field (modifies header)</li>
<li> del_customized_field (deletes header)</li>
<li> add_blocked (adds IPs to blocklist)</li>
<li> del_blocked (deletes IPs from blocklist)</li>
<li> flush_blocked (clears blocklist)</li>
                     * @return Type Operation type. Valid values:
<li> add_customized_field (sets header initially to enable the blocklist feature)</li>
<li> set_customized_field (modifies header)</li>
<li> del_customized_field (deletes header)</li>
<li> add_blocked (adds IPs to blocklist)</li>
<li> del_blocked (deletes IPs from blocklist)</li>
<li> flush_blocked (clears blocklist)</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Operation type. Valid values:
<li> add_customized_field (sets header initially to enable the blocklist feature)</li>
<li> set_customized_field (modifies header)</li>
<li> del_customized_field (deletes header)</li>
<li> add_blocked (adds IPs to blocklist)</li>
<li> del_blocked (deletes IPs from blocklist)</li>
<li> flush_blocked (clears blocklist)</li>
                     * @param _type Operation type. Valid values:
<li> add_customized_field (sets header initially to enable the blocklist feature)</li>
<li> set_customized_field (modifies header)</li>
<li> del_customized_field (deletes header)</li>
<li> add_blocked (adds IPs to blocklist)</li>
<li> del_blocked (deletes IPs from blocklist)</li>
<li> flush_blocked (clears blocklist)</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Header field that stores real client IPs
                     * @return ClientIPField Header field that stores real client IPs
                     * 
                     */
                    std::string GetClientIPField() const;

                    /**
                     * 设置Header field that stores real client IPs
                     * @param _clientIPField Header field that stores real client IPs
                     * 
                     */
                    void SetClientIPField(const std::string& _clientIPField);

                    /**
                     * 判断参数 ClientIPField 是否已赋值
                     * @return ClientIPField 是否已赋值
                     * 
                     */
                    bool ClientIPFieldHasBeenSet() const;

                    /**
                     * 获取List of blocked IPs. The array can contain up to 200,000 entries in one operation.
                     * @return BlockIPList List of blocked IPs. The array can contain up to 200,000 entries in one operation.
                     * 
                     */
                    std::vector<std::string> GetBlockIPList() const;

                    /**
                     * 设置List of blocked IPs. The array can contain up to 200,000 entries in one operation.
                     * @param _blockIPList List of blocked IPs. The array can contain up to 200,000 entries in one operation.
                     * 
                     */
                    void SetBlockIPList(const std::vector<std::string>& _blockIPList);

                    /**
                     * 判断参数 BlockIPList 是否已赋值
                     * @return BlockIPList 是否已赋值
                     * 
                     */
                    bool BlockIPListHasBeenSet() const;

                    /**
                     * 获取Expiration time in seconds. Default value: 3600
                     * @return ExpireTime Expiration time in seconds. Default value: 3600
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Expiration time in seconds. Default value: 3600
                     * @param _expireTime Expiration time in seconds. Default value: 3600
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取IP adding policy. Valid value: fifo (if a blocklist is full, new IPs added to the blocklist will adopt the first-in first-out policy)
                     * @return AddStrategy IP adding policy. Valid value: fifo (if a blocklist is full, new IPs added to the blocklist will adopt the first-in first-out policy)
                     * 
                     */
                    std::string GetAddStrategy() const;

                    /**
                     * 设置IP adding policy. Valid value: fifo (if a blocklist is full, new IPs added to the blocklist will adopt the first-in first-out policy)
                     * @param _addStrategy IP adding policy. Valid value: fifo (if a blocklist is full, new IPs added to the blocklist will adopt the first-in first-out policy)
                     * 
                     */
                    void SetAddStrategy(const std::string& _addStrategy);

                    /**
                     * 判断参数 AddStrategy 是否已赋值
                     * @return AddStrategy 是否已赋值
                     * 
                     */
                    bool AddStrategyHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * Operation type. Valid values:
<li> add_customized_field (sets header initially to enable the blocklist feature)</li>
<li> set_customized_field (modifies header)</li>
<li> del_customized_field (deletes header)</li>
<li> add_blocked (adds IPs to blocklist)</li>
<li> del_blocked (deletes IPs from blocklist)</li>
<li> flush_blocked (clears blocklist)</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Header field that stores real client IPs
                     */
                    std::string m_clientIPField;
                    bool m_clientIPFieldHasBeenSet;

                    /**
                     * List of blocked IPs. The array can contain up to 200,000 entries in one operation.
                     */
                    std::vector<std::string> m_blockIPList;
                    bool m_blockIPListHasBeenSet;

                    /**
                     * Expiration time in seconds. Default value: 3600
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * IP adding policy. Valid value: fifo (if a blocklist is full, new IPs added to the blocklist will adopt the first-in first-out policy)
                     */
                    std::string m_addStrategy;
                    bool m_addStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYBLOCKIPLISTREQUEST_H_
