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
                     * 获取ProductNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Business ProductNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalyseBusinessDetail> GetBusiness() const;

                    /**
                     * 设置ProductNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _business ProductNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取ItemNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Project ItemNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalyseProjectDetail> GetProject() const;

                    /**
                     * 设置ItemNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _project ItemNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取RegionNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Region RegionNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalyseRegionDetail> GetRegion() const;

                    /**
                     * 设置RegionNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _region RegionNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Billing modeNote: This field may return null, indicating that no valid values can be obtained.
                     * @return PayMode Billing modeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalysePayModeDetail> GetPayMode() const;

                    /**
                     * 设置Billing modeNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _payMode Billing modeNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Transaction typeNote: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionType Transaction typeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalyseActionTypeDetail> GetActionType() const;

                    /**
                     * 设置Transaction typeNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionType Transaction typeNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Availability zoneNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Zone Availability zoneNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalyseZoneDetail> GetZone() const;

                    /**
                     * 设置Availability zoneNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _zone Availability zoneNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Resource owner UINNote: This field may return null, indicating that no valid values can be obtained.
                     * @return OwnerUin Resource owner UINNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalyseOwnerUinDetail> GetOwnerUin() const;

                    /**
                     * 设置Resource owner UINNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _ownerUin Resource owner UINNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Fee typeNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Amount Fee typeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnalyseAmountDetail> GetAmount() const;

                    /**
                     * 设置Fee typeNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _amount Fee typeNote: This field may return null, indicating that no valid values can be obtained.
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
                     * ProductNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalyseBusinessDetail> m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * ItemNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalyseProjectDetail> m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * RegionNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalyseRegionDetail> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Billing modeNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalysePayModeDetail> m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Transaction typeNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalyseActionTypeDetail> m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Availability zoneNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalyseZoneDetail> m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Resource owner UINNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalyseOwnerUinDetail> m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Fee typeNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnalyseAmountDetail> m_amount;
                    bool m_amountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSECONDITIONDETAIL_H_
