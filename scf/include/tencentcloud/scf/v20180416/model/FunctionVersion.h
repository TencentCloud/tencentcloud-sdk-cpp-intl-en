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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTIONVERSION_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTIONVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Function version information
                */
                class FunctionVersion : public AbstractModel
                {
                public:
                    FunctionVersion();
                    ~FunctionVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Function version name
                     * @return Version Function version name
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Function version name
                     * @param Version Function version name
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Version description
Note: This field may return null, indicating that no valid values is found.
                     * @return Description Version description
Note: This field may return null, indicating that no valid values is found.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Version description
Note: This field may return null, indicating that no valid values is found.
                     * @param Description Version description
Note: This field may return null, indicating that no valid values is found.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取The creation time
Note: This field may return null, indicating that no valid value was found.
                     * @return AddTime The creation time
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置The creation time
Note: This field may return null, indicating that no valid value was found.
                     * @param AddTime The creation time
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Update time
Note: This field may return null, indicating that no valid value was found.
                     * @return ModTime Update time
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid value was found.
                     * @param ModTime Update time
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取Version status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Status Version status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Version status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Status Version status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Function version name
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Version description
Note: This field may return null, indicating that no valid values is found.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The creation time
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * Version status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTIONVERSION_H_
