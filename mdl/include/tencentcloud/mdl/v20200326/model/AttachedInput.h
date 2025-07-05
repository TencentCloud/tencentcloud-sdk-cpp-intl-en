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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_ATTACHEDINPUT_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_ATTACHEDINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/AudioSelectorInfo.h>
#include <tencentcloud/mdl/v20200326/model/FailOverSettings.h>
#include <tencentcloud/mdl/v20200326/model/CaptionSelector.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Channel-associated input
                */
                class AttachedInput : public AbstractModel
                {
                public:
                    AttachedInput();
                    ~AttachedInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input ID
                     * @return Id Input ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Input ID
                     * @param _id Input ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Audio selector for the input. There can be 0 to 20 audio selectors.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return AudioSelectors Audio selector for the input. There can be 0 to 20 audio selectors.
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<AudioSelectorInfo> GetAudioSelectors() const;

                    /**
                     * 设置Audio selector for the input. There can be 0 to 20 audio selectors.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _audioSelectors Audio selector for the input. There can be 0 to 20 audio selectors.
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetAudioSelectors(const std::vector<AudioSelectorInfo>& _audioSelectors);

                    /**
                     * 判断参数 AudioSelectors 是否已赋值
                     * @return AudioSelectors 是否已赋值
                     * 
                     */
                    bool AudioSelectorsHasBeenSet() const;

                    /**
                     * 获取Pull mode. If the input type is `HLS_PULL` or `MP4_PULL`, you can set this parameter to `LOOP` or `ONCE`. `LOOP` is the default value.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return PullBehavior Pull mode. If the input type is `HLS_PULL` or `MP4_PULL`, you can set this parameter to `LOOP` or `ONCE`. `LOOP` is the default value.
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetPullBehavior() const;

                    /**
                     * 设置Pull mode. If the input type is `HLS_PULL` or `MP4_PULL`, you can set this parameter to `LOOP` or `ONCE`. `LOOP` is the default value.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _pullBehavior Pull mode. If the input type is `HLS_PULL` or `MP4_PULL`, you can set this parameter to `LOOP` or `ONCE`. `LOOP` is the default value.
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetPullBehavior(const std::string& _pullBehavior);

                    /**
                     * 判断参数 PullBehavior 是否已赋值
                     * @return PullBehavior 是否已赋值
                     * 
                     */
                    bool PullBehaviorHasBeenSet() const;

                    /**
                     * 获取Input failover configuration
Note: this field may return `null`, indicating that no valid value was found.
                     * @return FailOverSettings Input failover configuration
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    FailOverSettings GetFailOverSettings() const;

                    /**
                     * 设置Input failover configuration
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _failOverSettings Input failover configuration
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetFailOverSettings(const FailOverSettings& _failOverSettings);

                    /**
                     * 判断参数 FailOverSettings 是否已赋值
                     * @return FailOverSettings 是否已赋值
                     * 
                     */
                    bool FailOverSettingsHasBeenSet() const;

                    /**
                     * 获取Caption selector for the input. There can be 0 to 1 audio selectors.
                     * @return CaptionSelectors Caption selector for the input. There can be 0 to 1 audio selectors.
                     * 
                     */
                    std::vector<CaptionSelector> GetCaptionSelectors() const;

                    /**
                     * 设置Caption selector for the input. There can be 0 to 1 audio selectors.
                     * @param _captionSelectors Caption selector for the input. There can be 0 to 1 audio selectors.
                     * 
                     */
                    void SetCaptionSelectors(const std::vector<CaptionSelector>& _captionSelectors);

                    /**
                     * 判断参数 CaptionSelectors 是否已赋值
                     * @return CaptionSelectors 是否已赋值
                     * 
                     */
                    bool CaptionSelectorsHasBeenSet() const;

                private:

                    /**
                     * Input ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Audio selector for the input. There can be 0 to 20 audio selectors.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<AudioSelectorInfo> m_audioSelectors;
                    bool m_audioSelectorsHasBeenSet;

                    /**
                     * Pull mode. If the input type is `HLS_PULL` or `MP4_PULL`, you can set this parameter to `LOOP` or `ONCE`. `LOOP` is the default value.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_pullBehavior;
                    bool m_pullBehaviorHasBeenSet;

                    /**
                     * Input failover configuration
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    FailOverSettings m_failOverSettings;
                    bool m_failOverSettingsHasBeenSet;

                    /**
                     * Caption selector for the input. There can be 0 to 1 audio selectors.
                     */
                    std::vector<CaptionSelector> m_captionSelectors;
                    bool m_captionSelectorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_ATTACHEDINPUT_H_
