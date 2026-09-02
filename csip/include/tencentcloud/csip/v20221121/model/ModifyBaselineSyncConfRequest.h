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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBASELINESYNCCONFREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBASELINESYNCCONFREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineSyncConf.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyBaselineSyncConf request structure.
                */
                class ModifyBaselineSyncConfRequest : public AbstractModel
                {
                public:
                    ModifyBaselineSyncConfRequest();
                    ~ModifyBaselineSyncConfRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Baseline synchronization configuration to be updated.</p>
                     * @return SyncConf <p>Baseline synchronization configuration to be updated.</p>
                     * 
                     */
                    BaselineSyncConf GetSyncConf() const;

                    /**
                     * 设置<p>Baseline synchronization configuration to be updated.</p>
                     * @param _syncConf <p>Baseline synchronization configuration to be updated.</p>
                     * 
                     */
                    void SetSyncConf(const BaselineSyncConf& _syncConf);

                    /**
                     * 判断参数 SyncConf 是否已赋值
                     * @return SyncConf 是否已赋值
                     * 
                     */
                    bool SyncConfHasBeenSet() const;

                    /**
                     * 获取List of member account Appids in the group account scenario. Leave it empty for non-group accounts or when querying only the current account.
                     * @return MemberId List of member account Appids in the group account scenario. Leave it empty for non-group accounts or when querying only the current account.
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置List of member account Appids in the group account scenario. Leave it empty for non-group accounts or when querying only the current account.
                     * @param _memberId List of member account Appids in the group account scenario. Leave it empty for non-group accounts or when querying only the current account.
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>Baseline synchronization configuration to be updated.</p>
                     */
                    BaselineSyncConf m_syncConf;
                    bool m_syncConfHasBeenSet;

                    /**
                     * List of member account Appids in the group account scenario. Leave it empty for non-group accounts or when querying only the current account.
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBASELINESYNCCONFREQUEST_H_
