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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_PREPAIDPLANPARAM_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_PREPAIDPLANPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Prepaid Plan Billing Parameters
                */
                class PrepaidPlanParam : public AbstractModel
                {
                public:
                    PrepaidPlanParam();
                    ~PrepaidPlanParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Prepaid plan duration, unit: month. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.

If this field is not specified, the default value '1' will be used.
                     * @return Period Prepaid plan duration, unit: month. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.

If this field is not specified, the default value '1' will be used.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Prepaid plan duration, unit: month. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.

If this field is not specified, the default value '1' will be used.
                     * @param _period Prepaid plan duration, unit: month. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.

If this field is not specified, the default value '1' will be used.
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取The auto-renewal flag for prepaid plan has the following values:
<li> on: Enable auto-renewal;</li>
<li> off: Disable auto-renewal. </li>
If this field is not specified, the default value 'off' will be used. When auto-renewal is enabled, it defaults to renewing for one month.
                     * @return RenewFlag The auto-renewal flag for prepaid plan has the following values:
<li> on: Enable auto-renewal;</li>
<li> off: Disable auto-renewal. </li>
If this field is not specified, the default value 'off' will be used. When auto-renewal is enabled, it defaults to renewing for one month.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置The auto-renewal flag for prepaid plan has the following values:
<li> on: Enable auto-renewal;</li>
<li> off: Disable auto-renewal. </li>
If this field is not specified, the default value 'off' will be used. When auto-renewal is enabled, it defaults to renewing for one month.
                     * @param _renewFlag The auto-renewal flag for prepaid plan has the following values:
<li> on: Enable auto-renewal;</li>
<li> off: Disable auto-renewal. </li>
If this field is not specified, the default value 'off' will be used. When auto-renewal is enabled, it defaults to renewing for one month.
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * Prepaid plan duration, unit: month. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.

If this field is not specified, the default value '1' will be used.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * The auto-renewal flag for prepaid plan has the following values:
<li> on: Enable auto-renewal;</li>
<li> off: Disable auto-renewal. </li>
If this field is not specified, the default value 'off' will be used. When auto-renewal is enabled, it defaults to renewing for one month.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_PREPAIDPLANPARAM_H_
