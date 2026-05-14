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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_POSITION_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_POSITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Node location information
                */
                class Position : public AbstractModel
                {
                public:
                    Position();
                    ~Position() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node horizontal coordinate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return X Node horizontal coordinate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetX() const;

                    /**
                     * 设置Node horizontal coordinate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _x Node horizontal coordinate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetX(const double& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取Node vertical coordinate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Y Node vertical coordinate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetY() const;

                    /**
                     * 设置Node vertical coordinate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _y Node vertical coordinate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetY(const double& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                private:

                    /**
                     * Node horizontal coordinate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_x;
                    bool m_xHasBeenSet;

                    /**
                     * Node vertical coordinate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_y;
                    bool m_yHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_POSITION_H_
