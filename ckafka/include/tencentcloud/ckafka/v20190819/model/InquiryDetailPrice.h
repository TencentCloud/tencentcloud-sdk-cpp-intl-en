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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRYDETAILPRICE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRYDETAILPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/InquiryBasePrice.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Prices of different purchased items
                */
                class InquiryDetailPrice : public AbstractModel
                {
                public:
                    InquiryDetailPrice();
                    ~InquiryDetailPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Price of additional private network bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BandwidthPrice Price of additional private network bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InquiryBasePrice GetBandwidthPrice() const;

                    /**
                     * 设置Price of additional private network bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bandwidthPrice Price of additional private network bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBandwidthPrice(const InquiryBasePrice& _bandwidthPrice);

                    /**
                     * 判断参数 BandwidthPrice 是否已赋值
                     * @return BandwidthPrice 是否已赋值
                     * 
                     */
                    bool BandwidthPriceHasBeenSet() const;

                    /**
                     * 获取Disk price
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskPrice Disk price
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InquiryBasePrice GetDiskPrice() const;

                    /**
                     * 设置Disk price
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskPrice Disk price
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskPrice(const InquiryBasePrice& _diskPrice);

                    /**
                     * 判断参数 DiskPrice 是否已赋值
                     * @return DiskPrice 是否已赋值
                     * 
                     */
                    bool DiskPriceHasBeenSet() const;

                    /**
                     * 获取Price of additional partitions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PartitionPrice Price of additional partitions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InquiryBasePrice GetPartitionPrice() const;

                    /**
                     * 设置Price of additional partitions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _partitionPrice Price of additional partitions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPartitionPrice(const InquiryBasePrice& _partitionPrice);

                    /**
                     * 判断参数 PartitionPrice 是否已赋值
                     * @return PartitionPrice 是否已赋值
                     * 
                     */
                    bool PartitionPriceHasBeenSet() const;

                    /**
                     * 获取Price of additional topics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicPrice Price of additional topics
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InquiryBasePrice GetTopicPrice() const;

                    /**
                     * 设置Price of additional topics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicPrice Price of additional topics
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicPrice(const InquiryBasePrice& _topicPrice);

                    /**
                     * 判断参数 TopicPrice 是否已赋值
                     * @return TopicPrice 是否已赋值
                     * 
                     */
                    bool TopicPriceHasBeenSet() const;

                    /**
                     * 获取Instance package price.
                     * @return InstanceTypePrice Instance package price.
                     * 
                     */
                    InquiryBasePrice GetInstanceTypePrice() const;

                    /**
                     * 设置Instance package price.
                     * @param _instanceTypePrice Instance package price.
                     * 
                     */
                    void SetInstanceTypePrice(const InquiryBasePrice& _instanceTypePrice);

                    /**
                     * 判断参数 InstanceTypePrice 是否已赋值
                     * @return InstanceTypePrice 是否已赋值
                     * 
                     */
                    bool InstanceTypePriceHasBeenSet() const;

                private:

                    /**
                     * Price of additional private network bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InquiryBasePrice m_bandwidthPrice;
                    bool m_bandwidthPriceHasBeenSet;

                    /**
                     * Disk price
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InquiryBasePrice m_diskPrice;
                    bool m_diskPriceHasBeenSet;

                    /**
                     * Price of additional partitions
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InquiryBasePrice m_partitionPrice;
                    bool m_partitionPriceHasBeenSet;

                    /**
                     * Price of additional topics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InquiryBasePrice m_topicPrice;
                    bool m_topicPriceHasBeenSet;

                    /**
                     * Instance package price.
                     */
                    InquiryBasePrice m_instanceTypePrice;
                    bool m_instanceTypePriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRYDETAILPRICE_H_
