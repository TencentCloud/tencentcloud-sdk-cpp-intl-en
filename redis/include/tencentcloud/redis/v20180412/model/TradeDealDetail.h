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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_TRADEDEALDETAIL_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_TRADEDEALDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Order transaction information
                */
                class TradeDealDetail : public AbstractModel
                {
                public:
                    TradeDealDetail();
                    ~TradeDealDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Order ID, which is used when a TencentCloud API is called.
                     * @return DealId Order ID, which is used when a TencentCloud API is called.
                     * 
                     */
                    std::string GetDealId() const;

                    /**
                     * 设置Order ID, which is used when a TencentCloud API is called.
                     * @param _dealId Order ID, which is used when a TencentCloud API is called.
                     * 
                     */
                    void SetDealId(const std::string& _dealId);

                    /**
                     * 判断参数 DealId 是否已赋值
                     * @return DealId 是否已赋值
                     * 
                     */
                    bool DealIdHasBeenSet() const;

                    /**
                     * 获取Long order ID, which is used when an order issue is submitted for assistance.
                     * @return DealName Long order ID, which is used when an order issue is submitted for assistance.
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置Long order ID, which is used when an order issue is submitted for assistance.
                     * @param _dealName Long order ID, which is used when an order issue is submitted for assistance.
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取AZ ID
                     * @return ZoneId AZ ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ ID
                     * @param _zoneId AZ ID
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Number of instances associated with the order
                     * @return GoodsNum Number of instances associated with the order
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of instances associated with the order
                     * @param _goodsNum Number of instances associated with the order
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取Creator UIN
                     * @return Creater Creator UIN
                     * 
                     */
                    std::string GetCreater() const;

                    /**
                     * 设置Creator UIN
                     * @param _creater Creator UIN
                     * 
                     */
                    void SetCreater(const std::string& _creater);

                    /**
                     * 判断参数 Creater 是否已赋值
                     * @return Creater 是否已赋值
                     * 
                     */
                    bool CreaterHasBeenSet() const;

                    /**
                     * 获取Order creation time
                     * @return CreatTime Order creation time
                     * 
                     */
                    std::string GetCreatTime() const;

                    /**
                     * 设置Order creation time
                     * @param _creatTime Order creation time
                     * 
                     */
                    void SetCreatTime(const std::string& _creatTime);

                    /**
                     * 判断参数 CreatTime 是否已赋值
                     * @return CreatTime 是否已赋值
                     * 
                     */
                    bool CreatTimeHasBeenSet() const;

                    /**
                     * 获取Order timeout period
                     * @return OverdueTime Order timeout period
                     * 
                     */
                    std::string GetOverdueTime() const;

                    /**
                     * 设置Order timeout period
                     * @param _overdueTime Order timeout period
                     * 
                     */
                    void SetOverdueTime(const std::string& _overdueTime);

                    /**
                     * 判断参数 OverdueTime 是否已赋值
                     * @return OverdueTime 是否已赋值
                     * 
                     */
                    bool OverdueTimeHasBeenSet() const;

                    /**
                     * 获取Order completion time
                     * @return EndTime Order completion time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Order completion time
                     * @param _endTime Order completion time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Order status. 1: unpaid; 2: paid but not delivered; 3: In delivery; 4: successfully delivered; 5: delivery failed; 6: refunded; 7: order closed; 8: order expired; 9: order invalidated; 10: product invalidated; 11: requested payment rejected; 12: paying
                     * @return Status Order status. 1: unpaid; 2: paid but not delivered; 3: In delivery; 4: successfully delivered; 5: delivery failed; 6: refunded; 7: order closed; 8: order expired; 9: order invalidated; 10: product invalidated; 11: requested payment rejected; 12: paying
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Order status. 1: unpaid; 2: paid but not delivered; 3: In delivery; 4: successfully delivered; 5: delivery failed; 6: refunded; 7: order closed; 8: order expired; 9: order invalidated; 10: product invalidated; 11: requested payment rejected; 12: paying
                     * @param _status Order status. 1: unpaid; 2: paid but not delivered; 3: In delivery; 4: successfully delivered; 5: delivery failed; 6: refunded; 7: order closed; 8: order expired; 9: order invalidated; 10: product invalidated; 11: requested payment rejected; 12: paying
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Order status description
                     * @return Description Order status description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Order status description
                     * @param _description Order status description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Actual total price of the order in 0.01 CNY
                     * @return Price Actual total price of the order in 0.01 CNY
                     * 
                     */
                    int64_t GetPrice() const;

                    /**
                     * 设置Actual total price of the order in 0.01 CNY
                     * @param _price Actual total price of the order in 0.01 CNY
                     * 
                     */
                    void SetPrice(const int64_t& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceIds Instance ID
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceIds Instance ID
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * Order ID, which is used when a TencentCloud API is called.
                     */
                    std::string m_dealId;
                    bool m_dealIdHasBeenSet;

                    /**
                     * Long order ID, which is used when an order issue is submitted for assistance.
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * AZ ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Number of instances associated with the order
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * Creator UIN
                     */
                    std::string m_creater;
                    bool m_createrHasBeenSet;

                    /**
                     * Order creation time
                     */
                    std::string m_creatTime;
                    bool m_creatTimeHasBeenSet;

                    /**
                     * Order timeout period
                     */
                    std::string m_overdueTime;
                    bool m_overdueTimeHasBeenSet;

                    /**
                     * Order completion time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Order status. 1: unpaid; 2: paid but not delivered; 3: In delivery; 4: successfully delivered; 5: delivery failed; 6: refunded; 7: order closed; 8: order expired; 9: order invalidated; 10: product invalidated; 11: requested payment rejected; 12: paying
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Order status description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Actual total price of the order in 0.01 CNY
                     */
                    int64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_TRADEDEALDETAIL_H_
