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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEPRODUCTDYNAMICREGISTERRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEPRODUCTDYNAMICREGISTERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * UpdateProductDynamicRegister response structure.
                */
                class UpdateProductDynamicRegisterResponse : public AbstractModel
                {
                public:
                    UpdateProductDynamicRegisterResponse();
                    ~UpdateProductDynamicRegisterResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Dynamic registration type. Valid values: 0 - disabled; 1 - pre-create device; 2 - auto-create device.
                     * @return RegisterType Dynamic registration type. Valid values: 0 - disabled; 1 - pre-create device; 2 - auto-create device.
                     * 
                     */
                    uint64_t GetRegisterType() const;

                    /**
                     * 判断参数 RegisterType 是否已赋值
                     * @return RegisterType 是否已赋值
                     * 
                     */
                    bool RegisterTypeHasBeenSet() const;

                    /**
                     * 获取Product key for dynamic registration
                     * @return ProductSecret Product key for dynamic registration
                     * 
                     */
                    std::string GetProductSecret() const;

                    /**
                     * 判断参数 ProductSecret 是否已赋值
                     * @return ProductSecret 是否已赋值
                     * 
                     */
                    bool ProductSecretHasBeenSet() const;

                    /**
                     * 获取Maximum dynamically registered devices
                     * @return RegisterLimit Maximum dynamically registered devices
                     * 
                     */
                    uint64_t GetRegisterLimit() const;

                    /**
                     * 判断参数 RegisterLimit 是否已赋值
                     * @return RegisterLimit 是否已赋值
                     * 
                     */
                    bool RegisterLimitHasBeenSet() const;

                private:

                    /**
                     * Dynamic registration type. Valid values: 0 - disabled; 1 - pre-create device; 2 - auto-create device.
                     */
                    uint64_t m_registerType;
                    bool m_registerTypeHasBeenSet;

                    /**
                     * Product key for dynamic registration
                     */
                    std::string m_productSecret;
                    bool m_productSecretHasBeenSet;

                    /**
                     * Maximum dynamically registered devices
                     */
                    uint64_t m_registerLimit;
                    bool m_registerLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEPRODUCTDYNAMICREGISTERRESPONSE_H_
