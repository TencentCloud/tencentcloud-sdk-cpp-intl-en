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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_VOICEFILTERCONF_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_VOICEFILTERCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/SceneInfo.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * Configuration information of Phrase Filtering
                */
                class VoiceFilterConf : public AbstractModel
                {
                public:
                    VoiceFilterConf();
                    ~VoiceFilterConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Phrase Filtering status. Valid values: `open`, `close`.
                     * @return Status Phrase Filtering status. Valid values: `open`, `close`.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Phrase Filtering status. Valid values: `open`, `close`.
                     * @param _status Phrase Filtering status. Valid values: `open`, `close`.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Scenario configuration information, such as status and callback URL.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SceneInfos Scenario configuration information, such as status and callback URL.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SceneInfo> GetSceneInfos() const;

                    /**
                     * 设置Scenario configuration information, such as status and callback URL.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _sceneInfos Scenario configuration information, such as status and callback URL.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSceneInfos(const std::vector<SceneInfo>& _sceneInfos);

                    /**
                     * 判断参数 SceneInfos 是否已赋值
                     * @return SceneInfos 是否已赋值
                     * 
                     */
                    bool SceneInfosHasBeenSet() const;

                private:

                    /**
                     * Phrase Filtering status. Valid values: `open`, `close`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Scenario configuration information, such as status and callback URL.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<SceneInfo> m_sceneInfos;
                    bool m_sceneInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_VOICEFILTERCONF_H_
