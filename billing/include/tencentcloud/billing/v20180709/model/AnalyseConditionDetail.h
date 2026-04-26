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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSECONDITIONDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSECONDITIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AnalyseBusinessDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalyseProjectDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalyseRegionDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalysePayModeDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalyseActionTypeDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalyseZoneDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalyseOwnerUinDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalyseAmountDetail.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Cost analysis filter box complex type
                */
                class AnalyseConditionDetail : public AbstractModel
                {
                public:
                    AnalyseConditionDetail();
                    ~AnalyseConditionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取product
                     * @return Business product
                     * 
                     */
                    std::vector<AnalyseBusinessDetail> GetBusiness() const;

                    /**
                     * 设置product
                     * @param _business product
                     * 
                     */
                    void SetBusiness(const std::vector<AnalyseBusinessDetail>& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Project
                     * @return Project Project
                     * 
                     */
                    std::vector<AnalyseProjectDetail> GetProject() const;

                    /**
                     * 设置Project
                     * @param _project Project
                     * 
                     */
                    void SetProject(const std::vector<AnalyseProjectDetail>& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::vector<AnalyseRegionDetail> GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
                     * 
                     */
                    void SetRegion(const std::vector<AnalyseRegionDetail>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Billing mode.
                     * @return PayMode Billing mode.
                     * 
                     */
                    std::vector<AnalysePayModeDetail> GetPayMode() const;

                    /**
                     * 设置Billing mode.
                     * @param _payMode Billing mode.
                     * 
                     */
                    void SetPayMode(const std::vector<AnalysePayModeDetail>& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Transaction type
                     * @return ActionType Transaction type
                     * 
                     */
                    std::vector<AnalyseActionTypeDetail> GetActionType() const;

                    /**
                     * 设置Transaction type
                     * @param _actionType Transaction type
                     * 
                     */
                    void SetActionType(const std::vector<AnalyseActionTypeDetail>& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取Availability zone
                     * @return Zone Availability zone
                     * 
                     */
                    std::vector<AnalyseZoneDetail> GetZone() const;

                    /**
                     * 设置Availability zone
                     * @param _zone Availability zone
                     * 
                     */
                    void SetZone(const std::vector<AnalyseZoneDetail>& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Resource owner Uin
                     * @return OwnerUin Resource owner Uin
                     * 
                     */
                    std::vector<AnalyseOwnerUinDetail> GetOwnerUin() const;

                    /**
                     * 设置Resource owner Uin
                     * @param _ownerUin Resource owner Uin
                     * 
                     */
                    void SetOwnerUin(const std::vector<AnalyseOwnerUinDetail>& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Fee type
                     * @return Amount Fee type
                     * 
                     */
                    std::vector<AnalyseAmountDetail> GetAmount() const;

                    /**
                     * 设置Fee type
                     * @param _amount Fee type
                     * 
                     */
                    void SetAmount(const std::vector<AnalyseAmountDetail>& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                private:

                    /**
                     * product
                     */
                    std::vector<AnalyseBusinessDetail> m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Project
                     */
                    std::vector<AnalyseProjectDetail> m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * Region.
                     */
                    std::vector<AnalyseRegionDetail> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Billing mode.
                     */
                    std::vector<AnalysePayModeDetail> m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Transaction type
                     */
                    std::vector<AnalyseActionTypeDetail> m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Availability zone
                     */
                    std::vector<AnalyseZoneDetail> m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Resource owner Uin
                     */
                    std::vector<AnalyseOwnerUinDetail> m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Fee type
                     */
                    std::vector<AnalyseAmountDetail> m_amount;
                    bool m_amountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSECONDITIONDETAIL_H_
