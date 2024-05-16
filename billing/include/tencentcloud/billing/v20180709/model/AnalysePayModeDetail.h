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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEPAYMODEDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEPAYMODEDETAIL_H_

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
                * Cost analysis payment method complex type
                */
                class AnalysePayModeDetail : public AbstractModel
                {
                public:
                    AnalysePayModeDetail();
                    ~AnalysePayModeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Billing mode codeNote: This field may return null, indicating that no valid values can be obtained.
                     * @return PayMode Billing mode codeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing mode codeNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _payMode Billing mode codeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Billing mode nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @return PayModeName Billing mode nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置Billing mode nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _payModeName Billing mode nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayModeName(const std::string& _payModeName);

                    /**
                     * 判断参数 PayModeName 是否已赋值
                     * @return PayModeName 是否已赋值
                     * 
                     */
                    bool PayModeNameHasBeenSet() const;

                private:

                    /**
                     * Billing mode codeNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Billing mode nameNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEPAYMODEDETAIL_H_
