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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_BRUTEATTACK_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_BRUTEATTACK_H_

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
                * Brute force attack list
                */
                class BruteAttack : public AbstractModel
                {
                public:
                    BruteAttack();
                    ~BruteAttack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event ID.
                     * @return Id Event ID.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Event ID.
                     * @param _id Event ID.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取Brute force attack event status
<li>BRUTEATTACK_FAIL_ACCOUNT: brute force attack event - failure (the account exists)</li>
<li>BRUTEATTACK_FAIL_NOACCOUNT: brute force attack event - failure (the account does not exist)</li>
<li>BRUTEATTACK_SUCCESS: brute force attack event - success </li>
                     * @return Status Brute force attack event status
<li>BRUTEATTACK_FAIL_ACCOUNT: brute force attack event - failure (the account exists)</li>
<li>BRUTEATTACK_FAIL_NOACCOUNT: brute force attack event - failure (the account does not exist)</li>
<li>BRUTEATTACK_SUCCESS: brute force attack event - success </li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Brute force attack event status
<li>BRUTEATTACK_FAIL_ACCOUNT: brute force attack event - failure (the account exists)</li>
<li>BRUTEATTACK_FAIL_NOACCOUNT: brute force attack event - failure (the account does not exist)</li>
<li>BRUTEATTACK_SUCCESS: brute force attack event - success </li>
                     * @param _status Brute force attack event status
<li>BRUTEATTACK_FAIL_ACCOUNT: brute force attack event - failure (the account exists)</li>
<li>BRUTEATTACK_FAIL_NOACCOUNT: brute force attack event - failure (the account does not exist)</li>
<li>BRUTEATTACK_SUCCESS: brute force attack event - success </li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Username.
                     * @return UserName Username.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
                     * @param _userName Username.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

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
                     * 获取Number of attempts.
                     * @return Count Number of attempts.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of attempts.
                     * @param _count Number of attempts.
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Occurrence time.
                     * @return CreateTime Occurrence time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Occurrence time.
                     * @param _createTime Occurrence time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Server name.
                     * @return MachineName Server name.
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Server name.
                     * @param _machineName Server name.
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取CWP agent `UUID`.
                     * @return Uuid CWP agent `UUID`.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP agent `UUID`.
                     * @param _uuid CWP agent `UUID`.
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Whether the server enables CWP Pro.
                     * @return IsProVersion Whether the server enables CWP Pro.
                     * 
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 设置Whether the server enables CWP Pro.
                     * @param _isProVersion Whether the server enables CWP Pro.
                     * 
                     */
                    void SetIsProVersion(const bool& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     * 
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取Whether the server is banned.
                     * @return BanStatus Whether the server is banned.
                     * 
                     */
                    std::string GetBanStatus() const;

                    /**
                     * 设置Whether the server is banned.
                     * @param _banStatus Whether the server is banned.
                     * 
                     */
                    void SetBanStatus(const std::string& _banStatus);

                    /**
                     * 判断参数 BanStatus 是否已赋值
                     * @return BanStatus 是否已赋值
                     * 
                     */
                    bool BanStatusHasBeenSet() const;

                    /**
                     * 获取Server `UUID`
                     * @return Quuid Server `UUID`
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Server `UUID`
                     * @param _quuid Server `UUID`
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

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
                     * Brute force attack event status
<li>BRUTEATTACK_FAIL_ACCOUNT: brute force attack event - failure (the account exists)</li>
<li>BRUTEATTACK_FAIL_NOACCOUNT: brute force attack event - failure (the account does not exist)</li>
<li>BRUTEATTACK_SUCCESS: brute force attack event - success </li>
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
                     * Source IP.
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * Number of attempts.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Occurrence time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Server name.
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * CWP agent `UUID`.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Whether the server enables CWP Pro.
                     */
                    bool m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * Whether the server is banned.
                     */
                    std::string m_banStatus;
                    bool m_banStatusHasBeenSet;

                    /**
                     * Server `UUID`
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_BRUTEATTACK_H_
