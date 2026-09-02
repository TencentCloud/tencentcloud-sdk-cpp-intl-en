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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMASSETDATASCANTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMASSETDATASCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmScheduleConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyDspmAssetDataScanTask request structure.
                */
                class ModifyDspmAssetDataScanTaskRequest : public AbstractModel
                {
                public:
                    ModifyDspmAssetDataScanTaskRequest();
                    ~ModifyDspmAssetDataScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return AssetIds Instance ID.
                     * 
                     */
                    std::vector<std::string> GetAssetIds() const;

                    /**
                     * 设置Instance ID.
                     * @param _assetIds Instance ID.
                     * 
                     */
                    void SetAssetIds(const std::vector<std::string>& _assetIds);

                    /**
                     * 判断参数 AssetIds 是否已赋值
                     * @return AssetIds 是否已赋值
                     * 
                     */
                    bool AssetIdsHasBeenSet() const;

                    /**
                     * 获取Whether it is a scheduled task
                     * @return IsScheduled Whether it is a scheduled task
                     * 
                     */
                    bool GetIsScheduled() const;

                    /**
                     * 设置Whether it is a scheduled task
                     * @param _isScheduled Whether it is a scheduled task
                     * 
                     */
                    void SetIsScheduled(const bool& _isScheduled);

                    /**
                     * 判断参数 IsScheduled 是否已赋值
                     * @return IsScheduled 是否已赋值
                     * 
                     */
                    bool IsScheduledHasBeenSet() const;

                    /**
                     * 获取Whether to grant one-click authorization.
                     * @return IsAgreeAuth Whether to grant one-click authorization.
                     * 
                     */
                    bool GetIsAgreeAuth() const;

                    /**
                     * 设置Whether to grant one-click authorization.
                     * @param _isAgreeAuth Whether to grant one-click authorization.
                     * 
                     */
                    void SetIsAgreeAuth(const bool& _isAgreeAuth);

                    /**
                     * 判断参数 IsAgreeAuth 是否已赋值
                     * @return IsAgreeAuth 是否已赋值
                     * 
                     */
                    bool IsAgreeAuthHasBeenSet() const;

                    /**
                     * 获取Whether to execute immediately
                     * @return IsRunAtOnce Whether to execute immediately
                     * 
                     */
                    bool GetIsRunAtOnce() const;

                    /**
                     * 设置Whether to execute immediately
                     * @param _isRunAtOnce Whether to execute immediately
                     * 
                     */
                    void SetIsRunAtOnce(const bool& _isRunAtOnce);

                    /**
                     * 判断参数 IsRunAtOnce 是否已赋值
                     * @return IsRunAtOnce 是否已赋值
                     * 
                     */
                    bool IsRunAtOnceHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Scheduling cycle configuration
                     * @return ScheduleConfig Scheduling cycle configuration
                     * 
                     */
                    DspmScheduleConfig GetScheduleConfig() const;

                    /**
                     * 设置Scheduling cycle configuration
                     * @param _scheduleConfig Scheduling cycle configuration
                     * 
                     */
                    void SetScheduleConfig(const DspmScheduleConfig& _scheduleConfig);

                    /**
                     * 判断参数 ScheduleConfig 是否已赋值
                     * @return ScheduleConfig 是否已赋值
                     * 
                     */
                    bool ScheduleConfigHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::vector<std::string> m_assetIds;
                    bool m_assetIdsHasBeenSet;

                    /**
                     * Whether it is a scheduled task
                     */
                    bool m_isScheduled;
                    bool m_isScheduledHasBeenSet;

                    /**
                     * Whether to grant one-click authorization.
                     */
                    bool m_isAgreeAuth;
                    bool m_isAgreeAuthHasBeenSet;

                    /**
                     * Whether to execute immediately
                     */
                    bool m_isRunAtOnce;
                    bool m_isRunAtOnceHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Scheduling cycle configuration
                     */
                    DspmScheduleConfig m_scheduleConfig;
                    bool m_scheduleConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMASSETDATASCANTASKREQUEST_H_
