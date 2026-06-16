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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_ROWCOLUMNCONFIG_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_ROWCOLUMNCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/RowColumnTagValue.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Row/column permission configuration
                */
                class RowColumnConfig : public AbstractModel
                {
                public:
                    RowColumnConfig();
                    ~RowColumnConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Row column permission rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RulerInfo Row column permission rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRulerInfo() const;

                    /**
                     * 设置Row column permission rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rulerInfo Row column permission rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRulerInfo(const std::string& _rulerInfo);

                    /**
                     * 判断参数 RulerInfo 是否已赋值
                     * @return RulerInfo 是否已赋值
                     * 
                     */
                    bool RulerInfoHasBeenSet() const;

                    /**
                     * 获取Tag value list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagValueList Tag value list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RowColumnTagValue> GetTagValueList() const;

                    /**
                     * 设置Tag value list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tagValueList Tag value list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagValueList(const std::vector<RowColumnTagValue>& _tagValueList);

                    /**
                     * 判断参数 TagValueList 是否已赋值
                     * @return TagValueList 是否已赋值
                     * 
                     */
                    bool TagValueListHasBeenSet() const;

                private:

                    /**
                     * Row column permission rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rulerInfo;
                    bool m_rulerInfoHasBeenSet;

                    /**
                     * Tag value list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RowColumnTagValue> m_tagValueList;
                    bool m_tagValueListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_ROWCOLUMNCONFIG_H_
