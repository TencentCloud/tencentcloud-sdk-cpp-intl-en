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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_INITDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_INITDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ParamInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * InitDBInstances request structure.
                */
                class InitDBInstancesRequest : public AbstractModel
                {
                public:
                    InitDBInstancesRequest();
                    ~InitDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     * @return InstanceIds Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     * @param InstanceIds Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取New password of the instance. Rule: It can only contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and special characters (!@#$%^*()).
                     * @return NewPassword New password of the instance. Rule: It can only contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and special characters (!@#$%^*()).
                     */
                    std::string GetNewPassword() const;

                    /**
                     * 设置New password of the instance. Rule: It can only contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and special characters (!@#$%^*()).
                     * @param NewPassword New password of the instance. Rule: It can only contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and special characters (!@#$%^*()).
                     */
                    void SetNewPassword(const std::string& _newPassword);

                    /**
                     * 判断参数 NewPassword 是否已赋值
                     * @return NewPassword 是否已赋值
                     */
                    bool NewPasswordHasBeenSet() const;

                    /**
                     * 获取List of instance parameters. Currently, "character_set_server" and "lower_case_table_names" are supported, whose value ranges are ["utf8","latin1","gbk","utf8mb4"] and ["0","1"], respectively.
                     * @return Parameters List of instance parameters. Currently, "character_set_server" and "lower_case_table_names" are supported, whose value ranges are ["utf8","latin1","gbk","utf8mb4"] and ["0","1"], respectively.
                     */
                    std::vector<ParamInfo> GetParameters() const;

                    /**
                     * 设置List of instance parameters. Currently, "character_set_server" and "lower_case_table_names" are supported, whose value ranges are ["utf8","latin1","gbk","utf8mb4"] and ["0","1"], respectively.
                     * @param Parameters List of instance parameters. Currently, "character_set_server" and "lower_case_table_names" are supported, whose value ranges are ["utf8","latin1","gbk","utf8mb4"] and ["0","1"], respectively.
                     */
                    void SetParameters(const std::vector<ParamInfo>& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取Instance port. Value range: [1024, 65535].
                     * @return Vport Instance port. Value range: [1024, 65535].
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Instance port. Value range: [1024, 65535].
                     * @param Vport Instance port. Value range: [1024, 65535].
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * New password of the instance. Rule: It can only contain 8-64 characters and must contain at least two of the following types of characters: letters, digits, and special characters (!@#$%^*()).
                     */
                    std::string m_newPassword;
                    bool m_newPasswordHasBeenSet;

                    /**
                     * List of instance parameters. Currently, "character_set_server" and "lower_case_table_names" are supported, whose value ranges are ["utf8","latin1","gbk","utf8mb4"] and ["0","1"], respectively.
                     */
                    std::vector<ParamInfo> m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * Instance port. Value range: [1024, 65535].
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_INITDBINSTANCESREQUEST_H_
