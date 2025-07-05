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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ABNORMALEVENT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ABNORMALEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The information of an error event (the possible cause of an abnormal user experience).
                */
                class AbnormalEvent : public AbstractModel
                {
                public:
                    AbnormalEvent();
                    ~AbnormalEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The error event ID. For details, see https://www.tencentcloud.com/document/product/647/37906?has_map=1
                     * @return AbnormalEventId The error event ID. For details, see https://www.tencentcloud.com/document/product/647/37906?has_map=1
                     * 
                     */
                    uint64_t GetAbnormalEventId() const;

                    /**
                     * 设置The error event ID. For details, see https://www.tencentcloud.com/document/product/647/37906?has_map=1
                     * @param _abnormalEventId The error event ID. For details, see https://www.tencentcloud.com/document/product/647/37906?has_map=1
                     * 
                     */
                    void SetAbnormalEventId(const uint64_t& _abnormalEventId);

                    /**
                     * 判断参数 AbnormalEventId 是否已赋值
                     * @return AbnormalEventId 是否已赋值
                     * 
                     */
                    bool AbnormalEventIdHasBeenSet() const;

                    /**
                     * 获取The remote user ID. If this parameter is empty, it indicates that the error event is not associated with a remote user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PeerId The remote user ID. If this parameter is empty, it indicates that the error event is not associated with a remote user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPeerId() const;

                    /**
                     * 设置The remote user ID. If this parameter is empty, it indicates that the error event is not associated with a remote user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _peerId The remote user ID. If this parameter is empty, it indicates that the error event is not associated with a remote user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPeerId(const std::string& _peerId);

                    /**
                     * 判断参数 PeerId 是否已赋值
                     * @return PeerId 是否已赋值
                     * 
                     */
                    bool PeerIdHasBeenSet() const;

                private:

                    /**
                     * The error event ID. For details, see https://www.tencentcloud.com/document/product/647/37906?has_map=1
                     */
                    uint64_t m_abnormalEventId;
                    bool m_abnormalEventIdHasBeenSet;

                    /**
                     * The remote user ID. If this parameter is empty, it indicates that the error event is not associated with a remote user.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_peerId;
                    bool m_peerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ABNORMALEVENT_H_
