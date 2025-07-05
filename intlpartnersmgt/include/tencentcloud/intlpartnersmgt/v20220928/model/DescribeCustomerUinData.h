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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERUINDATA_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERUINDATA_H_

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
                * List of customer UINs
                */
                class DescribeCustomerUinData : public AbstractModel
                {
                public:
                    DescribeCustomerUinData();
                    ~DescribeCustomerUinData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Customer UIN Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CustomerUin Customer UIN Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCustomerUin() const;

                    /**
                     * 设置Customer UIN Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _customerUin Customer UIN Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCustomerUin(const std::string& _customerUin);

                    /**
                     * 判断参数 CustomerUin 是否已赋值
                     * @return CustomerUin 是否已赋值
                     * 
                     */
                    bool CustomerUinHasBeenSet() const;

                private:

                    /**
                     * Customer UIN Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_customerUin;
                    bool m_customerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERUINDATA_H_
