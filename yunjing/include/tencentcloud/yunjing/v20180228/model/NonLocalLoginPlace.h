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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_NONLOCALLOGINPLACE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_NONLOCALLOGINPLACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Unusual login location
                */
                class NonLocalLoginPlace : public AbstractModel
                {
                public:
                    NonLocalLoginPlace();
                    ~NonLocalLoginPlace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event ID.
                     * @return Id Event ID.
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Event ID.
                     * @param Id Event ID.
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Server IP.
                     * @return MachineIp Server IP.
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Server IP.
                     * @param MachineIp Server IP.
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Login status
<li>NON_LOCAL_LOGIN: unusual login location</li>
<li>NORMAL_LOGIN: intended login</li>
                     * @return Status Login status
<li>NON_LOCAL_LOGIN: unusual login location</li>
<li>NORMAL_LOGIN: intended login</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Login status
<li>NON_LOCAL_LOGIN: unusual login location</li>
<li>NORMAL_LOGIN: intended login</li>
                     * @param Status Login status
<li>NON_LOCAL_LOGIN: unusual login location</li>
<li>NORMAL_LOGIN: intended login</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Username.
                     * @return UserName Username.
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
                     * @param UserName Username.
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取City ID.
                     * @return City City ID.
                     */
                    uint64_t GetCity() const;

                    /**
                     * 设置City ID.
                     * @param City City ID.
                     */
                    void SetCity(const uint64_t& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Country/Region ID.
                     * @return Country Country/Region ID.
                     */
                    uint64_t GetCountry() const;

                    /**
                     * 设置Country/Region ID.
                     * @param Country Country/Region ID.
                     */
                    void SetCountry(const uint64_t& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取Province/State ID.
                     * @return Province Province/State ID.
                     */
                    uint64_t GetProvince() const;

                    /**
                     * 设置Province/State ID.
                     * @param Province Province/State ID.
                     */
                    void SetProvince(const uint64_t& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取Login IP.
                     * @return SrcIp Login IP.
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置Login IP.
                     * @param SrcIp Login IP.
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取Server name.
                     * @return MachineName Server name.
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Server name.
                     * @param MachineName Server name.
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Login time.
                     * @return LoginTime Login time.
                     */
                    std::string GetLoginTime() const;

                    /**
                     * 设置Login time.
                     * @param LoginTime Login time.
                     */
                    void SetLoginTime(const std::string& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取CWP agent `Uuid`.
                     * @return Uuid CWP agent `Uuid`.
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP agent `Uuid`.
                     * @param Uuid CWP agent `Uuid`.
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * Event ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Server IP.
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Login status
<li>NON_LOCAL_LOGIN: unusual login location</li>
<li>NORMAL_LOGIN: intended login</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * City ID.
                     */
                    uint64_t m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Country/Region ID.
                     */
                    uint64_t m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * Province/State ID.
                     */
                    uint64_t m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * Login IP.
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * Server name.
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Login time.
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * CWP agent `Uuid`.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_NONLOCALLOGINPLACE_H_
