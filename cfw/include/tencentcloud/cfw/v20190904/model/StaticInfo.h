/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_STATICINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_STATICINFO_H_

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
                * Most frequent attacker statistics
 
                */
                class StaticInfo : public AbstractModel
                {
                public:
                    StaticInfo();
                    ~StaticInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number
                     * @return Num Number
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置Number
                     * @param _num Number
                     * 
                     */
                    void SetNum(const int64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取Port
                     * @return Port Port
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port
                     * @param _port Port
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取IP
                     * @return Ip IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP
                     * @param _ip IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Address
                     * @return Address Address
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address
                     * @param _address Address
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Asset ID
                     * @return InsID Asset ID
                     * 
                     */
                    std::string GetInsID() const;

                    /**
                     * 设置Asset ID
                     * @param _insID Asset ID
                     * 
                     */
                    void SetInsID(const std::string& _insID);

                    /**
                     * 判断参数 InsID 是否已赋值
                     * @return InsID 是否已赋值
                     * 
                     */
                    bool InsIDHasBeenSet() const;

                    /**
                     * 获取Asset name
                     * @return InsName Asset name
                     * 
                     */
                    std::string GetInsName() const;

                    /**
                     * 设置Asset name
                     * @param _insName Asset name
                     * 
                     */
                    void SetInsName(const std::string& _insName);

                    /**
                     * 判断参数 InsName 是否已赋值
                     * @return InsName 是否已赋值
                     * 
                     */
                    bool InsNameHasBeenSet() const;

                private:

                    /**
                     * Number
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * Port
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Address
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Asset ID
                     */
                    std::string m_insID;
                    bool m_insIDHasBeenSet;

                    /**
                     * Asset name
                     */
                    std::string m_insName;
                    bool m_insNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_STATICINFO_H_
