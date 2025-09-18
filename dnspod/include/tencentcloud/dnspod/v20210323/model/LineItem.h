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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/LineItem.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * Describes the line information of dns records.
                */
                class LineItem : public AbstractModel
                {
                public:
                    LineItem();
                    ~LineItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parses the line name.
                     * @return LineName Parses the line name.
                     * 
                     */
                    std::string GetLineName() const;

                    /**
                     * 设置Parses the line name.
                     * @param _lineName Parses the line name.
                     * 
                     */
                    void SetLineName(const std::string& _lineName);

                    /**
                     * 判断参数 LineName 是否已赋值
                     * @return LineName 是否已赋值
                     * 
                     */
                    bool LineNameHasBeenSet() const;

                    /**
                     * 获取Resolution route ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LineId Resolution route ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLineId() const;

                    /**
                     * 设置Resolution route ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lineId Resolution route ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLineId(const std::string& _lineId);

                    /**
                     * 判断参数 LineId 是否已赋值
                     * @return LineId 是否已赋值
                     * 
                     */
                    bool LineIdHasBeenSet() const;

                    /**
                     * 获取Indicates whether the current line is available under the current domain.
                     * @return Useful Indicates whether the current line is available under the current domain.
                     * 
                     */
                    bool GetUseful() const;

                    /**
                     * 设置Indicates whether the current line is available under the current domain.
                     * @param _useful Indicates whether the current line is available under the current domain.
                     * 
                     */
                    void SetUseful(const bool& _useful);

                    /**
                     * 判断参数 Useful 是否已赋值
                     * @return Useful 是否已赋值
                     * 
                     */
                    bool UsefulHasBeenSet() const;

                    /**
                     * 获取Current line min plan level requirement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Grade Current line min plan level requirement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置Current line min plan level requirement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _grade Current line min plan level requirement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     * 
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取Describes the sub-line list under the current line category.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubGroup Describes the sub-line list under the current line category.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LineItem> GetSubGroup() const;

                    /**
                     * 设置Describes the sub-line list under the current line category.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subGroup Describes the sub-line list under the current line category.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubGroup(const std::vector<LineItem>& _subGroup);

                    /**
                     * 判断参数 SubGroup 是否已赋值
                     * @return SubGroup 是否已赋值
                     * 
                     */
                    bool SubGroupHasBeenSet() const;

                    /**
                     * 获取Specifies the lines included in the custom line grouping.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Lines Specifies the lines included in the custom line grouping.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetLines() const;

                    /**
                     * 设置Specifies the lines included in the custom line grouping.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lines Specifies the lines included in the custom line grouping.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLines(const std::vector<std::string>& _lines);

                    /**
                     * 判断参数 Lines 是否已赋值
                     * @return Lines 是否已赋值
                     * 
                     */
                    bool LinesHasBeenSet() const;

                private:

                    /**
                     * Parses the line name.
                     */
                    std::string m_lineName;
                    bool m_lineNameHasBeenSet;

                    /**
                     * Resolution route ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lineId;
                    bool m_lineIdHasBeenSet;

                    /**
                     * Indicates whether the current line is available under the current domain.
                     */
                    bool m_useful;
                    bool m_usefulHasBeenSet;

                    /**
                     * Current line min plan level requirement.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * Describes the sub-line list under the current line category.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LineItem> m_subGroup;
                    bool m_subGroupHasBeenSet;

                    /**
                     * Specifies the lines included in the custom line grouping.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_lines;
                    bool m_linesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEITEM_H_
