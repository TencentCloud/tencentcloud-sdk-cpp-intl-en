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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETIWDAILYUSAGERESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETIWDAILYUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/UsageDataItem.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeTIWDailyUsage response structure.
                */
                class DescribeTIWDailyUsageResponse : public AbstractModel
                {
                public:
                    DescribeTIWDailyUsageResponse();
                    ~DescribeTIWDailyUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Usage summary of a specified product during a specified query period.
                     * @return Usages Usage summary of a specified product during a specified query period.
                     * 
                     */
                    std::vector<UsageDataItem> GetUsages() const;

                    /**
                     * 判断参数 Usages 是否已赋值
                     * @return Usages 是否已赋值
                     * 
                     */
                    bool UsagesHasBeenSet() const;

                private:

                    /**
                     * Usage summary of a specified product during a specified query period.
                     */
                    std::vector<UsageDataItem> m_usages;
                    bool m_usagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETIWDAILYUSAGERESPONSE_H_
