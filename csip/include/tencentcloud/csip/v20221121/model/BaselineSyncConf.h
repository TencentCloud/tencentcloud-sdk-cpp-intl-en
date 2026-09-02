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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESYNCCONF_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESYNCCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/UserConfSyncStatus.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Baseline synchronization configuration for Group Administrator.
                */
                class BaselineSyncConf : public AbstractModel
                {
                public:
                    BaselineSyncConf();
                    ~BaselineSyncConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to automatically sync the baseline configuration to member accounts. true indicates enabled, false indicates disabled.</p>
                     * @return AutoSync <p>Whether to automatically sync the baseline configuration to member accounts. true indicates enabled, false indicates disabled.</p>
                     * 
                     */
                    bool GetAutoSync() const;

                    /**
                     * 设置<p>Whether to automatically sync the baseline configuration to member accounts. true indicates enabled, false indicates disabled.</p>
                     * @param _autoSync <p>Whether to automatically sync the baseline configuration to member accounts. true indicates enabled, false indicates disabled.</p>
                     * 
                     */
                    void SetAutoSync(const bool& _autoSync);

                    /**
                     * 判断参数 AutoSync 是否已赋值
                     * @return AutoSync 是否已赋值
                     * 
                     */
                    bool AutoSyncHasBeenSet() const;

                    /**
                     * 获取<p>List of Appids of target member accounts for automatic synchronization. This parameter is valid only when AutoSync=true.</p>
                     * @return TargetAppidList <p>List of Appids of target member accounts for automatic synchronization. This parameter is valid only when AutoSync=true.</p>
                     * 
                     */
                    std::vector<uint64_t> GetTargetAppidList() const;

                    /**
                     * 设置<p>List of Appids of target member accounts for automatic synchronization. This parameter is valid only when AutoSync=true.</p>
                     * @param _targetAppidList <p>List of Appids of target member accounts for automatic synchronization. This parameter is valid only when AutoSync=true.</p>
                     * 
                     */
                    void SetTargetAppidList(const std::vector<uint64_t>& _targetAppidList);

                    /**
                     * 判断参数 TargetAppidList 是否已赋值
                     * @return TargetAppidList 是否已赋值
                     * 
                     */
                    bool TargetAppidListHasBeenSet() const;

                    /**
                     * 获取<p>User Configuration List</p>
                     * @return UserConfList <p>User Configuration List</p>
                     * 
                     */
                    std::vector<UserConfSyncStatus> GetUserConfList() const;

                    /**
                     * 设置<p>User Configuration List</p>
                     * @param _userConfList <p>User Configuration List</p>
                     * 
                     */
                    void SetUserConfList(const std::vector<UserConfSyncStatus>& _userConfList);

                    /**
                     * 判断参数 UserConfList 是否已赋值
                     * @return UserConfList 是否已赋值
                     * 
                     */
                    bool UserConfListHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to automatically sync the baseline configuration to member accounts. true indicates enabled, false indicates disabled.</p>
                     */
                    bool m_autoSync;
                    bool m_autoSyncHasBeenSet;

                    /**
                     * <p>List of Appids of target member accounts for automatic synchronization. This parameter is valid only when AutoSync=true.</p>
                     */
                    std::vector<uint64_t> m_targetAppidList;
                    bool m_targetAppidListHasBeenSet;

                    /**
                     * <p>User Configuration List</p>
                     */
                    std::vector<UserConfSyncStatus> m_userConfList;
                    bool m_userConfListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESYNCCONF_H_
