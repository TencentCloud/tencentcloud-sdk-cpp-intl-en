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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITALLOCATIONHISTORYDATA_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITALLOCATIONHISTORYDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Returned information for querying the customer credit allocation records
                */
                class QueryCreditAllocationHistoryData : public AbstractModel
                {
                public:
                    QueryCreditAllocationHistoryData();
                    ~QueryCreditAllocationHistoryData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Allocation time
                     * @return AllocatedTime Allocation time
                     * 
                     */
                    std::string GetAllocatedTime() const;

                    /**
                     * 设置Allocation time
                     * @param _allocatedTime Allocation time
                     * 
                     */
                    void SetAllocatedTime(const std::string& _allocatedTime);

                    /**
                     * 判断参数 AllocatedTime 是否已赋值
                     * @return AllocatedTime 是否已赋值
                     * 
                     */
                    bool AllocatedTimeHasBeenSet() const;

                    /**
                     * 获取Operator
                     * @return Operator Operator
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator
                     * @param _operator Operator
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Allocated credit value
                     * @return Credit Allocated credit value
                     * 
                     */
                    double GetCredit() const;

                    /**
                     * 设置Allocated credit value
                     * @param _credit Allocated credit value
                     * 
                     */
                    void SetCredit(const double& _credit);

                    /**
                     * 判断参数 Credit 是否已赋值
                     * @return Credit 是否已赋值
                     * 
                     */
                    bool CreditHasBeenSet() const;

                    /**
                     * 获取The allocated total credit
                     * @return AllocatedCredit The allocated total credit
                     * 
                     */
                    double GetAllocatedCredit() const;

                    /**
                     * 设置The allocated total credit
                     * @param _allocatedCredit The allocated total credit
                     * 
                     */
                    void SetAllocatedCredit(const double& _allocatedCredit);

                    /**
                     * 判断参数 AllocatedCredit 是否已赋值
                     * @return AllocatedCredit 是否已赋值
                     * 
                     */
                    bool AllocatedCreditHasBeenSet() const;

                    /**
                     * 获取Available credits after allocation
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @return ClientCreditAfter Available credits after allocation
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    double GetClientCreditAfter() const;

                    /**
                     * 设置Available credits after allocation
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @param _clientCreditAfter Available credits after allocation
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    void SetClientCreditAfter(const double& _clientCreditAfter);

                    /**
                     * 判断参数 ClientCreditAfter 是否已赋值
                     * @return ClientCreditAfter 是否已赋值
                     * 
                     */
                    bool ClientCreditAfterHasBeenSet() const;

                private:

                    /**
                     * Allocation time
                     */
                    std::string m_allocatedTime;
                    bool m_allocatedTimeHasBeenSet;

                    /**
                     * Operator
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Allocated credit value
                     */
                    double m_credit;
                    bool m_creditHasBeenSet;

                    /**
                     * The allocated total credit
                     */
                    double m_allocatedCredit;
                    bool m_allocatedCreditHasBeenSet;

                    /**
                     * Available credits after allocation
Note: The return value may be null, indicating that no valid data can be obtained.
                     */
                    double m_clientCreditAfter;
                    bool m_clientCreditAfterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITALLOCATIONHISTORYDATA_H_
