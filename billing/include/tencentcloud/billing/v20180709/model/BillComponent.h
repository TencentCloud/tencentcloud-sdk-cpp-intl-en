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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BILLCOMPONENT_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BILLCOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Component type filter list
                */
                class BillComponent : public AbstractModel
                {
                public:
                    BillComponent();
                    ~BillComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Component type code
                     * @return ComponentCode Component type code
                     * 
                     */
                    std::string GetComponentCode() const;

                    /**
                     * 设置Component type code
                     * @param _componentCode Component type code
                     * 
                     */
                    void SetComponentCode(const std::string& _componentCode);

                    /**
                     * 判断参数 ComponentCode 是否已赋值
                     * @return ComponentCode 是否已赋值
                     * 
                     */
                    bool ComponentCodeHasBeenSet() const;

                    /**
                     * 获取Component type: The major component category corresponding to the product or service purchased by the user
                     * @return ComponentCodeName Component type: The major component category corresponding to the product or service purchased by the user
                     * 
                     */
                    std::string GetComponentCodeName() const;

                    /**
                     * 设置Component type: The major component category corresponding to the product or service purchased by the user
                     * @param _componentCodeName Component type: The major component category corresponding to the product or service purchased by the user
                     * 
                     */
                    void SetComponentCodeName(const std::string& _componentCodeName);

                    /**
                     * 判断参数 ComponentCodeName 是否已赋值
                     * @return ComponentCodeName 是否已赋值
                     * 
                     */
                    bool ComponentCodeNameHasBeenSet() const;

                private:

                    /**
                     * Component type code
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * Component type: The major component category corresponding to the product or service purchased by the user
                     */
                    std::string m_componentCodeName;
                    bool m_componentCodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLCOMPONENT_H_
