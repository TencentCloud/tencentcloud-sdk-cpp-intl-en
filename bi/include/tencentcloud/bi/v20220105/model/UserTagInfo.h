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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERTAGINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERTAGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * User tag info
                */
                class UserTagInfo : public AbstractModel
                {
                public:
                    UserTagInfo();
                    ~UserTagInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取tag ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id tag ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置tag ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id tag ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Tag name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Tag name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Tag name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Tag name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Tag value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Value Tag value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Tag value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _value Tag value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Managed or not
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsExternalManage Managed or not
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsExternalManage() const;

                    /**
                     * 设置Managed or not
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isExternalManage Managed or not
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsExternalManage(const bool& _isExternalManage);

                    /**
                     * 判断参数 IsExternalManage 是否已赋值
                     * @return IsExternalManage 是否已赋值
                     * 
                     */
                    bool IsExternalManageHasBeenSet() const;

                    /**
                     * 获取Tag hosting platform
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ManagePlatform Tag hosting platform
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetManagePlatform() const;

                    /**
                     * 设置Tag hosting platform
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _managePlatform Tag hosting platform
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetManagePlatform(const std::string& _managePlatform);

                    /**
                     * 判断参数 ManagePlatform 是否已赋值
                     * @return ManagePlatform 是否已赋值
                     * 
                     */
                    bool ManagePlatformHasBeenSet() const;

                    /**
                     * 获取Import type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImportType Import type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImportType() const;

                    /**
                     * 设置Import type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _importType Import type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImportType(const std::string& _importType);

                    /**
                     * 判断参数 ImportType 是否已赋值
                     * @return ImportType 是否已赋值
                     * 
                     */
                    bool ImportTypeHasBeenSet() const;

                private:

                    /**
                     * tag ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Tag name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Tag value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Managed or not
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isExternalManage;
                    bool m_isExternalManageHasBeenSet;

                    /**
                     * Tag hosting platform
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_managePlatform;
                    bool m_managePlatformHasBeenSet;

                    /**
                     * Import type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_importType;
                    bool m_importTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERTAGINFO_H_
