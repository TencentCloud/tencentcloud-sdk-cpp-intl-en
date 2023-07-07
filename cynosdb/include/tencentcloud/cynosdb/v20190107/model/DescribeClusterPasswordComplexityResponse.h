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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERPASSWORDCOMPLEXITYRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERPASSWORDCOMPLEXITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ParamInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeClusterPasswordComplexity response structure.
                */
                class DescribeClusterPasswordComplexityResponse : public AbstractModel
                {
                public:
                    DescribeClusterPasswordComplexityResponse();
                    ~DescribeClusterPasswordComplexityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Data dictionary parameter Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ValidatePasswordDictionary Data dictionary parameter Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ParamInfo GetValidatePasswordDictionary() const;

                    /**
                     * 判断参数 ValidatePasswordDictionary 是否已赋值
                     * @return ValidatePasswordDictionary 是否已赋值
                     * 
                     */
                    bool ValidatePasswordDictionaryHasBeenSet() const;

                    /**
                     * 获取The length of the password Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ValidatePasswordLength The length of the password Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ParamInfo GetValidatePasswordLength() const;

                    /**
                     * 判断参数 ValidatePasswordLength 是否已赋值
                     * @return ValidatePasswordLength 是否已赋值
                     * 
                     */
                    bool ValidatePasswordLengthHasBeenSet() const;

                    /**
                     * 获取Number of case-sensitive characters Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ValidatePasswordMixedCaseCount Number of case-sensitive characters Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ParamInfo GetValidatePasswordMixedCaseCount() const;

                    /**
                     * 判断参数 ValidatePasswordMixedCaseCount 是否已赋值
                     * @return ValidatePasswordMixedCaseCount 是否已赋值
                     * 
                     */
                    bool ValidatePasswordMixedCaseCountHasBeenSet() const;

                    /**
                     * 获取Number of digits Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ValidatePasswordNumberCount Number of digits Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ParamInfo GetValidatePasswordNumberCount() const;

                    /**
                     * 判断参数 ValidatePasswordNumberCount 是否已赋值
                     * @return ValidatePasswordNumberCount 是否已赋值
                     * 
                     */
                    bool ValidatePasswordNumberCountHasBeenSet() const;

                    /**
                     * 获取Password level Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ValidatePasswordPolicy Password level Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ParamInfo GetValidatePasswordPolicy() const;

                    /**
                     * 判断参数 ValidatePasswordPolicy 是否已赋值
                     * @return ValidatePasswordPolicy 是否已赋值
                     * 
                     */
                    bool ValidatePasswordPolicyHasBeenSet() const;

                    /**
                     * 获取Number of symbols Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ValidatePasswordSpecialCharCount Number of symbols Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ParamInfo GetValidatePasswordSpecialCharCount() const;

                    /**
                     * 判断参数 ValidatePasswordSpecialCharCount 是否已赋值
                     * @return ValidatePasswordSpecialCharCount 是否已赋值
                     * 
                     */
                    bool ValidatePasswordSpecialCharCountHasBeenSet() const;

                private:

                    /**
                     * Data dictionary parameter Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ParamInfo m_validatePasswordDictionary;
                    bool m_validatePasswordDictionaryHasBeenSet;

                    /**
                     * The length of the password Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ParamInfo m_validatePasswordLength;
                    bool m_validatePasswordLengthHasBeenSet;

                    /**
                     * Number of case-sensitive characters Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ParamInfo m_validatePasswordMixedCaseCount;
                    bool m_validatePasswordMixedCaseCountHasBeenSet;

                    /**
                     * Number of digits Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ParamInfo m_validatePasswordNumberCount;
                    bool m_validatePasswordNumberCountHasBeenSet;

                    /**
                     * Password level Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ParamInfo m_validatePasswordPolicy;
                    bool m_validatePasswordPolicyHasBeenSet;

                    /**
                     * Number of symbols Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ParamInfo m_validatePasswordSpecialCharCount;
                    bool m_validatePasswordSpecialCharCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERPASSWORDCOMPLEXITYRESPONSE_H_
