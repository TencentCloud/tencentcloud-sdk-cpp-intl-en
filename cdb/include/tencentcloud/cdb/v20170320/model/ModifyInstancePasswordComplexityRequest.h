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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPASSWORDCOMPLEXITYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPASSWORDCOMPLEXITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/Parameter.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyInstancePasswordComplexity request structure.
                */
                class ModifyInstancePasswordComplexityRequest : public AbstractModel
                {
                public:
                    ModifyInstancePasswordComplexityRequest();
                    ~ModifyInstancePasswordComplexityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID of the instance for which the password complexity needs to be modified. The [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API can be called to obtain it.
Description: Support multiple instance IDs for modification.
                     * @return InstanceIds Instance ID of the instance for which the password complexity needs to be modified. The [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API can be called to obtain it.
Description: Support multiple instance IDs for modification.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID of the instance for which the password complexity needs to be modified. The [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API can be called to obtain it.
Description: Support multiple instance IDs for modification.
                     * @param _instanceIds Instance ID of the instance for which the password complexity needs to be modified. The [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API can be called to obtain it.
Description: Support multiple instance IDs for modification.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Options to modify password complexity. Each option is written in metric combinations. A group includes Name and CurrentValue. Among them, Name refers to the parameter name of the corresponding option, and CurrentValue represents the parameter value. For example: [{"Name": "validate_password.length", "CurrentValue": "10"}] means changing the minimum number of characters in a password to 10.
Description: The options for modifying password complexity vary by database version of instances as follows.
1. MySQL 8.0:
The option validate_password.policy means the switch for password complexity. A value of LOW means disabling; a value of MEDIUM means enabling.
The option validate_password.length indicates the minimum number of characters for the total code length.
The option validate_password.mixed_case_count indicates the minimum number of lowercase and uppercase letters.
Option validate_password.number_count indicates the minimum number of digits.
The option validate_password.special_char_count indicates the minimum number of special characters.
2. MySQL 5.6,MySQL 5.7:
The option validate_password_policy means the password complexity switch. A value of LOW means disabling; a value of MEDIUM means enabling.
The option validate_password_length indicates the minimum number of characters for the total code length.
The option validate_password_mixed_case_count means the minimum number of uppercase and lowercase letters.
Option validate_password_number_count means the minimum number of digits.
Option validate_password_special_char_count indicates the minimum number of special characters.
                     * @return ParamList Options to modify password complexity. Each option is written in metric combinations. A group includes Name and CurrentValue. Among them, Name refers to the parameter name of the corresponding option, and CurrentValue represents the parameter value. For example: [{"Name": "validate_password.length", "CurrentValue": "10"}] means changing the minimum number of characters in a password to 10.
Description: The options for modifying password complexity vary by database version of instances as follows.
1. MySQL 8.0:
The option validate_password.policy means the switch for password complexity. A value of LOW means disabling; a value of MEDIUM means enabling.
The option validate_password.length indicates the minimum number of characters for the total code length.
The option validate_password.mixed_case_count indicates the minimum number of lowercase and uppercase letters.
Option validate_password.number_count indicates the minimum number of digits.
The option validate_password.special_char_count indicates the minimum number of special characters.
2. MySQL 5.6,MySQL 5.7:
The option validate_password_policy means the password complexity switch. A value of LOW means disabling; a value of MEDIUM means enabling.
The option validate_password_length indicates the minimum number of characters for the total code length.
The option validate_password_mixed_case_count means the minimum number of uppercase and lowercase letters.
Option validate_password_number_count means the minimum number of digits.
Option validate_password_special_char_count indicates the minimum number of special characters.
                     * 
                     */
                    std::vector<Parameter> GetParamList() const;

                    /**
                     * 设置Options to modify password complexity. Each option is written in metric combinations. A group includes Name and CurrentValue. Among them, Name refers to the parameter name of the corresponding option, and CurrentValue represents the parameter value. For example: [{"Name": "validate_password.length", "CurrentValue": "10"}] means changing the minimum number of characters in a password to 10.
Description: The options for modifying password complexity vary by database version of instances as follows.
1. MySQL 8.0:
The option validate_password.policy means the switch for password complexity. A value of LOW means disabling; a value of MEDIUM means enabling.
The option validate_password.length indicates the minimum number of characters for the total code length.
The option validate_password.mixed_case_count indicates the minimum number of lowercase and uppercase letters.
Option validate_password.number_count indicates the minimum number of digits.
The option validate_password.special_char_count indicates the minimum number of special characters.
2. MySQL 5.6,MySQL 5.7:
The option validate_password_policy means the password complexity switch. A value of LOW means disabling; a value of MEDIUM means enabling.
The option validate_password_length indicates the minimum number of characters for the total code length.
The option validate_password_mixed_case_count means the minimum number of uppercase and lowercase letters.
Option validate_password_number_count means the minimum number of digits.
Option validate_password_special_char_count indicates the minimum number of special characters.
                     * @param _paramList Options to modify password complexity. Each option is written in metric combinations. A group includes Name and CurrentValue. Among them, Name refers to the parameter name of the corresponding option, and CurrentValue represents the parameter value. For example: [{"Name": "validate_password.length", "CurrentValue": "10"}] means changing the minimum number of characters in a password to 10.
Description: The options for modifying password complexity vary by database version of instances as follows.
1. MySQL 8.0:
The option validate_password.policy means the switch for password complexity. A value of LOW means disabling; a value of MEDIUM means enabling.
The option validate_password.length indicates the minimum number of characters for the total code length.
The option validate_password.mixed_case_count indicates the minimum number of lowercase and uppercase letters.
Option validate_password.number_count indicates the minimum number of digits.
The option validate_password.special_char_count indicates the minimum number of special characters.
2. MySQL 5.6,MySQL 5.7:
The option validate_password_policy means the password complexity switch. A value of LOW means disabling; a value of MEDIUM means enabling.
The option validate_password_length indicates the minimum number of characters for the total code length.
The option validate_password_mixed_case_count means the minimum number of uppercase and lowercase letters.
Option validate_password_number_count means the minimum number of digits.
Option validate_password_special_char_count indicates the minimum number of special characters.
                     * 
                     */
                    void SetParamList(const std::vector<Parameter>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                private:

                    /**
                     * Instance ID of the instance for which the password complexity needs to be modified. The [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API can be called to obtain it.
Description: Support multiple instance IDs for modification.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Options to modify password complexity. Each option is written in metric combinations. A group includes Name and CurrentValue. Among them, Name refers to the parameter name of the corresponding option, and CurrentValue represents the parameter value. For example: [{"Name": "validate_password.length", "CurrentValue": "10"}] means changing the minimum number of characters in a password to 10.
Description: The options for modifying password complexity vary by database version of instances as follows.
1. MySQL 8.0:
The option validate_password.policy means the switch for password complexity. A value of LOW means disabling; a value of MEDIUM means enabling.
The option validate_password.length indicates the minimum number of characters for the total code length.
The option validate_password.mixed_case_count indicates the minimum number of lowercase and uppercase letters.
Option validate_password.number_count indicates the minimum number of digits.
The option validate_password.special_char_count indicates the minimum number of special characters.
2. MySQL 5.6,MySQL 5.7:
The option validate_password_policy means the password complexity switch. A value of LOW means disabling; a value of MEDIUM means enabling.
The option validate_password_length indicates the minimum number of characters for the total code length.
The option validate_password_mixed_case_count means the minimum number of uppercase and lowercase letters.
Option validate_password_number_count means the minimum number of digits.
Option validate_password_special_char_count indicates the minimum number of special characters.
                     */
                    std::vector<Parameter> m_paramList;
                    bool m_paramListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPASSWORDCOMPLEXITYREQUEST_H_
