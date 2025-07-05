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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_SLATEINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_SLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Channel linear assembly channel spacer configuration.
                */
                class SlateInfo : public AbstractModel
                {
                public:
                    SlateInfo();
                    ~SlateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the source location.
                     * @return SourceLocationId The ID of the source location.
                     * 
                     */
                    std::string GetSourceLocationId() const;

                    /**
                     * 设置The ID of the source location.
                     * @param _sourceLocationId The ID of the source location.
                     * 
                     */
                    void SetSourceLocationId(const std::string& _sourceLocationId);

                    /**
                     * 判断参数 SourceLocationId 是否已赋值
                     * @return SourceLocationId 是否已赋值
                     * 
                     */
                    bool SourceLocationIdHasBeenSet() const;

                    /**
                     * 获取The corresponding vod shim content source name.
                     * @return VodSourceName The corresponding vod shim content source name.
                     * 
                     */
                    std::string GetVodSourceName() const;

                    /**
                     * 设置The corresponding vod shim content source name.
                     * @param _vodSourceName The corresponding vod shim content source name.
                     * 
                     */
                    void SetVodSourceName(const std::string& _vodSourceName);

                    /**
                     * 判断参数 VodSourceName 是否已赋值
                     * @return VodSourceName 是否已赋值
                     * 
                     */
                    bool VodSourceNameHasBeenSet() const;

                private:

                    /**
                     * The ID of the source location.
                     */
                    std::string m_sourceLocationId;
                    bool m_sourceLocationIdHasBeenSet;

                    /**
                     * The corresponding vod shim content source name.
                     */
                    std::string m_vodSourceName;
                    bool m_vodSourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_SLATEINFO_H_
