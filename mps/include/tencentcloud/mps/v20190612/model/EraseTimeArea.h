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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ERASETIMEAREA_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ERASETIMEAREA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/EraseArea.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 
                */
                class EraseTimeArea : public AbstractModel
                {
                public:
                    EraseTimeArea();
                    ~EraseTimeArea() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return BeginMs 
                     * 
                     */
                    uint64_t GetBeginMs() const;

                    /**
                     * 设置
                     * @param _beginMs 
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
                     * 获取
                     * @return EndMs 
                     * 
                     */
                    uint64_t GetEndMs() const;

                    /**
                     * 设置
                     * @param _endMs 
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
                     * 获取
                     * @return Areas 
                     * 
                     */
                    std::vector<EraseArea> GetAreas() const;

                    /**
                     * 设置
                     * @param _areas 
                     * 
                     */
                    void SetAreas(const std::vector<EraseArea>& _areas);

                    /**
                     * 判断参数 Areas 是否已赋值
                     * @return Areas 是否已赋值
                     * 
                     */
                    bool AreasHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_beginMs;
                    bool m_beginMsHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_endMs;
                    bool m_endMsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<EraseArea> m_areas;
                    bool m_areasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ERASETIMEAREA_H_
