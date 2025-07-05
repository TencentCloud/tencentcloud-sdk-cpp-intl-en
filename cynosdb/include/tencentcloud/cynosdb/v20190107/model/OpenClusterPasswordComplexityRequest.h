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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENCLUSTERPASSWORDCOMPLEXITYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENCLUSTERPASSWORDCOMPLEXITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * OpenClusterPasswordComplexity request structure.
                */
                class OpenClusterPasswordComplexityRequest : public AbstractModel
                {
                public:
                    OpenClusterPasswordComplexityRequest();
                    ~OpenClusterPasswordComplexityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Password length
                     * @return ValidatePasswordLength Password length
                     * 
                     */
                    int64_t GetValidatePasswordLength() const;

                    /**
                     * 设置Password length
                     * @param _validatePasswordLength Password length
                     * 
                     */
                    void SetValidatePasswordLength(const int64_t& _validatePasswordLength);

                    /**
                     * 判断参数 ValidatePasswordLength 是否已赋值
                     * @return ValidatePasswordLength 是否已赋值
                     * 
                     */
                    bool ValidatePasswordLengthHasBeenSet() const;

                    /**
                     * 获取Number of letters
                     * @return ValidatePasswordMixedCaseCount Number of letters
                     * 
                     */
                    int64_t GetValidatePasswordMixedCaseCount() const;

                    /**
                     * 设置Number of letters
                     * @param _validatePasswordMixedCaseCount Number of letters
                     * 
                     */
                    void SetValidatePasswordMixedCaseCount(const int64_t& _validatePasswordMixedCaseCount);

                    /**
                     * 判断参数 ValidatePasswordMixedCaseCount 是否已赋值
                     * @return ValidatePasswordMixedCaseCount 是否已赋值
                     * 
                     */
                    bool ValidatePasswordMixedCaseCountHasBeenSet() const;

                    /**
                     * 获取Number of symbols
                     * @return ValidatePasswordSpecialCharCount Number of symbols
                     * 
                     */
                    int64_t GetValidatePasswordSpecialCharCount() const;

                    /**
                     * 设置Number of symbols
                     * @param _validatePasswordSpecialCharCount Number of symbols
                     * 
                     */
                    void SetValidatePasswordSpecialCharCount(const int64_t& _validatePasswordSpecialCharCount);

                    /**
                     * 判断参数 ValidatePasswordSpecialCharCount 是否已赋值
                     * @return ValidatePasswordSpecialCharCount 是否已赋值
                     * 
                     */
                    bool ValidatePasswordSpecialCharCountHasBeenSet() const;

                    /**
                     * 获取Number of digits
                     * @return ValidatePasswordNumberCount Number of digits
                     * 
                     */
                    int64_t GetValidatePasswordNumberCount() const;

                    /**
                     * 设置Number of digits
                     * @param _validatePasswordNumberCount Number of digits
                     * 
                     */
                    void SetValidatePasswordNumberCount(const int64_t& _validatePasswordNumberCount);

                    /**
                     * 判断参数 ValidatePasswordNumberCount 是否已赋值
                     * @return ValidatePasswordNumberCount 是否已赋值
                     * 
                     */
                    bool ValidatePasswordNumberCountHasBeenSet() const;

                    /**
                     * 获取Password strength. Valid values: `MEDIUM`, `STRONG`.
                     * @return ValidatePasswordPolicy Password strength. Valid values: `MEDIUM`, `STRONG`.
                     * 
                     */
                    std::string GetValidatePasswordPolicy() const;

                    /**
                     * 设置Password strength. Valid values: `MEDIUM`, `STRONG`.
                     * @param _validatePasswordPolicy Password strength. Valid values: `MEDIUM`, `STRONG`.
                     * 
                     */
                    void SetValidatePasswordPolicy(const std::string& _validatePasswordPolicy);

                    /**
                     * 判断参数 ValidatePasswordPolicy 是否已赋值
                     * @return ValidatePasswordPolicy 是否已赋值
                     * 
                     */
                    bool ValidatePasswordPolicyHasBeenSet() const;

                    /**
                     * 获取Data dictionary
                     * @return ValidatePasswordDictionary Data dictionary
                     * 
                     */
                    std::vector<std::string> GetValidatePasswordDictionary() const;

                    /**
                     * 设置Data dictionary
                     * @param _validatePasswordDictionary Data dictionary
                     * 
                     */
                    void SetValidatePasswordDictionary(const std::vector<std::string>& _validatePasswordDictionary);

                    /**
                     * 判断参数 ValidatePasswordDictionary 是否已赋值
                     * @return ValidatePasswordDictionary 是否已赋值
                     * 
                     */
                    bool ValidatePasswordDictionaryHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Password length
                     */
                    int64_t m_validatePasswordLength;
                    bool m_validatePasswordLengthHasBeenSet;

                    /**
                     * Number of letters
                     */
                    int64_t m_validatePasswordMixedCaseCount;
                    bool m_validatePasswordMixedCaseCountHasBeenSet;

                    /**
                     * Number of symbols
                     */
                    int64_t m_validatePasswordSpecialCharCount;
                    bool m_validatePasswordSpecialCharCountHasBeenSet;

                    /**
                     * Number of digits
                     */
                    int64_t m_validatePasswordNumberCount;
                    bool m_validatePasswordNumberCountHasBeenSet;

                    /**
                     * Password strength. Valid values: `MEDIUM`, `STRONG`.
                     */
                    std::string m_validatePasswordPolicy;
                    bool m_validatePasswordPolicyHasBeenSet;

                    /**
                     * Data dictionary
                     */
                    std::vector<std::string> m_validatePasswordDictionary;
                    bool m_validatePasswordDictionaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENCLUSTERPASSWORDCOMPLEXITYREQUEST_H_
