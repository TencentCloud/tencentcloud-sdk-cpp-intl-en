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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TABLEINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/TableCellInfo.h>
#include <tencentcloud/ocr/v20181119/model/Coord.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Recognized table information
                */
                class TableInfo : public AbstractModel
                {
                public:
                    TableInfo();
                    ~TableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cell content
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return Cells Cell content
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TableCellInfo> GetCells() const;

                    /**
                     * 设置Cell content
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @param _cells Cell content
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCells(const std::vector<TableCellInfo>& _cells);

                    /**
                     * 判断参数 Cells 是否已赋值
                     * @return Cells 是否已赋值
                     * 
                     */
                    bool CellsHasBeenSet() const;

                    /**
                     * 获取Type of text in the image. Valid values:
0: Non-table text
1: Text in a bordered table
2: Text in a borderless table
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return Type Type of text in the image. Valid values:
0: Non-table text
1: Text in a bordered table
2: Text in a borderless table
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Type of text in the image. Valid values:
0: Non-table text
1: Text in a bordered table
2: Text in a borderless table
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @param _type Type of text in the image. Valid values:
0: Non-table text
1: Text in a bordered table
2: Text in a borderless table
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The coordinates of the four vertices (upper-left, upper-right, lower-right, and lower-left) of the table body.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableCoordPoint The coordinates of the four vertices (upper-left, upper-right, lower-right, and lower-left) of the table body.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Coord> GetTableCoordPoint() const;

                    /**
                     * 设置The coordinates of the four vertices (upper-left, upper-right, lower-right, and lower-left) of the table body.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableCoordPoint The coordinates of the four vertices (upper-left, upper-right, lower-right, and lower-left) of the table body.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableCoordPoint(const std::vector<Coord>& _tableCoordPoint);

                    /**
                     * 判断参数 TableCoordPoint 是否已赋值
                     * @return TableCoordPoint 是否已赋值
                     * 
                     */
                    bool TableCoordPointHasBeenSet() const;

                private:

                    /**
                     * Cell content
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TableCellInfo> m_cells;
                    bool m_cellsHasBeenSet;

                    /**
                     * Type of text in the image. Valid values:
0: Non-table text
1: Text in a bordered table
2: Text in a borderless table
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The coordinates of the four vertices (upper-left, upper-right, lower-right, and lower-left) of the table body.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Coord> m_tableCoordPoint;
                    bool m_tableCoordPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TABLEINFO_H_
