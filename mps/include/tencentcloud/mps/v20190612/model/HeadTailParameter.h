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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_HEADTAILPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_HEADTAILPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Opening and closing credits parameters
                */
                class HeadTailParameter : public AbstractModel
                {
                public:
                    HeadTailParameter();
                    ~HeadTailParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The opening segments.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HeadSet The opening segments.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MediaInputInfo> GetHeadSet() const;

                    /**
                     * 设置The opening segments.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _headSet The opening segments.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHeadSet(const std::vector<MediaInputInfo>& _headSet);

                    /**
                     * 判断参数 HeadSet 是否已赋值
                     * @return HeadSet 是否已赋值
                     * 
                     */
                    bool HeadSetHasBeenSet() const;

                    /**
                     * 获取The closing segments.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TailSet The closing segments.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MediaInputInfo> GetTailSet() const;

                    /**
                     * 设置The closing segments.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tailSet The closing segments.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTailSet(const std::vector<MediaInputInfo>& _tailSet);

                    /**
                     * 判断参数 TailSet 是否已赋值
                     * @return TailSet 是否已赋值
                     * 
                     */
                    bool TailSetHasBeenSet() const;

                private:

                    /**
                     * The opening segments.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaInputInfo> m_headSet;
                    bool m_headSetHasBeenSet;

                    /**
                     * The closing segments.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaInputInfo> m_tailSet;
                    bool m_tailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_HEADTAILPARAMETER_H_
