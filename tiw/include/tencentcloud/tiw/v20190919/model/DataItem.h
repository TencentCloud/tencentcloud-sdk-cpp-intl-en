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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DATAITEM_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/Detail.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Chart data, including the time, values, and details.
                */
                class DataItem : public AbstractModel
                {
                public:
                    DataItem();
                    ~DataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time. The following formats are supported:
yyyy-mm
yyyy-mm-dd
yyyy-mm-dd HH:MM:SS
                     * @return Time Time. The following formats are supported:
yyyy-mm
yyyy-mm-dd
yyyy-mm-dd HH:MM:SS
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Time. The following formats are supported:
yyyy-mm
yyyy-mm-dd
yyyy-mm-dd HH:MM:SS
                     * @param _time Time. The following formats are supported:
yyyy-mm
yyyy-mm-dd
yyyy-mm-dd HH:MM:SS
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Values required for drawing charts.
                     * @return Value Values required for drawing charts.
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置Values required for drawing charts.
                     * @param _value Values required for drawing charts.
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Details of the values.
                     * @return Details Details of the values.
                     * 
                     */
                    std::vector<Detail> GetDetails() const;

                    /**
                     * 设置Details of the values.
                     * @param _details Details of the values.
                     * 
                     */
                    void SetDetails(const std::vector<Detail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * Time. The following formats are supported:
yyyy-mm
yyyy-mm-dd
yyyy-mm-dd HH:MM:SS
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Values required for drawing charts.
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Details of the values.
                     */
                    std::vector<Detail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DATAITEM_H_
