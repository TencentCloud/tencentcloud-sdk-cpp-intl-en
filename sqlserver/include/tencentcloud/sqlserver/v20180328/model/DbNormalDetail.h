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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBNORMALDETAIL_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBNORMALDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Database configurations
                */
                class DbNormalDetail : public AbstractModel
                {
                public:
                    DbNormalDetail();
                    ~DbNormalDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether it is subscribed. Valid values: `0` (no), `1` (yes)
                     * @return IsSubscribed Whether it is subscribed. Valid values: `0` (no), `1` (yes)
                     */
                    std::string GetIsSubscribed() const;

                    /**
                     * 设置Whether it is subscribed. Valid values: `0` (no), `1` (yes)
                     * @param IsSubscribed Whether it is subscribed. Valid values: `0` (no), `1` (yes)
                     */
                    void SetIsSubscribed(const std::string& _isSubscribed);

                    /**
                     * 判断参数 IsSubscribed 是否已赋值
                     * @return IsSubscribed 是否已赋值
                     */
                    bool IsSubscribedHasBeenSet() const;

                    /**
                     * 获取Database collation
                     * @return CollationName Database collation
                     */
                    std::string GetCollationName() const;

                    /**
                     * 设置Database collation
                     * @param CollationName Database collation
                     */
                    void SetCollationName(const std::string& _collationName);

                    /**
                     * 判断参数 CollationName 是否已赋值
                     * @return CollationName 是否已赋值
                     */
                    bool CollationNameHasBeenSet() const;

                    /**
                     * 获取Whether the cleanup task is enabled to automatically remove old change tracking information when CT is enabled. Valid values: `0` (no), `1` (yes)
                     * @return IsAutoCleanupOn Whether the cleanup task is enabled to automatically remove old change tracking information when CT is enabled. Valid values: `0` (no), `1` (yes)
                     */
                    std::string GetIsAutoCleanupOn() const;

                    /**
                     * 设置Whether the cleanup task is enabled to automatically remove old change tracking information when CT is enabled. Valid values: `0` (no), `1` (yes)
                     * @param IsAutoCleanupOn Whether the cleanup task is enabled to automatically remove old change tracking information when CT is enabled. Valid values: `0` (no), `1` (yes)
                     */
                    void SetIsAutoCleanupOn(const std::string& _isAutoCleanupOn);

                    /**
                     * 判断参数 IsAutoCleanupOn 是否已赋值
                     * @return IsAutoCleanupOn 是否已赋值
                     */
                    bool IsAutoCleanupOnHasBeenSet() const;

                    /**
                     * 获取Whether SQL Server Service Broker is enabled. Valid values: `0` (no), `1` (yes)
                     * @return IsBrokerEnabled Whether SQL Server Service Broker is enabled. Valid values: `0` (no), `1` (yes)
                     */
                    std::string GetIsBrokerEnabled() const;

                    /**
                     * 设置Whether SQL Server Service Broker is enabled. Valid values: `0` (no), `1` (yes)
                     * @param IsBrokerEnabled Whether SQL Server Service Broker is enabled. Valid values: `0` (no), `1` (yes)
                     */
                    void SetIsBrokerEnabled(const std::string& _isBrokerEnabled);

                    /**
                     * 判断参数 IsBrokerEnabled 是否已赋值
                     * @return IsBrokerEnabled 是否已赋值
                     */
                    bool IsBrokerEnabledHasBeenSet() const;

                    /**
                     * 获取Whether CDC is enabled. Valid values: `0` (disabled), `1` (enabled)
                     * @return IsCdcEnabled Whether CDC is enabled. Valid values: `0` (disabled), `1` (enabled)
                     */
                    std::string GetIsCdcEnabled() const;

                    /**
                     * 设置Whether CDC is enabled. Valid values: `0` (disabled), `1` (enabled)
                     * @param IsCdcEnabled Whether CDC is enabled. Valid values: `0` (disabled), `1` (enabled)
                     */
                    void SetIsCdcEnabled(const std::string& _isCdcEnabled);

                    /**
                     * 判断参数 IsCdcEnabled 是否已赋值
                     * @return IsCdcEnabled 是否已赋值
                     */
                    bool IsCdcEnabledHasBeenSet() const;

                    /**
                     * 获取Whether CT is enabled. Valid values: `0` (disabled), `1` (enabled)
                     * @return IsDbChainingOn Whether CT is enabled. Valid values: `0` (disabled), `1` (enabled)
                     */
                    std::string GetIsDbChainingOn() const;

                    /**
                     * 设置Whether CT is enabled. Valid values: `0` (disabled), `1` (enabled)
                     * @param IsDbChainingOn Whether CT is enabled. Valid values: `0` (disabled), `1` (enabled)
                     */
                    void SetIsDbChainingOn(const std::string& _isDbChainingOn);

                    /**
                     * 判断参数 IsDbChainingOn 是否已赋值
                     * @return IsDbChainingOn 是否已赋值
                     */
                    bool IsDbChainingOnHasBeenSet() const;

                    /**
                     * 获取Whether it is encrypted. Valid values: `0` (no), `1` (yes)
                     * @return IsEncrypted Whether it is encrypted. Valid values: `0` (no), `1` (yes)
                     */
                    std::string GetIsEncrypted() const;

                    /**
                     * 设置Whether it is encrypted. Valid values: `0` (no), `1` (yes)
                     * @param IsEncrypted Whether it is encrypted. Valid values: `0` (no), `1` (yes)
                     */
                    void SetIsEncrypted(const std::string& _isEncrypted);

                    /**
                     * 判断参数 IsEncrypted 是否已赋值
                     * @return IsEncrypted 是否已赋值
                     */
                    bool IsEncryptedHasBeenSet() const;

                    /**
                     * 获取Whether full-text indexes are enabled. Valid values: `0` (no), `1` (yes)
                     * @return IsFulltextEnabled Whether full-text indexes are enabled. Valid values: `0` (no), `1` (yes)
                     */
                    std::string GetIsFulltextEnabled() const;

                    /**
                     * 设置Whether full-text indexes are enabled. Valid values: `0` (no), `1` (yes)
                     * @param IsFulltextEnabled Whether full-text indexes are enabled. Valid values: `0` (no), `1` (yes)
                     */
                    void SetIsFulltextEnabled(const std::string& _isFulltextEnabled);

                    /**
                     * 判断参数 IsFulltextEnabled 是否已赋值
                     * @return IsFulltextEnabled 是否已赋值
                     */
                    bool IsFulltextEnabledHasBeenSet() const;

                    /**
                     * 获取Whether it is a mirror database. Valid values: `0` (no), `1` (yes)
                     * @return IsMirroring Whether it is a mirror database. Valid values: `0` (no), `1` (yes)
                     */
                    std::string GetIsMirroring() const;

                    /**
                     * 设置Whether it is a mirror database. Valid values: `0` (no), `1` (yes)
                     * @param IsMirroring Whether it is a mirror database. Valid values: `0` (no), `1` (yes)
                     */
                    void SetIsMirroring(const std::string& _isMirroring);

                    /**
                     * 判断参数 IsMirroring 是否已赋值
                     * @return IsMirroring 是否已赋值
                     */
                    bool IsMirroringHasBeenSet() const;

                    /**
                     * 获取Whether it is published. Valid values: `0` (no), `1` (yes)
                     * @return IsPublished Whether it is published. Valid values: `0` (no), `1` (yes)
                     */
                    std::string GetIsPublished() const;

                    /**
                     * 设置Whether it is published. Valid values: `0` (no), `1` (yes)
                     * @param IsPublished Whether it is published. Valid values: `0` (no), `1` (yes)
                     */
                    void SetIsPublished(const std::string& _isPublished);

                    /**
                     * 判断参数 IsPublished 是否已赋值
                     * @return IsPublished 是否已赋值
                     */
                    bool IsPublishedHasBeenSet() const;

                    /**
                     * 获取Whether snapshots are enabled. Valid values: `0` (no), `1` (yes)
                     * @return IsReadCommittedSnapshotOn Whether snapshots are enabled. Valid values: `0` (no), `1` (yes)
                     */
                    std::string GetIsReadCommittedSnapshotOn() const;

                    /**
                     * 设置Whether snapshots are enabled. Valid values: `0` (no), `1` (yes)
                     * @param IsReadCommittedSnapshotOn Whether snapshots are enabled. Valid values: `0` (no), `1` (yes)
                     */
                    void SetIsReadCommittedSnapshotOn(const std::string& _isReadCommittedSnapshotOn);

                    /**
                     * 判断参数 IsReadCommittedSnapshotOn 是否已赋值
                     * @return IsReadCommittedSnapshotOn 是否已赋值
                     */
                    bool IsReadCommittedSnapshotOnHasBeenSet() const;

                    /**
                     * 获取Whether it is trustworthy. Valid values: `0` (no), `1` (yes)
                     * @return IsTrustworthyOn Whether it is trustworthy. Valid values: `0` (no), `1` (yes)
                     */
                    std::string GetIsTrustworthyOn() const;

                    /**
                     * 设置Whether it is trustworthy. Valid values: `0` (no), `1` (yes)
                     * @param IsTrustworthyOn Whether it is trustworthy. Valid values: `0` (no), `1` (yes)
                     */
                    void SetIsTrustworthyOn(const std::string& _isTrustworthyOn);

                    /**
                     * 判断参数 IsTrustworthyOn 是否已赋值
                     * @return IsTrustworthyOn 是否已赋值
                     */
                    bool IsTrustworthyOnHasBeenSet() const;

                    /**
                     * 获取Mirroring state
                     * @return MirroringState Mirroring state
                     */
                    std::string GetMirroringState() const;

                    /**
                     * 设置Mirroring state
                     * @param MirroringState Mirroring state
                     */
                    void SetMirroringState(const std::string& _mirroringState);

                    /**
                     * 判断参数 MirroringState 是否已赋值
                     * @return MirroringState 是否已赋值
                     */
                    bool MirroringStateHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return Name Database name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Database name
                     * @param Name Database name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Recovery model
                     * @return RecoveryModelDesc Recovery model
                     */
                    std::string GetRecoveryModelDesc() const;

                    /**
                     * 设置Recovery model
                     * @param RecoveryModelDesc Recovery model
                     */
                    void SetRecoveryModelDesc(const std::string& _recoveryModelDesc);

                    /**
                     * 判断参数 RecoveryModelDesc 是否已赋值
                     * @return RecoveryModelDesc 是否已赋值
                     */
                    bool RecoveryModelDescHasBeenSet() const;

                    /**
                     * 获取Retention period (in days) of change tracking information
                     * @return RetentionPeriod Retention period (in days) of change tracking information
                     */
                    std::string GetRetentionPeriod() const;

                    /**
                     * 设置Retention period (in days) of change tracking information
                     * @param RetentionPeriod Retention period (in days) of change tracking information
                     */
                    void SetRetentionPeriod(const std::string& _retentionPeriod);

                    /**
                     * 判断参数 RetentionPeriod 是否已赋值
                     * @return RetentionPeriod 是否已赋值
                     */
                    bool RetentionPeriodHasBeenSet() const;

                    /**
                     * 获取Database status
                     * @return StateDesc Database status
                     */
                    std::string GetStateDesc() const;

                    /**
                     * 设置Database status
                     * @param StateDesc Database status
                     */
                    void SetStateDesc(const std::string& _stateDesc);

                    /**
                     * 判断参数 StateDesc 是否已赋值
                     * @return StateDesc 是否已赋值
                     */
                    bool StateDescHasBeenSet() const;

                    /**
                     * 获取User type
                     * @return UserAccessDesc User type
                     */
                    std::string GetUserAccessDesc() const;

                    /**
                     * 设置User type
                     * @param UserAccessDesc User type
                     */
                    void SetUserAccessDesc(const std::string& _userAccessDesc);

                    /**
                     * 判断参数 UserAccessDesc 是否已赋值
                     * @return UserAccessDesc 是否已赋值
                     */
                    bool UserAccessDescHasBeenSet() const;

                    /**
                     * 获取Database creation time
                     * @return CreateTime Database creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Database creation time
                     * @param CreateTime Database creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Whether it is subscribed. Valid values: `0` (no), `1` (yes)
                     */
                    std::string m_isSubscribed;
                    bool m_isSubscribedHasBeenSet;

                    /**
                     * Database collation
                     */
                    std::string m_collationName;
                    bool m_collationNameHasBeenSet;

                    /**
                     * Whether the cleanup task is enabled to automatically remove old change tracking information when CT is enabled. Valid values: `0` (no), `1` (yes)
                     */
                    std::string m_isAutoCleanupOn;
                    bool m_isAutoCleanupOnHasBeenSet;

                    /**
                     * Whether SQL Server Service Broker is enabled. Valid values: `0` (no), `1` (yes)
                     */
                    std::string m_isBrokerEnabled;
                    bool m_isBrokerEnabledHasBeenSet;

                    /**
                     * Whether CDC is enabled. Valid values: `0` (disabled), `1` (enabled)
                     */
                    std::string m_isCdcEnabled;
                    bool m_isCdcEnabledHasBeenSet;

                    /**
                     * Whether CT is enabled. Valid values: `0` (disabled), `1` (enabled)
                     */
                    std::string m_isDbChainingOn;
                    bool m_isDbChainingOnHasBeenSet;

                    /**
                     * Whether it is encrypted. Valid values: `0` (no), `1` (yes)
                     */
                    std::string m_isEncrypted;
                    bool m_isEncryptedHasBeenSet;

                    /**
                     * Whether full-text indexes are enabled. Valid values: `0` (no), `1` (yes)
                     */
                    std::string m_isFulltextEnabled;
                    bool m_isFulltextEnabledHasBeenSet;

                    /**
                     * Whether it is a mirror database. Valid values: `0` (no), `1` (yes)
                     */
                    std::string m_isMirroring;
                    bool m_isMirroringHasBeenSet;

                    /**
                     * Whether it is published. Valid values: `0` (no), `1` (yes)
                     */
                    std::string m_isPublished;
                    bool m_isPublishedHasBeenSet;

                    /**
                     * Whether snapshots are enabled. Valid values: `0` (no), `1` (yes)
                     */
                    std::string m_isReadCommittedSnapshotOn;
                    bool m_isReadCommittedSnapshotOnHasBeenSet;

                    /**
                     * Whether it is trustworthy. Valid values: `0` (no), `1` (yes)
                     */
                    std::string m_isTrustworthyOn;
                    bool m_isTrustworthyOnHasBeenSet;

                    /**
                     * Mirroring state
                     */
                    std::string m_mirroringState;
                    bool m_mirroringStateHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Recovery model
                     */
                    std::string m_recoveryModelDesc;
                    bool m_recoveryModelDescHasBeenSet;

                    /**
                     * Retention period (in days) of change tracking information
                     */
                    std::string m_retentionPeriod;
                    bool m_retentionPeriodHasBeenSet;

                    /**
                     * Database status
                     */
                    std::string m_stateDesc;
                    bool m_stateDescHasBeenSet;

                    /**
                     * User type
                     */
                    std::string m_userAccessDesc;
                    bool m_userAccessDescHasBeenSet;

                    /**
                     * Database creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBNORMALDETAIL_H_
