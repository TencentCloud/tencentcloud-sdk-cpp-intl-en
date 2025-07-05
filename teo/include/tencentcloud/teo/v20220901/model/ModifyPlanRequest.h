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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYPLANREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RenewFlag.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyPlan request structure.
                */
                class ModifyPlanRequest : public AbstractModel
                {
                public:
                    ModifyPlanRequest();
                    ~ModifyPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Plan ID, formatted as edgeone-2unuvzjmmn2q.
                     * @return PlanId Plan ID, formatted as edgeone-2unuvzjmmn2q.
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置Plan ID, formatted as edgeone-2unuvzjmmn2q.
                     * @param _planId Plan ID, formatted as edgeone-2unuvzjmmn2q.
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取Auto-renewal configuration item in a prepaid plan. If auto-renewal is enabled, the plan will be automatically renewed one day before it expires. This feature is only available for Personal, Basic, and Standard Edition Plans. If this field is not specified, the original configuration will be retained.
                     * @return RenewFlag Auto-renewal configuration item in a prepaid plan. If auto-renewal is enabled, the plan will be automatically renewed one day before it expires. This feature is only available for Personal, Basic, and Standard Edition Plans. If this field is not specified, the original configuration will be retained.
                     * 
                     */
                    RenewFlag GetRenewFlag() const;

                    /**
                     * 设置Auto-renewal configuration item in a prepaid plan. If auto-renewal is enabled, the plan will be automatically renewed one day before it expires. This feature is only available for Personal, Basic, and Standard Edition Plans. If this field is not specified, the original configuration will be retained.
                     * @param _renewFlag Auto-renewal configuration item in a prepaid plan. If auto-renewal is enabled, the plan will be automatically renewed one day before it expires. This feature is only available for Personal, Basic, and Standard Edition Plans. If this field is not specified, the original configuration will be retained.
                     * 
                     */
                    void SetRenewFlag(const RenewFlag& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * Plan ID, formatted as edgeone-2unuvzjmmn2q.
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Auto-renewal configuration item in a prepaid plan. If auto-renewal is enabled, the plan will be automatically renewed one day before it expires. This feature is only available for Personal, Basic, and Standard Edition Plans. If this field is not specified, the original configuration will be retained.
                     */
                    RenewFlag m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYPLANREQUEST_H_
