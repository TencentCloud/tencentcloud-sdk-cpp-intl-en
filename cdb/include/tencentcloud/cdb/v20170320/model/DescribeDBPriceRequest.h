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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBPRICEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBPRICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDBPrice request structure.
                */
                class DescribeDBPriceRequest : public AbstractModel
                {
                public:
                    DescribeDBPriceRequest();
                    ~DescribeDBPriceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AZ information in the format of "ap-guangzhou-2". You can use the <a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a> API to query the values that can be set.
                     * @return Zone AZ information in the format of "ap-guangzhou-2". You can use the <a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a> API to query the values that can be set.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ information in the format of "ap-guangzhou-2". You can use the <a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a> API to query the values that can be set.
                     * @param Zone AZ information in the format of "ap-guangzhou-2". You can use the <a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a> API to query the values that can be set.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Number of instances. Value range: 1-100. Default value: 1.
                     * @return GoodsNum Number of instances. Value range: 1-100. Default value: 1.
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances. Value range: 1-100. Default value: 1.
                     * @param GoodsNum Number of instances. Value range: 1-100. Default value: 1.
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取Instance memory size in MB.
                     * @return Memory Instance memory size in MB.
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory size in MB.
                     * @param Memory Instance memory size in MB.
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance disk size in GB.
                     * @return Volume Instance disk size in GB.
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置Instance disk size in GB.
                     * @param Volume Instance disk size in GB.
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取Billing method. Value range: PRE_PAID (monthly subscribed), HOUR_PAID (pay-as-you-go).
                     * @return PayType Billing method. Value range: PRE_PAID (monthly subscribed), HOUR_PAID (pay-as-you-go).
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置Billing method. Value range: PRE_PAID (monthly subscribed), HOUR_PAID (pay-as-you-go).
                     * @param PayType Billing method. Value range: PRE_PAID (monthly subscribed), HOUR_PAID (pay-as-you-go).
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Instance validity period in months. Value range: 1-36. This field is invalid when querying prices of pay-as-you-go instances.
                     * @return Period Instance validity period in months. Value range: 1-36. This field is invalid when querying prices of pay-as-you-go instances.
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Instance validity period in months. Value range: 1-36. This field is invalid when querying prices of pay-as-you-go instances.
                     * @param Period Instance validity period in months. Value range: 1-36. This field is invalid when querying prices of pay-as-you-go instances.
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Instance type. Value range: master (master instance), dr (disaster recovery instance), ro (read-only instance). Default value: master.
                     * @return InstanceRole Instance type. Value range: master (master instance), dr (disaster recovery instance), ro (read-only instance). Default value: master.
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置Instance type. Value range: master (master instance), dr (disaster recovery instance), ro (read-only instance). Default value: master.
                     * @param InstanceRole Instance type. Value range: master (master instance), dr (disaster recovery instance), ro (read-only instance). Default value: master.
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取Data replication mode. Value range: 0 (async), 1 (semi-sync), 2 (strong sync). Default value: 0.
                     * @return ProtectMode Data replication mode. Value range: 0 (async), 1 (semi-sync), 2 (strong sync). Default value: 0.
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置Data replication mode. Value range: 0 (async), 1 (semi-sync), 2 (strong sync). Default value: 0.
                     * @param ProtectMode Data replication mode. Value range: 0 (async), 1 (semi-sync), 2 (strong sync). Default value: 0.
                     */
                    void SetProtectMode(const int64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     */
                    bool ProtectModeHasBeenSet() const;

                private:

                    /**
                     * AZ information in the format of "ap-guangzhou-2". You can use the <a href="https://cloud.tencent.com/document/api/236/17229">DescribeDBZoneConfig</a> API to query the values that can be set.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Number of instances. Value range: 1-100. Default value: 1.
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * Instance memory size in MB.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance disk size in GB.
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Billing method. Value range: PRE_PAID (monthly subscribed), HOUR_PAID (pay-as-you-go).
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Instance validity period in months. Value range: 1-36. This field is invalid when querying prices of pay-as-you-go instances.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Instance type. Value range: master (master instance), dr (disaster recovery instance), ro (read-only instance). Default value: master.
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * Data replication mode. Value range: 0 (async), 1 (semi-sync), 2 (strong sync). Default value: 0.
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBPRICEREQUEST_H_
