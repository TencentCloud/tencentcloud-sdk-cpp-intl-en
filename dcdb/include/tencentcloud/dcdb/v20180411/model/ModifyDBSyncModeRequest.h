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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYDBSYNCMODEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYDBSYNCMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * ModifyDBSyncMode request structure.
                */
                class ModifyDBSyncModeRequest : public AbstractModel
                {
                public:
                    ModifyDBSyncModeRequest();
                    ~ModifyDBSyncModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of an instance for which to modify the sync mode. The ID is in the format of dcdbt-ow728lmc.
                     * @return InstanceId ID of an instance for which to modify the sync mode. The ID is in the format of dcdbt-ow728lmc.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of an instance for which to modify the sync mode. The ID is in the format of dcdbt-ow728lmc.
                     * @param InstanceId ID of an instance for which to modify the sync mode. The ID is in the format of dcdbt-ow728lmc.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Sync mode. 0: async; 1: strong sync; 2: downgradable strong sync
                     * @return SyncMode Sync mode. 0: async; 1: strong sync; 2: downgradable strong sync
                     */
                    int64_t GetSyncMode() const;

                    /**
                     * 设置Sync mode. 0: async; 1: strong sync; 2: downgradable strong sync
                     * @param SyncMode Sync mode. 0: async; 1: strong sync; 2: downgradable strong sync
                     */
                    void SetSyncMode(const int64_t& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     */
                    bool SyncModeHasBeenSet() const;

                private:

                    /**
                     * ID of an instance for which to modify the sync mode. The ID is in the format of dcdbt-ow728lmc.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Sync mode. 0: async; 1: strong sync; 2: downgradable strong sync
                     */
                    int64_t m_syncMode;
                    bool m_syncModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYDBSYNCMODEREQUEST_H_
