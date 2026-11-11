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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_INSTANCECHARGEPREPAID_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_INSTANCECHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * Prepaid billing information.
                */
                class InstanceChargePrepaid : public AbstractModel
                {
                public:
                    InstanceChargePrepaid();
                    ~InstanceChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Purchase duration in months (1-100).</p>
                     * @return Period <p>Purchase duration in months (1-100).</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>Purchase duration in months (1-100).</p>
                     * @param _period <p>Purchase duration in months (1-100).</p>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>Renewal flag (0: not set by the user; 1: auto-renewal; 2: no auto-renewal).</p>
                     * @return RenewFlag <p>Renewal flag (0: not set by the user; 1: auto-renewal; 2: no auto-renewal).</p>
                     * 
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置<p>Renewal flag (0: not set by the user; 1: auto-renewal; 2: no auto-renewal).</p>
                     * @param _renewFlag <p>Renewal flag (0: not set by the user; 1: auto-renewal; 2: no auto-renewal).</p>
                     * 
                     */
                    void SetRenewFlag(const uint64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * <p>Purchase duration in months (1-100).</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Renewal flag (0: not set by the user; 1: auto-renewal; 2: no auto-renewal).</p>
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_INSTANCECHARGEPREPAID_H_
