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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/ObjectTypeConfig.h>
#include <tencentcloud/cfg/v20210820/model/ObjectTypeJsonParse.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Object type
                */
                class ObjectType : public AbstractModel
                {
                public:
                    ObjectType();
                    ~ObjectType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Object type ID
                     * @return ObjectTypeId Object type ID
                     * 
                     */
                    int64_t GetObjectTypeId() const;

                    /**
                     * 设置Object type ID
                     * @param _objectTypeId Object type ID
                     * 
                     */
                    void SetObjectTypeId(const int64_t& _objectTypeId);

                    /**
                     * 判断参数 ObjectTypeId 是否已赋值
                     * @return ObjectTypeId 是否已赋值
                     * 
                     */
                    bool ObjectTypeIdHasBeenSet() const;

                    /**
                     * 获取Object type name
                     * @return ObjectTypeTitle Object type name
                     * 
                     */
                    std::string GetObjectTypeTitle() const;

                    /**
                     * 设置Object type name
                     * @param _objectTypeTitle Object type name
                     * 
                     */
                    void SetObjectTypeTitle(const std::string& _objectTypeTitle);

                    /**
                     * 判断参数 ObjectTypeTitle 是否已赋值
                     * @return ObjectTypeTitle 是否已赋值
                     * 
                     */
                    bool ObjectTypeTitleHasBeenSet() const;

                    /**
                     * 获取Level-1 object type
                     * @return ObjectTypeLevelOne Level-1 object type
                     * 
                     */
                    std::string GetObjectTypeLevelOne() const;

                    /**
                     * 设置Level-1 object type
                     * @param _objectTypeLevelOne Level-1 object type
                     * 
                     */
                    void SetObjectTypeLevelOne(const std::string& _objectTypeLevelOne);

                    /**
                     * 判断参数 ObjectTypeLevelOne 是否已赋值
                     * @return ObjectTypeLevelOne 是否已赋值
                     * 
                     */
                    bool ObjectTypeLevelOneHasBeenSet() const;

                    /**
                     * 获取Object type parameters
                     * @return ObjectTypeParams Object type parameters
                     * 
                     */
                    ObjectTypeConfig GetObjectTypeParams() const;

                    /**
                     * 设置Object type parameters
                     * @param _objectTypeParams Object type parameters
                     * 
                     */
                    void SetObjectTypeParams(const ObjectTypeConfig& _objectTypeParams);

                    /**
                     * 判断参数 ObjectTypeParams 是否已赋值
                     * @return ObjectTypeParams 是否已赋值
                     * 
                     */
                    bool ObjectTypeParamsHasBeenSet() const;

                    /**
                     * 获取JSON parsing rule for TKE APIs. If the value is null, no parsing is needed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ObjectTypeJsonParse JSON parsing rule for TKE APIs. If the value is null, no parsing is needed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ObjectTypeJsonParse GetObjectTypeJsonParse() const;

                    /**
                     * 设置JSON parsing rule for TKE APIs. If the value is null, no parsing is needed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _objectTypeJsonParse JSON parsing rule for TKE APIs. If the value is null, no parsing is needed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetObjectTypeJsonParse(const ObjectTypeJsonParse& _objectTypeJsonParse);

                    /**
                     * 判断参数 ObjectTypeJsonParse 是否已赋值
                     * @return ObjectTypeJsonParse 是否已赋值
                     * 
                     */
                    bool ObjectTypeJsonParseHasBeenSet() const;

                    /**
                     * 获取Whether new action is included
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ObjectHasNewAction Whether new action is included
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetObjectHasNewAction() const;

                    /**
                     * 设置Whether new action is included
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _objectHasNewAction Whether new action is included
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetObjectHasNewAction(const bool& _objectHasNewAction);

                    /**
                     * 判断参数 ObjectHasNewAction 是否已赋值
                     * @return ObjectHasNewAction 是否已赋值
                     * 
                     */
                    bool ObjectHasNewActionHasBeenSet() const;

                private:

                    /**
                     * Object type ID
                     */
                    int64_t m_objectTypeId;
                    bool m_objectTypeIdHasBeenSet;

                    /**
                     * Object type name
                     */
                    std::string m_objectTypeTitle;
                    bool m_objectTypeTitleHasBeenSet;

                    /**
                     * Level-1 object type
                     */
                    std::string m_objectTypeLevelOne;
                    bool m_objectTypeLevelOneHasBeenSet;

                    /**
                     * Object type parameters
                     */
                    ObjectTypeConfig m_objectTypeParams;
                    bool m_objectTypeParamsHasBeenSet;

                    /**
                     * JSON parsing rule for TKE APIs. If the value is null, no parsing is needed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ObjectTypeJsonParse m_objectTypeJsonParse;
                    bool m_objectTypeJsonParseHasBeenSet;

                    /**
                     * Whether new action is included
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_objectHasNewAction;
                    bool m_objectHasNewActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPE_H_
