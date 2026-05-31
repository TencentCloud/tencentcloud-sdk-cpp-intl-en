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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_SOURCELAYOUT_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_SOURCELAYOUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * SourceLayout
                */
                class SourceLayout : public AbstractModel
                {
                public:
                    SourceLayout();
                    ~SourceLayout() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return LeftOffset 
                     * 
                     */
                    uint64_t GetLeftOffset() const;

                    /**
                     * 设置
                     * @param _leftOffset 
                     * 
                     */
                    void SetLeftOffset(const uint64_t& _leftOffset);

                    /**
                     * 判断参数 LeftOffset 是否已赋值
                     * @return LeftOffset 是否已赋值
                     * 
                     */
                    bool LeftOffsetHasBeenSet() const;

                    /**
                     * 获取
                     * @return RightOffset 
                     * 
                     */
                    uint64_t GetRightOffset() const;

                    /**
                     * 设置
                     * @param _rightOffset 
                     * 
                     */
                    void SetRightOffset(const uint64_t& _rightOffset);

                    /**
                     * 判断参数 RightOffset 是否已赋值
                     * @return RightOffset 是否已赋值
                     * 
                     */
                    bool RightOffsetHasBeenSet() const;

                    /**
                     * 获取
                     * @return BottomOffset 
                     * 
                     */
                    uint64_t GetBottomOffset() const;

                    /**
                     * 设置
                     * @param _bottomOffset 
                     * 
                     */
                    void SetBottomOffset(const uint64_t& _bottomOffset);

                    /**
                     * 判断参数 BottomOffset 是否已赋值
                     * @return BottomOffset 是否已赋值
                     * 
                     */
                    bool BottomOffsetHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_leftOffset;
                    bool m_leftOffsetHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_rightOffset;
                    bool m_rightOffsetHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_bottomOffset;
                    bool m_bottomOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_SOURCELAYOUT_H_
