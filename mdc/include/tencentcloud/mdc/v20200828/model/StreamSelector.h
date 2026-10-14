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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_STREAMSELECTOR_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_STREAMSELECTOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/PidSelector.h>
#include <tencentcloud/mdc/v20200828/model/TrackSelector.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * Select the specified audio track or video output
                */
                class StreamSelector : public AbstractModel
                {
                public:
                    StreamSelector();
                    ~StreamSelector() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Selection type: PID | TRACK
                     * @return SelectorType Selection type: PID | TRACK
                     * 
                     */
                    std::string GetSelectorType() const;

                    /**
                     * 设置Selection type: PID | TRACK
                     * @param _selectorType Selection type: PID | TRACK
                     * 
                     */
                    void SetSelectorType(const std::string& _selectorType);

                    /**
                     * 判断参数 SelectorType 是否已赋值
                     * @return SelectorType 是否已赋值
                     * 
                     */
                    bool SelectorTypeHasBeenSet() const;

                    /**
                     * 获取Based on the PID configuration selector
                     * @return PidSelector Based on the PID configuration selector
                     * 
                     */
                    PidSelector GetPidSelector() const;

                    /**
                     * 设置Based on the PID configuration selector
                     * @param _pidSelector Based on the PID configuration selector
                     * 
                     */
                    void SetPidSelector(const PidSelector& _pidSelector);

                    /**
                     * 判断参数 PidSelector 是否已赋值
                     * @return PidSelector 是否已赋值
                     * 
                     */
                    bool PidSelectorHasBeenSet() const;

                    /**
                     * 获取Select a selector based on the Track configuration
                     * @return TrackSelector Select a selector based on the Track configuration
                     * 
                     */
                    TrackSelector GetTrackSelector() const;

                    /**
                     * 设置Select a selector based on the Track configuration
                     * @param _trackSelector Select a selector based on the Track configuration
                     * 
                     */
                    void SetTrackSelector(const TrackSelector& _trackSelector);

                    /**
                     * 判断参数 TrackSelector 是否已赋值
                     * @return TrackSelector 是否已赋值
                     * 
                     */
                    bool TrackSelectorHasBeenSet() const;

                private:

                    /**
                     * Selection type: PID | TRACK
                     */
                    std::string m_selectorType;
                    bool m_selectorTypeHasBeenSet;

                    /**
                     * Based on the PID configuration selector
                     */
                    PidSelector m_pidSelector;
                    bool m_pidSelectorHasBeenSet;

                    /**
                     * Select a selector based on the Track configuration
                     */
                    TrackSelector m_trackSelector;
                    bool m_trackSelectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_STREAMSELECTOR_H_
