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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENTRENDSCHART_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENTRENDSCHART_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Attack and defense trend chart on the large screen
                */
                class ScreenTrendsChart : public AbstractModel
                {
                public:
                    ScreenTrendsChart();
                    ~ScreenTrendsChart() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time on the X-axis
                     * @return X Time on the X-axis
                     * 
                     */
                    std::string GetX() const;

                    /**
                     * 设置Time on the X-axis
                     * @param _x Time on the X-axis
                     * 
                     */
                    void SetX(const std::string& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取Numerical value on the Y-axis
                     * @return Y Numerical value on the Y-axis
                     * 
                     */
                    uint64_t GetY() const;

                    /**
                     * 设置Numerical value on the Y-axis
                     * @param _y Numerical value on the Y-axis
                     * 
                     */
                    void SetY(const uint64_t& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取Statistical type: defense count, attack count
                     * @return Type Statistical type: defense count, attack count
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Statistical type: defense count, attack count
                     * @param _type Statistical type: defense count, attack count
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Time on the X-axis
                     */
                    std::string m_x;
                    bool m_xHasBeenSet;

                    /**
                     * Numerical value on the Y-axis
                     */
                    uint64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * Statistical type: defense count, attack count
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENTRENDSCHART_H_
