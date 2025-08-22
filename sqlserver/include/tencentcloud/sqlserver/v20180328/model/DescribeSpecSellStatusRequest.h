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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBESPECSELLSTATUSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBESPECSELLSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeSpecSellStatus request structure.
                */
                class DescribeSpecSellStatusRequest : public AbstractModel
                {
                public:
                    DescribeSpecSellStatusRequest();
                    ~DescribeSpecSellStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AZ ID. For example, ap-guangzhou-3.
                     * @return Zone AZ ID. For example, ap-guangzhou-3.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ ID. For example, ap-guangzhou-3.
                     * @param _zone AZ ID. For example, ap-guangzhou-3.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Instance specification ID, which can be obtained by calling the DescribeProductConfig API.
                     * @return SpecIdSet Instance specification ID, which can be obtained by calling the DescribeProductConfig API.
                     * 
                     */
                    std::vector<uint64_t> GetSpecIdSet() const;

                    /**
                     * 设置Instance specification ID, which can be obtained by calling the DescribeProductConfig API.
                     * @param _specIdSet Instance specification ID, which can be obtained by calling the DescribeProductConfig API.
                     * 
                     */
                    void SetSpecIdSet(const std::vector<uint64_t>& _specIdSet);

                    /**
                     * 判断参数 SpecIdSet 是否已赋值
                     * @return SpecIdSet 是否已赋值
                     * 
                     */
                    bool SpecIdSetHasBeenSet() const;

                    /**
                     * 获取Database version, which can be obtained by calling the DescribeProductConfig API.
                     * @return DBVersion Database version, which can be obtained by calling the DescribeProductConfig API.
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置Database version, which can be obtained by calling the DescribeProductConfig API.
                     * @param _dBVersion Database version, which can be obtained by calling the DescribeProductConfig API.
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取Product ID, which can be obtained by calling the DescribeProductConfig API.
                     * @return Pid Product ID, which can be obtained by calling the DescribeProductConfig API.
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置Product ID, which can be obtained by calling the DescribeProductConfig API.
                     * @param _pid Product ID, which can be obtained by calling the DescribeProductConfig API.
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Payment mode. POST: pay-as-you-go; PRE: monthly subscription.
                     * @return PayMode Payment mode. POST: pay-as-you-go; PRE: monthly subscription.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Payment mode. POST: pay-as-you-go; PRE: monthly subscription.
                     * @param _payMode Payment mode. POST: pay-as-you-go; PRE: monthly subscription.
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Currency. CNY; USD.
                     * @return Currency Currency. CNY; USD.
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置Currency. CNY; USD.
                     * @param _currency Currency. CNY; USD.
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                private:

                    /**
                     * AZ ID. For example, ap-guangzhou-3.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance specification ID, which can be obtained by calling the DescribeProductConfig API.
                     */
                    std::vector<uint64_t> m_specIdSet;
                    bool m_specIdSetHasBeenSet;

                    /**
                     * Database version, which can be obtained by calling the DescribeProductConfig API.
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * Product ID, which can be obtained by calling the DescribeProductConfig API.
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Payment mode. POST: pay-as-you-go; PRE: monthly subscription.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Currency. CNY; USD.
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBESPECSELLSTATUSREQUEST_H_
