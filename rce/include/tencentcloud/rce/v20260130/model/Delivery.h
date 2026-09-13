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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_DELIVERY_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_DELIVERY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>
#include <tencentcloud/rce/v20260130/model/Address.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * Delivery information
                */
                class Delivery : public AbstractModel
                {
                public:
                    Delivery();
                    ~Delivery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The method of the delivery</p><ul><li>physical</li><li>electronic</li></ul>
                     * @return DeliveryMethod <p>The method of the delivery</p><ul><li>physical</li><li>electronic</li></ul>
                     * 
                     */
                    std::string GetDeliveryMethod() const;

                    /**
                     * 设置<p>The method of the delivery</p><ul><li>physical</li><li>electronic</li></ul>
                     * @param _deliveryMethod <p>The method of the delivery</p><ul><li>physical</li><li>electronic</li></ul>
                     * 
                     */
                    void SetDeliveryMethod(const std::string& _deliveryMethod);

                    /**
                     * 判断参数 DeliveryMethod 是否已赋值
                     * @return DeliveryMethod 是否已赋值
                     * 
                     */
                    bool DeliveryMethodHasBeenSet() const;

                    /**
                     * 获取<p>The fee of the delivery</p>
                     * @return DeliveryAmount <p>The fee of the delivery</p>
                     * 
                     */
                    Amount GetDeliveryAmount() const;

                    /**
                     * 设置<p>The fee of the delivery</p>
                     * @param _deliveryAmount <p>The fee of the delivery</p>
                     * 
                     */
                    void SetDeliveryAmount(const Amount& _deliveryAmount);

                    /**
                     * 判断参数 DeliveryAmount 是否已赋值
                     * @return DeliveryAmount 是否已赋值
                     * 
                     */
                    bool DeliveryAmountHasBeenSet() const;

                    /**
                     * 获取<p>The address of the delivery</p>
                     * @return DeliveryAddress <p>The address of the delivery</p>
                     * 
                     */
                    Address GetDeliveryAddress() const;

                    /**
                     * 设置<p>The address of the delivery</p>
                     * @param _deliveryAddress <p>The address of the delivery</p>
                     * 
                     */
                    void SetDeliveryAddress(const Address& _deliveryAddress);

                    /**
                     * 判断参数 DeliveryAddress 是否已赋值
                     * @return DeliveryAddress 是否已赋值
                     * 
                     */
                    bool DeliveryAddressHasBeenSet() const;

                    /**
                     * 获取<p>Phone number of the consignee</p><p>parameter format: format with "+", region code, and number that complies with the E.164 standard</p>
                     * @return ConsigneePhone <p>Phone number of the consignee</p><p>parameter format: format with "+", region code, and number that complies with the E.164 standard</p>
                     * 
                     */
                    std::string GetConsigneePhone() const;

                    /**
                     * 设置<p>Phone number of the consignee</p><p>parameter format: format with "+", region code, and number that complies with the E.164 standard</p>
                     * @param _consigneePhone <p>Phone number of the consignee</p><p>parameter format: format with "+", region code, and number that complies with the E.164 standard</p>
                     * 
                     */
                    void SetConsigneePhone(const std::string& _consigneePhone);

                    /**
                     * 判断参数 ConsigneePhone 是否已赋值
                     * @return ConsigneePhone 是否已赋值
                     * 
                     */
                    bool ConsigneePhoneHasBeenSet() const;

                    /**
                     * 获取<p>Email of the consignee</p>
                     * @return ConsigneeEmail <p>Email of the consignee</p>
                     * 
                     */
                    std::string GetConsigneeEmail() const;

                    /**
                     * 设置<p>Email of the consignee</p>
                     * @param _consigneeEmail <p>Email of the consignee</p>
                     * 
                     */
                    void SetConsigneeEmail(const std::string& _consigneeEmail);

                    /**
                     * 判断参数 ConsigneeEmail 是否已赋值
                     * @return ConsigneeEmail 是否已赋值
                     * 
                     */
                    bool ConsigneeEmailHasBeenSet() const;

                    /**
                     * 获取<p>Full name of the consignee</p>
                     * @return ConsigneeName <p>Full name of the consignee</p>
                     * 
                     */
                    std::string GetConsigneeName() const;

                    /**
                     * 设置<p>Full name of the consignee</p>
                     * @param _consigneeName <p>Full name of the consignee</p>
                     * 
                     */
                    void SetConsigneeName(const std::string& _consigneeName);

                    /**
                     * 判断参数 ConsigneeName 是否已赋值
                     * @return ConsigneeName 是否已赋值
                     * 
                     */
                    bool ConsigneeNameHasBeenSet() const;

                    /**
                     * 获取<p> Whether is the delivery expedited</p>
                     * @return Expedited <p> Whether is the delivery expedited</p>
                     * 
                     */
                    bool GetExpedited() const;

                    /**
                     * 设置<p> Whether is the delivery expedited</p>
                     * @param _expedited <p> Whether is the delivery expedited</p>
                     * 
                     */
                    void SetExpedited(const bool& _expedited);

                    /**
                     * 判断参数 Expedited 是否已赋值
                     * @return Expedited 是否已赋值
                     * 
                     */
                    bool ExpeditedHasBeenSet() const;

                    /**
                     * 获取<p>The carrier of the delivery, usually a logistics company</p>
                     * @return DeliveryCarrier <p>The carrier of the delivery, usually a logistics company</p>
                     * 
                     */
                    std::string GetDeliveryCarrier() const;

                    /**
                     * 设置<p>The carrier of the delivery, usually a logistics company</p>
                     * @param _deliveryCarrier <p>The carrier of the delivery, usually a logistics company</p>
                     * 
                     */
                    void SetDeliveryCarrier(const std::string& _deliveryCarrier);

                    /**
                     * 判断参数 DeliveryCarrier 是否已赋值
                     * @return DeliveryCarrier 是否已赋值
                     * 
                     */
                    bool DeliveryCarrierHasBeenSet() const;

                    /**
                     * 获取<p>The number(s) used to track the delivery</p>
                     * @return DeliveryTracking <p>The number(s) used to track the delivery</p>
                     * 
                     */
                    std::string GetDeliveryTracking() const;

                    /**
                     * 设置<p>The number(s) used to track the delivery</p>
                     * @param _deliveryTracking <p>The number(s) used to track the delivery</p>
                     * 
                     */
                    void SetDeliveryTracking(const std::string& _deliveryTracking);

                    /**
                     * 判断参数 DeliveryTracking 是否已赋值
                     * @return DeliveryTracking 是否已赋值
                     * 
                     */
                    bool DeliveryTrackingHasBeenSet() const;

                private:

                    /**
                     * <p>The method of the delivery</p><ul><li>physical</li><li>electronic</li></ul>
                     */
                    std::string m_deliveryMethod;
                    bool m_deliveryMethodHasBeenSet;

                    /**
                     * <p>The fee of the delivery</p>
                     */
                    Amount m_deliveryAmount;
                    bool m_deliveryAmountHasBeenSet;

                    /**
                     * <p>The address of the delivery</p>
                     */
                    Address m_deliveryAddress;
                    bool m_deliveryAddressHasBeenSet;

                    /**
                     * <p>Phone number of the consignee</p><p>parameter format: format with "+", region code, and number that complies with the E.164 standard</p>
                     */
                    std::string m_consigneePhone;
                    bool m_consigneePhoneHasBeenSet;

                    /**
                     * <p>Email of the consignee</p>
                     */
                    std::string m_consigneeEmail;
                    bool m_consigneeEmailHasBeenSet;

                    /**
                     * <p>Full name of the consignee</p>
                     */
                    std::string m_consigneeName;
                    bool m_consigneeNameHasBeenSet;

                    /**
                     * <p> Whether is the delivery expedited</p>
                     */
                    bool m_expedited;
                    bool m_expeditedHasBeenSet;

                    /**
                     * <p>The carrier of the delivery, usually a logistics company</p>
                     */
                    std::string m_deliveryCarrier;
                    bool m_deliveryCarrierHasBeenSet;

                    /**
                     * <p>The number(s) used to track the delivery</p>
                     */
                    std::string m_deliveryTracking;
                    bool m_deliveryTrackingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_DELIVERY_H_
