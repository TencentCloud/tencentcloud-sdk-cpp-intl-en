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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBOTSTATUSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBOTSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyBotStatus response structure.
                */
                class ModifyBotStatusResponse : public AbstractModel
                {
                public:
                    ModifyBotStatusResponse();
                    ~ModifyBotStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Normally null

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data Normally null

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取List of domain names for which no bots are purchased
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnSupportedList List of domain names for which no bots are purchased
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetUnSupportedList() const;

                    /**
                     * 判断参数 UnSupportedList 是否已赋值
                     * @return UnSupportedList 是否已赋值
                     * 
                     */
                    bool UnSupportedListHasBeenSet() const;

                    /**
                     * 获取List of domain names which bots are purchased but the operation fails
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailDomainList List of domain names which bots are purchased but the operation fails
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFailDomainList() const;

                    /**
                     * 判断参数 FailDomainList 是否已赋值
                     * @return FailDomainList 是否已赋值
                     * 
                     */
                    bool FailDomainListHasBeenSet() const;

                    /**
                     * 获取Number of successes
                     * @return Count Number of successes
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Normally null

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * List of domain names for which no bots are purchased
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_unSupportedList;
                    bool m_unSupportedListHasBeenSet;

                    /**
                     * List of domain names which bots are purchased but the operation fails
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_failDomainList;
                    bool m_failDomainListHasBeenSet;

                    /**
                     * Number of successes
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBOTSTATUSRESPONSE_H_
