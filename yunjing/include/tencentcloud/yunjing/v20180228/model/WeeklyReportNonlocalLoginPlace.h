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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_WEEKLYREPORTNONLOCALLOGINPLACE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_WEEKLYREPORTNONLOCALLOGINPLACE_H_

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
                * Unusual login location data in weekly CWP Pro report
                */
                class WeeklyReportNonlocalLoginPlace : public AbstractModel
                {
                public:
                    WeeklyReportNonlocalLoginPlace();
                    ~WeeklyReportNonlocalLoginPlace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server IP.
                     * @return MachineIp Server IP.
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Server IP.
                     * @param _machineIp Server IP.
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Username.
                     * @return Username Username.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Username.
                     * @param _username Username.
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Source IP.
                     * @return SrcIp Source IP.
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置Source IP.
                     * @param _srcIp Source IP.
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取Country/Region ID.
                     * @return Country Country/Region ID.
                     * 
                     */
                    uint64_t GetCountry() const;

                    /**
                     * 设置Country/Region ID.
                     * @param _country Country/Region ID.
                     * 
                     */
                    void SetCountry(const uint64_t& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取Province/State ID.
                     * @return Province Province/State ID.
                     * 
                     */
                    uint64_t GetProvince() const;

                    /**
                     * 设置Province/State ID.
                     * @param _province Province/State ID.
                     * 
                     */
                    void SetProvince(const uint64_t& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取City ID.
                     * @return City City ID.
                     * 
                     */
                    uint64_t GetCity() const;

                    /**
                     * 设置City ID.
                     * @param _city City ID.
                     * 
                     */
                    void SetCity(const uint64_t& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Login time.
                     * @return LoginTime Login time.
                     * 
                     */
                    std::string GetLoginTime() const;

                    /**
                     * 设置Login time.
                     * @param _loginTime Login time.
                     * 
                     */
                    void SetLoginTime(const std::string& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                private:

                    /**
                     * Server IP.
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Source IP.
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

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
                     * City ID.
                     */
                    uint64_t m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Login time.
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_WEEKLYREPORTNONLOCALLOGINPLACE_H_
