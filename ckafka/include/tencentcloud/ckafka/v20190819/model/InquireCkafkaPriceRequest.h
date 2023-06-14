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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRECKAFKAPRICEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRECKAFKAPRICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/InstanceChargeParam.h>
#include <tencentcloud/ckafka/v20190819/model/InquiryDiskParam.h>
#include <tencentcloud/ckafka/v20190819/model/InquiryPublicNetworkParam.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * InquireCkafkaPrice request structure.
                */
                class InquireCkafkaPriceRequest : public AbstractModel
                {
                public:
                    InquireCkafkaPriceRequest();
                    ~InquireCkafkaPriceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`standard`: Standard Edition; `profession`: Pro Edition
                     * @return InstanceType `standard`: Standard Edition; `profession`: Pro Edition
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置`standard`: Standard Edition; `profession`: Pro Edition
                     * @param _instanceType `standard`: Standard Edition; `profession`: Pro Edition
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Billing mode for instance purchase/renewal. If this parameter is left empty when you purchase an instance, the fees for one month under the monthly subscription mode will be displayed by default.
                     * @return InstanceChargeParam Billing mode for instance purchase/renewal. If this parameter is left empty when you purchase an instance, the fees for one month under the monthly subscription mode will be displayed by default.
                     * 
                     */
                    InstanceChargeParam GetInstanceChargeParam() const;

                    /**
                     * 设置Billing mode for instance purchase/renewal. If this parameter is left empty when you purchase an instance, the fees for one month under the monthly subscription mode will be displayed by default.
                     * @param _instanceChargeParam Billing mode for instance purchase/renewal. If this parameter is left empty when you purchase an instance, the fees for one month under the monthly subscription mode will be displayed by default.
                     * 
                     */
                    void SetInstanceChargeParam(const InstanceChargeParam& _instanceChargeParam);

                    /**
                     * 判断参数 InstanceChargeParam 是否已赋值
                     * @return InstanceChargeParam 是否已赋值
                     * 
                     */
                    bool InstanceChargeParamHasBeenSet() const;

                    /**
                     * 获取The number of instances to be purchased or renewed. If this parameter is left empty, the default value is `1`.
                     * @return InstanceNum The number of instances to be purchased or renewed. If this parameter is left empty, the default value is `1`.
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置The number of instances to be purchased or renewed. If this parameter is left empty, the default value is `1`.
                     * @param _instanceNum The number of instances to be purchased or renewed. If this parameter is left empty, the default value is `1`.
                     * 
                     */
                    void SetInstanceNum(const int64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取Private network bandwidth in MB/sec, which is required when you purchase an instance.
                     * @return Bandwidth Private network bandwidth in MB/sec, which is required when you purchase an instance.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Private network bandwidth in MB/sec, which is required when you purchase an instance.
                     * @param _bandwidth Private network bandwidth in MB/sec, which is required when you purchase an instance.
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Disk type and size, which is required when you purchase an instance.
                     * @return InquiryDiskParam Disk type and size, which is required when you purchase an instance.
                     * 
                     */
                    InquiryDiskParam GetInquiryDiskParam() const;

                    /**
                     * 设置Disk type and size, which is required when you purchase an instance.
                     * @param _inquiryDiskParam Disk type and size, which is required when you purchase an instance.
                     * 
                     */
                    void SetInquiryDiskParam(const InquiryDiskParam& _inquiryDiskParam);

                    /**
                     * 判断参数 InquiryDiskParam 是否已赋值
                     * @return InquiryDiskParam 是否已赋值
                     * 
                     */
                    bool InquiryDiskParamHasBeenSet() const;

                    /**
                     * 获取Message retention period in hours, which is required when you purchase an instance.
                     * @return MessageRetention Message retention period in hours, which is required when you purchase an instance.
                     * 
                     */
                    int64_t GetMessageRetention() const;

                    /**
                     * 设置Message retention period in hours, which is required when you purchase an instance.
                     * @param _messageRetention Message retention period in hours, which is required when you purchase an instance.
                     * 
                     */
                    void SetMessageRetention(const int64_t& _messageRetention);

                    /**
                     * 判断参数 MessageRetention 是否已赋值
                     * @return MessageRetention 是否已赋值
                     * 
                     */
                    bool MessageRetentionHasBeenSet() const;

                    /**
                     * 获取The number of instance topics to be purchased, which is required when you purchase an instance.
                     * @return Topic The number of instance topics to be purchased, which is required when you purchase an instance.
                     * 
                     */
                    int64_t GetTopic() const;

                    /**
                     * 设置The number of instance topics to be purchased, which is required when you purchase an instance.
                     * @param _topic The number of instance topics to be purchased, which is required when you purchase an instance.
                     * 
                     */
                    void SetTopic(const int64_t& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取The number of instance partitions to be purchased, which is required when you purchase an instance.
                     * @return Partition The number of instance partitions to be purchased, which is required when you purchase an instance.
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置The number of instance partitions to be purchased, which is required when you purchase an instance.
                     * @param _partition The number of instance partitions to be purchased, which is required when you purchase an instance.
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取The region for instance purchase, which can be obtained via the `DescribeCkafkaZone` API.
                     * @return ZoneIds The region for instance purchase, which can be obtained via the `DescribeCkafkaZone` API.
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置The region for instance purchase, which can be obtained via the `DescribeCkafkaZone` API.
                     * @param _zoneIds The region for instance purchase, which can be obtained via the `DescribeCkafkaZone` API.
                     * 
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Operation type flag. `purchase`: Making new purchases; `renew`: Renewing an instance. The default value is `purchase` if this parameter is left empty.
                     * @return CategoryAction Operation type flag. `purchase`: Making new purchases; `renew`: Renewing an instance. The default value is `purchase` if this parameter is left empty.
                     * 
                     */
                    std::string GetCategoryAction() const;

                    /**
                     * 设置Operation type flag. `purchase`: Making new purchases; `renew`: Renewing an instance. The default value is `purchase` if this parameter is left empty.
                     * @param _categoryAction Operation type flag. `purchase`: Making new purchases; `renew`: Renewing an instance. The default value is `purchase` if this parameter is left empty.
                     * 
                     */
                    void SetCategoryAction(const std::string& _categoryAction);

                    /**
                     * 判断参数 CategoryAction 是否已赋值
                     * @return CategoryAction 是否已赋值
                     * 
                     */
                    bool CategoryActionHasBeenSet() const;

                    /**
                     * 获取This field is not required.
                     * @return BillType This field is not required.
                     * 
                     */
                    std::string GetBillType() const;

                    /**
                     * 设置This field is not required.
                     * @param _billType This field is not required.
                     * 
                     */
                    void SetBillType(const std::string& _billType);

                    /**
                     * 判断参数 BillType 是否已赋值
                     * @return BillType 是否已赋值
                     * 
                     */
                    bool BillTypeHasBeenSet() const;

                    /**
                     * 获取Billing mode for public network bandwidth, which is required when you purchase public network bandwidth. Currently, public network bandwidth is only supported for Pro Edition.
                     * @return PublicNetworkParam Billing mode for public network bandwidth, which is required when you purchase public network bandwidth. Currently, public network bandwidth is only supported for Pro Edition.
                     * 
                     */
                    InquiryPublicNetworkParam GetPublicNetworkParam() const;

                    /**
                     * 设置Billing mode for public network bandwidth, which is required when you purchase public network bandwidth. Currently, public network bandwidth is only supported for Pro Edition.
                     * @param _publicNetworkParam Billing mode for public network bandwidth, which is required when you purchase public network bandwidth. Currently, public network bandwidth is only supported for Pro Edition.
                     * 
                     */
                    void SetPublicNetworkParam(const InquiryPublicNetworkParam& _publicNetworkParam);

                    /**
                     * 判断参数 PublicNetworkParam 是否已赋值
                     * @return PublicNetworkParam 是否已赋值
                     * 
                     */
                    bool PublicNetworkParamHasBeenSet() const;

                    /**
                     * 获取ID of the instance to be renewed, which is required when you renew an instance.
                     * @return InstanceId ID of the instance to be renewed, which is required when you renew an instance.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance to be renewed, which is required when you renew an instance.
                     * @param _instanceId ID of the instance to be renewed, which is required when you renew an instance.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * `standard`: Standard Edition; `profession`: Pro Edition
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Billing mode for instance purchase/renewal. If this parameter is left empty when you purchase an instance, the fees for one month under the monthly subscription mode will be displayed by default.
                     */
                    InstanceChargeParam m_instanceChargeParam;
                    bool m_instanceChargeParamHasBeenSet;

                    /**
                     * The number of instances to be purchased or renewed. If this parameter is left empty, the default value is `1`.
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * Private network bandwidth in MB/sec, which is required when you purchase an instance.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Disk type and size, which is required when you purchase an instance.
                     */
                    InquiryDiskParam m_inquiryDiskParam;
                    bool m_inquiryDiskParamHasBeenSet;

                    /**
                     * Message retention period in hours, which is required when you purchase an instance.
                     */
                    int64_t m_messageRetention;
                    bool m_messageRetentionHasBeenSet;

                    /**
                     * The number of instance topics to be purchased, which is required when you purchase an instance.
                     */
                    int64_t m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * The number of instance partitions to be purchased, which is required when you purchase an instance.
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * The region for instance purchase, which can be obtained via the `DescribeCkafkaZone` API.
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Operation type flag. `purchase`: Making new purchases; `renew`: Renewing an instance. The default value is `purchase` if this parameter is left empty.
                     */
                    std::string m_categoryAction;
                    bool m_categoryActionHasBeenSet;

                    /**
                     * This field is not required.
                     */
                    std::string m_billType;
                    bool m_billTypeHasBeenSet;

                    /**
                     * Billing mode for public network bandwidth, which is required when you purchase public network bandwidth. Currently, public network bandwidth is only supported for Pro Edition.
                     */
                    InquiryPublicNetworkParam m_publicNetworkParam;
                    bool m_publicNetworkParamHasBeenSet;

                    /**
                     * ID of the instance to be renewed, which is required when you renew an instance.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRECKAFKAPRICEREQUEST_H_
