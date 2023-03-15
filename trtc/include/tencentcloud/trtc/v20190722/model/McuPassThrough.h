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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUPASSTHROUGH_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUPASSTHROUGH_H_

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
                * The custom pass-through SEI.
                */
                class McuPassThrough : public AbstractModel
                {
                public:
                    McuPassThrough();
                    ~McuPassThrough() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The payload of the pass-through SEI.
                     * @return PayloadContent The payload of the pass-through SEI.
                     */
                    std::string GetPayloadContent() const;

                    /**
                     * 设置The payload of the pass-through SEI.
                     * @param PayloadContent The payload of the pass-through SEI.
                     */
                    void SetPayloadContent(const std::string& _payloadContent);

                    /**
                     * 判断参数 PayloadContent 是否已赋值
                     * @return PayloadContent 是否已赋值
                     */
                    bool PayloadContentHasBeenSet() const;

                    /**
                     * 获取The payload type of the SEI message. Value range: 5 and 100-254 (244 is used internally by Tencent Cloud for timestamps).
                     * @return PayloadType The payload type of the SEI message. Value range: 5 and 100-254 (244 is used internally by Tencent Cloud for timestamps).
                     */
                    uint64_t GetPayloadType() const;

                    /**
                     * 设置The payload type of the SEI message. Value range: 5 and 100-254 (244 is used internally by Tencent Cloud for timestamps).
                     * @param PayloadType The payload type of the SEI message. Value range: 5 and 100-254 (244 is used internally by Tencent Cloud for timestamps).
                     */
                    void SetPayloadType(const uint64_t& _payloadType);

                    /**
                     * 判断参数 PayloadType 是否已赋值
                     * @return PayloadType 是否已赋值
                     */
                    bool PayloadTypeHasBeenSet() const;

                    /**
                     * 获取This parameter is required only if `PayloadType` is 5. It must be a 32-character hexadecimal string. If `PayloadType` is not 5, this parameter will be ignored.
                     * @return PayloadUuid This parameter is required only if `PayloadType` is 5. It must be a 32-character hexadecimal string. If `PayloadType` is not 5, this parameter will be ignored.
                     */
                    std::string GetPayloadUuid() const;

                    /**
                     * 设置This parameter is required only if `PayloadType` is 5. It must be a 32-character hexadecimal string. If `PayloadType` is not 5, this parameter will be ignored.
                     * @param PayloadUuid This parameter is required only if `PayloadType` is 5. It must be a 32-character hexadecimal string. If `PayloadType` is not 5, this parameter will be ignored.
                     */
                    void SetPayloadUuid(const std::string& _payloadUuid);

                    /**
                     * 判断参数 PayloadUuid 是否已赋值
                     * @return PayloadUuid 是否已赋值
                     */
                    bool PayloadUuidHasBeenSet() const;

                    /**
                     * 获取The SEI sending interval (milliseconds). The default value is 1000.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Interval The SEI sending interval (milliseconds). The default value is 1000.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置The SEI sending interval (milliseconds). The default value is 1000.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Interval The SEI sending interval (milliseconds). The default value is 1000.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Valid values: `1`: SEI is guaranteed when keyframes are sent; `0` (default): SEI is not guaranteed when keyframes are sent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FollowIdr Valid values: `1`: SEI is guaranteed when keyframes are sent; `0` (default): SEI is not guaranteed when keyframes are sent.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetFollowIdr() const;

                    /**
                     * 设置Valid values: `1`: SEI is guaranteed when keyframes are sent; `0` (default): SEI is not guaranteed when keyframes are sent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param FollowIdr Valid values: `1`: SEI is guaranteed when keyframes are sent; `0` (default): SEI is not guaranteed when keyframes are sent.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFollowIdr(const uint64_t& _followIdr);

                    /**
                     * 判断参数 FollowIdr 是否已赋值
                     * @return FollowIdr 是否已赋值
                     */
                    bool FollowIdrHasBeenSet() const;

                private:

                    /**
                     * The payload of the pass-through SEI.
                     */
                    std::string m_payloadContent;
                    bool m_payloadContentHasBeenSet;

                    /**
                     * The payload type of the SEI message. Value range: 5 and 100-254 (244 is used internally by Tencent Cloud for timestamps).
                     */
                    uint64_t m_payloadType;
                    bool m_payloadTypeHasBeenSet;

                    /**
                     * This parameter is required only if `PayloadType` is 5. It must be a 32-character hexadecimal string. If `PayloadType` is not 5, this parameter will be ignored.
                     */
                    std::string m_payloadUuid;
                    bool m_payloadUuidHasBeenSet;

                    /**
                     * The SEI sending interval (milliseconds). The default value is 1000.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Valid values: `1`: SEI is guaranteed when keyframes are sent; `0` (default): SEI is not guaranteed when keyframes are sent.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_followIdr;
                    bool m_followIdrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUPASSTHROUGH_H_
