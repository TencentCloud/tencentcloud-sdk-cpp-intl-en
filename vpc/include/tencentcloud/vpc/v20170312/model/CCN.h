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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCN_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * The CCN object
                */
                class CCN : public AbstractModel
                {
                public:
                    CCN();
                    ~CCN() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The unique ID of the CCN
                     * @return CcnId The unique ID of the CCN
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置The unique ID of the CCN
                     * @param CcnId The unique ID of the CCN
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取The name of the CCN
                     * @return CcnName The name of the CCN
                     */
                    std::string GetCcnName() const;

                    /**
                     * 设置The name of the CCN
                     * @param CcnName The name of the CCN
                     */
                    void SetCcnName(const std::string& _ccnName);

                    /**
                     * 判断参数 CcnName 是否已赋值
                     * @return CcnName 是否已赋值
                     */
                    bool CcnNameHasBeenSet() const;

                    /**
                     * 获取The detailed information of the CCN
                     * @return CcnDescription The detailed information of the CCN
                     */
                    std::string GetCcnDescription() const;

                    /**
                     * 设置The detailed information of the CCN
                     * @param CcnDescription The detailed information of the CCN
                     */
                    void SetCcnDescription(const std::string& _ccnDescription);

                    /**
                     * 判断参数 CcnDescription 是否已赋值
                     * @return CcnDescription 是否已赋值
                     */
                    bool CcnDescriptionHasBeenSet() const;

                    /**
                     * 获取The number of associated instances
                     * @return InstanceCount The number of associated instances
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置The number of associated instances
                     * @param InstanceCount The number of associated instances
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取The creation time
                     * @return CreateTime The creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time
                     * @param CreateTime The creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The instance status. 'ISOLATED': Being isolated (instance is in arrears and service is suspended). 'AVAILABLE': Operating.
                     * @return State The instance status. 'ISOLATED': Being isolated (instance is in arrears and service is suspended). 'AVAILABLE': Operating.
                     */
                    std::string GetState() const;

                    /**
                     * 设置The instance status. 'ISOLATED': Being isolated (instance is in arrears and service is suspended). 'AVAILABLE': Operating.
                     * @param State The instance status. 'ISOLATED': Being isolated (instance is in arrears and service is suspended). 'AVAILABLE': Operating.
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取The instance service quality. 'PT': Platinum , 'AU': Gold, 'AG': Silver.
                     * @return QosLevel The instance service quality. 'PT': Platinum , 'AU': Gold, 'AG': Silver.
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置The instance service quality. 'PT': Platinum , 'AU': Gold, 'AG': Silver.
                     * @param QosLevel The instance service quality. 'PT': Platinum , 'AU': Gold, 'AG': Silver.
                     */
                    void SetQosLevel(const std::string& _qosLevel);

                    /**
                     * 判断参数 QosLevel 是否已赋值
                     * @return QosLevel 是否已赋值
                     */
                    bool QosLevelHasBeenSet() const;

                    /**
                     * 获取The billing method. POSTPAID indicates postpaid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceChargeType The billing method. POSTPAID indicates postpaid.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置The billing method. POSTPAID indicates postpaid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceChargeType The billing method. POSTPAID indicates postpaid.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取The limit type. INTER_REGION_LIMIT is the limit between regions. OUTER_REGION_LIMIT is a region egress limit.
Note: This field may return null, indicating no valid value.
                     * @return BandwidthLimitType The limit type. INTER_REGION_LIMIT is the limit between regions. OUTER_REGION_LIMIT is a region egress limit.
Note: This field may return null, indicating no valid value.
                     */
                    std::string GetBandwidthLimitType() const;

                    /**
                     * 设置The limit type. INTER_REGION_LIMIT is the limit between regions. OUTER_REGION_LIMIT is a region egress limit.
Note: This field may return null, indicating no valid value.
                     * @param BandwidthLimitType The limit type. INTER_REGION_LIMIT is the limit between regions. OUTER_REGION_LIMIT is a region egress limit.
Note: This field may return null, indicating no valid value.
                     */
                    void SetBandwidthLimitType(const std::string& _bandwidthLimitType);

                    /**
                     * 判断参数 BandwidthLimitType 是否已赋值
                     * @return BandwidthLimitType 是否已赋值
                     */
                    bool BandwidthLimitTypeHasBeenSet() const;

                    /**
                     * 获取Tag key-value pairs.
                     * @return TagSet Tag key-value pairs.
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag key-value pairs.
                     * @param TagSet Tag key-value pairs.
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the CCN
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * The name of the CCN
                     */
                    std::string m_ccnName;
                    bool m_ccnNameHasBeenSet;

                    /**
                     * The detailed information of the CCN
                     */
                    std::string m_ccnDescription;
                    bool m_ccnDescriptionHasBeenSet;

                    /**
                     * The number of associated instances
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * The creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The instance status. 'ISOLATED': Being isolated (instance is in arrears and service is suspended). 'AVAILABLE': Operating.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * The instance service quality. 'PT': Platinum , 'AU': Gold, 'AG': Silver.
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                    /**
                     * The billing method. POSTPAID indicates postpaid.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * The limit type. INTER_REGION_LIMIT is the limit between regions. OUTER_REGION_LIMIT is a region egress limit.
Note: This field may return null, indicating no valid value.
                     */
                    std::string m_bandwidthLimitType;
                    bool m_bandwidthLimitTypeHasBeenSet;

                    /**
                     * Tag key-value pairs.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCN_H_
