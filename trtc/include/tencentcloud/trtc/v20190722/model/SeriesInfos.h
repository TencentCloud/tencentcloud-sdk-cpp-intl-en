/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SERIESINFOS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SERIESINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/RowValues.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * SeriesInfos type
                */
                class SeriesInfos : public AbstractModel
                {
                public:
                    SeriesInfos();
                    ~SeriesInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data columns
                     * @return Columns Data columns
                     * 
                     */
                    std::vector<std::string> GetColumns() const;

                    /**
                     * 设置Data columns
                     * @param _columns Data columns
                     * 
                     */
                    void SetColumns(const std::vector<std::string>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取Data values
                     * @return Values Data values
                     * 
                     */
                    std::vector<RowValues> GetValues() const;

                    /**
                     * 设置Data values
                     * @param _values Data values
                     * 
                     */
                    void SetValues(const std::vector<RowValues>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Data columns
                     */
                    std::vector<std::string> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * Data values
                     */
                    std::vector<RowValues> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SERIESINFOS_H_
