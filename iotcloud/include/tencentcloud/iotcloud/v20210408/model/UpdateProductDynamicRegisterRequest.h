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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEPRODUCTDYNAMICREGISTERREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEPRODUCTDYNAMICREGISTERREQUEST_H_

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
                * UpdateProductDynamicRegister request structure.
                */
                class UpdateProductDynamicRegisterRequest : public AbstractModel
                {
                public:
                    UpdateProductDynamicRegisterRequest();
                    ~UpdateProductDynamicRegisterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Product ID
                     * @return ProductId Product ID
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置Product ID
                     * @param ProductId Product ID
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Dynamic registration type. Valid values: 0 - disabled; 1 - pre-create device; 2 - auto-create device.
                     * @return RegisterType Dynamic registration type. Valid values: 0 - disabled; 1 - pre-create device; 2 - auto-create device.
                     */
                    uint64_t GetRegisterType() const;

                    /**
                     * 设置Dynamic registration type. Valid values: 0 - disabled; 1 - pre-create device; 2 - auto-create device.
                     * @param RegisterType Dynamic registration type. Valid values: 0 - disabled; 1 - pre-create device; 2 - auto-create device.
                     */
                    void SetRegisterType(const uint64_t& _registerType);

                    /**
                     * 判断参数 RegisterType 是否已赋值
                     * @return RegisterType 是否已赋值
                     */
                    bool RegisterTypeHasBeenSet() const;

                    /**
                     * 获取Maximum dynamically registered devices
                     * @return RegisterLimit Maximum dynamically registered devices
                     */
                    uint64_t GetRegisterLimit() const;

                    /**
                     * 设置Maximum dynamically registered devices
                     * @param RegisterLimit Maximum dynamically registered devices
                     */
                    void SetRegisterLimit(const uint64_t& _registerLimit);

                    /**
                     * 判断参数 RegisterLimit 是否已赋值
                     * @return RegisterLimit 是否已赋值
                     */
                    bool RegisterLimitHasBeenSet() const;

                private:

                    /**
                     * Product ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Dynamic registration type. Valid values: 0 - disabled; 1 - pre-create device; 2 - auto-create device.
                     */
                    uint64_t m_registerType;
                    bool m_registerTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEPRODUCTDYNAMICREGISTERREQUEST_H_
