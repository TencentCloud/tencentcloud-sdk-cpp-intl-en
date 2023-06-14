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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeMigrateDBInstances request structure.
                */
                class DescribeMigrateDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeMigrateDBInstancesRequest();
                    ~DescribeMigrateDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database type, such as `mysql`.
                     * @return DatabaseType Database type, such as `mysql`.
                     * 
                     */
                    std::string GetDatabaseType() const;

                    /**
                     * 设置Database type, such as `mysql`.
                     * @param _databaseType Database type, such as `mysql`.
                     * 
                     */
                    void SetDatabaseType(const std::string& _databaseType);

                    /**
                     * 判断参数 DatabaseType 是否已赋值
                     * @return DatabaseType 是否已赋值
                     * 
                     */
                    bool DatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Specifies whether the instance is the migration source or target. Valid values: `src` (source); `dts` (target).
                     * @return MigrateRole Specifies whether the instance is the migration source or target. Valid values: `src` (source); `dts` (target).
                     * 
                     */
                    std::string GetMigrateRole() const;

                    /**
                     * 设置Specifies whether the instance is the migration source or target. Valid values: `src` (source); `dts` (target).
                     * @param _migrateRole Specifies whether the instance is the migration source or target. Valid values: `src` (source); `dts` (target).
                     * 
                     */
                    void SetMigrateRole(const std::string& _migrateRole);

                    /**
                     * 判断参数 MigrateRole 是否已赋值
                     * @return MigrateRole 是否已赋值
                     * 
                     */
                    bool MigrateRoleHasBeenSet() const;

                    /**
                     * 获取Database instance ID
                     * @return InstanceId Database instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Database instance ID
                     * @param _instanceId Database instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Database instance name
                     * @return InstanceName Database instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Database instance name
                     * @param _instanceName Database instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned
                     * @return Limit Number of results to be returned
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned
                     * @param _limit Number of results to be returned
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The account to which the resource belongs. Valid values: empty or `self` (the current account); `other` (another account).
                     * @return AccountMode The account to which the resource belongs. Valid values: empty or `self` (the current account); `other` (another account).
                     * 
                     */
                    std::string GetAccountMode() const;

                    /**
                     * 设置The account to which the resource belongs. Valid values: empty or `self` (the current account); `other` (another account).
                     * @param _accountMode The account to which the resource belongs. Valid values: empty or `self` (the current account); `other` (another account).
                     * 
                     */
                    void SetAccountMode(const std::string& _accountMode);

                    /**
                     * 判断参数 AccountMode 是否已赋值
                     * @return AccountMode 是否已赋值
                     * 
                     */
                    bool AccountModeHasBeenSet() const;

                    /**
                     * 获取ID of the temporary key, which is required if the operation is performed across accounts.
                     * @return TmpSecretId ID of the temporary key, which is required if the operation is performed across accounts.
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置ID of the temporary key, which is required if the operation is performed across accounts.
                     * @param _tmpSecretId ID of the temporary key, which is required if the operation is performed across accounts.
                     * 
                     */
                    void SetTmpSecretId(const std::string& _tmpSecretId);

                    /**
                     * 判断参数 TmpSecretId 是否已赋值
                     * @return TmpSecretId 是否已赋值
                     * 
                     */
                    bool TmpSecretIdHasBeenSet() const;

                    /**
                     * 获取Key of the temporary key, which is required if the operation is performed across accounts.
                     * @return TmpSecretKey Key of the temporary key, which is required if the operation is performed across accounts.
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置Key of the temporary key, which is required if the operation is performed across accounts.
                     * @param _tmpSecretKey Key of the temporary key, which is required if the operation is performed across accounts.
                     * 
                     */
                    void SetTmpSecretKey(const std::string& _tmpSecretKey);

                    /**
                     * 判断参数 TmpSecretKey 是否已赋值
                     * @return TmpSecretKey 是否已赋值
                     * 
                     */
                    bool TmpSecretKeyHasBeenSet() const;

                    /**
                     * 获取Temporary token, which is required if the operation is performed across accounts.
                     * @return TmpToken Temporary token, which is required if the operation is performed across accounts.
                     * 
                     */
                    std::string GetTmpToken() const;

                    /**
                     * 设置Temporary token, which is required if the operation is performed across accounts.
                     * @param _tmpToken Temporary token, which is required if the operation is performed across accounts.
                     * 
                     */
                    void SetTmpToken(const std::string& _tmpToken);

                    /**
                     * 判断参数 TmpToken 是否已赋值
                     * @return TmpToken 是否已赋值
                     * 
                     */
                    bool TmpTokenHasBeenSet() const;

                private:

                    /**
                     * Database type, such as `mysql`.
                     */
                    std::string m_databaseType;
                    bool m_databaseTypeHasBeenSet;

                    /**
                     * Specifies whether the instance is the migration source or target. Valid values: `src` (source); `dts` (target).
                     */
                    std::string m_migrateRole;
                    bool m_migrateRoleHasBeenSet;

                    /**
                     * Database instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Database instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Number of results to be returned
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The account to which the resource belongs. Valid values: empty or `self` (the current account); `other` (another account).
                     */
                    std::string m_accountMode;
                    bool m_accountModeHasBeenSet;

                    /**
                     * ID of the temporary key, which is required if the operation is performed across accounts.
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * Key of the temporary key, which is required if the operation is performed across accounts.
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * Temporary token, which is required if the operation is performed across accounts.
                     */
                    std::string m_tmpToken;
                    bool m_tmpTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATEDBINSTANCESREQUEST_H_
