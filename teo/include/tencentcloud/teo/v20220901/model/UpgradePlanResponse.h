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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_UPGRADEPLANRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_UPGRADEPLANRESPONSE_H_

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
                * UpgradePlan response structure.
                */
                class UpgradePlanResponse : public AbstractModel
                {
                public:
                    UpgradePlanResponse();
                    ~UpgradePlanResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Order number.
                     * @return DealName Order number.
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                private:

                    /**
                     * Order number.
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_UPGRADEPLANRESPONSE_H_
