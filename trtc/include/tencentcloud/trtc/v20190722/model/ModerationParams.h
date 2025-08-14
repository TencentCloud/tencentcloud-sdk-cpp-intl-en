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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/ModerationSupplierParam.h>
#include <tencentcloud/trtc/v20190722/model/SubscribeModerationUserIds.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Control parameters for cloud moderation.
                */
                class ModerationParams : public AbstractModel
                {
                public:
                    ModerationParams();
                    ~ModerationParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Moderation task type. 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio slicing moderation + video frame extraction moderation; 4: audio stream moderation; 5: audio stream moderation + video frame extraction moderation. The default value is 1. (Support from suppliers is required for stream moderation to take effect.)
                     * @return ModerationType Moderation task type. 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio slicing moderation + video frame extraction moderation; 4: audio stream moderation; 5: audio stream moderation + video frame extraction moderation. The default value is 1. (Support from suppliers is required for stream moderation to take effect.)
                     * 
                     */
                    uint64_t GetModerationType() const;

                    /**
                     * 设置Moderation task type. 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio slicing moderation + video frame extraction moderation; 4: audio stream moderation; 5: audio stream moderation + video frame extraction moderation. The default value is 1. (Support from suppliers is required for stream moderation to take effect.)
                     * @param _moderationType Moderation task type. 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio slicing moderation + video frame extraction moderation; 4: audio stream moderation; 5: audio stream moderation + video frame extraction moderation. The default value is 1. (Support from suppliers is required for stream moderation to take effect.)
                     * 
                     */
                    void SetModerationType(const uint64_t& _moderationType);

                    /**
                     * 判断参数 ModerationType 是否已赋值
                     * @return ModerationType 是否已赋值
                     * 
                     */
                    bool ModerationTypeHasBeenSet() const;

                    /**
                     * 获取Slicing is stopped automatically when there is no user (anchor) performing upstream push in the room for more than MaxIdleTime. Unit: seconds. Default value: 30 seconds. This value needs to be greater than or equal to 5 seconds and less than or equal to 1800 seconds (0.5 hours). Example value: 30.
                     * @return MaxIdleTime Slicing is stopped automatically when there is no user (anchor) performing upstream push in the room for more than MaxIdleTime. Unit: seconds. Default value: 30 seconds. This value needs to be greater than or equal to 5 seconds and less than or equal to 1800 seconds (0.5 hours). Example value: 30.
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置Slicing is stopped automatically when there is no user (anchor) performing upstream push in the room for more than MaxIdleTime. Unit: seconds. Default value: 30 seconds. This value needs to be greater than or equal to 5 seconds and less than or equal to 1800 seconds (0.5 hours). Example value: 30.
                     * @param _maxIdleTime Slicing is stopped automatically when there is no user (anchor) performing upstream push in the room for more than MaxIdleTime. Unit: seconds. Default value: 30 seconds. This value needs to be greater than or equal to 5 seconds and less than or equal to 1800 seconds (0.5 hours). Example value: 30.
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
                     * 获取Interval for video frame extraction. Default value: 5s.
                     * @return SliceVideo Interval for video frame extraction. Default value: 5s.
                     * 
                     */
                    uint64_t GetSliceVideo() const;

                    /**
                     * 设置Interval for video frame extraction. Default value: 5s.
                     * @param _sliceVideo Interval for video frame extraction. Default value: 5s.
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
                     * 获取Enumeration values for suppliers.
tianyu: Tencent Tianyu content security. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
ace: ACE content security. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
shumei: shumei moderation. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
Yidun: NetEase Yidun moderation. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
                     * @return ModerationSupplier Enumeration values for suppliers.
tianyu: Tencent Tianyu content security. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
ace: ACE content security. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
shumei: shumei moderation. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
Yidun: NetEase Yidun moderation. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
                     * 
                     */
                    std::string GetModerationSupplier() const;

                    /**
                     * 设置Enumeration values for suppliers.
tianyu: Tencent Tianyu content security. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
ace: ACE content security. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
shumei: shumei moderation. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
Yidun: NetEase Yidun moderation. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
                     * @param _moderationSupplier Enumeration values for suppliers.
tianyu: Tencent Tianyu content security. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
ace: ACE content security. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
shumei: shumei moderation. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
Yidun: NetEase Yidun moderation. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
                     * 
                     */
                    void SetModerationSupplier(const std::string& _moderationSupplier);

                    /**
                     * 判断参数 ModerationSupplier 是否已赋值
                     * @return ModerationSupplier 是否已赋值
                     * 
                     */
                    bool ModerationSupplierHasBeenSet() const;

                    /**
                     * 获取Configuration information required for submitting content to the third-party moderation supplier.
                     * @return ModerationSupplierParam Configuration information required for submitting content to the third-party moderation supplier.
                     * 
                     */
                    ModerationSupplierParam GetModerationSupplierParam() const;

                    /**
                     * 设置Configuration information required for submitting content to the third-party moderation supplier.
                     * @param _moderationSupplierParam Configuration information required for submitting content to the third-party moderation supplier.
                     * 
                     */
                    void SetModerationSupplierParam(const ModerationSupplierParam& _moderationSupplierParam);

                    /**
                     * 判断参数 ModerationSupplierParam 是否已赋值
                     * @return ModerationSupplierParam 是否已赋值
                     * 
                     */
                    bool ModerationSupplierParamHasBeenSet() const;

                    /**
                     * 获取Whether to save the hit file. 0: not save by default; 1: save.
                     * @return SaveModerationFile Whether to save the hit file. 0: not save by default; 1: save.
                     * 
                     */
                    uint64_t GetSaveModerationFile() const;

                    /**
                     * 设置Whether to save the hit file. 0: not save by default; 1: save.
                     * @param _saveModerationFile Whether to save the hit file. 0: not save by default; 1: save.
                     * 
                     */
                    void SetSaveModerationFile(const uint64_t& _saveModerationFile);

                    /**
                     * 判断参数 SaveModerationFile 是否已赋值
                     * @return SaveModerationFile 是否已赋值
                     * 
                     */
                    bool SaveModerationFileHasBeenSet() const;

                    /**
                     * 获取Whether to call back all moderation results: 0: call back all results by default; 1: only call back hit results.
                     * @return CallbackAllResults Whether to call back all moderation results: 0: call back all results by default; 1: only call back hit results.
                     * 
                     */
                    uint64_t GetCallbackAllResults() const;

                    /**
                     * 设置Whether to call back all moderation results: 0: call back all results by default; 1: only call back hit results.
                     * @param _callbackAllResults Whether to call back all moderation results: 0: call back all results by default; 1: only call back hit results.
                     * 
                     */
                    void SetCallbackAllResults(const uint64_t& _callbackAllResults);

                    /**
                     * 判断参数 CallbackAllResults 是否已赋值
                     * @return CallbackAllResults 是否已赋值
                     * 
                     */
                    bool CallbackAllResultsHasBeenSet() const;

                    /**
                     * 获取Specifies the allowlist or blocklist for the subscription stream.
                     * @return SubscribeStreamUserIds Specifies the allowlist or blocklist for the subscription stream.
                     * 
                     */
                    SubscribeModerationUserIds GetSubscribeStreamUserIds() const;

                    /**
                     * 设置Specifies the allowlist or blocklist for the subscription stream.
                     * @param _subscribeStreamUserIds Specifies the allowlist or blocklist for the subscription stream.
                     * 
                     */
                    void SetSubscribeStreamUserIds(const SubscribeModerationUserIds& _subscribeStreamUserIds);

                    /**
                     * 判断参数 SubscribeStreamUserIds 是否已赋值
                     * @return SubscribeStreamUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeStreamUserIdsHasBeenSet() const;

                private:

                    /**
                     * Moderation task type. 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio slicing moderation + video frame extraction moderation; 4: audio stream moderation; 5: audio stream moderation + video frame extraction moderation. The default value is 1. (Support from suppliers is required for stream moderation to take effect.)
                     */
                    uint64_t m_moderationType;
                    bool m_moderationTypeHasBeenSet;

                    /**
                     * Slicing is stopped automatically when there is no user (anchor) performing upstream push in the room for more than MaxIdleTime. Unit: seconds. Default value: 30 seconds. This value needs to be greater than or equal to 5 seconds and less than or equal to 1800 seconds (0.5 hours). Example value: 30.
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * Audio slicing duration. Default value: 15s. Example value: 15.
                     */
                    uint64_t m_sliceAudio;
                    bool m_sliceAudioHasBeenSet;

                    /**
                     * Interval for video frame extraction. Default value: 5s.
                     */
                    uint64_t m_sliceVideo;
                    bool m_sliceVideoHasBeenSet;

                    /**
                     * Enumeration values for suppliers.
tianyu: Tencent Tianyu content security. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
ace: ACE content security. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
shumei: shumei moderation. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
Yidun: NetEase Yidun moderation. (Valid values: 1: audio slicing moderation; 2: video frame extraction moderation; 3: audio-visual slicing moderation + video frame extraction moderation.)
                     */
                    std::string m_moderationSupplier;
                    bool m_moderationSupplierHasBeenSet;

                    /**
                     * Configuration information required for submitting content to the third-party moderation supplier.
                     */
                    ModerationSupplierParam m_moderationSupplierParam;
                    bool m_moderationSupplierParamHasBeenSet;

                    /**
                     * Whether to save the hit file. 0: not save by default; 1: save.
                     */
                    uint64_t m_saveModerationFile;
                    bool m_saveModerationFileHasBeenSet;

                    /**
                     * Whether to call back all moderation results: 0: call back all results by default; 1: only call back hit results.
                     */
                    uint64_t m_callbackAllResults;
                    bool m_callbackAllResultsHasBeenSet;

                    /**
                     * Specifies the allowlist or blocklist for the subscription stream.
                     */
                    SubscribeModerationUserIds m_subscribeStreamUserIds;
                    bool m_subscribeStreamUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONPARAMS_H_
