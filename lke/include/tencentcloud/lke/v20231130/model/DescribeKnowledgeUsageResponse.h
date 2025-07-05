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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEKNOWLEDGEUSAGERESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEKNOWLEDGEUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeKnowledgeUsage response structure.
                */
                class DescribeKnowledgeUsageResponse : public AbstractModel
                {
                public:
                    DescribeKnowledgeUsageResponse();
                    ~DescribeKnowledgeUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The upper limit of available characters.
                     * @return AvailableCharSize The upper limit of available characters.
                     * 
                     */
                    std::string GetAvailableCharSize() const;

                    /**
                     * 判断参数 AvailableCharSize 是否已赋值
                     * @return AvailableCharSize 是否已赋值
                     * 
                     */
                    bool AvailableCharSizeHasBeenSet() const;

                    /**
                     * 获取Number of characters exceeding the capacity limit of available characters.
                     * @return ExceedCharSize Number of characters exceeding the capacity limit of available characters.
                     * 
                     */
                    std::string GetExceedCharSize() const;

                    /**
                     * 判断参数 ExceedCharSize 是否已赋值
                     * @return ExceedCharSize 是否已赋值
                     * 
                     */
                    bool ExceedCharSizeHasBeenSet() const;

                    /**
                     * 获取Total number of characters used in the knowledge library.
                     * @return UsedCharSize Total number of characters used in the knowledge library.
                     * 
                     */
                    std::string GetUsedCharSize() const;

                    /**
                     * 判断参数 UsedCharSize 是否已赋值
                     * @return UsedCharSize 是否已赋值
                     * 
                     */
                    bool UsedCharSizeHasBeenSet() const;

                private:

                    /**
                     * The upper limit of available characters.
                     */
                    std::string m_availableCharSize;
                    bool m_availableCharSizeHasBeenSet;

                    /**
                     * Number of characters exceeding the capacity limit of available characters.
                     */
                    std::string m_exceedCharSize;
                    bool m_exceedCharSizeHasBeenSet;

                    /**
                     * Total number of characters used in the knowledge library.
                     */
                    std::string m_usedCharSize;
                    bool m_usedCharSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEKNOWLEDGEUSAGERESPONSE_H_
