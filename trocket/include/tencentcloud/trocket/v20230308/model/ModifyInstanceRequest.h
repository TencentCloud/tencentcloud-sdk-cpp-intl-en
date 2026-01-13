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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYINSTANCEREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * ModifyInstance request structure.
                */
                class ModifyInstanceRequest : public AbstractModel
                {
                public:
                    ModifyInstanceRequest();
                    ~ModifyInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * @return InstanceId TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * @param _instanceId TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name. It cannot be left blank. It can contain 3 to 64 characters consisting of only digits, letters, hyphens (-), and underscores (_).
                     * @return Name Instance name. It cannot be left blank. It can contain 3 to 64 characters consisting of only digits, letters, hyphens (-), and underscores (_).
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Instance name. It cannot be left blank. It can contain 3 to 64 characters consisting of only digits, letters, hyphens (-), and underscores (_).
                     * @param _name Instance name. It cannot be left blank. It can contain 3 to 64 characters consisting of only digits, letters, hyphens (-), and underscores (_).
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
                     * 获取Remarks. Up to 128 characters are allowed.
                     * @return Remark Remarks. Up to 128 characters are allowed.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks. Up to 128 characters are allowed.
                     * @param _remark Remarks. Up to 128 characters are allowed.
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
                     * 获取Message sending and receiving ratio
                     * @return SendReceiveRatio Message sending and receiving ratio
                     * 
                     */
                    double GetSendReceiveRatio() const;

                    /**
                     * 设置Message sending and receiving ratio
                     * @param _sendReceiveRatio Message sending and receiving ratio
                     * 
                     */
                    void SetSendReceiveRatio(const double& _sendReceiveRatio);

                    /**
                     * 判断参数 SendReceiveRatio 是否已赋值
                     * @return SendReceiveRatio 是否已赋值
                     * 
                     */
                    bool SendReceiveRatioHasBeenSet() const;

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
                     * 获取Whether to enable elastic TPS.
                     * @return ScaledTpsEnabled Whether to enable elastic TPS.
                     * 
                     */
                    bool GetScaledTpsEnabled() const;

                    /**
                     * 设置Whether to enable elastic TPS.
                     * @param _scaledTpsEnabled Whether to enable elastic TPS.
                     * 
                     */
                    void SetScaledTpsEnabled(const bool& _scaledTpsEnabled);

                    /**
                     * 判断参数 ScaledTpsEnabled 是否已赋值
                     * @return ScaledTpsEnabled 是否已赋值
                     * 
                     */
                    bool ScaledTpsEnabledHasBeenSet() const;

                    /**
                     * 获取Whether ACL is enabled.
                     * @return AclEnabled Whether ACL is enabled.
                     * 
                     */
                    bool GetAclEnabled() const;

                    /**
                     * 设置Whether ACL is enabled.
                     * @param _aclEnabled Whether ACL is enabled.
                     * 
                     */
                    void SetAclEnabled(const bool& _aclEnabled);

                    /**
                     * 判断参数 AclEnabled 是否已赋值
                     * @return AclEnabled 是否已赋值
                     * 
                     */
                    bool AclEnabledHasBeenSet() const;

                    /**
                     * 获取The maximum number of topics that can be created. value ranges from...to... refer to the ProductSKU output parameter in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1) (https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU).

-Minimum value and default value: TopicNumLimit parameter.
-Maximum value of TopicNumUpperLimit parameter.
                     * @return MaxTopicNum The maximum number of topics that can be created. value ranges from...to... refer to the ProductSKU output parameter in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1) (https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU).

-Minimum value and default value: TopicNumLimit parameter.
-Maximum value of TopicNumUpperLimit parameter.
                     * 
                     */
                    int64_t GetMaxTopicNum() const;

                    /**
                     * 设置The maximum number of topics that can be created. value ranges from...to... refer to the ProductSKU output parameter in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1) (https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU).

-Minimum value and default value: TopicNumLimit parameter.
-Maximum value of TopicNumUpperLimit parameter.
                     * @param _maxTopicNum The maximum number of topics that can be created. value ranges from...to... refer to the ProductSKU output parameter in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1) (https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU).

-Minimum value and default value: TopicNumLimit parameter.
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
                     * 获取Number of topics not included in the free quota. For the free quota, see the TopicNumLimit parameter in the output parameters of [ProductSKU](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU) of the API [DescribeProductSKUs](https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).
                     * @return ExtraTopicNum Number of topics not included in the free quota. For the free quota, see the TopicNumLimit parameter in the output parameters of [ProductSKU](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU) of the API [DescribeProductSKUs](https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).
                     * 
                     */
                    std::string GetExtraTopicNum() const;

                    /**
                     * 设置Number of topics not included in the free quota. For the free quota, see the TopicNumLimit parameter in the output parameters of [ProductSKU](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU) of the API [DescribeProductSKUs](https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).
                     * @param _extraTopicNum Number of topics not included in the free quota. For the free quota, see the TopicNumLimit parameter in the output parameters of [ProductSKU](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU) of the API [DescribeProductSKUs](https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).
                     * 
                     */
                    void SetExtraTopicNum(const std::string& _extraTopicNum);

                    /**
                     * 判断参数 ExtraTopicNum 是否已赋值
                     * @return ExtraTopicNum 是否已赋值
                     * 
                     */
                    bool ExtraTopicNumHasBeenSet() const;

                    /**
                     * 获取Whether to enable deletion protection
                     * @return EnableDeletionProtection Whether to enable deletion protection
                     * 
                     */
                    bool GetEnableDeletionProtection() const;

                    /**
                     * 设置Whether to enable deletion protection
                     * @param _enableDeletionProtection Whether to enable deletion protection
                     * 
                     */
                    void SetEnableDeletionProtection(const bool& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name. It cannot be left blank. It can contain 3 to 64 characters consisting of only digits, letters, hyphens (-), and underscores (_).
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Remarks. Up to 128 characters are allowed.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Message sending and receiving ratio
                     */
                    double m_sendReceiveRatio;
                    bool m_sendReceiveRatioHasBeenSet;

                    /**
                     * Product specification. It can be obtained from the output parameters of [ProductSKU](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU) of the API [DescribeProductSKUs](https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * Message retention time (unit: hr). value range refers to the ProductSKU response parameters structure in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).

-Default value: DefaultRetention parameter.
-Minimum value: specifies the RetentionLowerLimit parameter.
-Specifies the maximum value of the RetentionUpperLimit parameter.
                     */
                    int64_t m_messageRetention;
                    bool m_messageRetentionHasBeenSet;

                    /**
                     * Whether to enable elastic TPS.
                     */
                    bool m_scaledTpsEnabled;
                    bool m_scaledTpsEnabledHasBeenSet;

                    /**
                     * Whether ACL is enabled.
                     */
                    bool m_aclEnabled;
                    bool m_aclEnabledHasBeenSet;

                    /**
                     * The maximum number of topics that can be created. value ranges from...to... refer to the ProductSKU output parameter in the DescribeProductSKUs api (https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1) (https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU).

-Minimum value and default value: TopicNumLimit parameter.
-Maximum value of TopicNumUpperLimit parameter.
                     */
                    int64_t m_maxTopicNum;
                    bool m_maxTopicNumHasBeenSet;

                    /**
                     * Number of topics not included in the free quota. For the free quota, see the TopicNumLimit parameter in the output parameters of [ProductSKU](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ProductSKU) of the API [DescribeProductSKUs](https://www.tencentcloud.com/document/api/1493/107676?from_cn_redirect=1).
                     */
                    std::string m_extraTopicNum;
                    bool m_extraTopicNumHasBeenSet;

                    /**
                     * Whether to enable deletion protection
                     */
                    bool m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYINSTANCEREQUEST_H_
