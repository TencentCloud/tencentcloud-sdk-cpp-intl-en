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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTTABLE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTTABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * Form recognition result.
                */
                class TextTable : public AbstractModel
                {
                public:
                    TextTable();
                    ~TextTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Column index of the top-left corner of the cell.
                     * @return ColTl Column index of the top-left corner of the cell.
                     * 
                     */
                    int64_t GetColTl() const;

                    /**
                     * 设置Column index of the top-left corner of the cell.
                     * @param _colTl Column index of the top-left corner of the cell.
                     * 
                     */
                    void SetColTl(const int64_t& _colTl);

                    /**
                     * 判断参数 ColTl 是否已赋值
                     * @return ColTl 是否已赋值
                     * 
                     */
                    bool ColTlHasBeenSet() const;

                    /**
                     * 获取Row index of the top-left corner of the cell.
                     * @return RowTl Row index of the top-left corner of the cell.
                     * 
                     */
                    int64_t GetRowTl() const;

                    /**
                     * 设置Row index of the top-left corner of the cell.
                     * @param _rowTl Row index of the top-left corner of the cell.
                     * 
                     */
                    void SetRowTl(const int64_t& _rowTl);

                    /**
                     * 判断参数 RowTl 是否已赋值
                     * @return RowTl 是否已赋值
                     * 
                     */
                    bool RowTlHasBeenSet() const;

                    /**
                     * 获取Column index of the bottom-right corner of the cell.
                     * @return ColBr Column index of the bottom-right corner of the cell.
                     * 
                     */
                    int64_t GetColBr() const;

                    /**
                     * 设置Column index of the bottom-right corner of the cell.
                     * @param _colBr Column index of the bottom-right corner of the cell.
                     * 
                     */
                    void SetColBr(const int64_t& _colBr);

                    /**
                     * 判断参数 ColBr 是否已赋值
                     * @return ColBr 是否已赋值
                     * 
                     */
                    bool ColBrHasBeenSet() const;

                    /**
                     * 获取Row index of the bottom-right corner of the cell.
                     * @return RowBr Row index of the bottom-right corner of the cell.
                     * 
                     */
                    int64_t GetRowBr() const;

                    /**
                     * 设置Row index of the bottom-right corner of the cell.
                     * @param _rowBr Row index of the bottom-right corner of the cell.
                     * 
                     */
                    void SetRowBr(const int64_t& _rowBr);

                    /**
                     * 判断参数 RowBr 是否已赋值
                     * @return RowBr 是否已赋值
                     * 
                     */
                    bool RowBrHasBeenSet() const;

                    /**
                     * 获取Cell text
                     * @return Text Cell text
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Cell text
                     * @param _text Cell text
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取Cell type. Valid values: body, header, footer
                     * @return Type Cell type. Valid values: body, header, footer
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Cell type. Valid values: body, header, footer
                     * @param _type Cell type. Valid values: body, header, footer
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Confidence. Value range: 0–100
                     * @return Confidence Confidence. Value range: 0–100
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置Confidence. Value range: 0–100
                     * @param _confidence Confidence. Value range: 0–100
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取Text line coordinates, which are represented as 4 vertex coordinates.
                     * @return Polygon Text line coordinates, which are represented as 4 vertex coordinates.
                     * 
                     */
                    std::vector<Coord> GetPolygon() const;

                    /**
                     * 设置Text line coordinates, which are represented as 4 vertex coordinates.
                     * @param _polygon Text line coordinates, which are represented as 4 vertex coordinates.
                     * 
                     */
                    void SetPolygon(const std::vector<Coord>& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     * 
                     */
                    bool PolygonHasBeenSet() const;

                    /**
                     * 获取Extended field
                     * @return AdvancedInfo Extended field
                     * 
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 设置Extended field
                     * @param _advancedInfo Extended field
                     * 
                     */
                    void SetAdvancedInfo(const std::string& _advancedInfo);

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     * 
                     */
                    bool AdvancedInfoHasBeenSet() const;

                private:

                    /**
                     * Column index of the top-left corner of the cell.
                     */
                    int64_t m_colTl;
                    bool m_colTlHasBeenSet;

                    /**
                     * Row index of the top-left corner of the cell.
                     */
                    int64_t m_rowTl;
                    bool m_rowTlHasBeenSet;

                    /**
                     * Column index of the bottom-right corner of the cell.
                     */
                    int64_t m_colBr;
                    bool m_colBrHasBeenSet;

                    /**
                     * Row index of the bottom-right corner of the cell.
                     */
                    int64_t m_rowBr;
                    bool m_rowBrHasBeenSet;

                    /**
                     * Cell text
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Cell type. Valid values: body, header, footer
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Confidence. Value range: 0–100
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Text line coordinates, which are represented as 4 vertex coordinates.
                     */
                    std::vector<Coord> m_polygon;
                    bool m_polygonHasBeenSet;

                    /**
                     * Extended field
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTTABLE_H_
