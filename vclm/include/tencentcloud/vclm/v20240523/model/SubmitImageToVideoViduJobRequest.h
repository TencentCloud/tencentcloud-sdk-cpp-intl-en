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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITIMAGETOVIDEOVIDUJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITIMAGETOVIDEOVIDUJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * SubmitImageToVideoViduJob request structure.
                */
                class SubmitImageToVideoViduJobRequest : public AbstractModel
                {
                public:
                    SubmitImageToVideoViduJobRequest();
                    ~SubmitImageToVideoViduJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Whether to use recommended prompts, off by default<br>-true: Yes, the system automatically recommends prompts and uses prompt content to generate video. The number of recommended prompts is 1.<br>-false: No, generate video based on input prompt.<br>Note: Each task consumes 1 more point when recommended prompts are enabled.</p>
                     * @return IsRec <p>Whether to use recommended prompts, off by default<br>-true: Yes, the system automatically recommends prompts and uses prompt content to generate video. The number of recommended prompts is 1.<br>-false: No, generate video based on input prompt.<br>Note: Each task consumes 1 more point when recommended prompts are enabled.</p>
                     * 
                     */
                    bool GetIsRec() const;

                    /**
                     * 设置<p>Whether to use recommended prompts, off by default<br>-true: Yes, the system automatically recommends prompts and uses prompt content to generate video. The number of recommended prompts is 1.<br>-false: No, generate video based on input prompt.<br>Note: Each task consumes 1 more point when recommended prompts are enabled.</p>
                     * @param _isRec <p>Whether to use recommended prompts, off by default<br>-true: Yes, the system automatically recommends prompts and uses prompt content to generate video. The number of recommended prompts is 1.<br>-false: No, generate video based on input prompt.<br>Note: Each task consumes 1 more point when recommended prompts are enabled.</p>
                     * 
                     */
                    void SetIsRec(const bool& _isRec);

                    /**
                     * 判断参数 IsRec 是否已赋值
                     * @return IsRec 是否已赋值
                     * 
                     */
                    bool IsRecHasBeenSet() const;

                    /**
                     * 获取<p>Voice type ID<br>Used to determine the voice type in the video. If left empty, the system will automatically recommend. Optional enumerated values reference list: supported timbre list<br>Voice clone functionality is not currently supported</p>
                     * @return VoiceId <p>Voice type ID<br>Used to determine the voice type in the video. If left empty, the system will automatically recommend. Optional enumerated values reference list: supported timbre list<br>Voice clone functionality is not currently supported</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Voice type ID<br>Used to determine the voice type in the video. If left empty, the system will automatically recommend. Optional enumerated values reference list: supported timbre list<br>Voice clone functionality is not currently supported</p>
                     * @param _voiceId <p>Voice type ID<br>Used to determine the voice type in the video. If left empty, the system will automatically recommend. Optional enumerated values reference list: supported timbre list<br>Voice clone functionality is not currently supported</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Exercise range<br>Default: auto, available values: auto, small, medium, large<br>Note: This parameter does not take effect for q2 and q3 series models.</p>
                     * @return MovementAmplitude <p>Exercise range<br>Default: auto, available values: auto, small, medium, large<br>Note: This parameter does not take effect for q2 and q3 series models.</p>
                     * 
                     */
                    std::string GetMovementAmplitude() const;

                    /**
                     * 设置<p>Exercise range<br>Default: auto, available values: auto, small, medium, large<br>Note: This parameter does not take effect for q2 and q3 series models.</p>
                     * @param _movementAmplitude <p>Exercise range<br>Default: auto, available values: auto, small, medium, large<br>Note: This parameter does not take effect for q2 and q3 series models.</p>
                     * 
                     */
                    void SetMovementAmplitude(const std::string& _movementAmplitude);

                    /**
                     * 判断参数 MovementAmplitude 是否已赋值
                     * @return MovementAmplitude 是否已赋值
                     * 
                     */
                    bool MovementAmplitudeHasBeenSet() const;

                    /**
                     * 获取<p>bgm</p>
                     * @return Bgm <p>bgm</p>
                     * 
                     */
                    bool GetBgm() const;

                    /**
                     * 设置<p>bgm</p>
                     * @param _bgm <p>bgm</p>
                     * 
                     */
                    void SetBgm(const bool& _bgm);

                    /**
                     * 判断参数 Bgm 是否已赋值
                     * @return Bgm 是否已赋值
                     * 
                     */
                    bool BgmHasBeenSet() const;

                    /**
                     * 获取<p>Audio type, required when audio is true, default is all<br>Note: This parameter currently only supports audio split for q2, q1, and 2.0 series models</p><p>Enumeration value:</p><ul><li>all: Sound effects + voice</li><li>speech_only: Voice only</li><li>sound_effect_only: Sound effects only</li></ul>
                     * @return AudioType <p>Audio type, required when audio is true, default is all<br>Note: This parameter currently only supports audio split for q2, q1, and 2.0 series models</p><p>Enumeration value:</p><ul><li>all: Sound effects + voice</li><li>speech_only: Voice only</li><li>sound_effect_only: Sound effects only</li></ul>
                     * 
                     */
                    std::string GetAudioType() const;

                    /**
                     * 设置<p>Audio type, required when audio is true, default is all<br>Note: This parameter currently only supports audio split for q2, q1, and 2.0 series models</p><p>Enumeration value:</p><ul><li>all: Sound effects + voice</li><li>speech_only: Voice only</li><li>sound_effect_only: Sound effects only</li></ul>
                     * @param _audioType <p>Audio type, required when audio is true, default is all<br>Note: This parameter currently only supports audio split for q2, q1, and 2.0 series models</p><p>Enumeration value:</p><ul><li>all: Sound effects + voice</li><li>speech_only: Voice only</li><li>sound_effect_only: Sound effects only</li></ul>
                     * 
                     */
                    void SetAudioType(const std::string& _audioType);

                    /**
                     * 判断参数 AudioType 是否已赋值
                     * @return AudioType 是否已赋值
                     * 
                     */
                    bool AudioTypeHasBeenSet() const;

                    /**
                     * 获取<p>Metadata identification, a string in json format, passthrough field. You can customize the format or use the example format, for example:<br>{<br>&quot;Label&quot;: &quot;your_label&quot;,<br>&quot;ContentProducer&quot;: &quot;your_content_producer&quot;,<br>&quot;ContentPropagator&quot;: &quot;your_content_propagator&quot;,<br>&quot;ProduceID&quot;: &quot;your_product_id&quot;,<br>&quot;PropagateID&quot;: &quot;your_propagate_id&quot;,<br>&quot;ReservedCode1&quot;: &quot;your_reserved_code1&quot;,<br>&quot;ReservedCode2&quot;: &quot;your_reserved_code2&quot;<br>}<br>If empty, use the metadata identification generated by vidu by default.</p>
                     * @return MetaData <p>Metadata identification, a string in json format, passthrough field. You can customize the format or use the example format, for example:<br>{<br>&quot;Label&quot;: &quot;your_label&quot;,<br>&quot;ContentProducer&quot;: &quot;your_content_producer&quot;,<br>&quot;ContentPropagator&quot;: &quot;your_content_propagator&quot;,<br>&quot;ProduceID&quot;: &quot;your_product_id&quot;,<br>&quot;PropagateID&quot;: &quot;your_propagate_id&quot;,<br>&quot;ReservedCode1&quot;: &quot;your_reserved_code1&quot;,<br>&quot;ReservedCode2&quot;: &quot;your_reserved_code2&quot;<br>}<br>If empty, use the metadata identification generated by vidu by default.</p>
                     * 
                     */
                    std::string GetMetaData() const;

                    /**
                     * 设置<p>Metadata identification, a string in json format, passthrough field. You can customize the format or use the example format, for example:<br>{<br>&quot;Label&quot;: &quot;your_label&quot;,<br>&quot;ContentProducer&quot;: &quot;your_content_producer&quot;,<br>&quot;ContentPropagator&quot;: &quot;your_content_propagator&quot;,<br>&quot;ProduceID&quot;: &quot;your_product_id&quot;,<br>&quot;PropagateID&quot;: &quot;your_propagate_id&quot;,<br>&quot;ReservedCode1&quot;: &quot;your_reserved_code1&quot;,<br>&quot;ReservedCode2&quot;: &quot;your_reserved_code2&quot;<br>}<br>If empty, use the metadata identification generated by vidu by default.</p>
                     * @param _metaData <p>Metadata identification, a string in json format, passthrough field. You can customize the format or use the example format, for example:<br>{<br>&quot;Label&quot;: &quot;your_label&quot;,<br>&quot;ContentProducer&quot;: &quot;your_content_producer&quot;,<br>&quot;ContentPropagator&quot;: &quot;your_content_propagator&quot;,<br>&quot;ProduceID&quot;: &quot;your_product_id&quot;,<br>&quot;PropagateID&quot;: &quot;your_propagate_id&quot;,<br>&quot;ReservedCode1&quot;: &quot;your_reserved_code1&quot;,<br>&quot;ReservedCode2&quot;: &quot;your_reserved_code2&quot;<br>}<br>If empty, use the metadata identification generated by vidu by default.</p>
                     * 
                     */
                    void SetMetaData(const std::string& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取<p>Callback protocol<br>You need to actively set Callback_url when creating a task. The request method is POST. Upon video generation completion, a Callback request containing the latest task status will be sent to this address. The content structure of the Callback request matches the return format of the query task API.<br>The "status" returned by the Callback includes the following states:</p><ul><li>success Task completed (e.g., if sending fails, Callback three times)</li><li>failed Task failure (e.g., if sending fails, Callback three times)</li></ul>
                     * @return CallbackUrl <p>Callback protocol<br>You need to actively set Callback_url when creating a task. The request method is POST. Upon video generation completion, a Callback request containing the latest task status will be sent to this address. The content structure of the Callback request matches the return format of the query task API.<br>The "status" returned by the Callback includes the following states:</p><ul><li>success Task completed (e.g., if sending fails, Callback three times)</li><li>failed Task failure (e.g., if sending fails, Callback three times)</li></ul>
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>Callback protocol<br>You need to actively set Callback_url when creating a task. The request method is POST. Upon video generation completion, a Callback request containing the latest task status will be sent to this address. The content structure of the Callback request matches the return format of the query task API.<br>The "status" returned by the Callback includes the following states:</p><ul><li>success Task completed (e.g., if sending fails, Callback three times)</li><li>failed Task failure (e.g., if sending fails, Callback three times)</li></ul>
                     * @param _callbackUrl <p>Callback protocol<br>You need to actively set Callback_url when creating a task. The request method is POST. Upon video generation completion, a Callback request containing the latest task status will be sent to this address. The content structure of the Callback request matches the return format of the query task API.<br>The "status" returned by the Callback includes the following states:</p><ul><li>success Task completed (e.g., if sending fails, Callback three times)</li><li>failed Task failure (e.g., if sending fails, Callback three times)</li></ul>
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取<p>Pass-through parameter<br>Without any processing, only data transmission<br>Note: Up to 1048576 characters</p>
                     * @return Payload <p>Pass-through parameter<br>Without any processing, only data transmission<br>Note: Up to 1048576 characters</p>
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置<p>Pass-through parameter<br>Without any processing, only data transmission<br>Note: Up to 1048576 characters</p>
                     * @param _payload <p>Pass-through parameter<br>Without any processing, only data transmission<br>Note: Up to 1048576 characters</p>
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取<p>Off-peak mode, defaults to false. Available values:</p><ul><li>true: Generate video in off-peak mode;</li><li>false: Generate video instantly;<br>Note 1: Off-peak mode consumes lower points.<br>Note 2: Tasks submitted in off-peak mode will be processed within 48 hours. Uncompleted tasks will be canceled automatically, and the points of the task will be returned.</li></ul>
                     * @return OffPeak <p>Off-peak mode, defaults to false. Available values:</p><ul><li>true: Generate video in off-peak mode;</li><li>false: Generate video instantly;<br>Note 1: Off-peak mode consumes lower points.<br>Note 2: Tasks submitted in off-peak mode will be processed within 48 hours. Uncompleted tasks will be canceled automatically, and the points of the task will be returned.</li></ul>
                     * 
                     */
                    bool GetOffPeak() const;

                    /**
                     * 设置<p>Off-peak mode, defaults to false. Available values:</p><ul><li>true: Generate video in off-peak mode;</li><li>false: Generate video instantly;<br>Note 1: Off-peak mode consumes lower points.<br>Note 2: Tasks submitted in off-peak mode will be processed within 48 hours. Uncompleted tasks will be canceled automatically, and the points of the task will be returned.</li></ul>
                     * @param _offPeak <p>Off-peak mode, defaults to false. Available values:</p><ul><li>true: Generate video in off-peak mode;</li><li>false: Generate video instantly;<br>Note 1: Off-peak mode consumes lower points.<br>Note 2: Tasks submitted in off-peak mode will be processed within 48 hours. Uncompleted tasks will be canceled automatically, and the points of the task will be returned.</li></ul>
                     * 
                     */
                    void SetOffPeak(const bool& _offPeak);

                    /**
                     * 判断参数 OffPeak 是否已赋值
                     * @return OffPeak 是否已赋值
                     * 
                     */
                    bool OffPeakHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to use recommended prompts, off by default<br>-true: Yes, the system automatically recommends prompts and uses prompt content to generate video. The number of recommended prompts is 1.<br>-false: No, generate video based on input prompt.<br>Note: Each task consumes 1 more point when recommended prompts are enabled.</p>
                     */
                    bool m_isRec;
                    bool m_isRecHasBeenSet;

                    /**
                     * <p>Voice type ID<br>Used to determine the voice type in the video. If left empty, the system will automatically recommend. Optional enumerated values reference list: supported timbre list<br>Voice clone functionality is not currently supported</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Exercise range<br>Default: auto, available values: auto, small, medium, large<br>Note: This parameter does not take effect for q2 and q3 series models.</p>
                     */
                    std::string m_movementAmplitude;
                    bool m_movementAmplitudeHasBeenSet;

                    /**
                     * <p>bgm</p>
                     */
                    bool m_bgm;
                    bool m_bgmHasBeenSet;

                    /**
                     * <p>Audio type, required when audio is true, default is all<br>Note: This parameter currently only supports audio split for q2, q1, and 2.0 series models</p><p>Enumeration value:</p><ul><li>all: Sound effects + voice</li><li>speech_only: Voice only</li><li>sound_effect_only: Sound effects only</li></ul>
                     */
                    std::string m_audioType;
                    bool m_audioTypeHasBeenSet;

                    /**
                     * <p>Metadata identification, a string in json format, passthrough field. You can customize the format or use the example format, for example:<br>{<br>&quot;Label&quot;: &quot;your_label&quot;,<br>&quot;ContentProducer&quot;: &quot;your_content_producer&quot;,<br>&quot;ContentPropagator&quot;: &quot;your_content_propagator&quot;,<br>&quot;ProduceID&quot;: &quot;your_product_id&quot;,<br>&quot;PropagateID&quot;: &quot;your_propagate_id&quot;,<br>&quot;ReservedCode1&quot;: &quot;your_reserved_code1&quot;,<br>&quot;ReservedCode2&quot;: &quot;your_reserved_code2&quot;<br>}<br>If empty, use the metadata identification generated by vidu by default.</p>
                     */
                    std::string m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * <p>Callback protocol<br>You need to actively set Callback_url when creating a task. The request method is POST. Upon video generation completion, a Callback request containing the latest task status will be sent to this address. The content structure of the Callback request matches the return format of the query task API.<br>The "status" returned by the Callback includes the following states:</p><ul><li>success Task completed (e.g., if sending fails, Callback three times)</li><li>failed Task failure (e.g., if sending fails, Callback three times)</li></ul>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>Pass-through parameter<br>Without any processing, only data transmission<br>Note: Up to 1048576 characters</p>
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * <p>Off-peak mode, defaults to false. Available values:</p><ul><li>true: Generate video in off-peak mode;</li><li>false: Generate video instantly;<br>Note 1: Off-peak mode consumes lower points.<br>Note 2: Tasks submitted in off-peak mode will be processed within 48 hours. Uncompleted tasks will be canceled automatically, and the points of the task will be returned.</li></ul>
                     */
                    bool m_offPeak;
                    bool m_offPeakHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITIMAGETOVIDEOVIDUJOBREQUEST_H_
