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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_APPROVETYPE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_APPROVETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Approval Category
                */
                class ApproveType : public AbstractModel
                {
                public:
                    ApproveType();
                    ~ApproveType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application Category Key
                     * @return Type Application Category Key
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Application Category Key
                     * @param _type Application Category Key
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
                     * 获取Type Name
                     * @return TypeName Type Name
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Type Name
                     * @param _typeName Type Name
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取Application Type Key
                     * @return Classification Application Type Key
                     * 
                     */
                    std::string GetClassification() const;

                    /**
                     * 设置Application Type Key
                     * @param _classification Application Type Key
                     * 
                     */
                    void SetClassification(const std::string& _classification);

                    /**
                     * 判断参数 Classification 是否已赋值
                     * @return Classification 是否已赋值
                     * 
                     */
                    bool ClassificationHasBeenSet() const;

                private:

                    /**
                     * Application Category Key
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Type Name
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * Application Type Key
                     */
                    std::string m_classification;
                    bool m_classificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_APPROVETYPE_H_
