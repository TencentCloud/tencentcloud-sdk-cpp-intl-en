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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVEACTIVITYRESITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVEACTIVITYRESITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveScheduleLiveRecordTaskResult.h>
#include <tencentcloud/mps/v20190612/model/ScheduleQualityControlTaskResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The output of a live scheme subtask.
                */
                class LiveActivityResItem : public AbstractModel
                {
                public:
                    LiveActivityResItem();
                    ~LiveActivityResItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The output of a live recording task.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return LiveRecordTask The output of a live recording task.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    LiveScheduleLiveRecordTaskResult GetLiveRecordTask() const;

                    /**
                     * 设置The output of a live recording task.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _liveRecordTask The output of a live recording task.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLiveRecordTask(const LiveScheduleLiveRecordTaskResult& _liveRecordTask);

                    /**
                     * 判断参数 LiveRecordTask 是否已赋值
                     * @return LiveRecordTask 是否已赋值
                     * 
                     */
                    bool LiveRecordTaskHasBeenSet() const;

                    /**
                     * 获取Media quality inspection task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LiveQualityControlTask Media quality inspection task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ScheduleQualityControlTaskResult GetLiveQualityControlTask() const;

                    /**
                     * 设置Media quality inspection task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _liveQualityControlTask Media quality inspection task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLiveQualityControlTask(const ScheduleQualityControlTaskResult& _liveQualityControlTask);

                    /**
                     * 判断参数 LiveQualityControlTask 是否已赋值
                     * @return LiveQualityControlTask 是否已赋值
                     * 
                     */
                    bool LiveQualityControlTaskHasBeenSet() const;

                private:

                    /**
                     * The output of a live recording task.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    LiveScheduleLiveRecordTaskResult m_liveRecordTask;
                    bool m_liveRecordTaskHasBeenSet;

                    /**
                     * Media quality inspection task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ScheduleQualityControlTaskResult m_liveQualityControlTask;
                    bool m_liveQualityControlTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVEACTIVITYRESITEM_H_
