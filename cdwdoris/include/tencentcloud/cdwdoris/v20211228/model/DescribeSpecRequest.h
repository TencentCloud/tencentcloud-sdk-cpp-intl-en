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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESPECREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeSpec request structure.
                */
                class DescribeSpecRequest : public AbstractModel
                {
                public:
                    DescribeSpecRequest();
                    ~DescribeSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Region information, such as ap-guangzhou-1.
                     * @return Zone Region information, such as ap-guangzhou-1.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Region information, such as ap-guangzhou-1.
                     * @param _zone Region information, such as ap-guangzhou-1.
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
                     * 获取Billing type. PREPAID: annual/monthly package; POSTPAID_BY_HOUR: pay-as-you-go
                     * @return PayMode Billing type. PREPAID: annual/monthly package; POSTPAID_BY_HOUR: pay-as-you-go
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing type. PREPAID: annual/monthly package; POSTPAID_BY_HOUR: pay-as-you-go
                     * @param _payMode Billing type. PREPAID: annual/monthly package; POSTPAID_BY_HOUR: pay-as-you-go
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
                     * 获取Multi-availability zone
                     * @return Zones Multi-availability zone
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置Multi-availability zone
                     * @param _zones Multi-availability zone
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Model name
                     * @return SpecName Model name
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Model name
                     * @param _specName Model name
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                private:

                    /**
                     * Region information, such as ap-guangzhou-1.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Billing type. PREPAID: annual/monthly package; POSTPAID_BY_HOUR: pay-as-you-go
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Multi-availability zone
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Model name
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESPECREQUEST_H_
