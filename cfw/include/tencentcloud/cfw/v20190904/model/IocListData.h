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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_IOCLISTDATA_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_IOCLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Blocklist, allowlist, IOC list
                */
                class IocListData : public AbstractModel
                {
                public:
                    IocListData();
                    ~IocListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP address to be handled. Either IP or Domain is required.
                     * @return IP IP address to be handled. Either IP or Domain is required.
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP address to be handled. Either IP or Domain is required.
                     * @param _iP IP address to be handled. Either IP or Domain is required.
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取0 or 1. 0: outbound; 1: inbound
                     * @return Direction 0 or 1. 0: outbound; 1: inbound
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置0 or 1. 0: outbound; 1: inbound
                     * @param _direction 0 or 1. 0: outbound; 1: inbound
                     * 
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Domain name to be handled. Either IP or Domain is required.
                     * @return Domain Domain name to be handled. Either IP or Domain is required.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name to be handled. Either IP or Domain is required.
                     * @param _domain Domain name to be handled. Either IP or Domain is required.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * IP address to be handled. Either IP or Domain is required.
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 0 or 1. 0: outbound; 1: inbound
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Domain name to be handled. Either IP or Domain is required.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_IOCLISTDATA_H_
