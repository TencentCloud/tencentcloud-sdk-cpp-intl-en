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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCECHARGEPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCECHARGEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Instance billing parameters
                */
                class InstanceChargeParam : public AbstractModel
                {
                public:
                    InstanceChargeParam();
                    ~InstanceChargeParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance billing mode (`PREPAID`: Monthly subscription; `POSTPAID_BY_HOUR`: Pay-as-you-go)
                     * @return InstanceChargeType Instance billing mode (`PREPAID`: Monthly subscription; `POSTPAID_BY_HOUR`: Pay-as-you-go)
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing mode (`PREPAID`: Monthly subscription; `POSTPAID_BY_HOUR`: Pay-as-you-go)
                     * @param _instanceChargeType Instance billing mode (`PREPAID`: Monthly subscription; `POSTPAID_BY_HOUR`: Pay-as-you-go)
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Validity period, which is only required for the monthly subscription billing mode
                     * @return InstanceChargePeriod Validity period, which is only required for the monthly subscription billing mode
                     * 
                     */
                    int64_t GetInstanceChargePeriod() const;

                    /**
                     * 设置Validity period, which is only required for the monthly subscription billing mode
                     * @param _instanceChargePeriod Validity period, which is only required for the monthly subscription billing mode
                     * 
                     */
                    void SetInstanceChargePeriod(const int64_t& _instanceChargePeriod);

                    /**
                     * 判断参数 InstanceChargePeriod 是否已赋值
                     * @return InstanceChargePeriod 是否已赋值
                     * 
                     */
                    bool InstanceChargePeriodHasBeenSet() const;

                private:

                    /**
                     * Instance billing mode (`PREPAID`: Monthly subscription; `POSTPAID_BY_HOUR`: Pay-as-you-go)
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Validity period, which is only required for the monthly subscription billing mode
                     */
                    int64_t m_instanceChargePeriod;
                    bool m_instanceChargePeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCECHARGEPARAM_H_
