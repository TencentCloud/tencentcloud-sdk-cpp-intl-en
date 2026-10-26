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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_PLAYRECORDREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_PLAYRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * PlayRecord request structure.
                */
                class PlayRecordRequest : public AbstractModel
                {
                public:
                    PlayRecordRequest();
                    ~PlayRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel ID (obtain from the DescribeDeviceChannel API)
                     * @return ChannelId Channel ID (obtain from the DescribeDeviceChannel API)
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID (obtain from the DescribeDeviceChannel API)
                     * @param _channelId Channel ID (obtain from the DescribeDeviceChannel API)
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return Start Start time.
                     * 
                     */
                    int64_t GetStart() const;

                    /**
                     * 设置Start time.
                     * @param _start Start time.
                     * 
                     */
                    void SetStart(const int64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取 End time.
                     * @return End  End time.
                     * 
                     */
                    int64_t GetEnd() const;

                    /**
                     * 设置 End time.
                     * @param _end  End time.
                     * 
                     */
                    void SetEnd(const int64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                    /**
                     * 获取Stream type (1: main stream; 2: sub-stream (not allowed to be delivered at the same time as Resolution))
                     * @return StreamType Stream type (1: main stream; 2: sub-stream (not allowed to be delivered at the same time as Resolution))
                     * 
                     */
                    int64_t GetStreamType() const;

                    /**
                     * 设置Stream type (1: main stream; 2: sub-stream (not allowed to be delivered at the same time as Resolution))
                     * @param _streamType Stream type (1: main stream; 2: sub-stream (not allowed to be delivered at the same time as Resolution))
                     * 
                     */
                    void SetStreamType(const int64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取Resolution (1: QCIF; 2: CIF; 3: 4CIF; 4: D1; 5: 720P; 6: 1080P/I; custom 19201080, etc. (device support required) (not allowed to be delivered at the same time as StreamType))
                     * @return Resolution Resolution (1: QCIF; 2: CIF; 3: 4CIF; 4: D1; 5: 720P; 6: 1080P/I; custom 19201080, etc. (device support required) (not allowed to be delivered at the same time as StreamType))
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置Resolution (1: QCIF; 2: CIF; 3: 4CIF; 4: D1; 5: 720P; 6: 1080P/I; custom 19201080, etc. (device support required) (not allowed to be delivered at the same time as StreamType))
                     * @param _resolution Resolution (1: QCIF; 2: CIF; 3: 4CIF; 4: D1; 5: 720P; 6: 1080P/I; custom 19201080, etc. (device support required) (not allowed to be delivered at the same time as StreamType))
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取Whether it is a private network
                     * @return IsInternal Whether it is a private network
                     * 
                     */
                    bool GetIsInternal() const;

                    /**
                     * 设置Whether it is a private network
                     * @param _isInternal Whether it is a private network
                     * 
                     */
                    void SetIsInternal(const bool& _isInternal);

                    /**
                     * 判断参数 IsInternal 是否已赋值
                     * @return IsInternal 是否已赋值
                     * 
                     */
                    bool IsInternalHasBeenSet() const;

                private:

                    /**
                     * Channel ID (obtain from the DescribeDeviceChannel API)
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Start time.
                     */
                    int64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     *  End time.
                     */
                    int64_t m_end;
                    bool m_endHasBeenSet;

                    /**
                     * Stream type (1: main stream; 2: sub-stream (not allowed to be delivered at the same time as Resolution))
                     */
                    int64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * Resolution (1: QCIF; 2: CIF; 3: 4CIF; 4: D1; 5: 720P; 6: 1080P/I; custom 19201080, etc. (device support required) (not allowed to be delivered at the same time as StreamType))
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * Whether it is a private network
                     */
                    bool m_isInternal;
                    bool m_isInternalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_PLAYRECORDREQUEST_H_
