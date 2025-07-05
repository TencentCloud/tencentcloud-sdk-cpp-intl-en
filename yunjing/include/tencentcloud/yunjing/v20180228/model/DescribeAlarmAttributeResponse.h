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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEALARMATTRIBUTERESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEALARMATTRIBUTERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAlarmAttribute response structure.
                */
                class DescribeAlarmAttributeResponse : public AbstractModel
                {
                public:
                    DescribeAlarmAttributeResponse();
                    ~DescribeAlarmAttributeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CWP deactivation alarm status:
<li>OPEN: alarm enabled</li>
<li>CLOSE: alarm disabled</li>
                     * @return Offline CWP deactivation alarm status:
<li>OPEN: alarm enabled</li>
<li>CLOSE: alarm disabled</li>
                     * 
                     */
                    std::string GetOffline() const;

                    /**
                     * 判断参数 Offline 是否已赋值
                     * @return Offline 是否已赋值
                     * 
                     */
                    bool OfflineHasBeenSet() const;

                    /**
                     * 获取Trojan discovery alarm status:
<li>OPEN: alarm enabled</li>
<li>CLOSE: alarm disabled</li>
                     * @return Malware Trojan discovery alarm status:
<li>OPEN: alarm enabled</li>
<li>CLOSE: alarm disabled</li>
                     * 
                     */
                    std::string GetMalware() const;

                    /**
                     * 判断参数 Malware 是否已赋值
                     * @return Malware 是否已赋值
                     * 
                     */
                    bool MalwareHasBeenSet() const;

                    /**
                     * 获取Unusual login location discovery alarm status:
<li>OPEN: alarm enabled</li>
<li>CLOSE: alarm disabled</li>
                     * @return NonlocalLogin Unusual login location discovery alarm status:
<li>OPEN: alarm enabled</li>
<li>CLOSE: alarm disabled</li>
                     * 
                     */
                    std::string GetNonlocalLogin() const;

                    /**
                     * 判断参数 NonlocalLogin 是否已赋值
                     * @return NonlocalLogin 是否已赋值
                     * 
                     */
                    bool NonlocalLoginHasBeenSet() const;

                    /**
                     * 获取Brute force attack success alarm status:
<li>OPEN: alarm enabled</li>
<li>CLOSE: alarm disabled</li>
                     * @return CrackSuccess Brute force attack success alarm status:
<li>OPEN: alarm enabled</li>
<li>CLOSE: alarm disabled</li>
                     * 
                     */
                    std::string GetCrackSuccess() const;

                    /**
                     * 判断参数 CrackSuccess 是否已赋值
                     * @return CrackSuccess 是否已赋值
                     * 
                     */
                    bool CrackSuccessHasBeenSet() const;

                private:

                    /**
                     * CWP deactivation alarm status:
<li>OPEN: alarm enabled</li>
<li>CLOSE: alarm disabled</li>
                     */
                    std::string m_offline;
                    bool m_offlineHasBeenSet;

                    /**
                     * Trojan discovery alarm status:
<li>OPEN: alarm enabled</li>
<li>CLOSE: alarm disabled</li>
                     */
                    std::string m_malware;
                    bool m_malwareHasBeenSet;

                    /**
                     * Unusual login location discovery alarm status:
<li>OPEN: alarm enabled</li>
<li>CLOSE: alarm disabled</li>
                     */
                    std::string m_nonlocalLogin;
                    bool m_nonlocalLoginHasBeenSet;

                    /**
                     * Brute force attack success alarm status:
<li>OPEN: alarm enabled</li>
<li>CLOSE: alarm disabled</li>
                     */
                    std::string m_crackSuccess;
                    bool m_crackSuccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEALARMATTRIBUTERESPONSE_H_
