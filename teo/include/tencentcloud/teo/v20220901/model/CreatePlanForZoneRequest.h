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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPLANFORZONEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPLANFORZONEREQUEST_H_

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
                * CreatePlanForZone request structure.
                */
                class CreatePlanForZoneRequest : public AbstractModel
                {
                public:
                    CreatePlanForZoneRequest();
                    ~CreatePlanForZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the site.
                     * @return ZoneId ID of the site.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site.
                     * @param ZoneId ID of the site.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Plan options available for purchase. Values:
<li>`sta`: Standard plan for global areas except Chinese mainland;</li>
<li>`sta_with_bot`: Standard plan for global areas except Chinese mainland, with extra bot management;</li>
<li>`sta_cm`: Standard plan for Chinese mainland;</li>
<li>`sta_cm_with_bot`: Standard plan for Chinese mainland, with extra bot management;</li>
<li>`ent`: Enterprise plan for global areas except Chinese mainland;</li>
<li>`ent_with_bot`: Enterprise plan for global areas except Chinese mainland, with extra bot management;</li>
<li>`ent_cm`: Enterprise plan for Chinese mainland;</li>
<li>`ent_cm_with_bot`: Enterprise plan for Chinese mainland, with extra bot management.</li>To get the available plan options for your account, view the output from <a href="https://tcloud4api.woa.com/document/product/1657/80124?!preview&!document=1">DescribeAvailablePlans</a>.
                     * @return PlanType Plan options available for purchase. Values:
<li>`sta`: Standard plan for global areas except Chinese mainland;</li>
<li>`sta_with_bot`: Standard plan for global areas except Chinese mainland, with extra bot management;</li>
<li>`sta_cm`: Standard plan for Chinese mainland;</li>
<li>`sta_cm_with_bot`: Standard plan for Chinese mainland, with extra bot management;</li>
<li>`ent`: Enterprise plan for global areas except Chinese mainland;</li>
<li>`ent_with_bot`: Enterprise plan for global areas except Chinese mainland, with extra bot management;</li>
<li>`ent_cm`: Enterprise plan for Chinese mainland;</li>
<li>`ent_cm_with_bot`: Enterprise plan for Chinese mainland, with extra bot management.</li>To get the available plan options for your account, view the output from <a href="https://tcloud4api.woa.com/document/product/1657/80124?!preview&!document=1">DescribeAvailablePlans</a>.
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置Plan options available for purchase. Values:
<li>`sta`: Standard plan for global areas except Chinese mainland;</li>
<li>`sta_with_bot`: Standard plan for global areas except Chinese mainland, with extra bot management;</li>
<li>`sta_cm`: Standard plan for Chinese mainland;</li>
<li>`sta_cm_with_bot`: Standard plan for Chinese mainland, with extra bot management;</li>
<li>`ent`: Enterprise plan for global areas except Chinese mainland;</li>
<li>`ent_with_bot`: Enterprise plan for global areas except Chinese mainland, with extra bot management;</li>
<li>`ent_cm`: Enterprise plan for Chinese mainland;</li>
<li>`ent_cm_with_bot`: Enterprise plan for Chinese mainland, with extra bot management.</li>To get the available plan options for your account, view the output from <a href="https://tcloud4api.woa.com/document/product/1657/80124?!preview&!document=1">DescribeAvailablePlans</a>.
                     * @param PlanType Plan options available for purchase. Values:
<li>`sta`: Standard plan for global areas except Chinese mainland;</li>
<li>`sta_with_bot`: Standard plan for global areas except Chinese mainland, with extra bot management;</li>
<li>`sta_cm`: Standard plan for Chinese mainland;</li>
<li>`sta_cm_with_bot`: Standard plan for Chinese mainland, with extra bot management;</li>
<li>`ent`: Enterprise plan for global areas except Chinese mainland;</li>
<li>`ent_with_bot`: Enterprise plan for global areas except Chinese mainland, with extra bot management;</li>
<li>`ent_cm`: Enterprise plan for Chinese mainland;</li>
<li>`ent_cm_with_bot`: Enterprise plan for Chinese mainland, with extra bot management.</li>To get the available plan options for your account, view the output from <a href="https://tcloud4api.woa.com/document/product/1657/80124?!preview&!document=1">DescribeAvailablePlans</a>.
                     */
                    void SetPlanType(const std::string& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     */
                    bool PlanTypeHasBeenSet() const;

                private:

                    /**
                     * ID of the site.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Plan options available for purchase. Values:
<li>`sta`: Standard plan for global areas except Chinese mainland;</li>
<li>`sta_with_bot`: Standard plan for global areas except Chinese mainland, with extra bot management;</li>
<li>`sta_cm`: Standard plan for Chinese mainland;</li>
<li>`sta_cm_with_bot`: Standard plan for Chinese mainland, with extra bot management;</li>
<li>`ent`: Enterprise plan for global areas except Chinese mainland;</li>
<li>`ent_with_bot`: Enterprise plan for global areas except Chinese mainland, with extra bot management;</li>
<li>`ent_cm`: Enterprise plan for Chinese mainland;</li>
<li>`ent_cm_with_bot`: Enterprise plan for Chinese mainland, with extra bot management.</li>To get the available plan options for your account, view the output from <a href="https://tcloud4api.woa.com/document/product/1657/80124?!preview&!document=1">DescribeAvailablePlans</a>.
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPLANFORZONEREQUEST_H_
