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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SYNCOPTION_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SYNCOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * Configuration options of a disaster recovery sync task
                */
                class SyncOption : public AbstractModel
                {
                public:
                    SyncOption();
                    ~SyncOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sync object. 1: entire instance; 2: specified table
                     * @return SyncObject Sync object. 1: entire instance; 2: specified table
                     */
                    uint64_t GetSyncObject() const;

                    /**
                     * 设置Sync object. 1: entire instance; 2: specified table
                     * @param SyncObject Sync object. 1: entire instance; 2: specified table
                     */
                    void SetSyncObject(const uint64_t& _syncObject);

                    /**
                     * 判断参数 SyncObject 是否已赋值
                     * @return SyncObject 是否已赋值
                     */
                    bool SyncObjectHasBeenSet() const;

                    /**
                     * 获取Sync start configuration. 1: start immediately
                     * @return RunMode Sync start configuration. 1: start immediately
                     */
                    uint64_t GetRunMode() const;

                    /**
                     * 设置Sync start configuration. 1: start immediately
                     * @param RunMode Sync start configuration. 1: start immediately
                     */
                    void SetRunMode(const uint64_t& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取Sync mode. 3: full + incremental sync
                     * @return SyncType Sync mode. 3: full + incremental sync
                     */
                    uint64_t GetSyncType() const;

                    /**
                     * 设置Sync mode. 3: full + incremental sync
                     * @param SyncType Sync mode. 3: full + incremental sync
                     */
                    void SetSyncType(const uint64_t& _syncType);

                    /**
                     * 判断参数 SyncType 是否已赋值
                     * @return SyncType 是否已赋值
                     */
                    bool SyncTypeHasBeenSet() const;

                    /**
                     * 获取Data consistency check. 1: no configuration required
                     * @return ConsistencyType Data consistency check. 1: no configuration required
                     */
                    uint64_t GetConsistencyType() const;

                    /**
                     * 设置Data consistency check. 1: no configuration required
                     * @param ConsistencyType Data consistency check. 1: no configuration required
                     */
                    void SetConsistencyType(const uint64_t& _consistencyType);

                    /**
                     * 判断参数 ConsistencyType 是否已赋值
                     * @return ConsistencyType 是否已赋值
                     */
                    bool ConsistencyTypeHasBeenSet() const;

                private:

                    /**
                     * Sync object. 1: entire instance; 2: specified table
                     */
                    uint64_t m_syncObject;
                    bool m_syncObjectHasBeenSet;

                    /**
                     * Sync start configuration. 1: start immediately
                     */
                    uint64_t m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * Sync mode. 3: full + incremental sync
                     */
                    uint64_t m_syncType;
                    bool m_syncTypeHasBeenSet;

                    /**
                     * Data consistency check. 1: no configuration required
                     */
                    uint64_t m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SYNCOPTION_H_
