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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_EDITDETAIL_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_EDITDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 
                */
                class EditDetail : public AbstractModel
                {
                public:
                    EditDetail();
                    ~EditDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Modified Field Name
                     * @return FieldName Modified Field Name
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置Modified Field Name
                     * @param _fieldName Modified Field Name
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取Value of the field before modification, the original OCR result
                     * @return OriginalFieldValue Value of the field before modification, the original OCR result
                     * 
                     */
                    std::string GetOriginalFieldValue() const;

                    /**
                     * 设置Value of the field before modification, the original OCR result
                     * @param _originalFieldValue Value of the field before modification, the original OCR result
                     * 
                     */
                    void SetOriginalFieldValue(const std::string& _originalFieldValue);

                    /**
                     * 判断参数 OriginalFieldValue 是否已赋值
                     * @return OriginalFieldValue 是否已赋值
                     * 
                     */
                    bool OriginalFieldValueHasBeenSet() const;

                    /**
                     * 获取Value of the field after modification,the user's manually entered result
                     * @return RevisedFieldValue Value of the field after modification,the user's manually entered result
                     * 
                     */
                    std::string GetRevisedFieldValue() const;

                    /**
                     * 设置Value of the field after modification,the user's manually entered result
                     * @param _revisedFieldValue Value of the field after modification,the user's manually entered result
                     * 
                     */
                    void SetRevisedFieldValue(const std::string& _revisedFieldValue);

                    /**
                     * 判断参数 RevisedFieldValue 是否已赋值
                     * @return RevisedFieldValue 是否已赋值
                     * 
                     */
                    bool RevisedFieldValueHasBeenSet() const;

                private:

                    /**
                     * Modified Field Name
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * Value of the field before modification, the original OCR result
                     */
                    std::string m_originalFieldValue;
                    bool m_originalFieldValueHasBeenSet;

                    /**
                     * Value of the field after modification,the user's manually entered result
                     */
                    std::string m_revisedFieldValue;
                    bool m_revisedFieldValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_EDITDETAIL_H_
