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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATETAWINSTANCEREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATETAWINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/Tag.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateTawInstance request structure.
                */
                class CreateTawInstanceRequest : public AbstractModel
                {
                public:
                    CreateTawInstanceRequest();
                    ~CreateTawInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Region ID (at least greater than 0)
                     * @return AreaId Region ID (at least greater than 0)
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置Region ID (at least greater than 0)
                     * @param AreaId Region ID (at least greater than 0)
                     */
                    void SetAreaId(const int64_t& _areaId);

                    /**
                     * 判断参数 AreaId 是否已赋值
                     * @return AreaId 是否已赋值
                     */
                    bool AreaIdHasBeenSet() const;

                    /**
                     * 获取Billing type (1: Pay-as-you-go).
                     * @return ChargeType Billing type (1: Pay-as-you-go).
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置Billing type (1: Pay-as-you-go).
                     * @param ChargeType Billing type (1: Pay-as-you-go).
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Data retention period (at least greater than 0)
                     * @return DataRetentionDays Data retention period (at least greater than 0)
                     */
                    int64_t GetDataRetentionDays() const;

                    /**
                     * 设置Data retention period (at least greater than 0)
                     * @param DataRetentionDays Data retention period (at least greater than 0)
                     */
                    void SetDataRetentionDays(const int64_t& _dataRetentionDays);

                    /**
                     * 判断参数 DataRetentionDays 是否已赋值
                     * @return DataRetentionDays 是否已赋值
                     */
                    bool DataRetentionDaysHasBeenSet() const;

                    /**
                     * 获取Instance name (up to 255 bytes)
                     * @return InstanceName Instance name (up to 255 bytes)
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name (up to 255 bytes)
                     * @param InstanceName Instance name (up to 255 bytes)
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Tag list
                     * @return Tags Tag list
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list
                     * @param Tags Tag list
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Instance description (up to 1,024 bytes)
                     * @return InstanceDesc Instance description (up to 1,024 bytes)
                     */
                    std::string GetInstanceDesc() const;

                    /**
                     * 设置Instance description (up to 1,024 bytes)
                     * @param InstanceDesc Instance description (up to 1,024 bytes)
                     */
                    void SetInstanceDesc(const std::string& _instanceDesc);

                    /**
                     * 判断参数 InstanceDesc 是否已赋值
                     * @return InstanceDesc 是否已赋值
                     */
                    bool InstanceDescHasBeenSet() const;

                    /**
                     * 获取Number of data entries reported per day
                     * @return CountNum Number of data entries reported per day
                     */
                    std::string GetCountNum() const;

                    /**
                     * 设置Number of data entries reported per day
                     * @param CountNum Number of data entries reported per day
                     */
                    void SetCountNum(const std::string& _countNum);

                    /**
                     * 判断参数 CountNum 是否已赋值
                     * @return CountNum 是否已赋值
                     */
                    bool CountNumHasBeenSet() const;

                    /**
                     * 获取Billing for data storage
                     * @return PeriodRetain Billing for data storage
                     */
                    std::string GetPeriodRetain() const;

                    /**
                     * 设置Billing for data storage
                     * @param PeriodRetain Billing for data storage
                     */
                    void SetPeriodRetain(const std::string& _periodRetain);

                    /**
                     * 判断参数 PeriodRetain 是否已赋值
                     * @return PeriodRetain 是否已赋值
                     */
                    bool PeriodRetainHasBeenSet() const;

                    /**
                     * 获取Instance purchase channel. Valid value: `cdn`.
                     * @return BuyingChannel Instance purchase channel. Valid value: `cdn`.
                     */
                    std::string GetBuyingChannel() const;

                    /**
                     * 设置Instance purchase channel. Valid value: `cdn`.
                     * @param BuyingChannel Instance purchase channel. Valid value: `cdn`.
                     */
                    void SetBuyingChannel(const std::string& _buyingChannel);

                    /**
                     * 判断参数 BuyingChannel 是否已赋值
                     * @return BuyingChannel 是否已赋值
                     */
                    bool BuyingChannelHasBeenSet() const;

                private:

                    /**
                     * Region ID (at least greater than 0)
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * Billing type (1: Pay-as-you-go).
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Data retention period (at least greater than 0)
                     */
                    int64_t m_dataRetentionDays;
                    bool m_dataRetentionDaysHasBeenSet;

                    /**
                     * Instance name (up to 255 bytes)
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Instance description (up to 1,024 bytes)
                     */
                    std::string m_instanceDesc;
                    bool m_instanceDescHasBeenSet;

                    /**
                     * Number of data entries reported per day
                     */
                    std::string m_countNum;
                    bool m_countNumHasBeenSet;

                    /**
                     * Billing for data storage
                     */
                    std::string m_periodRetain;
                    bool m_periodRetainHasBeenSet;

                    /**
                     * Instance purchase channel. Valid value: `cdn`.
                     */
                    std::string m_buyingChannel;
                    bool m_buyingChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATETAWINSTANCEREQUEST_H_
