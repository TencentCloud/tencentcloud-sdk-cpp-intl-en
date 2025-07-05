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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATECCNREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATECCNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateCcn request structure.
                */
                class CreateCcnRequest : public AbstractModel
                {
                public:
                    CreateCcnRequest();
                    ~CreateCcnRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The name of the CCN. The maximum length is 60 characters.
                     * @return CcnName The name of the CCN. The maximum length is 60 characters.
                     * 
                     */
                    std::string GetCcnName() const;

                    /**
                     * 设置The name of the CCN. The maximum length is 60 characters.
                     * @param _ccnName The name of the CCN. The maximum length is 60 characters.
                     * 
                     */
                    void SetCcnName(const std::string& _ccnName);

                    /**
                     * 判断参数 CcnName 是否已赋值
                     * @return CcnName 是否已赋值
                     * 
                     */
                    bool CcnNameHasBeenSet() const;

                    /**
                     * 获取The description of the CCN. The maximum length is 100 characters.
                     * @return CcnDescription The description of the CCN. The maximum length is 100 characters.
                     * 
                     */
                    std::string GetCcnDescription() const;

                    /**
                     * 设置The description of the CCN. The maximum length is 100 characters.
                     * @param _ccnDescription The description of the CCN. The maximum length is 100 characters.
                     * 
                     */
                    void SetCcnDescription(const std::string& _ccnDescription);

                    /**
                     * 判断参数 CcnDescription 是否已赋值
                     * @return CcnDescription 是否已赋值
                     * 
                     */
                    bool CcnDescriptionHasBeenSet() const;

                    /**
                     * 获取CCN service quality, 'PT': Platinum, 'AU': Gold, 'AG': Silver. The default is 'AU'.
                     * @return QosLevel CCN service quality, 'PT': Platinum, 'AU': Gold, 'AG': Silver. The default is 'AU'.
                     * 
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置CCN service quality, 'PT': Platinum, 'AU': Gold, 'AG': Silver. The default is 'AU'.
                     * @param _qosLevel CCN service quality, 'PT': Platinum, 'AU': Gold, 'AG': Silver. The default is 'AU'.
                     * 
                     */
                    void SetQosLevel(const std::string& _qosLevel);

                    /**
                     * 判断参数 QosLevel 是否已赋值
                     * @return QosLevel 是否已赋值
                     * 
                     */
                    bool QosLevelHasBeenSet() const;

                    /**
                     * 获取The billing method. POSTPAID: postpaid by traffic. Default: POSTPAID.
                     * @return InstanceChargeType The billing method. POSTPAID: postpaid by traffic. Default: POSTPAID.
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置The billing method. POSTPAID: postpaid by traffic. Default: POSTPAID.
                     * @param _instanceChargeType The billing method. POSTPAID: postpaid by traffic. Default: POSTPAID.
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取The bandwidth limit type. Valid values: OUTER_REGION_LIMIT: region outbound bandwidth limit; INTER_REGION_LIMIT: inter-region bandwidth limit. Default value: OUTER_REGION_LIMIT. Monthly-subscribed CCN instances only support inter-region bandwidth limit, while pay-as-you-go CCN instances support the both bandwidth limit types.
                     * @return BandwidthLimitType The bandwidth limit type. Valid values: OUTER_REGION_LIMIT: region outbound bandwidth limit; INTER_REGION_LIMIT: inter-region bandwidth limit. Default value: OUTER_REGION_LIMIT. Monthly-subscribed CCN instances only support inter-region bandwidth limit, while pay-as-you-go CCN instances support the both bandwidth limit types.
                     * 
                     */
                    std::string GetBandwidthLimitType() const;

                    /**
                     * 设置The bandwidth limit type. Valid values: OUTER_REGION_LIMIT: region outbound bandwidth limit; INTER_REGION_LIMIT: inter-region bandwidth limit. Default value: OUTER_REGION_LIMIT. Monthly-subscribed CCN instances only support inter-region bandwidth limit, while pay-as-you-go CCN instances support the both bandwidth limit types.
                     * @param _bandwidthLimitType The bandwidth limit type. Valid values: OUTER_REGION_LIMIT: region outbound bandwidth limit; INTER_REGION_LIMIT: inter-region bandwidth limit. Default value: OUTER_REGION_LIMIT. Monthly-subscribed CCN instances only support inter-region bandwidth limit, while pay-as-you-go CCN instances support the both bandwidth limit types.
                     * 
                     */
                    void SetBandwidthLimitType(const std::string& _bandwidthLimitType);

                    /**
                     * 判断参数 BandwidthLimitType 是否已赋值
                     * @return BandwidthLimitType 是否已赋值
                     * 
                     */
                    bool BandwidthLimitTypeHasBeenSet() const;

                    /**
                     * 获取Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @return Tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @param _tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * The name of the CCN. The maximum length is 60 characters.
                     */
                    std::string m_ccnName;
                    bool m_ccnNameHasBeenSet;

                    /**
                     * The description of the CCN. The maximum length is 100 characters.
                     */
                    std::string m_ccnDescription;
                    bool m_ccnDescriptionHasBeenSet;

                    /**
                     * CCN service quality, 'PT': Platinum, 'AU': Gold, 'AG': Silver. The default is 'AU'.
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                    /**
                     * The billing method. POSTPAID: postpaid by traffic. Default: POSTPAID.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * The bandwidth limit type. Valid values: OUTER_REGION_LIMIT: region outbound bandwidth limit; INTER_REGION_LIMIT: inter-region bandwidth limit. Default value: OUTER_REGION_LIMIT. Monthly-subscribed CCN instances only support inter-region bandwidth limit, while pay-as-you-go CCN instances support the both bandwidth limit types.
                     */
                    std::string m_bandwidthLimitType;
                    bool m_bandwidthLimitTypeHasBeenSet;

                    /**
                     * Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATECCNREQUEST_H_
