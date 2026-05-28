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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_COSTANALYZEFILTERDETAIL_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_COSTANALYZEFILTERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/BillQueryFilterMsg.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Advanced filtering for cost analysis
                */
                class CostAnalyzeFilterDetail : public AbstractModel
                {
                public:
                    CostAnalyzeFilterDetail();
                    ~CostAnalyzeFilterDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Product key-value pair.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Business <p>Product key-value pair.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BillQueryFilterMsg> GetBusiness() const;

                    /**
                     * 设置<p>Product key-value pair.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _business <p>Product key-value pair.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBusiness(const std::vector<BillQueryFilterMsg>& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取<p>Region key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region <p>Region key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BillQueryFilterMsg> GetRegion() const;

                    /**
                     * 设置<p>Region key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region <p>Region key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::vector<BillQueryFilterMsg>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zone <p>Availability zone key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BillQueryFilterMsg> GetZone() const;

                    /**
                     * 设置<p>Availability zone key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zone <p>Availability zone key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZone(const std::vector<BillQueryFilterMsg>& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>Transaction type key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionType <p>Transaction type key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BillQueryFilterMsg> GetActionType() const;

                    /**
                     * 设置<p>Transaction type key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionType <p>Transaction type key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionType(const std::vector<BillQueryFilterMsg>& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>Key-value pair of payment mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayMode <p>Key-value pair of payment mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BillQueryFilterMsg> GetPayMode() const;

                    /**
                     * 设置<p>Key-value pair of payment mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payMode <p>Key-value pair of payment mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayMode(const std::vector<BillQueryFilterMsg>& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>Project key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Project <p>Project key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BillQueryFilterMsg> GetProject() const;

                    /**
                     * 设置<p>Project key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _project <p>Project key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProject(const std::vector<BillQueryFilterMsg>& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取<p>Payer uin information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayerUin <p>Payer uin information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BillQueryFilterMsg> GetPayerUin() const;

                    /**
                     * 设置<p>Payer uin information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payerUin <p>Payer uin information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayerUin(const std::vector<BillQueryFilterMsg>& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取<p>Sub-account uin information</p>
                     * @return OwnerUin <p>Sub-account uin information</p>
                     * 
                     */
                    std::vector<BillQueryFilterMsg> GetOwnerUin() const;

                    /**
                     * 设置<p>Sub-account uin information</p>
                     * @param _ownerUin <p>Sub-account uin information</p>
                     * 
                     */
                    void SetOwnerUin(const std::vector<BillQueryFilterMsg>& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                private:

                    /**
                     * <p>Product key-value pair.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BillQueryFilterMsg> m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * <p>Region key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BillQueryFilterMsg> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Availability zone key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BillQueryFilterMsg> m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Transaction type key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BillQueryFilterMsg> m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>Key-value pair of payment mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BillQueryFilterMsg> m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Project key-value pair</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BillQueryFilterMsg> m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * <p>Payer uin information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BillQueryFilterMsg> m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * <p>Sub-account uin information</p>
                     */
                    std::vector<BillQueryFilterMsg> m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_COSTANALYZEFILTERDETAIL_H_
