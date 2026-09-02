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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSPMSHARDCONFIGRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSPMSHARDCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyCspmShardConfig response structure.
                */
                class ModifyCspmShardConfigResponse : public AbstractModel
                {
                public:
                    ModifyCspmShardConfigResponse();
                    ~ModifyCspmShardConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Shared AppID</p>
                     * @return ShardFromAppID <p>Shared AppID</p>
                     * 
                     */
                    uint64_t GetShardFromAppID() const;

                    /**
                     * 判断参数 ShardFromAppID 是否已赋值
                     * @return ShardFromAppID 是否已赋值
                     * 
                     */
                    bool ShardFromAppIDHasBeenSet() const;

                    /**
                     * 获取<p>Shared switch: 1: On; 2: Off</p>
                     * @return AutoShardStatus <p>Shared switch: 1: On; 2: Off</p>
                     * 
                     */
                    uint64_t GetAutoShardStatus() const;

                    /**
                     * 判断参数 AutoShardStatus 是否已赋值
                     * @return AutoShardStatus 是否已赋值
                     * 
                     */
                    bool AutoShardStatusHasBeenSet() const;

                    /**
                     * 获取<p>Shared AppID set</p>
                     * @return ShardAppIDs <p>Shared AppID set</p>
                     * 
                     */
                    std::vector<uint64_t> GetShardAppIDs() const;

                    /**
                     * 判断参数 ShardAppIDs 是否已赋值
                     * @return ShardAppIDs 是否已赋值
                     * 
                     */
                    bool ShardAppIDsHasBeenSet() const;

                private:

                    /**
                     * <p>Shared AppID</p>
                     */
                    uint64_t m_shardFromAppID;
                    bool m_shardFromAppIDHasBeenSet;

                    /**
                     * <p>Shared switch: 1: On; 2: Off</p>
                     */
                    uint64_t m_autoShardStatus;
                    bool m_autoShardStatusHasBeenSet;

                    /**
                     * <p>Shared AppID set</p>
                     */
                    std::vector<uint64_t> m_shardAppIDs;
                    bool m_shardAppIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSPMSHARDCONFIGRESPONSE_H_
