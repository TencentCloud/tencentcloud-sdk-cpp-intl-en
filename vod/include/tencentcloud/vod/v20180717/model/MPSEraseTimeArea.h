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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSERASETIMEAREA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSERASETIMEAREA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSEraseArea.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Intelligent erasure, specify region configuration.
Perform erasure directly in the designated region within a specified period.
When both BeginMs and EndMs are set to 0, directly perform erase on the designated region in the entire video.
                */
                class MPSEraseTimeArea : public AbstractModel
                {
                public:
                    MPSEraseTimeArea();
                    ~MPSEraseTimeArea() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Start time, unit: ms</p>
                     * @return BeginMs <p>Start time, unit: ms</p>
                     * 
                     */
                    uint64_t GetBeginMs() const;

                    /**
                     * 设置<p>Start time, unit: ms</p>
                     * @param _beginMs <p>Start time, unit: ms</p>
                     * 
                     */
                    void SetBeginMs(const uint64_t& _beginMs);

                    /**
                     * 判断参数 BeginMs 是否已赋值
                     * @return BeginMs 是否已赋值
                     * 
                     */
                    bool BeginMsHasBeenSet() const;

                    /**
                     * 获取<p>End time, unit: ms</p>
                     * @return EndMs <p>End time, unit: ms</p>
                     * 
                     */
                    uint64_t GetEndMs() const;

                    /**
                     * 设置<p>End time, unit: ms</p>
                     * @param _endMs <p>End time, unit: ms</p>
                     * 
                     */
                    void SetEndMs(const uint64_t& _endMs);

                    /**
                     * 判断参数 EndMs 是否已赋值
                     * @return EndMs 是否已赋值
                     * 
                     */
                    bool EndMsHasBeenSet() const;

                    /**
                     * 获取<p>Domain list for erasure within the period</p>
                     * @return Areas <p>Domain list for erasure within the period</p>
                     * 
                     */
                    std::vector<MPSEraseArea> GetAreas() const;

                    /**
                     * 设置<p>Domain list for erasure within the period</p>
                     * @param _areas <p>Domain list for erasure within the period</p>
                     * 
                     */
                    void SetAreas(const std::vector<MPSEraseArea>& _areas);

                    /**
                     * 判断参数 Areas 是否已赋值
                     * @return Areas 是否已赋值
                     * 
                     */
                    bool AreasHasBeenSet() const;

                private:

                    /**
                     * <p>Start time, unit: ms</p>
                     */
                    uint64_t m_beginMs;
                    bool m_beginMsHasBeenSet;

                    /**
                     * <p>End time, unit: ms</p>
                     */
                    uint64_t m_endMs;
                    bool m_endMsHasBeenSet;

                    /**
                     * <p>Domain list for erasure within the period</p>
                     */
                    std::vector<MPSEraseArea> m_areas;
                    bool m_areasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSERASETIMEAREA_H_
