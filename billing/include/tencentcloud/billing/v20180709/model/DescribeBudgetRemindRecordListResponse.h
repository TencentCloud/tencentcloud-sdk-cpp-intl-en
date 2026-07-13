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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBUDGETREMINDRECORDLISTRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBUDGETREMINDRECORDLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BudgetRemindRecordList.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBudgetRemindRecordList response structure.
                */
                class DescribeBudgetRemindRecordListResponse : public AbstractModel
                {
                public:
                    DescribeBudgetRemindRecordListResponse();
                    ~DescribeBudgetRemindRecordListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Budget configuration properties
                     * @return Data Budget configuration properties
                     * 
                     */
                    BudgetRemindRecordList GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Error message prompt.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Error message prompt.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Error response code
                     * @return Code Error response code
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * Budget configuration properties
                     */
                    BudgetRemindRecordList m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Error message prompt.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Error response code
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBUDGETREMINDRECORDLISTRESPONSE_H_
