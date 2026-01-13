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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/VpcInfo.h>
#include <tencentcloud/trocket/v20230308/model/Tag.h>
#include <tencentcloud/trocket/v20230308/model/IpRule.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * CreateInstance request structure.
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance type. valid values are as follows:.

-EXPERIMENT: specifies the trial version.

- BASIC: BASIC edition.

-PRO edition.

-PLATINUM: platinum version.
                     * @return InstanceType Instance type. valid values are as follows:.

-EXPERIMENT: specifies the trial version.

- BASIC: BASIC edition.

-PRO edition.

-PLATINUM: platinum version.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type. valid values are as follows:.

-EXPERIMENT: specifies the trial version.

- BASIC: BASIC edition.

-PRO edition.

-PLATINUM: platinum version.
                     * @param _instanceType Instance type. valid values are as follows:.

-EXPERIMENT: specifies the trial version.

- BASIC: BASIC edition.

-PRO edition.

-PLATINUM: platinum version.
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
                     * 获取Cluster name. values cannot be empty. 3-64 characters, only comprised of digits, letters, "-", and "_".
                     * @return Name Cluster name. values cannot be empty. 3-64 characters, only comprised of digits, letters, "-", and "_".
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Cluster name. values cannot be empty. 3-64 characters, only comprised of digits, letters, "-", and "_".
                     * @param _name Cluster name. values cannot be empty. 3-64 characters, only comprised of digits, letters, "-", and "_".
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Product specification. It can be obtained from the output parameters of [ProductSKU](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU) of the API [DescribeProductSKUs](https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).
                     * @return SkuCode Product specification. It can be obtained from the output parameters of [ProductSKU](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU) of the API [DescribeProductSKUs](https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置Product specification. It can be obtained from the output parameters of [ProductSKU](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU) of the API [DescribeProductSKUs](https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).
                     * @param _skuCode Product specification. It can be obtained from the output parameters of [ProductSKU](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU) of the API [DescribeProductSKUs](https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).
                     * 
                     */
                    void SetSkuCode(const std::string& _skuCode);

                    /**
                     * 判断参数 SkuCode 是否已赋值
                     * @return SkuCode 是否已赋值
                     * 
                     */
                    bool SkuCodeHasBeenSet() const;

                    /**
                     * 获取Specifies the VPC information bound to the cluster.
                     * @return VpcList Specifies the VPC information bound to the cluster.
                     * 
                     */
                    std::vector<VpcInfo> GetVpcList() const;

                    /**
                     * 设置Specifies the VPC information bound to the cluster.
                     * @param _vpcList Specifies the VPC information bound to the cluster.
                     * 
                     */
                    void SetVpcList(const std::vector<VpcInfo>& _vpcList);

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     * 
                     */
                    bool VpcListHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Tag list
                     * @return TagList Tag list
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置Tag list
                     * @param _tagList Tag list
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取Whether public network access is enabled. the default value of false means not enabled.
                     * @return EnablePublic Whether public network access is enabled. the default value of false means not enabled.
                     * 
                     */
                    bool GetEnablePublic() const;

                    /**
                     * 设置Whether public network access is enabled. the default value of false means not enabled.
                     * @param _enablePublic Whether public network access is enabled. the default value of false means not enabled.
                     * 
                     */
                    void SetEnablePublic(const bool& _enablePublic);

                    /**
                     * 判断参数 EnablePublic 是否已赋值
                     * @return EnablePublic 是否已赋值
                     * 
                     */
                    bool EnablePublicHasBeenSet() const;

                    /**
                     * 获取Whether the public network is billed by traffic. the default value is false, which indicates that the public network is not billed by traffic.
                     * @return BillingFlow Whether the public network is billed by traffic. the default value is false, which indicates that the public network is not billed by traffic.
                     * 
                     */
                    bool GetBillingFlow() const;

                    /**
                     * 设置Whether the public network is billed by traffic. the default value is false, which indicates that the public network is not billed by traffic.
                     * @param _billingFlow Whether the public network is billed by traffic. the default value is false, which indicates that the public network is not billed by traffic.
                     * 
                     */
                    void SetBillingFlow(const bool& _billingFlow);

                    /**
                     * 判断参数 BillingFlow 是否已赋值
                     * @return BillingFlow 是否已赋值
                     * 
                     */
                    bool BillingFlowHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth (unit: mbps). the default value is 0. if public network access is enabled, this field must be a positive integer above 0.
                     * @return Bandwidth Public network bandwidth (unit: mbps). the default value is 0. if public network access is enabled, this field must be a positive integer above 0.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Public network bandwidth (unit: mbps). the default value is 0. if public network access is enabled, this field must be a positive integer above 0.
                     * @param _bandwidth Public network bandwidth (unit: mbps). the default value is 0. if public network access is enabled, this field must be a positive integer above 0.
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
                     * 获取Public network access allowlist. if left blank, it means deny all IP access.
                     * @return IpRules Public network access allowlist. if left blank, it means deny all IP access.
                     * 
                     */
                    std::vector<IpRule> GetIpRules() const;

                    /**
                     * 设置Public network access allowlist. if left blank, it means deny all IP access.
                     * @param _ipRules Public network access allowlist. if left blank, it means deny all IP access.
                     * 
                     */
                    void SetIpRules(const std::vector<IpRule>& _ipRules);

                    /**
                     * 判断参数 IpRules 是否已赋值
                     * @return IpRules 是否已赋值
                     * 
                     */
                    bool IpRulesHasBeenSet() const;

                    /**
                     * 获取Message retention time (unit: hr). value range refers to the ProductSKU response parameters structure in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).

-Default value: DefaultRetention parameter.
-Minimum value: specifies the RetentionLowerLimit parameter.
-Specifies the maximum value of the RetentionUpperLimit parameter.
                     * @return MessageRetention Message retention time (unit: hr). value range refers to the ProductSKU response parameters structure in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).

-Default value: DefaultRetention parameter.
-Minimum value: specifies the RetentionLowerLimit parameter.
-Specifies the maximum value of the RetentionUpperLimit parameter.
                     * 
                     */
                    int64_t GetMessageRetention() const;

                    /**
                     * 设置Message retention time (unit: hr). value range refers to the ProductSKU response parameters structure in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).

-Default value: DefaultRetention parameter.
-Minimum value: specifies the RetentionLowerLimit parameter.
-Specifies the maximum value of the RetentionUpperLimit parameter.
                     * @param _messageRetention Message retention time (unit: hr). value range refers to the ProductSKU response parameters structure in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).

-Default value: DefaultRetention parameter.
-Minimum value: specifies the RetentionLowerLimit parameter.
-Specifies the maximum value of the RetentionUpperLimit parameter.
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
                     * 获取Payment mode (0: postpaid; 1: prepaid). the default value is 0.
                     * @return PayMode Payment mode (0: postpaid; 1: prepaid). the default value is 0.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Payment mode (0: postpaid; 1: prepaid). the default value is 0.
                     * @param _payMode Payment mode (0: postpaid; 1: prepaid). the default value is 0.
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Whether the prepaid cluster is automatically renewed (0: no auto-renewal; 1: auto-renewal). default value: 0.
                     * @return RenewFlag Whether the prepaid cluster is automatically renewed (0: no auto-renewal; 1: auto-renewal). default value: 0.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Whether the prepaid cluster is automatically renewed (0: no auto-renewal; 1: auto-renewal). default value: 0.
                     * @param _renewFlag Whether the prepaid cluster is automatically renewed (0: no auto-renewal; 1: auto-renewal). default value: 0.
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Specifies the purchase duration (unit: month) for a prepaid cluster. value range: 1–60. default value: 1.
                     * @return TimeSpan Specifies the purchase duration (unit: month) for a prepaid cluster. value range: 1–60. default value: 1.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Specifies the purchase duration (unit: month) for a prepaid cluster. value range: 1–60. default value: 1.
                     * @param _timeSpan Specifies the purchase duration (unit: month) for a prepaid cluster. value range: 1–60. default value: 1.
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Specifies the maximum number of topics that can be created. obtained from the ProductSKU response parameters structure in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1) (https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU).

-Default value and minimum value: specifies the TopicNumLimit parameter.
-Maximum value of TopicNumUpperLimit parameter.
                     * @return MaxTopicNum Specifies the maximum number of topics that can be created. obtained from the ProductSKU response parameters structure in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1) (https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU).

-Default value and minimum value: specifies the TopicNumLimit parameter.
-Maximum value of TopicNumUpperLimit parameter.
                     * 
                     */
                    int64_t GetMaxTopicNum() const;

                    /**
                     * 设置Specifies the maximum number of topics that can be created. obtained from the ProductSKU response parameters structure in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1) (https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU).

-Default value and minimum value: specifies the TopicNumLimit parameter.
-Maximum value of TopicNumUpperLimit parameter.
                     * @param _maxTopicNum Specifies the maximum number of topics that can be created. obtained from the ProductSKU response parameters structure in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1) (https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU).

-Default value and minimum value: specifies the TopicNumLimit parameter.
-Maximum value of TopicNumUpperLimit parameter.
                     * 
                     */
                    void SetMaxTopicNum(const int64_t& _maxTopicNum);

                    /**
                     * 判断参数 MaxTopicNum 是否已赋值
                     * @return MaxTopicNum 是否已赋值
                     * 
                     */
                    bool MaxTopicNumHasBeenSet() const;

                    /**
                     * 获取Deployment AZ list. obtain from the [ZoneInfo](https://www.tencentcloud.com/document/api/1596/77932?from_cn_redirect=1#ZoneInfo) data structure returned by the api [DescribeZones](https://www.tencentcloud.com/document/product/1596/77929?from_cn_redirect=1).
                     * @return ZoneIds Deployment AZ list. obtain from the [ZoneInfo](https://www.tencentcloud.com/document/api/1596/77932?from_cn_redirect=1#ZoneInfo) data structure returned by the api [DescribeZones](https://www.tencentcloud.com/document/product/1596/77929?from_cn_redirect=1).
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置Deployment AZ list. obtain from the [ZoneInfo](https://www.tencentcloud.com/document/api/1596/77932?from_cn_redirect=1#ZoneInfo) data structure returned by the api [DescribeZones](https://www.tencentcloud.com/document/product/1596/77929?from_cn_redirect=1).
                     * @param _zoneIds Deployment AZ list. obtain from the [ZoneInfo](https://www.tencentcloud.com/document/api/1596/77932?from_cn_redirect=1#ZoneInfo) data structure returned by the api [DescribeZones](https://www.tencentcloud.com/document/product/1596/77929?from_cn_redirect=1).
                     * 
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                private:

                    /**
                     * Instance type. valid values are as follows:.

-EXPERIMENT: specifies the trial version.

- BASIC: BASIC edition.

-PRO edition.

-PLATINUM: platinum version.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Cluster name. values cannot be empty. 3-64 characters, only comprised of digits, letters, "-", and "_".
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Product specification. It can be obtained from the output parameters of [ProductSKU](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU) of the API [DescribeProductSKUs](https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * Specifies the VPC information bound to the cluster.
                     */
                    std::vector<VpcInfo> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Whether public network access is enabled. the default value of false means not enabled.
                     */
                    bool m_enablePublic;
                    bool m_enablePublicHasBeenSet;

                    /**
                     * Whether the public network is billed by traffic. the default value is false, which indicates that the public network is not billed by traffic.
                     */
                    bool m_billingFlow;
                    bool m_billingFlowHasBeenSet;

                    /**
                     * Public network bandwidth (unit: mbps). the default value is 0. if public network access is enabled, this field must be a positive integer above 0.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Public network access allowlist. if left blank, it means deny all IP access.
                     */
                    std::vector<IpRule> m_ipRules;
                    bool m_ipRulesHasBeenSet;

                    /**
                     * Message retention time (unit: hr). value range refers to the ProductSKU response parameters structure in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).

-Default value: DefaultRetention parameter.
-Minimum value: specifies the RetentionLowerLimit parameter.
-Specifies the maximum value of the RetentionUpperLimit parameter.
                     */
                    int64_t m_messageRetention;
                    bool m_messageRetentionHasBeenSet;

                    /**
                     * Payment mode (0: postpaid; 1: prepaid). the default value is 0.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Whether the prepaid cluster is automatically renewed (0: no auto-renewal; 1: auto-renewal). default value: 0.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Specifies the purchase duration (unit: month) for a prepaid cluster. value range: 1–60. default value: 1.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Specifies the maximum number of topics that can be created. obtained from the ProductSKU response parameters structure in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1) (https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU).

-Default value and minimum value: specifies the TopicNumLimit parameter.
-Maximum value of TopicNumUpperLimit parameter.
                     */
                    int64_t m_maxTopicNum;
                    bool m_maxTopicNumHasBeenSet;

                    /**
                     * Deployment AZ list. obtain from the [ZoneInfo](https://www.tencentcloud.com/document/api/1596/77932?from_cn_redirect=1#ZoneInfo) data structure returned by the api [DescribeZones](https://www.tencentcloud.com/document/product/1596/77929?from_cn_redirect=1).
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEINSTANCEREQUEST_H_
