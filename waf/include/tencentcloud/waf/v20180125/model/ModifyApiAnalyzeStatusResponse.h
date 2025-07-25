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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPIANALYZESTATUSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPIANALYZESTATUSRESPONSE_H_

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
                * ModifyApiAnalyzeStatus response structure.
                */
                class ModifyApiAnalyzeStatusResponse : public AbstractModel
                {
                public:
                    ModifyApiAnalyzeStatusResponse();
                    ~ModifyApiAnalyzeStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of Activated. If the returned value is 3 (greater than the number of domains supported for activation), the activation has failed.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Count Number of Activated. If the returned value is 3 (greater than the number of domains supported for activation), the activation has failed.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Domain list not supported to enable

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnSupportedList Domain list not supported to enable

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
                     * 获取Domain list with enabling/disabling failed

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailDomainList Domain list with enabling/disabling failed

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

                private:

                    /**
                     * Number of Activated. If the returned value is 3 (greater than the number of domains supported for activation), the activation has failed.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Domain list not supported to enable

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_unSupportedList;
                    bool m_unSupportedListHasBeenSet;

                    /**
                     * Domain list with enabling/disabling failed

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_failDomainList;
                    bool m_failDomainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPIANALYZESTATUSRESPONSE_H_
