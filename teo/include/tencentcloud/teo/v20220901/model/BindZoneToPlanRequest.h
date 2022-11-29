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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BINDZONETOPLANREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BINDZONETOPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * BindZoneToPlan request structure.
                */
                class BindZoneToPlanRequest : public AbstractModel
                {
                public:
                    BindZoneToPlanRequest();
                    ~BindZoneToPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the site to be bound.
                     * @return ZoneId ID of the site to be bound.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site to be bound.
                     * @param ZoneId ID of the site to be bound.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取ID of the target plan.
                     * @return PlanId ID of the target plan.
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置ID of the target plan.
                     * @param PlanId ID of the target plan.
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     */
                    bool PlanIdHasBeenSet() const;

                private:

                    /**
                     * ID of the site to be bound.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * ID of the target plan.
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BINDZONETOPLANREQUEST_H_
