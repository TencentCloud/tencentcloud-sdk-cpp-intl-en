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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_RESOLUTIONNAMEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_RESOLUTIONNAMEINFO_H_

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
                * Player substream name information
                */
                class ResolutionNameInfo : public AbstractModel
                {
                public:
                    ResolutionNameInfo();
                    ~ResolutionNameInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Length of video short side in px.
                     * @return MinEdgeLength Length of video short side in px.
                     * 
                     */
                    uint64_t GetMinEdgeLength() const;

                    /**
                     * 设置Length of video short side in px.
                     * @param _minEdgeLength Length of video short side in px.
                     * 
                     */
                    void SetMinEdgeLength(const uint64_t& _minEdgeLength);

                    /**
                     * 判断参数 MinEdgeLength 是否已赋值
                     * @return MinEdgeLength 是否已赋值
                     * 
                     */
                    bool MinEdgeLengthHasBeenSet() const;

                    /**
                     * 获取Display name.
                     * @return Name Display name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Display name.
                     * @param _name Display name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Length of video short side in px.
                     */
                    uint64_t m_minEdgeLength;
                    bool m_minEdgeLengthHasBeenSet;

                    /**
                     * Display name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_RESOLUTIONNAMEINFO_H_
