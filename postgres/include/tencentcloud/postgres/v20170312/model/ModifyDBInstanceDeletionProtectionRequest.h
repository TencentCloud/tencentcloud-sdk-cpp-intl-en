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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCEDELETIONPROTECTIONREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCEDELETIONPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceDeletionProtection request structure.
                */
                class ModifyDBInstanceDeletionProtectionRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceDeletionProtectionRequest();
                    ~ModifyDBInstanceDeletionProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     * @return DBInstanceId Instance ID. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     * @param _dBInstanceId Instance ID. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable instance deletion protection. valid values: true (enable), false (disable).
                     * @return DeletionProtection Specifies whether to enable instance deletion protection. valid values: true (enable), false (disable).
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置Specifies whether to enable instance deletion protection. valid values: true (enable), false (disable).
                     * @param _deletionProtection Specifies whether to enable instance deletion protection. valid values: true (enable), false (disable).
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * Instance ID. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.comom/document/api/409/16773?from_cn_redirect=1).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Specifies whether to enable instance deletion protection. valid values: true (enable), false (disable).
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCEDELETIONPROTECTIONREQUEST_H_
