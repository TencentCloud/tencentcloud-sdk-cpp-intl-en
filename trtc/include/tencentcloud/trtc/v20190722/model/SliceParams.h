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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SLICEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SLICEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SubscribeStreamUserIds.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Control parameters for cloud slicing.
                */
                class SliceParams : public AbstractModel
                {
                public:
                    SliceParams();
                    ~SliceParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Slicing task type.
1: audio slicing;
2: video frame extraction;
3: audio/video slicing + video frame extraction.
Example value: 1.
                     * @return SliceType Slicing task type.
1: audio slicing;
2: video frame extraction;
3: audio/video slicing + video frame extraction.
Example value: 1.
                     * 
                     */
                    uint64_t GetSliceType() const;

                    /**
                     * 设置Slicing task type.
1: audio slicing;
2: video frame extraction;
3: audio/video slicing + video frame extraction.
Example value: 1.
                     * @param _sliceType Slicing task type.
1: audio slicing;
2: video frame extraction;
3: audio/video slicing + video frame extraction.
Example value: 1.
                     * 
                     */
                    void SetSliceType(const uint64_t& _sliceType);

                    /**
                     * 判断参数 SliceType 是否已赋值
                     * @return SliceType 是否已赋值
                     * 
                     */
                    bool SliceTypeHasBeenSet() const;

                    /**
                     * 获取Recording is stopped automatically when there is no anchor in the room for more than MaxIdleTime. Unit: seconds. Default value: 30 seconds. This value needs to be greater than or equal to 5 seconds and less than or equal to 86,400 seconds (24 hours).
Example value: 30.
                     * @return MaxIdleTime Recording is stopped automatically when there is no anchor in the room for more than MaxIdleTime. Unit: seconds. Default value: 30 seconds. This value needs to be greater than or equal to 5 seconds and less than or equal to 86,400 seconds (24 hours).
Example value: 30.
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置Recording is stopped automatically when there is no anchor in the room for more than MaxIdleTime. Unit: seconds. Default value: 30 seconds. This value needs to be greater than or equal to 5 seconds and less than or equal to 86,400 seconds (24 hours).
Example value: 30.
                     * @param _maxIdleTime Recording is stopped automatically when there is no anchor in the room for more than MaxIdleTime. Unit: seconds. Default value: 30 seconds. This value needs to be greater than or equal to 5 seconds and less than or equal to 86,400 seconds (24 hours).
Example value: 30.
                     * 
                     */
                    void SetMaxIdleTime(const uint64_t& _maxIdleTime);

                    /**
                     * 判断参数 MaxIdleTime 是否已赋值
                     * @return MaxIdleTime 是否已赋值
                     * 
                     */
                    bool MaxIdleTimeHasBeenSet() const;

                    /**
                     * 获取Audio slicing duration. Default value: 15s. Example value: 15.
                     * @return SliceAudio Audio slicing duration. Default value: 15s. Example value: 15.
                     * 
                     */
                    uint64_t GetSliceAudio() const;

                    /**
                     * 设置Audio slicing duration. Default value: 15s. Example value: 15.
                     * @param _sliceAudio Audio slicing duration. Default value: 15s. Example value: 15.
                     * 
                     */
                    void SetSliceAudio(const uint64_t& _sliceAudio);

                    /**
                     * 判断参数 SliceAudio 是否已赋值
                     * @return SliceAudio 是否已赋值
                     * 
                     */
                    bool SliceAudioHasBeenSet() const;

                    /**
                     * 获取Interval for video frame extraction. Default value: 5s. Example value: 5.
                     * @return SliceVideo Interval for video frame extraction. Default value: 5s. Example value: 5.
                     * 
                     */
                    uint64_t GetSliceVideo() const;

                    /**
                     * 设置Interval for video frame extraction. Default value: 5s. Example value: 5.
                     * @param _sliceVideo Interval for video frame extraction. Default value: 5s. Example value: 5.
                     * 
                     */
                    void SetSliceVideo(const uint64_t& _sliceVideo);

                    /**
                     * 判断参数 SliceVideo 是否已赋值
                     * @return SliceVideo 是否已赋值
                     * 
                     */
                    bool SliceVideoHasBeenSet() const;

                    /**
                     * 获取Specifies the allowlist or blocklist for the subscription stream.
                     * @return SubscribeStreamUserIds Specifies the allowlist or blocklist for the subscription stream.
                     * 
                     */
                    SubscribeStreamUserIds GetSubscribeStreamUserIds() const;

                    /**
                     * 设置Specifies the allowlist or blocklist for the subscription stream.
                     * @param _subscribeStreamUserIds Specifies the allowlist or blocklist for the subscription stream.
                     * 
                     */
                    void SetSubscribeStreamUserIds(const SubscribeStreamUserIds& _subscribeStreamUserIds);

                    /**
                     * 判断参数 SubscribeStreamUserIds 是否已赋值
                     * @return SubscribeStreamUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeStreamUserIdsHasBeenSet() const;

                    /**
                     * 获取Depreciated. The callback URL is configured in the console.
                     * @return SliceCallbackUrl Depreciated. The callback URL is configured in the console.
                     * 
                     */
                    std::string GetSliceCallbackUrl() const;

                    /**
                     * 设置Depreciated. The callback URL is configured in the console.
                     * @param _sliceCallbackUrl Depreciated. The callback URL is configured in the console.
                     * 
                     */
                    void SetSliceCallbackUrl(const std::string& _sliceCallbackUrl);

                    /**
                     * 判断参数 SliceCallbackUrl 是否已赋值
                     * @return SliceCallbackUrl 是否已赋值
                     * 
                     */
                    bool SliceCallbackUrlHasBeenSet() const;

                private:

                    /**
                     * Slicing task type.
1: audio slicing;
2: video frame extraction;
3: audio/video slicing + video frame extraction.
Example value: 1.
                     */
                    uint64_t m_sliceType;
                    bool m_sliceTypeHasBeenSet;

                    /**
                     * Recording is stopped automatically when there is no anchor in the room for more than MaxIdleTime. Unit: seconds. Default value: 30 seconds. This value needs to be greater than or equal to 5 seconds and less than or equal to 86,400 seconds (24 hours).
Example value: 30.
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * Audio slicing duration. Default value: 15s. Example value: 15.
                     */
                    uint64_t m_sliceAudio;
                    bool m_sliceAudioHasBeenSet;

                    /**
                     * Interval for video frame extraction. Default value: 5s. Example value: 5.
                     */
                    uint64_t m_sliceVideo;
                    bool m_sliceVideoHasBeenSet;

                    /**
                     * Specifies the allowlist or blocklist for the subscription stream.
                     */
                    SubscribeStreamUserIds m_subscribeStreamUserIds;
                    bool m_subscribeStreamUserIdsHasBeenSet;

                    /**
                     * Depreciated. The callback URL is configured in the console.
                     */
                    std::string m_sliceCallbackUrl;
                    bool m_sliceCallbackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SLICEPARAMS_H_
