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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNBANDWIDTHINFO_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNBANDWIDTHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnRegionBandwidthLimit.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * The information of the cross-region bandwidth limit for CCN instances.
                */
                class CcnBandwidthInfo : public AbstractModel
                {
                public:
                    CcnBandwidthInfo();
                    ~CcnBandwidthInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The CCN ID that the bandwidth belongs to.
Note: this field may return null, indicating that no valid value was found.
                     * @return CcnId The CCN ID that the bandwidth belongs to.
Note: this field may return null, indicating that no valid value was found.
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置The CCN ID that the bandwidth belongs to.
Note: this field may return null, indicating that no valid value was found.
                     * @param CcnId The CCN ID that the bandwidth belongs to.
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取The creation time of the instance.
Note: this field may return null, indicating that no valid value was found.
                     * @return CreatedTime The creation time of the instance.
Note: this field may return null, indicating that no valid value was found.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置The creation time of the instance.
Note: this field may return null, indicating that no valid value was found.
                     * @param CreatedTime The creation time of the instance.
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取The expiration time of the instance.
Note: this field may return null, indicating that no valid value was found.
                     * @return ExpiredTime The expiration time of the instance.
Note: this field may return null, indicating that no valid value was found.
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置The expiration time of the instance.
Note: this field may return null, indicating that no valid value was found.
                     * @param ExpiredTime The expiration time of the instance.
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取The unique ID of the bandwidth instance.
Note: this field may return null, indicating that no valid value was found.
                     * @return RegionFlowControlId The unique ID of the bandwidth instance.
Note: this field may return null, indicating that no valid value was found.
                     */
                    std::string GetRegionFlowControlId() const;

                    /**
                     * 设置The unique ID of the bandwidth instance.
Note: this field may return null, indicating that no valid value was found.
                     * @param RegionFlowControlId The unique ID of the bandwidth instance.
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetRegionFlowControlId(const std::string& _regionFlowControlId);

                    /**
                     * 判断参数 RegionFlowControlId 是否已赋值
                     * @return RegionFlowControlId 是否已赋值
                     */
                    bool RegionFlowControlIdHasBeenSet() const;

                    /**
                     * 获取The billing flag.
Note: this field may return null, indicating that no valid value was found.
                     * @return RenewFlag The billing flag.
Note: this field may return null, indicating that no valid value was found.
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置The billing flag.
Note: this field may return null, indicating that no valid value was found.
                     * @param RenewFlag The billing flag.
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取The information of the bandwidth regions and bandwidth caps. The parameter is only returned for the cross-region limit mode, but not for egress limit.
Note: this field may return null, indicating that no valid value was found.
                     * @return CcnRegionBandwidthLimit The information of the bandwidth regions and bandwidth caps. The parameter is only returned for the cross-region limit mode, but not for egress limit.
Note: this field may return null, indicating that no valid value was found.
                     */
                    CcnRegionBandwidthLimit GetCcnRegionBandwidthLimit() const;

                    /**
                     * 设置The information of the bandwidth regions and bandwidth caps. The parameter is only returned for the cross-region limit mode, but not for egress limit.
Note: this field may return null, indicating that no valid value was found.
                     * @param CcnRegionBandwidthLimit The information of the bandwidth regions and bandwidth caps. The parameter is only returned for the cross-region limit mode, but not for egress limit.
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetCcnRegionBandwidthLimit(const CcnRegionBandwidthLimit& _ccnRegionBandwidthLimit);

                    /**
                     * 判断参数 CcnRegionBandwidthLimit 是否已赋值
                     * @return CcnRegionBandwidthLimit 是否已赋值
                     */
                    bool CcnRegionBandwidthLimitHasBeenSet() const;

                private:

                    /**
                     * The CCN ID that the bandwidth belongs to.
Note: this field may return null, indicating that no valid value was found.
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * The creation time of the instance.
Note: this field may return null, indicating that no valid value was found.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * The expiration time of the instance.
Note: this field may return null, indicating that no valid value was found.
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * The unique ID of the bandwidth instance.
Note: this field may return null, indicating that no valid value was found.
                     */
                    std::string m_regionFlowControlId;
                    bool m_regionFlowControlIdHasBeenSet;

                    /**
                     * The billing flag.
Note: this field may return null, indicating that no valid value was found.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * The information of the bandwidth regions and bandwidth caps. The parameter is only returned for the cross-region limit mode, but not for egress limit.
Note: this field may return null, indicating that no valid value was found.
                     */
                    CcnRegionBandwidthLimit m_ccnRegionBandwidthLimit;
                    bool m_ccnRegionBandwidthLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNBANDWIDTHINFO_H_
