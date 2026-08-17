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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CONTAINERDIAGNOSERESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CONTAINERDIAGNOSERESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Container format diagnostic result.
                */
                class ContainerDiagnoseResultItem : public AbstractModel
                {
                public:
                    ContainerDiagnoseResultItem();
                    ~ContainerDiagnoseResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Category 
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置
                     * @param _category 
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取
                     * @return Type 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param _type 
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
                     * 获取
                     * @return SeverityLevel 
                     * 
                     */
                    std::string GetSeverityLevel() const;

                    /**
                     * 设置
                     * @param _severityLevel 
                     * 
                     */
                    void SetSeverityLevel(const std::string& _severityLevel);

                    /**
                     * 判断参数 SeverityLevel 是否已赋值
                     * @return SeverityLevel 是否已赋值
                     * 
                     */
                    bool SeverityLevelHasBeenSet() const;

                    /**
                     * 获取
                     * @return DateTimeSet 
                     * 
                     */
                    std::vector<std::string> GetDateTimeSet() const;

                    /**
                     * 设置
                     * @param _dateTimeSet 
                     * 
                     */
                    void SetDateTimeSet(const std::vector<std::string>& _dateTimeSet);

                    /**
                     * 判断参数 DateTimeSet 是否已赋值
                     * @return DateTimeSet 是否已赋值
                     * 
                     */
                    bool DateTimeSetHasBeenSet() const;

                    /**
                     * 获取
                     * @return TimestampSet 
                     * 
                     */
                    std::vector<double> GetTimestampSet() const;

                    /**
                     * 设置
                     * @param _timestampSet 
                     * 
                     */
                    void SetTimestampSet(const std::vector<double>& _timestampSet);

                    /**
                     * 判断参数 TimestampSet 是否已赋值
                     * @return TimestampSet 是否已赋值
                     * 
                     */
                    bool TimestampSetHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_severityLevel;
                    bool m_severityLevelHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_dateTimeSet;
                    bool m_dateTimeSetHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<double> m_timestampSet;
                    bool m_timestampSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CONTAINERDIAGNOSERESULTITEM_H_
