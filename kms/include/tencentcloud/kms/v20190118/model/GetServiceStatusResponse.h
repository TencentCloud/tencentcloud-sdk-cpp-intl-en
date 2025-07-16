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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_GETSERVICESTATUSRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_GETSERVICESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/ExclusiveHSM.h>
#include <tencentcloud/kms/v20190118/model/DestinationSyncConfig.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * GetServiceStatus response structure.
                */
                class GetServiceStatusResponse : public AbstractModel
                {
                public:
                    GetServiceStatusResponse();
                    ~GetServiceStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the KMS service has been activated. true: activated
                     * @return ServiceEnabled Whether the KMS service has been activated. true: activated
                     * 
                     */
                    bool GetServiceEnabled() const;

                    /**
                     * 判断参数 ServiceEnabled 是否已赋值
                     * @return ServiceEnabled 是否已赋值
                     * 
                     */
                    bool ServiceEnabledHasBeenSet() const;

                    /**
                     * 获取Service unavailability type: 0-not purchased, 1-normal, 2-service suspended due to overdue payments, 3-resource release.
                     * @return InvalidType Service unavailability type: 0-not purchased, 1-normal, 2-service suspended due to overdue payments, 3-resource release.
                     * 
                     */
                    int64_t GetInvalidType() const;

                    /**
                     * 判断参数 InvalidType 是否已赋值
                     * @return InvalidType 是否已赋值
                     * 
                     */
                    bool InvalidTypeHasBeenSet() const;

                    /**
                     * 获取0: Basic Edition, 1: Ultimate Edition
                     * @return UserLevel 0: Basic Edition, 1: Ultimate Edition
                     * 
                     */
                    uint64_t GetUserLevel() const;

                    /**
                     * 判断参数 UserLevel 是否已赋值
                     * @return UserLevel 是否已赋值
                     * 
                     */
                    bool UserLevelHasBeenSet() const;

                    /**
                     * 获取Specifies the expiry time (Epoch Unix Timestamp) of the flagship edition.
                     * @return ProExpireTime Specifies the expiry time (Epoch Unix Timestamp) of the flagship edition.
                     * 
                     */
                    uint64_t GetProExpireTime() const;

                    /**
                     * 判断参数 ProExpireTime 是否已赋值
                     * @return ProExpireTime 是否已赋值
                     * 
                     */
                    bool ProExpireTimeHasBeenSet() const;

                    /**
                     * 获取Specifies whether the flagship edition is automatically renewed: 0 - no automatic renewal, 1 - automatic renewal.
                     * @return ProRenewFlag Specifies whether the flagship edition is automatically renewed: 0 - no automatic renewal, 1 - automatic renewal.
                     * 
                     */
                    uint64_t GetProRenewFlag() const;

                    /**
                     * 判断参数 ProRenewFlag 是否已赋值
                     * @return ProRenewFlag 是否已赋值
                     * 
                     */
                    bool ProRenewFlagHasBeenSet() const;

                    /**
                     * 获取Flagship edition purchase record unique identifier. if not activated, the return value is empty.
                     * @return ProResourceId Flagship edition purchase record unique identifier. if not activated, the return value is empty.
                     * 
                     */
                    std::string GetProResourceId() const;

                    /**
                     * 判断参数 ProResourceId 是否已赋值
                     * @return ProResourceId 是否已赋值
                     * 
                     */
                    bool ProResourceIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable the KMS-managed version.
                     * @return ExclusiveVSMEnabled Whether to enable the KMS-managed version.
                     * 
                     */
                    bool GetExclusiveVSMEnabled() const;

                    /**
                     * 判断参数 ExclusiveVSMEnabled 是否已赋值
                     * @return ExclusiveVSMEnabled 是否已赋值
                     * 
                     */
                    bool ExclusiveVSMEnabledHasBeenSet() const;

                    /**
                     * 获取Whether to enable the exclusive edition of KMS.
                     * @return ExclusiveHSMEnabled Whether to enable the exclusive edition of KMS.
                     * 
                     */
                    bool GetExclusiveHSMEnabled() const;

                    /**
                     * 判断参数 ExclusiveHSMEnabled 是否已赋值
                     * @return ExclusiveHSMEnabled 是否已赋值
                     * 
                     */
                    bool ExclusiveHSMEnabledHasBeenSet() const;

                    /**
                     * 获取Specifies the KMS subscription information.
                     * @return SubscriptionInfo Specifies the KMS subscription information.
                     * 
                     */
                    std::string GetSubscriptionInfo() const;

                    /**
                     * 判断参数 SubscriptionInfo 是否已赋值
                     * @return SubscriptionInfo 是否已赋值
                     * 
                     */
                    bool SubscriptionInfoHasBeenSet() const;

                    /**
                     * 获取Returns the amount of KMS user secret keys used.
                     * @return CmkUserCount Returns the amount of KMS user secret keys used.
                     * 
                     */
                    uint64_t GetCmkUserCount() const;

                    /**
                     * 判断参数 CmkUserCount 是否已赋值
                     * @return CmkUserCount 是否已赋值
                     * 
                     */
                    bool CmkUserCountHasBeenSet() const;

                    /**
                     * 获取Returns the specification quantity of KMS user secret keys.
                     * @return CmkLimit Returns the specification quantity of KMS user secret keys.
                     * 
                     */
                    uint64_t GetCmkLimit() const;

                    /**
                     * 判断参数 CmkLimit 是否已赋值
                     * @return CmkLimit 是否已赋值
                     * 
                     */
                    bool CmkLimitHasBeenSet() const;

                    /**
                     * 获取Return dedicated cluster group.
                     * @return ExclusiveHSMList Return dedicated cluster group.
                     * 
                     */
                    std::vector<ExclusiveHSM> GetExclusiveHSMList() const;

                    /**
                     * 判断参数 ExclusiveHSMList 是否已赋值
                     * @return ExclusiveHSMList 是否已赋值
                     * 
                     */
                    bool ExclusiveHSMListHasBeenSet() const;

                    /**
                     * 获取Whether data key management is supported. valid values: 1 (supported), 0 (unsupported).
                     * @return IsAllowedDataKeyHosted Whether data key management is supported. valid values: 1 (supported), 0 (unsupported).
                     * 
                     */
                    bool GetIsAllowedDataKeyHosted() const;

                    /**
                     * 判断参数 IsAllowedDataKeyHosted 是否已赋值
                     * @return IsAllowedDataKeyHosted 是否已赋值
                     * 
                     */
                    bool IsAllowedDataKeyHostedHasBeenSet() const;

                    /**
                     * 获取Valid when IsAllowedDataKeyHosted is 1. specifies the purchase quota for data keys.
                     * @return DataKeyLimit Valid when IsAllowedDataKeyHosted is 1. specifies the purchase quota for data keys.
                     * 
                     */
                    uint64_t GetDataKeyLimit() const;

                    /**
                     * 判断参数 DataKeyLimit 是否已赋值
                     * @return DataKeyLimit 是否已赋值
                     * 
                     */
                    bool DataKeyLimitHasBeenSet() const;

                    /**
                     * 获取Valid when IsAllowedDataKeyHosted is 1. data key free quota.
                     * @return FreeDataKeyLimit Valid when IsAllowedDataKeyHosted is 1. data key free quota.
                     * 
                     */
                    uint64_t GetFreeDataKeyLimit() const;

                    /**
                     * 判断参数 FreeDataKeyLimit 是否已赋值
                     * @return FreeDataKeyLimit 是否已赋值
                     * 
                     */
                    bool FreeDataKeyLimitHasBeenSet() const;

                    /**
                     * 获取Valid at that time when IsAllowedDataKeyHosted is 1. specifies the number of keys used.
                     * @return DataKeyUsedCount Valid at that time when IsAllowedDataKeyHosted is 1. specifies the number of keys used.
                     * 
                     */
                    uint64_t GetDataKeyUsedCount() const;

                    /**
                     * 判断参数 DataKeyUsedCount 是否已赋值
                     * @return DataKeyUsedCount 是否已赋值
                     * 
                     */
                    bool DataKeyUsedCountHasBeenSet() const;

                    /**
                     * 获取Specifies the target region of the sync task.
                     * @return SyncTaskList Specifies the target region of the sync task.
                     * 
                     */
                    std::vector<DestinationSyncConfig> GetSyncTaskList() const;

                    /**
                     * 判断参数 SyncTaskList 是否已赋值
                     * @return SyncTaskList 是否已赋值
                     * 
                     */
                    bool SyncTaskListHasBeenSet() const;

                    /**
                     * 获取Whether synchronization task is supported. true: supported; false: unsupported.
                     * @return IsAllowedSync Whether synchronization task is supported. true: supported; false: unsupported.
                     * 
                     */
                    bool GetIsAllowedSync() const;

                    /**
                     * 判断参数 IsAllowedSync 是否已赋值
                     * @return IsAllowedSync 是否已赋值
                     * 
                     */
                    bool IsAllowedSyncHasBeenSet() const;

                private:

                    /**
                     * Whether the KMS service has been activated. true: activated
                     */
                    bool m_serviceEnabled;
                    bool m_serviceEnabledHasBeenSet;

                    /**
                     * Service unavailability type: 0-not purchased, 1-normal, 2-service suspended due to overdue payments, 3-resource release.
                     */
                    int64_t m_invalidType;
                    bool m_invalidTypeHasBeenSet;

                    /**
                     * 0: Basic Edition, 1: Ultimate Edition
                     */
                    uint64_t m_userLevel;
                    bool m_userLevelHasBeenSet;

                    /**
                     * Specifies the expiry time (Epoch Unix Timestamp) of the flagship edition.
                     */
                    uint64_t m_proExpireTime;
                    bool m_proExpireTimeHasBeenSet;

                    /**
                     * Specifies whether the flagship edition is automatically renewed: 0 - no automatic renewal, 1 - automatic renewal.
                     */
                    uint64_t m_proRenewFlag;
                    bool m_proRenewFlagHasBeenSet;

                    /**
                     * Flagship edition purchase record unique identifier. if not activated, the return value is empty.
                     */
                    std::string m_proResourceId;
                    bool m_proResourceIdHasBeenSet;

                    /**
                     * Whether to enable the KMS-managed version.
                     */
                    bool m_exclusiveVSMEnabled;
                    bool m_exclusiveVSMEnabledHasBeenSet;

                    /**
                     * Whether to enable the exclusive edition of KMS.
                     */
                    bool m_exclusiveHSMEnabled;
                    bool m_exclusiveHSMEnabledHasBeenSet;

                    /**
                     * Specifies the KMS subscription information.
                     */
                    std::string m_subscriptionInfo;
                    bool m_subscriptionInfoHasBeenSet;

                    /**
                     * Returns the amount of KMS user secret keys used.
                     */
                    uint64_t m_cmkUserCount;
                    bool m_cmkUserCountHasBeenSet;

                    /**
                     * Returns the specification quantity of KMS user secret keys.
                     */
                    uint64_t m_cmkLimit;
                    bool m_cmkLimitHasBeenSet;

                    /**
                     * Return dedicated cluster group.
                     */
                    std::vector<ExclusiveHSM> m_exclusiveHSMList;
                    bool m_exclusiveHSMListHasBeenSet;

                    /**
                     * Whether data key management is supported. valid values: 1 (supported), 0 (unsupported).
                     */
                    bool m_isAllowedDataKeyHosted;
                    bool m_isAllowedDataKeyHostedHasBeenSet;

                    /**
                     * Valid when IsAllowedDataKeyHosted is 1. specifies the purchase quota for data keys.
                     */
                    uint64_t m_dataKeyLimit;
                    bool m_dataKeyLimitHasBeenSet;

                    /**
                     * Valid when IsAllowedDataKeyHosted is 1. data key free quota.
                     */
                    uint64_t m_freeDataKeyLimit;
                    bool m_freeDataKeyLimitHasBeenSet;

                    /**
                     * Valid at that time when IsAllowedDataKeyHosted is 1. specifies the number of keys used.
                     */
                    uint64_t m_dataKeyUsedCount;
                    bool m_dataKeyUsedCountHasBeenSet;

                    /**
                     * Specifies the target region of the sync task.
                     */
                    std::vector<DestinationSyncConfig> m_syncTaskList;
                    bool m_syncTaskListHasBeenSet;

                    /**
                     * Whether synchronization task is supported. true: supported; false: unsupported.
                     */
                    bool m_isAllowedSync;
                    bool m_isAllowedSyncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GETSERVICESTATUSRESPONSE_H_
