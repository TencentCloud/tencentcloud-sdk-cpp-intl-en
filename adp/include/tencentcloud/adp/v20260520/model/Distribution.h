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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DISTRIBUTION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DISTRIBUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Reply type distribution item
                */
                class Distribution : public AbstractModel
                {
                public:
                    Distribution();
                    ~Distribution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Count of calls for this reply method</p>
                     * @return CallCount <p>Count of calls for this reply method</p>
                     * 
                     */
                    std::string GetCallCount() const;

                    /**
                     * 设置<p>Count of calls for this reply method</p>
                     * @param _callCount <p>Count of calls for this reply method</p>
                     * 
                     */
                    void SetCallCount(const std::string& _callCount);

                    /**
                     * 判断参数 CallCount 是否已赋值
                     * @return CallCount 是否已赋值
                     * 
                     */
                    bool CallCountHasBeenSet() const;

                    /**
                     * 获取<p>Percentage of this reply method in the total number of calls (percentage, 0–100, rounded to two decimal places; all 0 when no data is available, and the sum of all items is 100 when there is data)</p>
                     * @return Percentage <p>Percentage of this reply method in the total number of calls (percentage, 0–100, rounded to two decimal places; all 0 when no data is available, and the sum of all items is 100 when there is data)</p>
                     * 
                     */
                    double GetPercentage() const;

                    /**
                     * 设置<p>Percentage of this reply method in the total number of calls (percentage, 0–100, rounded to two decimal places; all 0 when no data is available, and the sum of all items is 100 when there is data)</p>
                     * @param _percentage <p>Percentage of this reply method in the total number of calls (percentage, 0–100, rounded to two decimal places; all 0 when no data is available, and the sum of all items is 100 when there is data)</p>
                     * 
                     */
                    void SetPercentage(const double& _percentage);

                    /**
                     * 判断参数 Percentage 是否已赋值
                     * @return Percentage 是否已赋值
                     * 
                     */
                    bool PercentageHasBeenSet() const;

                    /**
                     * 获取<p>Reply method name (internationalized according to the request language; falls back to the Enumeration Name of reply_method when i18n is missing)</p>
                     * @return ReplyName <p>Reply method name (internationalized according to the request language; falls back to the Enumeration Name of reply_method when i18n is missing)</p>
                     * 
                     */
                    std::string GetReplyName() const;

                    /**
                     * 设置<p>Reply method name (internationalized according to the request language; falls back to the Enumeration Name of reply_method when i18n is missing)</p>
                     * @param _replyName <p>Reply method name (internationalized according to the request language; falls back to the Enumeration Name of reply_method when i18n is missing)</p>
                     * 
                     */
                    void SetReplyName(const std::string& _replyName);

                    /**
                     * 判断参数 ReplyName 是否已赋值
                     * @return ReplyName 是否已赋值
                     * 
                     */
                    bool ReplyNameHasBeenSet() const;

                private:

                    /**
                     * <p>Count of calls for this reply method</p>
                     */
                    std::string m_callCount;
                    bool m_callCountHasBeenSet;

                    /**
                     * <p>Percentage of this reply method in the total number of calls (percentage, 0–100, rounded to two decimal places; all 0 when no data is available, and the sum of all items is 100 when there is data)</p>
                     */
                    double m_percentage;
                    bool m_percentageHasBeenSet;

                    /**
                     * <p>Reply method name (internationalized according to the request language; falls back to the Enumeration Name of reply_method when i18n is missing)</p>
                     */
                    std::string m_replyName;
                    bool m_replyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DISTRIBUTION_H_
