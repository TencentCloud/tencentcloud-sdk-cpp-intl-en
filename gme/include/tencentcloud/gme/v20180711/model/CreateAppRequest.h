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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_CREATEAPPREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_CREATEAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/RealtimeSpeechConf.h>
#include <tencentcloud/gme/v20180711/model/VoiceMessageConf.h>
#include <tencentcloud/gme/v20180711/model/VoiceFilterConf.h>
#include <tencentcloud/gme/v20180711/model/AsrConf.h>
#include <tencentcloud/gme/v20180711/model/Tag.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * CreateApp request structure.
                */
                class CreateAppRequest : public AbstractModel
                {
                public:
                    CreateAppRequest();
                    ~CreateAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application name
                     * @return AppName Application name
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Application name
                     * @param _appName Application name
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud project ID. Default value: 0, which means that the default project is used.
                     * @return ProjectId Tencent Cloud project ID. Default value: 0, which means that the default project is used.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Tencent Cloud project ID. Default value: 0, which means that the default project is used.
                     * @param _projectId Tencent Cloud project ID. Default value: 0, which means that the default project is used.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取List of engines to be supported.
Valid values: `android`, `ios`, `unity`, `cocos`, `unreal`, `windows`. All values are selected by default.
                     * @return EngineList List of engines to be supported.
Valid values: `android`, `ios`, `unity`, `cocos`, `unreal`, `windows`. All values are selected by default.
                     * 
                     */
                    std::vector<std::string> GetEngineList() const;

                    /**
                     * 设置List of engines to be supported.
Valid values: `android`, `ios`, `unity`, `cocos`, `unreal`, `windows`. All values are selected by default.
                     * @param _engineList List of engines to be supported.
Valid values: `android`, `ios`, `unity`, `cocos`, `unreal`, `windows`. All values are selected by default.
                     * 
                     */
                    void SetEngineList(const std::vector<std::string>& _engineList);

                    /**
                     * 判断参数 EngineList 是否已赋值
                     * @return EngineList 是否已赋值
                     * 
                     */
                    bool EngineListHasBeenSet() const;

                    /**
                     * 获取List of regions.
Valid values: `mainland` (Chinese mainland), `hmt` (Hong Kong, Macao and Taiwan (China)), `sea` (Southeast Asia), `na` (North America), `eu` (Europe), `jpkr` (Japan, Korea and Asia Pacific), `sa` (South America), `oc` (Oceania), `me` (Middle East). All values are selected by default.
                     * @return RegionList List of regions.
Valid values: `mainland` (Chinese mainland), `hmt` (Hong Kong, Macao and Taiwan (China)), `sea` (Southeast Asia), `na` (North America), `eu` (Europe), `jpkr` (Japan, Korea and Asia Pacific), `sa` (South America), `oc` (Oceania), `me` (Middle East). All values are selected by default.
                     * 
                     */
                    std::vector<std::string> GetRegionList() const;

                    /**
                     * 设置List of regions.
Valid values: `mainland` (Chinese mainland), `hmt` (Hong Kong, Macao and Taiwan (China)), `sea` (Southeast Asia), `na` (North America), `eu` (Europe), `jpkr` (Japan, Korea and Asia Pacific), `sa` (South America), `oc` (Oceania), `me` (Middle East). All values are selected by default.
                     * @param _regionList List of regions.
Valid values: `mainland` (Chinese mainland), `hmt` (Hong Kong, Macao and Taiwan (China)), `sea` (Southeast Asia), `na` (North America), `eu` (Europe), `jpkr` (Japan, Korea and Asia Pacific), `sa` (South America), `oc` (Oceania), `me` (Middle East). All values are selected by default.
                     * 
                     */
                    void SetRegionList(const std::vector<std::string>& _regionList);

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                    /**
                     * 获取Configuration information of Voice Chat
                     * @return RealtimeSpeechConf Configuration information of Voice Chat
                     * 
                     */
                    RealtimeSpeechConf GetRealtimeSpeechConf() const;

                    /**
                     * 设置Configuration information of Voice Chat
                     * @param _realtimeSpeechConf Configuration information of Voice Chat
                     * 
                     */
                    void SetRealtimeSpeechConf(const RealtimeSpeechConf& _realtimeSpeechConf);

                    /**
                     * 判断参数 RealtimeSpeechConf 是否已赋值
                     * @return RealtimeSpeechConf 是否已赋值
                     * 
                     */
                    bool RealtimeSpeechConfHasBeenSet() const;

                    /**
                     * 获取Configuration information of Voice Messaging
                     * @return VoiceMessageConf Configuration information of Voice Messaging
                     * 
                     */
                    VoiceMessageConf GetVoiceMessageConf() const;

                    /**
                     * 设置Configuration information of Voice Messaging
                     * @param _voiceMessageConf Configuration information of Voice Messaging
                     * 
                     */
                    void SetVoiceMessageConf(const VoiceMessageConf& _voiceMessageConf);

                    /**
                     * 判断参数 VoiceMessageConf 是否已赋值
                     * @return VoiceMessageConf 是否已赋值
                     * 
                     */
                    bool VoiceMessageConfHasBeenSet() const;

                    /**
                     * 获取Configuration information of Voice Analysis Service
                     * @return VoiceFilterConf Configuration information of Voice Analysis Service
                     * 
                     */
                    VoiceFilterConf GetVoiceFilterConf() const;

                    /**
                     * 设置Configuration information of Voice Analysis Service
                     * @param _voiceFilterConf Configuration information of Voice Analysis Service
                     * 
                     */
                    void SetVoiceFilterConf(const VoiceFilterConf& _voiceFilterConf);

                    /**
                     * 判断参数 VoiceFilterConf 是否已赋值
                     * @return VoiceFilterConf 是否已赋值
                     * 
                     */
                    bool VoiceFilterConfHasBeenSet() const;

                    /**
                     * 获取Configuration information of Speech-to-Text
                     * @return AsrConf Configuration information of Speech-to-Text
                     * 
                     */
                    AsrConf GetAsrConf() const;

                    /**
                     * 设置Configuration information of Speech-to-Text
                     * @param _asrConf Configuration information of Speech-to-Text
                     * 
                     */
                    void SetAsrConf(const AsrConf& _asrConf);

                    /**
                     * 判断参数 AsrConf 是否已赋值
                     * @return AsrConf 是否已赋值
                     * 
                     */
                    bool AsrConfHasBeenSet() const;

                    /**
                     * 获取List of tags to be added
                     * @return Tags List of tags to be added
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags to be added
                     * @param _tags List of tags to be added
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Application name
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Tencent Cloud project ID. Default value: 0, which means that the default project is used.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * List of engines to be supported.
Valid values: `android`, `ios`, `unity`, `cocos`, `unreal`, `windows`. All values are selected by default.
                     */
                    std::vector<std::string> m_engineList;
                    bool m_engineListHasBeenSet;

                    /**
                     * List of regions.
Valid values: `mainland` (Chinese mainland), `hmt` (Hong Kong, Macao and Taiwan (China)), `sea` (Southeast Asia), `na` (North America), `eu` (Europe), `jpkr` (Japan, Korea and Asia Pacific), `sa` (South America), `oc` (Oceania), `me` (Middle East). All values are selected by default.
                     */
                    std::vector<std::string> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * Configuration information of Voice Chat
                     */
                    RealtimeSpeechConf m_realtimeSpeechConf;
                    bool m_realtimeSpeechConfHasBeenSet;

                    /**
                     * Configuration information of Voice Messaging
                     */
                    VoiceMessageConf m_voiceMessageConf;
                    bool m_voiceMessageConfHasBeenSet;

                    /**
                     * Configuration information of Voice Analysis Service
                     */
                    VoiceFilterConf m_voiceFilterConf;
                    bool m_voiceFilterConfHasBeenSet;

                    /**
                     * Configuration information of Speech-to-Text
                     */
                    AsrConf m_asrConf;
                    bool m_asrConfHasBeenSet;

                    /**
                     * List of tags to be added
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_CREATEAPPREQUEST_H_
