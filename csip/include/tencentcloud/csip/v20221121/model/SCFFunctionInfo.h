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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCFFUNCTIONINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCFFUNCTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Streamlined SCF function info
                */
                class SCFFunctionInfo : public AbstractModel
                {
                public:
                    SCFFunctionInfo();
                    ~SCFFunctionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Function ID
Parameter format: such as lam-xxxxxxxx
                     * @return FunctionId Function ID
Parameter format: such as lam-xxxxxxxx
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置Function ID
Parameter format: such as lam-xxxxxxxx
                     * @param _functionId Function ID
Parameter format: such as lam-xxxxxxxx
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取Function name
                     * @return FunctionName Function name
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function name
                     * @param _functionName Function name
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Namespace
                     * @return Namespace Namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
                     * @param _namespace Namespace
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Function status
Enumeration value:
Active: available
Creating
Updating
CreateFailed: creation failed
Deleting: deleting.
                     * @return Status Function status
Enumeration value:
Active: available
Creating
Updating
CreateFailed: creation failed
Deleting: deleting.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Function status
Enumeration value:
Active: available
Creating
Updating
CreateFailed: creation failed
Deleting: deleting.
                     * @param _status Function status
Enumeration value:
Active: available
Creating
Updating
CreateFailed: creation failed
Deleting: deleting.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Function type
Enumeration value:
Event: Event function (the current API only returns this type)
                     * @return Type Function type
Enumeration value:
Event: Event function (the current API only returns this type)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Function type
Enumeration value:
Event: Event function (the current API only returns this type)
                     * @param _type Function type
Enumeration value:
Event: Event function (the current API only returns this type)
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Function ID
Parameter format: such as lam-xxxxxxxx
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Function status
Enumeration value:
Active: available
Creating
Updating
CreateFailed: creation failed
Deleting: deleting.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Function type
Enumeration value:
Event: Event function (the current API only returns this type)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCFFUNCTIONINFO_H_
