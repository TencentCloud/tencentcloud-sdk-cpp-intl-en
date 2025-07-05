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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_WEEKLYREPORTBRUTEATTACK_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_WEEKLYREPORTBRUTEATTACK_H_

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
                * Brute force attack data in weekly CWP Pro report.
                */
                class WeeklyReportBruteAttack : public AbstractModel
                {
                public:
                    WeeklyReportBruteAttack();
                    ~WeeklyReportBruteAttack() = default;
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
                     * 获取Hacked username.
                     * @return Username Hacked username.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Hacked username.
                     * @param _username Hacked username.
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
                     * 获取Attack time.
                     * @return AttackTime Attack time.
                     * 
                     */
                    std::string GetAttackTime() const;

                    /**
                     * 设置Attack time.
                     * @param _attackTime Attack time.
                     * 
                     */
                    void SetAttackTime(const std::string& _attackTime);

                    /**
                     * 判断参数 AttackTime 是否已赋值
                     * @return AttackTime 是否已赋值
                     * 
                     */
                    bool AttackTimeHasBeenSet() const;

                private:

                    /**
                     * Server IP.
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Hacked username.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

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
                     * Attack time.
                     */
                    std::string m_attackTime;
                    bool m_attackTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_WEEKLYREPORTBRUTEATTACK_H_
