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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DATAKEYMETADATA_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DATAKEYMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * Specifies the data key attribute information.
                */
                class DataKeyMetadata : public AbstractModel
                {
                public:
                    DataKeyMetadata();
                    ~DataKeyMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DataKey globally unique id.
                     * @return DataKeyId DataKey globally unique id.
                     * 
                     */
                    std::string GetDataKeyId() const;

                    /**
                     * 设置DataKey globally unique id.
                     * @param _dataKeyId DataKey globally unique id.
                     * 
                     */
                    void SetDataKeyId(const std::string& _dataKeyId);

                    /**
                     * 判断参数 DataKeyId 是否已赋值
                     * @return DataKeyId 是否已赋值
                     * 
                     */
                    bool DataKeyIdHasBeenSet() const;

                    /**
                     * 获取Globally unique id of the CMK.
                     * @return KeyId Globally unique id of the CMK.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Globally unique id of the CMK.
                     * @param _keyId Globally unique id of the CMK.
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取CMK name.
                     * @return KeyName CMK name.
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置CMK name.
                     * @param _keyName CMK name.
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取Key name as a more recognizable and understandable data key.
                     * @return DataKeyName Key name as a more recognizable and understandable data key.
                     * 
                     */
                    std::string GetDataKeyName() const;

                    /**
                     * 设置Key name as a more recognizable and understandable data key.
                     * @param _dataKeyName Key name as a more recognizable and understandable data key.
                     * 
                     */
                    void SetDataKeyName(const std::string& _dataKeyName);

                    /**
                     * 判断参数 DataKeyName 是否已赋值
                     * @return DataKeyName 是否已赋值
                     * 
                     */
                    bool DataKeyNameHasBeenSet() const;

                    /**
                     * 获取Specifies the length of the data key in bytes.
                     * @return NumberOfBytes Specifies the length of the data key in bytes.
                     * 
                     */
                    uint64_t GetNumberOfBytes() const;

                    /**
                     * 设置Specifies the length of the data key in bytes.
                     * @param _numberOfBytes Specifies the length of the data key in bytes.
                     * 
                     */
                    void SetNumberOfBytes(const uint64_t& _numberOfBytes);

                    /**
                     * 判断参数 NumberOfBytes 是否已赋值
                     * @return NumberOfBytes 是否已赋值
                     * 
                     */
                    bool NumberOfBytesHasBeenSet() const;

                    /**
                     * 获取Key key creation time.
                     * @return CreateTime Key key creation time.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Key key creation time.
                     * @param _createTime Key key creation time.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取DataKey description.
                     * @return Description DataKey description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置DataKey description.
                     * @param _description DataKey description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取DataKey status. valid values: Enabled, Disabled, PendingDelete.
                     * @return KeyState DataKey status. valid values: Enabled, Disabled, PendingDelete.
                     * 
                     */
                    std::string GetKeyState() const;

                    /**
                     * 设置DataKey status. valid values: Enabled, Disabled, PendingDelete.
                     * @param _keyState DataKey status. valid values: Enabled, Disabled, PendingDelete.
                     * 
                     */
                    void SetKeyState(const std::string& _keyState);

                    /**
                     * 判断参数 KeyState 是否已赋值
                     * @return KeyState 是否已赋值
                     * 
                     */
                    bool KeyStateHasBeenSet() const;

                    /**
                     * 获取Creator.
                     * @return CreatorUin Creator.
                     * 
                     */
                    uint64_t GetCreatorUin() const;

                    /**
                     * 设置Creator.
                     * @param _creatorUin Creator.
                     * 
                     */
                    void SetCreatorUin(const uint64_t& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取Specifies the creator of the data key. valid values: user (user-created) or product name (auto-created by authorized cloud services).
                     * @return Owner Specifies the creator of the data key. valid values: user (user-created) or product name (auto-created by authorized cloud services).
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Specifies the creator of the data key. valid values: user (user-created) or product name (auto-created by authorized cloud services).
                     * @param _owner Specifies the creator of the data key. valid values: user (user-created) or product name (auto-created by authorized cloud services).
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取The time when schedule deletion.
                     * @return DeletionDate The time when schedule deletion.
                     * 
                     */
                    uint64_t GetDeletionDate() const;

                    /**
                     * 设置The time when schedule deletion.
                     * @param _deletionDate The time when schedule deletion.
                     * 
                     */
                    void SetDeletionDate(const uint64_t& _deletionDate);

                    /**
                     * 判断参数 DeletionDate 是否已赋值
                     * @return DeletionDate 是否已赋值
                     * 
                     */
                    bool DeletionDateHasBeenSet() const;

                    /**
                     * 获取Specifies the key material type of DataKey. valid values: TENCENT_KMS (created by KMS), EXTERNAL (user import).
                     * @return Origin Specifies the key material type of DataKey. valid values: TENCENT_KMS (created by KMS), EXTERNAL (user import).
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置Specifies the key material type of DataKey. valid values: TENCENT_KMS (created by KMS), EXTERNAL (user import).
                     * @param _origin Specifies the key material type of DataKey. valid values: TENCENT_KMS (created by KMS), EXTERNAL (user import).
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取HSM cluster ID (only applicable to KMS exclusive/managed service instance).
                     * @return HsmClusterId HSM cluster ID (only applicable to KMS exclusive/managed service instance).
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置HSM cluster ID (only applicable to KMS exclusive/managed service instance).
                     * @param _hsmClusterId HSM cluster ID (only applicable to KMS exclusive/managed service instance).
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                    /**
                     * 获取Resource ID in the format of `creatorUin/$creatorUin/$dataKeyId`.
                     * @return ResourceId Resource ID in the format of `creatorUin/$creatorUin/$dataKeyId`.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID in the format of `creatorUin/$creatorUin/$dataKeyId`.
                     * @param _resourceId Resource ID in the format of `creatorUin/$creatorUin/$dataKeyId`.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Whether the key is a primary replica. valid values: `0` (primary), `1` (synced replica).
                     * @return IsSyncReplica Whether the key is a primary replica. valid values: `0` (primary), `1` (synced replica).
                     * 
                     */
                    int64_t GetIsSyncReplica() const;

                    /**
                     * 设置Whether the key is a primary replica. valid values: `0` (primary), `1` (synced replica).
                     * @param _isSyncReplica Whether the key is a primary replica. valid values: `0` (primary), `1` (synced replica).
                     * 
                     */
                    void SetIsSyncReplica(const int64_t& _isSyncReplica);

                    /**
                     * 判断参数 IsSyncReplica 是否已赋值
                     * @return IsSyncReplica 是否已赋值
                     * 
                     */
                    bool IsSyncReplicaHasBeenSet() const;

                    /**
                     * 获取Synchronous original region.
                     * @return SourceRegion Synchronous original region.
                     * 
                     */
                    std::string GetSourceRegion() const;

                    /**
                     * 设置Synchronous original region.
                     * @param _sourceRegion Synchronous original region.
                     * 
                     */
                    void SetSourceRegion(const std::string& _sourceRegion);

                    /**
                     * 判断参数 SourceRegion 是否已赋值
                     * @return SourceRegion 是否已赋值
                     * 
                     */
                    bool SourceRegionHasBeenSet() const;

                    /**
                     * 获取The state of key synchronization. valid values: 0 (unsynced), 1 (synchronization successful), 2 (synchronization failed), 3 (synchronizing).
                     * @return SyncStatus The state of key synchronization. valid values: 0 (unsynced), 1 (synchronization successful), 2 (synchronization failed), 3 (synchronizing).
                     * 
                     */
                    int64_t GetSyncStatus() const;

                    /**
                     * 设置The state of key synchronization. valid values: 0 (unsynced), 1 (synchronization successful), 2 (synchronization failed), 3 (synchronizing).
                     * @param _syncStatus The state of key synchronization. valid values: 0 (unsynced), 1 (synchronization successful), 2 (synchronization failed), 3 (synchronizing).
                     * 
                     */
                    void SetSyncStatus(const int64_t& _syncStatus);

                    /**
                     * 判断参数 SyncStatus 是否已赋值
                     * @return SyncStatus 是否已赋值
                     * 
                     */
                    bool SyncStatusHasBeenSet() const;

                    /**
                     * 获取Sresult description}.
                     * @return SyncMessages Sresult description}.
                     * 
                     */
                    std::string GetSyncMessages() const;

                    /**
                     * 设置Sresult description}.
                     * @param _syncMessages Sresult description}.
                     * 
                     */
                    void SetSyncMessages(const std::string& _syncMessages);

                    /**
                     * 判断参数 SyncMessages 是否已赋值
                     * @return SyncMessages 是否已赋值
                     * 
                     */
                    bool SyncMessagesHasBeenSet() const;

                    /**
                     * 获取Start time of synchronization.
                     * @return SyncStartTime Start time of synchronization.
                     * 
                     */
                    uint64_t GetSyncStartTime() const;

                    /**
                     * 设置Start time of synchronization.
                     * @param _syncStartTime Start time of synchronization.
                     * 
                     */
                    void SetSyncStartTime(const uint64_t& _syncStartTime);

                    /**
                     * 判断参数 SyncStartTime 是否已赋值
                     * @return SyncStartTime 是否已赋值
                     * 
                     */
                    bool SyncStartTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the synchronous end time.
                     * @return SyncEndTime Specifies the synchronous end time.
                     * 
                     */
                    uint64_t GetSyncEndTime() const;

                    /**
                     * 设置Specifies the synchronous end time.
                     * @param _syncEndTime Specifies the synchronous end time.
                     * 
                     */
                    void SetSyncEndTime(const uint64_t& _syncEndTime);

                    /**
                     * 判断参数 SyncEndTime 是否已赋值
                     * @return SyncEndTime 是否已赋值
                     * 
                     */
                    bool SyncEndTimeHasBeenSet() const;

                    /**
                     * 获取Synchronous original cluster. if empty, it is a public cloud public cluster.
                     * @return SourceHsmClusterId Synchronous original cluster. if empty, it is a public cloud public cluster.
                     * 
                     */
                    std::string GetSourceHsmClusterId() const;

                    /**
                     * 设置Synchronous original cluster. if empty, it is a public cloud public cluster.
                     * @param _sourceHsmClusterId Synchronous original cluster. if empty, it is a public cloud public cluster.
                     * 
                     */
                    void SetSourceHsmClusterId(const std::string& _sourceHsmClusterId);

                    /**
                     * 判断参数 SourceHsmClusterId 是否已赋值
                     * @return SourceHsmClusterId 是否已赋值
                     * 
                     */
                    bool SourceHsmClusterIdHasBeenSet() const;

                private:

                    /**
                     * DataKey globally unique id.
                     */
                    std::string m_dataKeyId;
                    bool m_dataKeyIdHasBeenSet;

                    /**
                     * Globally unique id of the CMK.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * CMK name.
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * Key name as a more recognizable and understandable data key.
                     */
                    std::string m_dataKeyName;
                    bool m_dataKeyNameHasBeenSet;

                    /**
                     * Specifies the length of the data key in bytes.
                     */
                    uint64_t m_numberOfBytes;
                    bool m_numberOfBytesHasBeenSet;

                    /**
                     * Key key creation time.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * DataKey description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * DataKey status. valid values: Enabled, Disabled, PendingDelete.
                     */
                    std::string m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * Creator.
                     */
                    uint64_t m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * Specifies the creator of the data key. valid values: user (user-created) or product name (auto-created by authorized cloud services).
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * The time when schedule deletion.
                     */
                    uint64_t m_deletionDate;
                    bool m_deletionDateHasBeenSet;

                    /**
                     * Specifies the key material type of DataKey. valid values: TENCENT_KMS (created by KMS), EXTERNAL (user import).
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * HSM cluster ID (only applicable to KMS exclusive/managed service instance).
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                    /**
                     * Resource ID in the format of `creatorUin/$creatorUin/$dataKeyId`.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Whether the key is a primary replica. valid values: `0` (primary), `1` (synced replica).
                     */
                    int64_t m_isSyncReplica;
                    bool m_isSyncReplicaHasBeenSet;

                    /**
                     * Synchronous original region.
                     */
                    std::string m_sourceRegion;
                    bool m_sourceRegionHasBeenSet;

                    /**
                     * The state of key synchronization. valid values: 0 (unsynced), 1 (synchronization successful), 2 (synchronization failed), 3 (synchronizing).
                     */
                    int64_t m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * Sresult description}.
                     */
                    std::string m_syncMessages;
                    bool m_syncMessagesHasBeenSet;

                    /**
                     * Start time of synchronization.
                     */
                    uint64_t m_syncStartTime;
                    bool m_syncStartTimeHasBeenSet;

                    /**
                     * Specifies the synchronous end time.
                     */
                    uint64_t m_syncEndTime;
                    bool m_syncEndTimeHasBeenSet;

                    /**
                     * Synchronous original cluster. if empty, it is a public cloud public cluster.
                     */
                    std::string m_sourceHsmClusterId;
                    bool m_sourceHsmClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DATAKEYMETADATA_H_
