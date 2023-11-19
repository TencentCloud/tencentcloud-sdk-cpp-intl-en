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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYEVALUATIONCONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYEVALUATIONCONFIGUREINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Control parameters for video quality evaluation.
                */
                class QualityEvaluationConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    QualityEvaluationConfigureInfoForUpdate();
                    ~QualityEvaluationConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video quality evaluation switch, optional values:
<li>ON: enabled;</li>
<li>OFF: disabled.</li>
                     * @return Switch Video quality evaluation switch, optional values:
<li>ON: enabled;</li>
<li>OFF: disabled.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Video quality evaluation switch, optional values:
<li>ON: enabled;</li>
<li>OFF: disabled.</li>
                     * @param _switch Video quality evaluation switch, optional values:
<li>ON: enabled;</li>
<li>OFF: disabled.</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Video quality evaluation filter threshold, the result only returns the time periods lower than this value, the default value is 60.
                     * @return Score Video quality evaluation filter threshold, the result only returns the time periods lower than this value, the default value is 60.
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置Video quality evaluation filter threshold, the result only returns the time periods lower than this value, the default value is 60.
                     * @param _score Video quality evaluation filter threshold, the result only returns the time periods lower than this value, the default value is 60.
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * Video quality evaluation switch, optional values:
<li>ON: enabled;</li>
<li>OFF: disabled.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Video quality evaluation filter threshold, the result only returns the time periods lower than this value, the default value is 60.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYEVALUATIONCONFIGUREINFOFORUPDATE_H_
