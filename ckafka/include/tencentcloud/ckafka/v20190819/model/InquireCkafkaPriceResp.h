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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRECKAFKAPRICERESP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRECKAFKAPRICERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/InquiryPrice.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Values returned by the `InquireCkafkaPrice` API
                */
                class InquireCkafkaPriceResp : public AbstractModel
                {
                public:
                    InquireCkafkaPriceResp();
                    ~InquireCkafkaPriceResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance price
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstancePrice Instance price
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InquiryPrice GetInstancePrice() const;

                    /**
                     * 设置Instance price
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instancePrice Instance price
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstancePrice(const InquiryPrice& _instancePrice);

                    /**
                     * 判断参数 InstancePrice 是否已赋值
                     * @return InstancePrice 是否已赋值
                     * 
                     */
                    bool InstancePriceHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth price
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicNetworkBandwidthPrice Public network bandwidth price
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InquiryPrice GetPublicNetworkBandwidthPrice() const;

                    /**
                     * 设置Public network bandwidth price
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _publicNetworkBandwidthPrice Public network bandwidth price
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicNetworkBandwidthPrice(const InquiryPrice& _publicNetworkBandwidthPrice);

                    /**
                     * 判断参数 PublicNetworkBandwidthPrice 是否已赋值
                     * @return PublicNetworkBandwidthPrice 是否已赋值
                     * 
                     */
                    bool PublicNetworkBandwidthPriceHasBeenSet() const;

                private:

                    /**
                     * Instance price
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InquiryPrice m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * Public network bandwidth price
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InquiryPrice m_publicNetworkBandwidthPrice;
                    bool m_publicNetworkBandwidthPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRECKAFKAPRICERESP_H_
