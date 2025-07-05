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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONRESOURCESUMMARYCONDITIONVALUE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONRESOURCESUMMARYCONDITIONVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/ConditionBusiness.h>
#include <tencentcloud/billing/v20180709/model/ConditionProject.h>
#include <tencentcloud/billing/v20180709/model/ConditionRegion.h>
#include <tencentcloud/billing/v20180709/model/ConditionPayMode.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Filter criteria of consumption details summarized by resource
                */
                class ConsumptionResourceSummaryConditionValue : public AbstractModel
                {
                public:
                    ConsumptionResourceSummaryConditionValue();
                    ~ConsumptionResourceSummaryConditionValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product list
                     * @return Business Product list
                     * 
                     */
                    std::vector<ConditionBusiness> GetBusiness() const;

                    /**
                     * 设置Product list
                     * @param _business Product list
                     * 
                     */
                    void SetBusiness(const std::vector<ConditionBusiness>& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Project list
                     * @return Project Project list
                     * 
                     */
                    std::vector<ConditionProject> GetProject() const;

                    /**
                     * 设置Project list
                     * @param _project Project list
                     * 
                     */
                    void SetProject(const std::vector<ConditionProject>& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取Region list
                     * @return Region Region list
                     * 
                     */
                    std::vector<ConditionRegion> GetRegion() const;

                    /**
                     * 设置Region list
                     * @param _region Region list
                     * 
                     */
                    void SetRegion(const std::vector<ConditionRegion>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Payment mode list
                     * @return PayMode Payment mode list
                     * 
                     */
                    std::vector<ConditionPayMode> GetPayMode() const;

                    /**
                     * 设置Payment mode list
                     * @param _payMode Payment mode list
                     * 
                     */
                    void SetPayMode(const std::vector<ConditionPayMode>& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * Product list
                     */
                    std::vector<ConditionBusiness> m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Project list
                     */
                    std::vector<ConditionProject> m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * Region list
                     */
                    std::vector<ConditionRegion> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Payment mode list
                     */
                    std::vector<ConditionPayMode> m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONRESOURCESUMMARYCONDITIONVALUE_H_
