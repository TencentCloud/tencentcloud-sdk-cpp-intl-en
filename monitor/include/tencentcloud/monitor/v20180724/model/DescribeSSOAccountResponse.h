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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESSOACCOUNTRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESSOACCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/GrafanaAccountInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeSSOAccount response structure.
                */
                class DescribeSSOAccountResponse : public AbstractModel
                {
                public:
                    DescribeSSOAccountResponse();
                    ~DescribeSSOAccountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of authorized accounts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccountSet List of authorized accounts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<GrafanaAccountInfo> GetAccountSet() const;

                    /**
                     * 判断参数 AccountSet 是否已赋值
                     * @return AccountSet 是否已赋值
                     * 
                     */
                    bool AccountSetHasBeenSet() const;

                private:

                    /**
                     * List of authorized accounts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<GrafanaAccountInfo> m_accountSet;
                    bool m_accountSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESSOACCOUNTRESPONSE_H_
