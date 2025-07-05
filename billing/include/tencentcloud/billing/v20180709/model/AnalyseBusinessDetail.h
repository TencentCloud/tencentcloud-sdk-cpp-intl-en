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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEBUSINESSDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEBUSINESSDETAIL_H_

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
                * Cost analysis product return complex type
                */
                class AnalyseBusinessDetail : public AbstractModel
                {
                public:
                    AnalyseBusinessDetail();
                    ~AnalyseBusinessDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product codeNote: This field may return null, indicating that no valid values can be obtained.
                     * @return BusinessCode Product codeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置Product codeNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _businessCode Product codeNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取Product nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @return BusinessCodeName Product nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置Product nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _businessCodeName Product nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBusinessCodeName(const std::string& _businessCodeName);

                    /**
                     * 判断参数 BusinessCodeName 是否已赋值
                     * @return BusinessCodeName 是否已赋值
                     * 
                     */
                    bool BusinessCodeNameHasBeenSet() const;

                private:

                    /**
                     * Product codeNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * Product nameNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEBUSINESSDETAIL_H_
