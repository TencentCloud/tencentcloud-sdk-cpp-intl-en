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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_RECORDCONTROL_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_RECORDCONTROL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/StreamControl.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * It specifies the global recording parameters and the recording parameters over a specific stream. For example, you can specify the streams you want to record and whether to record low-resolution videos only.
                */
                class RecordControl : public AbstractModel
                {
                public:
                    RecordControl();
                    ~RecordControl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取It specifies whether to enable RecordControl. Valid values: true (yes); false (no).
                     * @return Enabled It specifies whether to enable RecordControl. Valid values: true (yes); false (no).
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置It specifies whether to enable RecordControl. Valid values: true (yes); false (no).
                     * @param _enabled It specifies whether to enable RecordControl. Valid values: true (yes); false (no).
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取A global parameter generally used in conjunction with `StreamControls` that specifies whether to disable recording. Valid values:

true: no stream is recorded.
false: all streams are recorded. Default value: false.

The setting in this parameter is applied to all streams. However, if `StreamControls` is passed in, the parameters in `StreamControls` will take precedence.
                     * @return DisableRecord A global parameter generally used in conjunction with `StreamControls` that specifies whether to disable recording. Valid values:

true: no stream is recorded.
false: all streams are recorded. Default value: false.

The setting in this parameter is applied to all streams. However, if `StreamControls` is passed in, the parameters in `StreamControls` will take precedence.
                     * 
                     */
                    bool GetDisableRecord() const;

                    /**
                     * 设置A global parameter generally used in conjunction with `StreamControls` that specifies whether to disable recording. Valid values:

true: no stream is recorded.
false: all streams are recorded. Default value: false.

The setting in this parameter is applied to all streams. However, if `StreamControls` is passed in, the parameters in `StreamControls` will take precedence.
                     * @param _disableRecord A global parameter generally used in conjunction with `StreamControls` that specifies whether to disable recording. Valid values:

true: no stream is recorded.
false: all streams are recorded. Default value: false.

The setting in this parameter is applied to all streams. However, if `StreamControls` is passed in, the parameters in `StreamControls` will take precedence.
                     * 
                     */
                    void SetDisableRecord(const bool& _disableRecord);

                    /**
                     * 判断参数 DisableRecord 是否已赋值
                     * @return DisableRecord 是否已赋值
                     * 
                     */
                    bool DisableRecordHasBeenSet() const;

                    /**
                     * 获取A global parameter generally used in conjunction with `StreamControls` that specifies whether to disable audio recording over all streams. Valid values:

true: no audio recording of any streams.
false: audio recording of all streams. Default value: false.

The setting in this parameter is applied to all streams. However, if `StreamControls` is passed in, the parameters in `StreamControls` will take precedence.
                     * @return DisableAudio A global parameter generally used in conjunction with `StreamControls` that specifies whether to disable audio recording over all streams. Valid values:

true: no audio recording of any streams.
false: audio recording of all streams. Default value: false.

The setting in this parameter is applied to all streams. However, if `StreamControls` is passed in, the parameters in `StreamControls` will take precedence.
                     * 
                     */
                    bool GetDisableAudio() const;

                    /**
                     * 设置A global parameter generally used in conjunction with `StreamControls` that specifies whether to disable audio recording over all streams. Valid values:

true: no audio recording of any streams.
false: audio recording of all streams. Default value: false.

The setting in this parameter is applied to all streams. However, if `StreamControls` is passed in, the parameters in `StreamControls` will take precedence.
                     * @param _disableAudio A global parameter generally used in conjunction with `StreamControls` that specifies whether to disable audio recording over all streams. Valid values:

true: no audio recording of any streams.
false: audio recording of all streams. Default value: false.

The setting in this parameter is applied to all streams. However, if `StreamControls` is passed in, the parameters in `StreamControls` will take precedence.
                     * 
                     */
                    void SetDisableAudio(const bool& _disableAudio);

                    /**
                     * 判断参数 DisableAudio 是否已赋值
                     * @return DisableAudio 是否已赋值
                     * 
                     */
                    bool DisableAudioHasBeenSet() const;

                    /**
                     * 获取A global parameter generally used in conjunction with `StreamControls` that specifies whether to record low-resolution videos only. Valid values:

true: only records low-resolution videos for all streams. Please ensure that the up-streaming end pushes the low-resolution videos. Otherwise, the recorded video may be black.
false: high-resolution video recording of all streams. Default value: false.

The setting in this parameter is applied to all streams. However, if `StreamControls` is passed in, the parameters in `StreamControls` will take precedence.
                     * @return PullSmallVideo A global parameter generally used in conjunction with `StreamControls` that specifies whether to record low-resolution videos only. Valid values:

true: only records low-resolution videos for all streams. Please ensure that the up-streaming end pushes the low-resolution videos. Otherwise, the recorded video may be black.
false: high-resolution video recording of all streams. Default value: false.

The setting in this parameter is applied to all streams. However, if `StreamControls` is passed in, the parameters in `StreamControls` will take precedence.
                     * 
                     */
                    bool GetPullSmallVideo() const;

                    /**
                     * 设置A global parameter generally used in conjunction with `StreamControls` that specifies whether to record low-resolution videos only. Valid values:

true: only records low-resolution videos for all streams. Please ensure that the up-streaming end pushes the low-resolution videos. Otherwise, the recorded video may be black.
false: high-resolution video recording of all streams. Default value: false.

The setting in this parameter is applied to all streams. However, if `StreamControls` is passed in, the parameters in `StreamControls` will take precedence.
                     * @param _pullSmallVideo A global parameter generally used in conjunction with `StreamControls` that specifies whether to record low-resolution videos only. Valid values:

true: only records low-resolution videos for all streams. Please ensure that the up-streaming end pushes the low-resolution videos. Otherwise, the recorded video may be black.
false: high-resolution video recording of all streams. Default value: false.

The setting in this parameter is applied to all streams. However, if `StreamControls` is passed in, the parameters in `StreamControls` will take precedence.
                     * 
                     */
                    void SetPullSmallVideo(const bool& _pullSmallVideo);

                    /**
                     * 判断参数 PullSmallVideo 是否已赋值
                     * @return PullSmallVideo 是否已赋值
                     * 
                     */
                    bool PullSmallVideoHasBeenSet() const;

                    /**
                     * 获取Parameters over specific streams, which take priority over global configurations. If it’s empty, all streams are recorded according to the global configurations. 
                     * @return StreamControls Parameters over specific streams, which take priority over global configurations. If it’s empty, all streams are recorded according to the global configurations. 
                     * 
                     */
                    std::vector<StreamControl> GetStreamControls() const;

                    /**
                     * 设置Parameters over specific streams, which take priority over global configurations. If it’s empty, all streams are recorded according to the global configurations. 
                     * @param _streamControls Parameters over specific streams, which take priority over global configurations. If it’s empty, all streams are recorded according to the global configurations. 
                     * 
                     */
                    void SetStreamControls(const std::vector<StreamControl>& _streamControls);

                    /**
                     * 判断参数 StreamControls 是否已赋值
                     * @return StreamControls 是否已赋值
                     * 
                     */
                    bool StreamControlsHasBeenSet() const;

                private:

                    /**
                     * It specifies whether to enable RecordControl. Valid values: true (yes); false (no).
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * A global parameter generally used in conjunction with `StreamControls` that specifies whether to disable recording. Valid values:

true: no stream is recorded.
false: all streams are recorded. Default value: false.

The setting in this parameter is applied to all streams. However, if `StreamControls` is passed in, the parameters in `StreamControls` will take precedence.
                     */
                    bool m_disableRecord;
                    bool m_disableRecordHasBeenSet;

                    /**
                     * A global parameter generally used in conjunction with `StreamControls` that specifies whether to disable audio recording over all streams. Valid values:

true: no audio recording of any streams.
false: audio recording of all streams. Default value: false.

The setting in this parameter is applied to all streams. However, if `StreamControls` is passed in, the parameters in `StreamControls` will take precedence.
                     */
                    bool m_disableAudio;
                    bool m_disableAudioHasBeenSet;

                    /**
                     * A global parameter generally used in conjunction with `StreamControls` that specifies whether to record low-resolution videos only. Valid values:

true: only records low-resolution videos for all streams. Please ensure that the up-streaming end pushes the low-resolution videos. Otherwise, the recorded video may be black.
false: high-resolution video recording of all streams. Default value: false.

The setting in this parameter is applied to all streams. However, if `StreamControls` is passed in, the parameters in `StreamControls` will take precedence.
                     */
                    bool m_pullSmallVideo;
                    bool m_pullSmallVideoHasBeenSet;

                    /**
                     * Parameters over specific streams, which take priority over global configurations. If it’s empty, all streams are recorded according to the global configurations. 
                     */
                    std::vector<StreamControl> m_streamControls;
                    bool m_streamControlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_RECORDCONTROL_H_
