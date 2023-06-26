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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TABLECELLINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TABLECELLINFO_H_

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
                * Cell data
                */
                class TableCellInfo : public AbstractModel
                {
                public:
                    TableCellInfo();
                    ~TableCellInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Column index of the upper-left corner of the cell
                     * @return ColTl Column index of the upper-left corner of the cell
                     * 
                     */
                    int64_t GetColTl() const;

                    /**
                     * 设置Column index of the upper-left corner of the cell
                     * @param _colTl Column index of the upper-left corner of the cell
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
                     * 获取Row index of the upper-left corner of the cell
                     * @return RowTl Row index of the upper-left corner of the cell
                     * 
                     */
                    int64_t GetRowTl() const;

                    /**
                     * 设置Row index of the upper-left corner of the cell
                     * @param _rowTl Row index of the upper-left corner of the cell
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
                     * 获取Column index of the lower-right corner of the cell
                     * @return ColBr Column index of the lower-right corner of the cell
                     * 
                     */
                    int64_t GetColBr() const;

                    /**
                     * 设置Column index of the lower-right corner of the cell
                     * @param _colBr Column index of the lower-right corner of the cell
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
                     * 获取Row index of the lower-right corner of the cell
                     * @return RowBr Row index of the lower-right corner of the cell
                     * 
                     */
                    int64_t GetRowBr() const;

                    /**
                     * 设置Row index of the lower-right corner of the cell
                     * @param _rowBr Row index of the lower-right corner of the cell
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
                     * 获取Recognized string text within the cell. If there are multiple lines, they are separated by "\n".
                     * @return Text Recognized string text within the cell. If there are multiple lines, they are separated by "\n".
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Recognized string text within the cell. If there are multiple lines, they are separated by "\n".
                     * @param _text Recognized string text within the cell. If there are multiple lines, they are separated by "\n".
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
                     * 获取Cell type
                     * @return Type Cell type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Cell type
                     * @param _type Cell type
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
                     * 获取Cell confidence
                     * @return Confidence Cell confidence
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Cell confidence
                     * @param _confidence Cell confidence
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取Four-point coordinates of the cell in the image
                     * @return Polygon Four-point coordinates of the cell in the image
                     * 
                     */
                    std::vector<Coord> GetPolygon() const;

                    /**
                     * 设置Four-point coordinates of the cell in the image
                     * @param _polygon Four-point coordinates of the cell in the image
                     * 
                     */
                    void SetPolygon(const std::vector<Coord>& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     * 
                     */
                    bool PolygonHasBeenSet() const;

                private:

                    /**
                     * Column index of the upper-left corner of the cell
                     */
                    int64_t m_colTl;
                    bool m_colTlHasBeenSet;

                    /**
                     * Row index of the upper-left corner of the cell
                     */
                    int64_t m_rowTl;
                    bool m_rowTlHasBeenSet;

                    /**
                     * Column index of the lower-right corner of the cell
                     */
                    int64_t m_colBr;
                    bool m_colBrHasBeenSet;

                    /**
                     * Row index of the lower-right corner of the cell
                     */
                    int64_t m_rowBr;
                    bool m_rowBrHasBeenSet;

                    /**
                     * Recognized string text within the cell. If there are multiple lines, they are separated by "\n".
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Cell type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Cell confidence
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Four-point coordinates of the cell in the image
                     */
                    std::vector<Coord> m_polygon;
                    bool m_polygonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TABLECELLINFO_H_
