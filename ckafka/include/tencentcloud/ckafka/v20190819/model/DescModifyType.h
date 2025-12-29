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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCMODIFYTYPE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCMODIFYTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Type query response parameters structure.
                */
                class DescModifyType : public AbstractModel
                {
                public:
                    DescModifyType();
                    ~DescModifyType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the renewal type.
                     * @return ModifyType Specifies the renewal type.
                     * 
                     */
                    int64_t GetModifyType() const;

                    /**
                     * 设置Specifies the renewal type.
                     * @param _modifyType Specifies the renewal type.
                     * 
                     */
                    void SetModifyType(const int64_t& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to migrate.
                     * @return MigrateFlag Specifies whether to migrate.
                     * 
                     */
                    bool GetMigrateFlag() const;

                    /**
                     * 设置Specifies whether to migrate.
                     * @param _migrateFlag Specifies whether to migrate.
                     * 
                     */
                    void SetMigrateFlag(const bool& _migrateFlag);

                    /**
                     * 判断参数 MigrateFlag 是否已赋值
                     * @return MigrateFlag 是否已赋值
                     * 
                     */
                    bool MigrateFlagHasBeenSet() const;

                    /**
                     * 获取Estimated duration of migration in stable mode (seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MigrateCostTime Estimated duration of migration in stable mode (seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMigrateCostTime() const;

                    /**
                     * 设置Estimated duration of migration in stable mode (seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _migrateCostTime Estimated duration of migration in stable mode (seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMigrateCostTime(const int64_t& _migrateCostTime);

                    /**
                     * 判断参数 MigrateCostTime 是否已赋值
                     * @return MigrateCostTime 是否已赋值
                     * 
                     */
                    bool MigrateCostTimeHasBeenSet() const;

                    /**
                     * 获取Upgrade mode (1: stable mode, 2: high-speed mode).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpgradeStrategy Upgrade mode (1: stable mode, 2: high-speed mode).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUpgradeStrategy() const;

                    /**
                     * 设置Upgrade mode (1: stable mode, 2: high-speed mode).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _upgradeStrategy Upgrade mode (1: stable mode, 2: high-speed mode).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpgradeStrategy(const int64_t& _upgradeStrategy);

                    /**
                     * 判断参数 UpgradeStrategy 是否已赋值
                     * @return UpgradeStrategy 是否已赋值
                     * 
                     */
                    bool UpgradeStrategyHasBeenSet() const;

                    /**
                     * 获取Indicates the estimated time for migration in high-speed mode, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MigrateCostTimeHighSpeed Indicates the estimated time for migration in high-speed mode, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMigrateCostTimeHighSpeed() const;

                    /**
                     * 设置Indicates the estimated time for migration in high-speed mode, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _migrateCostTimeHighSpeed Indicates the estimated time for migration in high-speed mode, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMigrateCostTimeHighSpeed(const int64_t& _migrateCostTimeHighSpeed);

                    /**
                     * 判断参数 MigrateCostTimeHighSpeed 是否已赋值
                     * @return MigrateCostTimeHighSpeed 是否已赋值
                     * 
                     */
                    bool MigrateCostTimeHighSpeedHasBeenSet() const;

                private:

                    /**
                     * Specifies the renewal type.
                     */
                    int64_t m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * Specifies whether to migrate.
                     */
                    bool m_migrateFlag;
                    bool m_migrateFlagHasBeenSet;

                    /**
                     * Estimated duration of migration in stable mode (seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_migrateCostTime;
                    bool m_migrateCostTimeHasBeenSet;

                    /**
                     * Upgrade mode (1: stable mode, 2: high-speed mode).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_upgradeStrategy;
                    bool m_upgradeStrategyHasBeenSet;

                    /**
                     * Indicates the estimated time for migration in high-speed mode, in seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_migrateCostTimeHighSpeed;
                    bool m_migrateCostTimeHighSpeedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCMODIFYTYPE_H_
