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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_USEDEFAULTREPOPARAMETERS_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_USEDEFAULTREPOPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Repository parameters 
                */
                class UseDefaultRepoParameters : public AbstractModel
                {
                public:
                    UseDefaultRepoParameters();
                    ~UseDefaultRepoParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TCR Enterprise instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnterpriseInstanceName TCR Enterprise instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEnterpriseInstanceName() const;

                    /**
                     * 设置TCR Enterprise instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enterpriseInstanceName TCR Enterprise instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnterpriseInstanceName(const std::string& _enterpriseInstanceName);

                    /**
                     * 判断参数 EnterpriseInstanceName 是否已赋值
                     * @return EnterpriseInstanceName 是否已赋值
                     * 
                     */
                    bool EnterpriseInstanceNameHasBeenSet() const;

                    /**
                     * 获取TCR Enterprise billing mode. `0`: Pay-as-you-go 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnterpriseInstanceChargeType TCR Enterprise billing mode. `0`: Pay-as-you-go 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEnterpriseInstanceChargeType() const;

                    /**
                     * 设置TCR Enterprise billing mode. `0`: Pay-as-you-go 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enterpriseInstanceChargeType TCR Enterprise billing mode. `0`: Pay-as-you-go 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnterpriseInstanceChargeType(const int64_t& _enterpriseInstanceChargeType);

                    /**
                     * 判断参数 EnterpriseInstanceChargeType 是否已赋值
                     * @return EnterpriseInstanceChargeType 是否已赋值
                     * 
                     */
                    bool EnterpriseInstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Edition of the TCR Enterprise. Values: `basic`, `standard`, `premium` (Advanced edition)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnterpriseInstanceType Edition of the TCR Enterprise. Values: `basic`, `standard`, `premium` (Advanced edition)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEnterpriseInstanceType() const;

                    /**
                     * 设置Edition of the TCR Enterprise. Values: `basic`, `standard`, `premium` (Advanced edition)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enterpriseInstanceType Edition of the TCR Enterprise. Values: `basic`, `standard`, `premium` (Advanced edition)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnterpriseInstanceType(const std::string& _enterpriseInstanceType);

                    /**
                     * 判断参数 EnterpriseInstanceType 是否已赋值
                     * @return EnterpriseInstanceType 是否已赋值
                     * 
                     */
                    bool EnterpriseInstanceTypeHasBeenSet() const;

                private:

                    /**
                     * TCR Enterprise instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_enterpriseInstanceName;
                    bool m_enterpriseInstanceNameHasBeenSet;

                    /**
                     * TCR Enterprise billing mode. `0`: Pay-as-you-go 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_enterpriseInstanceChargeType;
                    bool m_enterpriseInstanceChargeTypeHasBeenSet;

                    /**
                     * Edition of the TCR Enterprise. Values: `basic`, `standard`, `premium` (Advanced edition)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_enterpriseInstanceType;
                    bool m_enterpriseInstanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_USEDEFAULTREPOPARAMETERS_H_
