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
#include <tencentcloud/kms/v20190118/model/RegionQps.h>


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
                     * 获取<p>Whether the KMS service is enabled. true means enabled</p>
                     * @return ServiceEnabled <p>Whether the KMS service is enabled. true means enabled</p>
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
                     * 获取<p>Service unavailability type: 0-not purchased, 1-normal, 2-service suspended due to overdue payments, 3-resource release</p>
                     * @return InvalidType <p>Service unavailability type: 0-not purchased, 1-normal, 2-service suspended due to overdue payments, 3-resource release</p>
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
                     * 获取<p>0-Standard Edition, 1-Flagship Edition</p>
                     * @return UserLevel <p>0-Standard Edition, 1-Flagship Edition</p>
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
                     * 获取<p>Expiry time of the flagship edition (Epoch Unix Timestamp).</p>
                     * @return ProExpireTime <p>Expiry time of the flagship edition (Epoch Unix Timestamp).</p>
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
                     * 获取<p>Whether the flagship edition is automatically renewed: 0-no auto-renewal, 1-auto-renewal</p>
                     * @return ProRenewFlag <p>Whether the flagship edition is automatically renewed: 0-no auto-renewal, 1-auto-renewal</p>
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
                     * 获取<p>Unique identifier of the flagship edition purchase record. If the flagship edition is not activated, the return value is empty.</p>
                     * @return ProResourceId <p>Unique identifier of the flagship edition purchase record. If the flagship edition is not activated, the return value is empty.</p>
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
                     * 获取<p>Whether to enable managed by KMS</p>
                     * @return ExclusiveVSMEnabled <p>Whether to enable managed by KMS</p>
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
                     * 获取<p>Whether to enable KMS exclusive edition</p>
                     * @return ExclusiveHSMEnabled <p>Whether to enable KMS exclusive edition</p>
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
                     * 获取<p>KMS subscription information.</p>
                     * @return SubscriptionInfo <p>KMS subscription information.</p>
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
                     * 获取<p>Return the usage quantity of KMS user secret key</p>
                     * @return CmkUserCount <p>Return the usage quantity of KMS user secret key</p>
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
                     * 获取<p>Return the specification quantity of KMS user secret keys</p>
                     * @return CmkLimit <p>Return the specification quantity of KMS user secret keys</p>
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
                     * 获取<p>Return the dedicated cluster group</p>
                     * @return ExclusiveHSMList <p>Return the dedicated cluster group</p>
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
                     * 获取<p>Indicates whether data key management is supported. 1: supported. 0: not supported.</p>
                     * @return IsAllowedDataKeyHosted <p>Indicates whether data key management is supported. 1: supported. 0: not supported.</p>
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
                     * 获取<p>Valid when IsAllowedDataKeyHosted is 1. Purchase quota of the data key</p>
                     * @return DataKeyLimit <p>Valid when IsAllowedDataKeyHosted is 1. Purchase quota of the data key</p>
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
                     * 获取<p>Valid at that time when IsAllowedDataKeyHosted is 1. Data key free quota.</p>
                     * @return FreeDataKeyLimit <p>Valid at that time when IsAllowedDataKeyHosted is 1. Data key free quota.</p>
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
                     * 获取<p>Valid when IsAllowedDataKeyHosted is 1. Number of used data keys.</p>
                     * @return DataKeyUsedCount <p>Valid when IsAllowedDataKeyHosted is 1. Number of used data keys.</p>
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
                     * 获取<p>Target region info of the sync task</p>
                     * @return SyncTaskList <p>Target region info of the sync task</p>
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
                     * 获取<p>Whether sync task is supported. true: supported, false: unsupported.</p>
                     * @return IsAllowedSync <p>Whether sync task is supported. true: supported, false: unsupported.</p>
                     * 
                     */
                    bool GetIsAllowedSync() const;

                    /**
                     * 判断参数 IsAllowedSync 是否已赋值
                     * @return IsAllowedSync 是否已赋值
                     * 
                     */
                    bool IsAllowedSyncHasBeenSet() const;

                    /**
                     * 获取<p>QPS in the region</p>
                     * @return QpsLimit <p>QPS in the region</p>
                     * 
                     */
                    uint64_t GetQpsLimit() const;

                    /**
                     * 判断参数 QpsLimit 是否已赋值
                     * @return QpsLimit 是否已赋值
                     * 
                     */
                    bool QpsLimitHasBeenSet() const;

                    /**
                     * 获取<p>Total QPS value</p>
                     * @return QpsTotalLimit <p>Total QPS value</p>
                     * 
                     */
                    uint64_t GetQpsTotalLimit() const;

                    /**
                     * 判断参数 QpsTotalLimit 是否已赋值
                     * @return QpsTotalLimit 是否已赋值
                     * 
                     */
                    bool QpsTotalLimitHasBeenSet() const;

                    /**
                     * 获取<p>QPS in the region</p>
                     * @return RegionsQps <p>QPS in the region</p>
                     * 
                     */
                    std::vector<RegionQps> GetRegionsQps() const;

                    /**
                     * 判断参数 RegionsQps 是否已赋值
                     * @return RegionsQps 是否已赋值
                     * 
                     */
                    bool RegionsQpsHasBeenSet() const;

                private:

                    /**
                     * <p>Whether the KMS service is enabled. true means enabled</p>
                     */
                    bool m_serviceEnabled;
                    bool m_serviceEnabledHasBeenSet;

                    /**
                     * <p>Service unavailability type: 0-not purchased, 1-normal, 2-service suspended due to overdue payments, 3-resource release</p>
                     */
                    int64_t m_invalidType;
                    bool m_invalidTypeHasBeenSet;

                    /**
                     * <p>0-Standard Edition, 1-Flagship Edition</p>
                     */
                    uint64_t m_userLevel;
                    bool m_userLevelHasBeenSet;

                    /**
                     * <p>Expiry time of the flagship edition (Epoch Unix Timestamp).</p>
                     */
                    uint64_t m_proExpireTime;
                    bool m_proExpireTimeHasBeenSet;

                    /**
                     * <p>Whether the flagship edition is automatically renewed: 0-no auto-renewal, 1-auto-renewal</p>
                     */
                    uint64_t m_proRenewFlag;
                    bool m_proRenewFlagHasBeenSet;

                    /**
                     * <p>Unique identifier of the flagship edition purchase record. If the flagship edition is not activated, the return value is empty.</p>
                     */
                    std::string m_proResourceId;
                    bool m_proResourceIdHasBeenSet;

                    /**
                     * <p>Whether to enable managed by KMS</p>
                     */
                    bool m_exclusiveVSMEnabled;
                    bool m_exclusiveVSMEnabledHasBeenSet;

                    /**
                     * <p>Whether to enable KMS exclusive edition</p>
                     */
                    bool m_exclusiveHSMEnabled;
                    bool m_exclusiveHSMEnabledHasBeenSet;

                    /**
                     * <p>KMS subscription information.</p>
                     */
                    std::string m_subscriptionInfo;
                    bool m_subscriptionInfoHasBeenSet;

                    /**
                     * <p>Return the usage quantity of KMS user secret key</p>
                     */
                    uint64_t m_cmkUserCount;
                    bool m_cmkUserCountHasBeenSet;

                    /**
                     * <p>Return the specification quantity of KMS user secret keys</p>
                     */
                    uint64_t m_cmkLimit;
                    bool m_cmkLimitHasBeenSet;

                    /**
                     * <p>Return the dedicated cluster group</p>
                     */
                    std::vector<ExclusiveHSM> m_exclusiveHSMList;
                    bool m_exclusiveHSMListHasBeenSet;

                    /**
                     * <p>Indicates whether data key management is supported. 1: supported. 0: not supported.</p>
                     */
                    bool m_isAllowedDataKeyHosted;
                    bool m_isAllowedDataKeyHostedHasBeenSet;

                    /**
                     * <p>Valid when IsAllowedDataKeyHosted is 1. Purchase quota of the data key</p>
                     */
                    uint64_t m_dataKeyLimit;
                    bool m_dataKeyLimitHasBeenSet;

                    /**
                     * <p>Valid at that time when IsAllowedDataKeyHosted is 1. Data key free quota.</p>
                     */
                    uint64_t m_freeDataKeyLimit;
                    bool m_freeDataKeyLimitHasBeenSet;

                    /**
                     * <p>Valid when IsAllowedDataKeyHosted is 1. Number of used data keys.</p>
                     */
                    uint64_t m_dataKeyUsedCount;
                    bool m_dataKeyUsedCountHasBeenSet;

                    /**
                     * <p>Target region info of the sync task</p>
                     */
                    std::vector<DestinationSyncConfig> m_syncTaskList;
                    bool m_syncTaskListHasBeenSet;

                    /**
                     * <p>Whether sync task is supported. true: supported, false: unsupported.</p>
                     */
                    bool m_isAllowedSync;
                    bool m_isAllowedSyncHasBeenSet;

                    /**
                     * <p>QPS in the region</p>
                     */
                    uint64_t m_qpsLimit;
                    bool m_qpsLimitHasBeenSet;

                    /**
                     * <p>Total QPS value</p>
                     */
                    uint64_t m_qpsTotalLimit;
                    bool m_qpsTotalLimitHasBeenSet;

                    /**
                     * <p>QPS in the region</p>
                     */
                    std::vector<RegionQps> m_regionsQps;
                    bool m_regionsQpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GETSERVICESTATUSRESPONSE_H_
