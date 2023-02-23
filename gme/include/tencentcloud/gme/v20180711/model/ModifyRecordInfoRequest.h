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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_MODIFYRECORDINFOREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_MODIFYRECORDINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/SubscribeRecordUserIds.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * ModifyRecordInfo request structure.
                */
                class ModifyRecordInfoRequest : public AbstractModel
                {
                public:
                    ModifyRecordInfoRequest();
                    ~ModifyRecordInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the ongoing task, which is returned from the `StartRecord` API.
                     * @return TaskId ID of the ongoing task, which is returned from the `StartRecord` API.
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置ID of the ongoing task, which is returned from the `StartRecord` API.
                     * @param TaskId ID of the ongoing task, which is returned from the `StartRecord` API.
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
                     * @return RecordMode Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
                     */
                    uint64_t GetRecordMode() const;

                    /**
                     * 设置Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
                     * @param RecordMode Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
                     */
                    void SetRecordMode(const uint64_t& _recordMode);

                    /**
                     * 判断参数 RecordMode 是否已赋值
                     * @return RecordMode 是否已赋值
                     */
                    bool RecordModeHasBeenSet() const;

                    /**
                     * 获取Application ID.
                     * @return BizId Application ID.
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置Application ID.
                     * @param BizId Application ID.
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取Allowlist or blocklist for stream subscription.
                     * @return SubscribeRecordUserIds Allowlist or blocklist for stream subscription.
                     */
                    SubscribeRecordUserIds GetSubscribeRecordUserIds() const;

                    /**
                     * 设置Allowlist or blocklist for stream subscription.
                     * @param SubscribeRecordUserIds Allowlist or blocklist for stream subscription.
                     */
                    void SetSubscribeRecordUserIds(const SubscribeRecordUserIds& _subscribeRecordUserIds);

                    /**
                     * 判断参数 SubscribeRecordUserIds 是否已赋值
                     * @return SubscribeRecordUserIds 是否已赋值
                     */
                    bool SubscribeRecordUserIdsHasBeenSet() const;

                private:

                    /**
                     * ID of the ongoing task, which is returned from the `StartRecord` API.
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
                     */
                    uint64_t m_recordMode;
                    bool m_recordModeHasBeenSet;

                    /**
                     * Application ID.
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * Allowlist or blocklist for stream subscription.
                     */
                    SubscribeRecordUserIds m_subscribeRecordUserIds;
                    bool m_subscribeRecordUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_MODIFYRECORDINFOREQUEST_H_
