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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_VERSION_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_VERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Database version information
                */
                class Version : public AbstractModel
                {
                public:
                    Version();
                    ~Version() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database engines. Valid values:
1. `postgresql` (TencentDB for PostgreSQL)
2. `mssql_compatible` (MSSQL compatible-TencentDB for PostgreSQL)
                     * @return DBEngine Database engines. Valid values:
1. `postgresql` (TencentDB for PostgreSQL)
2. `mssql_compatible` (MSSQL compatible-TencentDB for PostgreSQL)
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 设置Database engines. Valid values:
1. `postgresql` (TencentDB for PostgreSQL)
2. `mssql_compatible` (MSSQL compatible-TencentDB for PostgreSQL)
                     * @param _dBEngine Database engines. Valid values:
1. `postgresql` (TencentDB for PostgreSQL)
2. `mssql_compatible` (MSSQL compatible-TencentDB for PostgreSQL)
                     * 
                     */
                    void SetDBEngine(const std::string& _dBEngine);

                    /**
                     * 判断参数 DBEngine 是否已赋值
                     * @return DBEngine 是否已赋值
                     * 
                     */
                    bool DBEngineHasBeenSet() const;

                    /**
                     * 获取Database version, such as 12.4.
                     * @return DBVersion Database version, such as 12.4.
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置Database version, such as 12.4.
                     * @param _dBVersion Database version, such as 12.4.
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取Database major version, such as 12.
                     * @return DBMajorVersion Database major version, such as 12.
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置Database major version, such as 12.
                     * @param _dBMajorVersion Database major version, such as 12.
                     * 
                     */
                    void SetDBMajorVersion(const std::string& _dBMajorVersion);

                    /**
                     * 判断参数 DBMajorVersion 是否已赋值
                     * @return DBMajorVersion 是否已赋值
                     * 
                     */
                    bool DBMajorVersionHasBeenSet() const;

                    /**
                     * 获取Database kernel version, such as v12.4_r1.3.
                     * @return DBKernelVersion Database kernel version, such as v12.4_r1.3.
                     * 
                     */
                    std::string GetDBKernelVersion() const;

                    /**
                     * 设置Database kernel version, such as v12.4_r1.3.
                     * @param _dBKernelVersion Database kernel version, such as v12.4_r1.3.
                     * 
                     */
                    void SetDBKernelVersion(const std::string& _dBKernelVersion);

                    /**
                     * 判断参数 DBKernelVersion 是否已赋值
                     * @return DBKernelVersion 是否已赋值
                     * 
                     */
                    bool DBKernelVersionHasBeenSet() const;

                    /**
                     * 获取List of features supported by the database kernel, such as:
TDE: Supports data encryption.
                     * @return SupportedFeatureNames List of features supported by the database kernel, such as:
TDE: Supports data encryption.
                     * 
                     */
                    std::vector<std::string> GetSupportedFeatureNames() const;

                    /**
                     * 设置List of features supported by the database kernel, such as:
TDE: Supports data encryption.
                     * @param _supportedFeatureNames List of features supported by the database kernel, such as:
TDE: Supports data encryption.
                     * 
                     */
                    void SetSupportedFeatureNames(const std::vector<std::string>& _supportedFeatureNames);

                    /**
                     * 判断参数 SupportedFeatureNames 是否已赋值
                     * @return SupportedFeatureNames 是否已赋值
                     * 
                     */
                    bool SupportedFeatureNamesHasBeenSet() const;

                    /**
                     * 获取Database version status. Valid values:
`AVAILABLE`.
`DEPRECATED`.
                     * @return Status Database version status. Valid values:
`AVAILABLE`.
`DEPRECATED`.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Database version status. Valid values:
`AVAILABLE`.
`DEPRECATED`.
                     * @param _status Database version status. Valid values:
`AVAILABLE`.
`DEPRECATED`.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取List of versions to which this database version (`DBKernelVersion`) can be upgraded, including minor and major version numbers available for upgrade (complete kernel version format example: v15.1_v1.6).
                     * @return AvailableUpgradeTarget List of versions to which this database version (`DBKernelVersion`) can be upgraded, including minor and major version numbers available for upgrade (complete kernel version format example: v15.1_v1.6).
                     * 
                     */
                    std::vector<std::string> GetAvailableUpgradeTarget() const;

                    /**
                     * 设置List of versions to which this database version (`DBKernelVersion`) can be upgraded, including minor and major version numbers available for upgrade (complete kernel version format example: v15.1_v1.6).
                     * @param _availableUpgradeTarget List of versions to which this database version (`DBKernelVersion`) can be upgraded, including minor and major version numbers available for upgrade (complete kernel version format example: v15.1_v1.6).
                     * 
                     */
                    void SetAvailableUpgradeTarget(const std::vector<std::string>& _availableUpgradeTarget);

                    /**
                     * 判断参数 AvailableUpgradeTarget 是否已赋值
                     * @return AvailableUpgradeTarget 是否已赋值
                     * 
                     */
                    bool AvailableUpgradeTargetHasBeenSet() const;

                private:

                    /**
                     * Database engines. Valid values:
1. `postgresql` (TencentDB for PostgreSQL)
2. `mssql_compatible` (MSSQL compatible-TencentDB for PostgreSQL)
                     */
                    std::string m_dBEngine;
                    bool m_dBEngineHasBeenSet;

                    /**
                     * Database version, such as 12.4.
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * Database major version, such as 12.
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                    /**
                     * Database kernel version, such as v12.4_r1.3.
                     */
                    std::string m_dBKernelVersion;
                    bool m_dBKernelVersionHasBeenSet;

                    /**
                     * List of features supported by the database kernel, such as:
TDE: Supports data encryption.
                     */
                    std::vector<std::string> m_supportedFeatureNames;
                    bool m_supportedFeatureNamesHasBeenSet;

                    /**
                     * Database version status. Valid values:
`AVAILABLE`.
`DEPRECATED`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * List of versions to which this database version (`DBKernelVersion`) can be upgraded, including minor and major version numbers available for upgrade (complete kernel version format example: v15.1_v1.6).
                     */
                    std::vector<std::string> m_availableUpgradeTarget;
                    bool m_availableUpgradeTargetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_VERSION_H_
