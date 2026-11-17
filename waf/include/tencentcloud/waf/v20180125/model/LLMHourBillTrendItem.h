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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMHOURBILLTRENDITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMHOURBILLTRENDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Hourly bill trend data point of LLM security
                */
                class LLMHourBillTrendItem : public AbstractModel
                {
                public:
                    LLMHourBillTrendItem();
                    ~LLMHourBillTrendItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hour. Valid values: 00 to 23.
                     * @return Hour Hour. Valid values: 00 to 23.
                     * 
                     */
                    std::string GetHour() const;

                    /**
                     * 设置Hour. Valid values: 00 to 23.
                     * @param _hour Hour. Valid values: 00 to 23.
                     * 
                     */
                    void SetHour(const std::string& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取Total bill amount for the hour (in CNY, net cost)
                     * @return Fee Total bill amount for the hour (in CNY, net cost)
                     * 
                     */
                    std::string GetFee() const;

                    /**
                     * 设置Total bill amount for the hour (in CNY, net cost)
                     * @param _fee Total bill amount for the hour (in CNY, net cost)
                     * 
                     */
                    void SetFee(const std::string& _fee);

                    /**
                     * 判断参数 Fee 是否已赋值
                     * @return Fee 是否已赋值
                     * 
                     */
                    bool FeeHasBeenSet() const;

                private:

                    /**
                     * Hour. Valid values: 00 to 23.
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * Total bill amount for the hour (in CNY, net cost)
                     */
                    std::string m_fee;
                    bool m_feeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMHOURBILLTRENDITEM_H_
