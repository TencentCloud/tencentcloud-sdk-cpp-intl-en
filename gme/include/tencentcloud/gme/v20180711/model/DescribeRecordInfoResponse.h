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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBERECORDINFORESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBERECORDINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/RecordInfo.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeRecordInfo response structure.
                */
                class DescribeRecordInfoResponse : public AbstractModel
                {
                public:
                    DescribeRecordInfoResponse();
                    ~DescribeRecordInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Information about the recording task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordInfo Information about the recording task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RecordInfo> GetRecordInfo() const;

                    /**
                     * 判断参数 RecordInfo 是否已赋值
                     * @return RecordInfo 是否已赋值
                     * 
                     */
                    bool RecordInfoHasBeenSet() const;

                    /**
                     * 获取Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
                     * @return RecordMode Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
                     * 
                     */
                    uint64_t GetRecordMode() const;

                    /**
                     * 判断参数 RecordMode 是否已赋值
                     * @return RecordMode 是否已赋值
                     * 
                     */
                    bool RecordModeHasBeenSet() const;

                    /**
                     * 获取Room ID.
                     * @return RoomId Room ID.
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                private:

                    /**
                     * Information about the recording task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RecordInfo> m_recordInfo;
                    bool m_recordInfoHasBeenSet;

                    /**
                     * Recording mode. Valid values: `1`: single stream; `2`: mixed streams; `3`: single stream and mixed streams.
                     */
                    uint64_t m_recordMode;
                    bool m_recordModeHasBeenSet;

                    /**
                     * Room ID.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBERECORDINFORESPONSE_H_
