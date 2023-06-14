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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUTVOLUME_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUTVOLUME_H_

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
                * The SEI parameters for audio volume layout. You can specify the `AppData` and `PayloadType`.
This parameter may be empty, in which case the default SEI parameters for audio volume layout will be used.
                */
                class McuLayoutVolume : public AbstractModel
                {
                public:
                    McuLayoutVolume();
                    ~McuLayoutVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The application data, which will be embedded in the `app_data` field of the custom SEI. It must be shorter than 4,096 characters.
                     * @return AppData The application data, which will be embedded in the `app_data` field of the custom SEI. It must be shorter than 4,096 characters.
                     * 
                     */
                    std::string GetAppData() const;

                    /**
                     * 设置The application data, which will be embedded in the `app_data` field of the custom SEI. It must be shorter than 4,096 characters.
                     * @param _appData The application data, which will be embedded in the `app_data` field of the custom SEI. It must be shorter than 4,096 characters.
                     * 
                     */
                    void SetAppData(const std::string& _appData);

                    /**
                     * 判断参数 AppData 是否已赋值
                     * @return AppData 是否已赋值
                     * 
                     */
                    bool AppDataHasBeenSet() const;

                    /**
                     * 获取The payload type of the SEI message. The default is 100. Value range: 100-254 (244 is used internally by Tencent Cloud for timestamps).
                     * @return PayloadType The payload type of the SEI message. The default is 100. Value range: 100-254 (244 is used internally by Tencent Cloud for timestamps).
                     * 
                     */
                    uint64_t GetPayloadType() const;

                    /**
                     * 设置The payload type of the SEI message. The default is 100. Value range: 100-254 (244 is used internally by Tencent Cloud for timestamps).
                     * @param _payloadType The payload type of the SEI message. The default is 100. Value range: 100-254 (244 is used internally by Tencent Cloud for timestamps).
                     * 
                     */
                    void SetPayloadType(const uint64_t& _payloadType);

                    /**
                     * 判断参数 PayloadType 是否已赋值
                     * @return PayloadType 是否已赋值
                     * 
                     */
                    bool PayloadTypeHasBeenSet() const;

                    /**
                     * 获取The SEI sending interval (milliseconds). The default value is 1000.
                     * @return Interval The SEI sending interval (milliseconds). The default value is 1000.
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置The SEI sending interval (milliseconds). The default value is 1000.
                     * @param _interval The SEI sending interval (milliseconds). The default value is 1000.
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Valid values: `1`: SEI is guaranteed when keyframes are sent; `0` (default): SEI is not guaranteed when keyframes are sent.
                     * @return FollowIdr Valid values: `1`: SEI is guaranteed when keyframes are sent; `0` (default): SEI is not guaranteed when keyframes are sent.
                     * 
                     */
                    uint64_t GetFollowIdr() const;

                    /**
                     * 设置Valid values: `1`: SEI is guaranteed when keyframes are sent; `0` (default): SEI is not guaranteed when keyframes are sent.
                     * @param _followIdr Valid values: `1`: SEI is guaranteed when keyframes are sent; `0` (default): SEI is not guaranteed when keyframes are sent.
                     * 
                     */
                    void SetFollowIdr(const uint64_t& _followIdr);

                    /**
                     * 判断参数 FollowIdr 是否已赋值
                     * @return FollowIdr 是否已赋值
                     * 
                     */
                    bool FollowIdrHasBeenSet() const;

                private:

                    /**
                     * The application data, which will be embedded in the `app_data` field of the custom SEI. It must be shorter than 4,096 characters.
                     */
                    std::string m_appData;
                    bool m_appDataHasBeenSet;

                    /**
                     * The payload type of the SEI message. The default is 100. Value range: 100-254 (244 is used internally by Tencent Cloud for timestamps).
                     */
                    uint64_t m_payloadType;
                    bool m_payloadTypeHasBeenSet;

                    /**
                     * The SEI sending interval (milliseconds). The default value is 1000.
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Valid values: `1`: SEI is guaranteed when keyframes are sent; `0` (default): SEI is not guaranteed when keyframes are sent.
                     */
                    uint64_t m_followIdr;
                    bool m_followIdrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUTVOLUME_H_
